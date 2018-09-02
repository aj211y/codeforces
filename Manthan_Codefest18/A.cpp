#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
using namespace std;

int main()
{
	long long int n,packets,endPos;

	cin >> n;

	if(n == 0)
	{
		cout << "0" << endl;
	}
	else if(n == 1)
	{
		cout << "1" << endl;
	}
	else if(n == 2 || n == 3)
	{
		cout << "2" << endl;
	}
	else
	{
		
		packets = 2;
		for(long long int pre=3, x=4; x<=n;pre = endPos)
		{
			endPos = pre + x;
			x = endPos + 1;
			packets++;
		}
		cout << packets << endl;		
	}

	return 0;
}