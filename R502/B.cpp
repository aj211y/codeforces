#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#define MAX 100010
using namespace std;

int a[MAX];
int b[MAX];
int main()
{
	int n;
	long long int sum_A_one=0, sum_A_zero_B_one=0,ans=0;
	char ch;
	scanf("%d", &n);
	getchar();
	for(int i=0;i<n;i++)
	{
		scanf("%c" ,&ch);
		a[i]=ch-48;
		if(a[i]==1)
		{
			sum_A_one++;
		}
	}
	getchar();
	for(int i=0;i<n;i++)
	{
		scanf("%c" ,&ch);
		b[i]=ch-48;

		if(b[i]==1 && a[i]==0)
		{
			sum_A_zero_B_one++;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			if(a[i]==0)
			{
				ans+=sum_A_one;
			}
			else
			{
				ans+=sum_A_zero_B_one;
			}
		}
	}

	cout << ans;
	return 0;
}