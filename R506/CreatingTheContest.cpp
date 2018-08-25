//AC
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#define MAX 200010
using namespace std;

int main()
{
	int n,dp[MAX],ans=1;
	int a[MAX];

	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		dp[i]=1;	//init
	}
	for(int i=1;i<n;i++)
	{

		if((a[i]-a[i-1]) <= a[i-1])
		{
			dp[i]=dp[i-1]+1;
			if(ans<dp[i])
				ans=dp[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}