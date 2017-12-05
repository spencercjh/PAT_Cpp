#include <iostream>
#include <cstring>
int main()
{
    int i,t,len;
    char s[1001];
    while(scanf("%s",s)!=EOF)
    {
        int count[10]={0};
        len=strlen(s);
        for(i=0;i<len;i++)
        {
            t=s[i]-'0';
            count[t]++;
        }
        for(i=0;i<10;i++)
        {
            if(count[i]!=0)
            {
                printf("%d:%d\n",i,count[i]);
            }
        }
    }
    return 0;
}
