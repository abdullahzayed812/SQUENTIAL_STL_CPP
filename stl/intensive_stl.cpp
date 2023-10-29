#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::greater;
using std::string;
using std::swap;
using std::vector;

#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)(v).size())

typedef vector<int> vi;

void vectorBasicTests();
void printVec(vi v, string prefix);

void printVec(vi v, string prefix) {
  vi::iterator it = v.begin();

  cout << prefix;
  for (it; it != v.end(); it++) {
    cout << *it << " ";
  }
  cout << "\n";
}

void vectorBasicTests() {
  vi v(10);      // Initialize 10 elements with zero.
  vi v1(10, 7);  // Initialize 10 elements with 7.

  // What about vector from array.
  const int length = 6;
  int array[length] = {5, 2, 7, 2, 0, 2};
  vi v2(array, array + length);

  printVec(v2, "v2: ");

  cout << "Front: " << v2.front() << " last element: " << v2.back() << "\n";

  // Front and back functions used by reference.
  swap(v2.front(), v2.back());
  printVec(v2, "Swapped to: ");

  // Vector from vector
  vi v3(v1.begin(), v1.end());

  // resize array from 10 to 15 - if you know size, better use it.
  v.resize(10);
  //  What happens if we add element after resize array, it will add one element
  //  and increase size of array.

  // What about iterating on vector, Either as in array or using iterators.
  cout << "Iterate on vector like array: ";
  // Watch out: v2.size() return unsigned. Return v2.size() -1 may
  // cause problems, cast it to int.
  for (int i = 0; i < (int)v2.size(); i++) {
    cout << v2[i] << " ";
  }
  cout << "\n";

  // Another way.
  vi::iterator it = v2.begin();
  while (it != v2.end()) {
    cout << *it << " ";
    it++;
  }
  cout << "\n";

  // Sorting the vector.
  sort(v2.begin(), v2.end());
  printVec(v2, "Sorted: ");

  // What about sorting except first and second elements
  sort(v2.begin() + 2, v2.end());
  printVec(v2, "Scape 2 elements and sort others: ");

  // Sort decreasing.
  sort(v2.begin(), v2.end(), greater<int>());  // let grater first.
  // sort(v2.rbegin(), v2.rend());
  printVec(v2, "Sort reversed: ");

  // Creating 2d vector of boolean.
  vector<vector<bool>> vbs(10, vector<bool>(20, true));
  // Creating array 10 * 20 filled with trues.

  // Removing from vector.
  v2.erase(v2.begin() + 2);
  printVec(v2, "Removing 2th element: ");  // O(n)

  // Inserting into vector.
  v2.insert(v2.begin() + 3, 14);
  printVec(v2, "Insert 14 in 4th position: ");  // O(n)

  v2.push_back(20);  // O(1)
  printVec(v2, "Push back 20: ");

  // Check if element in array.
  if (find(all(v2), 7) != v2.end()) {
    cout << "7 in v2\n";
  }

  if (find(all(v2), 9) == v2.end()) {
    cout << "9 not in v2\n";
  }
}

int main() { vectorBasicTests(); }
