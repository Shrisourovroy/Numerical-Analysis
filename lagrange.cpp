#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of data point: ";
    cin>>n;
    float y[10], x[10];
    float xp,result = 0;
    float term;
    cout<<"Enter the data point...."<<endl;
    for(int i=0; i<n; i++){
        cout<<"X"<<i<<" and Y"<<i<<" :";
        cin>>x[i]>>y[i];
        cout<<endl;
    }
    cout<<"Enter the value of x to find y: ";
    cin>>xp;

    for(int j=0; j<n; j++){
        term = y[j];
        for(int i =0; i<n; i++){
            if(i!=j){
                term = term * (xp-x[i])/(x[j]-x[i]);
            }
        }
        result = result+term;
    }
    cout<<"Interpolated value of y: "<<result;
    return 0;

}
