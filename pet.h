#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

//This is the header file for the Pet class

class Pet
{
  public:
    //Default Constructor
    Pet();
    //Overloaded Constructor
    Pet(string name, string type, int age, double weight);

    //Mutators
    void setName(string name);
    void setType(string type);
    void setAge(int age);
    void setWeight(double weight);

    //Accessors
    string getName() const;
    string getType() const;
    int getAge() const;
    double getWeight() const;

    //Prints info
    void print() const;

  private:
    //Member Variables
    string m_name;
    string m_type;
    unsigned int m_age;
    double m_weight;
};

#endif
