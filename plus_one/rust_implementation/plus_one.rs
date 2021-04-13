fn plus_one(digits: Vec<i32>) -> Vec<i32> {

    let mut solution = digits.clone();
    let mut idx = digits.len() - 1;
    while idx >= 0 {

        if solution[idx] != 9 {
            solution[idx] += 1;
            break;
        }

        solution[idx] = 0;

        // special case all 9 i.e. [9,9,9,9]
        if idx as i32 - 1 < 0 {
            // insert 1 at beggining of vector
            solution.insert(0, 1);
            break;
        }

        idx -= 1;
    }

    solution
}

fn tests() {
    let mut test1 = vec![9,9,9,9];
    let mut test2 = vec![0];
    let mut test3 = vec![1,2,3];
    let mut tests = vec![test1,test2,test3];

    for test in tests.iter() {
        println!("Test: {:?}", test.to_vec());
        let solution = plus_one(test.to_vec());
        println!("Solution: {:?}", solution);
    }
}

fn main() {
    tests();
}
