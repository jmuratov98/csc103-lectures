main = factorial
CC = g++
CFLAGS = -Wall

$(main) : $(main).cpp
	$(CC) $(CFLAGS) $< -o $@

.PHONY : clean
clean :
	rm -f $(main)
