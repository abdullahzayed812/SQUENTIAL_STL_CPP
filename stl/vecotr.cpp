#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v1);
void printVectorWithIterator(vector<int> &v2);

void printVector(vector<int> v1) {
  for (int i = 0; i < (int)v1.size(); i++) {
    cout << v1[i] << " ";
  }
  cout << "\n";
}

void printVectorWithIterator(vector<int> &v2) {
  vector<int>::iterator it;
  it = v2.begin();

  while (it != v2.end()) {
    cout << *it << " ";
    it++;
  }
  cout << "\n";
}

int main() {
  // Array that can be expanded.
  vector<int> v1;
  v1.push_back(10);  // v1: 10
  v1.push_back(20);  // v1: 10, 20
  v1.push_back(30);  // v1: 10, 20, 30

  printVector(v1);

  vector<int> v2(5, 7);  // v2: 7, 7, 7, 7, 7
  v2.push_back(13);      // v2: 7, 7, 7, 7,, 7 13

  printVectorWithIterator(v2);

  v2.erase(v2.begin() + 3);
  v2.insert(v2.begin() + 1, 10);

  printVectorWithIterator(v2);

  vector<int> v(5);

  for (int i = 0; i < v.size(); i++) {
    v.at(i) = 10 - i;
  }

  vector<int>::iterator it = v.begin();

  // reverse_end => first item in vector.
  cout << *(v.rend() - 1) << "\n";

  // pre first item in vector garbage.
  cout << *(v.rend() - 1) << "\n";

  // reverse_begin last item in vector.
  cout << *v.rbegin() << "\n";

  // const iterator points to the beginning.
  cout << *v.cbegin() << "\n";

  // const iterator points to the end.
  cout << *(v.cend() - 1) << "\n";

  // const iterator points to the reverse beginning.
  cout << *v.crbegin() << "\n";

  // const iterator points to the reverse end.
  cout << *(v.crend() - 1) << "\n";

  return 0;
}