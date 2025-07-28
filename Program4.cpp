// Write a program to create a matrix of size 3x2 having all the even numbers. In such a way that numbers in a second row should be double of numbers in a first row.
#include <iostream>
using namespace std;
int main() {
    int matrix[3][2];
    int num = 2;
    for (int i = 0; i < 3; i++) {
        matrix[i][0] = num;
        num += 2;
    }
    for (int i = 0; i < 3; i++) {
        matrix[i][1] = matrix[i][0] * 2;
    }
    cout << "The matrix is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}