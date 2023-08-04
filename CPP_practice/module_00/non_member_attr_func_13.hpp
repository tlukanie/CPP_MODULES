/*
Member attributes / functions are present inside of a class. It means that the class needs to be instantiated, in order to use this attribute / function. Each attribute will be different in each instance

Non member variables and functions exist at the class level, and not at the instance level

Another terminology:

Instance variables / functions refers to member attributes / functions
Class variables / functions refers to non member attributes / functions
*/
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample(void);
	~Sample(void);

	// non member function
	// when the function does not have anything to do with the other class
	// functions, but you want it to be part of the class
	static int getNbInst(void);

private:

	// non member attribute
	// number of instances: this information only makes sense at the class level
	static int _nbInst;

};

#endif