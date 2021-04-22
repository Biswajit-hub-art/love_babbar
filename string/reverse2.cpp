#include <iostream>
using namespace std;

class Solution
{
public:
  void helper(string str, int left, int right)
  {
    int temp;
    if (left > right)
    {
      return;
    }
    temp = str[left];
    str[left++] = str[right];
    str[right--] = temp;
    helper(str, left, right);
  }

public:
  void reverseString(string *str)
  {
    helper(*str, 0, *str.length() - 1);
  }
};

int main()
{
  cout << "Enter the no of times you want to reverse: " << endl;
  int i;
  cin >> i;
  while (i--)
  {
    string str;
    cin >> str;
    Solution obj;
    obj.reverseString(&str);
  }
  return 0;
}