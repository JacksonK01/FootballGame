//
// Created by jkirc on 6/7/2025.
//

#include "Logger.h"

#include <iostream>
#include <windows.h>

void Logger::initialize(const std::string& message) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << message << "\n";

}

void Logger::warn(const std::string& message) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    std::cout << message << "\n";
}

void Logger::error(const std::string& message) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    std::cout << message << "\n";
    throw std::runtime_error("Exited via logger");
}


