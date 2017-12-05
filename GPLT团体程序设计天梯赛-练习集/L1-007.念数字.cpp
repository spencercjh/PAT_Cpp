#include<cstdio>
#include<cstring>
int main()
{
	char s[100];
	int length;
	gets(s);
	length=strlen(s);
	for(int i=0;i<length;i++)
	{
		if(s[i]=='-')
			printf("fu");
		else if(s[i]=='0')
			printf("ling");
		else if(s[i]=='1')
			printf("yi");
		else if(s[i]=='2')
			printf("er");
		else if(s[i]=='3')
			printf("san");
		else if(s[i]=='4')
			printf("si");
		else if(s[i]=='5')
			printf("wu");
		else if(s[i]=='6')
			printf("liu");
		else if(s[i]=='7')
			printf("qi");
		else if(s[i]=='8')
			printf("ba");
		else if(s[i]=='9')
			printf("jiu ");
		if(i!=length-1)
			printf(" ");
	}
	//printf("\b");
	return 0;
}
