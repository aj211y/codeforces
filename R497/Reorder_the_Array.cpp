#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string.h>
#include <queue>
#include <vector>
#include <map>
#include <set>
#define MAX 100100
using namespace std;

int list[MAX];
int main()
{
	int n,ans=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &list[i]);
	}
	sort(list,list+n);
	for(int i=0, j=0; i<n && j<n; i++)
	{
		while(j<n)
		{
			if(list[i]<list[j])
			{
				// printf("%d %d\n",i, j);
				ans++;
				j++;
				break;
			}
			else
			{
				j++;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}