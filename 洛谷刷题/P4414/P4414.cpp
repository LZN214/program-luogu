#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3],i;
	for (i=0;i<=2;i++) scanf("%d",&a[i]);
	sort(a,a+3);
	char ch;
	scanf("%c",&ch);scanf("%c",&ch);//¶Áµô»»ÐÐ·û 
	for (i=0;i<=2;i++){
		scanf("%c",&ch);
		printf("%d ",a[ch-65]);
	}
	return 0;
} 
