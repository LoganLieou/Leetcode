#include <iostream>
#include <queue>

using namespace std;

int main() {
	// priority queue is deafult a max heap
	priority_queue<int> pq;

	pq.push(5);
	pq.push(1);
	pq.push(15);

	// output the priority queue
	while (pq.empty() == false) {
		cout << pq.top() << endl;
		pq.pop();
	}
}
