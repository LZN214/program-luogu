#include<bits/stdc++.h>
using namespace std;
int n,i,j,a[20][20],b[20][20],c[20][20],d[20][20];
string s;
void fu(){
	int i,j;
	for (i=1;i<=n;i++)
	 for (j=1;j<=n;j++)
	  c[i][j]=a[i][j];
}
void spin(){
	int i,j,d[20][20];
	for (i=1;i<=n;i++)
	 for (j=1;j<=n;j++)
	  d[i][j]=c[i][j];
	for (i=1;i<=n;i++)
	 for (j=1;j<=n;j++)
	  c[i][j]=d[n+1-j][i];
}
void re(){
	int i,j;
	for (i=1;i<=n;i++){
		for (j=1;j<=n/2;j++)
		 swap(c[i][j],c[i][n-j+1]);
	}
}
bool check(){
	for (i=1;i<=n;i++)
	 for (j=1;j<=n;j++)
	  if (c[i][j]!=b[i][j]) return false;
	return true;
}
int main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		cin>>s;
		for (j=0;j<=n-1;j++)
		 if (s[j]=='@') a[i][j+1]=0;
		  else a[i][j+1]=1;
	}

	for (i=1;i<=n;i++){
		cin>>s;
		for (j=0;j<=n-1;j++)
		 if (s[j]=='@') b[i][j+1]=0;
		  else b[i][j+1]=1;
	}

	fu();spin();
	if (check()){
		printf("1");return 0;
	}
	spin();
	if (check()){
		printf("2");return 0;
	}
	spin();
	if (check()){
		printf("3");return 0;
	}
	spin();re();
	if (check()){
		printf("4");return 0;
	}
	spin();
	if (check()){
		printf("5");return 0;
	}
	spin();
	if (check()){
		printf("5");return 0;
	}
	spin();
	if (check()){
		printf("5");return 0;
	}
	fu();
	if (check()){
		printf("6");return 0;
	}
	printf("7");
	return 0;
} 
