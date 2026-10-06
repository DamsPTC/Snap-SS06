/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103aa59e4; end: 103aa59f3; -[_TtC48ComposerPeopleBridgeLastInteractionStateServices48ComposerPeopleBridgeLastInteractionStateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa59e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2068));
  return;
}



/* Entry: 103aa59f4; end: 103aa5a27; -[SCSendToRankingConfigurationServices configuration] */

void FUN_103aa59f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103aa5a28();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aa5a28; end: 103aa5ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_103aa5a28(void)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fe20a0;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112fe20a0);
  pcVar3 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    uVar4 = 0x112fe20a8;
    func_0x0001000285a8(0x112fe20a8,&UNK_10dc4a750);
    pcVar2 = FUN_103aa5b0c;
    func_0x0001000cb480(FUN_103aa5b0c,0,uVar4);
    pcVar3 = pcVar2;
    func_0x0001003a5b88();
    func_0x000107c61574(pcVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c61174(pcVar3);
    func_0x000107c61170(uVar4);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c61174(pcVar2);
  return pcVar3;
}



/* Entry: 103aa5ad8; end: 103aa5b0b; -[SCSendToRankingConfigurationServices setConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa5ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fe20a0);
  *(undefined8 *)(param_1 + _DAT_112fe20a0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103aa5b0c; end: 103aa5b17;  */

void FUN_103aa5b0c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 103aa5b18; end: 103aa5bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa5b18(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe20a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2098) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aa5bc8; end: 103aa5c27; -[SCSendToRankingConfigurationServices init] */

void FUN_103aa5bc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToRankingConfigurationServices.SCSendToRankingConfigurationServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa5bf4);
  (*pcVar1)();
}



/* Entry: 103aa5c28; end: 103aa5c5f; -[SCSendToRankingConfigurationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa5c28(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe2098));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe20a0));
  return;
}



/* Entry: 103aa5c60; end: 103aa5d27;  */

ulong FUN_103aa5c60(int param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (1 < param_1) {
    if (param_1 == 2) {
      lVar2 = 0x48;
    }
    else if (param_1 == 3) {
      lVar2 = 0x50;
    }
    else {
      if (param_1 != 4) {
        return 0;
      }
      lVar2 = 0x58;
    }
LAB_103aa5d0c:
                    /* WARNING: Could not recover jumptable at 0x000103aa5d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + lVar2))(param_2,param_3);
    return param_2;
  }
  if (param_1 == 0) {
    uVar1 = param_2;
    (**(code **)(param_3 + 0x30))(param_2,param_3);
    if ((uVar1 & 1) == 0) {
      lVar2 = 0x38;
      goto LAB_103aa5d0c;
    }
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar1 = param_2;
    (**(code **)(param_3 + 0x30))(param_2,param_3);
    if ((uVar1 & 1) == 0) {
      lVar2 = 0x40;
      goto LAB_103aa5d0c;
    }
  }
  return 1;
}



/* Entry: 103aa5d28; end: 103aa5db7;  */

long FUN_103aa5d28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103aa5db8; end: 103aa5e23;  */

undefined8 * FUN_103aa5db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103aa5e24; end: 103aa5e67;  */

undefined8 * FUN_103aa5e24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103aa5e68; end: 103aa5eff;  */

int FUN_103aa5e68(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103aa5f00; end: 103aa5f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa5f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe20d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe20e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fe20e8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aa5f74; end: 103aa6003; -[SCSendToRankingRecentsPersistenceServices initWithModelPersistenceService:featuresPersistenceService:contextualFeaturesPersistenceService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa5f74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fe20d8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fe20e0) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fe20e8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103aa6004; end: 103aa6063; -[SCSendToRankingRecentsPersistenceServices init] */

void FUN_103aa6004(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToRankingRecentsPersistenceServices.SCSendToRankingRecentsPersistenceServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa6030);
  (*pcVar1)();
}



/* Entry: 103aa6064; end: 103aa60ab; -[SCSendToRankingRecentsPersistenceServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aa6080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa6084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa6064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe20d8));
  return;
}



/* Entry: 103aa60ac; end: 103aa60d7;  */

void FUN_103aa60ac(void)

{
  func_0x0001000285a8(0x112fe2158,&UNK_10dc4a800);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 103aa60d8; end: 103aa60ef;  */

bool FUN_103aa60d8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103aa60f0; end: 103aa612f;  */

void FUN_103aa60f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe2160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4a808;
  func_0x000107c61520(&UNK_10dc4a808,&UNK_1106c9200);
  puRam0000000112fe2160 = puVar1;
  return;
}



/* Entry: 103aa6130; end: 103aa61db;  */

void FUN_103aa6130(void)

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



/* Entry: 103aa61dc; end: 103aa6207;  */

void FUN_103aa61dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103aa6208; end: 103aa6257;  */

void FUN_103aa6208(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fe2168 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fe2170;
  func_0x00010002969c(0x112fe2170,&UNK_10dc4a8a8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112fe2168 = puVar2;
  return;
}



/* Entry: 103aa6258; end: 103aa6297;  */

void FUN_103aa6258(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fe2158;
  func_0x0001000285a8(0x112fe2158,&UNK_10dc4a800);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103aa6298; end: 103aa62a3;  */

undefined * FUN_103aa6298(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 103aa62a4; end: 103aa6337;  */

void FUN_103aa62a4(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lStack_18;
  
  uVar2 = 0xe900000000000067;
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0x6e697265746c6966;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0x6e696b6e61726572;
  }
  else {
    if (lStack_18 != 1) {
      func_0x000107c60614(param_2,&lStack_18,param_2,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa6338);
      (*pcVar1)();
    }
    uVar2 = 0xe700000000000000;
    uVar3 = 0x676e69726f6373;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103aa6338; end: 103aa6347;  */

undefined1  [16] FUN_103aa6338(void)

{
  return ZEXT816(0x1106c9200);
}



/* Entry: 103aa6348; end: 103aa6367; -[SCSendToRankingRecentsServices recentsRankingServiceFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa6348(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fe21b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aa6368; end: 103aa63ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa6368(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe21b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aa6400; end: 103aa645f; -[SCSendToRankingRecentsServices init] */

void FUN_103aa6400(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToRankingRecentsServices.SCSendToRankingRecentsServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa642c);
  (*pcVar1)();
}



/* Entry: 103aa6460; end: 103aa646f; -[SCSendToRankingRecentsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa6460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fe21b8));
  return;
}



/* Entry: 103aa6470; end: 103aa64ff;  */

void FUN_103aa6470(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *(byte *)(unaff_x20 + 8);
  func_0x000107c6068c(auStack_68,0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    if (bVar1 != 2) {
      func_0x000107c60690(3);
      goto LAB_103aa64e8;
    }
    uVar2 = 2;
  }
  func_0x000107c60690(uVar2);
  func_0x000107c6011c(auStack_68);
LAB_103aa64e8:
  func_0x000107c606a8();
  return;
}



/* Entry: 103aa6500; end: 103aa6577;  */

void FUN_103aa6500(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + 8);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    if (bVar1 != 2) {
      func_0x000107c60690(3);
      return;
    }
    uVar2 = 2;
  }
  func_0x000107c60690(uVar2);
  func_0x000107c6011c(param_1);
  return;
}



/* Entry: 103aa6578; end: 103aa6603;  */

void FUN_103aa6578(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *(byte *)(unaff_x20 + 8);
  func_0x000107c6068c(auStack_68);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    if (bVar1 != 2) {
      func_0x000107c60690(3);
      goto LAB_103aa65ec;
    }
    uVar2 = 2;
  }
  func_0x000107c60690(uVar2);
  func_0x000107c6011c(auStack_68);
LAB_103aa65ec:
  func_0x000107c606a8();
  return;
}



/* Entry: 103aa6604; end: 103aa661b;  */

uint FUN_103aa6604(undefined8 *param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  lVar5 = *param_2;
  cVar1 = (char)param_2[1];
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 != '\0') goto LAB_103aa6f6c;
    }
    else if (cVar1 != '\x01') goto LAB_103aa6f6c;
LAB_103aa6f2c:
    uVar4 = 0;
    func_0x0001007bbbf8(0);
    func_0x000107c60118(uVar6,lVar5,uVar4);
    uVar3 = (uint)uVar6 & 1;
  }
  else {
    if (bVar2 == 2) {
      if (cVar1 == '\x02') goto LAB_103aa6f2c;
    }
    else if ((cVar1 == '\x03') && (lVar5 == 0)) {
      return 1;
    }
LAB_103aa6f6c:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 103aa661c; end: 103aa67d3;  */

void FUN_103aa661c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 2);
  func_0x000107c6068c(auStack_78,0);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    if (bVar3 != 2) {
      func_0x000107c60690(3);
      goto LAB_103aa669c;
    }
    uVar4 = 2;
  }
  func_0x000107c60690(uVar4);
  func_0x000107c5fb58(auStack_78,uVar1,uVar2);
LAB_103aa669c:
  func_0x000107c606a8();
  return;
}



/* Entry: 103aa67d4; end: 103aa67ef;  */

long FUN_103aa67d4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  
  lVar6 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *param_2;
  lVar3 = param_2[1];
  cVar4 = (char)param_2[2];
  bVar5 = *(byte *)(param_1 + 2);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      if (cVar4 != '\0') {
        return 0;
      }
      if ((lVar6 == lVar1) && (lVar2 == lVar3)) {
        return 1;
      }
    }
    else {
      if (cVar4 != '\x01') {
        return 0;
      }
      if ((lVar6 == lVar1) && (lVar2 == lVar3)) {
        return 1;
      }
    }
