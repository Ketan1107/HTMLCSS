# include <iostream>
using namespace std;
int main(){

    string website;
    cout<<"enter a website:";
    cin>>website;

      if(website == "flipkart"){

          string option;
          cout<<"enter product or service:";
          cin>>option;
           
               if(option == "product"){

                   string gender;
                   cout<<"enter male or female:";
                   cin>>gender;

                     if(gender == "male"){

                        string order;
                        cout<<"enter shoes or clothes:";
                        cin>>order;

                          if(order == "shoes"){cout<<"1000";}
                          else if(order == "clothes"){cout<<"2000";}
                          else{cout<<"wrong order";}
                     }


                     else if(gender == "female"){

                        string order;
                        cout<<"enter jewellery or clothes:";
                        cin>>order;

                         if(order == "jewwllery"){cout<<"5000";}
                         else if(order == "clothes"){cout<<"3000";}
                         else{cout<<"wrong order for women";}
                     }
                     else{cout<<"invalid";}
               }
               else if(option == "service"){
                  cout<<"not available";
               }
               else {cout<<"wrong option";}
      }

      else{
        cout<<"invalid website";
      }












}
