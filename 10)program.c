int main()
{
    sumOfSeries();
    getch();
    return 0;
}
void sumOfSeries()
{
    int n1=1,n2=2,n3=3,n4=4,n5=5;
    float sum;
    sum=(fact(n1)/1)+(fact(n2)/2)+(fact(n3)/3)+(fact(n4)/4)+(fact(n5)/5);
    printf("The sum of 1!/1+2!/2+3!/3+4!/4+5!/5 is \n %f",sum);

}
int fact(int n)
{
    int i=n-1;
    while(i)
    {
        n*=i;
        i--;
    }
    return n;
}
