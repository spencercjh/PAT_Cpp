#include<iostream>
#include<cmath>
using namespace std;
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
int prime[10001]={0};
int main()
{
	int num=0,index=0;
	while(index!=10000)
	{
		if(isPrime(num))
			prime[++index]=num;
		num++;
	}
	int M,N,temp=1;
	cin>>M>>N;
	for(int i=M;i<=N;i++,temp++)
	{
		if(i==N)
		{
			cout<<prime[i];
			break;
		}
		if(temp<=9)
			cout<<prime[i]<<" ";
		else if(temp==10)
		{
			cout<<prime[i]<<endl;
			temp=0;
		}
	}
	return 0;
}
