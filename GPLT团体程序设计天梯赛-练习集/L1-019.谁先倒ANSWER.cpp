#include <cstdio>  
#include <cstring>  
#include <algorithm>  
using namespace std;  
int loseeA,loseeB,n;  
int pA,sA,pB,sB,cntA,cntB,cups;  
char lose;  
int main() 
{  
    while(2==scanf("%d%d",&loseeA,&loseeB)) 
	{  
        lose='\0';  
        cntA=cntB=0;  
        scanf("%d",&n);  
        while(n-->0) 
		{  
            scanf("%d%d%d%d",&pA,&sA,&pB,&sB);  
            if(lose=='\0') 
			{  
                if(sA==pA+pB&&sB!=pA+pB) 
				{  
                    ++cntA;  
                    if(cntA>loseeA) 
					{  
                        lose='A';  
                        cups=cntB;  
                    }  
                }  
                else if(sA!=pA+pB&&sB==pA+pB) 
				{  
                    ++cntB;  
                    if(cntB>loseeB) 
					{  
                        lose='B';  
                        cups=cntA;  
                    }  
                }  
            }  
        }  
        printf("%c\n%d\n",lose,cups);  
    }  
    return 0;  
}  
