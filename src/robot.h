/*
 * robot.h
 *
 *  Created on: Nov 2, 2013
 *      Author: Corey Dixon
 */

#include <sstream>
#include <iomanip>
#include <string>

#ifndef ROBOT_H_
#define ROBOT_H_

namespace robot
{

const int START = 128;
const int SAFE = 131;
const int FULL = 132;

const int START_SCRIPT = 152;
const int PLAY_SCRIPT = 153;
const int SHOW_SCRIPT = 154;

const int DRIVE = 137;
const int DRIVE_DIRECT = 145;

const int WAIT_TIME = 155;
const int WAIT_DISTANCE = 156;
const int WAIT_ANGLE = 157;
const int WAIT_EVENT = 158;


void splitIntoTwoBytes(unsigned int num, unsigned int &high, unsigned int &low);
std::string intToHexString(unsigned int num);
std::string drive();

void splitIntoTwoBytes(unsigned int num, unsigned int &high, unsigned int &low)
{
	high = (num / 256) % 256;
	low = num % 256;
	//std::cout << "Split: " << high << " " << low << std::endl;
}

std::string intToHexString(unsigned int num)
{
	std::stringstream c;
	c << std::hex << std::setw(2) << std::setfill('0') << "\\x" << num;
	//cout << "String: " << c.str() << endl;
	return c.str();
}

std::string drive()
{
	std::stringstream s;
	unsigned int vel, rad;
	unsigned int high, low;
	s << intToHexString(137);
	std::cout << "Velocity (-500 – 500 mm/s): ";
	std::cin >> vel;
	splitIntoTwoBytes(vel, high, low);
	s << intToHexString(high) << intToHexString(low);
	std::cout << "Radius (-2000 – 2000 mm): ";
	std::cin >> rad;
	splitIntoTwoBytes(rad, high, low);
	s << intToHexString(high) << intToHexString(low);
	return s.str();
}

}

#endif /* ROBOT_H_ */
