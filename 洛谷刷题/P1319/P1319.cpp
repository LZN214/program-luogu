#include<bits/stdc++.h>
using namespace std;
bool zero;
int n,i,cur,o;
int main(){
	scanf("%d",&n);
	cur=0;zero=true;
	while (true){
		scanf("%d",&o);
		for (i=1;i<=o;i++){
			cur++;
			if (zero) printf("0");
			  else printf("1");
			if (cur%n==0) printf("\n");
		}
		zero=!zero;
		if (cur==n*n) break;
	}
	return 0;
}
