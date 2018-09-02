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
	int n, ans=0;
	string A, B;
	scanf("%d", &n);
	getchar();
	getline(cin, A);
	getline(cin, B);

	for(int i=0; i<n-1; i++)
	{
		if(A[i] != B[i])
		{
			if(A[i+1] != B[i+1] && A[i]!=A[i+1])
			{
				ans++;
				A[i] = B[i];
				A[i+1] = B[i+1];				
			}
			else
			{
				ans++;
				A[i] = B[i];
			}
		}
	}
	if(A[n-1] != B[n-1])
		ans++;

	cout << ans << endl;
	return 0;
}