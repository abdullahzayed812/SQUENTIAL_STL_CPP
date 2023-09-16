#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> mySet;
  set<int>::iterator it;

  mySet.insert(10);
  mySet.insert(30);
  mySet.insert(20);
  mySet.insert(40);
  mySet.insert(40);

  // for (it = mySet.begin(); it != mySet.end(); it++) {
  //   cout << *it << " ";
  // }

  return 0;
}