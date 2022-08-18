#ifndef INCLUDE_GAME_SCENES_GAME_OVER_SCENE_H_
#define INCLUDE_GAME_SCENES_GAME_OVER_SCENE_H_

#include <BearLibTerminal.h>

#include "../include/lib/ecs/engine.h"
#include "../include/lib/scenes/i_scene.h"
// game
#include "../include/game/controls.h"

class GameOverScene : public IScene {
  const Controls& controls_;

 public:
  GameOverScene(Context* ctx, const Controls& controls);
  void OnCreate();
  void OnRender();
  void OnExit();
};

#endif  // INCLUDE_GAME_SCENES_GAME_OVER_SCENE_H_
