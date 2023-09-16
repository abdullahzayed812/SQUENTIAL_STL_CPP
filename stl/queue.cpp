#include <iostream>
#include <queue>

using namespace std;

void printQ(queue<int> &q);
void printDeQFront(deque<int> &deQ);
void printDeQBack(deque<int> deQ);
void printPQ(priority_queue<int> pq);

void printDeQFront(deque<int> &deQ) {
  cout << "Print deque from front: ";
  while (!deQ.empty()) {
    cout << deQ.front() << " ";
    deQ.pop_front();
  }
  cout << "\n";
}

void printDeQBack(deque<int> deQ) {
  cout << "Print deque from back: ";
  while (!deQ.empty()) {
    cout << deQ.back() << " ";
    deQ.pop_back();
  }
  cout << "\n";
}

void printQ(queue<int> &q) {
  cout << "Print queue: ";
  while (!q.empty()) {
    // print first item in queue.
    cout << q.front() << " ";
    // remove first item in queue.
    q.pop();
  }
  cout << "\n";
}

void printPQ(priority_queue<int> pq) {
  cout << "Print priority queue: ";
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << "\n";
}

int main() {
  // empty, size, push, pop, front, back.
  queue<int> q;
  q.push(10);  // q: 10
  q.push(20);  // q: 10, 20, 30
  q.push(30);  // q: 10, 20, 30

  printQ(q);

  // empty, size, push_back, push_front, pop_back, pop_front, front, back.
  deque<int> deQ;
  deQ.push_back(10);   // q: 10
  deQ.push_back(20);   // q: 10, 20
  deQ.push_back(30);   // q: 10, 20, 30
  deQ.push_front(50);  // q: 50, 10, 20 , 30
  deQ.push_front(0);   // q: 0, 50, 10, 20, 30

  printDeQFront(deQ);  // 0 50 10 20 30
  printDeQBack(deQ);   // 30 20 10 50 0
  printDeQFront(deQ);  // None, because passing by reference.

  // empty, size, top, push, pop.
  // order (insert) by big to small.
  priority_queue<int> pq;
  pq.push(4);  // q: 4
  pq.push(3);  // q: 4, 3
  pq.push(5);  // q: 5, 4, 3
  pq.push(7);  // q: 7, 5, 4, 3

  printPQ(pq);

  return 0;
}