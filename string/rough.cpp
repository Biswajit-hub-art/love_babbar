#include <iostream>
#include <string>
using namespace std;

void reverse(string *ptr, int left, int right)
{
  string str = *ptr;
  int temp;
  if (left > right)
  {
    return;
  }
  else
  {
    temp = str[left];
    str[left] = str[right];
    str[right] = temp;
    left++;
    right--;
    reverse(ptr, left, right);
  }
}
int main()
{
  string str = "hello";
  int x = 0;
  int y = str.length() - 1;
  reverse(&str, x, y);
  cout << str << endl;
  return 0;
}