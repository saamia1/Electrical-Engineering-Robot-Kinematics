/**************************
Name: Saamia Shafqat
1st December 2021
Assignment 4 : Electrical Engineering (Robot Kinematics)
***************************/
#include <iostream>
#include <fstream>
#include <cmath>
#include "Robot.h"
using namespace std;
int main ()
{
	double length; //declaring variables for taking input
	double angle;
  int number_segments;
	Robot* robot = NULL; //declaring pointer to robot class
//taking input from user
  cout<<"Please enter the number of segments you want on your robot"<<endl;
  cin>>number_segments;

  //creating robot segments accordingly
  for(int i=0; i<number_segments; i++)
  {
    cout<<"Please enter length of segment "<<i+1<<endl;
    cin>>length;
    cout<<"Please enter in radians, angle of segment "<<i+1<<endl;
    cin>>angle;
    if(i == 0) //first segment
    {
      Segment *temp = new Segment(0,0,length, angle);
      robot = new Robot(temp);
    }
    else 
    {
      robot->insertSegment(length, angle);
    }
  }
  //print robot segments
  robot->printRobot();
  return 0;
}
