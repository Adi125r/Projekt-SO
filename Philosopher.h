#include <iostream>
#include <thread>
#include <random>
#include <functional>
#include <chrono>


class Philosopher
{
	int threadID;
	int iterations;
	std::thread t;

public:
	Philosopher(int threadID, int iterations);

	void run();

	void eat();

	void think();

	void join();

	void startThread();
};