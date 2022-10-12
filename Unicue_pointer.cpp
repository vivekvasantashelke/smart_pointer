#include <iostream>
#include<memory>
using namespace std;

class rectangle
{
    int l,b;
public: rectangle()
    {
        cout<<"Enter the length and breadth "<<endl;
        cin>>l>>b;
    }

    int area()
    {
        cout<<"Area= ";
       return l*b;
    }

    int perimeter()
    {
        cout<<"Perimeter  = ";
        return 2*(l+b);
    }
    ~rectangle()
    {
        cout<<"destructor"<<endl;
    }
};

int main()
{
 unique_ptr <rectangle> rec (new rectangle());

    cout<<rec->area()<<endl;
    cout<<rec->perimeter()<<endl;
    cout<<"adress of rectangle= "<<rec.get()<<endl;


    unique_ptr <rectangle> rec1(new rectangle());
            rec1=move(rec);
	cout<<rec1->area()<<endl;
    cout<<rec1->perimeter()<<endl;

    cout<<"adress of recangle1= "<<rec1.get()<<endl;


}