__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(lVar6,lVar2,lVar1,lVar3,0);
    return lVar6;
  }
  if (bVar5 == 2) {
    if (cVar4 == '\x02') {
      if ((lVar6 == lVar1) && (lVar2 == lVar3)) {
        return 1;
      }
      goto 
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF;
    }
  }
  else if ((cVar4 == '\x03') && (lVar3 == 0 && lVar1 == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 103aa67f0; end: 103aa6b43;  */

void FUN_103aa67f0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  
  uStack_88 = 0;
  uStack_80 = 0;
  cStack_78 = -1;
  uStack_98 = 0;
  cStack_90 = -1;
  puVar11 = &UNK_1106c9360;
  func_0x000107c613fc(&UNK_1106c9360,0x20,7);
  *(undefined8 **)(puVar11 + 0x10) = &uStack_88;
  *(undefined8 **)(puVar11 + 0x18) = &uStack_98;
  puVar12 = &UNK_1106c9388;
  func_0x000107c613fc(&UNK_1106c9388,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = 0x103aa7030;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a8 = FUN_103aa7038;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_10131cd50;
  puStack_b0 = &UNK_1106c93a0;
  ppuVar13 = &puStack_c8;
  puStack_a0 = puVar12;
  func_0x000107c60bc4();
  puVar14 = puStack_a0;
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar14);
  puVar14 = &UNK_1106c93d8;
  func_0x000107c613fc(&UNK_1106c93d8,0x20,7);
  *(undefined8 **)(puVar14 + 0x10) = &uStack_88;
  *(undefined8 **)(puVar14 + 0x18) = &uStack_98;
  puVar15 = &UNK_1106c9400;
  func_0x000107c613fc(&UNK_1106c9400,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = 0x103aa7074;
  *(undefined **)(puVar15 + 0x18) = puVar14;
  pcStack_a8 = FUN_103aa707c;
  puStack_c8 = puVar5;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_10131ce88;
  puStack_b0 = &UNK_1106c9418;
  ppuVar16 = &puStack_c8;
  puStack_a0 = puVar15;
  func_0x000107c60bc4(ppuVar16);
  puVar17 = puStack_a0;
  func_0x000107c6157c(puVar15);
  func_0x000107c61574(puVar17);
  puVar17 = &UNK_1106c9450;
  func_0x000107c613fc(&UNK_1106c9450,0x20,7);
  *(undefined8 **)(puVar17 + 0x10) = &uStack_88;
  *(undefined8 **)(puVar17 + 0x18) = &uStack_98;
  puVar18 = &UNK_1106c9478;
  func_0x000107c613fc(&UNK_1106c9478,0x20,7);
  *(code **)(puVar18 + 0x10) = FUN_103aa709c;
  *(undefined **)(puVar18 + 0x18) = puVar17;
  pcStack_a8 = FUN_103aa70a4;
  puStack_c8 = puVar5;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_102424808;
  puStack_b0 = &UNK_1106c9490;
  ppuVar19 = &puStack_c8;
  puStack_a0 = puVar18;
  func_0x000107c60bc4(ppuVar19);
  puVar5 = puStack_a0;
  func_0x000107c6157c(puVar18);
  func_0x000107c61574(puVar5);
  func_0x000107c4c72c(param_2);
  func_0x000107c60bd0(ppuVar19);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c60bd0(ppuVar13);
  cVar8 = cStack_78;
  uVar7 = uStack_80;
  uVar6 = uStack_88;
  cVar2 = cStack_90;
  uVar4 = uStack_98;
  func_0x000107c61574(puVar11);
  puVar11 = puVar12;
  func_0x000107c61544(puVar12,"",0x5b,0x29,0x24,1);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(puVar12);
  if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103aa6b3c);
    (*pcVar9)();
  }
  puVar11 = puVar15;
  func_0x000107c61544(puVar15,"",0x5b,0x31,0x1b,1);
  func_0x000107c61574(puVar17);
  func_0x000107c61574(puVar15);
  if (((ulong)puVar11 & 1) == 0) {
    puVar11 = puVar18;
    func_0x000107c61544(puVar18,"",0x5b,0x34,0x22,1);
    func_0x000107c61574(puVar18);
    if (((ulong)puVar11 & 1) == 0) {
      cVar1 = '\x03';
      if (cVar2 != -1) {
        cVar1 = cVar2;
      }
      uVar3 = 0;
      if (cVar2 != -1) {
        uVar3 = uVar4;
      }
      bVar10 = cVar8 != -1;
      uVar4 = 0;
      if (bVar10) {
        uVar4 = uVar6;
      }
      *param_1 = param_2;
      param_1[1] = uVar4;
      uVar4 = 0;
      if (bVar10) {
        uVar4 = uVar7;
      }
      param_1[2] = uVar4;
      cVar2 = '\x03';
      if (bVar10) {
        cVar2 = cVar8;
      }
      *(char *)(param_1 + 3) = cVar2;
      param_1[4] = uVar3;
      *(char *)(param_1 + 5) = cVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103aa6b44);
    (*pcVar9)();
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x103aa6b40);
  (*pcVar9)();
}



/* Entry: 103aa6b44; end: 103aa6d1f;  */

/* WARNING: Possible PIC construction at 0x000103aa6b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa6b8c) */
/* WARNING: Removing unreachable block (ram,0x000103aa784c) */
/* WARNING: Removing unreachable block (ram,0x000103aa785c) */
/* WARNING: Removing unreachable block (ram,0x000103aa7858) */

void FUN_103aa6b44(long param_1)

{
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103aa6d20; end: 103aa6d23;  */

undefined8 FUN_103aa6d20(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  
  func_0x0001007bbbf8(0);
  uVar3 = *param_1;
  func_0x000107c60118(uVar3,*param_2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar3 = param_1[1];
  bVar1 = (byte)param_1[3];
  cVar2 = *(char *)(param_2 + 3);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (cVar2 != '\0') {
        return 0;
      }
    }
    else if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    if (bVar1 != 2) {
      if (cVar2 != '\x03') {
        return 0;
      }
      if (param_2[1] != 0) {
        return 0;
      }
      if (param_2[2] != 0) {
        return 0;
      }
      goto LAB_103aa716c;
    }
    if (cVar2 != '\x02') {
      return 0;
    }
  }
  if (((uVar3 != param_2[1]) || (param_1[2] != param_2[2])) &&
     (func_0x000107c605b8(), (uVar3 & 1) == 0)) {
    return 0;
  }
LAB_103aa716c:
  uVar3 = param_1[4];
  bVar1 = (byte)param_1[5];
  cVar2 = *(char *)(param_2 + 5);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (cVar2 != '\0') {
        return 0;
      }
    }
    else if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    if (bVar1 != 2) {
      if (cVar2 != '\x03') {
        return 0;
      }
      if (param_2[4] == 0) {
        return 1;
      }
      return 0;
    }
    if (cVar2 != '\x02') {
      return 0;
    }
  }
  func_0x000107c60118();
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  return 0;
}



/* Entry: 103aa6d24; end: 103aa6e07;  */

void FUN_103aa6d24(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c6011c();
  uVar4 = *(undefined8 *)(unaff_x20 + 8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    if (bVar2 != 2) {
      func_0x000107c60690(3);
      goto LAB_103aa6da0;
    }
    uVar3 = 2;
  }
  func_0x000107c60690(uVar3);
  func_0x000107c5fb58(param_1,uVar4,uVar1);
LAB_103aa6da0:
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    if (bVar2 != 2) {
      func_0x000107c60690(3);
      return;
    }
    uVar4 = 2;
  }
  func_0x000107c60690(uVar4);
  func_0x000107c6011c(param_1);
  return;
}



/* Entry: 103aa6e08; end: 103aa6e43;  */

