#include <iostream>

using namespace std;

//a class is a specification (or blueprint) for a new datatype
//template for the book data type
//storing a collection of attributes
class Book {
    public:
        string title;
        string author;
        int pages;

        Book() {
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    //a class is a template of the datatype
    //an object is an instance of that class
    
    //creating an object
    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2;

    cout << book1.pages;

    return 0;
}