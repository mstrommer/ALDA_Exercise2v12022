// Test definitions. Do NOT edit this file!

#include <tuple>

//#define CATCH_CONFIG_MAIN // defines main() automatically
#include "lib/catch.hpp"
#include "recursion.hpp"
#include <string.h>
#include <math.h>


// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Test1", "[h]")
{
    float expected = -1.0;
    int n = 0;
    INFO("Testing default (h(0) = 0)");
    REQUIRE(fabs(expected - h(n)) < 0.01 );
}

TEST_CASE("Test2", "[h]")
{
    float expected = 1.0;
    int n = 1;
    INFO("Testing for h(1) = 1");
    REQUIRE(fabs(expected - h(n)) < 0.01 );
}

TEST_CASE("Test3", "[h]")
{
    float expected = 2.2833;
    int n = 5;
    INFO("Testing for h(5) = 2.28...");
    REQUIRE(fabs(expected - h(n)) < 0.01 );
}

TEST_CASE("Test4", "[h]")
{
    float expected = 6.7928;
    int n = 500;
    INFO("Testing for h(500) = 6.79...");
    REQUIRE(fabs(expected - h(n)) < 0.01 );
}

// =====================
// tests for exercise 2
// ---------------------

TEST_CASE("Test5", "[Palindrom]")
{
    int expected = 1;
    char text[] = "amanaplanacanalpanama";
    int actual = isPalindrom(text, 0, (int)strlen(text)-1);
    INFO("Testing if word \"amanaplanacanalpanama\" is a palindrom");
    REQUIRE(expected == actual);
}

TEST_CASE("Test6", "[Palindrom]")
{
    int expected = 0;
    char text[] = "ccovid19cc";
    int actual = isPalindrom(text, 0, (int)strlen(text)-1);
    INFO("Testing if word \"ccovid19cc\" is a palindrom");
    REQUIRE(expected == actual);
}

TEST_CASE("Test7", "[Palindrom]")
{
    int expected = 0;
    char text[] = "reliefnichtpfeiler";
    int actual = isPalindrom(text, 0, (int)strlen(text)-1);
    INFO("Testing if word \"reliefnichtpfeiler\" is a palindrom");
    REQUIRE(expected == actual);
}

TEST_CASE("Test8", "[Palindrom]")
{
    int expected = 0;
    char text[] = "ab";
    int actual = isPalindrom(text, 0, (int)strlen(text)-1);
    INFO("Testing if word \"ab\" is a palindrom");
    REQUIRE(expected == actual);
}

// =====================
// tests for exercise 3
// ---------------------

TEST_CASE("Test9", "[bisection]")
{
    float expected = 2.0;
    float actual = bisection(0,2, EPSILON);
    INFO("Testing for root in the interval 0..2 for f(x) = x^2 - 4");
    REQUIRE(fabs(expected - actual) <= EPSILON);
}

TEST_CASE("Test10", "[bisection]")
{
    float expected = -2.0;
    float actual = bisection(-3,-1, EPSILON);
    INFO("Testing for root in the interval -3..-1 for f(x) = x^2 - 4");
    REQUIRE(fabs(expected - actual) <= EPSILON);
}

TEST_CASE("Test11", "[bisection]")
{
    float expected = -2.0;
    float actual = bisection(-5,-1, EPSILON);
    INFO("Testing for root in the interval -5..-1 for f(x) = x^2 - 4");
    REQUIRE(fabs(expected - actual) <= EPSILON);
}

TEST_CASE("Test12", "[bisection]")
{
    float expected = -2.0;
    float actual = bisection(-5.5,-1, EPSILON);
    INFO("Testing for root in the interval -5.5..-1 for f(x) = x^2 - 4");
    REQUIRE(fabs(expected - actual) <= EPSILON);
}
