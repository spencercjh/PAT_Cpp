#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
/*int main()
{
	string badch,instr;
	cin>>badch>>instr;
//	cout<<badch<<endl;
	bool ch[200];
	for(int i=0;i<200;i++)
		ch[i]=true;
	for(int i=0;i<badch.length();i++)
	{
//		cout<<badch[i]<<endl;
		ch[badch[i]]=false;
		if(badch[i]>='A'&&badch[i]<='Z')
			ch[badch[i]-'A'+'a']=false;
	}
//	for(int i=0;i<200;i++)
//		cout<<ch[i]<<" ";
	for(int i=0;i<instr.length();i++)
	{
//		cout<<instr[i]<<endl;
//		cout<<ch[instr[i]]<<endl;
		if(ch[instr[i]])
		{
			if(instr[i]>='A'&&instr[i]<='Z')
			{
				if(ch['+'])
					cout<<instr[i];
				else
					continue;
			}
			else
				cout<<instr[i];
		}
	}
	return 0;
}*/
int main()
{
    int key[178]={0};//���滵��
    int i,check=0;//check�˶��Ƿ������
    char ch;
    while((ch=getchar())!='\n')
    {
        if(ch>='A'&&ch<='Z')key[ch-'A'+'a']=1;//��ĸ��Сд������
        key[ch]=1;
    }
    if(key['+'])for(i='A';i<='Z';i++)key[i]=1;//�ϵ��������������д�д�޷����
    while((ch=getchar())!='\n')
    {
        if(key[ch])continue;
        printf("%c",ch);
        check=1;
    }
    if(check==0)printf("\n");//���û������������\n
}				
