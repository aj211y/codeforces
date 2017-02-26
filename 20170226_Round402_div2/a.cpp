#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,a,b,ans=0;
	int score[6],A[6],B[6];
	
	scanf("%d",&n);
	memset(score,0,sizeof(score));
	memset(A,0,sizeof(A));
	memset(B,0,sizeof(B));
	
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		score[a]++;
		A[a]++;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b);
		score[b]++;
		B[b]++;
	}
	for(int i=1;i<=5;i++){
		if(score[i]%2==1){
			ans=-1;
			break;
		}
	}
	if(ans==-1)
		printf("-1\n");
	else{
		for(int i=1;i<=5;i++){
			if(A[i]>B[i]){
				ans+=(A[i]-B[i])/2;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}