// Read matrix from user input and print it out

#include <iostream>
using namespace std;

int main() {
  int n;
  int m;

  cout << "Enter size of n:" << endl;
  cin >> n;
  cout << "Enter size of m:" << endl;
  cin >> m;

  int arr1[100][100];
  
  cout << "Enter "<< n << "x" << m << "elements for the first array:" << endl;
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cin >> arr1[i][j];
    }
  }

  cout << "The matrix is:" << endl;
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}