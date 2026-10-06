/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038a5da8; end: 1038a5daf;  */

undefined8 * FUN_1038a5da8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1038a5db0; end: 1038a5e53;  */

int FUN_1038a5db0(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x10] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038a5e54; end: 1038a5e8b;  */

void FUN_1038a5e54(undefined8 param_1)

{
  if (lRam0000000112fa6408 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e786d2c);
  return;
}



/* Entry: 1038a5e8c; end: 1038a5f5b;  */

long * FUN_1038a5e8c(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    (*pcVar7)(param_1,param_2,lVar3);
    (*pcVar7)((long)param_1 + (long)*(int *)(param_3 + 0x14),
              (long)param_2 + (long)*(int *)(param_3 + 0x14),lVar3);
    iVar1 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar6 = *(undefined8 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar6;
    uVar5 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) = uVar5;
    func_0x000107c61434();
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar5);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1038a5f5c; end: 1038a5fd3;  */

/* WARNING: Possible PIC construction at 0x0001038a5fac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a5fb0) */

void FUN_1038a5f5c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  pcVar2 = *(code **)(*(long *)(lVar1 + -8) + 8);
  (*pcVar2)(param_1,lVar1);
  (*pcVar2)(param_1 + *(int *)(param_2 + 0x14),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  return;
}



/* Entry: 1038a5fd4; end: 1038a6277;  */

long FUN_1038a5fd4(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  (*pcVar5)(param_1,param_2,lVar2);
  (*pcVar5)(param_1 + *(int *)(param_3 + 0x14),param_2 + *(int *)(param_3 + 0x14),lVar2);
  iVar1 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar4 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = uVar4;
  uVar3 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x20)) = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1038a6278; end: 1038a628f;  */

void FUN_1038a6278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1038a6290; end: 1038a630b;  */

void FUN_1038a6290(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBbWV_11034d660 + 0x40;
    lStack_40 = lStack_48;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    func_0x000107c6153c(param_1,0x100,5,&lStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 1038a630c; end: 1038a631b; -[DailyGameBadgingServices badgeInfoProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a630c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa6470));
  return;
}



/* Entry: 1038a631c; end: 1038a63b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a631c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa6458) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6450) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6470) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6460) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6468) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038a63b8; end: 1038a6417; -[DailyGameBadgingServices init] */

void FUN_1038a63b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DailyGameBadgingServicesAPI.DailyGameBadgingServices",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a63e4);
  (*pcVar1)();
}



/* Entry: 1038a6418; end: 1038a647f; -[DailyGameBadgingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a6418(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa6450));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa6458));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa6460));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa6468));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa6470));
  return;
}



/* Entry: 1038a6480; end: 1038a648f; -[SCDailyGameBadgeInfo isBadged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038a6480(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fa64a0);
}



/* Entry: 1038a6490; end: 1038a64a7; -[SCDailyGameBadgeInfo consecutiveDaysPlayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038a6490(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa64a8);
}



/* Entry: 1038a64a8; end: 1038a65d3; -[SCDailyGameBadgeInfo initWithIsBadged:consecutiveDaysPlayed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a64a8(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112fa64a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fa64a8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038a65d4; end: 1038a65d7; -[SCDailyGameBadgeInfo copyWithZone:] */

void FUN_1038a65d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038a65d8; end: 1038a65f3; -[SCDailyGameBadgeInfo description] */

void FUN_1038a65d8(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038a65f4; end: 1038a668f; -[SCDailyGameBadgeInfo init] */

void FUN_1038a65f4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "DailyGameBadgingServicesAPI/DailyGameBadgeInfoWrapper.swift",0x3b,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a663c);
  (*pcVar1)();
}



/* Entry: 1038a6690; end: 1038a6697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a6690(undefined1 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fa64a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa64a8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038a6698; end: 1038a6747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038a6698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  func_0x000107c610f8();
  func_0x00010076e028(param_1,unaff_x20 + _DAT_112fa64d8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa64e0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa64e8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar2;
}



/* Entry: 1038a6748; end: 1038a67a7; -[_TtC33GamesExplorerPresentationServices39GamesExplorerActionBarPresenterServices init] */

void FUN_1038a6748(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerPresentationServices.GamesExplorerActionBarPresenterServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a6774);
  (*pcVar1)();
}



/* Entry: 1038a67a8; end: 1038a67ef; -[_TtC33GamesExplorerPresentationServices39GamesExplorerActionBarPresenterServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038a67d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a67d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a67a8(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112fa64d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa64e0));
  return;
}



/* Entry: 1038a67f0; end: 1038a6803;  */

bool FUN_1038a67f0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038a6804; end: 1038a68db;  */

