#include "program.h"

void startProgram() {

	InitWindow(800, 450, "raylib [core] example - basic window");
	while(!WindowShouldClose()){
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}
	CloseWindow();
}

