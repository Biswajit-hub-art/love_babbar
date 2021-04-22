#include <iostream>
#include <string>

using namespace std;

bool substrornot(string str1, string str2)
{
  if (str1.length() != str2.length())
  {
    return false;
  }
  else
  {
    string temp = str1 + str1;
    if (temp.find(str2) != std::string::npos)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}

int main()
{
  string str1 = "ABCDE";
  string str2 = "DEABC";
  if (substrornot(str1, str2))
  {
    cout << "It is a substring " << endl;
  }
  else
  {
    cout << "It is not a substring" << endl;
  }
  return 0;
}