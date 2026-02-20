#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	scanf("%d",&i);
	if (i%100==0)
	 if(i%400==0)printf("1");
	 else printf("0");
	else if (i%4==0) printf("1");
	     else printf("0");
	return 0;
} 
