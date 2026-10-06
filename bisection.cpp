#include<bits/stdc++.h>
using namespace std;
float fun(float x){
    return x*x*x - 2*x - 2;
}
int main(){
    float a,b;
    while(1){
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
        if(fun(a)*fun(b)<0){
            break;
        }
        else cout<<"Invalid number... Enter again." <<endl;

    }

    float c;
    while(1){
            c = (a+b)/2;
            if(fun(c)*fun(a)<0){
                b=c;
            }

            if(fun(c)*fun(a)>0){
                a = c;
            }

            if(fabs(a-b) <= 0.001){
                break;
            }


    }

    cout<<"The finding root: "<<c;


}
