#ifndef MAP_HPP
#define MAP_HPP

#include "Shared/QuadTree.hpp"
#include "Node.hpp"
#include "Player.hpp"

class Map : public QuadTree<WorldObject, uint16, Node>
{
public:
    Map(std::string Name, uint64 GUID, uint16 Width, uint16 Height);

    void Update();
    void LoadObjects();
    void AddPlayer(Player* pPlayer);
    void SendToPlayers(Packet& Pckt);

    ::Node* TerrainAt(uint16 X, uint16 Y, uint16 Size);
    WorldObject* At(uint16 X, uint16 Y, uint16 Size);
    LinkedList<WorldObject>* At(Rect<uint16> Where);

    void ResetPathfinderNodes();
    uint64 GetGUID() const;
    uint32 GetEntry() const;

    void Insert(WorldObject* pObject);
private:
    LinkedList<Player> OnlinePlayers;
    std::string Name;
    uint64 MapGUID;
    uint32 Entry;
};

#endif
