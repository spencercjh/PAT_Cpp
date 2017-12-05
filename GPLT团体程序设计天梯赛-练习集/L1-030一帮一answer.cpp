#include<iostream>
using namespace::std;
struct stu  
{  
    int sex;  
    char name[10];  
};  
int main()  
{  
  
    struct stu student[50];  
    int number;  
    scanf("%d",&number);  
    int head=0,top=0;  
    int book[50]={0};  
    for(int i=0;i<number;i++)
	{  
        scanf("%d%s",&student[top].sex,student[top].name);  
        top++;  
    }  
    top--;  
    int count=0;  
    while(count<number/2)
	{  
        while(student[head].sex==student[top].sex||book[top])  
            top--;  
        printf("%s %s\n",student[head].name,student[top].name);  
        book[head]=book[top]=1;  
        head++;  
        top=number-1;  
        count++;  
    }  
    return 0;  
}  
