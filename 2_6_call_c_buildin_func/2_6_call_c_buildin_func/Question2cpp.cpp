#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{
	int random = rand();
	
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		cout << rand() % 100 << endl;
	}
	
	return 0;
}