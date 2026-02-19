#include <iostream>
using namespace std;

void print(int r[], int c[], int v[], int n) {
    cout << "Row Col Val\n";
    for (int i = 0; i < n; i++) cout << r[i] << "   " << c[i] << "   " << v[i] << endl;
}

void transpose(int r[], int c[], int v[], int n) {
    for (int i = 0; i < n; i++) {
        int t = r[i]; r[i] = c[i]; c[i] = t;
    }
}

int add(int r1[], int c1[], int v1[], int n1,
        int r2[], int c2[], int v2[], int n2,
        int r3[], int c3[], int v3[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) { r3[k]=r1[i]; c3[k]=c1[i]; v3[k]=v1[i]; k++; }
    for (int i = 0; i < n2; i++) { r3[k]=r2[i]; c3[k]=c2[i]; v3[k]=v2[i]; k++; }
    return k;
}

int multiply(int r1[], int c1[], int v1[], int n1,
             int r2[], int c2[], int v2[], int n2,
             int r3[], int c3[], int v3[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (c1[i] == r2[j]) {
                r3[k] = r1[i]; c3[k] = c2[j]; v3[k] = v1[i]*v2[j]; k++;
            }
        }
    }
    return k;
}

int main() {
    int n1,n2;
    cout << "Enter number of non-zero elements in A: ";
    cin >> n1;
    int r1[20],c1[20],v1[20];
    cout << "Enter row col val for A:\n";
    for(int i=0;i<n1;i++) cin>>r1[i]>>c1[i]>>v1[i];

    cout << "Enter number of non-zero elements in B: ";
    cin >> n2;
    int r2[20],c2[20],v2[20];
    cout << "Enter row col val for B:\n";
    for(int i=0;i<n2;i++) cin>>r2[i]>>c2[i]>>v2[i];

    cout << "Matrix A:\n"; print(r1,c1,v1,n1);
    cout << "Matrix B:\n"; print(r2,c2,v2,n2);

    transpose(r1,c1,v1,n1);
    cout << "\nTranspose of A:\n"; print(r1,c1,v1,n1);

    int r3[40],c3[40],v3[40]; 
    int n3 = add(r1,c1,v1,n1,r2,c2,v2,n2,r3,c3,v3);
    cout << "\nA + B:\n"; print(r3,c3,v3,n3);

    int r4[40],c4[40],v4[40]; 
    int n4 = multiply(r1,c1,v1,n1,r2,c2,v2,n2,r4,c4,v4);
    cout << "\nA x B:\n"; print(r4,c4,v4,n4);

    return 0;
}
