#include<bits/stdc++.h>
using namespace std;
int t,n,a[505][505];
void work(){
	cin>>n;
	int i=(n+1)/2,j=i,cnt=0;
	for(int l=1;l<=n;l++){
		int t=(l&1?1:-1);
		for(int k=1;k<=l;k++,i+=t) a[i][j]=cnt++;
		for(int k=1;k<=l;k++,j+=t) a[i][j]=cnt++;
	}
	a[i][j]=cnt++;
	for(i=1;i<=n;i++,cout<<'\n')for(j=1;j<=n;j++)cout<<a[i][j]<<' ';
}
int main(){
	cin>>t;
	while(t--) work();
	return 0;
}
