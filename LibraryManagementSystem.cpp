#include <iostream>
using namespace std;

class LibraryItem{
protected:
    string title;
    int id;
public:
    LibraryItem(string t = "nil", int i = 0){
        title = t;
        id = i;
    }
    virtual void displayDetails() = 0;
};
class Book: public LibraryItem{
public:
    string author;
    int pages;
    Book(string t = "nil", int i = 0, string a = "nil", int p = 0)
    {
        title = t;
        id = i;
        author = a;
        pages = p;
    }
    void displayDetails(){
        cout << "Book Title: " << title << endl;
        cout << "Book Id: " << id << endl;
        cout << "Book author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
    void checkLength()
    {
        if (pages > 300){
            cout << "Long Book\n";
        }else{
            cout << "Short Book \n";
        }
        cout<<"...................\n";
    }
};
class Magazine: public LibraryItem{
public:
    int issueNumber;
    Magazine(string t = "nil", int i = 0, int is = 0)
    {
        title = t;
        id = i;
        issueNumber = is;
    }
    void displayDetails()
    {
        cout << "Magazine Title: " << title << endl;
        cout << "Magazine Id: " << id << endl;
        cout << "Issue Number: " << issueNumber << endl;
    }
    void checkLength()
    {
        if (issueNumber > 100){
            cout<<"Long Magazine \n";
        }else{   
            cout<<"Short Magazine \n";
        }
      
    }
};

int main(){

    Book B1("Harry Potter",217,"Harry",2000);
    Magazine M1("Ben 10", 1992, 984);
    B1.displayDetails();
    B1.checkLength();
    M1.displayDetails();
    M1.checkLength();
    system("pause");

    return 0;
}