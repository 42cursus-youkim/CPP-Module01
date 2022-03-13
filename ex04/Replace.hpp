#ifndef __REPLACE_H__
#define __REPLACE_H__

#include <fstream>
#include <string>

using std::string;

class Replace {
  public:
    Replace(const string& fileName, const string& toReplace,
            const string& replaceWith);
    void replace();

   private:
    std::ifstream _fin;
    std::ofstream _fout;
    const string _target;
    const string _replaceWith;
};

#endif  // __REPLACE_H__