#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter any year :";
    cin>>year;

    if(year % 4 ==0 && year % 100!= 0)
    {
       cout<<"it's leep year"<<endl;
    }
    else if(year % 400 == 0)
    {
        cout<<"it's leep year"<<endl;
    }
    else
    {
        cout<<"it's not leep year "<<endl;
    }
    return 0;
}