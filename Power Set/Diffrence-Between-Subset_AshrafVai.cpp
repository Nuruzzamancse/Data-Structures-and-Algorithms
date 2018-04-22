#include<bits/stdc++.h>

using namespace std;

#define SIZE_M 101

int binary[SIZE_M];
int m, coin[SIZE_M];
int Total, Ans;

int abs(int n)
{
    if(n<0)
        return -n;
    return n;
}

///1
/*
void solve(int i, int sum1)
{
    int sum2;

    if(i==m){
        sum2 = Total - sum1;
        printf("%d %d\n",sum1, sum2);
        return;
    }

    binary[i] = 0;

    solve(i+1 , sum1);

    binary[i] = 1;

    solve(i+1, sum1 + coin[i]);
}
*/

///2
/*
void solve(int i, int sum1)
{
    int sum2;

    if(i==m){
        sum2 = Total - sum1;
        printf("%d\n",abs(sum1 - sum2));
        return;
    }

    binary[i] = 0;

    solve(i+1 , sum1);

    binary[i] = 1;

    solve(i+1, sum1 + coin[i]);
}
*/

///3

int solve(int i, int sum1)
{
    int sum2, left, right;

    if(i==m){
        sum2 = Total - sum1;
        //printf("%d\n",abs(sum1 - sum2));
        return abs(sum1 - sum2);
    }

    binary[i] = 0;

    left = solve(i+1 , sum1);

    binary[i] = 1;

    right = solve(i+1, sum1 + coin[i]);

    return min(left,right);
}

void readCase()
{

    scanf("%d",&m);
    for(int i=0; i<m; i++)
        scanf("%d",&coin[i]);

}

void solveCase()
{
    Total = 0;

    for(int i=0; i<m; i++)
        Total += coin[i];

    Ans = solve(0,0);
}

void printCase()
{
    printf("%d\n",Ans);
}

int main()
{
    int n;

    scanf("%d",&n);

    while(n--)
    {
        readCase();
        solveCase();
        printCase();
    }

    return 0;
}
