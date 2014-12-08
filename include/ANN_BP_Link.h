#ifndef __ANN_BP_LINK_H__
#define __ANN_BP_LINK_H__

class Link
{
public:
    Link();
    ~Link();
private:
    unsigned int id;
	double weight;
    double value;
};

#endif
