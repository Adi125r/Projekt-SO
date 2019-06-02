#include "Philosopher.h"

using namespace std;

Philosopher::Philosopher(int threadID, int iterations)
{
	this->threadID = threadID;
	this->iterations = iterations;


}

void Philosopher::run()
{
	for (int i = 0; i < this->iterations; i++)
	{
		eat();
		think();
	}
	cout << "Thread: " << this->threadID << " ended\n";
	cout.flush();
}


void Philosopher::eat()
{
		
	int r = (std::rand() % 1000) + 2500;
	this_thread::sleep_for(std::chrono::milliseconds(r));
	cout << " Philosopher: " << this->threadID << "     Status: EATING      Time: " << r  << "\n";
	cout.flush();

}

void Philosopher::think()
{
	
	int r = (std::rand() % 1000) + 2500;
	this_thread::sleep_for(std::chrono::milliseconds(r));
	cout << " Philosopher: " << this->threadID << "     Status: THINKING    Time: " << r   << "\n";
	cout.flush();
}

void Philosopher::join()
{
	t.join();
}

void Philosopher::startThread()
{
	t = thread(&Philosopher::run, this);
}