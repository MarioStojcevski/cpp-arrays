// Simple rotation of array elements

#include <iostream>
using namespace std;

int main() {
  int n;
  int array[100];
  cout << "Enter the size of the array" << endl;
  cin >> n;

  cout << "Enter the elements of the array" << endl;
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  int temp = array[n - 1];
  for (int i = n - 1; i > 0; i--) {
    array[i] = array[i - 1];
  }
  array[0] = temp;

  cout << "The rotated array is: " << endl;
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  return 0;
}