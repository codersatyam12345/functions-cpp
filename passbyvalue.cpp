#include<iostream>
using namespace std;
void change_value(int z){
    z=100;
    cout<<z<<endl;

}
int main()
{
    int a=5;
    change_value(a);
    cout<<a<<endl;


}