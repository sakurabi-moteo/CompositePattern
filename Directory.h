//
// Created by sakurabi on 2018/01/07.
//

#ifndef COMPOSITEPATTERN_DIRECTORY_H
#define COMPOSITEPATTERN_DIRECTORY_H

#include <iostream>
#include <vector>
#include "Entry.h"

class Directory : public Entry {
private:
    std::string name;
    std::vector<Entry*> directory;
public:
    Directory(const std::string &name_);
    void         Add(Entry* entry);
    std::string& GetName();
    int          GetSize();
    void         ShowListInfo(const std::string &prefix);
    void         ShowListInfo();
};


#endif //COMPOSITEPATTERN_DIRECTORY_H
