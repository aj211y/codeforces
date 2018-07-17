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
#define MAX 10000
using namespace std;

int arr[MAX];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(i!=0)
			printf(" ");
		if(arr[i]%2==1)
			printf("%d",arr[i]);
		else
			printf("%d", arr[i]-1);
	}
	return 0;
}