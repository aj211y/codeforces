#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#define MAX 200010
using namespace std;

int main()
{
	long long int n,s, num[MAX],ans=0;

	cin >> n >> s;
	for(int i=0; i<n; i++)
	{
		cin >> num[i];
	}

	sort(num, num+n);


	if(num[n/2]<s)
	{
		for(long long int i=n/2; i<n; i++)
		{
			if(num[i]>=s)
				break;
			ans += (s - num[i]);
		}		
	}
	else
	{
		for(long long int i=n/2; i>=0; i--)
		{
			if(num[i]<=s)
				break;
			ans += (num[i] - s);
		}		
	}
	cout << ans << endl;
	return 0;
}