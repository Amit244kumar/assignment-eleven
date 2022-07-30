int main()
{
    int i;
    printf("Enter the number:");
    scanf("%d",&i);
    printf("The square of number is %d",square(i));
    getch();
    return 0;
}
int square(int n)
{
    return n*n;
}
