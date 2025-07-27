#include <iostream>
using namespace std;
int main(){

 string restaurant;
 cout<<"name of restaurant:";
 cin>>restaurant;

    if(restaurant == "taj"){

         string option;
         cout<<"enter breakfast lunch dinner:";
         cin>>option;

            if(option == "breakfast"){

                  string order;
                  cout<<"order name samosa or poha:";
                  cin>>order;

                       if(order == "samosa"){cout<<200;}
                       else if(order == "poha"){cout<<100;}
                       else{cout<<"breakfast order is wrong";}
            }
            else if(option == "lunch"){
                  
                 string order;
                 cout<<"order name veg or non-veg:";
                 cin>>order;

                       if(order == "veg"){cout<<"2000";}
                       else if(order == "non-veg"){cout<<"3000";}
                       else{cout<<"lunch order is wrong";}

            }
            else if(option == "dinner"){

                  string order;
                  cout<<"order name thali or buffe:";
                  cin>>order;

                        if(order == "thali"){cout<<"5000";}
                        else if(order == "buffe"){cout<<"6000";}
                        else{cout<<"dinner order is wrong";}
            }
            else{cout<<"wrong option";}
    }
    else{cout<<"invalid name of restaurant";}






}