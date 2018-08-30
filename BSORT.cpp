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
 

 
 
 
 
int main()
{
   	std::ios::sync_with_stdio(false);
   	#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
   	freopen("output.txt", "w",stdout);
   	#endif
 
    int T;
    cin>>T;
    while(T--){
      int n,x,y,h,sum=0,psum=0;
      cin>>n;
      vii p;
      for(int i=0;i<n;i++){
        cin>>x>>y>>h;
        sum+=h;
        p.push_back(make_pair(x-y,h));
      }
      sort(p.begin(), p.end());
      for(int i=1;i<n;i++){
        if(p[i].ff==p[i-1].ff){
          p[i].ss += p[i-1].ss;
          p[i-1].ss = 0;
        }
      }
      int presum = 0;
      bool flag = false;
      for(int i=0;i<n;i++){
        if(p[i].ss == 0){
          continue;
        }
        sum -= p[i].ss;
        psum += p[i].ss;
        if(sum == psum || psum == presum){
          cout<<"YES"<<endl;
          flag = true;
        }
        presum = sum ;

      }
      if(!flag){
        cout<<"NO"<<endl;
      }
    }
      
    return 0;
}