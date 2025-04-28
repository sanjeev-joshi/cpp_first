#include "logger.hpp"
#include <gtest/gtest.h>
#include <fstream>
#include <string>

TEST(LoggerTest, LogMessageCreatesFile) {
    // Remove log.txt if it exists
    std::remove("log.txt");

    Logger::getInstance().log("Test message");

    std::ifstream logFile("log.txt");
    ASSERT_TRUE(logFile.is_open()) << "Log file should exist after logging.";

    std::string line;
    bool found = false;
    while (std::getline(logFile, line)) {
        if (line.find("Test message") != std::string::npos) {
            found = true;
            break;
        }
    }
    ASSERT_TRUE(found) << "Logged message should be in the log file.";

    logFile.close();
}
