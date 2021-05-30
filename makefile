CXX=g++
CFLAGS=-Wall -Wextra -Werror -I src/ -I thirdparty/
PWGEN_SRC = src/pwgen/
LIBPWGEN_SRC = src/libpwgen/

PWGEN_OBJ = obj/src/pwgen/
LIBPWGEN_OBJ = obj/src/libpwgen/

PWGEN_BIN = bin/

SRC = src/

TEST = test/

TEST_OBJ = obj/test/

TEST_THIRDPARTY = test/thirdparty/

.PHONY: pwgen

$(PWGEN_BIN)pwgenerator: $(PWGEN_OBJ)pwgen.o $(LIBPWGEN_OBJ)libpwgen.a
	$(CXX) $(CFLAGS) -o $@ $^
$(PWGEN_OBJ)pwgen.o: $(PWGEN_SRC)pwgen.cpp 
	$(CXX) -c $(CFLAGS) -o $@ $^
$(LIBPWGEN_OBJ)libpwgen.a: $(LIBPWGEN_OBJ)rand_capital_letter.o $(LIBPWGEN_OBJ)print_pass.o $(LIBPWGEN_OBJ)rand_numeral.o $(LIBPWGEN_OBJ)rand_cursive_letter.o
	ar rcs $@ $^
$(LIBPWGEN_OBJ)rand_capital_letter.o: $(LIBPWGEN_SRC)rand_capital_letter.cpp
	$(CXX) -c $(CFLAGS) -o $@ $^
$(LIBPWGEN_OBJ)print_pass.o: $(LIBPWGEN_SRC)print_pass.cpp
	$(CXX) -c $(CFLAGS) -o $@ $^
$(LIBPWGEN_OBJ)rand_numeral.o: $(LIBPWGEN_SRC)rand_numeral.cpp
	$(CXX) -c $(CFLAGS) -o $@ $^
$(LIBPWGEN_OBJ)rand_cursive_letter.o: $(LIBPWGEN_SRC)rand_cursive_letter.cpp
	$(CXX) -c $(CFLAGS) -o $@ $^

.PHONY: test

test: $(PWGEN_BIN)test.exe

$(PWGEN_BIN)test.exe: $(TEST_OBJ)testpwgen.o $(TEST_OBJ)testlibpwgen.a
	$(CXX) $(CFLAGS) -o $@ $^
$(TEST_OBJ)testpwgen.o: $(TEST)testpwgen.cpp
	$(CXX) -c $(CFLAGS) -o $@ $^
$(TEST_OBJ)testlibpwgen.a: $(TEST_OBJ)rand_capital_letter.o $(TEST_OBJ)rand_numeral.o $(TEST_OBJ)rand_cursive_letter.o
	ar rcs $@ $^
$(TEST_OBJ)rand_capital_letter.o: $(LIBPWGEN_SRC)rand_capital_letter.cpp
	$(CXX) -c $(CFLAGS) -o $@ $^
$(TEST_OBJ)rand_numeral.o: $(LIBPWGEN_SRC)rand_numeral.cpp
	$(CXX) -c $(CFLAGS) -o $@ $^
$(TEST_OBJ)rand_cursive_letter.o: $(LIBPWGEN_SRC)rand_cursive_letter.cpp
	$(CXX) -c $(CFLAGS) -o $@ $^
	
.PHONY: clean

clean:
	rm -rf $(PWGEN_OBJ)*.o
	rm -rf $(LIBPWGEN_OBJ)*.o
	rm -rf $(LIBPWGEN_OBJ)*.a
	rm -rf $(PWGEN_BIN)*.exe
	rm $(TEST_OBJ)*.o
	rm $(TEST_OBJ)*.a
	rm $(PWGEN_BIN)*.exe
	
.PHONY: format

format:
	git ls-files *.{cpp,h} | xargs clang-format -i
	git add .
	git commit -m "Format code"
