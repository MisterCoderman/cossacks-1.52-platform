/*
 * game_api.h - Cossacks game DLL API declarations
 *
 * This header declares all functions exported by dmcr.exe and imported
 * by Mission/History/Horizon DLLs. Signatures extracted from ActiveScenary.cpp.
 *
 * Usage: #include "game_api.h" in each recompiled DLL source.
 * Link with: libdmcr.a (import library for dmcr.exe)
 */
#ifndef GAME_API_H
#define GAME_API_H

#include <windows.h>

/* C89 compatibility */
#ifndef __cplusplus
#ifndef true
#define true 1
#define false 0
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Basic types ---- */
typedef unsigned char  byte;
typedef unsigned short word;

/* ---- Structures ---- */

/* Universal game object handle: units group, zone, unit type, upgrade, etc. */
typedef struct {
    word Index;
    word Serial;
    int  Type;
} GAMEOBJ;

/* Info about a single unit inside a units group */
typedef struct {
    word Index;
    word Serial;
    word Life;
    word MaxLife;
    byte AddDamage;
    byte AddShield;
    word Stage;
    word MaxStage;
    word Kills;
    word NIndex;
    byte Usage;
    byte Building;
    int  x, y;
    byte Reserved[16];
} OneUnit;

/* Extended unit capabilities */
typedef struct {
    int   Direction;
    int   DestX;
    int   DestY;
    int   Type;
    char* UnitID;
    int   NI;
    int   StandTime;
    int   OrderType;
} UnitExCaps;

/* ---- API function declarations (imported from dmcr.exe) ---- */
/* Full prototypes matching ActiveScenary.cpp signatures */

/* Registration */
__declspec(dllimport) BOOL RegisterUnits(GAMEOBJ* GOBJ, char* Name);
__declspec(dllimport) BOOL RegisterUnitsForm(GAMEOBJ* GOBJ, char* Name);
__declspec(dllimport) BOOL RegisterString(GAMEOBJ* GOBJ, char* ID);
__declspec(dllimport) BOOL RegisterSound(GAMEOBJ* GOBJ, char* Name);
__declspec(dllimport) void RegisterVar(void* Var, int size);
__declspec(dllimport) void RegisterZone(GAMEOBJ* GOBJ, char* Name);
__declspec(dllimport) void RegisterVisibleZone(GAMEOBJ* GOBJ, char* Name);
__declspec(dllimport) BOOL RegisterUnitType(GAMEOBJ* GOBJ, char* Name);
__declspec(dllimport) BOOL RegisterUpgrade(GAMEOBJ* GOBJ, char* Name);
__declspec(dllimport) BOOL SafeRegisterUpgrade(GAMEOBJ* GOBJ, char* Name);
__declspec(dllimport) BOOL RegisterFormation(GAMEOBJ* GOBJ, char* Name);
__declspec(dllimport) void RegisterDynGroup(GAMEOBJ* Units);

/* Upgrades */
__declspec(dllimport) void InitialUpgrade(char* Grp, char* Upgrade);
__declspec(dllimport) void DisableUpgrade(byte Nat, GAMEOBJ* Upg);
__declspec(dllimport) void EnableUpgrade(byte Nat, GAMEOBJ* Upg);
__declspec(dllimport) void EnableUnit(byte Nat, GAMEOBJ* Type, BOOL State);
__declspec(dllimport) BOOL IsUpgradeDone(GAMEOBJ* Upgrade, byte Nation);

/* Counting units */
__declspec(dllimport) int GetUnitsAmount0(GAMEOBJ* Zone, byte Nation);
__declspec(dllimport) int GetUnitsAmount1(GAMEOBJ* Zone, GAMEOBJ* Units);
__declspec(dllimport) int GetUnitsAmount2(GAMEOBJ* Zone, GAMEOBJ* UnitType, byte Nation);
__declspec(dllimport) int GetTotalAmount0(GAMEOBJ* Units);
__declspec(dllimport) int GetTotalAmount1(GAMEOBJ* UnitType, byte Nation);
__declspec(dllimport) int GetTotalAmount2(GAMEOBJ* Units, GAMEOBJ* UnitType, byte Nation);
__declspec(dllimport) int GetReadyAmount(GAMEOBJ* UnitType, byte Nation);
__declspec(dllimport) int GetAmountOfWarriors(byte Nat);
__declspec(dllimport) int GetNUnits(GAMEOBJ* Units);
__declspec(dllimport) int GetUnitsByNation(GAMEOBJ* Units, byte Nat);
__declspec(dllimport) int GetKilled(GAMEOBJ* Units);

