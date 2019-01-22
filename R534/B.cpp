#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
	string str,tmp;
	int end=0, cnt=0;
	stack<int> Llist,Rlist;
	cin >> str;

	for(int i=0; i<str.size(); i++)
	{
		Llist.push(str[i]);
	}

	Rlist.push(Llist.top());
	Llist.pop();
	
	while(!Llist.empty())
	{
		if(Rlist.top()==Llist.top())
		{
			cnt++;
			Rlist.pop();
			Llist.pop();
			if(Rlist.empty()&&!Llist.empty())
			{
				Rlist.push(Llist.top());
				Llist.pop();
			}
		}
		else
		{
			Rlist.push(Llist.top());
			Llist.pop();
		}
	}

	if(cnt%2==1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
