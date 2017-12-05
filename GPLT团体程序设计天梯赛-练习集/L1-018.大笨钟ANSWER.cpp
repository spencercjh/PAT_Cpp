#include <cstdio>  
#include <cstring>  
#include <algorithm>  
using namespace std;  
int h,m;  
int main() 
{  
    while(2==scanf("%d:%d",&h,&m)) 
	{  
        if(h<12||(h==12&&m==0)) 
		{  
            printf("Only %02d:%02d.  Too early to Dang.\n",h,m);  
        }  
        else 
		{  
            h-=12;  
            if(m!=0) 
			{  
                ++h;  
            }  
            while(h-->0) 
			{  
                printf("Dang");  
            }  
            printf("\n");  
        }  
    }  
    return 0;  
}  

