CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -g
SRC_DIR = src

# make hello
%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $< -o $@

# make hello.c
%.c:
	$(CC) $(CFLAGS) $@ -o $(basename $@)

# make src/hello.c
$(SRC_DIR)/%.c:
	$(CC) $(CFLAGS) $@ -o $(basename $(notdir $@))

clean:
	rm -f hello pointer array