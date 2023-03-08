#include<iostream>

using namespace std;


int main(){

    int no1;

    cout<<"Enetr Any Number:"<<endl;
    cin>>no1;

    if(no1>0){

        cout<<"Positive number"<<endl;

    }

    else if(no1==0){

        cout<<"Neither positive nor negative"<<endl;
        
    }

    else{

        cout<<"Negative number"<<endl;
    }

}