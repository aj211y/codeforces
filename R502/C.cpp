//WA
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#define MAX 100010
using namespace std;

int main()
{
	int n, i, ans=0;
	scanf("%d", &n);
	ans = floor(sqrt(n));
	while(n>ans)
	{
		for(i=ans; i>=0; i--)
		{
			printf("%d", n-i);
			if(i!=0)
				printf(" ");
		}
		n=n-ans-1;
		if(n>ans)
			printf(" ");
	}
	for(i=1; i<=n; i++)
	{
		printf(" %d", i);
	}

	return 0;
}