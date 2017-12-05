#include<stdio.h>  
#include<string.h>  
#include<math.h>  
#define LL long long  
int n;  
LL a[110],b[110];  
LL fun(LL a,LL b)  
{  
    LL z;  
    while(b)  
    {  
        z=a%b;  
        a=b;  
        b=z;  
    }  
    return a;  
}  
int main()  
{  
    scanf("%d",&n);  
    for(int i=0;i<n;i++)  
        scanf("%lld/%lld",&a[i],&b[i]);  
    LL x=a[0],y=b[0],z,p;  
    for(int i=1;i<n;i++)  
    {  
        z=fun(y,b[i]);  
        p=y*b[i]/z;  
        x=x*(p/y)+a[i]*(p/b[i]);  
        y=p;  
        z=fun(x,y);  
        x=x/z;  
        y=y/z;  
    }  
    LL w=x/y;  
    x=x%y;  
    if(!x)  
        printf("%lld\n",w);  
    else if(!w)  
        printf("%lld/%lld\n",x,y);  
    else printf("%lld %lld/%lld\n",w,x,y);  
    return 0;  
}  
