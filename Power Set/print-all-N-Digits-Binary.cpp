#include<bits/stdc++.h>

using namespace std;

int N, A[100];

void read(){

    scanf("%d",&N);

}

void print(){

    for(int i=0; i<N; i++)
        printf("%d",A[i]);
    printf("\n");

}

void solve(int i){

    if(i==N)
    {
        print();
        return;
    }
    A[i] = 0;
    solve(i+1);
    A[i] = 1;

    solve(i+1);

}

int main(){

    read();
    solve(0);
    return 0;

}
