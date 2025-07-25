#!/usr/bin/env python
import os
import sys

env = SConscript("godot-cpp/SConstruct")
env.Append(CPPPATH=["gdextensions/src/"])
env.Append(CXXFLAGS=["-Igdextensions/include"])
sources = Glob("gdextensions/src/*.cpp")

if env["platform"] == "macos":
    library = env.SharedLibrary(
        "game/bin/libgdext.{}.{}.framework/libgdext.{}.{}".format(
            env["platform"], env["target"], env["platform"], env["target"]
        ),
        source=sources,
    )
elif env["platform"] == "ios":
    if env["ios_simulator"]:
        library = env.StaticLibrary(
            "game/bin/libgdext.{}.{}.simulator.a".format(env["platform"], env["target"]),
            source=sources,
        )
    else:
        library = env.StaticLibrary(
            "game/bin/libgdext.{}.{}.a".format(env["platform"], env["target"]),
            source=sources,
        )
else:
    library = env.SharedLibrary(
        "game/bin/libgdext{}{}".format(env["suffix"], env["SHLIBSUFFIX"]),
        source=sources,
    )

Default(library)
