#include <iostream>
using namespace std;

class Solution
{
public:
  void isReverse(string str)
  {
    string str1;
    int j = 0;
    for (int i = str.length() - 1; i >= 0; i--)
    {
      str1[j] = str[i];
      j++;
    }
    cout << "The reverse of " << str << " is " << str1 << endl;
  }
};

int main()
{
  int n;
  cout << "Enter the number of times you want to reverse a string:- " << endl;
  cin >> n;
  while (n--)
  {
    string str;
    cout << "Enter the string:- " << endl;
    cin >> str;
    Solution obj;
    obj.isReverse(str);
  }
  return 0;
}