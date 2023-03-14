#include<iostream>

using namespace std;

int f1(int a1){

    long int b=a1;

        if(b==0){

            cout<<"1"<<endl;
        }

       int count=0;

        while(b!=0){
            
                b=b/10;
            count=count+1;
        }

        cout<<count;

}

int main(){

    long int i1;

    cout<<"Enetr:"<<endl;
    cin>>i1; 

    f1(i1);


   
}