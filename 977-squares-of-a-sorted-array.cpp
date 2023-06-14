#include <iostream>
#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
  int l = 0, r = (int)nums.size() - 1, k = r;
  vector<int> sortedArr(r + 1);
  
  while (r > l) {
    if (nums[l] * nums[l] > nums[r] * nums[r]) {
      sortedArr[k] = nums[l] * nums[l];
      l += 1;
    } else {
      sortedArr[k] = nums[r] * nums[r];
      r -= 1;
    }
    k -= 1;
  }
  
  return sortedArr;
}

int main() {
  vector<int> nums = {-4, -1, 0, 3, 10};
  
  vector<int> result = sortedSquares(nums);
  
  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;
  
  return 0;
}