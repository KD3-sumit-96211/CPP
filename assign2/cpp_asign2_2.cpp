#include<iostream>
using namespace std;

class tollbooth
{
private:
    unsigned int totalCars;
    double totalCash;
    unsigned int payingCars;
    unsigned int nonPayingCars;

public:
    tollbooth()
    {
        totalCars = 0;
        totalCash = 0;
        payingCars = 0;
        nonPayingCars = 0;
    }

    void payingCar()
    {
        totalCars++;
        payingCars++;
        totalCash = totalCash + 0.50;
    }
    void nopayCar()
    {
        totalCars++;
        nonPayingCars++;
    }
    void printOnConsole()
    {
        cout << "Total Cars: " << totalCars << endl;
        cout << "Total Cash: " << totalCash << endl;
        cout << "Paying Cars: " << payingCars << endl;
        cout << "Non Paying Cars: " << nonPayingCars << endl;
    }
};
int main()
{
    tollbooth t;
    int choice;


    do
    {
        cout << "1. Paying Cars" << endl;
        cout << "2. Non Paying Cars" << endl;
        cout << "3. Show Data" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                t.payingCar();
                break;

            case 2:
                t.nopayCar();
                break;

            case 3:
                t.printOnConsole();
                break;
        }

    } while(choice != 4);

    return 0;
}