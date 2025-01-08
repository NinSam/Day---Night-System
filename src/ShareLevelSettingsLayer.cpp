#include <Geode/Geode.hpp>
#include <Geode/modify/ShareLevelSettingsLayer.hpp>
#include "Utils.hpp"

using namespace geode::prelude;

class $modify(ShareLevelSettingsLayer) {

	bool init(GJGameLevel* p0) {
		if (!ShareLevelSettingsLayer::init(p0))
		return false;


	auto DayAndNightSystemOverlay = DayAndNightSystemOverlay::create();
	DayAndNightSystemOverlay->setZOrder(106);
	DayAndNightSystemOverlay->setID("ScreenOverlay"_spr);
	this->addChild(DayAndNightSystemOverlay);

	
		return true;
	}
};