/*
 * DataRequestor.cpp
 *
 *  Created on: Jun 21, 2025
 *      Author: code-with-valmor
 */

#include "include/DataRequestor.h"
#include <cstddef>
#include <memory>
#include <string>
#include <iostream>

namespace DataRequestor {

DataRequestor::DataRequestor() {
	// TODO Auto-generated constructor stub

}

DataRequestor::~DataRequestor() {
	// TODO Auto-generated destructor stub
}

void DataRequestor::addDataListener(std::function<void(std::string)> callback_) {
	data_callback_ = callback_;
}

void DataRequestor::request(std::string url) {
	if (isUrl(url)) {
		if (data_callback_ != NULL) {
			data_callback_("response 123!!");
			return;
		}
	} else {
		std::cout << "\n isn't url" << std::endl;
	}
}

bool DataRequestor::isUrl(std::string url) {
	if ((url.rfind("http://") == std::string::npos) && (url.rfind("https://") == std::string::npos))
		return false;

	return true;
}

} // namespace DataRequestor
