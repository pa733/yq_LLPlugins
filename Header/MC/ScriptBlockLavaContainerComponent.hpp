// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "BaseScriptBlockLiquidContainerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockLavaContainerComponent : public BaseScriptBlockLiquidContainerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKLAVACONTAINERCOMPONENT
public:
    class ScriptBlockLavaContainerComponent& operator=(class ScriptBlockLavaContainerComponent const&) = delete;
    ScriptBlockLavaContainerComponent(class ScriptBlockLavaContainerComponent const&) = delete;
    ScriptBlockLavaContainerComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockLavaContainerComponent();
    /*
    inline  ~ScriptBlockLavaContainerComponent(){
         (ScriptBlockLavaContainerComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptBlockLavaContainerComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI class ScriptBlockLavaContainerComponent& operator=(class ScriptBlockLavaContainerComponent&&);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockLavaContainerComponent> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockLavaContainerComponent> tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

protected:

private:

};