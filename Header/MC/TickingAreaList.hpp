// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TickingAreaList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREALIST
public:
    class TickingAreaList& operator=(class TickingAreaList const&) = delete;
    TickingAreaList(class TickingAreaList const&) = delete;
    TickingAreaList() = delete;
#endif

public:
    MCAPI void checkEntityConditions(std::vector<class Vec3> const&, class std::function<void (class ITickingArea const& )>);

protected:

private:

};