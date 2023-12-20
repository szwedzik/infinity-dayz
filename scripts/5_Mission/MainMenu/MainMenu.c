modded class MainMenu extends UIScriptedMenu 
{	
	protected Widget				discord_button;
	protected Widget				twitter_button;
	protected Widget				vk_button;
	protected Widget				lore_button;

	protected ButtonWidget m_Youtube;
	protected ButtonWidget m_PayPal;
	protected ButtonWidget m_Steam;
	
	private ref Widget 		        m_LoginQueueDialog;
	private ButtonWidget 	        m_btnLeave;
	private TextWidget 		        m_txtLabel;
	private MultilineTextWidget     m_txtPosition;
	
	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets(MMpath);
		
		m_Play						= layoutRoot.FindAnyWidget( "play" );
		m_CustomizeCharacter		= layoutRoot.FindAnyWidget( "customize_character" );
		m_SettingsButton			= layoutRoot.FindAnyWidget( "settings" );
		m_Exit						= layoutRoot.FindAnyWidget( "exit" );
		discord_button				= layoutRoot.FindAnyWidget( "discord" );
		twitter_button				= layoutRoot.FindAnyWidget( "twitter" );
		vk_button					= layoutRoot.FindAnyWidget( "VK" );
		lore_button					= layoutRoot.FindAnyWidget( "lore" );

		m_LoginQueueDialog          = layoutRoot.FindAnyWidget("TextInputDialogRoot");
		m_btnLeave                  = ButtonWidget.Cast( m_LoginQueueDialog.FindAnyWidget("btnLeave") );
		m_txtLabel                  = TextWidget.Cast( m_LoginQueueDialog.FindAnyWidget("txtLabel") );
		m_txtPosition               = MultilineTextWidget.Cast(m_LoginQueueDialog.FindAnyWidget("txtPosition"));

		m_Steam.Show(false);
		m_PayPal.Show(false);
		m_Youtube.Show(false);


		m_Version					= TextWidget.Cast( layoutRoot.FindAnyWidget( "version" ) );
		m_Stats						= new MainMenuStats( layoutRoot.FindAnyWidget( "stats_root" ) );		
		m_Mission					= MissionMainMenu.Cast( GetGame().GetMission() );		
		m_LastFocusedButton         = m_Play;
		m_ScenePC					= m_Mission.GetIntroScenePC();
		
		if( m_ScenePC )
		{
			m_ScenePC.ResetIntroCamera();
		}
		
		m_PlayerName				= TextWidget.Cast( layoutRoot.FindAnyWidget("character_name") );
		
		string version;
		GetGame().GetVersion( version );
		m_Version.SetText( version );
		
		GetGame().GetUIManager().ScreenFadeOut(0);

		SetFocus( null );
		
		Refresh();
		
		GetDayZGame().GetBacklit().MainMenu_OnShow();
	
		g_Game.SetLoadState( DayZLoadState.MAIN_MENU_CONTROLLER_SELECT );
		m_Stats.UpdateStats();
		return layoutRoot;
	}
	
	override void Update(float timeslice)
	{
		super.Update( timeslice );
		/*int charID = m_ScenePC.GetIntroCharacter().GetCharacterID();
		m_PlayerName.SetText( "#c_welcome" + " " + m_ScenePC.GetIntroCharacter().GetCharacterNameById( charID ) );*/
		m_Stats.UpdateStats();
		
		if( GetGame() && GetGame().GetInput() && GetGame().GetInput().LocalPress("UAUIBack", false) )
		{
			Exit();
		}

		//Login Queue
		int pos = GetGame().GetUIManager().GetLoginQueuePosition();
		if ( pos > 0 )
		{
			m_LoginQueueDialog.Show( true );
			m_txtPosition.SetText(pos.ToString());
		}else{
			m_LoginQueueDialog.Show( false );
		}

		GetGame().GetUIManager().ShowUICursor( true ); //Hack fix for BE EULA Accept button 1st time playing player.
	}
	
	override bool OnClick( Widget w, int x, int y, int button )
	{
		if( button == MouseState.LEFT )
		{
			if( w == m_Play )
			{
				/*m_LastFocusedButton = m_Play;
				g_Game.ConnectFromServerBrowser( MMip, MMport, "" ); 
				return true;*/
				/*GetGame().CommandlineGetParam("connect", ip);
				GetGame().CommandlineGetParam("port", port);*/
				ConnectToSession(MMip, MMport);
				return true;
			}
			else if ( w == m_btnLeave )
			{
				g_Game.SetGameState( DayZGameState.MAIN_MENU );
				g_Game.SetLoadState( DayZLoadState.MAIN_MENU_START );
				g_Game.GetCallQueue(CALL_CATEGORY_SYSTEM).Call(GetGame().DisconnectSessionForce);
				return true;
			}
			else if ( w == m_CustomizeCharacter )
			{
				OpenMenuCustomizeCharacter();
				return true;
			}
			else if ( w == discord_button )
			{
				GetGame().OpenURL(MMdiscord); 
				return true;
			}
			else if ( w == vk_button )
			{
				GetGame().OpenURL(MMvk);
				return true;
			}
			else if ( w == twitter_button )
			{
				GetGame().OpenURL(MMtwitter);
				return true;
			}
			else if ( w == lore_button )
			{
				GetGame().OpenURL(MMlore);
				return true;
			}
			else if ( w == m_SettingsButton )
			{
				OpenSettings();
				return true;
			}
			else if ( w == m_Exit )
			{
				Exit();
				return true;
			}
		}
		return false;
	}

	void ConnectToSession(string ip, int port)
	{
		int res = GetGame().Connect(GetGame().GetUIManager().GetMenu(), ip, port, "");
		if(!res)
		{
			if(OnlineServices.GetBiosUser())
				GetGame().GetUserManager().SelectUser(OnlineServices.GetBiosUser());
			
			if(g_Game.GetGameState() != DayZGameState.IN_GAME)
			{
				g_Game.CancelLoginQueue();
				if(GetGame().GetMission())
				{
					if(g_Game.GetGameState() != DayZGameState.MAIN_MENU)
					{
						GetGame().GetMission().AbortMission();
						return;
					}
				}
				else
				{
					g_Game.MainMenuLaunch();
				}
			}
		}
	}

	override void OnChangeCharacter(bool create_character = true)
	{
		/*if ( m_ScenePC && m_ScenePC.GetIntroCharacter() )
		{
			int charID = m_ScenePC.GetIntroCharacter().GetCharacterID();
			if (create_character)
			{
				m_ScenePC.GetIntroCharacter().CreateNewCharacterById( charID );
			}
			m_PlayerName.SetText( m_ScenePC.GetIntroCharacter().GetCharacterNameById( charID ) );
			
			Widget w = m_CustomizeCharacter.FindAnyWidget(m_CustomizeCharacter.GetName() + "_label");

			if ( w )
			{
				TextWidget text = TextWidget.Cast( w );
				
				if( m_ScenePC.GetIntroCharacter().IsDefaultCharacter() )
				{
					text.SetText("#layout_main_menu_customize_char");
				}
				else
				{
					text.SetText("#layout_main_menu_rename");
				}
			}
			if (m_ScenePC.GetIntroCharacter().GetCharacterObj() )
			{
				if ( m_ScenePC.GetIntroCharacter().GetCharacterObj().IsMale() )
					m_ScenePC.GetIntroCharacter().SetCharacterGender(ECharGender.Male);
				else
					m_ScenePC.GetIntroCharacter().SetCharacterGender(ECharGender.Female);
			}
			
			//update character stats
			//m_Stats.UpdateStats();
		}*/
		m_Stats.UpdateStats();
	}

	override void LoadMods()
	{
		return;
	}
	
	override void Play()
	{
		return;
	}
	
	override bool OnMouseEnter( Widget w, int x, int y )
	{
		/*if( w == m_Play )
		{
			string ip = "";
			string name = "";
			int port = 0;
			 
			if(m_ScenePC && !m_ScenePC.GetIntroCharacter().IsDefaultCharacter())
			{
				int charID = m_ScenePC.GetIntroCharacter().GetCharacterID();
				m_ScenePC.GetIntroCharacter().GetLastPlayedServer(charID, ip, name, port);
				
				m_LastPlayedTooltipName.SetText( "#server_details_name " + name );
				m_LastPlayedTooltipIP.SetText( "#main_menu_IP " + ip );
				m_LastPlayedTooltipPort.SetText( "#main_menu_port " + port );
				
				m_LastPlayedTooltipTimer.FadeIn( m_LastPlayedTooltip, 0.3, true );
			}
		}*/
		
		if( IsFocusable( w ) )
		{
			ColorHighlight( w );
			return true;
		}
		return false;
	}
	
	override bool OnMouseLeave( Widget w, Widget enterW, int x, int y )
	{
		/*if( w == m_Play )
		{
			m_LastPlayedTooltipTimer.FadeOut( m_LastPlayedTooltip, 0.3, true );
		}*/
		
		if( IsFocusable( w ) )
		{
			ColorNormal( w );
			return true;
		}
		return false;
	}
}