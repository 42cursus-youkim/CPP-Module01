#include "Replace.hpp"
#include <iostream>
#include <stdexcept>

static string stem(const string& name) {
  return name.substr(0, name.find_last_of("."));
}

Replace::Replace(const string& fileName,
                 const string& target,
                 const string& replaceWith)
    : _oldStr(target), _newStr(replaceWith) {
  const string resultName = stem(fileName) + ".replace";

  _fin.open(fileName.c_str());
  if (_fin.fail()) {
    throw std::invalid_argument("Failed to open " + fileName);
  }
  _fout.open(resultName.c_str(), std::fstream::trunc);
  if (_fout.fail()) {
    throw std::invalid_argument("Failed to open " + resultName);
  }
}

Replace::~Replace() {
  _fin.close();
  _fout.close();
}

void Replace::createReplaceFile() {
  string line;
  while (std::getline(_fin, line)) {
    _fout << replaceLine(line);
    if (not _fin.eof())
      _fout << "\n";
  }
}

string& Replace::replace(string& str, const string::size_type pos) {
  return str.erase(pos, _oldStr.length()).insert(pos, _newStr);
}

string& Replace::replaceLine(string& str) {
  string::size_type curr = 0;
  string::size_type pos;

  while ((pos = str.find(_oldStr, curr)) != string::npos) {
    replace(str, pos);
    curr = pos + _newStr.length();
  }
  return str;
}