#include "Replace.hpp"
#include <iostream>
#include <stdexcept>

static string stem(const string& name) {
  return name.substr(0, name.find_last_of("."));
}

Replace::Replace(const string& fileName,
                 const string& target,
                 const string& replaceWith)
    : _target(target), _replaceWith(replaceWith) {
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

void Replace::replace()
{
  char c;
  while (_fin.get(c)) {
    if (c == _target[0]) {
      string buffer;
      buffer.push_back(c);
      _fin.get(c);
      while (c == _target[buffer.size()]) {
        buffer.push_back(c);
        _fin.get(c);
      }
      if (buffer == _target) {
        _fout << _replaceWith;
      } else {
        _fout << buffer;
      }
    } else {
      _fout << c;
    }
  }
}
