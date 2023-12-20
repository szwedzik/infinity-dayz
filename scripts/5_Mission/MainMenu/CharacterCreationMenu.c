modded class CharacterCreationMenu {
	override Widget Init() {
		super.Init();
		
		ColorDisable(m_RandomizeCharacter);
		m_RandomizeCharacter.Enable(false);
		
		return layoutRoot;
	}
}