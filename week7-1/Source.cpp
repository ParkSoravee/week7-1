#include<stdio.h>

void getStr(char*);
int hack(char*);
int strlen(char*);

int main()
{
	char str[1000];
	char* pStr = str;
	getStr(pStr);
	printf("%d", hack(pStr));
	return 0;
}
void getStr(char *pStr)
{
	scanf_s("%s", &*pStr, 999);
}
int hack(char* pStr)
{
	int x=1, sum=0;
	int i = strlen(pStr) -1;
	while (i >= 0)
	{
		if (*(pStr+i) >= '0' and *(pStr+i) <= '9')
		{
			sum += (*(pStr+i) - '0') * x;
			x *= 10;
		}
		else 
		{
			x = 1;
		}
		i--;
	}
	return sum;
}
int strlen(char* pStr)
{
	int i = 0;
	while (*(pStr + i) != '\0')
	{
		i++;
	}
	return i;
}