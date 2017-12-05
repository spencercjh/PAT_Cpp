#include<stdio.h>
#include<string.h>
void mygets(char str[], int len)
{
	int i;
	char ch;
	i = 0;
	if (len < 1)
	{
		len = 1;
	}
	while ( i <= len - 1)
	{
		ch= getchar();
		if (ch == '\n') break;
		str[i] = ch;
		i++;
	}
	while (i>len-1)
	{
		ch = getchar();
		if (ch == '\n') break;
		int j = 0;
		for (j = 0; j<len - 1; j++)
			str[j] = str[j + 1];
		str[len-1] = ch;
	}
	str[i] = '\0';
}
int main()
{
	int N;
	char ch;
	int length;
	int padlength;
    char str[20000];
    char newstr[10001];

	scanf("%d %c", &N,&ch);
	getchar();
	mygets(str,N);
	if (N > 10000) return 0;
	length = strlen(str);
	//if (length > 20000) return 0;
	padlength = N - length;
	if (padlength < 0) padlength = 0;
	for (int i = 0; i < padlength; i++)
		newstr[i] = ch;
	for (int i = N , j = length ; i >= padlength; i--, j--)
		newstr[i] = str[j];

	printf("%s\n", newstr);
	return 0;
}
