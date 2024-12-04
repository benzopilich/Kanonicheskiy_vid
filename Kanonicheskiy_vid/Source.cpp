#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int size = 0;
    in >> size;

    vector<int> graph(size, 0);

    int u = 0, v = 0;
    while (in >> u >> v) {
        if (v > 0 && v <= size) {
            graph[v - 1] = u; 
        }
    }

    for (int i : graph) {
        out << i << " ";
    }
    out << endl;

    in.close();
    out.close();

    return 0;
}
