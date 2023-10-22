CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

default: *.cpp *.hpp
	g++ $(CFLAGS) -o gameEngine *.cpp $(LDFLAGS)

.PHONY: test clean

test: gameEngine
	./gameEngine

clean:
	rm -f gameEngine