void FUN_1038a6804(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038a68dc; end: 1038a68e7;  */

void FUN_1038a68dc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1038a68e8; end: 1038a6923; -[GamesExplorerRenderedLensSelectionInstallation init] */

void FUN_1038a68e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038a6924; end: 1038a6957;  */

void FUN_1038a6924(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038a6958; end: 1038a696b;  */

undefined1  [16] FUN_1038a6958(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1038a696c; end: 1038a69ab;  */

void FUN_1038a696c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa6518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc198e0;
  func_0x000107c61520(&UNK_10dc198e0,&UNK_1106a2978);
  puRam0000000112fa6518 = puVar1;
  return;
}



/* Entry: 1038a69ac; end: 1038a69bb;  */

undefined1  [16] FUN_1038a69ac(void)

{
  return ZEXT816(0x1106a2978);
}



/* Entry: 1038a69bc; end: 1038a69db;  */

void FUN_1038a69bc(void)

{
  func_0x000107c61168(&PTR_PTR_1128f8cb8);
  return;
}



/* Entry: 1038a69dc; end: 1038a6ca3;  */

int FUN_1038a69dc(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1038a6ca4; end: 1038a6cbf;  */

undefined1  [16] FUN_1038a6ca4(void)

{
  return ZEXT816(0);
}



/* Entry: 1038a6cc0; end: 1038a6ecf;  */

long FUN_1038a6cc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038a6ed0; end: 1038a6fd3;  */

bool FUN_1038a6ed0(double *param_1,double *param_2)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = *param_2;
  cVar1 = *(char *)(param_2 + 1);
  if (*(char *)(param_1 + 1) == '\x01') {
    bVar2 = cVar1 == '\x01' && dVar3 == 0.0;
    if (*param_1 != 0.0) {
      bVar2 = cVar1 == '\x01' && dVar3 != 0.0;
    }
    return bVar2;
  }
  if ((cVar1 != '\x01') && (*param_1 == dVar3)) {
    return true;
  }
  return false;
}



/* Entry: 1038a6fd4; end: 1038a706b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a6fd4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa6548) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038a706c; end: 1038a70cb; -[GamesExplorerPresentationServices init] */

void FUN_1038a706c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerPresentationServices.GamesExplorerPresentationServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a7098);
  (*pcVar1)();
}



/* Entry: 1038a70cc; end: 1038a70df; -[GamesExplorerPresentationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a70cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa6548));
  return;
}



/* Entry: 1038a70e0; end: 1038a7143;  */

long FUN_1038a70e0(void)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61614(unaff_x20 + 0x10,0);
  return unaff_x20;
}



/* Entry: 1038a7144; end: 1038a719f;  */

void FUN_1038a7144(void)

{
  long unaff_x20;
  
  func_0x0001038a7120(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038a71a0; end: 1038a72eb;  */

void FUN_1038a71a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61604(unaff_x20 + 0x10,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1038a72ec; end: 1038a72f7;  */

void FUN_1038a72ec(void)

{
  return;
}



/* Entry: 1038a72f8; end: 1038a7317;  */

void FUN_1038a72f8(void)

{
  func_0x000107c61168(&PTR_PTR_112fa65b8);
  return;
}



/* Entry: 1038a7318; end: 1038a7367;  */

void FUN_1038a7318(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x10,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 1038a7368; end: 1038a73b3; -[GamesExplorerConversationContext conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a7368(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa6748);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fa6748))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038a73b4; end: 1038a740f; -[GamesExplorerConversationContext recipientUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a73b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fa6750))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fa6750);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038a7410; end: 1038a7507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a7410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6748);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6750);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038a7508; end: 1038a75a7; -[GamesExplorerConversationContext initWithConversationId:recipientUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a7508(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_4 == 0) {
    param_4 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa6748);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_112fa6750);
  *plVar2 = param_4;
  plVar2[1] = lVar4;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038a75a8; end: 1038a7607; -[GamesExplorerConversationContext init] */

void FUN_1038a75a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerLaunchingServices.GamesExplorerConversationContext",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a75d4);
  (*pcVar1)();
}



/* Entry: 1038a7608; end: 1038a7647; -[GamesExplorerConversationContext .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038a7628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a762c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a7608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa6748 + 8))
  ;
  return;
}



/* Entry: 1038a7648; end: 1038a765b;  */

bool FUN_1038a7648(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038a765c; end: 1038a7733;  */

void FUN_1038a765c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038a7734; end: 1038a7753;  */

void FUN_1038a7734(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1038a7754; end: 1038a77b3;  */

void FUN_1038a7754(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa6758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc19d30;
  func_0x000107c61520(&UNK_10dc19d30,&UNK_1106a2d58);
  puRam0000000112fa6758 = puVar1;
  return;
}



/* Entry: 1038a77b4; end: 1038a77c3;  */

undefined1  [16] FUN_1038a77b4(void)

{
  return ZEXT816(0x1106a2d58);
}



/* Entry: 1038a77c4; end: 1038a785b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a77c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa6788) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038a785c; end: 1038a78bb; -[GamesExplorerLaunchingServices init] */

void FUN_1038a785c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerLaunchingServices.GamesExplorerLaunchingServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a7888);
  (*pcVar1)();
}



