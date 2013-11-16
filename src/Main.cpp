/*
 * Main.cpp
 *
 *  Created on: Oct 18, 2013
 *      Author: zim
 */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "robot.h"

using namespace std;
using namespace robot;

int main(int argc, char* argv[])
{
/*	stringstream command;
	command << "/bin/echo -e '";
	for (int i = 1; i < argc; i++)
	{
		command << hex << setw(2) << setfill('0') << "\\x" << atoi(argv[i]);
	}
	command << '\'';
	command << " > /dev/ttyUSB0";
	system("stty -F /dev/ttyUSB0 57600 cs8 -cstopb");
	system(command.str().c_str());
	cout << endl << "Cmd: " << command.str().c_str() << endl;
	*/


/*
	 unsigned int high = 0, low = 0;
	 int num = -300;

	 splitIntoTwoBytes(num, high, low);
	 cout << "Num: " << num << endl << "High: " << high << endl << "Low: " << low << endl;
*/

	/*stringstream command;
	command << "/bin/echo -e '";
	for(int i = 1; i < argc; i++)
		command << intToHexString(atoi(argv[i]));
	command << '\'';
	cout << endl << command.str() << endl; */

	stringstream command;
	command << drive();
	cout << command.str() << endl;

	return 0;
}
