//WA
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <set>
#include <map>
#include <string.h>
#include <queue>
#include <vector>
#include <cmath>
#define MAX 200010
using namespace std;

int arr[MAX],dpL[MAX],dpR[MAX];
int main()
{
	int n,L,R,ans=0;
	memset(dpL,0,sizeof(dpL));
	memset(dpR,0,sizeof(dpR));
	scanf("%d" ,&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if(i==0)
			dpL[i]=arr[i];
		else
			dpL[i]=dpL[i-1]+arr[i];
	}
	dpR[n-1] = arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		dpR[i] = dpR[i+1]+arr[i];
	}
	for(int left=0, right=n-1;left<right;)
	{
		L=dpL[left];
		R=dpR[right];
		
		if(L<R)
		{
			left++;
		}
		else if(L>R)
		{
			right--;
		}
		else
		{
			ans=L;
			left++;
			right--;
		}
	}
	printf("%d\n",ans);
	return 0;
}