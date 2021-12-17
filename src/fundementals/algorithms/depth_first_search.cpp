#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Graph {
	unordered_map<int, bool> visited;
	unordered_map<int, vector<int> > adj;

	void addEdge(int v, int w);
	void DFS(int v);
};

void Graph::addEdge(int v, int w) {
	// added edge
	adj[v].push_back(w);
}

int main() {

}
