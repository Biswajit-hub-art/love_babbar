#include <iostream>
#include <string>
using namespace std;

bool countRotate(string str1, string str2)
{
  string temp = str1 + str1;
  int pos = 0;
  return (temp.find(str2) != string::npos);
}

int main()
{
  string str1 = "ABCD";
  string str2 = "DABC";
  if (countRotate)
  {
    cout << "str2 is a rotate of str1." << endl;
  }
  else
  {
    cout << "str2 is not a rotate of str1." << endl;
  }
  return 0;
}