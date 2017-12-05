/*
	Name: 1044. 火星数字(20)
	Author: spencercjh
	Date: 2017年9月3日 09:43:12
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	int N;
	cin>>N;
	string mess;
	string three="";
	string fire[13]= {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string jinzhi[13]= {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	int len,number=0;
	getchar();          //使用getline时他会将第一次cin>>N的时候回车记录在内，从而少一次循环所以用getchar()捕捉那个回车
	for(int i=0; i<N; i++)
	{
		getline(cin,mess);
		if(mess[0]>='0'&&mess[0]<='9') //如果是数字
		{
			for(int j=0; j<mess.size(); j++)
				number=number*10+mess[j]-'0';
			if(number<13)//直接输出对应数字
				cout<<fire[number]<<endl;
			else  //如果大于等于13并且可以被13整除，则根据样例是不用输出0（tret）的
			{
				if(number%13==0) cout<<jinzhi[number/13-1]<<endl;
				else cout<<jinzhi[number/13-1]<<" "<<fire[number%13]<<endl;//否则的话要输入
			}
		}
		else //如果是火星文
		{
			for(int k=0; k<mess.size(); k=k+4)
			{
				three=three+mess[k]+mess[k+1]+mess[k+2];//读取每个火星文
				for(int l=0; l<13; l++)
				{
					if(three==
					        fire[l])//如果火星文在fire数组里，那么它是13进制中的个位数，只需加上坐标
						number=number+l;
					if(three==jinzhi[l])//如果在jinzhi数组中，则每次要乘以13
						number=number+(l+1)*13;
				}
				three="";
			}
			cout<<number<<endl;
		}
		number=0;
	}
	return 0;
}
