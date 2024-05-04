#include <iostream>

using namespace std;

/// Erwartet eine Zahl n und liefert true, falls n eine Primzahl ist.
bool isPrime(int n) {
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    cout << "Gib eine Zahl ein: ";

    int x;
    cin >> x;

    if (isPrime(x)) {
        cout << x << " ist eine Primzahl." << endl;
    } else {
        cout << x << " ist keine Primzahl." << endl;
    }

    return 0;
}
