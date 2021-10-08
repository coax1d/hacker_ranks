// #include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

// binary search iteratively
// return idx of element
int binarySearch(vector<int>& arr, int element) {

  // array [1, 2, 3] size = 3 mid = 1
  // array [1, 2, 3, 4] size = 4 mid = 2
  int result = -1;
  auto mid = arr.size() / 2;
  auto start = 0;
  auto end = arr.size() - 1;

  while (start <= end) {
    if (element < arr[mid]) {
      end = mid;
	  mid = (end - start) / 2;
    }
    else if (element > arr[mid]) {
      start = mid;
	  mid = ((start + end) / 2) + 1;
    }
    else {
      result = mid;
	  break;
    }
  }
  return result;
}

int main(void) {
  vector<int> test1 = {1,2,3};
  auto result1 = binarySearch(test1, 2);

  vector<int> test2 = {1,2,3,4,4,5,5,7,8};
  auto result2 = binarySearch(test2, 5);

  cout << "result1:: " << result1 << " result2:: " << result2 << endl;
}
