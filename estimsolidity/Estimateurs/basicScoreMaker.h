#ifndef BASICSCOREMAKER_H
#define BASICSCOREMAKER_H

#include <vector>
#include <string>
#include <sstream>
#include <iostream>

std::string model(std::vector<float>& serie);

float score(std::string model, float solidite);

#endif