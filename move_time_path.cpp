#include <iostream>
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int main(int argc, char **argv)
{
ros::init(argc, argv, "move_pub");
ros::NodeHandle n;
ros::Publisher movement_pub = n.advertise<geometry_msgs::Twist>("mobile_base/commands/velocity",100); 
ros::Rate rate(10);

/* double linspeed;
double angspeed;
std::cout << "This code will make the robot move at a certain speed for a certain time, the combinations that you enter speed-wise will define whether it goes forward/backward, to the sides, etc." << std::endl;

std::cout << "Enter desired linear speed between 0.1 and 1.5, to go forward; between -0.1 and -1.5 to go backward: " << std::endl;
std::cin >> linspeed;
std::cout << "Enter desired angular speed between 0.1 and 13.9 to go to the left; between -0.1 and -13.9 to go the right : " << std::endl;
std::cin >> angspeed;

double usrtime;
std::cout << "Enter the desired time of travel in seconds" << std::endl;
std::cin >> usrtime;
*/

ros::Time forward = ros::Time::now();
while (ros::Time::now() - forward < ros::Duration(1.2)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time turn = ros::Time::now();
while (ros::Time::now() - turn < ros::Duration(0.85)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = 2; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time forward1 = ros::Time::now();
while (ros::Time::now() - forward1 < ros::Duration(0.8)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time turn1 = ros::Time::now();
while (ros::Time::now() - turn1 < ros::Duration(0.85)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = -2; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time forward2 = ros::Time::now();
while (ros::Time::now() - forward2 < ros::Duration(1)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time turn2 = ros::Time::now();
while (ros::Time::now() - turn2 < ros::Duration(0.85)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = -2; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time forward3 = ros::Time::now();
while (ros::Time::now() - forward3 < ros::Duration(2.1)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time turn3 = ros::Time::now();
while (ros::Time::now() - turn3 < ros::Duration(0.85)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = 2; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}


ros::Time forward4 = ros::Time::now();
while (ros::Time::now() - forward4 < ros::Duration(1.6)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}

ros::Time turn4 = ros::Time::now();
while (ros::Time::now() - turn4 < ros::Duration(0.85)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 0; //linear speed value m/s
    move.angular.z = 2; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}


ros::Time forward5 = ros::Time::now();
while (ros::Time::now() - forward5 < ros::Duration(1.5)) 
{
    geometry_msgs::Twist move;
    //velocity controls
    move.linear.x = 1; //linear speed value m/s
    move.angular.z = 0; //angular speed value m/s
    movement_pub.publish(move);

    ros::spinOnce();
    rate.sleep();
}


return 0;
}
