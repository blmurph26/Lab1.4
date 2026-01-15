#include "Date.h"



#include <array>
#include <iostream>
// this tells catch to provide a main()
// only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
//for floating point numbers
using namespace Catch::Matchers::Floating;

TEST_CASE("Test Date Constructor")
{
    INFO("Checks that default constructor creates objects with correct default values")
    Date d1;
    CHECK(d1.getDate() == 1);
    CHECK(d1.getYear() == 1);
    CHECK(d1.getMonth() == 1);


    INFO("Checks that general constructor creates objects with correct values")
    Date d2 (2024, 2, 3);
    CHECK(d2.getDate() == 3);
    CHECK(d2.getYear() == 2024);
    CHECK(d2.getMonth() == 2);

}

TEST_CASE("toString() operator ensures correct output"){
    Date d2 (2024, 2, 3);
    CHECK(d2.toString()== "Feb 3, 2024");
    d2 = Date(2025, 1, 22);
    CHECK(d2.toString()== "Jan 22, 2025");
}

TEST_CASE("Item class operator +")
{
    // Checks that the setters are setting correct values
    Date dd(2024, 9, 10);
    Date d = dd;

    INFO("Check: Sep 10, 2024 + 24 Days")
    CHECK((d + 23).getDate() == 3);
    CHECK((d + 23).getMonth() == 10);
    CHECK((d + 23).getYear() == 2024);


    d = dd;
    INFO("Check: Sep 10, 2024 + 38 Days")
    CHECK((d + 38).getDate() == 18);
    CHECK( (d + 38).getMonth() == 10);
    CHECK( (d + 38).getYear() == 2024);

    d = dd;
    INFO("Check: Sep 10, 2024 + 56 Days")
    CHECK( (d + 56).getDate() == 5);
    CHECK( (d + 56).getMonth() == 11);
    CHECK( (d + 56).getYear() == 2024);

    d = dd;
    INFO("Check: Sep 10, 2024 + 91 Days")
    CHECK( (d + 91).getDate() == 10);
    CHECK( (d + 91).getMonth() == 12);
    CHECK( (d + 91).getYear() == 2024);

    d = dd;
    INFO("Check: Sep 10, 2024 + 134 Days")
    CHECK( (d + 134).getDate() == 22);
    CHECK( (d + 134).getMonth() == 1);
    CHECK( (d + 134).getYear() == 2025);
}

TEST_CASE ("Test operator+ is immutable"){
    Date dd(2024, 2, 7);
    Date d =  dd + 134;
    INFO("Check: Sep 10, 2024 + 134 to ensure that current date remains Sep 10, 2024")
    CHECK( dd.getDate() == 7);
    CHECK( dd.getMonth() == 2);
    CHECK( dd.getYear() == 2024);
}




TEST_CASE("Test operator << ")
{
    Date dd(2018, 9, 10);
    stringstream sout;
    sout << dd;
    INFO("Check: Sep 10, 2024 using output operator")
    CHECK( sout.str() == string("Sep 10, 2018"));

    dd = Date(2024, 3, 15);
    stringstream sout2;
    sout2 << dd;
    INFO("Check: Sep 10, 2024 using output operator")
    CHECK( sout2.str() == string("Mar 15, 2024"));

}
