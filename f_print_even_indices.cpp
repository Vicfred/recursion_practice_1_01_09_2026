// Given a number N and an array A of N numbers.
// Print the numbers in even indices in a reversed order.
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

void print_even(int64_t idx, const vector<int64_t> &A) {
  if (idx >= static_cast<int64_t>(A.size())) {
    return;
  }

  print_even(idx + 2, A);

  cout << A[idx] << " ";
}

int main() {
  int64_t N;
  cin >> N;

  vector<int64_t> A(N);
  for (int64_t &a : A) {
    cin >> a;
  }

  print_even(0, A);
  cout << endl;

  return 0;
}
