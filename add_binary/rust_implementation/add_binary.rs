// author: Andrew Burger

// LeetCode problem:
// O(n) Solution for adding binary numbers fun one liner in Rust!!
// Trying to test the limits of the rust lang!

pub fn add_binary(a: String, b: String) -> String {
    format!("{:b}", u128::from_str_radix(&a,2).unwrap() + u128::from_str_radix(&b,2).unwrap()).to_string()
}

fn tests() {
    let test_input1 = "1010"; // 10
    let test_input2 = "1011"; // 11

    let solution = add_binary(test_input1.to_string(), test_input2.to_string());
    println!("Adding {} + {} == {}", test_input1, test_input2, solution);
}

fn main() {
    tests();
}