/* Selection */
__declspec(dllimport) void ClearSelection(byte Nat);
__declspec(dllimport) void SelectUnits(GAMEOBJ* Units, BOOL Add);
__declspec(dllimport) void SelectUnits1(byte Nat, GAMEOBJ* Units, BOOL Add);
__declspec(dllimport) void SelectUnitsType(GAMEOBJ* UnitsType, byte Nat, BOOL Add);
__declspec(dllimport) void SelectUnitsInZone(GAMEOBJ* Zone, byte Nation, BOOL add);
__declspec(dllimport) void SelectTypeOfUnitsInZone(GAMEOBJ* Zone, GAMEOBJ* UnitType, byte Nation, BOOL add);
__declspec(dllimport) void SaveSelectedUnits(byte NI, GAMEOBJ* Units, BOOL add);
__declspec(dllimport) BOOL SelDie(byte Nat);
__declspec(dllimport) void SelErase(byte NI);
__declspec(dllimport) void SelAttackGroup(byte Nat, GAMEOBJ* Enemy);
__declspec(dllimport) BOOL SelOpenGates(byte Nat);
__declspec(dllimport) BOOL SelCloseGates(byte Nat);
__declspec(dllimport) BOOL SelSendTo(byte Nat, GAMEOBJ* Zone, byte Dir, byte Type);
__declspec(dllimport) BOOL SelSendAndKill(byte Nat, GAMEOBJ* Zone, byte Dir, byte Type);
__declspec(dllimport) void SelChangeNation(byte SrcNat, byte DstNat);
__declspec(dllimport) void SelAutoKill(byte Nat);
__declspec(dllimport) BOOL SelCenter(GAMEOBJ* DstZone, byte Nat, int R);

/* Movement & Patrol */
__declspec(dllimport) BOOL Patrol(byte Nat, GAMEOBJ* Zone, byte Dir);
__declspec(dllimport) void SetDestPoint(GAMEOBJ* Units, GAMEOBJ* Zone);

/* Combat */
__declspec(dllimport) void AttackZoneByArtillery(GAMEOBJ* ArtGroup, GAMEOBJ* Zone, byte Nat);
__declspec(dllimport) void AttackBuildingsInZone(GAMEOBJ* ArtGroup, GAMEOBJ* Zone, byte Nat);
__declspec(dllimport) void AttackEnemyInZone(GAMEOBJ* Grp, GAMEOBJ* Zone, byte EnmNation);
__declspec(dllimport) void AllowAttack(byte Nat, byte val);
__declspec(dllimport) void SetStandGround(byte Nat, byte val);
__declspec(dllimport) void ChangeFriends(byte Nat, byte Flags);
__declspec(dllimport) void ChangeUnitParam(GAMEOBJ* Type, byte Nation, byte AddDamage, byte AddShield);

/* Production & Building */
__declspec(dllimport) BOOL CreateObject0(GAMEOBJ* DstObj, GAMEOBJ* Form, GAMEOBJ* UnitType, byte NatID, GAMEOBJ* Zone, byte Direction);
__declspec(dllimport) BOOL CreateBuilding(byte Nat, GAMEOBJ* Zone, GAMEOBJ* UnitType, GAMEOBJ* DestGroup);
__declspec(dllimport) void ProduceUnit(GAMEOBJ* Units, GAMEOBJ* UnitType, GAMEOBJ* DestGroup);
__declspec(dllimport) void ProduceUnitFast(GAMEOBJ* Units, GAMEOBJ* UnitType, GAMEOBJ* DestGroup, int Speed);
__declspec(dllimport) void ProduceOneUnit(byte Nat, GAMEOBJ* UnitType);
__declspec(dllimport) BOOL CheckProduction(GAMEOBJ* Units);
__declspec(dllimport) BOOL CheckBuildingsComplete(GAMEOBJ* Buildings);
__declspec(dllimport) void RepairBuildingsBySel(byte Nat, GAMEOBJ* Buildings);

/* Unit Info */
__declspec(dllimport) BOOL GetUnitInfo(GAMEOBJ* Units, int Index, OneUnit* Uni);
__declspec(dllimport) void SetUnitInfo(OneUnit* Uni);
__declspec(dllimport) BOOL GetUnitExCaps(int Index, UnitExCaps* CAPS, BOOL NeedOrderType);
__declspec(dllimport) void SetReadyState(GAMEOBJ* Units, BOOL State);
__declspec(dllimport) int  InsertUnitToGroup(GAMEOBJ* Src, GAMEOBJ* Dst, int Index);
__declspec(dllimport) void RemoveUnitFromGroup(GAMEOBJ* Src, int Index);
__declspec(dllimport) void RemoveGroup(GAMEOBJ* Source, GAMEOBJ* Dest);

