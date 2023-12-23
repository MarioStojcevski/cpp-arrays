// Given two arrays check if they are equal

#include <iostream>
using namespace std;

bool areEqual(int arr1[], int arr2[], int n, int m) {
  if(n != m) {
    cout << "They are not even the same size" << endl;

    return false;
  }

  for(int i=0; i<n; i++) {
    if(arr1[i] != arr2[i]) {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  int m;

  cout << "Enter size of array one:" << endl;
  cin >> n;

  cout << "Enter size of array two:" << endl;
  cin >> m;

  int arr1[100];
  int arr2[100];

  cout << "Enter "<< n <<" elements for the first array:" << endl;
  for(int i=0; i<n; i++) {
    cin >> arr1[i];
  }

  cout << "Enter " << m << " elements for the second array:" << endl;
  for(int i=0; i<m; i++) {
    cin >> arr2[i];
  }

  if(areEqual(arr1, arr2, n, m)) {
    cout << "The arrays are equal" << endl;
  } else {
    cout << "They are NOT equal" << endl;
  }

  return 0;
}