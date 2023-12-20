modded class Construction
{
	override bool IsColliding( string part_name )
	{
		return false;
	}

	override bool IsCollidingEx( CollisionCheckData check_data )
	{
		return false;
	}
}


modded class ConstructionBoxTrigger extends ManTrigger
{
	override bool IsColliding()
	{
		return false;
	}
}