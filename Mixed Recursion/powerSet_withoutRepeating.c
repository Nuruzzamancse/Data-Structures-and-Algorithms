int a[100];
int n;

///This program is for making n digit such as for 3 generate 0 1 2

///void print(){

///    for(int i=0;i<n;i++)
///        printf("%d",a[i]);

///    printf("\n");
///}

void print()
{
    int i, j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
            if(a[i]==a[j])
                return;
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n");
}
void solve(int i){


    if(i==n){
        print();

        return;
    }

    ///a[i] = 0;

    ///solve(i+1);

    ///a[i] = 1;

    ///solve(i+1);

    int j;

    for(j=0;j<n;j++)
    {
        a[i] = j;

        solve(i+1);
    }


}

int main(){

    scanf("%d",&n);

    solve(0);

}

