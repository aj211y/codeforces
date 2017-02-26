//RUN-time ERROR
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#define Max 200005
using namespace std;

struct node{
	long long int id;
	long long int discount;
};
bool cmp(node a, node b)
{
	return a.discount<=b.discount;
}
int main()
{
	int n,k,tmp,id,count=0;
	int A[Max],B[Max];
	node d;
	node dis[Max];
	int cost=0;
	bool cal[Max];
	memset(cal,false,sizeof(cal));
	
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
		scanf("%d",&A[i]);
	for(int i=1;i<=n;i++)
		scanf("%d",&B[i]);
	
	for(int i=1;i<=n;i++){
		dis[i-1].discount=A[i]-B[i];
		dis[i-1].id=i;	
	}
	
	sort(dis,dis+n,cmp);
	
	tmp=0;
	while(k>0 || (tmp<n && dis[tmp].discount<0)){
		id=dis[tmp].id;
		cost+=A[id];
		cal[id]=true;
		tmp++;
		k--;
	}
	for(int i=1;i<=n;i++){
		if(!cal[i])
			cost+=B[i];
	}
	printf("%d\n",cost);
}