#include<bits/stdc++.h>
using namespace std;
int t,o,h,n,i;
unsigned long long  x,a[1000001];
string s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);//C语言的string太tm难用了 不论是输入输出都用cincout 
	cin>>t;
	for (o=1;o<=t;o++){
		h=0;
		cin>>n;
		for (i=1;i<=n;i++){
			cin>>s;
			if (s=="push") {
				cin>>x;
				h++;a[h]=x;
			} else if (s=="pop"){
				if (h>0) h--;
				else cout<<"Empty\n";
			} else if (s=="query"){
				if (h>0) cout<<a[h]<<"\n";
				 else cout<<"Anguei!\n";
			} else cout<<h<<"\n";
		}
	} 
	return 0;
}
