#ifndef __ANN_BP_LAYER_H__
#define __ANN_BP_LAYER_H__

#include <vector>
#include <ANN_BP_Node.h>
#include <ANN_BP_Enums.h>

class Layer
{
public:
    Layer();
    ~Layer();
    std::vector<Node> nodes;
private:
    node_layer_type type;
};


#endif
