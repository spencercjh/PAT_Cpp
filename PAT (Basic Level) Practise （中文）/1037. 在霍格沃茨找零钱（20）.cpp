#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
struct money
{
	long long int Galleon;
	long long int Sickle;
	long long int Knut;
	bool operator<(const money& a) const
	{
		if(Galleon==a.Galleon)
		{
			if(Sickle==a.Sickle)
			{
				return Knut>a.Knut;
			}
			else
				return Sickle>a.Sickle;
		}
		else
			return Galleon>a.Galleon;
	}
	bool operator==(const money& a) const
	{
		return Galleon==a.Galleon&&Sickle==a.Sickle&&Knut==a.Knut;
	}
};
void myswap(money& a,money& b)
{
	money temp; //temp=a;a=b;b=temp;
	temp.Galleon=a.Galleon;
	temp.Sickle=a.Sickle;
	temp.Knut=a.Knut;
	a.Galleon=b.Galleon;
	a.Sickle=b.Sickle;
	a.Knut=b.Knut;
	b.Galleon=temp.Galleon;
	b.Sickle=temp.Sickle;
	b.Knut=temp.Knut;
}
int main()
{
	money P,A;
	scanf("%lld.%lld.%lld %lld.%lld.%lld",&P.Galleon,&P.Sickle,&P.Knut,&A.Galleon,
	      &A.Sickle,&A.Knut);
	if(P<A)
	{
		myswap(P,A);
		printf("-");
	}
	else if(A==P)
	{
		printf("0.0.0");
		return 0;
	}
	if(A.Knut<P.Knut)
	{
		A.Knut+=29;
		A.Sickle--;
	}
	A.Knut=A.Knut-P.Knut;
	if(A.Sickle<P.Sickle)
	{
		A.Sickle+=17;
		A.Galleon--;
	}
	A.Sickle=A.Sickle-P.Sickle;
	A.Galleon=A.Galleon-P.Galleon;
	printf("%lld.%lld.%lld",A.Galleon,A.Sickle,A.Knut);
	return 0;
}
