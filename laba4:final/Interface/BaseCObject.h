#ifndef LABA4_FINAL_BASECOBJECT_H
#define LABA4_FINAL_BASECOBJECT_H

class BaseCObject {
public:
    virtual const char *classname() = 0;
    virtual unsigned int size() = 0;
};

#endif //LABA4_FINAL_BASECOBJECT_H
