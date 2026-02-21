#include<bits/stdc++.h>
using namespace std;
int maxx,i,j,r,p[30000001];
string s,s1; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>s;s1="!";
	for (i=0;i<=s.length()-1;i++)
	s1+=' ',s1+=s[i];
	s1+=' ';r=0; p[0]=0;
	maxx=-1;
	for (i=1;i<=s1.length()-1;i++){
		if (i<=r+p[r]) p[i]=min(r+p[r]-i,p[2*r-i]);
		 else p[i]=0;
		while (i+p[i]+1<s1.length()&&i-p[i]-1>=1&&s1[i+p[i]+1]==s1[i-p[i]-1]) p[i]++;
		if (r+p[r]<=p[i]+i) r=i;
		maxx=max(maxx,p[i]);
	}
	cout<<maxx;
	return 0;
}//通过最右端的回文串进行优化，因为回文串内的两个对称的回文串必定互为回文，以此达到O(N)
//二分答案为O（NlogN）但不及此好 
