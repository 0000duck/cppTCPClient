#include <iostream>
#include <cstdlib>
#include "PracticalSocket.h"

using namespace std;

const int ECHOMAX = 255;
const string serverAddr = "192.168.1.15";
const unsigned short portNum=8080;
int main()
{
	char echoBuffer[ECHOMAX+1];
	int echoLength=0;
	cout << "Try to connect: "<< serverAddr <<":"<<portNum<<endl;

	TCPSocket sock(serverAddr,portNum);

	echoLength=sock.recv(echoBuffer,ECHOMAX);
	echoBuffer[echoLength] = '\0'; 
	cout<<echoBuffer<<endl;

	return 0;
}
