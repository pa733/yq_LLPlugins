// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SubChunkPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPACKET
public:
    class SubChunkPacket& operator=(class SubChunkPacket const&) = delete;
    SubChunkPacket(class SubChunkPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~SubChunkPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~SubChunkPacket(){
         (SubChunkPacket::*rv)();
        *((void**)&rv) = dlsym("??1SubChunkPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI SubChunkPacket(class AutomaticID<class Dimension, int> const&, class SubChunkPos const&, std::string const&, bool, enum SubChunkPacket::SubChunkRequestResult);
    MCAPI SubChunkPacket();

protected:

private:

};