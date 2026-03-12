#include<iostream>
using namespace std;
class cylinder
{
    private:
    double radius;
    double height;
    static double pi;
    public:
    cylinder( void ) : radius(0) , height(0)
    {   }
    cylinder(double radius, double height)
    {
            this->radius = radius;
            this->height = height;
    }
    void setRadius(double radius)
    {
        this->radius=radius;
    }
    void setHeight(double height)
    {
        this->height=height;
    }
    double getHeight( void )
    {
        return this->height; 
    }
    int getRadius( void )
    {
        return this->radius; 
    }


    void printRecord()
    {
        cout<<"radius "<<this->radius<<endl;
        cout<<"height "<<this->height<<endl;
        cout<<"Pi "<<cylinder::pi<<endl;
        cout<<"Volume is: "<<cylinder::pi*this->radius*this->radius*this->height<<endl;
    }
};
double cylinder::pi=3.14;
int main()
{
    cylinder c1(10,8);
    c1.setHeight(12);
    c1.setRadius(3);
    c1.printRecord();
    
    return 0;

}
