/*
 * This program is to calculate the average of the number that the user introduces so long as it is not a 0.
 * When the user introduces a 0, the program will stop asking for numbers and calculate the average.
 * The average is simplye the sum of all the terms divided by the number of terms that participated on the addition.
 *
 * Problem Analysis.
 * Problem: Write a program which allows us to calculate the average of all the numbers that the user introduces. The
 * user will keep on introducing numbers as long as that number isn't 0.
 * Inputs: Numbers that the user gives us.
 * Calculations: The sum of all the numbers introduced by the user divided by the number of terms that he introduced.
 * Outputs: Average of all the numbers introduced.
 *
 * Algorithm.
 * 1 Begin
 * 2 Ask the user for a number
 * 3 If the number != 0 , ask for another number
 * 4 If the number == 0, calculate the average
 * 5 Display the average
 * 6 End
 *
 * Author: Soraya Lizeth Maqueda Gutiérrez
 * Date: 06.09.2018
 * Contact: soraya_maqueda@hotmail.com
 */

#include <stdio.h>

int main() {
    double average=0; //This is the variable in which the sum of all the given numbers will be saved.
    double num; //This is the variable in which the value that the user introduces is saved.
    int denominator=0; //This is the variable in which we will determine the how many numbers the user
    // introduced so that we can determined the denominator.

    do {
        printf("Give me a number."); //Here I ask the user for the number (again and again since it's a loop).
        printf("\n Zero will terminate the process."); //Here I tell the user how to tell the program he has introduced
        //all the necessary values.
        scanf("%lf", &num);//This saves the number each time the user introduces one to the variable num.

        //This is is for when the number is different from 0, which keeps the loop on going.
        if (num!=0){
            average += num; //Here the sigma of the numbers is being carried on.
            denominator++; //Here we are determining what the denominator will be by adding one to the initial
            // value which is zero each time the loop runs.
        }
    } while (num!=0.0); //Here its established that the necessary condition for the loop to keep on going is to the number
    //to be different from 0.0 (with decimals, since we are working with doubles).

   /*
    * This is for when the denominator is different from zero. This means that if the initial value (zero) is not the
    * same at the end of the loop, then the user (obviously) introduced some values. Therefore we must calculate the
    * average of the given values. This is the process of calculating it.
    */
    if (denominator!=0) {
        average /= denominator; // This means that the value stored in the variable average will be divided by the value
        // stored in the variable denominator.

        printf ("The average is %lf", average); //Here the program displays the average.
    } else { //If the denominator == 0, then the initial and final value are the same. Therefore the user did not
        // introduced any number. Thus we do not have anything to calculate it. Here we let the user know.
        printf("You didn't give me any number. Goodbye.");
    }

    return 0;
}