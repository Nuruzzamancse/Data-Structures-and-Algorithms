#include<bits/stdc++.h>

using namespace std;

int N, A[1000], S[1000], Total;

void read()
{
    Total = 0;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d",&S[i]);
        Total += S[i];
    }

}
void print()
{
    int sum = 0;

    for(int i=0;i<N;i++) if(1==A[i]){
            sum += S[i];
    }

        printf("Sum1 = %d Sum2 = %d Difference = %d\n",sum, Total - sum,abs((Total-sum)-sum));
}

void solve(int i)
{
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

int main()
{
    read();
    solve(0);
    return 0;
}
