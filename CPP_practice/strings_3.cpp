#include <iostream>

//not allowed to use namespace - have to add "std::"
//using namespace std;

void nameAge () {
    std::string name;
   int age;
   std::cout << "Enter your name: ";
   //cin for command prompt
   getline( std::cin, name);
    std::cout << "Enter your age: ";
    std::cin >> age;

     std::cout << "Hello " << name;
    std::cout << "! You are " << age << " years old.\n";

}

int main()
{
    /*
    string phrase = "Giraffe Academy";
    //cout << phrase.length();
    //cout << phrase.find("Academy", 0);
    */
    nameAge();
    return 0;
}