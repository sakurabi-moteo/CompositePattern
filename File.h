//
// Created by sakurabi on 2018/01/07.
//

#ifndef COMPOSITEPATTERN_FILE_H
#define COMPOSITEPATTERN_FILE_H

#include <iostream>
#include "Entry.h"

class File : public Entry {
private:
    std::string name;
    int         size;
public:
    File(const std::string &name_, int size_);
    std::string& GetName     ();
    int          GetSize     ();
    void         ShowListInfo(const std::string &prefix);
};


#endif //COMPOSITEPATTERN_FILE_H
