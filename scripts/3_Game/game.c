modded class DayZGame
{override void FirearmEffects( Object source, Object directHit, int componentIndex, string surface, vector pos, vector surfNormal, vector exitPos, vector inSpeed, vector outSpeed, bool isWater, bool deflected, string ammoType ) 
	{super.FirearmEffects( source, directHit, componentIndex, surface, pos, surfNormal, exitPos, inSpeed, outSpeed, isWater, deflected, ammoType );
	
	if ( GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{
			
		}

		switch ( ammoType )
			{
			case "Bolt_Crossbow_HE":
			{GetGame().CreateObject( "Crossbow_HE_Explosion", pos ); break;}

			case "Bullet_40mm_HE":
			{GetGame().CreateObject( "HR_40mm_HE", pos ); break;}

			case "Bullet_40mm_BHE":
			{GetGame().CreateObject( "HR_40mm_BHE", pos ); break;}

			case "HR_40mmWhiteColor":
			{GetGame().CreateObject( "HR_40mm_WhiteColor", pos ); break;}

			case "HR_40mmRedColor":
			{GetGame().CreateObject( "HR_40mm_RedColor", pos ); break;}

			case "HR_40mmYellowColor":
			{GetGame().CreateObject( "HR_40mm_YellowColor", pos ); break;}

			case "HR_40mmGreenColor":
			{GetGame().CreateObject( "HR_40mm_GreenColor", pos ); break;}

			case "HR_40mmPurpleColor":
			{GetGame().CreateObject( "HR_40mm_PurpleColor", pos ); break;}

			case "HR_RPG7Rocket":
			{GetGame().CreateObject( "HR_40mm_BHE", pos ); break;}	
		
			}
	}
};