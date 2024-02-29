#include<iostream>
using namespace std;

int main(){
    //A->90
    //B->70
    //C->50

    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    if(num>=90)
    {
        cout<<"Grade A";
    }
    else if(num>=70)
        {
            cout<<"Grade B";
        }
        else{
            if(num>=50)
            {
                cout<<"Grade C";
            }
            else{
                cout<<"Failed!";
            }
        }
        
    
    
    return 0;
}