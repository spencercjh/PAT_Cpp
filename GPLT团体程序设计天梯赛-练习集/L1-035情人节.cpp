#include<cstdio>
#include<cstring>
using namespace::std;
int main()
{
	int n=0;
	char str[11],s2[11],s14[11];
	while(true)
	{
        scanf("%s", str);
        if(str==NULL)
			return 0; 
        if(str[0] == '.') 
		{
            break;
        }
		++n;
		if(n==2)
			strcpy(s2,str);
		if(n==14)
			strcpy(s14,str);
	}
	if(n<2)
		printf("Momo... No one is for you ...\n");
	else if(n>=2&&n<14)
		printf("%s is the only one for you...\n", s2);
	else if(n>=14)
		printf("%s and %s are inviting you to dinner...\n",s2,s14);
	return 0;
}
		
