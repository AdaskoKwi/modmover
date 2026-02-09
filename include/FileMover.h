//
// Created by adam on 9.02.2026.
//
#pragma once

#ifndef MODMOVER_FILEMOVER_H
#define MODMOVER_FILEMOVER_H
#include "Config.h"
#include <filesystem>
#include <vector>

namespace fs = std::filesystem;

class FileMover {
    Config config;

public:
    explicit FileMover(Config cfg) : config(std::move(cfg)) {}

    static bool isJarFile(const fs::directory_entry &entry);

    void move();
};

#endif //MODMOVER_FILEMOVER_H