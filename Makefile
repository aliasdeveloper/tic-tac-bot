CXX      := g++
LIB_DIR  := ./lib
CXXFLAGS := -Wall -Wextra -Werror
NAME     := -o
LDFLAGS  := -L/usr/lib -lstdc++ -lm
OBJS     := $(LIB_DIR)/Board.o 
TARGET   := main

all: build $(TARGET)

$(TARGET): main.cpp $(OBJS) 
	$(CXX) $(CXXFLAGS) $< $(NAME) $@ $(OBJS)

$(LIB_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

.PHONY: all build clean debug release

clean:
	-@rm -rvf main lib/*.o
