#include<iostream>
using namespace std;
class base
{
    public:
    void Msg(){cout<<"base\n";}
};

class derived
{
    public:
    void Msg(){cout<<"derived\n";}
};

int main(){
    base a; a.Msg();
    derived b; b.Msg();
    return 0;
}