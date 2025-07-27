#include <iostream>
using namespace std;
int main(){

string website;
cout<<"enter a name:";
cin>>website;

if(website=="amazon"){

    string option;
    cout<<"enter a product or services:";
    cin>>option;

    if(option=="product"){

        string order;
        cout<<"enter shoes or clothes:";
        cin>>order;

        if(order=="shoes"){
            cout<<"1000";
        }
        else if(order=="clothes"){
            cout<<"2000";
        }
        else{
            cout<<"invalid";
        }
        
    }
    else if(option == "service"){
        cout<<"not available";
    }

    else{
        cout<<"invalid";
    }

    
}
else{
    cout<<"invalid";
}





}
