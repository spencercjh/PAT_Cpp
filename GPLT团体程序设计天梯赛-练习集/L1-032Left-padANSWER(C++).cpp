#include <iostream>
#include <string>
using namespace std;
int main()
{
  int cnt;
  char ch;
  string str;
  cin >> cnt;
  if (cnt > 10000) return 0;
  cin >> ch;
  cin.ignore(1);
  getline(cin, str);
  int len = str.length();
  if (cnt >len)
		str.insert(0, cnt - len, ch);
  string newstr = str.substr(str.length() - cnt, cnt);
  cout << newstr << endl;;
  return 0;
}
