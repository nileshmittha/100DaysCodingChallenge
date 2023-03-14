#include<iostream>

using namespace std;

int main(){

    int no1=0, no2=1;

    int n;

    cout<<"Enetr nuber: "<<endl;

    cin>>n;

    cout<<no1<<","<<no2<<",";

    for(int i=1; i<=n; i++){



        int sum=no1+no2;

        no1=no2;

        no2=sum;

        cout<<sum<<",";


    }
}