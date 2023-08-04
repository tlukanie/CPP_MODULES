/*
There are structural equality and physical equality
Structural equality means that two objects have equivalent content
Physical / referential equality means that the pointers for two objects are the same (Use == to check in C++)
*/
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:
	Sample(int v);
	~Sample(void);

	int	getFoo(void) const;
	// taking as a parameter (the address of a sample instance). Making a
	// comparison between the current instance and the passed parameter instance
	int	compare(Sample *other) const ;

private:
	int	_foo;
};

#endif