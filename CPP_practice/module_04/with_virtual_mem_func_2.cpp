#include <string>
#include <iostream>

// with virtual, the definition of the function call will be dynamic
// it will be decided during the compilation
class Character
{
public:
	virtual void sayHello(std::string const & target);
};

// function overriding
class Warrior : public Character
{
public:
	virtual void sayHello(std::string const & target);
};

class Cat
{
	//[...]
};

void Character::sayHello(const std::string &target) {
	std::cout << "Hello " << target << "!" << std::endl;
}

void Warrior::sayHello(const std::string &target) {
	std::cout << "Go away " << target << ", I don't like you!" << std::endl;
}

int main(void)
{
	// Warrior is a Warrior
	Warrior* a = new Warrior();

	// Warrior is a character
	Character* b = new Warrior();

	// This is not OKAY. Character IS NOT a Warrior
	// Warrior* c = new Character();

	// This is also not okay. Cat IS NOT a character
	// Character c = new Cat();

	a->sayHello("students");
	b->sayHello("students");

	return 0;
}

/* result
Go away students, I don't like you!
Go away students, I don't like you!
*/