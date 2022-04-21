#ifndef PSEUDO3DENGINE_MSGTYPE_H
#define PSEUDO3DENGINE_MSGTYPE_H

#include <SFML/Network.hpp>

enum class MsgType
{
    None,         // Empty message
    Fake,         // Fake message
    Confirm,      // confirm receive
    Connect,      // connection to server
    Disconnect,   // disconnect from server
    WorldInit,    // world initialization from server to client
    WorldUpdate,  // world update from server to client
    PlayerUpdate, // player update from client to server
    Shoot,        // player shooted from client to server
    NewPlayer,
    ReInit,       // Reinit Stats
};

sf::Packet& operator<<(sf::Packet& packet, MsgType type);
sf::Packet& operator>>(sf::Packet& packet, MsgType& type);


#endif //PSEUDO3DENGINE_MSGTYPE_H
