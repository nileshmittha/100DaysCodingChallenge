#include<iostream>

using namespace std;


int main(){

    char ch;

    cout<<"Enetr Any character: "<<endl;
    cin>>ch;

    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){

        cout<<int(ch);
    }
    else {
        cout<<"Please Enetr Characetr::"<<endl;
        
    }
}