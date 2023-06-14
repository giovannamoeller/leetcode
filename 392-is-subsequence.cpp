#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(string s, string t) {
  if (s.length() > t.length()) {
    return false;
  }

  int i = 0, j = 0;

  while (i < s.length() and j < t.length()) {
    if (s[i] == t[j]) { i += 1; }
    j += 1;
  }
  
  return i == s.length();
}

int main() {
  string s = "abc", t = "ahbgdc";
  cout << isSubsequence(s, t) << endl;
  return 0;
}
