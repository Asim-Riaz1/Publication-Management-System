#include <iostream>
using namespace std;
class Publication
{
    protected:
    float price;
    public:
    void getData()
    {
        cout<<"Enter price: ";
        cin>>price;
    }
    void putData()
    {
        cout<<"Price: "<<price<<endl;
    }
};
class Book: public Publication
{
    private:
    int pageCount;
    public:
    void getData()
    {
        cout<<"Enter Number of Pages: ";
        cin>>pageCount;
        Publication::getData();
    }
    void putData()
    {
        cout<<"Number of pages: "<<pageCount<<endl;
        Publication::putData();
    }
};
class Tape: public Publication
{
    private:
    float time;
    public:
    void getData()
    {
        cout<<"Enter time in minutes: ";
        cin>>time;
        Publication::getData();
    }
    void putData()
    {
        cout<<"Time: "<<time<<endl;
        Publication::putData();
    }
};
int main()
{
    Book b;
    Tape t;
    int choice;
    cout<<"1. Book Info"<<endl;
    cout<<"2. Tape Info"<<endl;
    cout<<"------------"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"--------Book Info--------"<<endl;
    b.getData();
    b.putData();
    break;
    case 2:
    cout<<"--------Tape Info--------"<<endl;
    t.getData();
    t.putData();
    break;
    default:cout<<"Invalid choice."<<endl;
        break;
    }

}