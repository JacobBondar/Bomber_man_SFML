string (TIMESTAMP MY_TIMESTAMP "%Y-%m-%d-%H-%M-%S")
execute_process (COMMAND C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe --build "C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/Final_project/out/build/x64-Debug" --target package_source)
execute_process (COMMAND C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe -E copy "C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/Final_project/out/build/x64-Debug/oop1_project-Jacob_Bondar-Shelly_Chausovsky.zip" "C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/oop1_project-Jacob_Bondar-Shelly_Chausovsky-${MY_TIMESTAMP}.zip")
execute_process (COMMAND C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe -E echo "")
execute_process (COMMAND C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe -E echo "***" C:/Users/jacob/OneDrive/שולחן העבודה/מכללת הדסה/שנה ב/סמסטר א/מבוא לתכנות מונחה עצמים/תרגילים/5/oop1_project-Jacob_Bondar-Shelly_Chausovsky-${MY_TIMESTAMP}.zip "file created ***")
