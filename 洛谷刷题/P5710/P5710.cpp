#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=0,y=0;
	scanf("%d",&x);
	if (x%2==0) y++;
	if (x>4&&x<=12) y++;
	if (y==2) printf("1 ");
	 else printf("0 ");
	if (y>=1) printf("1 ");
	 else printf("0 ");
    if (y==1) printf("1 ");
	 else printf("0 ");
    if (y==0) printf("1 ");
	 else printf("0 ");
	return 0;
} 
