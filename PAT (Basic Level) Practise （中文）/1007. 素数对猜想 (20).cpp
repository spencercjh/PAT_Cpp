#include <stdio.h>  
#include <math.h>  
#include <stdbool.h>  
bool isPrime(int n)  
{  
    int i;  
    if (n == 1 || n == 0)  
        return false;  
    else  
    {  
        for (i = 2; i <= sqrt((double)n); i++)  
            if (n%i == 0)  
                return false;  
    }  
    return true;  
}   
int main(void)  
{  
    int N,i;  
    int count = 0;  
    scanf("%d", &N);  
    if (N <= 4)  
        printf("0");  
    else  
    {  
        for (i = 3; i <= N - 2; i++)  
            if (isPrime(i) && isPrime(i + 2))  
                count++;  
        printf("%d",count);  
    }     
    return 0;  
}  

