#include <iostream>
#include <string>
#include <SDL2/SDL.h>

using namespace std;

int main() {

    if (SDL_Init(SDL_INIT_EVERYTHING > 0)) {
        cout << "SDL_Init failed with error: " << SDL_GetError() << endl;
        return EXIT_FAILURE;
    }

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("SDL Lib", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

    bool isQuit = false;
    SDL_Event event;
    while (!isQuit) {
        if (SDL_PollEvent( & event)) {
            if (event.type == SDL_QUIT) {
                isQuit = true;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}


