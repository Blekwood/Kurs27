#ifndef Sun_System_H
#define Sun_System_H

class Sun_System
{
private:
	int O_b_j = 1;

	char qqqq;

public:
	Sun_System();
	void Create_Sun_System();
	Sun_System(const Sun_System&) = delete;
	Sun_System & operator=(const Sun_System&) = delete;
	void* operator new(size_t) = delete;
	void* operator new[](size_t) = delete;
	void operator delete(void*) = delete;
	void operator delete[](void*) = delete;
	~Sun_System();
};

#endif Sun_System_H
