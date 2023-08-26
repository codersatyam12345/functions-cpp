#include<iostream>
using namespace std;
//function
int square(int m){
    int square_of_number=m*m;
    return square_of_number;
}

int main()
{
for(int i=1;i<=5;i++){
    cout<<square(i)<<endl;
}
return 0;
}