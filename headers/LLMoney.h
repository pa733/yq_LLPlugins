// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� LLMONEY_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ���Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// BDXMONEY_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef LLMONEY_EXPORTS
#define LLMONEY_API __declspec(dllexport)
#else
#define LLMONEY_API __declspec(dllimport)
#endif
typedef long long money_t;
typedef unsigned long long xuid_t;
namespace Money {
	LLMONEY_API money_t getMoney(xuid_t xuid);
	LLMONEY_API string getTransHist(xuid_t xuid, int timediff = 24 * 60 * 60);
	LLMONEY_API bool createTrans(xuid_t from, xuid_t to, money_t val, string const& note = "");
	LLMONEY_API bool setMoney(xuid_t xuid, money_t money);
	LLMONEY_API bool reduceMoney(xuid_t xuid, money_t money);
	LLMONEY_API void purgeHist(int difftime = 0);
};