
#ifndef EXERCISE3_FILE_READER_HPP
#define EXERCISE3_FILE_READER_HPP

#include <filesystem>
#include <optional>
#include <unordered_map>
#include <fstream>
#include <string>
#include <sstream>

class file_reader {

public:
    std::optional<std::string> read(const std::filesystem::path &path) {

        if (cache_.count(path.string())) {
            return cache_.at(path.string());
        }

        if (!std::filesystem::exists(path)) {
            return std::nullopt;
        }

        std::ifstream in(path);

        std::string line;
        std::stringstream content;

        while(in.good()) {
            std::getline(in, line);
            content << line << "\n";
        }

        cache_[path.string()] = content.str();

        return content.str();

    }

private:
    std::unordered_map<std::string, std::string> cache_; // how can we make use of this one?
};

#endif//EXERCISE3_FILE_READER_HPP
