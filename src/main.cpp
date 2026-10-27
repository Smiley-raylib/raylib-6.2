#include <raylib.h>
#include <rlgl.h>

int main()
{
	InitWindow(800, 800, "Game");
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);
		// DrawCircle == compiler error!
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
