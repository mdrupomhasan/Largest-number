//larger number among 4....
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> vi;
    int a;
    
    for(int i = 0; i<4 ; i++){
        if( i== 0)
            cout << "enter a number for a:" << endl;
            cin >> a;
            vi.push_back(a);
        else if(i==1)
            cout << "enter a number for b:" << endl;
            cin >> a;
            vi.push_back(a);
        else if( i== 0)
            cout << "enter a number for c:" << endl;
            cin >> a;
            vi.push_back(a);
        else
            cout << "enter a number for d:" << endl;
            cin >> a;
            vi.push_back(a);
    }
    
    sort(v.begin(), v.end());
    cout << "the largest number is :" << vi[0] << endl;
    cout << "the second largest number is :" << vi[1] << endl;
    
    return 0;

}
