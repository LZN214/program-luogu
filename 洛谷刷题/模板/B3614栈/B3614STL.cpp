#include<bits/stdc++.h>
using namespace std;
int t,o,n,i;
string s;
unsigned long long x;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>t;
	for (o=1;o<=t;o++){
		vector<unsigned long long int> a; 
		cin>>n;
		for (i=1;i<=n;i++){
			cin>>s;
			if (s=="push"){
				cin>>x;
				a.push_back(x);
			}else if (s=="pop"){
				if (a.empty()) cout<<"Empty\n";
				 else a.pop_back();
			}else if (s=="query"){
				if (a.empty()) cout<<"Anguei!\n";
				 else cout<<a.back()<<"\n";
			}else cout<<a.size()<<"\n";
		}
	} 
	return 0;
} 
