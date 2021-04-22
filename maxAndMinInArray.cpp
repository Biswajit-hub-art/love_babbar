#include <iostream>
using namespace std;

int findMaxMin(int arr[], int length)
{
  // int tempMin = arr[0];
  int tempMax = arr[0];
  for (int i = 1; i < length; i++)
  {
    if (arr[i] > tempMax)
    {
      tempMax = arr[i];
    }
    // if (arr[i] < tempMin)
    // {
    //   tempMin = arr[i];
    // }
  }
  return tempMax;
}
int main()
{
  int arr[5] = {5, 3, 7, 2, 4};
  int valueofMax = findMaxMin(arr, 5);
  cout << valueofMax << endl;
  return 0;
}