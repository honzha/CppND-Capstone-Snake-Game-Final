# CPPND: Capstone Snake Game Final Project

In this Capstone Project, I extended the some new features. When score reach to 3 points, it will have a reverse direction food apprear,
after eating this food, you control direction will be flipped, which mean UP becomes DOWN, Left becomes Right. Window message will update "reverse food appear". When score reach to 7 points, Window message will update "Wall appear", there will show a wall in screen, if snake head hit the wall, game is over.

The starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Rubrics covered in this final project

1. Loops, Functions -> The project use loops and function to detect if condition satisfy and then show the reverse food and wall.
2. The project accepts user input and processes the input -> revcontroller.h and revcontroller.cpp take input from keyboard and reverse the control direction.
3. Object Oriented Programming techniques -> Organize the code into classes with class attributes to hold the data
4. Classes use appropriate access specifiers for class members -> All class data members are explicitly specified as public, protected, or private.
5. Class constructors utilize member initialization lists. -> All class members that are set to argument values are initialized through member initialization lists.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.
