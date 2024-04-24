#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Logger {
 public:
    Logger(Logger& other) = delete;

    Logger operator=(const Logger&) = delete;

    static std::shared_ptr<Logger> GetInstance();

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

    static std::shared_ptr<Logger> instance_;

    std::vector<std::string> history_;
};

std::shared_ptr<Logger> Logger::instance_ = nullptr;
std::shared_ptr<Logger> Logger::GetInstance() {
    if(instance_ == nullptr) {
        instance_ = std::shared_ptr<Logger>(new Logger());
    }

    return instance_;
}
