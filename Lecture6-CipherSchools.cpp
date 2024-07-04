1. BASIC CODE :- 

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int c,d;

    cout<<"Input 2 integers a and b"<<endl;
    cout<<"Input 4 integers a and b"<<endl;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;


    cout<<(a>b);
    
    cout<<(a>b && c>d);

    cout<<(a>b || c>d);

    float a;
    cout<<"Enter a float value"<<endl;
    cin>>a;
    if(a > 0.01)
    {
        cout<<"The condition in if statement is correct";    

    }

    float a, b;
    cout<<"Give 2 floating point numbers as input"<<endl;
    cin>>a>>b;

     if(a>0.01 && b>a)   
     {
         cout<<"The condition in if statement is correct";      
     }

    if(a>0.01 || b>a)  
    {
        cout<<"The condition in if statement is correct";       

    }
    else
    {
        cout<<"The condition is false";
    }
    return 0;
}

2. GRADE :-

#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Student, please enter the marks to calculate the grade : "<<endl;
    cin>>marks;

    if(marks>90)
    {
        cout<<"A";
    }
    else if(marks<90 && marks>80)
    {
        cout<<"B";
    }
    else if(marks<80 && marks>70)
    {
        cout<<"C";
    }
    else
    {
        cout<<"Pass";
    }
    return 0;
}

3. if-else if-else :-

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cin>>a>>b>>c;
    if(a>b && c>d)
    {
        cout<<"hi";
    }
    else if(a>b && c>d)
    {
        cout<<"hello";
    }
    else
    {
        cout<<"hey";
    }
  return 0;
}

4. Switch Case :-

#include<iostream>
using namespace std;

int main()
{
    
    cin>>a;

    switch(a) 
    {
        case 1:
            cout<<"The value of a is 1 "<<endl;
            break;              

        case 2:
            cout<<"The value of a is 2 "<<endl;
            break;

        default:
            cout<<"default will be always printed"<<endl;
            break;
    }
  return 0;
}