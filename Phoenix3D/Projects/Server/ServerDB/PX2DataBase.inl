// PX2DataBase.inl

//-----------------------------------------------------------------------------
inline bool DataBase::IsConnected() const
{
	return mIsConnected; 
}
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
inline ListNames_t DBResult::GetListNames() const
{
	return mListNames; 
}
//-----------------------------------------------------------------------------