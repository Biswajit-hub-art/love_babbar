#include <iostream>
#include <cstring>
using namespace std;
class Solution
{
public:
  void isPalindrome(string str)
  {
    for (int i = 0, h = str.size() - 1; i < h; i++, h--)
    {
      if (str[i] != str[h])
      {
        cout << str << " is not a palindrome string." << endl;
        return;
      }
    }
    cout << str << " is a palindrome string." << endl;
  }
};

int main()
{
  int i;
  cout << "How much times do you want to try:- ";
  cin >> i;
  while (i--)
  {
    string str;
    cin >> str;
    Solution obj;
    obj.isPalindrome(str);
  }
  return 0;
}