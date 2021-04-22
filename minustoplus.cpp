#include <iostream>
using namespace std;

void printallneg(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    if (arr[i] < 0)
    {
      cout << arr[i] << " ";
    }
  }
}
void printallpos(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > 0)
    {
      cout << arr[i] << " ";
    }
  }
}

int main()
{
  int arr[6] = {-12, 4, 11, -15, -5, 6};
  printallneg(arr, 6);
  printallpos(arr, 6);
  return 0;
}