#include<iostream>
using namespace std;
double area_of_circle(int r){
    double result=3.14*r*r;
    return result;

}
double circumference_of_circle(int r){
    double result=2*3.14*r;
    return result;
}
int main(){
    int radius;
    cout<<"enter the radius:"<<endl;
    cin>>radius;
    cout<<area_of_circle(radius)<<endl;
    cout<<circumference_of_circle(radius)<<endl;


}