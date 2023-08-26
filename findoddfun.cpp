#include<iostream>
using namespace std;
bool is_odd(int x){
    if(x%2==0){
        //number is even
        return false;
     }
    else{
        //number is odd
        return true;
        }
}
int main()
{
    int a;
    cout<<"enter first number"<<endl;
    cin>>a;
    int b;
    cout<<"enter last number"<<endl;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(is_odd(i)){
            cout<<i<<endl;
        }
    }
}