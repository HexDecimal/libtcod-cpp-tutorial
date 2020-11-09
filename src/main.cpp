#include <SDL.h>
#include <libtcod.h>
/**
    Program entry point.
 */
int main(int argc, char* argv[]) {
  // Configure the context.
  TCOD_ContextParams params = {};
  params.tcod_version = TCOD_COMPILEDVERSION;  // This is required.
  params.x = SDL_WINDOWPOS_UNDEFINED;  // Must be set to this when a more specific value isn't needed.
  params.y = SDL_WINDOWPOS_UNDEFINED;
  params.sdl_window_flags = SDL_WINDOW_RESIZABLE;
  params.vsync = true;
  params.argc = argc;  // This allows some user-control of the context.
  params.argv = argv;
  tcod::ContextPtr context = tcod::new_context(params);

  while (1) {  // Game loop.
    // No dispaly output yet, but event handling should prevent the OS from panicing.
    SDL_Event event;
    SDL_WaitEvent(&event);
    switch (event.type) {
      case SDL_QUIT:
        return 0;  // Exit.
    }
  }
}
