int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fibSeries(n);
    getch();
    return 0;
}
void fibSeries(int n)
{
    int i=1,j=0,temp;
    while(n)
    {
        printf("%d ",j);
        temp=j;
        j=j+i;
        i=temp;
        n--;
    }
}
