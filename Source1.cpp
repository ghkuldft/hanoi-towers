#include <iostream>
using namespace std;

int countMoves(int n) {
    if (n == 0) {
        return 0;
    }
    return (1 << n) - 1;
}

void moveDisk(int from, int to) {
    cout << from << " " << to << endl;
}

void hanoi(int n, int from, int to, int auxiliary) {
    if (n == 1) {
        moveDisk(from, to);
        return;
    }
    hanoi(n - 1, from, auxiliary, to);
    moveDisk(from, to);
    hanoi(n - 1, auxiliary, to, from);
}

int main() {
    int n;
    cin >> n;
    int totalMoves = countMoves(n);
    cout << totalMoves << endl;
    hanoi(n, 1, 3, 2);
    return 0;
}
