# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.29
cmake_policy(SET CMP0009 NEW)

# MY_HEADER_FILES at include/CMakeLists.txt:2 (file)
file(GLOB NEW_GLOB LIST_DIRECTORIES false RELATIVE "C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/Final_project/include" "C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/Final_project/include/*.h")
set(OLD_GLOB
  "Board.h"
  "Bomb.h"
  "Button.h"
  "CanDetonate.h"
  "CantDetonate.h"
  "Controller.h"
  "Door.h"
  "GameObject.h"
  "Gift.h"
  "Guard.h"
  "HelpScreen.h"
  "MenuScreen.h"
  "MovingObject.h"
  "Robot.h"
  "Screen.h"
  "Sound.h"
  "StaticObject.h"
  "Stone.h"
  "Texture.h"
  "Wall.h"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/Final_project/out/build/x64-Debug/CMakeFiles/cmake.verify_globs")
endif()

# MY_SOURCE_FILES at src/CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false RELATIVE "C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/Final_project/src" "C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/Final_project/src/*.cpp")
set(OLD_GLOB
  "Board.cpp"
  "Bomb.cpp"
  "Button.cpp"
  "Controller.cpp"
  "Door.cpp"
  "Gift.cpp"
  "Guard.cpp"
  "HelpScreen.cpp"
  "MenuScreen.cpp"
  "Robot.cpp"
  "Sound.cpp"
  "Stone.cpp"
  "Texture.cpp"
  "Wall.cpp"
  "main.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/Final_project/out/build/x64-Debug/CMakeFiles/cmake.verify_globs")
endif()