#include<iostream>

using namespace std;

int f1(int a){

    int no=a;

    int fact=1;

        for(int i=no; i>=2; i--){


            fact=fact*i;
        }

        cout<<fact;

}

int main(){

    int num1;

    cout<<"Enetr:"<<endl;
    cin>>num1; 

    f1(num1);


   
}