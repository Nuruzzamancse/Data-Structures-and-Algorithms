int a[100];
int n;
void print(){

    for(int i=0;i<n;i++)
        printf("%d",a[i]);

    printf("\n");
}

void solve(int i){

    if(i==n){
        print();

        return;
    }

    a[i] = 0;

    solve(i+1);

    a[i] = 1;

    solve(i+1);


}

int main(){

    scanf("%d",&n);
    solve(0);

}
