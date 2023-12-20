const string LOADING_SCREENS_PATH = "InfinityRP/assets/gui/LoadingScreen/Loading";
// Change it to match the Path of your Loading Screens. Loading Screens must be named "Loading1.edds", "Loading2.edds", "Loading3.edds" ...
const int START_INDEX = 1; // The First number of the Loading Screens. See above.
const int LOADING_SCREENS_COUNT = 10; // The Amount of loading screens in this folder
const bool REMOVE_MODDED_WARNING = true;
const bool REMOVE_DAYZ_LOGO = true;
modded class LoadingScreen 
{
	override void Show()
	{
		/*m_Backgrounds.Clear();
		for (int i = 0; i < LOADING_SCREENS_COUNT; i++) {
			m_Backgrounds.Insert(new ExpansionLoadingScreenBackground(LOADING_SCREENS_PATH + (i + START_INDEX) + ".edds"));
		}//*/
		super.Show();
		m_ImageWidgetBackground.LoadImageFile(0, GetRandomLoadingScreen());
		m_ImageWidgetBackground.SetMaskProgress(1.0);
		m_ImageWidgetBackground.SetMaskTransitionWidth(1.0);
		ProgressAsync.SetUserData(null);
		m_ImageLogoCorner.Show(!REMOVE_DAYZ_LOGO);
		m_ImageLogoMid.Show(!REMOVE_DAYZ_LOGO);
		m_ModdedWarning.Show(!REMOVE_DAYZ_LOGO);
	}
}
modded class LoginQueueBase {
	
	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadImageFile(0, GetRandomLoadingScreen());
		imageWidgetBackground.SetMaskProgress(1.0);
		imageWidgetBackground.SetMaskTransitionWidth(1.0);
		return w;
	}
}
modded class LoginTimeBase {
	
	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadImageFile(0, GetRandomLoadingScreen());
		imageWidgetBackground.SetMaskProgress(1.0);
		imageWidgetBackground.SetMaskTransitionWidth(1.0);
		return w;
	}
}
string GetRandomLoadingScreen() {
	int hour, min, sec;
	GetHourMinuteSecond(hour, min, sec);
	int random = sec % LOADING_SCREENS_COUNT;
	return LOADING_SCREENS_PATH + (random + START_INDEX) + ".edds";
}