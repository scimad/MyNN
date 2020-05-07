#ifndef _PERCEPTRON
#define _PERCEPTRON

#include "mynn.hpp"
#include "activation.hpp"
using namespace mynn;
namespace mynn
{
class Perceptron
{
private:
    /* data */
    weight w;
    bias b;
    Activation* act_fn;
public:
    Perceptron(/* args */);
    ~Perceptron();

    weight get_weight();
    bias get_bias();
    void set_activation(Activation* fn);
    output get_result(input);
};
#endif

}
