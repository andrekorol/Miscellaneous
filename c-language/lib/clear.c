#ifndef _CLEAR_H_
#define _CLEAR_H_
    #ifdef _WIN32
        void clearScreen() {
            system("cls");
        }
        #endif
    #elif __APPLE__
        #include "TargetConditionals.h"
        #if TARGET_OS_MAC
            void clearScreen() {
                system("clear");
            }
        #else
        #   error "This Apple platform is not supported"
        #endif
    #elif __linux__
        void clearScreen() {
            system("clear");
        }
    #elif __unix__
        void clearScreen() {
            system("clear");
        }
    #elif defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
    #include <sys/param.h>
    #if defined(BSD)
        void clearScreen() {
            system("clear");
        }
    #endif
    #endif
