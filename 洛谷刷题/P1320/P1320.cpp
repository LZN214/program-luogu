#include<bits/stdc++.h>
using namespace std;
string s,s1;
int n,i,l;
int main(){
	cin>>s;
	n=s.length();
	for (i=1;i<=n-1;i++){
		cin>>s1;s+=s1;
	}
	printf("%d ",n);
	l=0;
	if (s[0]=='1') printf("0 ");
	for (i=0;i<=n*n-2;i++){
		l++;
		if (s[i]!=s[i+1]) printf("%d ",l),l=0;
	}
	printf("%d",l+1);
	return 0;
}
