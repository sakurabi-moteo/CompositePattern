//
// Created by sakurabi on 2018/01/07.
//

#include "Entry.h"

using namespace std;

void Entry::ShowInfo(const std::string& prefix) {
    cout << prefix + "/" + GetName() + + " [" + to_string(GetSize()) + " ]" << endl;
}
