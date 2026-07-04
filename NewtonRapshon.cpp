#include<iostream>
#include<cmath>
using namespace std;

double func(double x)
{
    return 3*x - cos(x) - 1;
}

double dv(double x)
{
    return 3 + sin(x);

}

void newton(double x)
{
    double x0, x1;
    x0 = x;
    while(1)
    {
        x1 = x0 - (func(x0)/dv(x0));

        cout<<"Xn+1 :"<<x1<<endl;

        if(abs(x1-x0)<1e-6) break;

        x0 = x1;
    }

    cout<<"The root of x: "<<x1<<endl;

}

int main()
{
    double a;
    cout<<"Enter the value of a: "<<endl;

    cin>>a;

    newton(a);


    return 0;
}
