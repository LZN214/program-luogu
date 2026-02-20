#include<bits/stdc++.h>
using namespace std;
string s;
int i;
int main(){
	cin>>s;
	for (i=0;i<=s.size();i++)
	if (s[i]>=97&&s[i]<=122) printf("%c",char(s[i]-32));
	 else printf("%c",s[i]);
	return 0;
} 
