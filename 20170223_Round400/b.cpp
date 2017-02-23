#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string.h>
#define Max 100005
using namespace std;

int jewelry[Max];
void prime(int num)
{
	int total=0,tmp;
	memset(jewelry,0,sizeof(jewelry));
	for(int i=2;i<=num+1;i++){
		tmp=i;
		if(jewelry[i]==0){
			jewelry[i]=1;
			while((tmp+i) <= num+1){
				tmp=tmp+i;
				jewelry[tmp]=2;
			}
		}
	}
}
int main()
{
	int n;
	
	scanf("%d",&n);
	prime(n);
	if(n<=2)
		printf("1\n");
	else
		printf("2\n");
	for(int i=2;i<=n+1;i++){
		printf("%d ",jewelry[i]);
	}
	
	return 0;
}