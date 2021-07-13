#include<bits/stdc++.h>

using namespace std;

vector<int > graph[ 30 ];
bool vis[ 30 ];
stack< int > st;

void DFS(int n){

    if(vis[ n ]) return;

    vis[ n ] = true;

    for(auto x : graph[ n ]) DFS( x );

    st.push( n );
}
int main(){

    freopen("input.txt","r",stdin);

    int c = 0;
    string s;
    map<char,int> m;
    map<int,char> mp;

    memset(vis,false,sizeof vis);
    for(int i = 0; i < 30; i++) graph[ i ].clear();

    while(cin >> s){

        if(s == "#") break;

        for(int i = 1; i < s.size(); i++) {

            if(m[ s[ i - 1 ] ] == 0) {

                m[ s[ i - 1 ] ] =  ++c;

                mp[ c ] =  s[ i - 1 ];
            }

            if(m[ s[ i ] ] == 0){

                m[ s[ i ] ] = ++c;

                mp[ c ] =  s[ i ];
            }

            graph[ m[ s[ i-1 ] ] ].push_back( m[ s[ i ] ] );
        }
    }

    for(int i = 1; i <= c; i++) {

        if(!vis[ i ]) DFS( i );
    }

    while(!st.empty()){

        char ch = st.top();

        st.pop();

        cout << mp[ ch ];
    }

    cout << endl;

    return 0;
}
