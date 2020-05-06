#include "perceptron.hpp"

Perceptron::Perceptron(/* args */)
{
    w = 1;
    b = 0;
}

Perceptron::~Perceptron()
{
}

weight Perceptron::get_weight()
{
    return w;
}

bias Perceptron::get_bias()
{
    return b;    
}