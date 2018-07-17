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
#define MAX 20000
using namespace std;

struct Problem
{
	int id;
	int value;
}arr[MAX];
bool cmp(Problem a, Problem b)
{
	if(a.value > b.value)
	{
		return true;
	}
	else if (a.value == b. value && a.id<b.id)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool cmp2(Problem a, Problem b)
{
	if(a.id<b.id)
		return true;
	else
		return false;
}
int main()
{
	int n,k,total=0, ans[2020];
	scanf("%d %d", &n, &k);
	memset(ans,0,sizeof(ans));
	for(int i=0; i<n;i++)
	{
		arr[i].id=i;
		scanf("%d", &arr[i].value);
	}
	sort(arr, arr+n, cmp);
	sort(arr, arr+k, cmp2);
	for(int i=0; i<k; i++)
	{
		total+=arr[i].value;
		if(i==0)
			ans[i]=arr[i].id+1;
		else
			ans[i]=arr[i].id-arr[i-1].id;
		
		if(i==k-1 && arr[i].id!=n-1)
		{
			ans[i]+=n-1-arr[i].id;
		}
	}


	//ans
	printf("%d\n", total);
	for(int i=0;i<k;i++)
	{
		if(i!=0)
			printf(" ");
		printf("%d", ans[i]);
	}

	return 0;
}