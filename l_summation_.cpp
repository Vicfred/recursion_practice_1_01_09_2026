// Given a number N and an array A of N numbers.
// Print the summation of the array elements.
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t summation(const vector<int64_t> &A, int64_t idx) {
  if (idx == static_cast<int64_t>(A.size()) - 1) {
    return A[idx];
  }

  return A[idx] + summation(A, idx + 1);
}

int main() {
  int64_t N;
  cin >> N;

  vector<int64_t> A(N);

  for (int64_t &a : A) {
    cin >> a;
  }

  cout << summation(A, 0) << endl;

  return 0;
}
