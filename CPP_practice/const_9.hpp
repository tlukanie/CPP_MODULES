#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	float const pi;
	int qd;

	Sample(float const f);
	~Sample(void);

	// const between ) & ; -> the instance of the class will never be altered
	void bar(void) const;
};

#endif

/*
Variables declared with const added become constants and cannot be altered by the program

const data members must be initialized using initialization list. No memory is allocated separately for const data member. It is folded in the symbol table due to which we need to initialize it

const data members is also a copy constructor. We don't need to call the assignment operator which means we are avoiding one extra operation

The more your code is const and read only, the more your code will be robust in the long term
*/