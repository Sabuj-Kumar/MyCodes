#include<bits/stdc++.h>
#define op ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define in freopen("in.txt","r",stdin);

using namespace std;

void file(){

    #ifndef ONLINE_JUDGE
    in
    #endif // ONLINE_JUDGE
}

struct node{

    int mark;
    node *next[ 10 ];

    node(){

        mark = 0;
        for(int i = 0; i < 10; i++) next[ i ] = NULL;
    }
};

node *root;

void Insert(char* s){

    node *temp = root;

    for(int i = 0; s[ i ] != '\0'; i++){

        int idx = s[ i ] - 48;

        if(temp -> next[ idx ] == NULL) temp -> next[ idx ] = new node();

        temp = temp -> next[ idx ];
    }
    temp -> mark++;
}

int Search(char* c){

    node *temp = root;

    for(int i = 0; c[ i ] != '\0'; i++){

        int idx = c[ i ] - 48;

        if(temp -> next[ idx ] == NULL ) return 0;

        temp = temp -> next[ idx ];
    }

    return temp -> mark;
}
void Delete(node *temp){

    for(int i = 0; i < 10; i++) if(temp -> next[ i ] != NULL) Delete( temp -> next[ i ]);

    delete(temp);
}
int main(){

    file();

    int n;

    while( scanf("%d",&n) == 1 ){

        root = new node();
        char v[ n ][ 33 ];

        for(int i = 0; i < n; i++) {

            scanf("%s",v[ i ]);

            int k = 0,j = 0,u = 0;
            char ch[ 33 ];

            while( v[ i ][ k ] == '0' and v[ i ][ k ] != '\0') k++;

            if(k > 0){

                while(v[ i ][ k ] != '\0') ch[ j++ ] = v[ i ][ k++ ];

                ch[ j ] = '\0';
            }

            if(j > 0){

                for(j = 0; ch[ j ] != '\0'; j++) v[ i ][ u++ ] = ch[ j ];

                v[ i ][ u ] = '\0';

            }
            else {

                u = 0;

                for(int m = 0; m < v[ i ][ m ] != '\0'; m++) if(v[ i ][ m ] != '0') u = 1;

                if( !u ) v[ i ][ 0 ] = '0',v[ i ][ 1 ] = '\0';

            }

            Insert(v[ i ]);
        }

        int mxi = 0;

        for(int i = 0; i < n; i++)
            mxi = max(mxi,Search(v[ i ]));

        printf("%d\n",mxi);

        Delete( root );
    }
    return 0;
}
