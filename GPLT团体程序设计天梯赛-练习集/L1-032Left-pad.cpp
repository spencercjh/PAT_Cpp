#include<cstdio>
#include<cstring>
using namespace::std;
int main()
{
	int N;
	scanf("%d",&N);
			if(N<=0||N>10000)
				return 0;
	getchar();
	char ch;
	scanf("%c",&ch);
			if(ch==NULL)
				return 0;
	//printf("CH:%c\n",ch);
	getchar();
	char str[10000];
	gets(str);
			if(str==NULL)
				return 0;
	//printf("str:%s\n",str);
	int length;
	length=strlen(str);
			if(length>10000)
				return 0;
	//printf("LENGTH:%d\n",length);
			if(length>N)
			{
				printf("cut\n");
				return 0;
			}
			else if(length==N)
			{
				printf("%s",str);
				return 0;
			}
	char newstr[10000];
	int length1;
	length1=N-length;
	//printf("N:%d\n",N);
	//printf("LENGTH1:%d\n",length1);
	for(int i=0;i<length1;i++)
		newstr[i]=ch;
	int j=0;
	for(int i=length1;i<N;i++)
		newstr[i]=str[j++];	
	newstr[N]='\0'; 
	printf("%s\n",newstr);
	return 0;
}
