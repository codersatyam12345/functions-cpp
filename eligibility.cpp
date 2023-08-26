#include<iostream>
using namespace std;
bool check_eligibility(int age,int limit){
    if(age>=limit){
        return true;
    }
    return false;
}
int main()
{
    int age_of_person;
    cout<<"enter the age of person"<<endl;
    cin>>age_of_person;
    int age_limit=18;
    int is_eligible_for_voting=check_eligibility(age_of_person,age_limit);
    if(is_eligible_for_voting){
        cout<<"yes,the current person is eligible for voting"<<endl;

    }
    else{
        cout<<"no,the current person is not eligible for voting"<<endl;
    }

}