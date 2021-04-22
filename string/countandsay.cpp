#include <iostream>
#include <string>
using namespace std;

string countandsay(int n)
{
  if (n == 1)
  {
    return "1";
  }
  if (n == 2)
  {
    return "11";
  }
  string str = "11";
  for (int i = 3; i < n; i++)
  {
    string temp = "";
    int count = 1;
    str = str + '%';
    for (int j = 1; j < str.length(); j++)
    {
      if (str[j] != str[j - 1])
      {
        temp = temp + to_string(count);
        temp = temp + str[j - 1];
        count = 1;
      }
      else
      {
        count++;
      }
    }
    str = temp;
  }
  return str;
}

int main()
{
  int n = 4;
  string str1 = countandsay(n);
  cout << str1 << endl;
  return 0;
}