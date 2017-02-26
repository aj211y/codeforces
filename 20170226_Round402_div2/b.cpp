#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	string num;
	int k,ans=0,count=0;
	cin >> num;
	scanf("%d",&k);
	if(k>num.length()){
		printf("%d\n",num.length()-1);
	}
	else{
		for(int i=num.length()-1;count<k;i--){
			if(num[i]=='0')
				count++;
			else{
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}