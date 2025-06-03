import os
from conan import ConanFile
from conan.tools.build import can_run


class lettcode_practice_conanTestConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"

    def requirements(self):
        self.requires(self.tested_reference_str)

    def test(self):
        if can_run(self):
            self.run("leetcode_practice", env="conanrun")
