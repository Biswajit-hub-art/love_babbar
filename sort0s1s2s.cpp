#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 0, 1, 2, 1};
  int n = 5;
  int temp, j;
  for (int i = 1; i < n; i++)
  {
    temp = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] >= temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
}