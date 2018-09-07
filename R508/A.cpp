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
using namespace std;

int main()
{
	int n, k, ans=0, s[30], id;

	string str;

	scanf("%d %d", &n, &k);
	cin >> str;

	for(int i=0; i<30; i++)
		s[i] = 0;
	for(int i=0; i<str.length(); i++)
	{
		id = str[i] - 'A';
		s[id]++;
	}
	sort(s,s+k);
	printf("%d\n", s[0]*k);
	return 0;
}