#include <iostream>
#include <stack>

using namespace std;

void printPairStack(stack<pair<int, string>> pairStack) {
  cout << "Print stack of pairs first items: ";
  // cout << "Print stack of pairs second items: ";
  while (!pairStack.empty()) {
    cout << pairStack.top().first << " ";
    // cout << pairStack.top().second << " ";
    pairStack.pop();
  }
  cout << "\n";
}

int main() {
  // Pair is a struct to contain to values
  pair<int, string> p = make_pair(10, "Abdullah");
  cout << "First item in pair: " << p.first;
  cout << "\n";
  cout << "Second item in pair: " << p.second;
  cout << "\n";

  stack<pair<int, string>> pairStack;
  pairStack.push(p);
  pairStack.push(make_pair(20, "Hamza"));

  printPairStack(pairStack);

  pair<int, pair<int, string>> myPair =
      make_pair(100, make_pair(200, "Second pair, second item"));

  // myPair = make_pair(500, p);

  cout << "First pair item: " << myPair.first;
  cout << "\n";
  cout << "Second pair item: " << myPair.second.second << "\n";

  return 0;
}