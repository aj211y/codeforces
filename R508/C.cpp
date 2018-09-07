#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <queue>
#include <map>
#include <stack>
#define MAX 100010
using namespace std;

long long int A[MAX], B[MAX];
bool cmp(long long int a,long long int b)
{
	return a>b;
}
int main()
{
	int n, round;
	long long int scoreA=0, scoreB=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		cin >> A[i];
	for(int i=0; i<n; i++)
		cin >> B[i];

	sort(A,A+n,cmp);
	sort(B,B+n,cmp);

	round = 1;
	for(int idA=0, idB=0;idA<n || idB<n;round++)
	{
		if(round%2==1)//A's move
		{
			if(idA >=n )
			{
				idB++;
			}
			else if(idB >= n || A[idA] >= B[idB])
			{
				scoreA+=A[idA++];
			}
			else
			{
				idB++;
			}
		}
		else//B's move
		{
			if(idB >=n )
			{
				idA++;
			}
			else if(idA >=n || B[idB] >= A[idA])
			{
				scoreB+=B[idB++];
			}
			else
			{
				idA++;
			}
		}
	}
	cout << scoreA-scoreB << endl;

	return 0;
}