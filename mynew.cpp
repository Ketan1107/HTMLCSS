#include  <iostream>
#include <limits>
#include <limits>
using namespace std ;
int main(){

    int a=10;
    cout<<&a<<endl;

    int b=20;
    cout<<&b<<endl;

    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(bool)<<endl;

    cout<<numeric_limits<int>::max()<<endl;
    cout<<numeric_limits<int>::min()<<endl;

    cout<<numeric_limits<float>::max()<<endl;
    cout<<numeric_limits<float>::min()<<endl;

    cout<<numeric_limits<bool>::max()<<endl;
    cout<<numeric_limits<bool>::min()<<endl;

    
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;

    cout<<CHAR_max<<endl;
    cout<<CHAR_min<<endl;



}