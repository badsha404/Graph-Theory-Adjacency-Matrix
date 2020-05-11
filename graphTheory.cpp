#include<bits/stdc++.h>
using namespace std;

int adj[100][100];
int  main(){

    int node,edgs;
    cin>>node>>edgs;

    int n1,n2;
    for(int i=0;i<edgs;++i){
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] =1;
    }

    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            printf("%d\t",adj[i][j]);
        }printf("\n");
    }

    return 0;
}
