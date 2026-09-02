// Given a number N and an array A of N numbers.
// Calculate the average of these numbers.
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

long double average(const vector<int64_t> &A, int64_t n) {
  if (n == 1) {
    return A[0];
  }

  return ((n - 1) * average(A, n - 1) + A[n - 1]) /
         static_cast<long double>(n);
}

int main() {
  int64_t N;
  cin >> N;

  vector<int64_t> A(N);
  for (int64_t &a : A) {
    cin >> a;
  }

  cout << average(A, N) << endl;

  return 0;
}
