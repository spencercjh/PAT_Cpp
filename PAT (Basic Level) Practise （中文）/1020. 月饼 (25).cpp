#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct node
{
    double num,total,price;
}a[1010];
bool cmp(struct node b,struct node c)
{
    return b.price>c.price;
};
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> a[i].num;
    for(int i=0;i<n;i++)
        cin >> a[i].total;
    for(int i=0;i<n;i++)
        a[i].price = (a[i].total*1.00)/a[i].num;//�ص��������
    sort(a,a+n,cmp);//����
    /*for(int i=0;i<n;i++)
	{
		printf("%f %f %f\n",a[i].num,a[i].total,a[i].price);
	}*/
    double sum = 0.0;
    for(int i=0;i<n;i++)
    {
        if(m<=0)
           break;//һֱ��ӣ�ֱ���ﵽ�������
        if(m>=a[i].num)
        {
            m = m - a[i].num;
            sum = sum + a[i].total;
        }
        else if(m<a[i].num)
        {
            sum = sum + m*a[i].price;
            m = 0;
        }
    }
    printf("%.2lf\n",sum);
    return 0;
}
