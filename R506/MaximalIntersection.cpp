//TLE
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
#define MAX 300010
using namespace std;

struct node
{
	int L,R, id;
}seg[MAX],segTmp[MAX];
bool Lcmp(node a, node b)
{
	if(a.L>b.L)
		return true;
	else if(a.L==b.L && a.R <= b.R)
		return true;
	else
		return false;
}
bool Rcmp(node a, node b)
{
	if(a.R<b.R)
		return true;
	else if(a.R==b.R && a.L >= b.L)
		return true;
	else
		return false;
}
int main()
{
	int n,ans;

	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &seg[i].L, &seg[i].R);
		segTmp[i].L = seg[i].L;
		segTmp[i].R = seg[i].R;
		segTmp[i].id = i;
		seg[i].id=i;
	}
	sort(seg, seg+n, Lcmp);
	sort(segTmp, segTmp+n, Rcmp);

	if(seg[0].id==segTmp[0].id)
	{
		ans = segTmp[1].R - seg[1].L;
	}
	else if((segTmp[1].R-seg[0].L) > (segTmp[0].R-seg[1].L))
	{
		ans = segTmp[1].R-seg[0].L;
	}
	else
	{
		ans = segTmp[0].R-seg[1].L;
	}

	if(ans<0)
		ans=0;
	printf("%d\n", ans);

	return 0;
}