//
// Created by adam on 9.02.2026.
//

#pragma once

#ifndef MODMOVER_CONFIG_H
#define MODMOVER_CONFIG_H
#include <string>

struct Config {
    bool showHelp = false;
    bool doMove = false;
    std::string sourceFolder = "/home/adam/Pobrane/";
    std::string destinationFolder = "/home/adam/Downloads/";
};

#endif //MODMOVER_CONFIG_H