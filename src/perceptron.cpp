#include "perceptron.hpp"

namespace mynn
{
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

void Perceptron::set_activation(Activation* fn)
{
    act_fn = dynamic_cast<Activation*> (fn);
}

output Perceptron::get_result(input i)
{
    return act_fn->process(i);
}

}
