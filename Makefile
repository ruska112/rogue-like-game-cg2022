ifeq ($(OS),Windows_NT)
	FLAGS = -DCMAKE_SH="CMAKE_SH-NOTFOUND" -G "MinGW Makefiles"
else
	FLAGS = ""
endif

all: clean run

run: reload build exec

mkdir_build:
	[ -d ./cmake-build-debug ] | mkdir -p cmake-build-debug

build:
	cd cmake-build-debug;cmake --build . --target roguelg

exec:
	./cmake-build-debug/roguelg

clean:
	rm -rf cmake-build-debug

reload: mkdir_build
	cd cmake-build-debug;cmake $(FLAGS) ..
