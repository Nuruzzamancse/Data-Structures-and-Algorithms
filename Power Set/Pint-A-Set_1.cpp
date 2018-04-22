#include<bits/stdc++.h>

using namespace std;

int N, A[100];

void read()
{
    scanf("%d",&N);

    for(int i=0; i<N; i++)
        scanf("%d",&A[i]);

}

void print()
{
    printf("{");
    for(int i=0; i<N; i++)
        printf("%d, ",A[i]);
    printf("}\n");
}

int main()
{
    read();

    print();

    return 0;
}

