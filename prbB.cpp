/* Author : Pranav
BITS PILANI Hyderabad Campus */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
//#include <sstream>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define pop pop_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=0; i<n; i++)
#define N 100005
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;

vector<int> v1,v2,res1,res2,ans1,ans2,id1,id2;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,i,m,search,k,j,key;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        v1.pb(k);
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>k;
        v2.pb(k);
    }
    i=0;j=0;
    search=0;

    while(i<n||j<m){
        while(i<n&&v1[i]==search){
            i++;
            res1.pb(search);
            id1.pb(i);
        }
        while(j<m&&v2[j]==search){
            j++;
            res1.pb(search);
            id1.pb(n+j);
        }
        search=1-search;
    }
    search=1;
    i=0;j=0;
    while(i<n||j<m){
        while(i<n&&v1[i]==search){
            i++;
            res2.pb(search);
            id2.pb(i);
        }
        while(j<m&&v2[j]==search){
            j++;
            res2.pb(search);
            id2.pb(n+j);
        }
        search=1-search;
    }
    key=res1[0];
    i=0;
    //cout<<res1.size()<<" "<<res2.size()<<endl;return 0;

    // cout<<res1.size()<<" " <<res2.size()<<endl;

    i=0;
    while(i<n+m){



        while(i<n+m&&res1[i]==key){
            i++;
        }
        if(i==n+m&&res1[i-1]==0)
        {
               break;
        }
        key=1-key;
       // cout<<i<<" ";
        ans1.pb(i);
    }
    key=res2[0];
    i=0;
    cout<<endl;
    while(i<n+m){


        while(i<n+m&&res2[i]==key){
            i++;
        }
         if(i==n+m&&res2[i-1]==0)
        {
               break;
        }
        key=1-key;
      //  cout<<i<<" ";
        ans2.pb(i);
    }
  // return 0;
     for(i=0;i<n+m;i++){
        if(ans1.size()<ans2.size()){
            cout<<id1[i]<<" ";
        }
        else{
            cout<<id2[i]<<" ";
        }
    }
    cout<<endl;
    cout<<min(ans1.size(),ans2.size())<<endl;

    for(i=0;i<min(ans1.size(),ans2.size());i++){
        if(ans1.size()<ans2.size()){
            cout<<ans1[i]<<" ";
        }
        else{
            cout<<ans2[i]<<" ";
        }
    }


return 0;
}

