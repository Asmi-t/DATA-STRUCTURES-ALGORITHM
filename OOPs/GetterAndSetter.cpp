#include <iostream>
using namespace std;

class ball
{
    private:
    string color;
    int diameter;
    
    public:
    //writting setter to set input or to initialize
    void setColor(string s)
    {
       this->color = s;
    }

    //writtig getter to get what is the color in main
    string getColor()
    {
        return color;
    }
};


int main()
{
   ball b1;
   b1.setColor("blue");

   cout <<endl;
   cout <<b1.getColor()<<endl;

}