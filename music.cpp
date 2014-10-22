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
#define N 10005
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
#define E 0
#define O 1
typedef long long ll;

//C,C#,D,D#,E,F,F#,G,G#,A,B and S.



int main(){
    ios::sync_with_stdio(0);
    ll n,t;
    cin>>t;
    string s1,s2,s3;
    while(t--){
        cin>>s1>>s2>>s3;
        cout<<s1<<" "<<s2<<" "<<s3<<endl;
        if(s1=="C"&&s2 =="d"){
            cout<<"Minor\n";continue;
        }
        if(s1=="c"&&s2 =="E"){
            cout<<"Minor\n";continue;
        }
        if(s1=="D"&&s2 =="F"){
            cout<<"Minor\n";continue;
        }
        if(s1=="d"&&s2 =="f"){
            cout<<"Minor\n";continue;
        }
        if(s1=="E"&&s2 =="G"){
            cout<<"Minor\n";continue;
        }
        if(s1=="F"&&s2 =="g"){
            cout<<"Minor\n";continue;
        }
        if(s1=="f"&&s2 =="A"){
            cout<<"Minor\n";continue;
        }
        if(s1=="G"&&s2 =="B"){
            cout<<"Minor\n";continue;
        }
        if(s1=="g"&&s2 =="S"){
            cout<<"Minor\n";continue;
        }
        if(s1=="A"&&s2 =="C"){
            cout<<"Minor\n";continue;
        }
        if(s1=="B"&&s2 =="c"){
            cout<<"Minor\n";continue;
        }
        if(s1=="S"&&s2 =="D"){
            cout<<"Minor\n";continue;
        }

        else{
            cout<<"Major\n";
        }

    }

return 0;
}


