#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char a[100000],c=0;  
    int N,K;  
    int count=0,i,j,m;  
    long number;  
    scanf("%d",&N);  
    memset(a,0,100000*sizeof(char));  
    for(i=0;i<N;i++)  
    {  
        scanf("%d",&K);  
        for(j=0;j<K;j++)  
        {  
            scanf("%ld",&number);  
            if(K!=1)  //朋友圈只有自己  
            {  
                a[number]=1;  
            }  
        }  
    }  
    scanf("%d",&m);  
    for(i=0;i<m;i++)  
    {  
        scanf("%ld",&number);  
        if(!a[number])  
        {  
            if(!count)  
            {  
                printf("%05ld",number);//注意需要补零  
            }  
            else  
            {  
                printf(" %05ld",number);  
            }  
            a[number] =1;//保证多次查询只输出一次  
            count++;  
        }  
    }  
    if(!count)  
    {  
        puts("No one is handsome");  
    }  
}  
