#include <bits/stdc++.h>
using namespace std;
char next_alphabet(vector<char>&letters,int s,int e,char target)
{
	char res='#';
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(letters[mid]==target)
		{
			s=mid+1;
		}
		else if(letters[mid]<target)
		{
			s=mid+1;
		}
		else
		{
			res=letters[mid];
			e=mid-1;
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
	int n;
	char target;
	cin>>n;
	vector <char> letters(n);
	for(int i=0;i<n;i++)
	{
		cin>>letters[i];
	}
	cin>>target;
	char answer=next_alphabet(letters,0,n-1,target);
	cout<<"next alphabet is="<<answer;
	return 0;
}	