#include <ANN_BP_Node.h>
#include <ANN_BP_Enums.h>

Node::~Node(){

}

Node::Node(unsigned int id, int aFucntion){
    input = 0.0;
    output = 0.0;
    this->aFunction = static_cast<ActivationFunction>(aFucntion);
    this->id = id;
}
