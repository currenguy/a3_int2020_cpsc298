#include "pet.h"

//This file demonstrates 2 sample implementations of the Pet class

int main(int argc, char **argv)
{
  //Creating a Pet instance using Overloaded Constructor
  Pet *pet1 = new Pet("Jeff", "Dog", 500, 57.8);

  //Creating a Pet instance using Mutators
  Pet *pet2 = new Pet();
  pet2->setName("Stinker");
  pet2->setType("Cat");
  pet2->setAge(25);
  pet2->setWeight(99);

  //Printing each Pet object's info
  pet1->print();
  pet2->print();

  //Deleting the objects
  delete pet1;
  delete pet2;

  return 0;
}
