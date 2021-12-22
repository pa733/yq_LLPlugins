// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SporeBlossomBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPOREBLOSSOMBLOCKACTOR
public:
    class SporeBlossomBlockActor& operator=(class SporeBlossomBlockActor const&) = delete;
    SporeBlossomBlockActor(class SporeBlossomBlockActor const&) = delete;
    SporeBlossomBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~SporeBlossomBlockActor();
    /*1*/ virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;
    /*2*/ virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    /*3*/ virtual void onCustomTagLoadDone(class BlockSource&);
    /*4*/ virtual void tick(class BlockSource&);
    /*5*/ virtual void onChanged(class BlockSource&);
    /*6*/ virtual void onPlace(class BlockSource&);
    /*7*/ virtual void __unk_vfn_0();
    /*8*/ virtual void onRemoved(class BlockSource&);
    /*9*/ virtual void triggerEvent(int, int);
    /*10*/ virtual void clearCache();
    /*11*/ virtual void __unk_vfn_1();
    /*12*/ virtual float getShadowRadius(class BlockSource&) const;
    /*13*/ virtual bool hasAlphaLayer() const;
    /*14*/ virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);
    /*15*/ virtual std::string const& getCustomName() const;
    /*16*/ virtual std::string getName() const;
    /*17*/ virtual std::string getImmersiveReaderText(class BlockSource&);
    /*18*/ virtual int getRepairCost() const;
    /*19*/ virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    /*20*/ virtual void __unk_vfn_2();
    /*21*/ virtual void __unk_vfn_3();
    /*22*/ virtual float getDeletionDelayTimeSeconds() const;
    /*23*/ virtual void __unk_vfn_4();
    /*24*/ virtual void __unk_vfn_5();
    /*25*/ virtual void __unk_vfn_6();
    /*26*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /*27*/ virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /*28*/ virtual bool _playerCanUpdate(class Player const&) const;
    MCAPI SporeBlossomBlockActor(class BlockPos const&);

protected:

private:

};