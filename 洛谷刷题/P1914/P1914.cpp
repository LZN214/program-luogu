#include<bits/stdc++.h>
using namespace std;
int n,i,j;
string s;
int main(){
	scanf("%d",&n);
	cin>>s;
	for (i=0;i<=s.length()-1;i++){
		j=s[i]+n;
		if (j>122) j-=26;
		printf("%c",char(j));
	}
	return 0;
}
