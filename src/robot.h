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

const int start = 128;
const int safe = 131;
const int full = 132;

const int startScript = 152;
const int playScript = 153;
const int showScript = 154;

const int drive = 137;
const int driveDirect = 145;


void splitIntoTwoBytes(unsigned int num, unsigned int &high, unsigned int &low);
const char* intToHex(unsigned int num);

void splitIntoTwoBytes(unsigned int num, unsigned int &high, unsigned int &low)
{
	high = (num / 256) % 256;
	low = num % 256;
}

const char* intToHex(unsigned int num)
{
	std::stringstream c;
	unsigned int high =0, low = 0;
	splitIntoTwoBytes(num, high, low);
	c << std::hex << std::setw(2) << std::setfill('0') << "\\x" << high;
	c << std::hex << std::setw(2) << std::setfill('0') << "\\x" << low;
	return c.str().c_str();
}


}

#endif /* ROBOT_H_ */
