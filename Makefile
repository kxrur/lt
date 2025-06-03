# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "run"
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(RUN_ARGS):;@:)
endif

.PHONY: all run

all:
	cmake --preset conan-release
	cmake --build --preset conan-release

run:
	cmake --preset conan-release
	cmake --build --preset conan-release
	cd build/Release && ./leetcode_practice ${RUN_ARGS}
