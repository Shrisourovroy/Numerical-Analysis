#include<bits/stdc++.h>

using namespace std;

float func(float x){
    return x*x*x - x*x - 2;
}
int main(){
    cout<<"Enter the value of a and b: ";
    float a, b, c;

    cin>>a>>b;
    if(func(a)*func(b)>=0) {
        cout<<"Invalied entry.. try again...";
        return 0;
    }
    cout<<fixed<<setprecision(3);
    cout<<left<<setw(10)<<"a"<<setw(10)<<"b"<<setw(10)<<"c"<<setw(10)<<"func(a)"<<setw(10)<<"func(b)"<<setw(10)<<"func(c)"<<endl;
    while(1){
        c = (a+b)/2;
        cout<<left<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<func(a)<<setw(10)<<func(b)<<setw(10)<<func(c)<<endl;
        if(func(a)*func(c)<0){
            b=c;
        }
        if(func(a)*func(c)>0){
            a=c;
        }
        if(fabs(b-a)<=0.001){
            break;
        }

    }
    cout<<"The roots: "<<c;
    return 0;
}
