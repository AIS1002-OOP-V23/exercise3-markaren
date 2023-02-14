
#ifndef EXERCISE3_FILE_READER_HPP
#define EXERCISE3_FILE_READER_HPP

#include <filesystem>
#include <optional>
#include <unordered_map>

class file_reader {

public:
    std::optional<std::string> read(const std::filesystem::path &path);

private:
    std::unordered_map<std::string, std::string> cache_; // how can we make use of this one?
};

#endif//EXERCISE3_FILE_READER_HPP
