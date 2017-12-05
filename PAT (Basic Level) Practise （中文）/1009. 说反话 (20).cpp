#include<iostream>  
#include<cstring>  
char str[81];  
int main()  
{  
    int i, k;  
    char *p;  
    gets(str);  
    k = strlen(str);  
    p = str + k;  
    while(1)  
    {  
        if (p==str)  
        {  
            printf("%s\n",p);  
            break;  
        }  
        if (*p==' '&&*(p+1)!=' ')  
        {  
            *p ='\0';  
            printf("%s ",p+1);  
        }  
        p--;  
    }  
    return 0;  
}  
