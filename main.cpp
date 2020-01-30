/*
Project 5: Part 2 / 4
 video: Chapter 3 Part 1

Create a branch named Part2

 The 'this' keyword
 
 1) For any std::cout statements you had in main() that accessed member variables of your types or printed out the results of your member function calls,
        a) write a member function that prints the same thing out, but uses the proper techniques inside the member functions to access the same member variables/functions.
        b) be explicit with your use of 'this->' in those member functions so we see how you're accessing/calling those member variables and functions *inside*
 
 2) if you didn't have any std::cout statements in main() that accessed member variables:
         write some.
         then do 1a) & 1b)
 
 
 3) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example:
 */
#include <iostream>
namespace example
{
    struct MyFoo
    {
        MyFoo() { std::cout << "creating MyFoo" << std::endl; }
        ~MyFoo() { std::cout << "destroying MyFoo" << std::endl; }
        void memberFunc() { std::cout << "MyFoo returnValue(): " << this->returnValue() << " and MyFoo memberVariable: " << this->memberVariable << std::endl; }  //3)
        int returnValue() { return 3; }
        float memberVariable = 3.14f;
    };
    int main()
    {
        MyFoo mf;
        std::cout << "mf returnValue(): " << mf.returnValue() << " and mf memberVariable: " << mf.memberVariable << std::endl;  //3)
        mf.memberFunc();
        return 0;
    }
}

#include <string>
#include <stdlib.h> 
#include <iostream>



/*
 copied UDT 1:
 */
struct Guitar
{
    int pickUps();
    int steelNeck;
    float inTune { 440.0f };
    float tuneKey { 4.0f };
    bool isElectricGuitar = true;
        
    Guitar() : steelNeck(0) { }
    ~Guitar()
    {
        std::cout << "End of Guitar" << std::endl;
    }
    
    void tuning(); 
    void printGuitar();
};

void Guitar::tuning()
{
    for(steelNeck = 0; steelNeck < 3; ++steelNeck)
    {
        if(isElectricGuitar)
        {
            std::cout << "Guitar Key: " << this->steelNeck + this->tuneKey << std::endl;
        }
        else
        {
            std::cout << "Hz: " << this->inTune << std::endl;
        }
    }
}
void Guitar::printGuitar()
{
    std::cout << "Guitar Data" << std::endl;
}

int Guitar::pickUps()
{
    return 0;
}



/*
 copied UDT 2:
 */

struct NeuroPath
{
    int brain();
    int neuroPlasticity;
    float genericThought { 500.0f };
    bool isSmart = false;
        
    NeuroPath() : neuroPlasticity(0) {}
    ~NeuroPath()
    {
        std::cout << "End of Neuro Path" << std::endl;
    }
    
    void thinking(); 
    void printNeuroPath();
};

void NeuroPath::thinking()
{
    for(neuroPlasticity = 0; neuroPlasticity < 3; ++neuroPlasticity)
    { 
        if( isSmart )
        {
            std::cout << "Neuro Path " << this->neuroPlasticity << "% Cognitive Thought" << std::endl;
        }
        else
        {
            std::cout << "Neuro Path " << this->genericThought << "% Cognitive Thought" << std::endl;
        }
    }
}

void NeuroPath::printNeuroPath()
{
    std::cout << "Brain Data" << std::endl;
}

int NeuroPath::brain()
{
    return 0;
}



/*
 copied UDT 3:
 */
struct Dog
{
    int pupper();
    int manyPuppies;
    float litter { 100.0f };
    bool isApuppy = false;
        
    Dog() : manyPuppies(0) { }
    ~Dog()
    {
        std::cout << "End of Breeding" << std::endl;
    }
    
    void makePuppies(); 
    void printDog();   
};

void Dog::makePuppies()
{
    for(manyPuppies = 0; manyPuppies < 3; ++manyPuppies)
    { 
        if(isApuppy)
        {
            std::cout << "Dog is " << this->litter << "% Chihuahua" << std::endl;
        }
        else
        {
            std::cout << "Dog is " << this->manyPuppies << "% Pitbull" << std::endl;
        }
    }
}

void Dog::printDog()
{
    std::cout << "Dog Data" << std::endl;
}

int Dog::pupper()
{
    return 0;
}



/*
 new UDT 4:
 */

struct Puppy
{
    Puppy() 
    {
        std::cout << "You have a puppy!" << std::endl;
    }
    ~Puppy()
    {
        std::cout << "Puppy died of dysentery" << std::endl;
    }

    Dog puppyWeight;
};

void printPuppy()
{
    Puppy puppy;
}



/*
 new UDT 5:
 */

struct GuitarChord
{
    GuitarChord() 
    {
        std::cout << "Guitar Chord Placed!" << std::endl;
    }
    ~GuitarChord()
    {
        std::cout << "End of Chord Progression" << std::endl;
    }

    Guitar scaleDegree;
};

void printGuitarChord()
{
    GuitarChord guitarChord;
}



#include <iostream>
int main()
{
    example::main();
    std::cout << "Print:" << std::endl;;
    
    Guitar g;
    g.printGuitar();

    GuitarChord chord;
    std::cout << "Guitar Playing Ended" << std::endl;
    
    NeuroPath n;
    n.printNeuroPath();
    
    Dog d;
    d.printDog();
    std::cout << "End of Dog Data" << std::endl;

    Puppy pup;
    std::cout << "Puppy was made" << std::endl;
}
