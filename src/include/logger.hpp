#pragma once

#include <iostream>
#include <string>
#include <vector>

class Logger {
 public:
    Logger(Logger& other) = delete;

    Logger operator=(const Logger&) = delete;

    static Logger *GetInstance();

    void log(const std::string& message) {
        history_.push_back(message);
    }
    void logAndShow(const std::string& message) {
        history_.push_back(message);
        std::clog << message << '\n';
    }
    void showHistory() {
        for(const auto& record : history_) {
            std::clog << "-" << record << '\n';
        }
    }
 protected:
    Logger() {}

    static Logger* instance_;

    std::vector<std::string> history_;
};

Logger* Logger::instance_ = nullptr;
Logger *Logger::GetInstance() {
    if(instance_ == nullptr) {
        instance_ = new Logger();
    }

    return instance_;
}
