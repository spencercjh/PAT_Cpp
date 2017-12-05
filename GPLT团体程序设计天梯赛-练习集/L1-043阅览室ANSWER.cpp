#include <iostream>
#include <cstring>
using namespace std;  
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
	{
        int id = -1;
        double time = 0;
        int num = 0;
        int mintue[2001] = {0};
        bool flag[2001];
        memset(flag, false, sizeof(flag));
        while (id != 0) 
		{
            char a;
            int h, m;
            scanf("%d %c %d:%d", &id, &a, &h, &m);
            if (id == 0) 
			{
                break;
            } 
			else if (a == 'S') 
			{
                mintue[id] = h * 60 + m;
                flag[id] = true;
            } 
			else if (a == 'E') 
			{
                if (flag[id]) 
				{
                    flag[id] = false;
                    time += h * 60 + m - mintue[id];
                    mintue[id] = 0;
                    num++;
                }
            }
        }
        int t;
        if (num != 0) 
		{
            time /= num;
        }
        t = time + 0.5f;
        printf("%d %d\n", num, t);
    }
    return 0;  
}  
