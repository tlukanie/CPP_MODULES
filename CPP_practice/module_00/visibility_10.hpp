/*
Public and private will allow you to control the encapsulation of the members of the class. It means that the attributes and member functions will only be visible from inside the class or from the outside

Public attributes and functions can be accessed both inside and outside of the class

Private attributes and functions are only accessible from inside of the class. These attributes and functions are perfectly invisible and inaccessible from the outside of the class, otherwise, the code will not compile
*/
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	int publicFoo;

	// need to consider what makes more sense to place the constructor \
	// and destructor in private or public
	Sample(void);
	~Sample(void);

	void publicBar(void) const;

private:

	// use _ prefix for all private identifier
	// it gives reader a quick idea of which is public or private
	int _privateFoo;

	void _privateBar(void) const;
};

#endif