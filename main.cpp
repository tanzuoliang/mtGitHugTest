#include <iostream>

class ThreadTest
{
	public:
		void init();
		void threadFun();
	private:
		std::thread* thread;
		int age = 21;
		int height = 161;
			
};


void ThreadTest::init()
{
	thread = new std::thread(ThreadTest::threadFun,this);
}
int main(int argc, char** argv)
 {
	std::cout << "Hello world!\n";
	std::cout << "connect to github";
}
