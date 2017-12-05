#include <iostream>
using namespace std;
int main()
{    
    bool  flag = true;
    char a[10005];
    char b[10005];
    gets(a);
    gets(b);
    for(int i=0;a[i]!='\0';i++)
    {    
        flag=true;
        for(int j=0;b[j]!='\0';j++)
        {
               if(a[i]==b[j]) flag=false; 
        }
        if(flag) cout<<a[i];
    }
    cout<<endl;
    return 0;
}
