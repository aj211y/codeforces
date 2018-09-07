#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <queue>
#include <map>
#include <stack>
using namespace std;

int main()
{
	int n, tmp;
	scanf("%d", &n);

	if(n == 1 || n == 2)
	{
		printf("No\n");
	}
	else
	{
		printf("Yes\n");
		if(n%2==1)
		{
			printf("1 %d\n", (1+n)/2);
			printf("%d", n-1);
			tmp = (1+n)/2;
			for(int i=1; i<=n; i++)
			{
				if(i == tmp)
					continue;
				else
					printf(" %d", i);
			}
			printf("\n");
		}
		else
		{
			printf("2 %d %d\n",(1+n)/2, (1+n)/2 + 1);
			printf("%d", n-2);

			tmp = (1+n)/2;

			for(int i=1; i<=n; i++)
			{
				if(i == tmp || i == tmp+1)
					continue;
				else
					printf(" %d", i);
			}
			printf("\n");
		}
	}
	return 0;
}