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
#include <bitset>
#include<string>
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
#define ff first
#define ss second
#define mp(x,y) make_pair(x,y)
typedef long long ll;
struct node{
    int l;
    int pos;
}tp;

 vector<node> st;
int isChar(int n){
    if(n>=(int)'a' && n<=(int)'z'){
        return 1;
    }
    else{
        return 0;
    }
}
void printError(int letter,int i,int j){
    char ch = (char)letter;
    ll a1 = i/50;
    ll a2 = i%50;
    ll b1 = j/50;
    ll b2 = j%50;
    a1++;b1++;a2++;b2++;
    cout<<a1<<":"<<a2<<":"<<" warning: shadowed declaration of "<<ch<<", the shadowed position is";
	cout<<" "<<b1<<":"<<b2<<endl;
}
int main(){
    ios::sync_with_stdio(0);
    string s,str;
    ll n,i,j;
    cin>>n;
    cin.get();
    for(i=0;i<n;i++){
        getline(cin,str);//cin>>str;
        str.resize(50,' ');
        s+=str;
    }
    for(i=0;i<s.size();i++){
    	
        if(s[i]=='{'){
            tp.l = -1;
            tp.pos = i;
            st.pb(tp);
        }
        else if(s[i]=='}'){
            while(st[st.size()-1].l != -1){
                st.pop_back();
            }
            st.pop_back();
            continue;
        }
        if(isChar((int)s[i])){
            for(j=st.size()-1;j>=0;j--){
            	if(st.empty())break;
                if(st[j].l== (int)s[i]){
                    printError(st[j].l,i,st[j].pos);
                    break;
                }

            }
            tp.l = (int)s[i];
            tp.pos = i;
            st.pb(tp);
        }
        else{
            tp.l = (int)s[i];
            tp.pos = i;
            st.pb(tp);
        }
    }
    return 0;

}
