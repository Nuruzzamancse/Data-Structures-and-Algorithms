#include<bits/stdc++.h>

using namespace std;

int N, A[1000], S[1000];

void read()
{
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&S[i]);

}
void print()
{
    int isFirst = 1;
    printf("{");
    for(int i=0;i<N;i++) if(1==A[i]){
            if(isFirst)
                isFirst = 0;
            else
                printf(", ");

            printf("%d", S[i]);
    }
        printf("}\n");
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