/* Resources */
__declspec(dllimport) int  GetResource(byte Nat, byte ID);
__declspec(dllimport) void AddResource(byte Nat, byte ID, int Amount);
__declspec(dllimport) void SetResource(byte Nat, byte ID, int Amount);
__declspec(dllimport) int  GetUnitCost(byte Nat, GAMEOBJ* UnitType, byte ResID);
__declspec(dllimport) int  GetUpgradeCost(byte Nat, GAMEOBJ* Upgrade, byte ResID);
__declspec(dllimport) void TakeFood(GAMEOBJ* Units);
__declspec(dllimport) void TakeWood(GAMEOBJ* Units);
__declspec(dllimport) void TakeStone(GAMEOBJ* Units);

/* Triggers & Timers */
__declspec(dllimport) byte Trigg(byte ID);
__declspec(dllimport) void SetTrigg(byte ID, byte Val);
__declspec(dllimport) word WTrigg(byte ID);
__declspec(dllimport) void SetWTrigg(byte ID, word Val);
__declspec(dllimport) void RunTimer(byte ID, int Long);
__declspec(dllimport) BOOL TimerDone(byte ID);
__declspec(dllimport) BOOL TimerDoneFirst(byte ID);
__declspec(dllimport) BOOL TimerIsEmpty(byte ID);
__declspec(dllimport) void FreeTimer(byte ID);
__declspec(dllimport) int  GetTime(byte ID);
__declspec(dllimport) int  GetGlobalTime(void);

/* Zones */
__declspec(dllimport) BOOL UnitsCenter(GAMEOBJ* DstZone, GAMEOBJ* Units, word R);
__declspec(dllimport) BOOL CreateZoneNearUnit(GAMEOBJ* DstZone, GAMEOBJ* Zone, GAMEOBJ* UnitType, byte Nat, int R);
__declspec(dllimport) BOOL CreateZoneNearGroup(GAMEOBJ* DstZone, GAMEOBJ* Zone, GAMEOBJ* Grp, int R);
__declspec(dllimport) BOOL GetZoneCoor(GAMEOBJ* Zone, int* x, int* y);
__declspec(dllimport) int  GetTopDst(GAMEOBJ* Z1, GAMEOBJ* Z2);
__declspec(dllimport) void SetStartPoint(GAMEOBJ* Zone);
__declspec(dllimport) void ShowAlarm(GAMEOBJ* Zone);

/* Light */
__declspec(dllimport) void SetLightSpot(GAMEOBJ* Zone, int R, byte index);
__declspec(dllimport) void ClearLightSpot(byte index);

/* Transport */
__declspec(dllimport) int  GetNInside(byte Nat);
__declspec(dllimport) int  GetMaxInside(byte Nat);
__declspec(dllimport) void PushUnitAway(byte Nat);
__declspec(dllimport) void PushAllUnitsAway(byte Nat);
__declspec(dllimport) void SendUnitsToTransport(byte Nat);
__declspec(dllimport) BOOL CheckLeaveAbility(byte Nat);

/* AI */
__declspec(dllimport) void RunAI(byte Nat);
__declspec(dllimport) void RunAIWithPeasants(byte Nat, char* P_Name);
__declspec(dllimport) void StartAI(byte Nat, char* Name, int Land, int Money, int ResOnMap, int Difficulty);
__declspec(dllimport) void DoNotUseSelInAI(byte Nat);
__declspec(dllimport) void SetAIProperty(byte NAT, int Prop, int Val);
__declspec(dllimport) int  AI_Torg(byte SellRes, byte BuyRes, int SellAmount);
__declspec(dllimport) int  GetAINation(void);
__declspec(dllimport) void SetAIRegister(int Reg, int Val);
__declspec(dllimport) int  GetAIRegister(int Reg);
__declspec(dllimport) int  GetDifficulty(void);
__declspec(dllimport) int  GetStartRes(void);
__declspec(dllimport) int  GetResOnMap(void);
__declspec(dllimport) int  GetLandType(void);
__declspec(dllimport) int  GetRandomIndex(void);

