//
// Created by sakurabi on 2018/01/07.
//

#include "File.h"
using namespace std;

File::File(const std::string &name_, int size_) {
    name = name_;
    size = size_;
}

string& File::GetName() {
    return name;
}

int File::GetSize() {
    return size;
}

void File::ShowListInfo(const std::string &prefix) {
    ShowInfo(prefix);
}

