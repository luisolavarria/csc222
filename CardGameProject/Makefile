
CXX = g++


CXXFLAGS = -std=c++11 -Wall -Wextra


TARGET = CardGame


SRCS = main.cpp Card.cpp Deck.cpp Game.cpp


OBJS = $(SRCS:.cpp=.o)


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) $(TARGET)