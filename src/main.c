#include <math.h>
#include "raylib.h"

typedef struct {
  float angle;
  float target_start;
} state;

#define WINDOW_WIDTH 400
#define WINDOW_HEIGHT 400

int main(void) {
  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "raylib [core] example - basic window");

  state state = {
      .angle = 0,
      .target_start = 0,
  };

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    state.angle += GetFrameTime();
    DrawCircle(WINDOW_WIDTH/2, WINDOW_HEIGHT/2, WINDOW_WIDTH/2, BLUE);
    DrawLine(WINDOW_WIDTH/2, WINDOW_HEIGHT/2, cos((float)state.angle)*WINDOW_WIDTH/2+WINDOW_WIDTH/2, sin(state.angle)*WINDOW_WIDTH/2+WINDOW_WIDTH/2, GREEN);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
