# Testing Coderrect

## Detecting Races
Main.cpp currently has two races
* Pthread concurrently writing to a global variable "var" 
* OpenMP performing a parallel computation on an array.

To detect these races, use ```coderrect make``` or ```coderrect gcc -fopenmp -lpthread -g main.cpp -o main``` and it will build and produce a report.

Open the report.html to see the races generated
