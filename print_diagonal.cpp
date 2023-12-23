// Given a number n and a matrix of size n x n, print the diagonal elements and opposite diagonal elements

#include <iostream>
using namespace std;

int main() {
  int n;
  int diagonalElements[100];
  int oppositeDiagonalElements[100];

  cout << "Enter size of n:" << endl;
  cin >> n;

  int matrix[100][100];

  cout << "Enter "<< n << "x" << n << "elements for the matrix" << endl;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cin >> matrix[i][j];
    }
  }

  int k=0;
  int l=0;

  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(i==j) {
        diagonalElements[k++] = matrix[i][j];
      }

      if(i+j == n-1) {
        oppositeDiagonalElements[l++] = matrix[i][j];
      }
    }
  }

  cout << "The matrix is:" << endl;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl << "Diagonal elements" << endl;
  for(int i=0; i<k; i++) {
    cout << diagonalElements[i];
  }

  cout << endl << endl;

  cout << "Opposite diagonal elements" << endl;
  for(int i=0; i<l; i++) {
    cout << oppositeDiagonalElements[i];
  }

  cout << endl;

  return 0;
}