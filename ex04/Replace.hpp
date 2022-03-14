#ifndef __REPLACE_H__
#define __REPLACE_H__

#include <fstream>
#include <string>

using std::string;

class Replace {
 public:
  Replace(const string& fileName, const string& oldStr, const string& newStr);
  ~Replace();

  void createReplaceFile();

 private:
  string& replace(string& str, const string::size_type pos);
  string& replaceLine(string& str);

  std::ifstream _fin;
  std::ofstream _fout;
  const string& _oldStr;
  const string& _newStr;
};

#endif  // __REPLACE_H__