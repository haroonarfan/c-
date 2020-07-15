#include <iostream>

using namespace std;


void print(int A[][3],int N, int M) {
  for (int R = 0; R < N; R++){
    for (int C = 0; C < M; C++){
       cout << A[R][C];
    }
  }
}


int main() {
    int mat[3][5], row, col;
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 5; col++) {
        cin >> mat[row][col];
        }
    }
    for (auto i : mat) {
        cout << i << endl;
    }
    // print(mat,4,3);
    return 0;
}
