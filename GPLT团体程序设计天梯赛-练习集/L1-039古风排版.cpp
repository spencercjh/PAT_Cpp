#include<iostream>
#include<cstring>
using namespace::std;
int main()
{
	int row,length=0,col;
	char string[1000],display[100][1000]= {'\0'};
	scanf("%d",&row);
	getchar();
	gets(string);
	length=strlen(string);
	if(length%row==0)
		col=length/row;
	else if(length%row!=0)
		col=length/row+1;
	int k=0;
	while(string[k]!='\0')		//Array��display�ĵ�0�е�0�ж�Ϊ�� 
	{
		for(int j=col; j>0; j--)
			for(int i=1; i<=row; i++)
				display[i][j]=string[k++];
	}
	if (0!=length%row)	//���ո� 
		for (int i = length%row+1; i <= row; i++)
			display[i][1] = ' ';
	for(int i=1; i<=row; i++)	//��� 
	{
		for(int j=1; j<=col; j++)
//			printf("%c",display[i][j]);
			cout<<display[i][j];
		if(i!=row)
			printf("\n");
	}

	return 0;
}
