#include<iostream>
using namespace std;

class volume
{
    private:
    int length;
    int width;
    int height;

    public:

    volume()
    {
        this->length=1;
        this->width=1;
        this->height=1;
    }
    volume(int value)
    {
        this->length=value;
        this->width=value;
        this->height=value;
    }
    volume(int length,int width,int height)
    {
        cout<<"Volume(int length,int width,int height)"<<endl;
        this->length=length;
        this->width=width;
        this->height=height;
    }
    void calculateVolume()
    {
        int volume = length * width * height;
        cout << "Volume of Box = " << volume << endl;
    }


};

int main()
{
    volume v;
    int choice;
    
        cout<<"1.Calculate vol with default values:"<<endl;
        cout<<"2.Calculate vol with l,b,h with same values:"<<endl;
        cout<<"3.Calculate vol with diff. values:"<<endl;
        cout<<"enter your choice:";
        cin>>choice;
        switch (choice)

    {
        case 1:
        {
            volume v1;       
            v1.calculateVolume();
            break;
        }

        case 2:
        {
            int x;
            cout << "Enter value: ";
            cin >> x;

            volume v2(x);
            v2.calculateVolume();
            break;
        }

        case 3:
        {
            int l, w, h;
            
            cout<<"Enter length: ";
            cin>>l;
            cout<<"Enter width: ";
            cin>>w;
            cout<<"Enter height: ";
            cin>>h;
            
            volume v3(l, w, h);
            v3.calculateVolume();
            break;
        }

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
        

