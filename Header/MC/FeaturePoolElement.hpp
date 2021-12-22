// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "StructurePoolElement.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FeaturePoolElement : public StructurePoolElement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREPOOLELEMENT
public:
    class FeaturePoolElement& operator=(class FeaturePoolElement const&) = delete;
    FeaturePoolElement(class FeaturePoolElement const&) = delete;
    FeaturePoolElement() = delete;
#endif

public:
    /*0*/ virtual class BlockPos getSize(int /*enum enum Rotation*/) const;
    /*1*/ virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, class LegacyStructureSettings&, class BlockSource*) const;
    /*2*/ virtual void setProjection(int /*enum enum Projection*/);
    /*3*/ virtual int /*enum enum Projection*/ getProjection() const;
    /*4*/ virtual int /*enum enum PostProcessSettings*/ getPostProcessSettings() const;
    /*5*/ virtual bool place(class BlockSource&, class BlockPos, int /*enum enum Rotation*/, class BoundingBox, class Random&, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >&, class BlockPos) const;
    /*6*/ virtual bool isValid() const;
    /*7*/ virtual ~FeaturePoolElement();
    MCAPI FeaturePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager> >, class WeakRefT<struct FeatureRefTraits>);

protected:

private:

};