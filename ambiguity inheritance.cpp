#include<iostream>
using namespace std;
class a
{
    public:
    void function ()
    {
        cout<<"\n u r under the base class:";
    }
};
class b
{
    public:
    void function ()
    {
        cout<<"\n u r under the derived class:";
    }
};
class c : public b,public a
{
    public:
    inline void function(){cout<<" \n u r under the second  deriveed class:";}
};
int main()
{
    c cc;
    cc.function(); // ambiguity occured !!
    // to solve this we use 
    cc.a::function();
    cc.b::function(); 

    return 0;
}