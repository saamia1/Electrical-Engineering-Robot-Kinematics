
# Electrical Engineering Case Study

Programming aspects to get familiarized with:
1. Object Oriented Programming
2. Pointers to Objects


## Documentation

This assignment involves the design of a software to simulate the motion of a multi-degree of freedom
kinematic chains that form the structure of a robotic system. The emphasis on geometry means that the
links of the robot are modeled as rigid bodies and its joints are assumed to provide pure rotation or
translation.
Figure 1: (left) Example of a robot chain with three segments, (right) the parameters of a segment.
The system has the following components:
1. A segment: A segment is a rigid member connecting two joints. As shown in Figure 1(right), a
segment has the following parameters: a starting point (x1 and y1 coordinates), a length, an angle
(different technique may have different references for measuring the angle for a segment, so make
your assumption clear), and an end point (x2 and y2 coordinates). Note that the coordinates of the
end point can be calculated given the start point coordinates, the length, and the angle.

2. A Robot: A robot is comprised of a chain of segments that are connected via joints. The first
segment is called the root as it is connected to the robot base/ground. A robot can have multiple
segments, which is commonly known as the degrees of freedom. The end effector of the robot is
the end point of the last segment (noted as (x,y) in Figure 1-left). In order to determine the position
of the end effector, the position/orientation of all the segments must be determined – which is
usually controlled through the angles of the segments. The forward kinematic analysis involves
calculating the end effector position for a specific set of angles for the segments. The inverse
kinematics analysis involves calculating the angles of all the segments that move the end effector
to a particular position. This assignment will focus on the forward kinematics analysis.
You will develop three classes: Point to handle the coordinates of a point in 2D space, Segment to store
the parameters and associated functions about a specific segment, and Robot to store the information about
the chain of segments making up the robot system.
The class Point provides storage for a 2D point including the X and Y coordinates. The class should
include functions to retrieve/update the coordinates. Appropriate constructor(s) must also be developed.
The class Segment provides storage for the segment parameters, including the start point, the end point,
the length, and the angle (in radians). The segment class must include a reference to a child segment in
order to facilitate the creation of a chain of segments to form the robot system. Note the followings:

1. The constructor function initializes the segment start point, length and angle. A local function must
be developed (and called through the constructor) to automatically calculate the coordinates of the
end point. The end point data must be updated every time any of the segment data are updated. You
may use multiple constructors as needed.

2. The getter/setter functions must be implemented for all the variables. The setEndPoint()
function should not be implemented to avoid any discrepencies in the data stored in a Segment
object.

3. The printSegmentInfo() function displays the segment information on the output screen.

4. You may implement additional auxiliary functions as needed.
The class Robot provides storage for the chain of segments, including the root segment and the number
of segments in the chain. Note the followings:

1. The constructor function initializes a robot with no or one root segment. You may use multiple
constructors as needed.

2. The Robot class must include functions to add and remove segments from the chain. Adding or
removing segments is done at the end effector side (insert or delete segments at the end of the
chain).

3. The Robot class must include a function to reset the chain to a default position. The default
position is defined as moving all the segments to the positive x-axis with zero angles. 

4. The Robot class must include a function to print the current pose of the chain. You may use
graphics libraries or asterisks to provide a visual representation of the current pose.

5. The Robot class must include a function to perform the forward kinematics of the chain. The
function receives an array of angles corresponding to the segments and returns the end effector
position. For example, the first element of the angles array represents the new angle the root
segment must be updated to, and so on.

6. You may implement additional auxiliary functions as needed. 

