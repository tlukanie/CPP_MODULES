/*
Ad-hoc polymorphism / function overload
Function overloading is a C++ principle, which allows you to define many functions having the same name, 
but accepting different parameters
It is not just for class member functions, but also works on any function. 
The principle is that you have an one-and-only function name and different parameters for every overload. 
This will allow you to specialise the process of a function based on its parameters
*/

class Sample {
public:
	Sample();
	~Sample();

	void bar(char const c) const;
	void bar(int const n) const;
	void bar(float const z) const;
	void bar(Sample const & i) const;
};