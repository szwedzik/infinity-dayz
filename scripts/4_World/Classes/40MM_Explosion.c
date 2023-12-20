class Crossbow_HE_Explosion: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void Crossbow_HE_Explosion()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false); 
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "CrossBowExplosion");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.EXPLOSION_LANDMINE, this.GetPosition());
	}
}

class HR_40mm_HE: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void HR_40mm_HE()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false); 
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "HR40mm_explosion");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.EXPLOSION_LANDMINE, this.GetPosition());
	}
}

class HR_40mm_BHE: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void HR_40mm_BHE()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false); 
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "HR40mm_Bigexplosion");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.EXPLOSION_LANDMINE, this.GetPosition());
	}
}

class HR_40mm_WhiteColor: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void HR_40mm_WhiteColor()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false); 
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "HR40mmColor_base");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_WHITE_START, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_WHITE_LOOP, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_WHITE_END, this.GetPosition());
	}
}

class HR_40mm_RedColor: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void HR_40mm_RedColor()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false); 
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "HR40mmColor_base");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_RED_START, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_RED_LOOP, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_RED_END, this.GetPosition());
	}
}

class HR_40mm_YellowColor: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void HR_40mm_YellowColor()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false); 
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "HR40mmColor_base");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_YELLOW_START, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_YELLOW_LOOP, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_YELLOW_END, this.GetPosition());
	}
}

class HR_40mm_GreenColor: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void HR_40mm_GreenColor()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false); 
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "HR40mmColor_base");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_GREEN_START, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_GREEN_LOOP, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_GREEN_END, this.GetPosition());
	}
}

class HR_40mm_PurpleColor: Building
{
	ref Timer m_Delay;
	protected Particle 		m_ParticleExplosion;
	void HR_40mm_PurpleColor()
	{
		m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false); 
	}
	void ExplodeNow()
	{
		Explode(DT_EXPLOSION, "HR40mmColor_base");
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_PURPLE_START, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_PURPLE_LOOP, this.GetPosition());
			m_ParticleExplosion = Particle.PlayInWorld(ParticleList.GRENADE_M18_PURPLE_END, this.GetPosition());
	}
}