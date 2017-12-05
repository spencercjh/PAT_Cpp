#include<iostream>
using namespace std;
void input(char *p) 
{
	char tmp;
	while ((tmp = getchar()) != '\n') 
	{
		*p = tmp;
		p++;
	}

	*p = '\0';
}
int func2(char *p) 
{//判断一个字符串是否为整数，排除小数情况
	float t = atof(p);

	if ((int)t == t) 
	{
		return (int)t;
	}
	else 
	{
		return 0;
	}
}
void func(char *p) 
{
	//处理A
	char *t = p;
	int a = 0;//标识A是不是整型数据，‘0’表示A是一个整数
	while (*t != ' ') 
	{
		if (*t<'0' || *t>'9') 
		{
			if (*t != '.') 
			{
				a = 1;
			}
			if(*t=='.'&&*(t+1)!='0')
			{
				a=1;
			}
		}
		t++;
	}
	int A = 0;
	if (a == 0) 
	{
		*t = '\0';
		A = func2(p);
	}
	//处理B
	p = ++t;
	int b = 0;//标识B是否为整型，同理
	while (*t != '\0') 
	{
		if (*t<'0' || *t>'9') 
		{
			if (*t != '.') 
			{
				b = 1;
				break;
			}
			if(*t=='.'&&*(t+1)!='0')
			{
				b=1;
				break;
			}
		}
		t++;
	}
	int B = 0;
	if (b == 0) 
	{
		B = func2(p);
	}
	//输出结果
	if (A == 0 || A > 1000) 
	{
		cout << "? + ";
		a = 1;
	}
	else 
	{
		cout << A << " + ";
	}
	if (B == 0 || B > 1000) 
	{
		cout << "? = ";
		b = 1;
	}
	else 
	{
		cout << B << " = ";
	}
	if (a == 0 && b == 0) 
	{
		cout << A + B;
	}
	else 
	{
		cout << '?';
	}
}
int main() 
{
	char a[95];
	input(a);
	func(a);
	return 0;
}
