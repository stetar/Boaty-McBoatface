#include <iostream>
#include "Wind.h"

Wind* wind = new Wind();



int main()
{
	std::cout << "Welcome to the Boaty-McBoatface game. \nBelow you will be able to read instructions" << std::endl;
	std::cout << "You are suppose to help guiding Boaty through it journey over the sea." << std::endl;
	std::cout << "You will be able to control Boaty by using to following keys: W,A,S,D." << std::endl;
	std::cout << "W will stear you upwards. A is left, D: Right, S: Downwards, \nbut beware because the sea is full of opstacels trying to stop you." << std::endl;

	std::cout << "The wind from east strength is: " << *(wind)->eptr << std::endl;
	std::cout << "The wind from west strength is: " << *(wind)->wptr << std::endl;
	std::cout << "The wind from north strength is: " << *(wind)->nptr << std::endl;
	std::cout << "The wind from south strength is: " << *(wind)->sptr << std::endl;
	return 0;
}