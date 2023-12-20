modded class FishingActionData : ActionData
{
	const float FISHING_SUCCESS 		= 0.18;
	const float FISHING_BAIT_LOSS 		= 0.02;
	const float FISHING_HOOK_LOSS 		= 0.015;
	const float FISHING_DAMAGE 			= 5.0;
	const float FISHING_GARBAGE_CHANCE 	= 0.2;
}

modded class ActionFishingNewCB : ActionContinuousBaseCB
{
	FishingActionData 	m_ActionDataFishing;
	ref array<string> 	m_JunkTypes = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Animal_crab_attacking","Animal_crab","Empty_SodaCan_Pipsi","Empty_SodaCan_Cola","Empty_SodaCan_Spite","Empty_SodaCan_Kvass","Empty_SodaCan_Fronta","Empty_UnknownFoodCan_Opened"};
	
	override void CreateActionComponent()
	{
		EnableStateChangeCallback();
		m_ActionData.m_ActionComponent = new CAContinuousRepeatFishing(10.0);
	}
};
