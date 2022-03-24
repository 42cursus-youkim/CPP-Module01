NAME := harlFilter
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

ARG := $(shell python -c \
	'import random; \
	print(random.choice(\
		["DEBUG", "INFO", "WARNING", "ERROR", \
		"I am not sure how tired I am today..."]))')


SRC := $(wildcard *.cpp)
OBJ := $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

run: $(NAME)
	./$(NAME) "$(ARG)"

.PHONY: run re test clean

re: clean $(NAME)

clean:
	rm -f $(OBJ) $(NAME)
