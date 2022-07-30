int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    num1>num2?primeNo(num1,num2):primeNo(num2,num1);
    getch();
    return 0;
}                //40     30
void primeNo(int n1,int n2)
{
    while(n2<=n1)
    {
       if(primeOrNot(n2))
            printf("%d ",n2);
       n2++;
    }
}

int primeOrNot(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
