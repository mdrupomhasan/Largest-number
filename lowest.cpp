#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4,low;
    cout<<"enter num1 :";
    cin>>num1;
    cout<<"enter num2 :";
    cin>>num2;
    cout<<"enter num3 :";
    cin>>num3;
    cout<<"enter num4 :";
    cin>>num4;

    
    if(num1<num2 && num1<num3 && num1<num4)
    {
        low = num1;
    }
    else if(num2<num1 && num2<num3 && num2<num4)
    {
        low = num2;
    }
    else if(num3<num1 && num3<num2 && num3<num4)
    {
        low = num3;
    }
    else
    {
        low = num4;
    }
    cout<<"lowest :"<<low<<endl;
    return 0;
}