#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void sound()
    {
        cout<<"animal make a sound"<<endl;
    }
};
class dog:public animal
{
    public:
    virtual void sound()override
    {
        cout<<"dog barks"<<endl;
    }
};
class cat:public animal
{
    public:
    virtual void sound()override
    {
        cout<<"cat meow"<<endl;
    }
    
};
int main()
{
    animal *ace;
    animal a;
    dog d;
    cat c;
    ace=&d;
    ace->sound();
    ace=&c;
    ace->sound();
    return 0;
}