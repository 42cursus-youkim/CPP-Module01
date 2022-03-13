#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>

class Karen {
 public:
  void complain(std::string level);

 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

typedef void (Karen::*KarenFunc)(void);

#endif  // __KAREN_H__