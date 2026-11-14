CC := g++
CFLAGS := -Wall -Wextra -Iinclude 
LDFLAGS := -lglfw -lGL -ldl -lpthread -lm
TARGET := engine
SRC := engine.cpp include/glad/glad.c
HEADERS = $(shell find include -type f -name "*.h")

$(TARGET): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

clean:
	rm -f $(TARGET)
