/*
 Project 5: Part 3 / 4
 video: Chapter 3 Part 4: 

Create a branch named Part3

 the 'new' keyword

 1) add #include "LeakedObjectDetector.h" to main
 
 3) Add 'JUCE_LEAK_DETECTOR(OwnerClass)' at the end of your UDTs.
 
 4) write the name of your class where it says "OwnerClass"
 
 5) write wrapper classes for each type similar to how it was shown in the video
 
 7) update main to use your wrapper classes, which have your UDTs as pointer member variables.
 
 8) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 
 see here for an example: https://repl.it/@matkatmusic/ch3p04example
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

    void guitarFunc() {std::cout << "Guitar function is active for the " << this->steelNeck + 1 << " scale degree with " << this->inTune << "Hz at Octave " << this->tuneKey << std::endl;}

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
    std::cout << "Guitar is at scale degree " << this->steelNeck + 1 << " at " << this->inTune << "Hz" << " in Octave " << this->tuneKey << std::endl;
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

    void neuroFunc() {std::cout << "Cognitive Ability is at " << this->neuroPlasticity << "%" << " with an IQ of " << this->genericThought / 4 << std::endl;}
    
    void thinking(); 
    void printNeuroPath();
};

void NeuroPath::thinking()
{
    for(neuroPlasticity = 0; neuroPlasticity < 3; ++neuroPlasticity)
    { 
        if( isSmart )
        {
            std::cout << "Neuro Path " << this->neuroPlasticity / 2 << "% Cognitive Thought" << std::endl;
        }
        else
        {
            std::cout << "Neuro Path " << this->genericThought / 3 << "% Cognitive Thought" << std::endl;
        }
    }
}

void NeuroPath::printNeuroPath()
{
    std::cout << "Brain Data" << std::endl;
    std::cout << "Cognitive Ability is at " << this->neuroPlasticity + 100/2 << "%" << " with an IQ of " << this->genericThought << std::endl;
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

    void dogFunc() {std::cout << "Dog is loading at " << this->manyPuppies + 100 << "% and is " << this->litter << "% ready to load puppies" << std::endl;}
    
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
    std::cout << "Dog is loading at " << this->manyPuppies + 100 << "% and is " << this->litter / 2 << "% ready to load puppies" << std::endl;
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
        std::cout << " " << std::endl; //spacer
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
    std::cout << "Print:" << std::endl;
    std::cout << " " << std::endl; //spacer
    
    Guitar g;
    g.printGuitar();
    g.tuning();
    g.guitarFunc();

    std::cout << "Guitar function is active for the " << g.steelNeck + 1 << " scale degree with " << g.inTune << "Hz at Octave " << g.tuneKey << std::endl;

    GuitarChord guitarChord;
    std::cout << "Guitar Playing Ended" << std::endl;
    std::cout << " " << std::endl; //spacer
    
    NeuroPath n;
    n.printNeuroPath();
    n.thinking();
    n.neuroFunc();

    std::cout << "Cognitive Ability is at " << n.neuroPlasticity << "%" << " with an IQ of " << n.genericThought / 4 << std::endl;

    std::cout << "End of Brain Data" << std::endl;

    std::cout << " " << std::endl; //spacer
    
    Dog d;
    d.printDog();
    d.makePuppies();
    d.dogFunc();
    
    std::cout << "Dog is loading at " << d.manyPuppies + 100 << "% and is " << d.litter << "% ready to load puppies" << std::endl;

    std::cout << "End of Dog Data" << std::endl;

    std::cout << " " << std::endl; //spacer

    Puppy puppy;
    std::cout << "Puppy was made" << std::endl;
}
