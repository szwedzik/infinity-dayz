class LobbyNameEditBox : ScriptedWidgetEventHandler {
	protected Widget m_root;
	protected string m_originalName;
	protected string m_lastTyped;

	void LobbyNameEditBox() {}
	
	void OnWidgetScriptInit(Widget w) {
		m_root = w;
		m_root.SetHandler(this);

		string name;
		GetGame().GetPlayerName(name);
		EditBoxWidget.Cast(w).SetText(name);
		m_originalName = name;
	}

	override bool OnMouseEnter(Widget w, int x, int y) {
		SetFocus(w);
		return false;
	}
	
	override bool OnMouseLeave(Widget w, Widget enterW, int x, int y) {
		SetFocus(NULL);
		if (m_lastTyped != "" && m_lastTyped != m_originalName) {
			if (m_lastTyped == string.Empty || m_lastTyped == "") {
				m_lastTyped = "John Doe";
			}
			GetGame().SetPlayerName(m_lastTyped);
			EditBoxWidget.Cast(w).SetText(m_lastTyped);
			m_originalName = m_lastTyped;
		}
		return false;
	}
	
	override bool OnChange(Widget w, int x, int y, bool finished) {
		EditBoxWidget oW = EditBoxWidget.Cast(w);
		m_lastTyped = oW.GetText();

		if (finished){
			string name = oW.GetText();
			if (name == string.Empty || name == ""){
				name = "John Doe";
				oW.SetText(name);
			}
			GetGame().SetPlayerName(name);
			m_originalName = name;
		}
		return false;
	}
};