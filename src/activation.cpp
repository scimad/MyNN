#include "activation.hpp"
namespace mynn
{
Activation::Activation(/* args */)
{
}

Activation::~Activation()
{
}

output Activation::process(input i)
{
    return 0;
}

Identity::Identity(/* args */)
{
}

Identity::~Identity()
{
}

output Identity::process(input i)
{
    return i;
}

BinaryStep::BinaryStep(/* args */)
{
}

BinaryStep::~BinaryStep()
{
}

output BinaryStep::process(input i)
{
    return (i<0?0:1);
}


Tanh::Tanh(/* args */)
{
}

Tanh::~Tanh()
{
}

output Tanh::process(input i)
{
    return tanh(i);
}

Relu::Relu(/* args */)
{
}

Relu::~Relu()
{
}

output Relu::process(input i)
{
    return (i<0?0:i);
}

Sigmoid::Sigmoid(/* args */)
{
}

Sigmoid::~Sigmoid()
{
}

output Sigmoid::process(input i)
{
    return (1/(1+exp(-i)));
}




}
