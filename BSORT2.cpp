#include <bits/stdc++.h>
#define lld long long int
#define vi vector<int>
#define vlld vector<lld>
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define mii map<int, int>
#define vii vector<pii>
 
using namespace std;


int main(){
	std::ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
   	freopen("output.txt", "w",stdout);
   	#endif
	
	int n;
	cin>>n;
	vi a(n*n);
	int mat[n][n];
	int t = n;

	for(int i=0;i<(n*n);i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());

	int k=0,l=0,m=n,c=0;
	while(k<n && l<n){
		for(int i=l;i<n;i++){
			mat[k][i] = a[c];
			//cout<<mat[k][i]<<" ";
			c++;
			//cout<<"work";
		}
		k++;
		for(int i=k;i<n;i++){
			mat[i][n-1] = a[c];
			//cout<<mat[i][n-1]<<" ";
			c++;
		}
		n--;

		if(k<n){
			for(int i=n-1;i>=l;i--){
				mat[m-1][i] = a[c];			
				//cout<<mat[m-1][i]<<" ";
				c++;
			}
			m--;
		}

		if(l<n){
			for(int i=n-1;i>=k;i--){
				mat[i][l] = a[c];
				//cout<<mat[i][l]<<" ";
				c++;
			}
			l++;
		}
	}
	//cout<<endl;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	//cout<<"YES";
	//cout<<mat[0][0];
   	return 0;
}