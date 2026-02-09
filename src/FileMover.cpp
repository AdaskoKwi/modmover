//
// Created by adam on 9.02.2026.
//

#include "../include/FileMover.h"

namespace fs = std::filesystem;

bool FileMover::isJarFile(const fs::directory_entry &entry) {
    return entry.path().extension() == ".jar";
}

void FileMover::move() {
    for (const auto& entry : fs::directory_iterator(config.sourceFolder)) {
        if (entry.is_regular_file() && isJarFile(entry)) {
            std::string filename = entry.path().filename().generic_string();
            fs::path destinationPath(config.destinationFolder + filename);

            fs::copy(entry.path(), destinationPath);
            fs::remove(entry.path());
        }
    }
}
