#include <iostream>  
#include <stdio.h>  
#include <string.h>  
#include <math.h>  
#include <string>  
#include <set>  
#include <map>  
#include <stack>  
#include <queue>  
#include <algorithm>  
  
using namespace std;  
  
int a[1003];  
int main()  
{  
    int n,m,num,MAX,subscript;  
    while(~scanf("%d",&n))  
    {  
        memset(a,0,sizeof(a));  
        for(int i = 0; i < n; i++)  
        {  
            scanf("%d",&m);  
            for(int j = 0; j < m; j++)  
            {  
                scanf("%d",&num);  
                a[num]++;  
            }  
        }  
        MAX = a[1];  
        subscript = 1;  
        for(int i = 2; i <= 1000; i++)  
        {  
            if(MAX <= a[i])  
            {  
                MAX = a[i];  
                subscript = i;  
            }  
        }  
        printf("%d %d",subscript,MAX);  
    }  
    return 0;  
}  
