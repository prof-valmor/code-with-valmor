/*
 * DataRequestor.h
 *
 *  Created on: Jun 21, 2025
 *      Author: code
 */

#ifndef DATA_REQUEST_DATAREQUESTOR_H_
#define DATA_REQUEST_DATAREQUESTOR_H_

#include <memory>
#include <string>
#include <functional>

namespace DataRequestor {

#define DataProcessorCallback std::function<void(std::string)>

class DataRequestor {
public:
	DataRequestor();
	virtual ~DataRequestor();
	void request(std::string address);
	void addDataListener(DataProcessorCallback callback_);

private:
	DataProcessorCallback data_callback_;

	bool isUrl(std::string url);
};
} // namespace DataRequestor
#endif /* DATA_REQUEST_DATAREQUESTOR_H_ */
