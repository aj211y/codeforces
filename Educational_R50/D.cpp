//TLE
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <set>
#define MAX 300010
using namespace std;

long long int A[MAX], B[MAX];
int main()
{
	int n, m;
	long long int tmpA, tmpB;
	long long int ans=0;
	scanf("%d", &n);
	for(int i=0; i<n ;i++)
		cin >> A[i];
	scanf("%d", &m);
	for(int i=0; i<m ;i++)
		cin >> B[i];

	tmpA = A[0];
	tmpB = B[0];
	for(int a=0, b=0;a<n || b<m; )
	{
		if(tmpA == tmpB)
		{
			ans++;
			if(a<n && b<m)
			{
				tmpA = A[++a];
				tmpB = B[++b];
			}
			else
			{
				ans = -1;
				break;
			}

		}
		else if(tmpA>tmpB)
		{
			if(b<m)
			{
				tmpB+=B[++b];
			}
			else
			{
				ans = -1;
				break;
			}
		}
		else
		{
			if(a<n)
			{
				tmpA+=A[++a];
			}
			else
			{
				ans = -1;
				break;
			}
		}
	}

	cout << ans << endl;
	return 0;
}