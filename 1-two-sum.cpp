#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int, int> hashMap;
  vector<int> res;
  int valueToBeFound = 0;
  
  for (int i = 0; i < nums.size(); i++) {
    valueToBeFound = target - nums[i];
    if (hashMap.find(valueToBeFound) != hashMap.end()) {
      res = { hashMap[valueToBeFound], i };
    }
    hashMap[nums[i]] = i;
  }
  
  return res;
}

int main() {
  vector<int> arr = {2, 7, 11, 15};
  vector<int> result = twoSum(arr, 9);
  cout << result[0] << ", " << result[1] << endl;
  return 0;
}