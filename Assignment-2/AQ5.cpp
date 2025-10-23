#include <iostream>
using namespace std;

// (a) Diagonal Matrix
void diagonalMatrix(int n) {
    int diag[n];
    cout << "\nEnter diagonal elements: ";
    for (int i = 0; i < n; i++) cin >> diag[i];

    cout << "Diagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << diag[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

// (b) Tri-diagonal Matrix
void triDiagonalMatrix(int n) {
    int tri[3*n - 2]; // 3 diagonals
    cout << "\nEnter elements of tri-diagonal (main + 2 off-diagonals): ";
    for (int i = 0; i < 3*n - 2; i++) cin >> tri[i];

    cout << "Tri-Diagonal Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << tri[k++] << " ";
            else if (i == j+1) cout << tri[k++] << " ";
            else if (i+1 == j) cout << tri[k++] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

// (c) Lower Triangular Matrix
void lowerTriangularMatrix(int n) {
    int size = n*(n+1)/2; // only lower part
    int lower[size];
    cout << "\nEnter lower triangular elements row-wise: ";
    for (int i = 0; i < size; i++) cin >> lower[i];

    cout << "Lower Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << lower[k++] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

// (d) Upper Triangular Matrix
void upperTriangularMatrix(int n) {
    int size = n*(n+1)/2; // only upper part
    int upper[size];
    cout << "\nEnter upper triangular elements row-wise: ";
    for (int i = 0; i < size; i++) cin >> upper[i];

    cout << "Upper Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) cout << upper[k++] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

// (e) Symmetric Matrix
void symmetricMatrix(int n) {
    int size = n*(n+1)/2; // lower part only
    int sym[size];
    cout << "\nEnter lower triangular elements of symmetric matrix: ";
    for (int i = 0; i < size; i++) cin >> sym[i];

    cout << "Symmetric Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << sym[k++] << " ";
            else cout << sym[j*(j+1)/2 + i] << " "; // mirror from lower
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter order of square matrix (n): ";
    cin >> n;

    diagonalMatrix(n);
    triDiagonalMatrix(n);
    lowerTriangularMatrix(n);
    upperTriangularMatrix(n);
    symmetricMatrix(n);

    return 0;
}
