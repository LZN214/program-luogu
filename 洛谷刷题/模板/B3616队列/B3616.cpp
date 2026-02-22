#include<bits/stdc++.h>
using namespace std;
int l,r,i,n,j,x,a[100000];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	l=1;r=0; cin>>n;
	for (i=1;i<=n;i++){
		cin>>j;
		if (j==1){
			cin>>x;
			r++;a[r]=x;
		} else if (j==2){
			if (l<=r)l++;
			else cout<<"ERR_CANNOT_POP\n";
		} else if (j==3){
			if (l<=r)cout<<a[l]<<"\n";
			 else cout<<"ERR_CANNOT_QUERY\n";
		} else{
			cout<<r-l+1<<"\n";
		}
	} 
	return 0;
}
