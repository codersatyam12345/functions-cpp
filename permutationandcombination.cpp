#include<iostream>
using namespace std;
// first we create factorial function
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;

    }
    return f;

}
// we can make a seperate function for combination
int combination(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
// we can make seperate function for permutation
int permutation(int n,int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}

    

int main(){
    //here wecall ncr or npr 
    int n;
    cout<<"give the value of n"<<endl;
    cin>>n;
    int r;
    cout<<"give the value of r"<<endl;
    cin>>r;
    //calculate ncr
    int ncr;
    int npr;
    // int nfact=fact(n);
    // int rfact=fact(r);
    // int nrfact=fact(n-r);
    // ncr=nfact/(rfact*nrfact);
    ncr=combination(n,r);
    npr=permutation(n,r);

    cout<<ncr<<endl<<npr<<endl;


    
    

}