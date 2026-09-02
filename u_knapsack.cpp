// knapsack
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

struct Item {
  int64_t w, v;
};

int64_t knapsack(int64_t W, int64_t idx,
                 const vector<Item> &items) {
  if (W == 0) {
    return 0;
  }

  if (W < 0) {
    return numeric_limits<int64_t>::min() / 4;
  }

  if (idx == static_cast<int64_t>(items.size())) {
    return 0;
  }

  return max(items[idx].v +
               knapsack(W - items[idx].w, idx + 1, items),
             knapsack(W, idx + 1, items));
}

int main() {
  int64_t N, W;
  cin >> N >> W;

  vector<Item> items(N);
  for (Item &item : items) {
    cin >> item.w >> item.v;
  }

  cout << knapsack(W, 0, items) << endl;

  return 0;
}
