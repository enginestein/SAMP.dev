package samp_api;

public class API
{
	public static final String PATH = "../bin/SAMPDEV.dll";




	public static native int Init();


	public static native void SetParam(String _szParamName, String _szParamValue);




	public static native int GetGTACommandLine(tangible.RefObject<StringBuilder> line, int max_len);


	public static native boolean IsMenuOpen();


	public static native boolean ScreenToWorld(float x, float y, tangible.OutObject<Float> worldX, tangible.OutObject<Float> worldY, tangible.OutObject<Float> worldZ);


	public static native boolean WorldToScreen(float x, float y, float z, tangible.OutObject<Float> screenX, tangible.OutObject<Float> screenY);




	public static native int GetPlayerCPed();


	public static native int GetPlayerHealth();


	public static native int GetPlayerArmor();


	public static native int GetPlayerMoney();


	public static native int GetPlayerSkinID();


	public static native int GetPlayerInterior();


	public static native int IsPlayerInAnyVehicle();


	public static native int IsPlayerDriver();


	public static native int IsPlayerPassenger();


	public static native int IsPlayerInInterior();


	public static native int GetPlayerX(tangible.OutObject<Float> posX);


	public static native int GetPlayerY(tangible.OutObject<Float> posY);


	public static native int GetPlayerZ(tangible.OutObject<Float> posZ);


	public static native int GetPlayerPosition(tangible.OutObject<Float> posX, tangible.OutObject<Float> posY, tangible.OutObject<Float> posZ);


	public static native int IsPlayerInRange2D(float posX, float posY, float radius);


	public static native int IsPlayerInRange3D(float posX, float posY, float posZ, float radius);


	public static native int GetCityName(tangible.RefObject<StringBuilder> cityName, int max_len);


	public static native int GetZoneName(tangible.RefObject<StringBuilder> zoneName, int max_len);


	public static native int TextCreate(String Font, int FontSize, boolean bBold, boolean bItalic, int x, int y, int color, String text, boolean bShadow, boolean bShow);


	public static native int TextDestroy(int ID);


	public static native int TextSetShadow(int id, boolean b);


	public static native int TextSetShown(int id, boolean b);


	public static native int TextSetColor(int id, int color);


	public static native int TextSetPos(int id, int x, int y);


	public static native int TextSetString(int id, String str);


	public static native int TextUpdate(int id, String Font, int FontSize, boolean bBold, boolean bItalic);


	public static native int BoxCreate(int x, int y, int w, int h, int dwColor, boolean bShow);


	public static native int BoxDestroy(int id);


	public static native int BoxSetShown(int id, boolean bShown);


	public static native int BoxSetBorder(int id, int height, boolean bShown);


	public static native int BoxSetBorderColor(int id, int dwColor);


	public static native int BoxSetColor(int id, int dwColor);


	public static native int BoxSetHeight(int id, int height);


	public static native int BoxSetPos(int id, int x, int y);


	public static native int BoxSetWidth(int id, int width);


	public static native int LineCreate(int x1, int y1, int x2, int y2, int width, int color, boolean bShow);


	public static native int LineDestroy(int id);


	public static native int LineSetShown(int id, boolean bShown);


	public static native int LineSetColor(int id, int color);


	public static native int LineSetWidth(int id, int width);


	public static native int LineSetPos(int id, int x1, int y1, int x2, int y2);


	public static native int ImageCreate(String path, int x, int y, int rotation, int align, boolean bShow);


	public static native int ImageDestroy(int id);


	public static native int ImageSetShown(int id, boolean bShown);


	public static native int ImageSetAlign(int id, int align);


	public static native int ImageSetPos(int id, int x, int y);


	public static native int ImageSetRotation(int id, int rotation);


	public static native int DestroyAllVisual();


	public static native int ShowAllVisual();


	public static native int HideAllVisual();


	public static native int GetFrameRate();


	public static native int GetScreenSpecs(tangible.OutObject<Integer> width, tangible.OutObject<Integer> height);


	public static native int SetCalculationRatio(int width, int height);


	public static native int SetOverlayPriority(int id, int priority);


	public static native int SetOverlayCalculationEnabled(int id, boolean enabled);




	public static native int GetServerIP(tangible.RefObject<StringBuilder> ip, int max_len);


	public static native int GetServerPort();


	public static native int SendChat(String msg);


	public static native int ShowGameText(String msg, int time, int style);


	public static native int AddChatMessage(String msg);


	public static native int ShowDialog(int id, int style, String caption, String text, String button, String button2);


