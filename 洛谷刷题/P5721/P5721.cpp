#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
	scanf("%d",&n); 
//	printf("%2.0lf",n);Êä³ö 4²»ÐÐcao
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n-i+1;j++){
    		ans++;
    		if (ans<=9) printf("0");
    		printf("%d",ans);
		}
		printf("\n");
	} 
	return 0;
} 
