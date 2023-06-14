#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) {
  int left = 0, right = (int)s.size() - 1;
  
  while (right > left) {
    swap(s[right], s[left]);
    right -= 1;
    left += 1;
  }
}

int main() {
  vector<char> s = {'h', 'e', 'l', 'l', 'o'};
  reverseString(s);
  return 0;
}