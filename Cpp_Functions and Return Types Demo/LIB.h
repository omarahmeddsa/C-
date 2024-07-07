#ifndef LIB_H
#define LIB_H


#include <vector>
#include <utility>
#include <string>

std::vector<int>& modifyVector(std::vector<int>& vec);
int oldAddition(int a, int b);

int newAddition(int a, int b = 0);

auto multiply(double a, double b) -> double;



#endif /*LIB_H*/ 