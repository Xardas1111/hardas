#include <iostream>
#include "windows.h"
using namespace std;
int main(){
	cout << 5 << 6 << 7 << 8 << endl;
	int hui[20][20][20][20];
	int n=20;
	string IVAN = "IVAN H*I";
	double mas;
	SYSTEMTIME lt;
	GetLocalTime(&lt);
	printf("First Cycle: %2d:%4d\n",lt.wSecond, lt.wMilliseconds);
	for (int i=0;i<n*n*n*n;i++)
	{
		int k=i/(n*n*n);
		int j=(i/(n*n))%n;
		int z=(i/n)%n;
		int i1=i%n;
		hui[k][j][z][i1] = 0;
	}
	GetLocalTime(&lt);
	printf("First Cycle: %2d:%4d\n",lt.wSecond, lt.wMilliseconds);
	GetLocalTime(&lt);
	printf("Second Cycle: %2d:%4d\n",lt.wSecond, lt.wMilliseconds);
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			for (int k=0;k<n;k++)
				for (int z=0;z<n;z++)
					hui[i][j][k][z] = 0;
	GetLocalTime(&lt);
	printf("Second Cycle: %2d:%4d\n",lt.wSecond, lt.wMilliseconds);
	getchar();
	long long h;
	return 0;
}