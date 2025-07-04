//============================================================================
// Name        : veloce-c.cpp
// Author      : code-with-valmor
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "data-request/include/DataRequestor.h"
#include <iostream>

using namespace std;

static DataRequestor::DataRequestor requestor;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	requestor.addDataListener([](std::string data) {
		cout << data << endl;
	});

	requestor.request("https://www.google.com");
}
