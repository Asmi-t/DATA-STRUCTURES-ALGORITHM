#include <iostream>
using namespace std;

class phone
{
    public :
    string name;
    string type;  
};

class smartphone //
{
    public :
    char charging_type;
};

class oppo : public smartphone , public phone//oppo inherits smartphone and phone classes
{
    public :
    string android_version;
};

int main()
{
    oppo smartph1;
    
    smartph1.android_version = "Android 12";
    smartph1.charging_type = 'C';
    smartph1.name = "Oppo reno";

    cout <<"Name of Smartphone =>" <<smartph1.name <<endl;
    cout <<"Charging type of Smartphone =>" <<smartph1.charging_type <<endl;
    cout <<"Android version of Smartphone =>" <<smartph1.android_version <<endl;

   
}