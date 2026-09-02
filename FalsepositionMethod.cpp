#include<bits/stdc++.h>

using namespace std;

float func(float x){
    return x*x*x - x*x - 2;
}

int main(){
    cout<<"Enter the value of a and b: ";
    float a, b, c;
    cin>>a>>b;

    if(func(a)*func(b)>= 0){
        cout<<"Invalid entry.. Try again..";
    }
    cout<<fixed<<setprecision(3);
    cout<<left<<setw(10)<<"a"<<setw(10)<<"b"<<setw(10)<<"c"<<setw(10)<<"func(a)"<<setw(10)<<"func(b)"<<setw(10)<<"func(c)"<<endl;
    while(1){

        c = (a*func(b)-b*func(a))/(func(b)-func(a));
        cout<<left<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<func(a)<<setw(10)<<func(b)<<setw(10)<<func(c)<<endl;
        if(func(a)*func(c)<0){
            b = c;
        }
        if(func(a)*func(c)>0){
            a = c;
        }

        if(fabs(func(c))<=0.001){
            break;
        }


    }

    cout<<"Root: "<<c;
    return 0;
}