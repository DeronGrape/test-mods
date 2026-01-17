modded class MissionGameplay
{
    string ipToCheck;

    override void OnInit()
    {
        super.OnInit();

        if (!GetGame().IsServer() && GetGame().IsClient())
        {
            string ip;
            int port;

            if (GetGame().GetHostAddress(ip, port))
            {
                ipToCheck = ip;

                ModProtector.LoadAllowedIPsAsync();
                WaitForAuthorization();
            }
            else
            {
                GetGame().RequestExit(0);
            }
        }
    }

    void WaitForAuthorization()
    {
        GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(CheckIfReady, 250, true);
    }

    void CheckIfReady()
    {
        if (!ModProtector.ready)
            return;
		
        GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(CheckIfReady);
        if (!ModProtector.IsAuthorizedIP(ipToCheck))
        {
            GetGame().RequestExit(0);
        }
    }
}

class JsonData
{
    ref array<string> allowed_ips = new array<string>();
}
class ModProtector
{
    static ref array<string> allowed_ips = new array<string>();
    static bool ready = false;

    static void LoadAllowedIPsAsync()
    {
        ready = false;

        RestApi api = GetRestApi();
        RestContext ctx = api.GetRestContext("https://khmelnytskyi666.github.io/Azkaban_whitelist/");
        // RestContext ctx = api.GetRestContext("https://deronauthorize.neocities.org/");
        ctx.GET(new ModProtectCallback(), "allowed_servers.json");
    }
    static bool IsAuthorizedIP(string ip)
    {
        return allowed_ips.Find(ip) != -1;
    }
}
class ModProtectCallback : RestCallback
{
	override void OnSuccess(string data, int dataSize)
	{
		ModProtector.allowed_ips.Clear();

		JsonSerializer js = new JsonSerializer();
		JsonData jsonData = new JsonData();
		string error;

        bool parsed = js.ReadFromString(jsonData, data, error);
		if (!parsed)
		{
			ModProtector.ready = true;
			return;
		}
		foreach (string ip : jsonData.allowed_ips)
		{
			ModProtector.allowed_ips.Insert(ip);
		}
		ModProtector.ready = true;
	}
}
