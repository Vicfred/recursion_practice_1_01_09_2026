// Given a number N and an array A of N numbers.
// Print the summation of the array elements.
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t summation(const vector<int64_t> &A) {
  if (A.empty()) {
    return 0;
  }

  vector<int64_t> tail(A.begin() + 1, A.end());

  return A[0] + summation(tail);
}

int main() {
  int64_t N;
  cin >> N;

  vector<int64_t> A(N);

  for (int64_t &a : A) {
    cin >> a;
  }

  cout << summation(A) << endl;

  return 0;
}
