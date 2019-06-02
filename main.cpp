#include "Philosopher.h"

using namespace std;

int main(int argc, char *argv[])
{
	vector<Philosopher> threads;
	int nThread = 3;
	int nIterations = 3;



	if (nThread > 1 && nIterations > 1)
	{
		for (int i = 0; i < nThread; i++)
		{
			threads.push_back(Philosopher(i, nIterations));
		}
		for (int i = 0; i < nThread; i++)
		{
			threads[i].startThread();
		}
		for (int i = 0; i < nThread; i++)
		{
			threads[i].join();
		}
	}
	else
	{
		cout << "Wprowadzono niepoprawne argumenty" << endl;
	}

	cin.ignore(1);
}