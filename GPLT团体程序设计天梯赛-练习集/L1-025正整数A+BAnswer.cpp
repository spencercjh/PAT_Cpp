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
{//�ж�һ���ַ����Ƿ�Ϊ�������ų�С�����
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
	//����A
	char *t = p;
	int a = 0;//��ʶA�ǲ����������ݣ���0����ʾA��һ������
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
	//����B
	p = ++t;
	int b = 0;//��ʶB�Ƿ�Ϊ���ͣ�ͬ��
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
	//������
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
