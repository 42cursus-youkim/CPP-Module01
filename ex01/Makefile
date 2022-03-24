NAME := prog.out
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := $(wildcard *.cpp)
OBJ := $(SRC:%.cpp=%.o)

.PHONY: run re test clean

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(NAME)
	./$(NAME)

re: clean $(NAME)

clean:
	rm -f $(OBJ) $(NAME)
