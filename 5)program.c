
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    NprimeNumbers(n);
    getch();
    return 0;
}
void NprimeNumbers(int n)
{
    int i,v=2;
    for(i=1;i<=n;)
    {
        if(primeNo(v))
        {
            printf("%d ",v);
            i++;
        }
        v++;
    }
}
int primeNo(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
