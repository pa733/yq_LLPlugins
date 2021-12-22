// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SetBlockAtPos {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETBLOCKATPOS
public:
    class SetBlockAtPos& operator=(class SetBlockAtPos const&) = delete;
    SetBlockAtPos(class SetBlockAtPos const&) = delete;
    SetBlockAtPos() = delete;
#endif

public:
    /*0*/ virtual ~SetBlockAtPos();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void executeAction(class RenderParams&) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection> >&, class Factory<class EventResponse> const&) const;
    MCAPI static std::string const NameID;

protected:

private:

};