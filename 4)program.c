int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d",prime(n));
    return 0;
}

int prime(int n)
{
    int i;
    while(n++){
        for(i=2;i<n;i++)
        {
           if(n%i==0)
               break;
        }
        if(i==n)
            return n;
    }
}
