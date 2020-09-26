#include <bits/stdc++.h>
using namespace std;
bool isvalid(vector<int>&books,int totstudent,int n, int allowed)
{
	int student=1;
	int totpages=0;
	for(int i=0;i<n;i++)
	{
		totpages=totpages+books[i];
		if(totpages>allowed)
		{
			student++;
			totpages=books[i];
		}
		if(student>totstudent)
		{
			return false;
		}
	}
	return true;
}
int allocate(vector<int>&books,int min,int max,int totstudent,int n)
{
	int res=-1;
	while(min<=max)
	{
		int allowed=min+(max-min)/2;
		if(isvalid(books,totstudent,n,allowed))
		{
			res=allowed;
			max=allowed-1;
		}
		else
		{
			min=allowed+1;
		}
	}
	return res;
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
	int n,totstudent;
	int sum=0;
	cin>>n;
	cin>>totstudent;
	vector<int>books(n);
	for(int i=0;i<n;i++)
	{
		cin>>books[i];
		sum=sum+books[i];
	}
	if(n<totstudent)
	{
		cout<<"not possible"<<endl;
	}
	int min=*max_element(books.begin(),books.end());
	int max=sum;
	int answer=allocate(books,min,max,totstudent,n);
	cout<<answer;
	return 0;
}	
