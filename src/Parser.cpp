//
// Created by adam on 9.02.2026.
//

#include <vector>
#include "../include/Config.h"
#include "../include/FileMover.h"

Config parseArgs(int argc, char* argv[]) {
    Config config;
    std::vector<std::string_view> args(argv + 1, argv + argc);

    for (size_t i = 0; i < args.size(); i++) {
        std::string_view arg = args[i];

        if (arg == "-s" || arg == "--source") {
            config.sourceFolder = argv[++i];
        } else if (arg == "-d" || arg == "--destination") {
            config.destinationFolder = argv[++i];
        } else if (arg == "-h" || arg == "--help") {
            config.showHelp = true;
        } else if (arg == "move") {
            config.doMove = true;
        }
    }

    return config;
}