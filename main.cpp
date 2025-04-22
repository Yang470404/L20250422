#include <iostream>
#include <vector>
#include "Animal.h"
#include "Cat.h"
#include "Cow.h"
#include "Dog.h"

int main()
{
	std::vector<AAnimal*> zoo;

	zoo.push_back(new ADog());
	zoo.push_back(new ACat());
	zoo.push_back(new ACow());


	for (auto animal : zoo)
	{
		animal->Speak();
	}

	for (auto animal : zoo)
	{
		delete animal;
	}
	zoo.clear();

	return 0;
}