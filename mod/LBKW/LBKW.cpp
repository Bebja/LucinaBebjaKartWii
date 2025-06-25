
#include <MarioKartWii/Race/RaceData.hpp>
#include <Settings/UI/SettingsPanel.hpp>
#include <SlotExpansion/CupsConfig.hpp>
#include <LBKW.hpp>

namespace LBKW {

Pulsar::System *LBKWPack::Create() {
	return new LBKWPack(); //now Pulsar::sInstance is of type MyPack
}
Pulsar::System::Inherit CreateLBKW(LBKWPack::Create); //Create a Inherit that'll get called back by Pulsar::CreatePulsar

void LBKWPack::AfterInit() {
	++Pulsar::UI::SettingsPanel::pageCount;

	// Radio button count for new page
	Pulsar::UI::SettingsPanel::radioButtonCount[SETTINGSTYPE_LBKW] = 1;

}

//Pulsar::Ghost::Manager also has a callback which can be set using SetCb
//That callback will be called as each ghost is loaded

} // namespace BKW
