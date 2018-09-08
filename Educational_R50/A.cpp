#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <set>
using namespace std;

int main()
{
	long long int n,k, ans;
	cin >> n >> k;
	if(k<=n)
	{
		cout << "1" << endl;
	}
	else
	{
		if(k % n !=0)
			ans = k/n+1;
		else
			ans = k/n;
		cout << ans << endl;
	}
	return 0;

}