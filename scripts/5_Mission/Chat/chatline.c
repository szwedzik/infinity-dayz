modded class ChatLine {  
    // Consts
    const float FADE_TIMEOUT = 240;
    const float FADE_OUT_DURATION = 4;
    const float FADE_IN_DURATION = 0.5;

    private const int ME_TEXT_COLOR = ARGB(255, 33, 237, 213);
    private const int DO_TEXT_COLOR = ARGB(255, 252, 0, 198);
    private const int DEFAULT_COLOR = ARGB(255, 255, 255, 255);

    void ChatLine(Widget root_widget) {
        m_RootWidget = GetGame().GetWorkspace().CreateWidgets("InfinityRP/assets/gui/Chat/day_z_chat_item.layout", root_widget);

        m_NameWidget = TextWidget.Cast(m_RootWidget.FindAnyWidget("ChatItemSenderWidget"));
        m_TextWidget = TextWidget.Cast(m_RootWidget.FindAnyWidget("ChatItemTextWidget"));

        m_FadeTimer = new WidgetFadeTimer;
        m_TimeoutTimer = new Timer(CALL_CATEGORY_GUI);
    }

    // void Set(ChatMessageEventParams params)
    // {
    //     int channel;
    //     string command;
    //     bool CommandActive;
    //     m_NameWidget.SetText("");
    //     m_TextWidget.SetText("");

    //     if (params.param3.Length() > 0 && params.param3[0] == "!")
    //     {
    //         command = params.param3.Substring(0, 3);
    //         if (command == "!do" || command == "!Do" || command == "!dO" || command == "!DO")
    //         {
    //             params.param3 = params.param3.Substring(3, params.param3.Length() - 3);
    //             CommandActive = true;
    //         }
    //         else if (command == "!me" || command == "!Me" || command == "!mE" || command == "!ME")
    //         {
    //             params.param3 = params.param3.Substring(3, params.param3.Length() - 3);
    //             CommandActive = true;
    //         }
    //         else
    //         {
    //             CommandActive = false;
    //         }
    //     }
    //     else
    //     {
    //         CommandActive = false;
    //     }

    //     SetColour(DEFAULT_COLOR);
    //     m_RootWidget.Show(true);

    //     channel = params.param1;

    //     if (channel & CCSystem)
    //     {
    //         if (params.param2 != "")
    //         {
    //             m_NameWidget.SetText(GAME_PREFIX + ": ");
    //         }
    //         SetColorByParam(params.param4, GAME_TEXT_COLOUR);
    //     }
    //     else if (channel & CCAdmin)
    //     {
    //         SetColorByParam(params.param4, ADMIN_TEXT_COLOUR);
    //     }
    //     else if (channel & CCBattlEye){
    //         SetColorByParam(params.param4, ADMIN_TEXT_COLOUR);
    //     }
    //     else if (channel & CCTransmitter)
    //     {
    //         m_NameWidget.SetText(RADIO_PREFIX + params.param2 + ": ");
    //     }
    //     else if (channel == 0 & CommandActive || channel & CCDirect & CommandActive)
    //     {
    //         if (params.param2 != "")
    //         {
    //             if (command == "!do" || command == "!Do" || command == "!dO" || command == "!DO")
    //             {
    //                 m_NameWidget.SetText("**DO** "+params.param2 + ": ");
    //                 SetColour(DO_TEXT_COLOR);
    //             }
    //             else if (command == "!me" || command == "!Me" || command == "!mE" || command == "!ME")
    //             {
    //                 m_NameWidget.SetText("**ME** " + params.param2 + ": ");
    //                 SetColour(ME_TEXT_COLOR);
    //             }
    //         }
    //     }
    //     else if (channel == 0 || channel & CCDirect)
    //     {
    //         if (params.param2 != "")
    //         {
    //             m_NameWidget.SetText("**OOC** " + params.param2 + ": ");
    //         }
    //     }

    //     if(params.param3 != "" ){
    //         m_TextWidget.SetText(params.param3);
    //     } else {
    //         return;
    //     }

    //     m_FadeTimer.FadeIn(m_RootWidget, FADE_IN_DURATION);
    //     m_TimeoutTimer.Run(FADE_TIMEOUT, m_FadeTimer, "FadeOut", new Param2<Widget, float>(m_RootWidget, FADE_OUT_DURATION));
    // }
    override void Set(ChatMessageEventParams params) {
        switch (params.param1) {
        case CCSystem:
            // if(params.param2 != "") {
			// 	m_NameWidget.SetText("Game: ");
			// } 
            // m_TextWidget.SetText(params.param3);
            // SetColour(GAME_TEXT_COLOUR);
            return;
        case CCAdmin:
            m_TextWidget.SetText(params.param3);
			SetColour(ADMIN_TEXT_COLOUR);	
            break;  
        case CCBattlEye:
            m_TextWidget.SetText(params.param3);
			SetColour(ADMIN_TEXT_COLOUR);	
            break;              
        default:
            if(params.param3[0] == "!"){
                if(params.param3[1] == "D" && params.param3[2] == "O" && params.param3[3] == " "){
                    m_NameWidget.SetText("**DO** " + params.param2 + ": ");
                    m_TextWidget.SetText(params.param3.Substring(3, params.param3.Length() - 3));
                    SetColour(DO_TEXT_COLOR);
                    break;
                } else if(params.param3[1] == "d" && params.param3[2] == "O" && params.param3[3] == " "){
                    m_NameWidget.SetText("**DO** " + params.param2 + ": ");
                    m_TextWidget.SetText(params.param3.Substring(3, params.param3.Length() - 3));
                    SetColour(DO_TEXT_COLOR);
                    break;
                } else if(params.param3[1] == "d" && params.param3[2] == "o" && params.param3[3] == " "){
                    m_NameWidget.SetText("**DO** " + params.param2 + ": ");
                    m_TextWidget.SetText(params.param3.Substring(3, params.param3.Length() - 3));
                    SetColour(DO_TEXT_COLOR);
                    break;
                } else if(params.param3[1] == "D" && params.param3[2] == "o" && params.param3[3] == " "){
                    m_NameWidget.SetText("**DO** " + params.param2 + ": ");
                    m_TextWidget.SetText(params.param3.Substring(3, params.param3.Length() - 3));
                    SetColour(DO_TEXT_COLOR);
                    break;
                } else if(params.param3[1] == "M" && params.param3[2] == "E" && params.param3[3] == " "){
                    m_NameWidget.SetText("**ME** " + params.param2 + ": ");
                    m_TextWidget.SetText(params.param3.Substring(3, params.param3.Length() - 3));
                    SetColour(ME_TEXT_COLOR);
                    break;
                } else if(params.param3[1] == "M" && params.param3[2] == "e" && params.param3[3] == " "){
                    m_NameWidget.SetText("**ME** " + params.param2 + ": ");
                    m_TextWidget.SetText(params.param3.Substring(3, params.param3.Length() - 3));
                    SetColour(ME_TEXT_COLOR);
                    break;
                } else if(params.param3[1] == "m" && params.param3[2] == "e" && params.param3[3] == " "){
                    m_NameWidget.SetText("**ME** " + params.param2 + ": ");
                    m_TextWidget.SetText(params.param3.Substring(3, params.param3.Length() - 3));
                    SetColour(ME_TEXT_COLOR);
                    break;
                } else if(params.param3[1] == "m" && params.param3[2] == "E" && params.param3[3] == " "){
                    m_NameWidget.SetText("**ME** " + params.param2 + ": ");
                    m_TextWidget.SetText(params.param3.Substring(3, params.param3.Length() - 3));
                    SetColour(ME_TEXT_COLOR);
                    break;
                }
            } else {
                m_NameWidget.SetText("**OOC** " + params.param2 + ": ");
                SetColour(DEFAULT_COLOUR);
                m_TextWidget.SetText(params.param3);
                break;
            }
        }
		m_FadeTimer.FadeIn(m_RootWidget, FADE_IN_DURATION);
		m_TimeoutTimer.Run(FADE_TIMEOUT, m_FadeTimer, "FadeOut", new Param2<Widget, float>(m_RootWidget, FADE_OUT_DURATION));
    }
}