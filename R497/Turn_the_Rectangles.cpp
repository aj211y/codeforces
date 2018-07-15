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
#define MAX 100010
using namespace std;

int w[MAX], h[MAX];
int main()
{
	int n,tmp;
	bool ans=true;

	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &w[i], &h[i]);
		if(w[i]>h[i])
		{
			tmp = w[i];
			w[i] = h[i];
			h[i] = tmp;
		}
	}
	for(int i=1; i<n; i++)
	{
		if(h[i]>h[i-1])
		{
			if(w[i]>h[i-1])
			{
				ans = false;
				break;				
			}
			else
			{
				tmp = w[i];
				w[i] = h[i];
				h[i] = tmp;
			}
		}
	}
	if(!ans)
		printf("NO\n");
	else
		printf("YES\n");

	return 0;
}