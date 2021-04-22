#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Union(int first_arr[], int second_arr[], int m, int n)
{
  int i = 0;
  int j = 0;

  while (i < m && j < n)
  {
    if (first_arr[i] < second_arr[j])
    {
      cout << first_arr[i++];
    }
    else if (first_arr[i] > second_arr[j])
    {
      cout << second_arr[j++];
    }
    else
    {
      cout << second_arr[j++];
      i++;
    }
  }

  while (i < m)
  {
    cout << first_arr[i++];
  }
  while (j < n)
  {
    cout << second_arr[j++];
  }
}

int main()
{
  int arr1[6] = {1, 4, 2, 5, 6, 7};
  int arr2[6] = {2, 4, 3, 7, 8, 9};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);
  sort(arr1, arr1 + size1);
  sort(arr2, arr2 + size2);
  Union(arr1, arr2, size1, size2);
  return 0;
}