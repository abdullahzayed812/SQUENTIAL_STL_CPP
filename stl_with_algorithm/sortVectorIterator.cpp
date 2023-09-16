#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
  auto a = v[0];
  cout << "Vector items: ";
  for (auto x : v) {
    cout << x << " ";
  }
  cout << "\n";
}

int main() {
  vector<int> v(5);

  for (int i = 0; i < v.size(); i++) {
    v[i] = 10 - i;
  }

  v.push_back(8);
  v.push_back(12);
  v.push_back(4);
  v.push_back(6);

  print(v);  // 10 9 8 7 6 8 12 4 6

  // sort by iterators => from begin to end.
  sort(v.begin(), v.end());

  print(v);  // 4 6 6 7 8 8 9 10 12

  // from end to begin.
  sort(v.rbegin(), v.rend());

  print(v);  // 12 10 9 8 8 7 6 6 4
}