#include "SDL2_Window.h"

SDL_bool SDL_RenderLoop = SDL_FALSE;
void SDL2_CreateWindow(int w, int h)
{

	int window_renderer_combo = SDL_CreateWindowAndRenderer(w, h, SDL_WINDOW_RESIZABLE, &SDL_window, &SDL_renderer);


	//if (SDL_window == NULL) {
   //SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Project", "Failed to create SDL 2 Window", NULL);
//	SDL_Quit();
//}
//if (SDL_renderer == NULL) {
	//SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Project", "Failed to create SDL 2 Renderer", NULL);
//SDL_Quit();
//}
	if (window_renderer_combo == -1) {

		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Project", "Failed to create SDL 2 Window and Renderer", NULL);
		SDL_Quit();
	}
	else {
		Current_window = SDL;


		SDL_RenderLoop = SDL_TRUE;

		//SDL_GL_GetProcAddress(gladloadgl)

		RenderALLEntities();
	}

	
}

void SDL2_RenderLoop()
{
	
	while (SDL_RenderLoop == SDL_TRUE) {
		SDL_PollEvent(&SDL_event);

		SDL_RenderClear(SDL_renderer);
		RenderALLEntities();
		//glClear(GL_COLOR_BUFFER_BIT);


		//SDL_GL_SetSwapInterval(1);
		UpdateALLEntities();

		//SDL_GL_SwapWindow(SDL_window);
		SDL_RenderPresent(SDL_renderer);
		
		
		if (SDL_event.type == SDL_QUIT) {
			SDL_RenderLoop = SDL_FALSE;
			SDL_Quit();
		}
	   if(SDL_event.type == SDL_KEYDOWN){
		   if(SDL_event.key.keysym.sym == SDLK_RIGHT){
			   Player_data->posX += 0.222225f;
		   }
		   if(SDL_event.key.keysym.sym == SDLK_LEFT){
				Player_data->posX -= 0.222225f;
		   }
		   if(SDL_event.key.keysym.sym == SDLK_UP){
			   Player_data->posY += 0.222225f;
		   }
		   if(SDL_event.key.keysym.sym == SDLK_DOWN){
			   Player_data->posY -= 0.222225f;
		   }



	   }

	   if(SDL_event.type == SDL_WINDOWEVENT){
		   if(SDL_event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED){

			 // glViewport(0,0,SDL_event.window.data1,SDL_event.window.data2);

		   }
	   }



}
}
void SDL2_GL_CreateWindow(int w,int h){
	int window_renderer_combo = SDL_CreateWindowAndRenderer(w, h, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE, &SDL_window, &SDL_renderer);
	if (window_renderer_combo == -1) {

			SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Project", "Failed to create SDL 2 Window and Renderer", NULL);
			SDL_Quit();
		}
		else {

		SDL_context = SDL_GL_CreateContext(SDL_window);

			if(SDL_context == NULL){
				SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,"Project","Failed to create a SDL 2 OpenGL Context!",NULL);

			}
			if(SDL_GL_MakeCurrent(SDL_window,SDL_context) != 0){
				SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,"Project","Failed to make OpenGL Current!",NULL);
				SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,"Project",SDL_GetError(),NULL);
			}
			gladLoadGLLoader(SDL_GL_GetProcAddress);
			Current_window = GL;
			SDL_RenderLoop = SDL_TRUE;

			//SDL_GL_GetProcAddress(gladloadgl)

			RenderALLEntities();
		}
}
void SDL2_GL_RenderLoop(){
	while (SDL_RenderLoop == SDL_TRUE) {
			SDL_PollEvent(&SDL_event);

			//SDL_RenderClear(SDL_renderer);
			RenderALLEntities();
			glClear(GL_COLOR_BUFFER_BIT);


			//SDL_GL_SetSwapInterval(1);
			UpdateALLEntities();

			SDL_GL_SwapWindow(SDL_window);
			//SDL_RenderPresent(SDL_renderer);


			if (SDL_event.type == SDL_QUIT) {
				SDL_RenderLoop = SDL_FALSE;
				SDL_Quit();
			}
		   if(SDL_event.type == SDL_KEYDOWN){
			   if(SDL_event.key.keysym.sym == SDLK_RIGHT){
				   Player_data->posX += 0.222225f;
			   }
			   if(SDL_event.key.keysym.sym == SDLK_LEFT){
					Player_data->posX -= 0.222225f;
			   }
			   if(SDL_event.key.keysym.sym == SDLK_UP){
				   Player_data->posY += 0.222225f;
			   }
			   if(SDL_event.key.keysym.sym == SDLK_DOWN){
				   Player_data->posY -= 0.222225f;
			   }



		   }

		   if(SDL_event.type == SDL_WINDOWEVENT){
			   if(SDL_event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED){

				  glViewport(0,0,SDL_event.window.data1,SDL_event.window.data2);

			   }
		   }
}
void SDL2_ErrorCallback(int error, const char* description)
{
	
}
void  SDL2_GL_ErrorCallback() {
	
}

void SDL2_FramebuffersizeCallback(int width, int height)
{
	
}

void SDL2_KeyCallback( int key, int scancode, int action, int mods)
{
	
}

int SDL2_CreateWindowWrapper(lua_State* L)
{
	return 0;
}

int SDL2_RenderLoopWrapper(lua_State* L)
{
	return 0;
}

int SDL2_ShowSimpleMessageBoxWrapper(lua_State* L)
{
	return 0;
}

int SDL2_SetRenderDrawColor(lua_State* L)
{
	return 0;
}

int SDL2_RenderClearWrapper(lua_State* L)
{
	return 0;
}

int SDL2_RenderDrawLine(lua_State* L)
{
	return 0;
}
}
