
#pragma once

#include "AggressiveMonster.h"





class cSlime :
	public cAggressiveMonster
{
	typedef cAggressiveMonster super;
	
public:
	/** Creates a slime of the specified size; size is 1 .. 3, with 1 being the smallest */
	cSlime(int a_Size);

	CLASS_PROTODEF(cSlime);

	virtual void GetDrops(cItems & a_Drops, cEntity * a_Killer = NULL) override;
	virtual void Attack(float a_Dt) override;
	virtual void KilledBy(TakeDamageInfo & a_TDI) override;

	int GetSize(void) const { return m_Size; }
	const AString GetSizeName(int a_Size) const;
	
protected:

	/** Size of the slime, 1 .. 3, with 1 being the smallest */
	int m_Size;
} ;




