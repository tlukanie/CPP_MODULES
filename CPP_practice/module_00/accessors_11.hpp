/*
An accessor is a member function that allows someone to retrieve the contents of a protected data member
The accessor must have the same type as the returned variable
The accessor does not need to have arguments
A naming convention must exist, and the name of the accessor must begin with the get prefix
In practice, all attributes of a class are private. Getters are the interface between the user and private attributes, to be sure that the values are always correct.
They usually have the prefix of get and set. Getter can only access in the read-only mode and won't alter the content of the class. It allows you to have some control over what to give to the user. It also sets control to the user's input and make sure that they make sense
*/

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	Sample(void);
	~Sample(void);

	int	getFoo(void) const;
	void setFoo(int v);

private:

	int	_foo;
};

#endif