	public static native int GetPlayerNameByID(int id, tangible.RefObject<StringBuilder> playername, int max_len);


	public static native int GetPlayerIDByName(String name);


	public static native int GetPlayerName(tangible.RefObject<StringBuilder> playername, int max_len);


	public static native int GetPlayerId();


	public static native int IsChatOpen();


	public static native int IsDialogOpen();




	public static native int GetVehiclePointer();


	public static native int GetVehicleSpeed(float factor);


	public static native float GetVehicleHealth();


	public static native int GetVehicleModelId();


	public static native int GetVehicleModelName(tangible.RefObject<StringBuilder> name, int max_len);


	public static native int GetVehicleModelNameById(int vehicleID, tangible.RefObject<StringBuilder> name, int max_len);


	public static native int GetVehicleType();


	public static native int GetVehicleFreeSeats(tangible.OutObject<Integer> seatFL, tangible.OutObject<Integer> seatFR, tangible.OutObject<Integer> seatRL, tangible.OutObject<Integer> seatRR);


	public static native int GetVehicleFirstColor();


	public static native int GetVehicleSecondColor();


	public static native int GetVehicleColor(tangible.OutObject<Integer> color1, tangible.OutObject<Integer> color2);


	public static native int IsVehicleSeatUsed(int seat);


	public static native int IsVehicleLocked();


	public static native int IsVehicleHornEnabled();
	public static native int IsVehicleSirenEnabled();


	public static native int IsVehicleAlternateSirenEnabled();


	public static native int IsVehicleEngineEnabled();


	public static native int IsVehicleLightEnabled();


	public static native int IsVehicleCar();


	public static native int IsVehiclePlane();


	public static native int IsVehicleBoat();


	public static native int IsVehicleTrain();


	public static native int IsVehicleBike();


	public static native int HasWeaponIDClip(int weaponID);

    public static native int GetPlayerWeaponID();


		public static native int GetPlayerWeaponType();


		public static native int GetPlayerWeaponSlot();


		public static native int GetPlayerWeaponName(int dwWeapSlot, tangible.RefObject<StringBuilder> _szWeapName, int max_len);


		public static native int GetPlayerWeaponClip(int dwWeapSlot);


		public static native int GetPlayerWeaponTotalClip(int dwWeapSlot);


		public static native int GetPlayerWeaponState();


		public static native int GetPlayerWeaponAmmo(int weaponType);


		public static native int GetPlayerWeaponAmmoInClip(int weaponType);


		public static void SendChatEx(String message, Object... args)
		{
			if (message.length() != 0)
			{
				if (args.length > 0)
				{
					message += " " + tangible.StringHelper.join(" ", args);
				}
				SendChat(message);
			}
		}


		public static void AddChatMessageEx(String text)
		{
			AddChatMessageEx(text, "FFFFFF");
		}


		public static void AddChatMessageEx(String text, String color)
		{
			AddChatMessage("{" + color + "}" + text);
		}

		public static void AddChatMessageEx(String text, Color color)
		{
			AddChatMessage("{" + ColorToHexRGB(color) + "}" + text);
		}

		public static void AddChatMessageEx(String prefix, String prefixColor, String text)
		{
			AddChatMessageEx(prefix, prefixColor, text, "FFFFFF");
		}

		public static void AddChatMessageEx(String prefix, String prefixColor, String text, String color)
		{
			AddChatMessage("{" + prefixColor + "}" + prefix + " {" + color + "}" + text);
		}

		public static void AddChatMessageEx(String prefix, Color prefixColor, String text, Color color)
		{
			AddChatMessage("{" + ColorToHexRGB(prefixColor) + "}" + prefix + " {" + ColorToHexRGB(color) + "}" + text);
		}

		public static String GetPlayerNameByIDEx(int id)
		{
			StringBuilder builder = new StringBuilder(32);
			tangible.RefObject<StringBuilder> tempRef_builder = new tangible.RefObject<StringBuilder>(builder);
			GetPlayerNameByID(id, tempRef_builder, builder.capacity());
			builder = tempRef_builder.refArgValue;

			return builder.toString();
		}

		public static String ColorToHexRGB(Color color)
		{
			return String.format("%1$.2X", color.R) + String.format("%1$.2X", color.G) + String.format("%1$.2X", color.B);
		}

		public static String ColorToHexARGB(Color color)
		{
			return String.format("%1$.2X", color.A) + String.format("%1$.2X", color.R) + String.format("%1$.2X", color.G) + String.format("%1$.2X", color.B);
		}

}