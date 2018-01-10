BUILD_DIR = /tmp/build_bit.h

all: bit.h binary_character.h test

clean:
	rm -f bit.h binary_character.h
	rm -Rf $(BUILD_DIR)

bit.h: $(BUILD_DIR)/gen
	$(BUILD_DIR)/gen > bit.h

binary_character.h: $(BUILD_DIR)/binary_characters
	$(BUILD_DIR)/binary_characters > binary_character.h

$(BUILD_DIR)/gen: generators/gen_bit.h_.c $(BUILD_DIR)/license_generator.o
	mkdir -p $(BUILD_DIR)
	gcc -Wall -std=c99 -o $(BUILD_DIR)/gen generators/gen_bit.h_.c $(BUILD_DIR)/license_generator.o

$(BUILD_DIR)/binary_characters: generators/gen_binary_characters.c $(BUILD_DIR)/license_generator.o
	mkdir -p $(BUILD_DIR)
	gcc -Wall -std=c99 -o $(BUILD_DIR)/binary_characters generators/gen_binary_characters.c $(BUILD_DIR)/license_generator.o

$(BUILD_DIR)/license_generator.o: generators/license_generator.h generators/license_generator.c
	mkdir -p $(BUILD_DIR)
	gcc -Wall -std=c99 -c -o $(BUILD_DIR)/license_generator.o generators/license_generator.c

test: $(BUILD_DIR)/test
	$(BUILD_DIR)/test

$(BUILD_DIR)/test: tests/test_bit.h_.c
	mkdir -p $(BUILD_DIR)
	gcc -Wall -std=c90 -o $(BUILD_DIR)/test tests/test_bit.h_.c