void FUN_103aa6e08(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_103aa6d24(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 103aa6e44; end: 103aa6e47;  */

void FUN_103aa6e44(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c6011c();
  uVar4 = *(undefined8 *)(unaff_x20 + 8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    if (bVar2 != 2) {
      func_0x000107c60690(3);
      goto LAB_103aa6da0;
    }
    uVar3 = 2;
  }
  func_0x000107c60690(uVar3);
  func_0x000107c5fb58(param_1,uVar4,uVar1);
LAB_103aa6da0:
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    if (bVar2 != 2) {
      func_0x000107c60690(3);
      return;
    }
    uVar4 = 2;
  }
  func_0x000107c60690(uVar4);
  func_0x000107c6011c(param_1);
  return;
}



/* Entry: 103aa6e48; end: 103aa6e7f;  */

void FUN_103aa6e48(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_103aa6d24(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 103aa6e80; end: 103aa6e93;  */

void FUN_103aa6e80(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *param_1 = *(undefined8 *)(unaff_x20 + 8);
  param_1[1] = uVar1;
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  *(byte *)(param_1 + 2) = bVar2;
  if (bVar2 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
    return;
  }
  return;
}



/* Entry: 103aa6e94; end: 103aa6edb;  */

uint FUN_103aa6e94(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_103aa70c4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103aa6edc; end: 103aa6f7b;  */

uint FUN_103aa6edc(undefined8 param_1,byte param_2,long param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      if (param_4 != '\0') goto LAB_103aa6f6c;
    }
    else if (param_4 != '\x01') goto LAB_103aa6f6c;
LAB_103aa6f2c:
    uVar2 = 0;
    func_0x0001007bbbf8(0);
    func_0x000107c60118(param_1,param_3,uVar2);
    uVar1 = (uint)param_1 & 1;
  }
  else {
    if (param_2 == 2) {
      if (param_4 == '\x02') goto LAB_103aa6f2c;
    }
    else if ((param_4 == '\x03') && (param_3 == 0)) {
      return 1;
    }
LAB_103aa6f6c:
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 103aa6f7c; end: 103aa7037;  */

long FUN_103aa6f7c(long param_1,long param_2,byte param_3,long param_4,long param_5,char param_6)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 != '\0') {
        return 0;
      }
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
    }
    else {
      if (param_6 != '\x01') {
        return 0;
      }
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
    }
__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(param_1,param_2,param_4,param_5,0);
    return param_1;
  }
  if (param_3 == 2) {
    if (param_6 == '\x02') {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
      goto 
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF;
    }
  }
  else if ((param_6 == '\x03') && (param_5 == 0 && param_4 == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 103aa7038; end: 103aa7057;  */

void FUN_103aa7038(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103aa7058; end: 103aa707b;  */

void FUN_103aa7058(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103aa707c; end: 103aa709b;  */

void FUN_103aa707c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103aa709c; end: 103aa70a3;  */

/* WARNING: Possible PIC construction at 0x000103aa6cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa6cc0) */

void FUN_103aa709c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  plVar4 = *(long **)(unaff_x20 + 0x18);
  lVar7 = param_1;
  func_0x000107c44c54();
  func_0x000107c61180();
  if (lVar7 == 0) {
    uVar1 = *puVar2;
    uVar3 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    uVar5 = *(undefined1 *)(puVar2 + 2);
    *(undefined1 *)(puVar2 + 2) = 0xff;
    func_0x000103aa7838(uVar1,uVar3,uVar5);
    lVar7 = *plVar4;
    *plVar4 = param_1;
    lVar6 = plVar4[1];
    *(undefined1 *)(plVar4 + 1) = 2;
    func_0x000107c61174(param_1);
    if ((char)lVar6 == -1) {
      return;
    }
  }
  else {
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 103aa70a4; end: 103aa70c3;  */

void FUN_103aa70a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103aa70c4; end: 103aa71df;  */

undefined8 FUN_103aa70c4(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  
  func_0x0001007bbbf8(0);
  uVar3 = *param_1;
  func_0x000107c60118(uVar3,*param_2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar3 = param_1[1];
  bVar1 = (byte)param_1[3];
  cVar2 = *(char *)(param_2 + 3);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (cVar2 != '\0') {
        return 0;
      }
    }
    else if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    if (bVar1 != 2) {
      if (cVar2 != '\x03') {
        return 0;
      }
      if (param_2[1] != 0) {
        return 0;
      }
      if (param_2[2] != 0) {
        return 0;
      }
      goto LAB_103aa716c;
    }
    if (cVar2 != '\x02') {
      return 0;
    }
  }
  if (((uVar3 != param_2[1]) || (param_1[2] != param_2[2])) &&
     (func_0x000107c605b8(), (uVar3 & 1) == 0)) {
    return 0;
  }
LAB_103aa716c:
  uVar3 = param_1[4];
  bVar1 = (byte)param_1[5];
  cVar2 = *(char *)(param_2 + 5);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (cVar2 != '\0') {
        return 0;
      }
    }
    else if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    if (bVar1 != 2) {
      if (cVar2 != '\x03') {
        return 0;
      }
      if (param_2[4] == 0) {
        return 1;
      }
      return 0;
    }
    if (cVar2 != '\x02') {
      return 0;
    }
  }
  func_0x000107c60118();
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  return 0;
}



/* Entry: 103aa71e0; end: 103aa71e3;  */

void FUN_103aa71e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe21e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4a9a0;
  func_0x000107c61520(&UNK_10dc4a9a0,&UNK_1106c95c0);
  puRam0000000112fe21e8 = puVar1;
  return;
}



/* Entry: 103aa71e4; end: 103aa7223;  */

void FUN_103aa71e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe21e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4a9a0;
  func_0x000107c61520(&UNK_10dc4a9a0,&UNK_1106c95c0);
  puRam0000000112fe21e8 = puVar1;
  return;
}



/* Entry: 103aa7224; end: 103aa7227;  */

void FUN_103aa7224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe21f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4aa08;
  func_0x000107c61520(&UNK_10dc4aa08,&UNK_1106c9650);
  puRam0000000112fe21f0 = puVar1;
  return;
}



/* Entry: 103aa7228; end: 103aa7267;  */

void FUN_103aa7228(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe21f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4aa08;
  func_0x000107c61520(&UNK_10dc4aa08,&UNK_1106c9650);
  puRam0000000112fe21f0 = puVar1;
  return;
}



/* Entry: 103aa7268; end: 103aa726b;  */

void FUN_103aa7268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe21f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4aaa8;
  func_0x000107c61520(&UNK_10dc4aaa8,&UNK_1106c9520);
  puRam0000000112fe21f8 = puVar1;
  return;
}



/* Entry: 103aa726c; end: 103aa72ab;  */

void FUN_103aa726c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe21f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4aaa8;
  func_0x000107c61520(&UNK_10dc4aaa8,&UNK_1106c9520);
  puRam0000000112fe21f8 = puVar1;
  return;
}



/* Entry: 103aa72ac; end: 103aa72af;  */

void FUN_103aa72ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f908b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4a9c8;
  func_0x000107c61520(&UNK_10dc4a9c8,&UNK_1106c9650);
  puRam0000000112f908b8 = puVar1;
  return;
}



/* Entry: 103aa72b0; end: 103aa730f;  */

long FUN_103aa72b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103aa7310; end: 103aa741b;  */

undefined8 * FUN_103aa7310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar3 = param_2[2];
  uVar2 = *(undefined1 *)(param_2 + 3);
  func_0x000107c61174();
  func_0x000103765724(uVar1,uVar3,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 5);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = uVar2;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 103aa741c; end: 103aa7483;  */

undefined8 * FUN_103aa741c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar4);
  uVar2 = *(undefined1 *)(param_2 + 3);
  uVar4 = param_1[1];
  uVar1 = param_1[2];
  uVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar5;
  uVar3 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar2;
  func_0x00010376573c(uVar4,uVar1,uVar3);
  uVar2 = *(undefined1 *)(param_2 + 5);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = uVar2;
  func_0x000107c61170(uVar4);
  return param_1;
}



/* Entry: 103aa7484; end: 103aa752f;  */

