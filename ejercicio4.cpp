int getMax(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
double getMax(double a, double b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
    int x=5,y=2;
    double n=5.0,m=2.0
    std::cout<< getMax(x,y)<<"\n";
    std::cout<< getMax(n,m)<<"\n";
    return 0;
}
