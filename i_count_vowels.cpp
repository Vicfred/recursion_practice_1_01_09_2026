// Given a string S. Print number of vowels in the string.
#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

int64_t vowels(int64_t idx, const string &S) {
  if (idx == static_cast<int64_t>(S.size())) {
    return 0;
  }

  char ch = tolower(S[idx]);

  int vowel = 0;

  if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' ||
      ch == 'o') {
    vowel = 1;
  }

  return vowel + vowels(idx + 1, S);
}

int main() {
  string S;
  getline(cin, S);

  cout << vowels(0, S) << endl;
  return 0;
}
