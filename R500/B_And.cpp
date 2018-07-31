#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#define MAX 100010
using namespace std;

int num[MAX],numAND[MAX];
int main()
{
	int n,x;
	set<int> pre,post;
	bool success=false;
	int ans=-1;
	scanf("%d %d",&n, &x);

	scanf("%d",&num[0]);
	pre.insert(num[0]);

	for(int i=1;i<n;i++)
	{
		scanf("%d", &num[i]);
		if(pre.find(num[i])!=pre.end())
		{
			success=true;
			ans=0;
		}
		pre.insert(num[i]);
	}

	if(success)
	{
		printf("%d\n", ans);
	}
	else
	{
		numAND[0]=num[0]&x;
		post.insert(numAND[0]);
		if(pre.find(numAND[0])!=pre.end() && numAND[0]!=num[0])
		{
			success=true;
			ans=1;
		}
		else
		{
			for(int i=1;i<n;i++)
			{
				numAND[i]=num[i]&x;
				if(pre.find(numAND[i])!=pre.end() && numAND[i]!=num[i])
				{
					success=true;
					ans=1;
					break;
				}
				else if(post.find(numAND[i])!=post.end())
				{
					success=true;
					ans=2;
					break;
				}
				post.insert(numAND[i]);
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}