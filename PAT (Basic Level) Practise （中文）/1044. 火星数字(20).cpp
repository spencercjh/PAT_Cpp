/*
	Name: 1044. ��������(20)
	Author: spencercjh
	Date: 2017��9��3�� 09:43:12
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
	getchar();          //ʹ��getlineʱ���Ὣ��һ��cin>>N��ʱ��س���¼���ڣ��Ӷ���һ��ѭ��������getchar()��׽�Ǹ��س�
	for(int i=0; i<N; i++)
	{
		getline(cin,mess);
		if(mess[0]>='0'&&mess[0]<='9') //���������
		{
			for(int j=0; j<mess.size(); j++)
				number=number*10+mess[j]-'0';
			if(number<13)//ֱ�������Ӧ����
				cout<<fire[number]<<endl;
			else  //������ڵ���13���ҿ��Ա�13����������������ǲ������0��tret����
			{
				if(number%13==0) cout<<jinzhi[number/13-1]<<endl;
				else cout<<jinzhi[number/13-1]<<" "<<fire[number%13]<<endl;//����Ļ�Ҫ����
			}
		}
		else //����ǻ�����
		{
			for(int k=0; k<mess.size(); k=k+4)
			{
				three=three+mess[k]+mess[k+1]+mess[k+2];//��ȡÿ��������
				for(int l=0; l<13; l++)
				{
					if(three==
					        fire[l])//�����������fire�������ô����13�����еĸ�λ����ֻ���������
						number=number+l;
					if(three==jinzhi[l])//�����jinzhi�����У���ÿ��Ҫ����13
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
