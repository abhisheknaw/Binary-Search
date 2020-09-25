#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>>&a,int n,int m,int target)
{
	int i=0;
	int j=m-1;
	while(i<n && i>=0 && j>=0 && j<m)
	{
		if(a[i][j]==target)
		{
			cout<<i<<" "<<j;
			return;
		}
		else if(a[i][j]>target)
		{
			j--;
		}
		else 
		{
			i++;
		}
	}
	cout<<"element not found";
}

int main() 
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n,m,target;
	cin>>n;
	cin>>m;
	vector<vector<int>>a(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>target;
	search(a,n,m,target);
	return 0;
}