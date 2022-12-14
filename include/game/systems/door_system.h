#ifndef INCLUDE_GAME_SYSTEMS_DOOR_SYSTEM_H_
#define INCLUDE_GAME_SYSTEMS_DOOR_SYSTEM_H_

#include "../include/game/level_manager.h"
#include "../include/lib/ecs/entity_manager.h"
#include "../include/lib/ecs/system.h"
// game
#include "../include/game/components/open_door_component.h"
class DoorSystem : public ISystem {
 public:
  LevelManager& levelManager_;
  EntityManager& em_;
  int close_id_;
  int key_id_;
  DoorSystem(EntityManager* em, SystemManager* sm, LevelManager* levelManager, int close_id, int key_id);

 protected:
  void OnUpdate() override;
};

#endif  // INCLUDE_GAME_SYSTEMS_DOOR_SYSTEM_H_
