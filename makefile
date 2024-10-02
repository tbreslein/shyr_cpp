.PHONY: all dev clean rex-* test

EXAMPLES_DIR := examples
TEST_DIR := tests
BUILD_DIR := build
INCLUDE_DIR := include

SHYR_SRC := $(wildcard $(INCLUDE_DIR)/**/*.hpp)

EXAMPLES_SRC := $(wildcard $(EXAMPLES_DIR)/*.cpp)
EXAMPLES_BIN := $(patsubst %.cpp, $(BUILD_DIR)/%, $(EXAMPLES_SRC))

TEST_SRC := $(TEST_DIR)/tests.cpp
TEST_BIN := $(BUILD_DIR)/$(TEST_DIR)/tests

all: $(EXAMPLES_BIN) $(TEST_BIN) $(SHYR_SRC)

test: $(TEST_BIN)
	./$<

dev:
	bear -- $(MAKE) all

$(TEST_BIN): $(TEST_SRC) $(SHYR_SRC)
	mkdir -p $(BUILD_DIR)/$(TEST_DIR)
	g++ $< -o $@ -I$(INCLUDE_DIR) -std=c++2b

$(BUILD_DIR)/$(EXAMPLES_DIR)/%: $(EXAMPLES_DIR)/%.cpp $(SHYR_SRC)
	mkdir -p $(BUILD_DIR)/$(EXAMPLES_DIR)
	g++ $< -o $@ -I$(INCLUDE_DIR) -std=c++2b

# stands for: run example
rex-%: $(BUILD_DIR)/$(EXAMPLES_DIR)/%
	./$<

clean:
	rm -fr $(BUILD_DIR)/
	rm -f ./compile_commands.json
