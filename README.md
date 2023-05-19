# Exercise - The Complex class

## Problem's description

A complex number is defined as an ordered pair of real numbers (a, b).

The first component (a) is called the real part, and the second component (b) is called the imaginary part.

We have the following complex number operations:


Addition		(a, b) + (c, d) = ((a + c), (b + d))

For example:	(1, 3) + (4, 5) = ((1 + 4), (3 + 5)) = (5, 8)


Substraction	(a, b) − (c, d) = ((a − c), (b − d))

For example:	(1, 7) - (2, 5) = ((1 - 2), (7 – 5) = (-1, 2)


## Complete the class Complex according to the following description:
Check the Complex.hpp and Complex.cpp files to complete the parts that are marked with **TODO:**

- **Two attributes** of type double: one for the real part and another for the imaginary part.
- **A default constructor** that initializes the complex number with the value (0,0).
- **A constructor with parameters** that initializes the number with the two values that it receives as a parameter.
- **Setters** and **Getters** for each attribute.
- **The add method** (to add two complex numbers) that receives a complex number as a parameter and returns a complex number containing the addition of the current complex number with the received complex number.
- **The subtract method** (to subtract two complex numbers) that receives a complex number as a parameter and returns  a complex number containing the subtraction of the current complex number minus the received complex number.


## Now write a main function that creates five objects of type Complex:
Check the exercise.cpp file to complete the parts that are marked with **TODO:**

- One (a) that is constructed with the default constructor.
- Two (b and c) that ask the user for the data to then construct it with the constructor of two integer parameters.
- One (d) that is assigned by the addition of b + c.
- One (e) that is assigned by the subtraction of b - c.

- Afterwards, the contents of these five objects need to be shown on screen.


## Objective

- Ensure that the code passes all tests successfully. This will help you to know that your class is correct. 

    *The main program is not checked with the autograding tool*

   * Only modify the allowed files to achieve this objective (specific rules are provided below).

- The GitHub Actions should display a green checkmark when all tests have passed, and a red cross when one or more tests have failed.
   * **Recommendation:** You can click on the red cross to check which test(s) have failed (or if the code has not compiled correctly)
   * **Recommendation:** If the Autograding doesn't display tests or doesn't work, please contact your teacher through an issue.

## Instructions

- You should modify the files (.cpp and .hpp) that you consider appropiate.

Explanation of the other files:

- The file `test/tests.cpp` contains the tests for this activity (DO NOT MODIFY IT!)
- The file `test/catch.hpp` contains the CATCH2 testing library (DO NOT MODIFY IT!)
- The file `makefile` contains the commands to execute the activity (DO NOT MODIFY IT!)
- The file `./build/appTests` will be generated after compiling (for **local testing**, just run it)

## Commands for local testing, execution, and debugging

- Command to build and run tests: `make` o `make test`
    * If the test is already built, just type : `./build/appTests`

- Command to build y run the program: `make run` 
    * If the program is already built, just type : `./build/exercise`

- Comando to debug with command line: `make debug`
    * To learn about debugging commands, refer to
     https://u.osu.edu/cstutorials/2018/09/28/how-to-debug-c-program-using-gdb-in-6-simple-steps/

- Command to debug the test execution with `vsCode` or `GitPod`: `make debugvs` 
    * Use the IDE's debugger.

- Command to debug the program execution with `vsCode` o en `GitPod`: `make debugtest` 
    * Use the IDE's debugger.

## Notes

- The code will be evaluated only if it compiles.
   * The reason for this is that if it doesn't compile, it's not possible to generate the executable and perform the tests.

- Some test cases may receive individual grades, while others may receive a grade only if they pass all together (or all tests collectively).

- The final grade will be automatically assigned with each commit and will be evaluated only up until the deadline of the activity.

For any additional questions, please consult your teacher.

## License

MIT License 2020
