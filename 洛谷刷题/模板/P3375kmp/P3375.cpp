#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int i,j,nex[1000001];
int main(){
	cin>>s1>>s2;
	for (i=0;i<=1000000;i++) {
		nex[i]=0;
	}/*
	for (i=1;i<=s2.length()-1;i++){
		if (s2[i]==s2[0]) {
			j=1;nex[i]=j;
			while (s2[i+j]==s2[j]){
				j++;nex[i+j-1]=max(j,nex[i+j-1]);
			}
			i+=j-1;
		} 这个是不行的 这个也得使用kmp因为存在一部分前后头相等的情况qwq 
	}*///i s1 j s2
	i=1;j=0;
	while (i<=s2.length()-1){
		if (s2[i]==s2[j]){
			nex[i]=j+1;i++;j++;
		} else{
			if (j==0)i++;else j=nex[j-1];
		}
	}
	i=0;j=0;
	while (i<=s1.length()-1){
		if (s1[i]==s2[j]){
			i++;j++;
		} else{
			if (j==0)i++;else j=nex[j-1];
		}
		if (j==s2.length()){
			printf("%d\n",i-s2.length()+1);
			j=nex[j-1];
		}
	}
	for (i=0;i<=s2.length()-1;i++)
	 printf("%d ",nex[i]);
	return 0;
}
