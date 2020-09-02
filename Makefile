CPP_PATH = source
HPP_PATH = headers
TESTS_PATH = tests

CPP_FILES = ${CPP_PATH}/random.cpp ${CPP_PATH}/anotherRandom.cpp  ${CPP_PATH}/someClass.cpp
PROGRAM_FILES = ${CPP_PATH}/main.cpp ${CPP_FILES}
TESTS_FILES = ${TESTS_PATH}/catchMain.cpp ${TESTS_PATH}/random.ut.cpp ${TESTS_PATH}/anotherRandom.ut.cpp ${TESTS_PATH}/someClass.ut.cpp ${CPP_FILES} 

INC = -I./${HPP_PATH} -I./${TESTS_PATH}
LIB = -L./${CPP_PATH}

random: ${PROGRAM_FILES}
	g++ -std=c++17 -Wall -Werror -Wextra -pedantic -Wconversion -O3 ${INC} ${LIB} ${PROGRAM_FILES} -o random

random-ut: ${TESTS_FILES}
	g++ -std=c++17 -Wall -Werror -Wextra -pedantic -Wconversion -O3 ${INC} ${LIB} ${TESTS_FILES} -o random-ut

clean: 
	rm random

utclean:
	rm random-ut

.PHONY:
	clean utclean
