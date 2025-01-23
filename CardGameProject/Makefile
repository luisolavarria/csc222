CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = CardGame
SRCS = main.cpp Card.cpp Deck.cpp Game.cpp
OBJS= $(SRCS: .cpp-.o)
all: $(TARGET)
$(TARGET): $(OBJS)
$(CXX) $(CXXFLAGS) -o $(TARGETS) $(OBJS)
%.o: %.cpp
$(CXX) $(CXXFLAGS) -c $<
clean:
rm -f $(OBJS) $(TARGET)