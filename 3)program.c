int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(prime(n))
    {
        printf("The number is prime");
    }
    else{
        printf("The number is not57 prime");
    }
    getch();
    return 0;
}

int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
