# Name of the project
PROJECT_NAME = lib

TEST_PROJECT_NAME = Test_$(PROJECT_NAME)

# Output directory
BUILD = build

# All source code files
SRC = src/create_record.c\
src/delete_record.c\
src/display_book.c\
src/search_book.c\
src/utility.c\
src/create_new_record.c

# All test source files
TEST_SRC = test/library_checkout_test.c\
unity/unity.c\


# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
INCLUDE_LIBS = 

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   editor = notepad
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  editor = cat
   endif
endif



# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all valgrind

all: 
	gcc src/library_checkout.c $(SRC) $(INC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC))

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_NAME).$(EXEC)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(SRC) $(INC) -o $(TEST_PROJECT_NAME).$(EXEC)
	./$(TEST_PROJECT_NAME).$(EXEC)

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) *.$(EXEC)
	$(RM) books.bin
	$(RM) $(BUILD)

#For Linux Only
valgrind:
		./$(PROJECT_NAME).out < input_redirect.txt

# Create new build folder if not present
$(BUILD):
	mkdir build