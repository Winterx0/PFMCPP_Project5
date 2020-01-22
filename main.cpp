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
    //FIXME: bodyType isn't an action, it's a noun.  change the name.
    void printGuitar();
};

void Guitar::tuning()
{
    for(steelNeck = 0; steelNeck < 3; ++steelNeck)
    {
        if(isElectricGuitar)
        {
            std::cout << "Guitar Key: " << steelNeck + tuneKey << std::endl;
        }
        else
        {
            std::cout << "Hz: " << inTune << std::endl;
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
    //FIXME neurons isn't an action, it's a noun. Change the name
    void printNeuroPath();
};

void NeuroPath::thinking()
{
    for(neuroPlasticity = 0; neuroPlasticity < 3; ++neuroPlasticity)
    { 
        if( isSmart )
        {
            std::cout << "Neuro Path " << neuroPlasticity << "% Cognitive Thought" << std::endl;
        }
        else
        {
            std::cout << "Neuro Path " << genericThought << "% Cognitive Thought" << std::endl;
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
    //FIXME dogBreed() isn't an action, it's a noun
    void printDog();   
};

void Dog::makePuppies()
{
    for(manyPuppies = 0; manyPuppies < 3; ++manyPuppies)
    { 
        if(isApuppy)
        {
            std::cout << "Dog is " << litter << "% Chihuahua" << std::endl;
        }
        else
        {
            std::cout << "Dog is " << manyPuppies << "% Pitbull" << std::endl;
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
    std::cout << "Print:" << std::endl;;
    
    Guitar g;
    g.printGuitar();

    GuitarChord chord;
    std::cout << "Guitar Playing" << std::endl;
    
    NeuroPath n;
    n.printNeuroPath();
    
    Dog d;
    d.printDog();

    Puppy pup;
    std::cout << "Puppy was made" << std::endl;
}
