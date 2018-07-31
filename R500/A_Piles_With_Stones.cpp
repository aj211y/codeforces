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
#define MAX 60
using namespace std;

int x[MAX],y[MAX];
int main()
{
	int n,sumx=0,sumy=0;
	//input
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		sumx+=x[i];
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&y[i]);
		sumy+=y[i];
	}
	if(sumy<=sumx)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}