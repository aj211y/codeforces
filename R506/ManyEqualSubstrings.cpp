//AC
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
	int n,k;
	string str, ans;
	bool different=false;
	scanf("%d %d",&n, &k);
	cin >> str;
	ans = str;
	k=k-1;
	for(int i=1; i<=ans.length() and k>0; i++)
	{
		if(i==ans.length())
		{
			different=true;
			break;
		}
		if(ans[i]==str[0])
		{
			for(int j=1; j<n; j++)
			{
				if(i+j==ans.length())
				{
					do{
						ans+=str[j++];
					}while(j<n);
					k--;
					break;
				}
				else if(ans[i+j]!=str[j])
				{
					break;
				}
			}
		}
		else
		{
			continue;
		}

	}
	if(different)
	{
		while(k--)
		{
			ans+=str;
		}
	}

	cout << ans << endl;
	return 0;
}