/* AI Economy */
__declspec(dllimport) BOOL TryUnit(GAMEOBJ* UnitType, int Max, byte CostPercent, byte Probability);
__declspec(dllimport) BOOL TryUpgrade(GAMEOBJ* Upgrade, int CostPercent, int Probability);
__declspec(dllimport) void SetMineBalanse(int N, word* Bal);
__declspec(dllimport) void SetPDistribution(int OnFood, int OnWood, int OnStone);
__declspec(dllimport) void SetDefSettings(int p1, int p2);
__declspec(dllimport) void AssignAmountOfMineUpgrades(int MU);
__declspec(dllimport) BOOL AssignMineUpgrade(word U, char* Str, word val);
__declspec(dllimport) void AssignMine(char* Name);
__declspec(dllimport) void AssignPeasant(char* Name);
__declspec(dllimport) void AssignHouse(char* Name);
__declspec(dllimport) void AssignWall(char* Name);
__declspec(dllimport) void AssignFormUnit(char* Name);
__declspec(dllimport) void SET_MINE_CAPTURE_RADIUS(int x);
__declspec(dllimport) void SET_MINE_UPGRADE1_RADIUS(int x);
__declspec(dllimport) void SET_MINE_UPGRADE2_RADIUS(int x);
__declspec(dllimport) void SET_DEFAULT_MAX_WORKERS(int x);
__declspec(dllimport) void SET_MIN_PEASANT_BRIGADE(int x);
__declspec(dllimport) int  GetMoney(byte id);
__declspec(dllimport) int  GetUnits(GAMEOBJ* UnitType);
__declspec(dllimport) int  GetReadyUnits(GAMEOBJ* UnitType);
__declspec(dllimport) int  GetMaxPeasantsInMines(void);
__declspec(dllimport) int  GetUnitsByUsage(byte Nat, byte Usage);
__declspec(dllimport) BOOL UpgIsDone(GAMEOBJ* Upgrade);
__declspec(dllimport) BOOL UpgIsRun(GAMEOBJ* Upgrade);
__declspec(dllimport) BOOL FieldExist(void);
__declspec(dllimport) void SetUpgradeLock(byte Res, byte Val);
__declspec(dllimport) int  GetDied(GAMEOBJ* UnitType, byte Nation);
__declspec(dllimport) BOOL IsUpgradeDoing(GAMEOBJ* Upgrade, byte Nation);
__declspec(dllimport) BOOL IsUpgradeEnabled(GAMEOBJ* Upgrade, byte Nation);
__declspec(dllimport) void SetMinesBuildingRules(int* Table, int NElm);
__declspec(dllimport) void SetMinesUpgradeRules(int* Table);
__declspec(dllimport) void SetDefenseState(byte State);
__declspec(dllimport) int  GetTorgResult(byte SellRes, byte BuyRes, int SellAmount);
__declspec(dllimport) int  GetExtraction(byte ResID);
__declspec(dllimport) int  GetMaxPeaceTime(void);
__declspec(dllimport) int  GetPeaceTimeLeft(void);

/* Nation */
__declspec(dllimport) void AssignNation(byte Src, byte Dst);
__declspec(dllimport) int  GetMyNation(void);
__declspec(dllimport) BOOL NationIsErased(byte Nat);
__declspec(dllimport) void SetPlayerName(byte Nat, char* ID);
__declspec(dllimport) int  GetDiff(byte NI);

/* Mission flow */
__declspec(dllimport) void DisableMission(char MISSID);
__declspec(dllimport) void EnableMission(char MISSID);
__declspec(dllimport) void SetVictoryText(char* ID);
__declspec(dllimport) void SetLooseText(char* ID);
__declspec(dllimport) void ShowVictory(void);
__declspec(dllimport) void LooseGame(void);
__declspec(dllimport) void SetStandartVictory(void);
__declspec(dllimport) void SetTutorial(BOOL State);
__declspec(dllimport) BOOL GetQuestPressed(void);

/* UI */
__declspec(dllimport) void ShowCentralText(char* ID, int time);
__declspec(dllimport) void ShowPage(char* Name);
__declspec(dllimport) void ShowPageParam(char* Name, ...);
__declspec(dllimport) BOOL AskQuestion(char* Name);
__declspec(dllimport) int  AskComplexQuestion(int Nx, char* Name1, byte or1, char* Name2, byte or2, char* Quest);
__declspec(dllimport) int  AskMultilineQuestion(int Nx, char* Name1, byte or1, char* Quest);
__declspec(dllimport) void HINT(GAMEOBJ* Hint, int time);
__declspec(dllimport) void DoMessagesBrief(void);
__declspec(dllimport) void RefreshScreen(void);
__declspec(dllimport) void SelectBuildingsInZone(byte NI, GAMEOBJ* Zone, GAMEOBJ* UTP, BOOL Add);
__declspec(dllimport) void PastePiece(GAMEOBJ* Zone, char* Name);

/* DLL entry points (exported by each DLL) */
/* void __cdecl OnInit(void);          */
/* void __cdecl ProcessScenary(void);  */

#ifdef __cplusplus
}
#endif

#endif /* GAME_API_H */