int FUN_103aa7484(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103aa7530; end: 103aa75a7;  */

undefined8 * FUN_103aa7530(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *param_1;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 103aa75a8; end: 103aa7687;  */

int FUN_103aa75a8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103aa7688; end: 103aa7723;  */

undefined8 * FUN_103aa7688(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000103765724(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103aa7724; end: 103aa7767;  */

undefined8 * FUN_103aa7724(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010376573c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103aa7768; end: 103aa787f;  */

int FUN_103aa7768(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103aa7880; end: 103aa79af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa7880(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe2218) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe2200);
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar2 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x19) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2208) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2210) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aa79b0; end: 103aa7a0f; -[SCSendToRankingRecipientArtifacts init] */

void FUN_103aa79b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToRankingRecentsServices.SendToRankingRecipientArtifacts",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa79dc);
  (*pcVar1)();
}



/* Entry: 103aa7a10; end: 103aa7a8f; -[SCSendToRankingRecipientArtifacts .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aa7a6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa7a70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa7a10(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112fe2200);
  uVar2 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  uVar3 = *(undefined1 *)(puVar1 + 3);
  func_0x000107c61170(*puVar1);
  func_0x00010376573c(uVar2,uVar4,uVar3);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fe2210));
  return;
}



/* Entry: 103aa7a90; end: 103aa7aaf;  */

void FUN_103aa7a90(void)

{
  func_0x000107c61168(&PTR_PTR_11291f790);
  return;
}



/* Entry: 103aa7ab0; end: 103aa7abf; -[_TtC25SCSendToContextualSignals25SCSendToContextualSignals rankingSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103aa7ab0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112fe2248);
}



/* Entry: 103aa7ac0; end: 103aa7acb; -[_TtC25SCSendToContextualSignals25SCSendToContextualSignals rankingSourceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa7ac0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fe2250))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fe2250);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103aa7acc; end: 103aa7ad7; -[_TtC25SCSendToContextualSignals25SCSendToContextualSignals contentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa7acc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fe2258))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fe2258);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103aa7ad8; end: 103aa7b2f;  */

void FUN_103aa7ad8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103aa7b30; end: 103aa7b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103aa7b30(void)

{
  long unaff_x20;
  
  return *(long *)(*(long *)(unaff_x20 + _DAT_112fe2260) + 0x10) != 0;
}



/* Entry: 103aa7b4c; end: 103aa7d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa7b4c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined4 *)(unaff_x20 + _DAT_112fe2248) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe2250);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe2258);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2260) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2268) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe2270);
  *puVar1 = param_8;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fe2278) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aa7d14; end: 103aa7e5b; -[_TtC25SCSendToContextualSignals25SCSendToContextualSignals initWithRankingSource:rankingSourceId:contentId:lensIds:mentionedUsers:source:presented:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa7d14(long param_1,long param_2,undefined4 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar5 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_2;
  }
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
  func_0x000107c5fc54(param_7,puVar4);
  *(undefined4 *)(param_1 + _DAT_112fe2248) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112fe2250);
  *plVar1 = param_4;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_112fe2258);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112fe2260) = param_6;
  *(undefined8 *)(param_1 + _DAT_112fe2268) = param_7;
  puVar2 = (undefined8 *)(param_1 + _DAT_112fe2270);
  *puVar2 = param_8;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined1 *)(param_1 + _DAT_112fe2278) = param_9;
  lStack_70 = param_1;
  lStack_68 = lVar5;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aa7e5c; end: 103aa7e8f;  */

void FUN_103aa7e5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aa7e90; end: 103aa7eef; -[_TtC25SCSendToContextualSignals25SCSendToContextualSignals .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aa7eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aa7ed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa7eb4) */
/* WARNING: Removing unreachable block (ram,0x000103aa7ed8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa7e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fe2250 + 8))
  ;
  return;
}



/* Entry: 103aa7ef0; end: 103aa7f0f;  */

void FUN_103aa7ef0(void)

{
  func_0x000107c61168(&PTR_PTR_11291f868);
  return;
}



/* Entry: 103aa7f10; end: 103aa7f23;  */

void FUN_103aa7f10(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106c9770;
  if (lRam0000000112fe22a8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112fe22a8 = param_1;
  }
  return;
}



/* Entry: 103aa7f24; end: 103aa7f67;  */

void FUN_103aa7f24(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103aa7f68; end: 103aa834f;  */

void FUN_103aa7f68(long *param_1,long param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uStack_a8;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 < 3) {
    if (param_4 == 0) {
      lStack_90 = param_2;
      lStack_88 = param_3;
      func_0x000107c61434(param_3);
      puVar11 = PTR___sSSN_11034da80;
      plVar10 = &lStack_90;
      puVar9 = PTR___sSSN_11034da80;
      func_0x000107c5fbd4(plVar10,PTR___sSSN_11034da80,
                          PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,
                          PTR___sSSSTsWP_11034daa0);
      param_1[3] = (long)puVar11;
      *param_1 = (long)plVar10;
      param_1[1] = (long)puVar9;
    }
    else if (param_4 == 1) {
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
      puVar9 = puVar11;
      func_0x000107c3ebcc();
      func_0x000107c61170(puVar11);
      param_1[3] = (long)PTR___sSbN_11034dd40;
      *(char *)param_1 = (char)puVar9;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0();
      func_0x000107c4223c();
      func_0x000107c61170(puVar11);
      param_1[3] = (long)PTR___sSdN_11034dd90;
      *param_1 = param_2;
    }
  }
  else if (param_4 == 3) {
    lVar18 = *(long *)(param_2 + 0x10);
    if (lVar18 != 0) {
      FUN_103aa8350(0,lVar18,0);
      puVar19 = (undefined1 *)(param_2 + 0x30);
      do {
        uVar3 = *(undefined8 *)(puVar19 + -0x10);
        uVar4 = *(undefined8 *)(puVar19 + -8);
        uVar7 = *puVar19;
        func_0x000101edf31c(uVar3,uVar4,uVar7);
        FUN_103aa7f68(&lStack_90,uVar3,uVar4,uVar7);
        func_0x000101edeb30(uVar3,uVar4,uVar7);
        uVar14 = *(ulong *)(puVar11 + 0x10);
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar14) {
          FUN_103aa8350(1 < *(ulong *)(puVar11 + 0x18),uVar14 + 1,1);
        }
        puVar19 = puVar19 + 0x18;
        *(ulong *)(puVar11 + 0x10) = uVar14 + 1;
        *(long *)(puVar11 + uVar14 * 0x20 + 0x28) = lStack_88;
        *(long *)(puVar11 + uVar14 * 0x20 + 0x20) = lStack_90;
        *(long *)(puVar11 + uVar14 * 0x20 + 0x38) = lStack_78;
        *(long *)(puVar11 + uVar14 * 0x20 + 0x30) = lStack_80;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    lVar18 = 0x112fe22b0;
    func_0x0001000285a8(0x112fe22b0,&UNK_10dc4ab98);
    param_1[3] = lVar18;
    *param_1 = (long)puVar11;
  }
  else {
    if (param_4 == 4) {
      func_0x0001000285a8(0x112efcf48,&UNK_10db2ebe8);
      lVar18 = param_2;
      func_0x000107c6048c();
      uVar14 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
      uStack_a8 = 0xffffffffffffffff;
      if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
        uStack_a8 = ~(-1L << (uVar14 & 0x3f));
      }
      uStack_a8 = uStack_a8 & *(ulong *)(param_2 + 0x40);
      func_0x000107c61434(param_2);
      lVar16 = 0;
      if (uStack_a8 == 0) goto LAB_103aa808c;
      do {
        uVar12 = (uStack_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_a8 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uStack_a8 = uStack_a8 - 1 & uStack_a8;
        while( true ) {
          uVar12 = LZCOUNT(uVar12);
          uVar17 = uVar12 | lVar16 << 6;
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar17 * 0x10);
          puVar15 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar17 * 0x18);
          uVar3 = *puVar15;
          uVar5 = puVar15[1];
          uVar4 = *puVar2;
          uVar6 = puVar2[1];
          uVar7 = *(undefined1 *)(puVar15 + 2);
          func_0x000101edf31c(uVar3,uVar5,uVar7);
          func_0x000107c61434(uVar6);
          FUN_103aa7f68(&lStack_90,uVar3,uVar5,uVar7);
          func_0x000101edeb30(uVar3,uVar5,uVar7);
          uVar13 = (uVar12 & 0xffffffffffffffc0 | lVar16 << 6) >> 3;
          *(ulong *)(lVar18 + 0x40 + uVar13) =
               *(ulong *)(lVar18 + 0x40 + uVar13) | 1L << (uVar12 & 0x3f);
          puVar2 = (undefined8 *)(*(long *)(lVar18 + 0x30) + uVar17 * 0x10);
          *puVar2 = uVar4;
          puVar2[1] = uVar6;
          plVar10 = (long *)(*(long *)(lVar18 + 0x38) + uVar17 * 0x20);
          plVar10[1] = lStack_88;
          *plVar10 = lStack_90;
          plVar10[3] = lStack_78;
          plVar10[2] = lStack_80;
          if (SCARRY8(*(long *)(lVar18 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x103aa8350);
            (*pcVar8)();
          }
          *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + 1;
          if (uStack_a8 != 0) break;
LAB_103aa808c:
          do {
            lVar1 = lVar16 + 1;
            if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103aa834c);
              (*pcVar8)();
            }
            if ((long)(uVar14 + 0x3f >> 6) <= lVar1) {
              func_0x000101edeb30(param_2,param_3,4);
              lVar16 = 0x112da1d50;
              func_0x0001000285a8(0x112da1d50,&UNK_10d945938);
              param_1[3] = lVar16;
              *param_1 = lVar18;
              return;
            }
            uStack_a8 = ((ulong *)(param_2 + 0x40))[lVar1];
            lVar16 = lVar16 + 1;
          } while (uStack_a8 == 0);
          uVar12 = (uStack_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_a8 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
          uStack_a8 = uStack_a8 - 1 & uStack_a8;
          lVar16 = lVar1;
        }
      } while( true );
    }
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 103aa8350; end: 103aa836b;  */

void FUN_103aa8350(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103aa836c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103aa836c; end: 103aa849b;  */

undefined * FUN_103aa836c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103aa849c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112fe22b8;
    func_0x0001000285a8(0x112fe22b8,&UNK_10dc68c20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d387f8;
    func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103aa849c; end: 103aa849f;  */

/* WARNING: Possible PIC construction at 0x000103aa85d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aa8580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa85d8) */
/* WARNING: Removing unreachable block (ram,0x000103aa85dc) */
/* WARNING: Removing unreachable block (ram,0x000103aa8584) */
/* WARNING: Removing unreachable block (ram,0x000103aa85ac) */

double FUN_103aa849c(double param_1,long param_2,byte param_3,double param_4,long param_5,
                    char param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  double unaff_x19;
  long unaff_x20;
  double unaff_x21;
  ulong uVar17;
  long unaff_x22;
  double unaff_x23;
  long unaff_x24;
  char *unaff_x25;
  byte *unaff_x26;
  undefined8 unaff_x27;
  long lVar18;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        if ((param_1 == param_4) && (param_2 == param_5)) {
          return 4.94065645841247e-324;
        }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(param_1,param_2,param_4,param_5,0);
        return param_1;
      }
    }
    else if (param_3 == 1) {
      if (param_6 == '\x01') {
        return (double)(ulong)((SUB84(param_4,0) ^ SUB84(param_1,0) ^ 1) & 1);
      }
    }
    else if (param_6 == '\x02') {
      return (double)(ulong)(param_1 == param_4);
    }
  }
  else if (param_3 == 3) {
    if (param_6 == '\x03') {
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x24 = *(long *)((long)param_1 + 0x10);
      if (unaff_x24 == *(long *)((long)param_4 + 0x10)) {
        if ((unaff_x24 != 0) && (param_1 != param_4)) {
          unaff_x25 = (char *)((long)param_4 + 0x30);
          unaff_x26 = (byte *)((long)param_1 + 0x30);
          do {
            param_1 = *(double *)(unaff_x26 + -0x10);
            param_2 = *(long *)(unaff_x26 + -8);
            bVar6 = *unaff_x26;
            param_4 = *(double *)(unaff_x25 + -0x10);
            param_5 = *(long *)(unaff_x25 + -8);
            cVar7 = *unaff_x25;
            if (bVar6 < 3) {
              if (bVar6 == 0) {
                if (cVar7 != '\0') goto LAB_103aa8650;
                if (param_1 != param_4 || param_2 != param_5) goto code_r0x000107c605b8;
              }
              else if (bVar6 == 1) {
                if (cVar7 != '\x01') {
                  return 0.0;
                }
                if (((SUB84(param_4,0) ^ SUB84(param_1,0)) & 1) != 0) {
                  return 0.0;
                }
              }
              else {
                bVar9 = false;
                if ((cVar7 == '\x02') && (bVar9 = false, !NAN(param_1) && !NAN(param_4))) {
                  bVar9 = param_1 == param_4;
                }
                if (!bVar9) goto LAB_103aa8650;
              }
            }
            else if (bVar6 == 3) {
              if (cVar7 != '\x03') goto LAB_103aa8650;
              func_0x000101edf31c(param_4,param_5,3);
              func_0x000101edf31c(param_1,param_2,3);
              unaff_x23 = param_1;
              FUN_103aa84a0(param_1,param_4);
              func_0x000101edeb30(param_4,param_5,3);
              func_0x000101edeb30(param_1,param_2,3);
              if (((ulong)unaff_x23 & 1) == 0) goto LAB_103aa8650;
            }
            else {
              if (bVar6 == 4) {
                if (cVar7 != '\x04') goto LAB_103aa8650;
                func_0x000101edf31c(param_4,param_5,4);
                func_0x000101edf31c(param_1,param_2,4);
                unaff_x30 = 0x103aa8584;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
                unaff_x19 = param_1;
                unaff_x20 = param_2;
                unaff_x21 = param_4;
                unaff_x22 = param_5;
                goto code_r0x00010377f690;
              }
              if (cVar7 != '\x05' || (param_5 != 0 || param_4 != 0.0)) goto LAB_103aa8650;
            }
            unaff_x25 = unaff_x25 + 0x18;
            unaff_x26 = unaff_x26 + 0x18;
            unaff_x24 = unaff_x24 + -1;
          } while (unaff_x24 != 0);
        }
        dVar12 = 4.94065645841247e-324;
      }
      else {
LAB_103aa8650:
        dVar12 = 0.0;
      }
      return dVar12;
    }
  }
  else if (param_3 == 4) {
    if (param_6 == '\x04') {
code_r0x00010377f690:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(byte **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(char **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(double *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(double *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(double *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (param_1 == param_4) {
        dVar12 = 4.94065645841247e-324;
      }
      else {
        if (*(long *)((long)param_1 + 0x10) == *(long *)((long)param_4 + 0x10)) {
          uVar13 = *(ulong *)((long)param_1 + 0x40);
          *(ulong **)((long)register0x00000008 + -0x78) = (ulong *)((long)param_1 + 0x40);
          uVar16 = 1L << ((ulong)*(byte *)((long)param_1 + 0x20) & 0x3f);
          uVar17 = 0xffffffffffffffff;
          if ((*(byte *)((long)param_1 + 0x20) & 0x3f) < 6) {
            uVar17 = ~(-1L << (uVar16 & 0x3f));
          }
          uVar17 = uVar17 & uVar13;
          func_0x000107c61438(param_1,2);
          func_0x000107c61434(param_4);
          *(double *)((long)register0x00000008 + -0x70) = param_1;
          lVar10 = 0;
          do {
            if (uVar17 == 0) {
              do {
                lVar18 = lVar10 + 1;
                if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10377f8c8);
                  (*pcVar8)();
                }
                if ((long)(uVar16 + 0x3f >> 6) <= lVar18) {
                  func_0x000107c6142c(param_4);
                  func_0x000107c61430(param_1,2);
                  return 4.94065645841247e-324;
                }
                uVar17 = *(ulong *)(*(long *)((long)register0x00000008 + -0x78) + lVar18 * 8);
                lVar10 = lVar10 + 1;
              } while (uVar17 == 0);
              uVar13 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              *(ulong *)((long)register0x00000008 + -0x68) = uVar17 - 1 & uVar17;
              uVar17 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar18 * 0x40;
            }
            else {
              uVar13 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              *(ulong *)((long)register0x00000008 + -0x68) = uVar17 - 1 & uVar17;
              uVar17 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar10 << 6;
              lVar18 = lVar10;
            }
            plVar1 = (long *)(*(long *)((long)param_1 + 0x30) + uVar17 * 0x10);
            lVar10 = *plVar1;
            uVar13 = plVar1[1];
            puVar14 = (undefined8 *)(*(long *)((long)param_1 + 0x38) + uVar17 * 0x18);
            uVar2 = *puVar14;
            uVar3 = puVar14[1];
            uVar4 = *(undefined1 *)(puVar14 + 2);
            func_0x000107c61434(uVar13);
            func_0x000101edf31c(uVar2,uVar3,uVar4);
            uVar17 = uVar13;
            func_0x000100029284();
            func_0x000107c6142c(uVar13);
            if ((uVar17 & 1) == 0) {
              func_0x000107c6142c(param_4);
              func_0x000107c61430(*(undefined8 *)((long)register0x00000008 + -0x70),2);
              func_0x000101edeb30(uVar2,uVar3,uVar4);
              goto code_r0x00010377f8a0;
            }
            puVar15 = (ulong *)(*(long *)((long)param_4 + 0x38) + lVar10 * 0x18);
            uVar17 = *puVar15;
            uVar13 = puVar15[1];
            uVar5 = (undefined1)puVar15[2];
            func_0x000101edf31c(uVar17,uVar13,uVar5);
            uVar11 = uVar17;
            FUN_103aa849c(uVar17,uVar13,uVar5,uVar2,uVar3,uVar4);
            func_0x000101edeb30(uVar17,uVar13,uVar5);
            func_0x000101edeb30(uVar2,uVar3,uVar4);
            param_1 = *(double *)((long)register0x00000008 + -0x70);
            uVar17 = *(ulong *)((long)register0x00000008 + -0x68);
            lVar10 = lVar18;
          } while ((uVar11 & 1) != 0);
          func_0x000107c6142c(param_4);
          func_0x000107c61430(param_1,2);
        }
code_r0x00010377f8a0:
        dVar12 = 0.0;
      }
      return dVar12;
    }
  }
  else if ((param_6 == '\x05') && (param_5 == 0 && param_4 == 0.0)) {
    return 4.94065645841247e-324;
  }
  return 0.0;
}



/* Entry: 103aa84a0; end: 103aa8673;  */

undefined8 FUN_103aa84a0(long param_1,long param_2)

{
  double dVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  byte *pbVar12;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == *(long *)(param_2 + 0x10)) {
    if ((lVar10 != 0) && (param_1 != param_2)) {
      pcVar11 = (char *)(param_2 + 0x30);
      pbVar12 = (byte *)(param_1 + 0x30);
      do {
        dVar7 = *(double *)(pbVar12 + -0x10);
        lVar2 = *(long *)(pbVar12 + -8);
        bVar4 = *pbVar12;
        dVar1 = *(double *)(pcVar11 + -0x10);
        lVar3 = *(long *)(pcVar11 + -8);
        cVar5 = *pcVar11;
        if (bVar4 < 3) {
          if (bVar4 == 0) {
            if (cVar5 != '\0') goto LAB_103aa8650;
            if (dVar7 != dVar1 || lVar2 != lVar3) {
              func_0x000107c605b8(dVar7,lVar2,dVar1,lVar3,0);
              goto joined_r0x000103aa85a8;
            }
          }
          else if (bVar4 == 1) {
            if (cVar5 != '\x01') {
              return 0;
            }
            if (((SUB84(dVar1,0) ^ SUB84(dVar7,0)) & 1) != 0) {
              return 0;
            }
          }
          else {
            bVar6 = false;
            if ((cVar5 == '\x02') && (bVar6 = false, !NAN(dVar7) && !NAN(dVar1))) {
              bVar6 = dVar7 == dVar1;
            }
            if (!bVar6) goto LAB_103aa8650;
          }
        }
        else {
          if (bVar4 == 3) {
            if (cVar5 != '\x03') goto LAB_103aa8650;
            func_0x000101edf31c(dVar1,lVar3,3);
            func_0x000101edf31c(dVar7,lVar2,3);
            dVar8 = dVar7;
            FUN_103aa84a0(dVar7,dVar1);
            func_0x000101edeb30(dVar1,lVar3,3);
            func_0x000101edeb30(dVar7,lVar2,3);
            dVar7 = dVar8;
          }
          else {
            if (bVar4 != 4) {
              if (cVar5 == '\x05' && (lVar3 == 0 && dVar1 == 0.0)) goto LAB_103aa84f4;
              goto LAB_103aa8650;
            }
            if (cVar5 != '\x04') goto LAB_103aa8650;
            func_0x000101edf31c(dVar1,lVar3,4);
            func_0x000101edf31c(dVar7,lVar2,4);
            dVar8 = dVar7;
            func_0x00010377f690(dVar7,dVar1);
            func_0x000101edeb30(dVar1,lVar3,4);
            func_0x000101edeb30(dVar7,lVar2,4);
            dVar7 = dVar8;
          }
joined_r0x000103aa85a8:
          if (((ulong)dVar7 & 1) == 0) goto LAB_103aa8650;
        }
LAB_103aa84f4:
        pcVar11 = pcVar11 + 0x18;
        pbVar12 = pbVar12 + 0x18;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    uVar9 = 1;
  }
  else {
LAB_103aa8650:
    uVar9 = 0;
  }
  return uVar9;
}



/* Entry: 103aa8674; end: 103aa87b7;  */

/* WARNING: Possible PIC construction at 0x000103aa897c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aa88bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aa8b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa88c0) */
/* WARNING: Removing unreachable block (ram,0x000103aa8980) */
/* WARNING: Removing unreachable block (ram,0x000103aa89b8) */
/* WARNING: Removing unreachable block (ram,0x000103aa89f0) */
/* WARNING: Removing unreachable block (ram,0x000103aa89c0) */
/* WARNING: Removing unreachable block (ram,0x000103aa8a38) */
/* WARNING: Removing unreachable block (ram,0x000103aa89c8) */
/* WARNING: Removing unreachable block (ram,0x000103aa88cc) */
/* WARNING: Removing unreachable block (ram,0x000103aa8990) */
/* WARNING: Removing unreachable block (ram,0x000103aa88a4) */
/* WARNING: Removing unreachable block (ram,0x000103aa8994) */
/* WARNING: Removing unreachable block (ram,0x000103aa8a18) */
/* WARNING: Removing unreachable block (ram,0x000103aa8a28) */
/* WARNING: Removing unreachable block (ram,0x000103aa899c) */
/* WARNING: Removing unreachable block (ram,0x000103aa88d0) */
/* WARNING: Removing unreachable block (ram,0x000103aa8b78) */

void FUN_103aa8674(undefined8 *param_1,ulong param_2,ulong param_3,byte param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (param_4 < 3) {
    if (param_4 == 0) {
      func_0x000107c60690(1);
      uVar11 = param_2;
code_r0x000107c5fb58:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar11,param_3);
      return;
    }
    if (param_4 == 1) {
      func_0x000107c60690(2);
      func_0x000107c60694((uint)param_2 & 1);
    }
    else {
      func_0x000107c60690(3);
      uVar11 = 0;
      if ((param_2 & 0x7fffffffffffffff) != 0) {
        uVar11 = param_2;
      }
      func_0x000107c606a0(uVar11);
    }
  }
  else {
    if (param_4 == 3) {
      func_0x000107c60690(4);
      lVar12 = *(long *)(param_2 + 0x10);
      func_0x000107c60690(lVar12);
      if (lVar12 != 0) {
        pbVar13 = (byte *)(param_2 + 0x30);
        do {
          uVar11 = *(ulong *)(pbVar13 + -0x10);
          param_3 = *(ulong *)(pbVar13 + -8);
          bVar4 = *pbVar13;
          if (bVar4 < 3) {
            if (bVar4 == 0) {
              func_0x000107c60690(1);
              func_0x000107c61434(param_3);
              goto code_r0x000107c5fb58;
            }
            if (bVar4 == 1) {
              func_0x000107c60690(2);
              func_0x000107c60694((uint)uVar11 & 1);
            }
            else {
              func_0x000107c60690(3);
              uVar7 = 0;
              if ((uVar11 & 0x7fffffffffffffff) != 0) {
                uVar7 = uVar11;
              }
              func_0x000107c606a0(uVar7);
            }
          }
          else {
            if (bVar4 == 3) {
              func_0x000107c60690(4);
              func_0x000107c61434(uVar11);
              FUN_103aa8a80(param_1,uVar11);
              uVar6 = 3;
            }
            else {
              if (bVar4 != 4) {
                func_0x000107c60690(0);
                goto LAB_103aa8ae0;
              }
              func_0x000107c60690(5);
              func_0x000107c61434(uVar11);
              FUN_103aa8834(param_1,uVar11);
              uVar6 = 4;
            }
            func_0x000101edeb30(uVar11,param_3,uVar6);
          }
LAB_103aa8ae0:
          pbVar13 = pbVar13 + 0x18;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      return;
    }
    if (param_4 == 4) {
      func_0x000107c60690(5);
      uVar7 = *(ulong *)(param_2 + 0x40);
      uVar10 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
      uVar11 = 0xffffffffffffffff;
      if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
        uVar11 = ~(-1L << (uVar10 & 0x3f));
      }
      func_0x000107c61434(param_2);
      lVar12 = 0;
      lVar8 = 0;
      uVar11 = uVar11 & uVar7;
      while (uVar11 == 0) {
        lVar12 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103aa8a80);
          (*pcVar5)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_103aa8a48;
        lVar8 = lVar8 + 1;
        uVar11 = ((ulong *)(param_2 + 0x40))[lVar12];
      }
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar12 << 6;
      puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar7 * 0x10);
      uVar11 = *puVar1;
      param_3 = puVar1[1];
      puVar9 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar7 * 0x18);
      uVar6 = *puVar9;
      uVar2 = puVar9[1];
      uVar3 = *(undefined1 *)(puVar9 + 2);
      func_0x000107c61434(param_3);
      func_0x000101edf31c(uVar6,uVar2,uVar3);
      if (param_3 == 0) {
LAB_103aa8a48:
        func_0x000107c61574(param_2);
        func_0x000107c60690(0);
        return;
      }
      uStack_88 = param_1[5];
      uStack_90 = param_1[4];
      uStack_78 = param_1[7];
      uStack_80 = param_1[6];
      uStack_70 = param_1[8];
      uStack_a8 = param_1[1];
      uStack_b0 = *param_1;
      uStack_98 = param_1[3];
      uStack_a0 = param_1[2];
      param_1 = &uStack_b0;
      goto code_r0x000107c5fb58;
    }
    func_0x000107c60690(0);
  }
  return;
}



/* Entry: 103aa87b8; end: 103aa87c3;  */

/* WARNING: Possible PIC construction at 0x000103aa897c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aa88bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aa8b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa88c0) */
/* WARNING: Removing unreachable block (ram,0x000103aa8980) */
/* WARNING: Removing unreachable block (ram,0x000103aa89b8) */
/* WARNING: Removing unreachable block (ram,0x000103aa89f0) */
/* WARNING: Removing unreachable block (ram,0x000103aa89c0) */
/* WARNING: Removing unreachable block (ram,0x000103aa8a38) */
/* WARNING: Removing unreachable block (ram,0x000103aa89c8) */
/* WARNING: Removing unreachable block (ram,0x000103aa88cc) */
/* WARNING: Removing unreachable block (ram,0x000103aa8990) */
/* WARNING: Removing unreachable block (ram,0x000103aa88a4) */
/* WARNING: Removing unreachable block (ram,0x000103aa8994) */
/* WARNING: Removing unreachable block (ram,0x000103aa8a18) */
/* WARNING: Removing unreachable block (ram,0x000103aa8a28) */
/* WARNING: Removing unreachable block (ram,0x000103aa899c) */
/* WARNING: Removing unreachable block (ram,0x000103aa88d0) */
/* WARNING: Removing unreachable block (ram,0x000103aa8b78) */

void FUN_103aa87b8(undefined8 *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *unaff_x20;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *unaff_x20;
  uVar12 = unaff_x20[1];
  bVar5 = (byte)unaff_x20[2];
  if (bVar5 < 3) {
    if (bVar5 == 0) {
      func_0x000107c60690(1);
      uVar8 = uVar2;
code_r0x000107c5fb58:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar8,uVar12);
      return;
    }
    if (bVar5 == 1) {
      func_0x000107c60690(2);
      func_0x000107c60694((uint)uVar2 & 1);
    }
    else {
      func_0x000107c60690(3);
      uVar12 = 0;
      if ((uVar2 & 0x7fffffffffffffff) != 0) {
        uVar12 = uVar2;
      }
      func_0x000107c606a0(uVar12);
    }
  }
  else {
    if (bVar5 == 3) {
      func_0x000107c60690(4);
      lVar13 = *(long *)(uVar2 + 0x10);
      func_0x000107c60690(lVar13);
      if (lVar13 != 0) {
        pbVar14 = (byte *)(uVar2 + 0x30);
        do {
          uVar8 = *(ulong *)(pbVar14 + -0x10);
          uVar12 = *(ulong *)(pbVar14 + -8);
          bVar5 = *pbVar14;
          if (bVar5 < 3) {
            if (bVar5 == 0) {
              func_0x000107c60690(1);
              func_0x000107c61434(uVar12);
              goto code_r0x000107c5fb58;
            }
            if (bVar5 == 1) {
              func_0x000107c60690(2);
              func_0x000107c60694((uint)uVar8 & 1);
            }
            else {
              func_0x000107c60690(3);
              uVar2 = 0;
              if ((uVar8 & 0x7fffffffffffffff) != 0) {
                uVar2 = uVar8;
              }
              func_0x000107c606a0(uVar2);
            }
          }
          else {
            if (bVar5 == 3) {
              func_0x000107c60690(4);
              func_0x000107c61434(uVar8);
              FUN_103aa8a80(param_1,uVar8);
              uVar7 = 3;
            }
            else {
              if (bVar5 != 4) {
                func_0x000107c60690(0);
                goto LAB_103aa8ae0;
              }
              func_0x000107c60690(5);
              func_0x000107c61434(uVar8);
              FUN_103aa8834(param_1,uVar8);
              uVar7 = 4;
            }
            func_0x000101edeb30(uVar8,uVar12,uVar7);
          }
LAB_103aa8ae0:
          pbVar14 = pbVar14 + 0x18;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      return;
    }
    if (bVar5 == 4) {
      func_0x000107c60690(5);
      uVar8 = *(ulong *)(uVar2 + 0x40);
      uVar11 = 1L << ((ulong)*(byte *)(uVar2 + 0x20) & 0x3f);
      uVar12 = 0xffffffffffffffff;
      if ((*(byte *)(uVar2 + 0x20) & 0x3f) < 6) {
        uVar12 = ~(-1L << (uVar11 & 0x3f));
      }
      func_0x000107c61434(uVar2);
      lVar13 = 0;
      lVar9 = 0;
      uVar12 = uVar12 & uVar8;
      while (uVar12 == 0) {
        lVar13 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103aa8a80);
          (*pcVar6)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto LAB_103aa8a48;
        lVar9 = lVar9 + 1;
        uVar12 = ((ulong *)(uVar2 + 0x40))[lVar13];
      }
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar13 << 6;
      puVar1 = (ulong *)(*(long *)(uVar2 + 0x30) + uVar11 * 0x10);
      uVar8 = *puVar1;
      uVar12 = puVar1[1];
      puVar10 = (undefined8 *)(*(long *)(uVar2 + 0x38) + uVar11 * 0x18);
      uVar7 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = *(undefined1 *)(puVar10 + 2);
      func_0x000107c61434(uVar12);
      func_0x000101edf31c(uVar7,uVar3,uVar4);
      if (uVar12 == 0) {
LAB_103aa8a48:
        func_0x000107c61574(uVar2);
        func_0x000107c60690(0);
        return;
      }
      uStack_88 = param_1[5];
      uStack_90 = param_1[4];
      uStack_78 = param_1[7];
      uStack_80 = param_1[6];
      uStack_70 = param_1[8];
      uStack_a8 = param_1[1];
      uStack_b0 = *param_1;
      uStack_98 = param_1[3];
      uStack_a0 = param_1[2];
      param_1 = &uStack_b0;
      goto code_r0x000107c5fb58;
    }
    func_0x000107c60690(0);
  }
  return;
}



/* Entry: 103aa87c4; end: 103aa8817;  */

void FUN_103aa87c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  func_0x000107c6068c(auStack_78);
  FUN_103aa8674(auStack_78,uVar1,uVar2,uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103aa8818; end: 103aa8833;  */

/* WARNING: Possible PIC construction at 0x000103aa85d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aa8580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa85d8) */
/* WARNING: Removing unreachable block (ram,0x000103aa85dc) */
/* WARNING: Removing unreachable block (ram,0x000103aa8584) */
/* WARNING: Removing unreachable block (ram,0x000103aa85ac) */

double FUN_103aa8818(double *param_1,double *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  ulong uVar19;
  double unaff_x19;
  double unaff_x20;
  double unaff_x21;
  ulong uVar20;
  double unaff_x22;
  double unaff_x23;
  long unaff_x24;
  char *unaff_x25;
  byte *unaff_x26;
  undefined8 unaff_x27;
  long lVar21;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  dVar12 = *param_1;
  dVar14 = param_1[1];
  dVar13 = *param_2;
  dVar15 = param_2[1];
  cVar6 = *(char *)(param_2 + 2);
  bVar7 = *(byte *)(param_1 + 2);
  if (bVar7 < 3) {
    if (bVar7 == 0) {
      if (cVar6 == '\0') {
        if ((dVar12 == dVar13) && (dVar14 == dVar15)) {
          return 4.94065645841247e-324;
        }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(dVar12,dVar14,dVar13,dVar15,0);
        return dVar12;
      }
    }
    else if (bVar7 == 1) {
      if (cVar6 == '\x01') {
        return (double)(ulong)((SUB84(dVar13,0) ^ SUB84(dVar12,0) ^ 1) & 1);
      }
    }
    else if (cVar6 == '\x02') {
      return (double)(ulong)(dVar12 == dVar13);
    }
  }
  else if (bVar7 == 3) {
    if (cVar6 == '\x03') {
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x24 = *(long *)((long)dVar12 + 0x10);
      if (unaff_x24 == *(long *)((long)dVar13 + 0x10)) {
        if ((unaff_x24 != 0) && (dVar12 != dVar13)) {
          unaff_x25 = (char *)((long)dVar13 + 0x30);
          unaff_x26 = (byte *)((long)dVar12 + 0x30);
          do {
            dVar12 = *(double *)(unaff_x26 + -0x10);
            dVar14 = *(double *)(unaff_x26 + -8);
            bVar7 = *unaff_x26;
            dVar13 = *(double *)(unaff_x25 + -0x10);
            dVar15 = *(double *)(unaff_x25 + -8);
            cVar6 = *unaff_x25;
            if (bVar7 < 3) {
              if (bVar7 == 0) {
                if (cVar6 != '\0') goto LAB_103aa8650;
                if (dVar12 != dVar13 || dVar14 != dVar15) goto code_r0x000107c605b8;
              }
              else if (bVar7 == 1) {
                if (cVar6 != '\x01') {
                  return 0.0;
                }
                if (((SUB84(dVar13,0) ^ SUB84(dVar12,0)) & 1) != 0) {
                  return 0.0;
                }
              }
              else {
                bVar9 = false;
                if ((cVar6 == '\x02') && (bVar9 = false, !NAN(dVar12) && !NAN(dVar13))) {
                  bVar9 = dVar12 == dVar13;
                }
                if (!bVar9) goto LAB_103aa8650;
              }
            }
            else if (bVar7 == 3) {
              if (cVar6 != '\x03') goto LAB_103aa8650;
              func_0x000101edf31c(dVar13,dVar15,3);
              func_0x000101edf31c(dVar12,dVar14,3);
              unaff_x23 = dVar12;
              FUN_103aa84a0(dVar12,dVar13);
              func_0x000101edeb30(dVar13,dVar15,3);
              func_0x000101edeb30(dVar12,dVar14,3);
              if (((ulong)unaff_x23 & 1) == 0) goto LAB_103aa8650;
            }
            else {
              if (bVar7 == 4) {
                if (cVar6 != '\x04') goto LAB_103aa8650;
                func_0x000101edf31c(dVar13,dVar15,4);
                func_0x000101edf31c(dVar12,dVar14,4);
                unaff_x30 = 0x103aa8584;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
                unaff_x19 = dVar12;
                unaff_x20 = dVar14;
                unaff_x21 = dVar13;
                unaff_x22 = dVar15;
                goto code_r0x00010377f690;
              }
              if (cVar6 != '\x05' || (dVar15 != 0.0 || dVar13 != 0.0)) goto LAB_103aa8650;
            }
            unaff_x25 = unaff_x25 + 0x18;
            unaff_x26 = unaff_x26 + 0x18;
            unaff_x24 = unaff_x24 + -1;
          } while (unaff_x24 != 0);
        }
        dVar12 = 4.94065645841247e-324;
      }
      else {
LAB_103aa8650:
        dVar12 = 0.0;
      }
      return dVar12;
    }
  }
  else if (bVar7 == 4) {
    if (cVar6 == '\x04') {
code_r0x00010377f690:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(byte **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(char **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(double *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(double *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(double *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(double *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(double *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (dVar12 == dVar13) {
        dVar12 = 4.94065645841247e-324;
      }
      else {
        if (*(long *)((long)dVar12 + 0x10) == *(long *)((long)dVar13 + 0x10)) {
          uVar16 = *(ulong *)((long)dVar12 + 0x40);
          *(ulong **)((long)register0x00000008 + -0x78) = (ulong *)((long)dVar12 + 0x40);
          uVar19 = 1L << ((ulong)*(byte *)((long)dVar12 + 0x20) & 0x3f);
          uVar20 = 0xffffffffffffffff;
          if ((*(byte *)((long)dVar12 + 0x20) & 0x3f) < 6) {
            uVar20 = ~(-1L << (uVar19 & 0x3f));
          }
          uVar20 = uVar20 & uVar16;
          func_0x000107c61438(dVar12,2);
          func_0x000107c61434(dVar13);
          *(double *)((long)register0x00000008 + -0x70) = dVar12;
          lVar10 = 0;
          do {
            if (uVar20 == 0) {
              do {
                lVar21 = lVar10 + 1;
                if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10377f8c8);
                  (*pcVar8)();
                }
                if ((long)(uVar19 + 0x3f >> 6) <= lVar21) {
                  func_0x000107c6142c(dVar13);
                  func_0x000107c61430(dVar12,2);
                  return 4.94065645841247e-324;
                }
                uVar20 = *(ulong *)(*(long *)((long)register0x00000008 + -0x78) + lVar21 * 8);
                lVar10 = lVar10 + 1;
              } while (uVar20 == 0);
              uVar16 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              *(ulong *)((long)register0x00000008 + -0x68) = uVar20 - 1 & uVar20;
              uVar20 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar21 * 0x40;
            }
            else {
              uVar16 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              *(ulong *)((long)register0x00000008 + -0x68) = uVar20 - 1 & uVar20;
              uVar20 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar10 << 6;
              lVar21 = lVar10;
            }
            plVar1 = (long *)(*(long *)((long)dVar12 + 0x30) + uVar20 * 0x10);
            lVar10 = *plVar1;
            uVar16 = plVar1[1];
            puVar17 = (undefined8 *)(*(long *)((long)dVar12 + 0x38) + uVar20 * 0x18);
            uVar2 = *puVar17;
            uVar3 = puVar17[1];
            uVar4 = *(undefined1 *)(puVar17 + 2);
            func_0x000107c61434(uVar16);
            func_0x000101edf31c(uVar2,uVar3,uVar4);
            uVar20 = uVar16;
            func_0x000100029284();
            func_0x000107c6142c(uVar16);
            if ((uVar20 & 1) == 0) {
              func_0x000107c6142c(dVar13);
              func_0x000107c61430(*(undefined8 *)((long)register0x00000008 + -0x70),2);
              func_0x000101edeb30(uVar2,uVar3,uVar4);
              goto code_r0x00010377f8a0;
            }
            puVar18 = (ulong *)(*(long *)((long)dVar13 + 0x38) + lVar10 * 0x18);
            uVar20 = *puVar18;
            uVar16 = puVar18[1];
            uVar5 = (undefined1)puVar18[2];
            func_0x000101edf31c(uVar20,uVar16,uVar5);
            uVar11 = uVar20;
            FUN_103aa849c(uVar20,uVar16,uVar5,uVar2,uVar3,uVar4);
            func_0x000101edeb30(uVar20,uVar16,uVar5);
            func_0x000101edeb30(uVar2,uVar3,uVar4);
            dVar12 = *(double *)((long)register0x00000008 + -0x70);
            uVar20 = *(ulong *)((long)register0x00000008 + -0x68);
            lVar10 = lVar21;
          } while ((uVar11 & 1) != 0);
          func_0x000107c6142c(dVar13);
          func_0x000107c61430(dVar12,2);
        }
code_r0x00010377f8a0:
        dVar12 = 0.0;
      }
      return dVar12;
    }
  }
  else if ((cVar6 == '\x05') && (dVar15 == 0.0 && dVar13 == 0.0)) {
    return 4.94065645841247e-324;
  }
  return 0.0;
}



/* Entry: 103aa8834; end: 103aa8a7f;  */

void FUN_103aa8834(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar10 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(param_2 + 0x40);
  func_0x000107c61434(param_2);
  uStack_b8 = 0;
  lVar12 = 0;
  while( true ) {
    while (uVar11 == 0) {
      bVar5 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103aa8a80);
        (*pcVar4)();
      }
      if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_103aa8a48;
      uVar11 = ((ulong *)(param_2 + 0x40))[lVar12];
    }
    uVar8 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar12 << 6;
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
    uVar7 = *puVar1;
    lVar2 = puVar1[1];
    puVar9 = (ulong *)(*(long *)(param_2 + 0x38) + uVar8 * 0x18);
    uVar8 = *puVar9;
    uVar6 = puVar9[1];
    bVar3 = (byte)puVar9[2];
    func_0x000107c61434(lVar2);
    func_0x000101edf31c(uVar8,uVar6,bVar3);
    if (lVar2 == 0) break;
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_70 = param_1[8];
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    func_0x000107c5fb58(&uStack_b0,uVar7,lVar2);
    func_0x000107c6142c(lVar2);
    if (bVar3 < 3) {
      if (bVar3 == 0) {
        func_0x000107c60690(1);
        func_0x000107c5fb58(&uStack_b0,uVar8,uVar6);
        uVar7 = 0;
        goto LAB_103aa88cc;
      }
      if (bVar3 == 1) {
        func_0x000107c60690(2);
        uVar8 = (ulong)((uint)uVar8 & 1);
        func_0x000107c60694();
      }
      else {
        func_0x000107c60690(3);
        uVar6 = 0;
        if ((uVar8 & 0x7fffffffffffffff) != 0) {
          uVar6 = uVar8;
        }
        func_0x000107c606a0();
        uVar8 = uVar6;
      }
    }
    else {
      if (bVar3 == 3) {
        func_0x000107c60690(4);
        FUN_103aa8a80(&uStack_b0,uVar8);
        uVar7 = 3;
      }
      else {
        if (bVar3 != 4) {
          uVar8 = 0;
          func_0x000107c60690();
          goto LAB_103aa88d0;
        }
        func_0x000107c60690(5);
        FUN_103aa8834(&uStack_b0,uVar8);
        uVar7 = 4;
      }
LAB_103aa88cc:
      func_0x000101edeb30(uVar8,uVar6,uVar7);
    }
LAB_103aa88d0:
    uVar11 = uVar11 - 1 & uVar11;
    func_0x000107c606a8();
    uStack_b8 = uVar8 ^ uStack_b8;
  }
LAB_103aa8a48:
  func_0x000107c61574(param_2);
  func_0x000107c60690(uStack_b8);
  return;
}



/* Entry: 103aa8a80; end: 103aa8bbf;  */

void FUN_103aa8a80(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  
  lVar6 = *(long *)(param_2 + 0x10);
  func_0x000107c60690(lVar6);
  if (lVar6 != 0) {
    pbVar7 = (byte *)(param_2 + 0x30);
    do {
      uVar2 = *(ulong *)(pbVar7 + -0x10);
      uVar3 = *(undefined8 *)(pbVar7 + -8);
      bVar4 = *pbVar7;
      if (bVar4 < 3) {
        if (bVar4 == 0) {
          func_0x000107c60690(1);
          func_0x000107c61434(uVar3);
          func_0x000107c5fb58(param_1,uVar2,uVar3);
          uVar5 = 0;
          goto LAB_103aa8adc;
        }
        if (bVar4 == 1) {
          func_0x000107c60690(2);
          func_0x000107c60694((uint)uVar2 & 1);
        }
        else {
          func_0x000107c60690(3);
          uVar1 = 0;
          if ((uVar2 & 0x7fffffffffffffff) != 0) {
            uVar1 = uVar2;
          }
          func_0x000107c606a0(uVar1);
        }
      }
      else {
        if (bVar4 == 3) {
          func_0x000107c60690(4);
          func_0x000107c61434(uVar2);
          FUN_103aa8a80(param_1,uVar2);
          uVar5 = 3;
        }
        else {
          if (bVar4 != 4) {
            func_0x000107c60690(0);
            goto LAB_103aa8ae0;
          }
          func_0x000107c60690(5);
          func_0x000107c61434(uVar2);
          FUN_103aa8834(param_1,uVar2);
          uVar5 = 4;
        }
LAB_103aa8adc:
        func_0x000101edeb30(uVar2,uVar3,uVar5);
      }
LAB_103aa8ae0:
      pbVar7 = pbVar7 + 0x18;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 103aa8bc0; end: 103aa8ca7;  */

/* WARNING: Possible PIC construction at 0x000103aa85d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aa8580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa85d8) */
/* WARNING: Removing unreachable block (ram,0x000103aa85dc) */
/* WARNING: Removing unreachable block (ram,0x000103aa8584) */
/* WARNING: Removing unreachable block (ram,0x000103aa85ac) */

double FUN_103aa8bc0(double param_1,long param_2,byte param_3,double param_4,long param_5,
                    char param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  double unaff_x19;
  long unaff_x20;
  double unaff_x21;
  ulong uVar17;
  long unaff_x22;
  double unaff_x23;
  long unaff_x24;
  char *unaff_x25;
  byte *unaff_x26;
  undefined8 unaff_x27;
  long lVar18;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        if ((param_1 == param_4) && (param_2 == param_5)) {
          return 4.94065645841247e-324;
        }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(param_1,param_2,param_4,param_5,0);
        return param_1;
      }
    }
    else if (param_3 == 1) {
      if (param_6 == '\x01') {
        return (double)(ulong)((SUB84(param_4,0) ^ SUB84(param_1,0) ^ 1) & 1);
      }
    }
    else if (param_6 == '\x02') {
      return (double)(ulong)(param_1 == param_4);
    }
  }
  else if (param_3 == 3) {
    if (param_6 == '\x03') {
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x24 = *(long *)((long)param_1 + 0x10);
      if (unaff_x24 == *(long *)((long)param_4 + 0x10)) {
        if ((unaff_x24 != 0) && (param_1 != param_4)) {
          unaff_x25 = (char *)((long)param_4 + 0x30);
          unaff_x26 = (byte *)((long)param_1 + 0x30);
          do {
            param_1 = *(double *)(unaff_x26 + -0x10);
            param_2 = *(long *)(unaff_x26 + -8);
            bVar6 = *unaff_x26;
            param_4 = *(double *)(unaff_x25 + -0x10);
            param_5 = *(long *)(unaff_x25 + -8);
            cVar7 = *unaff_x25;
            if (bVar6 < 3) {
              if (bVar6 == 0) {
                if (cVar7 != '\0') goto LAB_103aa8650;
                if (param_1 != param_4 || param_2 != param_5) goto code_r0x000107c605b8;
              }
              else if (bVar6 == 1) {
                if (cVar7 != '\x01') {
                  return 0.0;
                }
                if (((SUB84(param_4,0) ^ SUB84(param_1,0)) & 1) != 0) {
                  return 0.0;
                }
              }
              else {
                bVar9 = false;
                if ((cVar7 == '\x02') && (bVar9 = false, !NAN(param_1) && !NAN(param_4))) {
                  bVar9 = param_1 == param_4;
                }
                if (!bVar9) goto LAB_103aa8650;
              }
            }
            else if (bVar6 == 3) {
              if (cVar7 != '\x03') goto LAB_103aa8650;
              func_0x000101edf31c(param_4,param_5,3);
              func_0x000101edf31c(param_1,param_2,3);
              unaff_x23 = param_1;
              FUN_103aa84a0(param_1,param_4);
              func_0x000101edeb30(param_4,param_5,3);
              func_0x000101edeb30(param_1,param_2,3);
              if (((ulong)unaff_x23 & 1) == 0) goto LAB_103aa8650;
            }
            else {
              if (bVar6 == 4) {
                if (cVar7 != '\x04') goto LAB_103aa8650;
                func_0x000101edf31c(param_4,param_5,4);
                func_0x000101edf31c(param_1,param_2,4);
                unaff_x30 = 0x103aa8584;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
                unaff_x19 = param_1;
                unaff_x20 = param_2;
                unaff_x21 = param_4;
                unaff_x22 = param_5;
                goto code_r0x00010377f690;
              }
              if (cVar7 != '\x05' || (param_5 != 0 || param_4 != 0.0)) goto LAB_103aa8650;
            }
            unaff_x25 = unaff_x25 + 0x18;
            unaff_x26 = unaff_x26 + 0x18;
            unaff_x24 = unaff_x24 + -1;
          } while (unaff_x24 != 0);
        }
        dVar12 = 4.94065645841247e-324;
      }
      else {
LAB_103aa8650:
        dVar12 = 0.0;
      }
      return dVar12;
    }
  }
  else if (param_3 == 4) {
    if (param_6 == '\x04') {
code_r0x00010377f690:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(byte **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(char **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(double *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(double *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(double *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (param_1 == param_4) {
        dVar12 = 4.94065645841247e-324;
      }
      else {
        if (*(long *)((long)param_1 + 0x10) == *(long *)((long)param_4 + 0x10)) {
          uVar13 = *(ulong *)((long)param_1 + 0x40);
          *(ulong **)((long)register0x00000008 + -0x78) = (ulong *)((long)param_1 + 0x40);
          uVar16 = 1L << ((ulong)*(byte *)((long)param_1 + 0x20) & 0x3f);
          uVar17 = 0xffffffffffffffff;
          if ((*(byte *)((long)param_1 + 0x20) & 0x3f) < 6) {
            uVar17 = ~(-1L << (uVar16 & 0x3f));
          }
          uVar17 = uVar17 & uVar13;
          func_0x000107c61438(param_1,2);
          func_0x000107c61434(param_4);
          *(double *)((long)register0x00000008 + -0x70) = param_1;
          lVar10 = 0;
          do {
            if (uVar17 == 0) {
              do {
                lVar18 = lVar10 + 1;
                if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10377f8c8);
                  (*pcVar8)();
                }
                if ((long)(uVar16 + 0x3f >> 6) <= lVar18) {
                  func_0x000107c6142c(param_4);
                  func_0x000107c61430(param_1,2);
                  return 4.94065645841247e-324;
                }
                uVar17 = *(ulong *)(*(long *)((long)register0x00000008 + -0x78) + lVar18 * 8);
                lVar10 = lVar10 + 1;
              } while (uVar17 == 0);
              uVar13 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              *(ulong *)((long)register0x00000008 + -0x68) = uVar17 - 1 & uVar17;
              uVar17 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar18 * 0x40;
            }
            else {
              uVar13 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              *(ulong *)((long)register0x00000008 + -0x68) = uVar17 - 1 & uVar17;
              uVar17 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar10 << 6;
              lVar18 = lVar10;
            }
            plVar1 = (long *)(*(long *)((long)param_1 + 0x30) + uVar17 * 0x10);
            lVar10 = *plVar1;
            uVar13 = plVar1[1];
            puVar14 = (undefined8 *)(*(long *)((long)param_1 + 0x38) + uVar17 * 0x18);
            uVar2 = *puVar14;
            uVar3 = puVar14[1];
            uVar4 = *(undefined1 *)(puVar14 + 2);
            func_0x000107c61434(uVar13);
            func_0x000101edf31c(uVar2,uVar3,uVar4);
            uVar17 = uVar13;
            func_0x000100029284();
            func_0x000107c6142c(uVar13);
            if ((uVar17 & 1) == 0) {
              func_0x000107c6142c(param_4);
              func_0x000107c61430(*(undefined8 *)((long)register0x00000008 + -0x70),2);
              func_0x000101edeb30(uVar2,uVar3,uVar4);
              goto code_r0x00010377f8a0;
            }
            puVar15 = (ulong *)(*(long *)((long)param_4 + 0x38) + lVar10 * 0x18);
            uVar17 = *puVar15;
            uVar13 = puVar15[1];
            uVar5 = (undefined1)puVar15[2];
            func_0x000101edf31c(uVar17,uVar13,uVar5);
            uVar11 = uVar17;
            FUN_103aa849c(uVar17,uVar13,uVar5,uVar2,uVar3,uVar4);
            func_0x000101edeb30(uVar17,uVar13,uVar5);
            func_0x000101edeb30(uVar2,uVar3,uVar4);
            param_1 = *(double *)((long)register0x00000008 + -0x70);
            uVar17 = *(ulong *)((long)register0x00000008 + -0x68);
            lVar10 = lVar18;
          } while ((uVar11 & 1) != 0);
          func_0x000107c6142c(param_4);
          func_0x000107c61430(param_1,2);
        }
code_r0x00010377f8a0:
        dVar12 = 0.0;
      }
      return dVar12;
    }
  }
  else if ((param_6 == '\x05') && (param_5 == 0 && param_4 == 0.0)) {
    return 4.94065645841247e-324;
  }
  return 0.0;
}



/* Entry: 103aa8ca8; end: 103aa8ce7;  */

void FUN_103aa8ca8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe22c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4abe0;
  func_0x000107c61520(&UNK_10dc4abe0,&UNK_1106c9838);
  puRam0000000112fe22c0 = puVar1;
  return;
}



/* Entry: 103aa8ce8; end: 103aa8cf7;  */

void FUN_103aa8ce8(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 2);
  if ((1 < *pbVar1 - 3) && (param_1 = param_1 + 1, *pbVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}


