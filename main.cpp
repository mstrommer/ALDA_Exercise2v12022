#define CATCH_CONFIG_RUNNER
#define TEST 1 // Always change to 1 before your final submission to Github Classroom.
#include "lib/catch.hpp"
#include "recursion.hpp"
#include <stdlib.h>

// DO NOT CHANGE THIS METHOD
int runCatchTests(int argc, char* const argv[])
{
    return Catch::Session().run(argc, argv);
}

/*
 Test your C knowledge in the main function, but leave the very last lines of code unchanged. 
 */
int main(int argc, char* const argv[] ){
    // TODO Call your functions and experiment with C
    
    // =====================
    // Exercise 1
    // ---------------------
    // read some int n from the console
    // or simply set a variable
    // call function h within a printf statement to verify its result
    
    
    
    // =====================
    // Exercise 2
    // ---------------------
    // Initialize a char array with some text
    // call isPalindrom and save its result
    // print the result of the method call
   

    
    // =====================
    // Exercise 3
    // ---------------------
    // call bisection and pass some proper interval to test its
    // behavior
    // for epsilon you may use the definition EPSILON that can
    // be found in recursion.hpp
    

    
    // DO NOT CHANGE CODE AFTER THIS LINE
    // This is where automatic testing starts, when the define macro constant is set to 1.
    // For local development you can set the constant to 0 until you finished your implementation.
    // Don't just program against the test cases. Also "play" with your source code and experiment with C.
    if (TEST){
        return runCatchTests(argc, argv);
    }
    return 0;
}






