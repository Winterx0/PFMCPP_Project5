/*
Project 5: Part 1 / 4
 video Chapter 2 - Part 12

 Create a branch named Part1

 Destructors
 
 1) Copy a few of your user-defined types (the ones with constructors and for()/while() loops from the previous task) here
 2) add destructors
        make the destructors do something like print out the name of the class.
 
 3) add 2 new UDTs that use only the types you copied above.
 4) Add destructors to these 2 new types that do stuff.  
        maybe print out the name of the class being destructed, or call a member function of one of the members.  be creative
 
 5) Instantiate your 2 UDT's from step 4) in the main() function at the bottom.
 
 6) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */
#include "string"
#include <iostream>
/*
 copied UDT 1:
 */
struct Guitar
{
    int steelNeck;
    float inTune { 440.0f };
    float tuneKey { 4.0f };
    bool isElectricGuitar = true;
        
    Guitar() : steelNeck(0) { }
    ~Guitar()
    {
        std::cout << "End of Guitar" << std::endl;
    }
    
    void bodyType();
    void printGuitar();
};

struct GuitarChord
{
    int scaleDegree;
    float number{2.f};

    GuitarChord() : scaleDegree(6) {}
    ~GuitarChord()
    {
        std::cout << "End of Scale Degree" << std::endl;
    }

    void printGuitarChord();
};

void GuitarChord::printGuitarChord()
{
    std::cout << "Scale Degree of Chord is the " << scaleDegree << " degree" << std::endl;

    std::cout << "Chord has " << scaleDegree / number << " notes" << std::endl;
}

void Guitar::bodyType()
{
    for(steelNeck = 0; steelNeck < 3; ++steelNeck)
    if(isElectricGuitar)
    {
        std::cout << "Guitar Key: " << steelNeck + tuneKey << std::endl;
    }
    else
    {
        std::cout << "Hz: " << inTune << std::endl;
    }
}

void Guitar::printGuitar()
{
        return bodyType();
}
 

/*
 copied UDT 2:
 */

struct NeuroPath
{
    int neuroPlasticity;
    float genericThought { 500.0f };
    bool isSmart = false;
        
    NeuroPath() : neuroPlasticity(0) {}
    ~NeuroPath()
    {
        std::cout << "End of Neuro Path" << std::endl;
    }
    
    void neurons();
    void printNeuroPath();
};

void NeuroPath::neurons()
{
    for(neuroPlasticity = 0; neuroPlasticity < 3; ++neuroPlasticity)
    if( isSmart )
    {
        std::cout << "Neuro Path " << neuroPlasticity << "% Cognitive Thought" << std::endl;
    }
    else
    {
        std::cout << "Neuro Path " << genericThought << "% Cognitive Thought" << std::endl;
    }
}

void NeuroPath::printNeuroPath()
{
    return neurons();
}


/*
 copied UDT 3:
 */
 struct Dog
{
    int manyPuppies;
    float litter { 100.0f };
    bool isApuppy = false;
        
    Dog() : manyPuppies(0) { }
    ~Dog()
    {
        std::cout << "End of Breeding" << std::endl;
    }
    
    void dogBreed();
    void printDog();   
};

struct Puppy
{
    int puppyWeight;
    float puppyColor {100.f};

    Puppy() : puppyWeight(10) {}
    ~Puppy()
    {
        std::cout << "End of Puppy" <<  std::endl;
    }

    void printPuppy();
};

void Puppy::printPuppy()
{
    std::cout << "Puppy weighs: " << puppyWeight << " Oz" << std::endl;

    std::cout << "Color of puppy is: " << puppyColor << "% Grey" << std::endl; 
}

void Dog::dogBreed()
{
    for(manyPuppies = 0; manyPuppies < 3; ++manyPuppies)
    if(isApuppy)
    {
        std::cout << "Dog is " << litter << "% Chihuahua" << std::endl;
    }
    else
    {
        std::cout << "Dog is " << manyPuppies << "% Pitbull" << std::endl;
    }
}

void Dog::printDog()
{
    return dogBreed();
}

/*
 new UDT 4:
 */

struct DBG
{
    int d;
    float generate{0.0};
    bool menuWorks = true;
        
    DBG() : d(0) { }
    ~DBG()
    {
        std::cout << "End of DBG" << std::endl;
    }
    
    void testFunction();
    void printDBG();    
};

void DBG::testFunction()
{
    while( d < 3)
    if(menuWorks)
    {
        std::cout << "DBG " << d << " errors" << std::endl;
        d += 1;
    }
    else
    {
        std::cout << "DBG " << generate + 1 << " errors" << std::endl;
        d += 1; 
    }
}

void DBG::printDBG()
{
    return testFunction();
}

/*
 new UDT 5:
 */

 struct Learn
{
    int l;
    bool isLearning = true;
    float crazyStuff{ 500.1f};
        
    Learn() : l(0) { }
    ~Learn()
    {
        std::cout << "End of Class" << std::endl;
    }
    
    void underStood();
    void printLearn();       
};

void Learn::underStood()
{
    while(l < 3)
    if(isLearning)
    {
        std::cout << "Learn " << l + 10 << " new things" << std::endl;
        l +=1;
    }
    else
    {
        std::cout << "Learn " << crazyStuff << " new things" << std::endl;
        l +=1;
    }
}

void Learn::printLearn()
{
    return underStood();
}




#include <iostream>
int main()
{
    std::cout << "Print:" << std::endl;;
    
    Guitar guitar;
    guitar.printGuitar();

    GuitarChord chord;
    chord.printGuitarChord();
    
    NeuroPath neuroPath;
    neuroPath.printNeuroPath();
    
    Dog dog;
    dog.printDog();

    Puppy pup;
    pup.printPuppy();

    DBG dbg;
    dbg.printDBG();
    
    Learn learn;
    learn.printLearn();
}
