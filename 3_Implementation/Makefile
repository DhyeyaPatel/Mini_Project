# Name of the project
PROJECT_NAME = Library_Checkout
TEST_PROJ_NAME = $(PROJECT_NAME)

COVERAGE_TEST_NAME = coverage_$(PROJECT_NAME)

# Output directory
BUILD = build

# All source code files
SRC = src/create_record.c\
src/delete_record.c\
src/display_book.c\
src/search_book.c\
src/utility.c\

# All test source files
TEST_SRC = ${SRC}\
test/library_checkout_test.c\
unity/unity.c\


# All include folders with header files
INC	= inc\
unity\

ifdef OS
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = EXEC
	editor = notepad
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
		editor = cat 
  	endif
endif

#Library Inlcudes
INCLUDE_LIBS = -lm

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Run the target even if the matching name exists
.PHONY: all test coverage run clean doc

all: $(SRC) $(BUILD)
	gcc -I $(INC) $(SRC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC))

# Call `make run` to run the application
run: all
	./$(PROJECT_NAME).out

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(SRC) $(INC) -o $(TEST_OUTPUT) $(EXEC)
	./$(TEST_OUTPUT) $(EXEC)

# Tests the code coverage
coverage: $(SRC)

		gcc -fprofile-arcs -ftest-coverage library_checkout.c -I -c $(SRC)  -o $(COVERAGE_TEST_NAME).$(EXEC)
		./$(COVERAGE_TEST_NAME).$(EXEC) < input_redirect.txt
		gcov -a library_checkout.c 
		$(editor) library_checkout.c.gcov

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) books.bin

# Document the code using Doxygen
doc:
	make -C ./documentation

# Create new build folder if not present
$(BUILD):
	mkdir build