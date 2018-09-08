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
	int q;
	long long int n,m,k;
	scanf("%d", &q);
	while(q--)
	{
		cin >> n >> m >> k;
		if(k< n || k < m)
		{
			printf("-1\n");
		}
		else
		{
			if(n%2 == 1 && m%2 == 1) // odd & odd
			{
				if(k%2 == 1)
				{
					cout << k << endl;
				}
				else
				{
					cout << k-2 << endl;
				}
			}
			else if(n%2 == 0 && m % 2 == 0) //even & even
			{
				if(k%2 == 1)
				{
					cout << k-2 << endl;
				}
				else
				{
					cout << k << endl;
				}	
			}
			else//even & odd
			{
				cout << k-1 << endl;
			}
		}
	}
	return 0;
}