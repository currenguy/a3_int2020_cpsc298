#include "pet.h"

//This file contains function definitions for the Pet class

//Default Constructor
Pet::Pet()
{
  m_name = "No Name";
  m_type = "No Type";
  m_age = 0;
  m_weight = 0.0;
}

//Overloaded Constructor
Pet::Pet(string name, string type, int age, double weight)
{
  this->m_name = name;
  this->m_type = type;
  this->m_age = age;
  this->m_weight = weight;
}

//Mutators
void Pet::setName(string name)
{
  this->m_name = name;
}

void Pet::setType(string type)
{
  this->m_type = type;
}

void Pet::setAge(int age)
{
  this->m_age = age;
}

void Pet::setWeight(double weight)
{
  this->m_weight = weight;
}

//Accessors
string Pet::getName() const
{
  return this->m_name;
}

string Pet::getType() const
{
  return this->m_type;
}

int Pet::getAge() const
{
  return this->m_age;
}

double Pet::getWeight() const
{
  return this->m_weight;
}

//Prints info
void Pet::print() const
{
  cout << "---------------" << endl;
  cout << "NAME: " << this->getName() << endl;
  cout << "TYPE: " << this->getType() << endl;
  cout << "AGE: " << this->getAge() << endl;
  cout << "WEIGHT: " << this->getWeight() << endl;
  cout << "---------------" << endl << endl;
}
