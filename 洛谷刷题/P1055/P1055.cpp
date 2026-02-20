#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	string s;
	cin>>s;//±ðÓÃscanf 
	i=((s[0]-48)+(s[2]-48)*2+(s[3]-48)*3+(s[4]-48)*4+(s[6]-48)*5+(s[7]-48)*6+(s[8]-48)*7+(s[9]-48)*8+(s[10]-48)*9)%11;
	if (s[12]-48==i||i==10&&(s[12]=='X')) printf("Right");
	 else {if (i==10) s[12]='X';
	  else s[12]=i+48;cout<<s<<endl;}
	return 0;
}
