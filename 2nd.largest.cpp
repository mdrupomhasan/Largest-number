//larger number among 4....
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter c : ";
    cin>>c;
    cout<<"enter d : ";
    cin>>d;

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                cout<<"larger a : "<<a<<endl;        
            }
            else
            {
                cout<<"larger d : "<<d<<endl;
            }
        }
        if(c>d)
        {
            cout<<"larger c : "<<c<<endl;
        }
        else
        {
            cout<<"larger d : "<<d<<endl;
        }
    
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                cout<<"larger b : "<<b<<endl;
            }
            else 
            {
                cout<<"larger d : "<<d<<endl;
            }
        }
        if(c>d)
        {
            cout<<"larger c : "<<c<<endl;

        }
        else
        {
            cout<<"larger d : "<<d<<endl;
        }

    }

    return 0 ;

}