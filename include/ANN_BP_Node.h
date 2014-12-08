#ifndef __ANN_BP_NODE_H__
#define __ANN_BP_NODE_H__

#include <ANN_BP_Enums.h>
#include <ANN_BP_Link.h>
#include <vector>

class Node
{
public:
    Node();
    Node(unsigned int id, int aFucntion);
    ~Node();

private:
    unsigned int id;
    double input;
    double output;
    node_layer_type type;
    ActivationFunction aFunction;
    void activate();
    void reset();
    std::vector<Link*> inputLinks;
    std::vector<Link*> outputLinks;
};



#endif
