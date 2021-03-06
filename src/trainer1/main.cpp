// The first tutorial about how to get into the server and how to navitage
// with `ls` command. For the record purpose, trainers can left their comment
// after finishing their practice.
//
// Haram Kwon
// kharam1436@gmail.com
// vers 1.0

#include <iostream>
#include <fstream>
#include <csignal>
#include <termios.h>

void addHtml();
void readFile(const std::string & file);
void veofDisable();

int main() {

    std::string input;

    // For the security purpose, disable write access to the terminal.
    system("mesg n");
    system("set -o ignoreeof");

    // Setting up for VEOF to CTRL-C (SIGINT)
    veofDisable();

    readFile("cat 1.txt");

    // ls command tutorial
    system("cat 2.txt");
    fflush(stdout);
    while (true) {
        std::cout << "[trainer1@cstest ~]# ";
        getline(std::cin, input);
        if (input == "ls") {
            system("ls");
            std::cout << "[trainer1@cstest ~]# " << std::endl << std::endl;
            std::cout << "< it works! >" << std::endl;
            std::cout << "< press any key to continue >" << std::endl;
            getchar();
            system("clear");
            break;
        } else {
            std::cerr << "Wrong input, check the spelling" << std::endl << std::endl;
        }
    }


    // ls command tutorial
    system("cat 3.txt");
    fflush(stdout);
    while (true) {
        std::cout << "[trainer1@cstest ~]# ";
        getline(std::cin, input);
        if (input == "ls -l") {
            system("ls -l");
            std::cout << "[trainer1@cstest ~]# " << std::endl << std::endl;
            std::cout << "< it works! >" << std::endl;
            std::cout << "< press any key to continue >" << std::endl;
            getchar();
            fflush(stdout);
            system("clear");
            break;
        } else {
            std::cerr << "Wrong input, check the spelling" << std::endl << std::endl;
        }
    }

    readFile("cat 4.txt");

    // Quiz for directory and file
    int score = 0;
    std::string quizInput;

    std::cout << "Decide whether it is directory or not" << std::endl;
    std::cout << "drwxr-xr-x  4 root root 4.0K Mar  4 14:56 uw-linux " << std::endl;
    std::cout << "type '1' for file, and type '2' for directory: ";
    std::cin >> quizInput;
    if(quizInput == "2") {
        std::cout << "Correct" << std::endl;
        score += 20;
    } else {
        std::cout << "Wrong" << std::endl;
    }

    std::cout << "drwxrwxr-x 17 root root 4.0K May 25 15:39 ansible" << std::endl;
    std::cout << "type '1' for file, and type '2' for directory: ";
    std::cin >> quizInput;
    if(quizInput == "2") {
        std::cout << "Correct" << std::endl;
        score += 20;
    } else {
        std::cout << "Wrong" << std::endl;
    }

    std::cout << "-rw-r--r--  1 root root 4.3G Nov 25  2018 CentOS-7-x86_64-DVD-1810.iso" << std::endl;
    std::cout << "type '1' for file, and type '2' for directory: ";
    std::cin >> quizInput;
    if(quizInput == "1") {
        std::cout << "Correct" << std::endl;
        score += 20;
    } else {
        std::cout << "Wrong" << std::endl;
    }

    std::cout << "-rw-r--r--  1 root root  884 Mar 18 14:59 test.cu" << std::endl;
    std::cout << "type '1' for file, and type '2' for directory: ";
    std::cin >> quizInput;
    if(quizInput == "1") {
        std::cout << "Correct" << std::endl;
        score += 20;
    } else {
        std::cout << "Wrong" << std::endl;
    }

    std::cout << "-rw-r--r--  1 root root        884 Mar 18 14:59 test.cu" << std::endl;
    std::cout << "type the size of the file: ";
    std::cin >> quizInput;
    std::cin.get();
    if(quizInput == "884") {
        std::cout << "Correct" << std::endl;
        score += 20;
    } else {
        std::cout << "Wrong" << std::endl;
    }

    // Student performance evaluation
    std::cout << "Your score is " << score << " " << std::endl << std::endl;

    if(score <= 40) {
        std::cout << "You haven't studied, redo the trainer1" << std::endl;
    } else if (score <= 80) {
        std::cout << "You may made a mistake, you can try again." << std::endl;
    } else if (score == 100) {
        std::cout << "Perfect, proceed to trainer2" << std::endl;
    } else {
        std::cerr << "System Error contact kharam@uw.edu" << std::endl;
    }
    std::cout << "<press any key to proceed>" << std::endl;
    getchar();
    system("clear");

    // ls -a command tutorial
    system("cat 5.txt");
    fflush(stdout);
    while (true) {
        std::cout << "[trainer1@cstest ~]# ";
        getline(std::cin, input);
        if (input == "ls -a") {
            system("ls -a");
            std::cout << "[trainer1@cstest ~]# " << std::endl << std::endl;
            std::cout << "< it works! >" << std::endl;
            std::cout << "< press any key to continue >" << std::endl;
            getchar();
            system("clear");
            break;
        } else {
            std::cerr << "Wrong input, check the spelling" << std::endl << std::endl;
        }
    }

    // ls -al command tutorial
    system("cat 6.txt");
    fflush(stdout);
    while (true) {
        std::cout << "[trainer1@cssex ~]# ";
        getline(std::cin, input);
        if (input == "ls -al") {
            system("ls -al");
            std::cout << "[trainer1@cssex ~]# " << std::endl << std::endl;
            std::cout << "< it works! >" << std::endl;
            std::cout << "< press any key to continue >" << std::endl;
            getchar();
            system("clear");
            break;
        } else {
            std::cerr << "Wrong input, check the spelling" << std::endl << std::endl;
        }
    }


    // Once student finish the tutorial, let them add their comment.
    addHtml();
    return 0;
}

void addHtml() {
    std::string name, comment;
    std::ofstream htmlFile;

    // Getting user information
    std::cout << "Type your nick name: ";
    getline(std::cin, name);
    std::cout << "Left your comment here: ";
    getline(std::cin, comment);


    // Editing HTML file the lab management.
    htmlFile.open("./public_html/index.html", std::ios::app);
    if(htmlFile.is_open()) {
        // todo: HTML file editing here.
//        fprintf( htmlFile, "<P>%s : %s</P><BR>\n", name, comment );
        htmlFile << "<p>" << name << std::endl << " : " << comment << std::endl
        << "</P><BR>" << std::endl << std::endl;
        htmlFile.close();
    } else {
        std::cerr << "HTML editing failure" << std::endl;
    }
}

// Read file, and show the file to the user.
void readFile(const std::string & file) {
    system("clear");
    system(file.c_str());
    getchar();
    fflush(stdout);
    system("clear");
}

// CTRL+D would call feof, and it would conflict with the shell.
// So, we overlap CTRL+D function to CTRL+C function, and CTRL+C
// function would be disabled
void veofDisable() {
    struct termios oldTermios, newTermios;
    tcgetattr(0, &oldTermios);
    newTermios = oldTermios;
    newTermios.c_cc[VINTR] = 4;
    tcsetattr(0, TCSANOW, &newTermios);
}
