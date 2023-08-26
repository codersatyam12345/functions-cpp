#include<iostream>
using namespace std;
bool is_prime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main()
{
    int a;
    cout<<"enter first number:"<<endl;
    cin>>a;
    int b;
    cout<<"enter last number:"<<endl;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(is_prime(i)){
            cout<<i<<endl;
        }
    }
}