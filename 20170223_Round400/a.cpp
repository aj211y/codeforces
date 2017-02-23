#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	string vic1, vic2, mur, rep;
	int n;
	cin >> vic1 >> vic2;
	scanf("%d",&n);
	do{
		cout << vic1 << " " << vic2 << endl;
		cin >> mur >> rep;
		if(vic1==mur)
			vic1=rep;
		else
			vic2=rep;
	}while(--n > 0);
	cout << vic1 << " " << vic2 << endl;
	
	return 0;
}