#ifndef _ACTIVATION
#define _ACTIVATION

#include "mynn.hpp"
namespace mynn
{
class Activation
{
private:

public:
    Activation(/* args */);
    ~Activation();
    virtual output process(input i);

};

class Identity : public Activation
{
private:
    /* data */
public:
    Identity(/* args */);
    ~Identity();
    output process(input i);

};

class BinaryStep : public Activation
{
private:
    /* data */
public:
    BinaryStep(/* args */);
    ~BinaryStep();
    output process(input i);

};

class Tanh : public Activation
{
private:
    /* data */
public:
    Tanh(/* args */);
    ~Tanh();
    output process(input i);

};

class Relu : public Activation
{
private:
    /* data */
public:
    Relu(/* args */);
    ~Relu();
    output process(input i);

};

class Sigmoid : public Activation
{
private:
    /* data */
public:
    Sigmoid(/* args */);
    ~Sigmoid();
    output process(input i);

};



}



#endif
