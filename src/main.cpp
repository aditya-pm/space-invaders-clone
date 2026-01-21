#include "raylib.h"

#define WIDTH 512
#define HEIGHT 768
#define SHIP_SPEED 10
#define SHIP_WIDTH 100
#define SHIP_HEIGHT 30

struct SpaceShip {
    Vector2 position;
};

// void draw_spaceship(SpaceShip ship) {
//     DrawRectangle(ship.position.x, ship.position.y, SHIP_WIDTH, SHIP_HEIGHT, WHITE);
// }

void draw_background() {
    Texture2D background_texture = LoadTexture("assets/background.png");
    // background.png is 64x64 pixels
    int cols = WIDTH / 64;
    int rows = HEIGHT / 64;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            DrawTexture(background_texture, j * 64, i * 64, WHITE);
        }
    }
}

// void handle_input(SpaceShip* ship) {
//     if (IsKeyDown(KEY_A)) ship->position.x -= SHIP_SPEED;
//     if (IsKeyDown(KEY_D)) ship->position.x += SHIP_SPEED;
// }

int main() {
    InitWindow(WIDTH, HEIGHT, "Space Invaders Clone");
    SetTargetFPS(60);

    SpaceShip ship = {{WIDTH / 2 - SHIP_WIDTH / 2, HEIGHT - 50}};

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        draw_background();
        // draw_spaceship(ship);
        // handle_input(&ship);

        EndDrawing();
    }

    CloseWindow();
}
