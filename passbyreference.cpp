#include<iostream>
using namespace std;
void change_value(int &x,int &y){
    x=100;
    y=500;
    cout<<x<<" "<<y<<endl;
}
int main()
{
    int a=10;
    int b=80;
    change_value(a,b);
    cout<<a<<" "<<b;

}