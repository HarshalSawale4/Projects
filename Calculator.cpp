#include<iostream>
using namespace std;

void add(){
    int a,b,sum;
    cout<<"Enter num1 =";
    cin>>a;
    cout<<"Enter num2 =";
    cin>>b;
    sum= a+b;
    cout<<"Your addition is \n",sum;
}

void sub(){
     int a,b,sum;
    cout<<"Enter num1 =";
    cin>>a;
    cout<<"Enter num2 =";
    cin>>b;
    sum= a-b;
    cout<<"Your substraction is =\n"<< sum <<endl;
} 

void mul(){
    int a,b,sum;
    cout<<("Enter num1 =");
    cin>>a;
    cout<<"Enter num2 =";
    cin>>b;
    sum= a*b;
    cout<<"Your multiplication is = \n"<<sum <<endl;
}

void division(){
    int a,b,sum;
    cout<<("Enter num1 =");
    cin>>a;
    cout<<"Enter num2 =";
    cin>>b;
    sum= a/b;
    cout<<"Your divisionision is = \n" << sum <<endl;
}

int main(){
    int choice;
    do
    {
        cout<<"Welcome to Calculator Made By Harshal Vasant Sawale \n";
        cout<<"1 for addition \n";
        cout<<"2 for substraction \n";
        cout<<"3 for multiplication \n";
        cout<<"4 for divisionision \n";
        cout<<"5 for exit \n";
        cout<<"Enter your choice";
        cin>>choice;

        switch (choice)
        {
        case 1: add(); break;
        case 2: sub(); break;
        case 3: mul(); break;
        case 4: division(); break;
        case 5: cout<<"Exitingggg \n"; 
        default:cout<<"Enter valid statement"; break;
        }

    } while (choice != 5);

    
}