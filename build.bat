@echo off
gcc src\main.c -o game.exe -Ithird-party\raylib\include -Lthird-party\raylib\windows\lib -lraylib -lopengl32 -lgdi32 -lwinmm -lm
if %errorlevel% neq 0 exit /b %errorlevel%
game.exe
