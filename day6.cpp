#include<iostream>

using namespace std;

int f1(int a,int b){

    int x,y;
    x=a;
    y=b;

            if( x > 0 && y > 0 ){

        cout<<"This point lies in First Quadrant"<<endl;

    }

    else if( x < 0 && y > 0 ){

        cout<<"This point lies in Second Quadrant"<<endl;

    }

    else if( x < 0 && y < 0 ){

        cout<<"This point lies in Third Quadrant"<<endl;

    }

    else{

            cout<<"This point lies in Fourth Quadrant"<<endl;
    }


        return 0;

}

int main(){

    int x1,y1;

    cout<<"Enetr Any Number:"<<endl;
    cin>>x1>>y1;

    f1(x1,y1);

    
}