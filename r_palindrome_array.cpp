// Given a number N and an array A of N numbers.
// Determine if it's palindrome or not.
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

bool palindrome(int64_t i, int64_t j, const vector<int64_t> &A) {
  if (i >= j) {
    return true;
  }

  if (A[i] == A[j]) {
    return palindrome(i + 1, j - 1, A);
  }

  return false;
  
}

int main() {
  int64_t N;
  cin >> N;

  vector<int64_t> A(N);
  for (int64_t &a : A) {
    cin >> a;
  }

  if (palindrome(0, N - 1, A)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
