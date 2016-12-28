#include <iostream>
#include <ros/ros.h>
#include <string.h>
#include <geometry_msgs/Twist.h>

int main(int argc, char **argv)
{
ros::init(argc, argv, "move_pub");
ros::NodeHandle n;
ros::Publisher movement_pub = n.advertise<geometry_msgs::Twist>("mobile_base/commands/velocity",100); 
ros::Rate rate(10);

char choice;
std::cout << "Do you want to use a predetermined path (input the letter y ) or input a desired speed and time at which the robot should move (input the letter n)" << std::endl;
std::cin >> choice;

switch(choice) {

case('y') :{
ros::Time forward = ros::Time::now();
while (ros::Time::now() - forward < ros::Duration(12)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0.1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();+
    rate.sleep();
}

ros::Time turn = ros::Time::now();
while (ros::Time::now() - turn < ros::Duration(3.4)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = -0.5; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time forward1 = ros::Time::now();
while (ros::Time::now() - forward1 < ros::Duration(8)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0.1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time turn1 = ros::Time::now();
while (ros::Time::now() - turn1 < ros::Duration(3.4)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = -0.5; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time forward2 = ros::Time::now();
while (ros::Time::now() - forward2 < ros::Duration(10)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0.1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time turn2 = ros::Time::now();
while (ros::Time::now() - turn2 < ros::Duration(3.4)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = -0.5; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time forward3 = ros::Time::now();
while (ros::Time::now() - forward3 < ros::Duration(21)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0.1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time turn3 = ros::Time::now();
while (ros::Time::now() - turn3 < ros::Duration(3.4)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = 0.5; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}


ros::Time forward4 = ros::Time::now();
while (ros::Time::now() - forward4 < ros::Duration(16)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0.1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time turn4 = ros::Time::now();
while (ros::Time::now() - turn4 < ros::Duration(3.4)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = 0.5; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}


ros::Time forward5 = ros::Time::now();
while (ros::Time::now() - forward5 < ros::Duration(15)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0.1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

break;
};

case('n') :{double linspeed;
double angspeed;
std::cout << "This code will make the robot move at a certain speed for a certain time, the combinations that you enter speed-wise will define whether it goes forward/backward, to the sides, etc." << std::endl;

std::cout << "Enter desired linear speed between 0.1 and 1.5, to go forward; between -0.1 and -1.5 to go backward: " << std::endl;
std::cin >> linspeed;
std::cout << "Enter desired angular speed between 0.1 and 13.9 to go to the left; between -0.1 and -13.9 to go the right : " << std::endl;
std::cin >> angspeed;

double usrtime;
std::cout << "Enter the desired time of travel in seconds" << std::endl;
std::cin >> usrtime;

ros::Time start = ros::Time::now();
while (ros::Time::now() - start < ros::Duration(usrtime)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = linspeed; //linear speed value m/s
    move.angular.z = angspeed; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}
break;
};
return 0;
}
}
