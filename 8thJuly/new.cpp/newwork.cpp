# include <iostream>
using namespace std;
int main(){

string bankname;
cout<<"enter a name;";
cin>>bankname;

int balance=10000;

if(bankname=="sbi"){

    int pin;
    cout<<"enter a pin:";
    cin>>pin;

    if(pin == 1234){

        string option;
        cout<<"enter withdraw deposit balance check:";
        cin>>option;

          if(option=="withdraw"){

             int amount;
             cout<<"enter a amount:";
             cin>>amount;

              if(amount>0 && amount<=balance){
                cout<<"after withdraw your amount is:"<<balance-amount;
              }

              else{
                cout<<"not enough balance";
              }

                 else if(option == "deposit"){
                int amount;
                cout<<"enter a amount:";
                cin>>amount;

                if(amount>0){
                    cout<<"after deposit your balance is:"<<balance+amount;
                }
                else{cout<<"invalid"}
              }
               
              else if(option == "balance check"){
                cout<<balance;
              }
              else{
                cout<<"invalid amount";
              }
          }
        
    }

    else{
        cout<<"wrong pin";
    }


    }
    else{
        cout<<"invalid";}
    



}
