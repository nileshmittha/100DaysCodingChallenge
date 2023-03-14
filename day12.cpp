#include<iostream>

using namespace std;

int main(){

    int n;

    cout<<"enter any number:"<<endl;
    cin>>n;


    int sum=0;

    while(n>0){




        int n1=n%10;

      sum= n1+sum;

       n=n/10;
       

    }

    cout<<sum;
}