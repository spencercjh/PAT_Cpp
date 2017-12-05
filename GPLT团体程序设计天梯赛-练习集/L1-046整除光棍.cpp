#include<stdio.h>  
int n;  
char ans[1005];  
int main()  
{  
    while(~scanf("%d", &n))  
    {  
        if(n%5==0||n%2==0||n>=1000||n<=0)
			return 0; 
		int p = 0;  
        int now = 1;  
        for (int len = 1; ; ++len)  
        {  
            if(p || now / n)
				ans[p++] = '0' + now / n;  
            now %= n;  
            if (now == 0)  
            {  
                ans[p] = 0;  
                printf("%s %d\n", ans, len);  
                break;  
            }  
            now = now * 10 + 1;  
        }  
    }  
    return 0;  
}  
