# LT

## Install Dependencies

```bash
conan install . --build=missing
```

## Run App

```bash
conan create .
```

Or

```bash
make run {ARGS}
```

## [Build App](https://blog.conan.io/2019/06/26/An-introduction-to-the-Dear-ImGui-library.html)

```bash
conan install . --build=missing
```

### Linux

```bash
cmake --preset conan-release
cmake --build --preset conan-release
cd build/Release
./leetcode_practice

```

### Windows

```bash
cmake --preset conan-default
cmake --build --preset conan-release
cd build\Release
.\leetcode_practice.exe
```

## Generate `compile_commands.json`

Required by clangd LSP (VSCode & NVim)

```bash
conan install . --build=missing
cmake --preset conan-release
cmake --build --preset conan-release
cp build/Release/compile_commands.json .
```

## Debug

Use `gdb`

```bash
cmake --preset conan-release
cmake --build --preset conan-release
cd build/Release
gdb ./leetcode_practice
> run
```
