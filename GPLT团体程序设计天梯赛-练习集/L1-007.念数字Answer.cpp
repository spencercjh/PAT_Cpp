#include<iostream>
#include<cstring>
#include<cmath>
using namespace std; 
#define MAXSIZE 100
int main() {
    char num[1001] = {0};
    cin >> num;
    bool isNum = false;
    for (int i = 0; num[i] != '\0'; i++) 
	{
        switch(num[i]) 
		{
            case '-':
                cout << "fu";
                break;
            case '0':
                cout << "ling";
                break;
            case '1':
                cout << "yi";
                break;
            case '2':
                cout << "er";
                break;
            case '3':
                cout << "san";
                break;
            case '4':
                cout << "si";
                break;
            case '5':
                cout << "wu";
                break;
            case '6':
                cout << "liu";
                break;
            case '7':
                cout << "qi";
                break;
            case '8':
                cout << "ba";
                break;
            case '9':
                cout << "jiu";
                break;
        }
        if (num[i + 1] != '\0') 
		{
           cout << ' '; 
        }
    }
    return 0;
}
