//
// Created by Admin on 2025/3/14.
//
#include "MyTest.h"
#include "Person.pb.h"

void MyTest::test()
{
    Person p;
    p.set_id(10);
    p.set_age(32);
    p.set_sex("man");
    p.set_name("Davd");

    std::string output;
    p.SerializeToString(&output);


    Person pp;
    pp.ParseFromString(output);

    std::cout << pp.id() << " " << pp.age() << " " << pp.sex() << " " << pp.name() << " " << std::endl;
}