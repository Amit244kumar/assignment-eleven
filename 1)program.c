int main()
{
    int num1,num2;
    printf("Enter the two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("%d",LCM(num1,num2));
    getch();
    return 0;
}

int LCM(int n1,int n2)
{
    int i=2,n=1,c=0;
    while(1)
    {
        if(n1==1 && n2==1)
             break;
        if(n1%i==0&&n2%i==0)
        {
            n1/=i;
            n2/=i;
            n*=i;
            c=1;
            continue;
        }else{
            if(n1%i==0)
            {
                n1/=i;
                n*=i;
                c=1;
                continue;
            }
            else{
                c=0;
            }
            if(n2%i==0)
            {
                n2/=i;
                n*=i;
                c=1;
                continue;
            }
            else{
                c=0;
            }
        }
        if(!c)
        {
            i++;
        }
    }
    return n;
}
