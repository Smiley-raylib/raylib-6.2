#include <raylib.h>

int main()
{
	InitWindow(800, 800, "Game");
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);
		DrawCircleV(GetMousePosition(), 20.0f, RED);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
