# Testing Coderrect

## Detecting Races
Main.cpp currently has two races where OpenMP is performing concurrent increments to a shared variable

To detect these races, use ```coderrect make``` or ```coderrect gcc -fopenmp -g main.cpp -o main``` and it will build and produce a report.

Open the report.html to see the races generated
