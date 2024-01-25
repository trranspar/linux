#include<iostream>
#include"log.h"

int main(int argc, char** agrv) {
	sylar::Logger::ptr logger(new sylar::Logger);
	logger->addAppender(sylar::LogAppender::ptr(new sylar::StdoutLogAppender));

	sylar::LogEvent::ptr event(new sylar::LogEvent(__FILE__, __LINE__, 0, 1, 2, time(0)));

	logger->log(sylar::LogLevel::DEBUG, event);
	//std::cout << "Hello World" << std::endl;

	return 0;
}