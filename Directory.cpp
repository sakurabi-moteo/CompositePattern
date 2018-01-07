//
// Created by sakurabi on 2018/01/07.
//

#include "Directory.h"

using namespace std;

Directory::Directory(const std::string &name_) {
    name = name_;
}

void Directory::Add(Entry* entry) {
    directory.push_back(entry);
}

string& Directory::GetName() {
    return name;
}

int Directory::GetSize() {
    int size = 0;
    for(Entry* entry : directory) {
        size += entry->GetSize();
    }

    return size;
}

void Directory::ShowListInfo(const string &prefix) {
    ShowInfo(prefix);
    for(Entry* entry : directory) {
        entry->ShowListInfo(prefix + "/" + GetName());
    }
}

void Directory::ShowListInfo() {
    ShowListInfo("");
}

