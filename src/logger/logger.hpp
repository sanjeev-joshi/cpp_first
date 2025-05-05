#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <mutex>
#include <fstream>

class Logger {
public:
    static Logger& getInstance();

    void log(const std::string& message);

private:
    Logger();                           // Private constructor
    ~Logger();                          // Private destructor
    Logger(const Logger&) = delete;     // No copy constructor
    Logger& operator=(const Logger&) = delete; // No copy assignment

    std::mutex m_mutex;
    std::ofstream m_logFile;
};

#endif // LOGGER_HPP
