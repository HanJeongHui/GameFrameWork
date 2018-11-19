#pragma once
#include "SDL.h"
#include "TextureManager.h"
#include "Player.h"
#include "Enemy.h"
#include <vector>

class Game
{
public:
	Game() {}
	~Game() {}
	bool init(const char* title, int xpos, int ypos,
		int width, int height, bool fullscreen);
	void render();
	void update();
	void handleEvents();
	void clean();
	GameObject * m_go;
	GameObject * m_player;
	GameObject * m_enemy;
	bool running() { return m_bRunning; }
	std::vector<GameObject*> m_gameObjects;
private:
	SDL_Window * m_pWindow;
	SDL_Renderer* m_pRenderer;
	int m_currentFrame;



	bool m_bRunning;
};