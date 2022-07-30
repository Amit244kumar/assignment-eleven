int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("%d",HCF(num1,num2));
    getch();
    return 0;
}
int HCF(int n1,int n2)
{
    int i=1,n;
    while(i)
    {
        if(n1%i==0&&n2%i==0)
        {
            n=i;
        }
        i++;
        if(n1<i&&n1<i)
            break;
    }
    return n;

}
