namespace KeyHelper
{
	class CKeyHelper
	{
	private:
		bool m_bKeyMap[255];
	public:
		CKeyHelper();
		~CKeyHelper();

		bool IsKeyReleased(int iVkCode);
		bool IsKeyDowned(int iVkCode);
	};

	extern std::unique_ptr<CKeyHelper> pKeyHelper;
}