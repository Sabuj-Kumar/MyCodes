#include<bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define ull unsigned long long
#define db double
#define ldb long double
#define pii pair< int,int >
#define pll pair< ll,ll >
#define ft first
#define sd second
#define pb push_back
#define pf push_front
#define sc( n ) scanf("%d",&n)
#define sl( n ) scanf("%lld",&n)
#define Case( n ) for(int cs = 1; cs <= n; cs++)
#define lop(i,v,n) for(int i = v; i < n; i++)
#define op ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define in freopen("in.txt","r",stdin)

using namespace std;

void file(){

    #ifndef ONLINE_JUDGE
    in;
    #endif // ONLINE_JUDGE
}

int I() { int n; sc( n ); return n; }
ll Il() { ll  n; sl( n ); return n; }

vector< ll > Suffix_Array(const string &s){

    int sz = s.size(),alv = 256;
    vector< ll > p(sz,0),c(sz,0),cnt(max(alv,sz),0);

    for(int i = 0; i < sz; i++) cnt[ s[ i ] ]++;
    for(int i = 1; i < alv; i++) cnt[ i ] += cnt[ i - 1 ];
    for(int i = 0; i < sz; i++) p[ --cnt[ s[ i ] ] ] = i;

    c[ p[ 0 ] ] = 0;
    ll css = 1;

    for(int i = 1; i < sz; i++){

        if(s[ p[ i ] ] != s[ p[ i - 1 ] ]) css++;

        c[ p[ i ] ] = css - 1;
    }

    vector< ll > pn(sz,0),cn(sz,0);

    for(int lg = 0; (1 << lg) < sz; lg++){

        for(int i = 0; i < sz; i++){

            pn[ i ] = p[ i ] - (1 << lg);

            if(pn[ i ] < 0) pn[ i ] += sz;
        }

        fill(cnt.begin(),cnt.begin()+css,0);

        for(int i = 0; i < sz; i++) cnt[ c[ pn[ i ] ] ]++;
        for(int i = 1; i < css; i++) cnt[ i ] += cnt[ i - 1 ];
        for(int i = sz - 1; i >= 0; i--) p[ --cnt[ c[ pn[ i ] ] ] ] = pn[ i ];

        cn[ p[ 0 ] ] = 0;
        css = 1;

        for(int i = 1; i < sz; i++){

            pll fst = { c[ p[ i ] ],c[ (p[ i ] + (1 << lg)) % sz ] };
            pll snd = { c[ p[ i - 1 ] ],c[ (p[ i - 1 ] + (1 << lg)) % sz ] };

            if(fst != snd) css++;

            cn[ p[ i ] ] = css - 1;
        }
        c = cn;
    }
    return p;
}

vector< ll > LCP(const string &s,const vector< ll > &p){

    int sz = s.size(),k = 0;
    vector< ll > rnk(sz,0),lcp(sz-1,0);

    for(int i = 0; i < sz; i++) rnk[ p[ i ] ] = i;

    for(int i = 0; i < sz; i++){

        if(rnk[ i ] == sz - 1) { k = 0; continue; }

        int j = p[ rnk[ i ] + 1 ];

        while(i + k < sz and j + k < sz and s[ i + k ] == s[ j + k ]) k++;

        lcp[ rnk[ i ] ] = k;

        if( k ) k--;
    }
    return lcp;
}
int main(){

    op;
    //file();

    int t;

    cin >> t;

    Case( t ){

        string s,ch;
        ll k,total1 = 0,total2 = 0;

        cin >> ch >> k; k -= 2;

        s += ch;
        s += ch;

        ll sz = s.size();

        s += '$';

        vector< ll > p = Suffix_Array( s );
        vector< ll > lcp = LCP(s,p);
        p.erase(p.begin());
        s.erase(s.end()-1);

        for(int i = 0; i < sz; i++){

            ll O = sz - p[ i ] - lcp[ i ];

            if(O > 0) total1 += O;
        }

        if( !k ){

            cout << "Case " << cs << ": "<< total1 << endl;
            continue;
        }

        s += ch;
        sz = s.size();

        s += '$';

        p = Suffix_Array( s );
        lcp = LCP(s,p);
        p.erase(p.begin());
        s.erase(s.end()-1);

        for(int i = 0; i < sz; i++){

            ll O = sz - p[ i ] - lcp[ i ];

            if(O > 0) total2 += O;
        }

        cout << "Case " << cs << ": "<< total1 + (total2 - total1) * k << endl;
    }

    return 0;
}
