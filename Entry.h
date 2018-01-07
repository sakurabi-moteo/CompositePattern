//
// Created by sakurabi on 2018/01/07.
//

#ifndef COMPOSITEPATTERN_ENTRY_H
#define COMPOSITEPATTERN_ENTRY_H

#include <iostream>

class Entry {
public:
    virtual std::string& GetName() = 0;
    virtual int          GetSize() = 0;
    virtual void         ShowListInfo(const std::string &prefix) = 0;

    void ShowInfo(const std::string &prefix);
};


#endif //COMPOSITEPATTERN_ENTRY_H
