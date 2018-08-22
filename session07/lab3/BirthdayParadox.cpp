// BirthdayParadox.cpp

#include "stdafx.h"

using namespace std;

int main()
{
	seed_seq seed{ 2016 };
	default_random_engine generator{ seed };
	uniform_int_distribution<int> distribution(0, 364);

	for (int students = 2; students <= 80; students++)
	{
		int totalIterations = 10000;
		int matchCount = 0;

		vector<int>* birthdays = new vector<int>(students, 0);

		for (int iteration = 0; iteration < totalIterations; iteration++) {
			for (int i = 0; i < birthdays->size(); i++)
				birthdays->at(i) = distribution(generator);

			bool foundMatch = false;

			for(int j{}; !foundMatch && j < birthdays->size() - 1; j++)
                for(int k{j+1]; !foundMatch && k < birthdays->size(); k++)
                    if(birthdays->at(j) == birthdays->at(k))
                        foundMatch =

			if (foundMatch)
				matchCount++;
		}

		delete birthdays;

		cout << "Probability of matching birthdays among "
			<< setw(2) << students << " people = "
			<< fixed << setprecision(4) << (double)matchCount / totalIterations
			<< endl;
	}

	return 0;
}

