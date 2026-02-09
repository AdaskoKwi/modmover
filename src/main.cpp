#include <iostream>
#include <vector>
#include "../include/Parser.h"
#include "../include/FileMover.h"

void printHelp() {
    std::cout   << "ModMover CLI Tool v1.0 - Minecraft Mod Moving Tool\n"
                << "Usage: modmover <command> [options]\n\n"
                << "Commands:\n"
                << "move                Move mods (.jar files) from source to destination\n\n"
                << "Options:\n"
                << "-h, --help          Show help\n"
                << "-s, --source        Source folder (Default: /home/adam/Pobrane/)\n"
                << "-d, --destination   Destination folder (Default: /home/adam/Downloads/)\n";

    exit(0);
}

int main(int argc, char* argv[]) {
    Config cnf = parseArgs(argc, argv);
    FileMover fileMover(cnf);

    if (cnf.showHelp) {
        printHelp();
    }

    if (cnf.doMove) {
        fileMover.move();
    }

    return 0;
}