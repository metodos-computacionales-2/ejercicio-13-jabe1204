#include<iostream>
using namespace std;

int fib(int n);

int main()
{
  int n;
  cout<<"Ingresa un valor para sacar el fibonacci"<<endl;
  cin >> n;
  for(int i =0; i <= n; i++)
  {
    cout << fib(i) << " "<<endl;
  }
  return 0;
}

int fib(int n)
{
    if(n < 2)
    {
        return n;
    }
    return fib(n-1) + fib(n-2);
}