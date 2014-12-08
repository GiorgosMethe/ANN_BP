#ifndef __ANN_BP_NETWORK_H__
#define __ANN_BP_NETWORK_H__

#include <ANN_BP_Layer.h>
#include <vector>

class NNetwork
{
public:
    NNetwork();
    ~NNetwork();
private:
    std::vector<Layer> layers;
};


#endif
