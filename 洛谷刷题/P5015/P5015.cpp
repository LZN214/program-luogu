#include<bits/stdc++.h>
using namespace std;
int i,ans;
char s;
int main(){

	scanf("%c",&s);
	ans=0;
	while (s!='\n'){
		if (s!=' ') ans++;
		
	scanf("%c",&s);
	}
	printf("%d",ans);
	return 0;
}
