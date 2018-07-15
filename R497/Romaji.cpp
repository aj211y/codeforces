#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string.h>
#include <queue>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{

	string s;
	cin >> s;

	set<char> vowel;
	bool ans=true;
	vowel.insert('a');
	vowel.insert('e');
	vowel.insert('i');
	vowel.insert('o');
	vowel.insert('u');

	int len = s.size();
	if(vowel.find(s[len-1])==vowel.end() && s[len-1]!='n')
	{
		printf("NO\n");
	}
	else
	{
		for(int i=0;i<len-1;i++)
		{
			if(vowel.find(s[i])!=vowel.end() || s[i]=='n')
			{
				continue;
			}
			else if(vowel.find(s[i])==vowel.end() && vowel.find(s[i+1])==vowel.end())//not a vowel and follow up a non-vowel
			{
				ans = false;
				break;
			}
		}
		if(!ans)
			printf("NO\n");
		else
			printf("YES\n");
	}
	
	return 0;
}