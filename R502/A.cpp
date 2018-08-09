#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#define MAX 1010
using namespace std;

struct node
{
	int id;
	int sum;
}students[MAX];

bool cmp(node A, node B)
{
	if(A.sum > B.sum)
	{
		return true;
	}
	else if(A.sum==B.sum && A.id<B.id)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		students[i].id=i;
		students[i].sum=a+b+c+d;
	}

	sort(students+1,students+n+1,cmp);

	for(int i=1;i<=n;i++)
	{
		if(students[i].id==1)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}