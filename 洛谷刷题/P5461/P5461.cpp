#include<bits/stdc++.h>
using namespace std;
int n,i,j,a[2000][2000];
void she(int x1,int y1, int w){
	int i,j;
	if (w==1) {a[x1][y1]=1;return;}
	for (i=x1;i<=x1+w/2-1;i++)
	 for (j=y1;j<=y1+w/2-1;j++)
	  a[i][j]=0;
	she(x1+w/2,y1,w/2);
	she(x1,y1+w/2,w/2);
	she(x1+w/2,y1+w/2,w/2);
}
int main(){
	scanf("%d",&n);
	she(1,1,pow(2,n));
	for (i=1;i<=pow(2,n);i++){
		for (j=1;j<=pow(2,n);j++)
		 printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
