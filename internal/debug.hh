namespace Internal
{

	

	static inline void check_index(int s, int i)
	{
		#if defined  TOON_CHECK_BOUNDS  || defined TOON_TEST_INTERNALS
			if(i<0 || i >= s)
			{
				#ifdef TOON_TEST_INTERNALS
					throw Internal::BadIndex();
				#else
					std::cerr << "Toon index out of range" << std::endl;
					std::abort();
				#endif
			}
		#endif
	}
}
