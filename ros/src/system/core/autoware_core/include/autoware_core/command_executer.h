#ifndef COMMAND_EXECUTER_H_INCLUDED
#define COMMAND_EXECUTER_H_INCLUDED

//headers in ROS
#include <ros/ros.h>

//headers in autoware_core
#include <autoware_core/node_launcher.h>

//headers in boost
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include <boost/optional.hpp>

class command_executer
{
public:
    command_executer();
    ~command_executer();
    void execute(std::string command);
private:
    //parameters for roslaunch command
    node_launcher launcher_;
    void execute_roslaunch_command_(std::string command);
};

#endif  //COMMAND_EXECUTER_H_INCLUDED