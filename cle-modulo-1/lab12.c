/*
Level of difficulty
Easy
Objectives

Familiarize the student with:
Using comments
When not to use comments
Ways to replace comments with code

Scenario
Comments are not always the best way to say something in a code. Sometimes it's much better to leave some information in the code.
In the worst case scenario, comments can lie to the user/programmer (you should never do that on purpose). It's a good idea to use readable variable names.
Sometimes it's better to divide your code into named pieces (later we'll call these pieces functions). In some situations, it's a good idea to write the steps of calculations in a clearer way.
The code in the editor contains some of these situations; try to improve it (and remove comments - sometimes removing comments will be an improvement itself).
If you don't understand all of the code here, don't worry. Try to focus on the comments.
*/

#include <stdio.h> /* we included stdio.h */
#include <stdlib.h> /* we included stdlib.h */

int main()
{
    int threeHoursInSeconds = 10800; /* 3*60*60 */
    int threeMinutesInSeconds = 3*60; /* This is a variable to hold the value of 3 minutes in seconds */
    int sixMinutesInSeconds = 5*60; /* This is a variable to hold the value of 6 minutes in seconds */
    float piValue = 3.141526;
 
    printf("The value of Pi is: %f \n", piValue);

    return 0;
}