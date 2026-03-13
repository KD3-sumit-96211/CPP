#include<iostream>
using namespace std;

class Time
{
    private:
    int hour;
    int minute;
    int second;
    public:
    
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSeconds()
    {
        return second;
    }
    void setHour(int h)
    {
        hour = h;
    }
    void setMinute(int m)
    {
        minute = m;
    }
    void setSeconds(int s)
    {
        second = s;
    }
    void printTime()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of Time objects: ";
    cin >> n;

    Time *t = new Time[n];

    int choice;
    int index = 0;

    do
    {
        cout << "\n1. Add Time";
        cout << "\n2. Display All Time";
        cout << "\n3. Display only hours";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                if(index < n)
                {
                    int h,m,s;

                    cout<<"Enter hour minute second: ";
                    cin>>h>>m>>s;

                    t[index].setHour(h);
                    t[index].setMinute(m);
                    t[index].setSeconds(s);

                    index++;
                }
                else
                {
                    cout<<"Array Full"<<endl;
                }
                break;
            }

            case 2:
            {
                for(int i=0;i<index;i++)
                {
                    t[i].printTime();
                }
                break;
            }

            case 3:
            {
                for(int i=0;i<index;i++)
                {
                    cout<<t[i].getHour()<<endl;
                }
                break;
            }

            case 4:
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }

    } while(choice != 4);

    delete[] t;

    return 0;
}