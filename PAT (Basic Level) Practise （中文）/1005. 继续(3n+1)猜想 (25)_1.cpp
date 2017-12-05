#include<iostream>
#include<algorithm>
using namespace std;
int num[101];
int mark[101]={0};
int num2[101];
bool cmp(int a,int b)
{
	return a>b;
}
void check(int number,int data)
{
      int c[101];
      int j=0;
      while(data!=1)
	  {
	      	if(data%2==0)
			{
	           data=data/2;
	           c[j]=data;
	        }             
	        else
			{
	            data=(data*3+1)/2;
	            c[j]=data;
	        }          
         j++;            
	  }
    	for(int k=0;k<j;k++)
		{
              for(int d=0;d<number;d++)
			  {
                      if(c[k]==num[d])
					  {
                         mark[d]=1;  
                         break;               
                      }
            }     
		} 
    }
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
           for(int i=0;i<n;i++){
                   scanf("%d",&num[i]);          
                   } 
          for(int i=0;i<n;i++){
                  if(mark[i]!=1){
                  check(n,num[i]);                                 
                  }
              } 
          int cnt=0;
          for(int i=0;i<n;i++){ 
            if(mark[i]!=1){
                num2[cnt++]=num[i];           
                           }
          }
          sort(num2,num2+cnt,cmp);
    for(int i=0;i<cnt-1;i++)
    	printf("%d ",num2[i]);
    printf("%d\n",num2[cnt-1]);    
    }
    return 0;
}
