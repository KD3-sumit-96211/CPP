#include<iostream>
using namespace std;

struct Date
{

private:
    int Day;
    int Month;
    int Year;
public:
    void initDate(void)
    {
        Day=1;
        Month=1;
        Year=1900;
    }
    void acceptDateFromConsole(void)
    {
        cout<<"Enter Day: ";
        cin>>Day;
        cout<<"Enter Month: ";
        cin>>Month;
        cout<<"Enter Year: ";
        cin>>Year;
    }
    void printDateOnConsole(void)
    {
        cout<<"Date: "<<Day<<"/"<<Month<<"/"<<Year<<endl;

    }
    bool isLeapYear()
    {
        if((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
        return true;
        else
        return false;
    }
};

int main()
{
    Date d;
    int choice;

    do
    {
      cout<<"\n1. init date";
      cout<<"\n2. Accept Date";
      cout<<"\n3. print Date";
      cout<<"\n4. Leap year";
      cout<<"\n5. Exit";
      cout<<"\n6. Enter choice";
      cin>>choice  ;

      switch (choice)
      {
        case 1:
            d.initDate();
            cout<<"Date initialized";
            break;

        case 2:
            d.acceptDateFromConsole();
            break;
        case 3:
            d.printDateOnConsole();
            break;
        case 4:
            if (d.isLeapYear())
                cout<<"Leap year"<<endl;
            else
                cout<<"Not leap year"<<endl;
            break;
        case 5:
            cout<<"Program End"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
      }
    }while(choice!=5);
    return 0;
}



 