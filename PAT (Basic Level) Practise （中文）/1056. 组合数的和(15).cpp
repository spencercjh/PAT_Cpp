/*
	Name: 1056. ������ĺ�(15)
	Author: spencercjh
	Date: 2017��9��4�� 15:42:10 
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
int main()
{
    int a[10],n,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(j!=i)
                sum+=a[i]*10+a[j];
    printf("%d",sum);
}
