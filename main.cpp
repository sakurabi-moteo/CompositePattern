#include <iostream>
#include "Directory.h"
#include "File.h"

using namespace std;

int main() {
    cout<<"Composite Method Pattern Sample Start!!"<<endl;

    cout<<"Making top directory..."<<endl;
    Directory rootdir("root");
    Directory bindir("bin");
    Directory tmpdir("tmp");
    Directory usrdir("usr");

    //ディレクトリの追加
    rootdir.Add(&bindir);
    rootdir.Add(&tmpdir);
    rootdir.Add(&usrdir);

    //ファイルの作成
    File vim("vim",100);
    File git("git",1000);
    bindir.Add(&vim);
    bindir.Add(&git);

    rootdir.ShowListInfo();//エントリのデータの表示

    cout<<"Making User directory..."<<endl;
    Directory tomdir("Tom");
    File avi("123.avi",100000);
    usrdir.Add(&tomdir);
    tomdir.Add(&avi);

    // comment
    // comment2

    rootdir.ShowListInfo();//エントリのデータの表示

    return 0;
}