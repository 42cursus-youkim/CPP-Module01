NAME := prog.out
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -Iinclude/

SRC := $(wildcard src/*.cpp)
OBJ := $(SRC:%.cpp=%.o)

.PHONY: run re test clean

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(NAME)
	./$(NAME) test.txt para !!PARA!!

re: clean $(NAME)

clean:
	rm -f $(OBJ) $(NAME)
