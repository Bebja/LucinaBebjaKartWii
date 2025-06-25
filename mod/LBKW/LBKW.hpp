#pragma once

#include <PulsarSystem.hpp>
#include <LBKWCommon.hpp>

namespace LBKW {
	
class LBKWPack : public Pulsar::System {
public:
    static Pulsar::System *Create(); //My Create function, needs to return a ptr to a Pulsar::System
    static LBKWPack *GetInstance() { return static_cast<BKWPack*>(sInstance); } //for ease of use, optional
	void AfterInit() override;
};

} // namespace LBKW
