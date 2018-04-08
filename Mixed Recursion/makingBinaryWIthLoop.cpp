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

    for(j=0;j<2;j++){
        a[i] = j;
        slove(i+1);
    }


}

int main(){

    scanf("%d",&n);
    solve(0);

}

