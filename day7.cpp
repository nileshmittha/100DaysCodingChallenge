#include<iostream>

using namespace std;

int Days(int a,int b){

    int month,year;

    month=a;

    year=b;


             if(month==2) 
             {

                       if(year % 400 == 0)
                       {
                            cout<<"29"<<endl;


                       } 
                       else 
                       {
                            cout<<"28"<<endl;

                       }
              }

    else if( month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 )
    {
        cout<<"31"<<endl;
    }

    else
    {
        cout<<"30"<<endl;
    }
        return 0;

}

int main(){

    int month,year;

    cout<<"Enetr Month:"<<endl;
    cin>>month;

    cout<<"Enetr Year:\n"<<endl;
    cin>>year;

    Days(month,year);

    
}