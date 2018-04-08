int N;

int getSum(int i){

    if(i>N)
        return 0;
    printf("%d ",3*i);

    return 3*i + getSum(i+1);

}

int main(){

    int i, sum=0;

    scanf("%d",&N);

    printf("In iteration method:");


    for(i=1;i<=N;i++){
        sum += 3*i;

        printf("%d ",3*i);
    }

    printf("\nSum = %d\n",sum);

    printf("\nIn recursion process:");

    sum = getSum(1);

    printf("\nSum = %d",sum);

}
