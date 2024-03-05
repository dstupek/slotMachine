#include "Reel.h"
#include <iostream>
#include <ctime>
using namespace std;

Reel::Reel() {
    faces[0] = "lemon";
    faces[1] = "cherry";
    faces[2] = "banana";
    faces[3] = "seven";
    faces[4] = "diamond";
    faces[5] = "bell";
    faces[6] = "heart";
    faces[7] = "star";
    faces[8] = "strawberry";
    faces[9] = "grape";
    faces[10] = "bell";
    faces[11] = "horseshoe";
    faces[12] = "heart";
    faces[13] = "pear";
    faces[14] = "orange";
    faces[15] = "10";
    faces[16] = "king";
    faces[17] = "queen";
    faces[18] = "jack";
    faces[19] = "joker";

    // Seed RNG
    srand(time(0));

    // Select a random face within
    index = rand() % 20;


}

string Reel::getFace()
{
    return selectedFace;
}

string Reel::getPosition()
{
    return position;
}

string Reel::spin()
{

    // *** This is really funny because when you put the RNG in here 
    // you are forcing the game to win everytime when all objects get the same number! 
    // 
    // 
    // Seed RNG
  //srand(time(0)); moved this up to my constructor 
 // int index = rand() % 20;
    // Select a random face within

    //Same problem happens again if you don't randomize index here 
    int index = rand() % 20;
  
 
    // Store the selected face
    selectedFace = faces[index];

    // Set the position based on the index & avoid off by 1 error 
    position = to_string(index + 1);

    // Return the selected face
    return selectedFace;
}
