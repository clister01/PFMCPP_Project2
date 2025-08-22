#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 bool
 double
 char
 unsigned int
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    
    int numberOfLegs = 2;
    int numberOfArms = 2;
    int numberOfEyes = 2;
    float heightInCentimeters = 177.8f;
    float weightInKilograms = 95.2f;
    float pencilLengthInCentimeters = 19.5f;
    bool isMale = true;
    bool isFemale = false;
    bool isRaining = false;
    double pi = 3.14159265358979323846;
    double longitude = 12.492507;
    double latitude = 41.890251;
    char firstInitial = 'C';
    char lastInitial = 'L';
    char middleInitial = 'A';
    unsigned int numberOfOranges = 10;
    unsigned int houseNumber = 3325;
    unsigned int numberOfParkedCars = 15;

    ignoreUnused(numberOfLegs, numberOfArms, numberOfEyes, heightInCentimeters, weightInKilograms, pencilLengthInCentimeters, isMale, isFemale, isRaining, pi, longitude, latitude, firstInitial, lastInitial, middleInitial, numberOfOranges, houseNumber, numberOfParkedCars);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int countGuavas(int numberOfGuavasOnGround, int numberOfGuavasInTree = 0)
{
    ignoreUnused(numberOfGuavasOnGround, numberOfGuavasInTree);
    return {};
}
/*
 2)
 */
float squareFootageOfHouse(float lengthOfHouse, float widthOfHouse = 50.5f)
{
    ignoreUnused(lengthOfHouse, widthOfHouse);
    return {};
}
/*
 3)
 */
bool isItSunnyOutside(bool isDaytime, bool isCloudy = false)
{
    ignoreUnused(isDaytime, isCloudy);
    return {};
}
/*
 4)
 */
void goForARun(int distanceInMeters, int timeInMinutes, bool areShoesOn = true)
{
    ignoreUnused(distanceInMeters, timeInMinutes, areShoesOn);
}
/*
 5)
 */
void makeASandwich(int numberOfSlicesOfBread, int numberOfSlicesOfCheese = 2, int numberOfSlicesOfHam = 2, bool isToasted = true)
{
    ignoreUnused(numberOfSlicesOfBread, numberOfSlicesOfCheese, numberOfSlicesOfHam, isToasted);
}
/*
 6)
 */
void makeTheBed(int numberOfPillows, int numberOfSheets = 3)
{
    ignoreUnused(numberOfPillows, numberOfSheets);
}
/*
 7)
 */
bool makeCoffee(int numberOfCoffeeBeans, int numberOfCupsOfWater = 1, int numberOfSpoonsOfSugar = 1, bool doYouWantCoffee = true)
{
    ignoreUnused(numberOfCoffeeBeans, numberOfCupsOfWater, numberOfSpoonsOfSugar, doYouWantCoffee);
    return {};
}
/*
 8)
 */
void doLaundry (int numberOfClothes = 10, float amountOfDetergent = 1.5f, bool isMachineEmpty = true)
{
    ignoreUnused(numberOfClothes, amountOfDetergent, isMachineEmpty);
}
/*
 9)
 */
void pickUpTheKids(int numberOfKids = 2, int numberOfBags = 2, bool isTheSchoolDayOver = true)
{
    ignoreUnused(numberOfKids, numberOfBags, isTheSchoolDayOver);
}
/*
 10)
 */
void putOnABandage(int numberOfBandageStrips = 1, bool isTheBandageClean = true)
{
    ignoreUnused(numberOfBandageStrips, isTheBandageClean);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    ignoreUnused(carRented);
    
    //1)
    auto totalGuavas = countGuavas(100, 10);
    ignoreUnused(totalGuavas);
    
    //2)
    auto houseSquareFootage = squareFootageOfHouse(100.5f, 50.5f);
    ignoreUnused(houseSquareFootage);
    
    //3)
    auto isItSunny = isItSunnyOutside(true, false);
    ignoreUnused(isItSunny);
    
    //4)
    goForARun(1000, 15, true);
    
    //5)
    makeASandwich(2, 2, 2, true);
    
    //6)
    makeTheBed(2,3);
    
    //7)
    auto coffeeMade = makeCoffee(100, 1, 1, true);
    ignoreUnused(coffeeMade);
    
    //8)
    doLaundry(10, 1.5f, true);
    
    //9)
    pickUpTheKids(2, 2, true);
    
    //10)
    putOnABandage(1, true);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
