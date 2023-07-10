#include <iostream>
using namespace std;


class android 
{
    public :
    string android_version;
    string play_store;

};

class tablet : public android    // tablet inherits android
{
    public :
    string name;
     
};


class smartphone : public android  //smarthone inherits android
{
      public :
      string name;
};

class oppo : public smartphone //oppo inherits smartphone 
{
    public :
    string name;
};
int main()
{
    tablet tab1;
    smartphone ph1;
    oppo smp1;
    smp1.name = "Oppo Reno";
    smp1.android_version = "Android 13";
    
    tab1.android_version = "Android 10";
    ph1.android_version = "Android 12";

    cout <<"Android version of tablet  =>" <<tab1.android_version <<endl;
    cout <<"Android version of Smartphone =>" <<ph1.android_version <<endl;
   

   
}