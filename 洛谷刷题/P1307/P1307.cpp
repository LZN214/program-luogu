#include<bits/stdc++.h>
using namespace std;
string s;
bool flag=false;
int i;
int main(){
	cin>>s;
	i=s.size()-1;
	if (s[0]=='0') {
		printf("0");return 0;
	}
	if (s[0]=='-') printf("-");
	while (i>=0){
		if (48<=s[i]&&s[i]<=57) {
		if (s[i]!=48) flag=true;
		if (flag||s[i]!=48)printf("%c",s[i]);}
		i-=1;
	}
} 
