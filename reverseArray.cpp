#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
  while (start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
}
int main()
{
  int num[3] = {1, 2, 3};
  int siz = sizeof(num) / sizeof(num[0]);
  printArray(num, siz);
  reverseArray(num, 0, 2);
  cout << "The reversed array is: " << endl;
  printArray(num, siz);
  return 0;
}