#ifndef WORLD_SESSION_HPP
#define WORLD_SESSION_HPP

#include "Shared/TCPSession.hpp"

class WorldSession : public TCPSession
{
    friend class WorldAcceptor;
public:
    WorldSession(io_service& io);

    void HandleNULL();
    void HandleLogin();

private:
};

#endif