/* Entry: 1038a78bc; end: 1038a78cb; -[GamesExplorerLaunchingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a78bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa6788));
  return;
}



/* Entry: 1038a78cc; end: 1038a7953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038a78cc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100ad22e0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fa67b8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fa67c0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a7954);
  (*pcVar1)();
}



/* Entry: 1038a7954; end: 1038a79b3; -[_TtC34MapsUserNavigationScopeGraphBridge49MapsUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1038a7954(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapsUserNavigationScopeGraphBridge.MapsUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a7980);
  (*pcVar1)();
}



/* Entry: 1038a79b4; end: 1038a79eb; -[_TtC34MapsUserNavigationScopeGraphBridge49MapsUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038a79d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a79d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a79b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa67b8));
  return;
}



/* Entry: 1038a79ec; end: 1038a7a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a79ec(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fa67c0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fa67b8));
  return;
}



/* Entry: 1038a7a14; end: 1038a7aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038a7a14(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fa7c30);
  *(undefined8 *)(unaff_x20 + _DAT_112fa67f0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa67f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1038a7ab0; end: 1038a7b0f; -[_TtC34MapsUserNavigationScopeGraphBridge37SCMapMessagingServicesSaberEntryPoint init] */

void FUN_1038a7ab0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapsUserNavigationScopeGraphBridge.SCMapMessagingServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a7adc);
  (*pcVar1)();
}



/* Entry: 1038a7b10; end: 1038a7ba3; -[_TtC34MapsUserNavigationScopeGraphBridge37SCMapMessagingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a7b10(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa67f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa67f8));
  return;
}



/* Entry: 1038a7ba4; end: 1038a7bab;  */

undefined8 FUN_1038a7ba4(void)

{
  return 0;
}



/* Entry: 1038a7bac; end: 1038a7c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a7bac(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fa7bb8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038a7c10; end: 1038a7c17;  */

void FUN_1038a7c10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038a7c18; end: 1038a7cb7;  */

void FUN_1038a7c18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038a7cb8; end: 1038a7cd7;  */

void FUN_1038a7cb8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038a7cd8; end: 1038a7d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a7cd8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fa7bc0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038a7d3c; end: 1038a7d43;  */

void FUN_1038a7d3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038a7d44; end: 1038a7de3;  */

void FUN_1038a7d44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038a7de4; end: 1038a7e03;  */

void FUN_1038a7de4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038a7e04; end: 1038a7e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a7e04(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fa7bd0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038a7e68; end: 1038a7e6f;  */

void FUN_1038a7e68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038a7e70; end: 1038a7f0f;  */

void FUN_1038a7e70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038a7f10; end: 1038a7f2f;  */

void FUN_1038a7f10(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038a7f30; end: 1038a7f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a7f30(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fa7bd8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038a7f94; end: 1038a7f9b;  */

void FUN_1038a7f94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038a7f9c; end: 1038a803b;  */

void FUN_1038a7f9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038a803c; end: 1038a805b;  */

void FUN_1038a803c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038a805c; end: 1038a80bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a805c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fa7be0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038a80c0; end: 1038a80c7;  */

void FUN_1038a80c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038a80c8; end: 1038a8167;  */

void FUN_1038a80c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038a8168; end: 1038a8187;  */

void FUN_1038a8168(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038a8188; end: 1038a81eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a8188(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fa7bc8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038a81ec; end: 1038a81f3;  */

void FUN_1038a81ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038a81f4; end: 1038a8293;  */

void FUN_1038a81f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038a8294; end: 1038a82b3;  */

void FUN_1038a8294(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038a82b4; end: 1038a8317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a82b4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fa7be8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038a8318; end: 1038a831f;  */

void FUN_1038a8318(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038a8320; end: 1038a83bf;  */

void FUN_1038a8320(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038a83c0; end: 1038a83df;  */

void FUN_1038a83c0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038a83e0; end: 1038a8443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a83e0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fa7bf0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038a8444; end: 1038a844b;  */

void FUN_1038a8444(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038a844c; end: 1038a84eb;  */

void FUN_1038a844c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038a84ec; end: 1038a850b;  */

void FUN_1038a84ec(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038a850c; end: 1038a856f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a850c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fa7bf8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038a8570; end: 1038a8577;  */

void FUN_1038a8570(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


