#include <iostream>
#include <list>

using namespace std;

void print(const list<int>& l) {
  list<int>::const_iterator it = l.begin();

  cout << "List item is: ";
  for (; it != l.end(); it++) {
    cout << *it << " ";
  }
  cout << "\n";
}

int main() {
  // list<int> l;
  // l.push_back(20);
  // l.push_back(30);
  // l.push_back(20);
  // l.push_back(40);
  // l.push_back(50);
  // l.push_front(10);
  // print(l);

  // l.sort();
  // l.unique();
  // print(l);

  // list<int>::iterator pos = l.begin();
  // advance(pos, 2);
  // l.erase(pos);
  // print(l);

  list<int> l1 = {1, 2, 3};
  list<int> l2 = {4, 5};
  list<int> l3 = {6, 7, 8};

  // l1.splice(l1.end(), l2);
  // print(l1);

  // list<int>::iterator it = l2.begin();
  // l1.splice(l1.end(), l2, it);
  // print(l1);

  list<int>::iterator startIt = l2.begin();
  list<int>::iterator endIt = l2.begin();
  advance(endIt, 1);
  l1.splice(l1.end(), l2, startIt, endIt);
  print(l1);

  return 0;
}