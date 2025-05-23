#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>

int main(){
   while (true) {
    std::string command;
    std::cout << "in ==>";
    std::getline(std::cin, command);

    if (command == "exit"){
        break;
        return 0;
    }
    if (command == "clear"){
        system("clear");
    }
    if (command == "help"){
        std::cout << "exit" << std::endl;
        std::cout << "neofetch" << std::endl;
    }
    if (command == "neofetch"){
        std::cout << "Linux x86_64" << std::endl;
    }
    if (command == "minecraft"){
        system("java -jar /home/vous/subsystem/app/SKlauncher.jar");
    }
    if (command == "math"){
        system("/bin/python3 /home/vous/subsystem/app/math_1.py");
    }
    else{
        std::cout << "command not found" << std::endl;
    }
   }
   return 0;    
}