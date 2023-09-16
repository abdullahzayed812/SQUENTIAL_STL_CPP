#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<string> &s);

void printStack(stack<string> &s) {
  cout << "Print stack items: ";
  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
}

int main() {
  // empty, size, top, pop, push.
  // Last in first out.
  stack<string> s;
  s.push("Zayed");     // s: Zayed
  s.push("Ibrahem");   // s: Zayed, Ibrahem
  s.push("Abdullah");  // s: Zayed, Ibrahem, Abdullah

  printStack(s);  // Abdullah, Ibrahem, Zayed

  return 0;
}