#include<cstdio>
#include<cstring>
using namespace::std;
int main()
{
	int length,i;
	char str[10000],book[5]={0},gplt[4]={'G','P','L','T'}; //G0 P1 L2 T3
	gets(str);
	fflush(stdin);
	getchar();
	length=strlen(str);
	str[length]='\0';
	if(str!=NULL) 
	{
		for(i=0;i<length;i++)
		{
			if(str[i]=='g'||str[i]=='G')
			{
				book[0]++;
				book[4]++;
			}
			if(str[i]=='p'||str[i]=='P')
			{
				book[1]++;
				book[4]++;
			}
			if(str[i]=='l'||str[i]=='L')
			{
				book[2]++;
				book[4]++;
			}
			if(str[i]=='t'||str[i]=='T')
			{	
				book[3]++;
				book[4]++;
			}
		}
	    while(book[4]>0) 
		{  
	    	for(i=0;i<4;++i) 
			{  
	            if(book[i]>0) 
				{  
	                book[i]--;  
	            	book[4]--;  
	                printf("%c",gplt[i]);  
	            }  
	        }  
	    }  
    	return 0;
	}
	else
		return 0;
}
