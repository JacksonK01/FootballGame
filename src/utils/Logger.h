//
// Created by jkirc on 6/7/2025.
//

#ifndef LOGGER_H
#define LOGGER_H
#include <string>


//Class based on logging
class Logger {
public:
    static void initialize(const std::string& message);
    static void warn(const std::string& message);
    static void error(const std::string& message);
};



#endif //LOGGER_H
