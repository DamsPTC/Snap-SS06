/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025fcdfc; end: 1025fcf37;  */

void FUN_1025fcdfc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001025fcfec(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x0001025fd010(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1025fcf38; end: 1025fcf8b;  */

void FUN_1025fcf38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001025fd010(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025fcf8c; end: 1025fcfaf;  */

void FUN_1025fcf8c(long param_1,long param_2)

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



/* Entry: 1025fcfb0; end: 1025fcfe3;  */

void FUN_1025fcfb0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  param_1[3] = PTR___sSiN_11034deb0;
  *param_1 = param_2;
  return;
}



/* Entry: 1025fcfe4; end: 1025fd04f;  */

void FUN_1025fcfe4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  auStack_50[0] = param_1;
  func_0x000107c615f0();
  puVar3 = &uStack_38;
  func_0x000107c6147c(puVar3,auStack_50,PTR___syXlN_11034f1a0 + 8,PTR___sSiN_11034deb0,6);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(lVar4 + 0x38);
      lVar2 = *(long *)(lVar4 + 0x40);
      func_0x0001025fcfec(lVar4 + 0x20,uVar1);
      (**(code **)(lVar2 + 8))(uStack_38,uVar1,lVar2);
      func_0x000107c61574(lVar4);
    }
  }
  return;
}



/* Entry: 1025fd050; end: 1025fd0fb;  */

void FUN_1025fd050(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1025fd0fc; end: 1025fd10f;  */

bool FUN_1025fd0fc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1025fd110; end: 1025fd433;  */

void FUN_1025fd110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 uStack_41;
  
  func_0x000107c61614(unaff_x20 + 0x18,0);
  uVar3 = 0x112eaf150;
  func_0x0001000285a8(0x112eaf150,&UNK_10dac3650);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x000107c61168(PTR__OBJC_CLASS___CADisplayLink_1126b94a8);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c42110(puVar1);
  func_0x000107c61180();
  func_0x000107c576a4();
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  func_0x000107c4c190();
  func_0x000107c61180();
  func_0x000107c3d8fc(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61604(unaff_x20 + 0x18,puVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_41 = 0;
  func_0x000107c6157c(uVar3);
  func_0x0001002a64a8(&uStack_41);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1025fd434; end: 1025fd48b; -[_TtC31MapAdEventLoggingImplementation25MapAdMapVisibilityTracker displayLinkFiredWithDisplayLink:] */

void FUN_1025fd434(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  uStack_31 = (undefined1)uVar1;
  func_0x0001025fd260();
  func_0x0001002a64a8(&uStack_31);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1025fd48c; end: 1025fd5bb;  */

undefined8 FUN_1025fd48c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = param_1;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (uVar2 == 0) {
    func_0x000107c3f9e0();
    func_0x000107c61180();
    uVar3 = 0;
    func_0x0001012ea70c(0);
    uVar2 = param_1;
    func_0x000107c5fc54(param_1,uVar3);
    func_0x000107c61170(param_1);
    uVar8 = uVar2 & 0xffffffffffffff8;
    if (uVar2 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar6 = uVar8;
      if (0x7fffffffffffffff < uVar2) {
        uVar6 = uVar2;
      }
      func_0x000107c60480();
    }
    uVar7 = 0;
    do {
      if (uVar6 == uVar7) {
        func_0x000107c6142c(uVar2);
        return 0;
      }
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1025fd5a8);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(uVar2 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar7;
        func_0x000100f3b77c(uVar7,uVar2);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025fd570);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      FUN_1025fd48c();
      func_0x000107c61170(uVar4);
      uVar7 = uVar7 + 1;
    } while ((uVar5 & 1) == 0);
    func_0x000107c6142c(uVar2);
  }
  else {
    func_0x000107c61170();
  }
  return 1;
}



/* Entry: 1025fd5bc; end: 1025fd617;  */

void FUN_1025fd5bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61610(unaff_x20 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025fd618; end: 1025fd77f;  */

int FUN_1025fd618(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1025fd694;
        goto LAB_1025fd678;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1025fd678:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1025fd694:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1025fd780; end: 1025fd7bf;  */

void FUN_1025fd780(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eaf148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac35d4;
  func_0x000107c61520(&UNK_10dac35d4,&UNK_110529778);
  puRam0000000112eaf148 = puVar1;
  return;
}



/* Entry: 1025fd7c0; end: 1025fd89f;  */

void FUN_1025fd7c0(void)

{
  FUN_1025fd780();
  func_0x0001000c2068();
  return;
}



/* Entry: 1025fd8a0; end: 1025fd8ab; -[SCMapAdPlaceProfileLoggingEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025fd8a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eaf158;
  func_0x000107c61428(param_1 + _DAT_112eaf158,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025fd8ac; end: 1025fd8b7; -[SCMapAdPlaceProfileLoggingEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025fd8ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eaf158;
  func_0x000107c61428(param_1 + _DAT_112eaf158,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025fd8b8; end: 1025fd8c3; -[SCMapAdPlaceProfileLoggingEntryPoint promotedPlaceProfileActionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025fd8b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eaf160;
  func_0x000107c61428(param_1 + _DAT_112eaf160,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025fd8c4; end: 1025fd8cf; -[SCMapAdPlaceProfileLoggingEntryPoint setPromotedPlaceProfileActionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025fd8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eaf160;
  func_0x000107c61428(param_1 + _DAT_112eaf160,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025fd8d0; end: 1025fd8db; -[SCMapAdPlaceProfileLoggingEntryPoint mapAdLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025fd8d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eaf168;
  func_0x000107c61428(param_1 + _DAT_112eaf168,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025fd8dc; end: 1025fd91f;  */

void FUN_1025fd8dc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025fd920; end: 1025fd92b; -[SCMapAdPlaceProfileLoggingEntryPoint setMapAdLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025fd920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eaf168;
  func_0x000107c61428(param_1 + _DAT_112eaf168,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025fd92c; end: 1025fda5f;  */

void FUN_1025fd92c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025fda60; end: 1025fda87; -[SCMapAdPlaceProfileLoggingEntryPoint begin] */

void FUN_1025fda60(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001025fd980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025fda88; end: 1025fdacb; -[SCMapAdPlaceProfileLoggingEntryPoint end] */

void FUN_1025fda88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025fdacc; end: 1025fdccf;  */

void FUN_1025fdacc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0f4cbc0)) ||
       (func_0x000107c605b8(0xd000000000000022,0x800000010f0b3440,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57944();
    }
    else {
      if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef0f4cb90)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000014,0x800000010f0b3470,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MapAdEventLoggingImplementation/SCMapAdPlaceProfileLoggingEntryPoint.swift"
                              ,0x4a,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1025fdcd0);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c561d8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025fdcd0; end: 1025fdd7b; -[SCMapAdPlaceProfileLoggingEntryPoint setValue:forIvarName:] */

void FUN_1025fdcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1025fdacc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025fdd7c; end: 1025fde03; -[SCMapAdPlaceProfileLoggingEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025fdd7c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eaf158,0);
  func_0x000107c61614(param_1 + _DAT_112eaf160,0);
  func_0x000107c61614(param_1 + _DAT_112eaf168,0);
  *(undefined8 *)(param_1 + _DAT_112eaf170) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025fde04; end: 1025fde37;  */

void FUN_1025fde04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025fde38; end: 1025fde8f; -[SCMapAdPlaceProfileLoggingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025fde38(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eaf158);
  func_0x000107c61610(param_1 + _DAT_112eaf160);
  func_0x000107c61610(param_1 + _DAT_112eaf168);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eaf170));
  return;
}



/* Entry: 1025fde90; end: 1025fdef3;  */

void FUN_1025fde90(void)

{
  func_0x000107c61168(&PTR_PTR_112853c58);
  return;
}



/* Entry: 1025fdef4; end: 1025fdff3;  */

void FUN_1025fdef4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte bStack_48;
  
  lVar4 = *(long *)(*unaff_x20 + 0x10);
  uVar1 = param_1;
  FUN_10268f208();
  uVar2 = uVar1;
  FUN_1025feca8();
  func_0x000107c6142c(uVar1);
  uVar1 = uVar2;
  func_0x000107c5f9dc(uVar2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar2);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0b3500);
  func_0x000107c2c4c0(0x10000000000000,uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  plVar3 = (long *)(lVar4 + 0x10);
  func_0x0001000a8868(plVar3,*(undefined8 *)(lVar4 + 0x28));
  func_0x000105edad70(*(undefined8 *)(*plVar3 + 0x10),param_3 & 1,1);
  uStack_58 = param_1;
  uStack_50 = param_2;
  bStack_48 = param_3;
  func_0x0001002a64a8(&uStack_58);
  return;
}



/* Entry: 1025fdff4; end: 1025fe1af;  */

void FUN_1025fdff4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 uStack_31;
  
  lVar4 = *(long *)(*unaff_x20 + 0x10);
  uVar1 = param_1;
  FUN_102692088();
  uVar2 = uVar1;
  FUN_1025feca8();
  func_0x000107c6142c(uVar1);
  uVar1 = uVar2;
  func_0x000107c5f9dc(uVar2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar2);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0b34e0);
  func_0x000107c2c4c0(0x10000000000000,uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  plVar3 = (long *)(lVar4 + 0x10);
  func_0x0001000a8868(plVar3,*(undefined8 *)(lVar4 + 0x28));
  func_0x000105edac58(*(undefined8 *)(*plVar3 + 0x10),(uint)param_1 & 1,1);
  uStack_31 = (undefined1)param_1;
  func_0x0001007d6d78(&uStack_31);
  return;
}



/* Entry: 1025fe1b0; end: 1025fe3d3;  */

void FUN_1025fe1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  uVar4 = 0x2000301 >> (ulong)((param_4 & 3) << 3);
  uStack_50 = 6;
  uStack_48 = CONCAT11(param_5,(char)uVar4);
  lVar10 = *(long *)(unaff_x20 + 0x10);
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x0001025fe77c(&uStack_68);
  plVar5 = (long *)(lVar10 + 0x10);
  func_0x0001000a8868(plVar5,*(undefined8 *)(lVar10 + 0x28));
  uVar4 = uVar4 & 3;
  uVar9 = *(undefined8 *)(*plVar5 + 0x10);
  uVar3 = 0xed000079726f7473;
  if (uVar4 != 2) {
    uVar3 = 0xec0000006e6f6369;
  }
  uVar1 = 0x79726f7473;
  if (uVar4 != 0) {
    uVar1 = 0x6e6f6369;
  }
  uVar2 = 0xe500000000000000;
  if (uVar4 != 0) {
    uVar2 = 0xe400000000000000;
  }
  uVar6 = 0x5f64657375636f66;
  if (uVar4 < 2) {
    uVar3 = uVar2;
    uVar6 = uVar1;
  }
  func_0x000107c5fadc(uVar6,uVar3);
  func_0x000107c6142c(uVar3);
  puVar7 = PTR___sSiN_11034deb0;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  uStack_90 = param_3;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar8);
  func_0x000105eda57c(uVar9,uVar6,puVar7,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  uStack_88 = uStack_60;
  uStack_90 = uStack_68;
  uStack_78 = uStack_50;
  uStack_80 = uStack_58;
  uStack_70 = uStack_48;
  func_0x0001002a64a8(&uStack_90);
  return;
}



/* Entry: 1025fe3d4; end: 1025fe417;  */

void FUN_1025fe3d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025fe418; end: 1025fe4ff;  */

void FUN_1025fe418(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(*unaff_x20 + 0x10);
  uVar1 = param_1;
  FUN_102691ec8();
  uVar2 = uVar1;
  FUN_1025feca8();
  func_0x000107c6142c(uVar1);
  uVar1 = uVar2;
  func_0x000107c5f9dc(uVar2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar2);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0b35a0);
  func_0x000107c2c4c0(0x10000000000000,uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  plVar3 = (long *)(lVar4 + 0x10);
  func_0x0001000a8868(plVar3,*(undefined8 *)(lVar4 + 0x28));
  func_0x000105edaa6c(*(undefined8 *)(*plVar3 + 0x10),1);
  uStack_38 = param_1;
  func_0x0001002a64a8(&uStack_38);
  return;
}



/* Entry: 1025fe500; end: 1025fe577;  */

void FUN_1025fe500(void)

{
  func_0x0001025fe0e0();
  return;
}



/* Entry: 1025fe578; end: 1025fe67f;  */

void FUN_1025fe578(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte bStack_48;
  
  lVar4 = *(long *)(*unaff_x20 + 0x10);
  uVar1 = param_1;
  FUN_10268ee78();
  uVar2 = uVar1;
  FUN_1025feca8();
  func_0x000107c6142c(uVar1);
  uVar1 = uVar2;
  func_0x000107c5f9dc(uVar2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar2);
  uVar2 = 0x6c65646f4d204433;
  func_0x000107c5fadc(0x6c65646f4d204433,0xee00746e65764520);
  func_0x000107c2c4c0(0x10000000000000,uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  plVar3 = (long *)(lVar4 + 0x10);
  func_0x0001000a8868(plVar3,*(undefined8 *)(lVar4 + 0x28));
  func_0x000105edae88(*(undefined8 *)(*plVar3 + 0x10),param_3 & 1,1);
  uStack_58 = param_1;
  uStack_50 = param_2;
  bStack_48 = param_3;
  func_0x0001002a64a8(&uStack_58);
  return;
}



/* Entry: 1025fe680; end: 1025fe877;  */

/* WARNING: Possible PIC construction at 0x0001025fe760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025fe764) */

void FUN_1025fe680(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  FUN_10268e6b8();
  lVar3 = lVar2;
  FUN_1025feca8();
  func_0x000107c6142c(lVar2);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar3);
  uVar4 = 0xd00000000000001e;
  pcVar1 = "Feature Loaded Event";
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    uVar4 = 0xd000000000000014;
    pcVar1 = "Pin Visibility Event (No-Fill)";
  }
  func_0x000107c5fb78(uVar4,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c2c4c0(0x10000000000000,lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1025fe878; end: 1025fe8ab;  */

undefined8 FUN_1025fe878(undefined8 param_1)

{
  (*(code *)(undefined *)0x10268ebec)();
  return param_1;
}



/* Entry: 1025fe8ac; end: 1025fe99f;  */

void FUN_1025fe8ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = param_1;
  FUN_1026914bc(param_1,0);
  uVar2 = uVar1;
  FUN_1025feca8();
  func_0x000107c6142c(uVar1);
  uVar1 = uVar2;
  func_0x000107c5f9dc(uVar2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar2);
  uVar2 = 0x206e6f6973736553;
  func_0x000107c5fadc(0x206e6f6973736553,0xef64657472617453);
  func_0x000107c2c4c0(0x10000000000000,uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  plVar3 = (long *)(lVar4 + 0x10);
  func_0x0001000a8868(plVar3,*(undefined8 *)(lVar4 + 0x28));
  func_0x000105eda128(*(undefined8 *)(*plVar3 + 0x10),1);
  uStack_38 = 0;
  uStack_40 = param_1;
  func_0x0001007d6d78(&uStack_40);
  return;
}



/* Entry: 1025fe9a0; end: 1025feaa7;  */

void FUN_1025fe9a0(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uStack_50;
  undefined1 uStack_48;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar5 = (ulong)~param_1 & 1;
  uVar1 = uVar5;
  FUN_1026914bc(uVar5,1);
  uVar2 = uVar1;
  FUN_1025feca8();
  func_0x000107c6142c(uVar1);
  uVar1 = uVar2;
  func_0x000107c5f9dc(uVar2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar2);
  uVar3 = 0x206e6f6973736553;
  func_0x000107c5fadc(0x206e6f6973736553,0xed00006465646e45);
  func_0x000107c2c4c0(0x10000000000000,uVar1,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  plVar4 = (long *)(lVar6 + 0x10);
  func_0x0001000a8868(plVar4,*(undefined8 *)(lVar6 + 0x28));
  func_0x000105eda218(*(undefined8 *)(*plVar4 + 0x10),1);
  uStack_48 = 1;
  uStack_50 = uVar5;
  func_0x0001007d6d78(&uStack_50);
  return;
}



/* Entry: 1025feaa8; end: 1025febab;  */

void FUN_1025feaa8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = param_1;
  FUN_1026914bc(param_1,2);
  uVar2 = uVar1;
  FUN_1025feca8();
  func_0x000107c6142c(uVar1);
  uVar1 = uVar2;
  func_0x000107c5f9dc(uVar2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar2);
  uVar2 = 0x206e6f6973736553;
  func_0x000107c5fadc(0x206e6f6973736553,param_2);
  func_0x000107c2c4c0(0x10000000000000,uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  plVar3 = (long *)(lVar4 + 0x10);
  func_0x0001000a8868(plVar3,*(undefined8 *)(lVar4 + 0x28));
  (*param_3)(*(undefined8 *)(*plVar3 + 0x10),1);
  uStack_58 = 2;
  uStack_60 = param_1;
  func_0x0001007d6d78(&uStack_60);
  return;
}



/* Entry: 1025febac; end: 1025febef;  */

void FUN_1025febac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025febf0; end: 1025feca7;  */

void FUN_1025febf0(void)

{
  FUN_1025fe8ac();
  return;
}



/* Entry: 1025feca8; end: 1025fefb7;  */

undefined * FUN_1025feca8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    uVar5 = 0x112d37798;
    func_0x0001000285a8(0x112d37798,&UNK_10d902e10);
    func_0x000107c60498(puVar12,uVar5);
    puVar13 = puVar12;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar13);
  func_0x000107c61434(param_1);
  lVar15 = 0;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = lVar15 << 10 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 4;
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar7);
      uStack_168 = *puVar10;
      uVar1 = puVar10[1];
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar7);
      uVar5 = *puVar10;
      uVar2 = puVar10[1];
      uStack_160 = uVar1;
      func_0x000107c61438(uVar1,2);
      func_0x000107c61438(uVar2,2);
      puVar12 = PTR___sSSN_11034da80;
      func_0x000107c6147c(&uStack_158,&uStack_168,PTR___sSSN_11034da80,
                          PTR___ss11AnyHashableVN_11034e448,7);
      uStack_178 = uVar5;
      uStack_170 = uVar2;
      func_0x000107c6147c(auStack_130,&uStack_178,puVar12,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar1);
      if (lStack_140 == 0) {
        func_0x000107c61574(param_1);
        FUN_1025fefb8(&uStack_158);
        func_0x000107c61574(puVar13);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1025fefb8);
        (*pcVar3)();
      }
      uStack_108 = uStack_150;
      uStack_110 = uStack_158;
      lStack_f8 = lStack_140;
      uStack_100 = uStack_148;
      uStack_f0 = uStack_138;
      func_0x000100102924(auStack_130,auStack_e8);
      uStack_98 = uStack_108;
      uStack_a0 = uStack_110;
      lStack_88 = lStack_f8;
      uStack_90 = uStack_100;
      uStack_80 = uStack_f0;
      func_0x000100102924(auStack_e8,auStack_c0);
      uVar6 = *(ulong *)(puVar13 + 0x28);
      func_0x000107c602c4();
      uVar11 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
      uVar8 = uVar6 >> 6;
      uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(puVar13 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar7 == 0) {
        bVar4 = false;
        uVar7 = 0x3f - uVar11 >> 6;
        do {
          uVar6 = uVar8 + 1;
          if ((uVar6 == uVar7) && (bVar4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1025fef9c);
            (*pcVar3)();
          }
          uVar8 = 0;
          if (uVar6 != uVar7) {
            uVar8 = uVar6;
          }
          bVar4 = (bool)(uVar6 == uVar7 | bVar4);
        } while (*(ulong *)(puVar13 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
        uVar7 = ~*(ulong *)(puVar13 + uVar8 * 8 + 0x40);
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
      }
      else {
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar13 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar13 + uVar8 + 0x40)
      ;
      puVar10 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar7 * 0x28);
      puVar10[1] = uStack_98;
      *puVar10 = uStack_a0;
      puVar10[3] = lStack_88;
      puVar10[2] = uStack_90;
      puVar10[4] = uStack_80;
      func_0x000100102924(auStack_c0,*(long *)(puVar13 + 0x38) + uVar7 * 0x20);
      *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
    }
    bVar4 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1025fef98);
      (*pcVar3)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar15) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar15];
  }
  func_0x000107c61574(puVar13);
  func_0x000107c61574(param_1);
  return puVar13;
}



/* Entry: 1025fefb8; end: 1025fefff;  */

undefined8 FUN_1025fefb8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d55e70;
  func_0x0001000285a8(0x112d55e70,&UNK_10d92d170);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1025ff000; end: 1025ff013; -[_TtC35MapAdTrackingServicesImplementation28MapAdPlaceProfileEventLogger logPlaceProfileOpenWithPlaceID:] */

void FUN_1025ff000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_1025ff014(param_3,param_2,0,0x64656e65706f);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025ff014; end: 1025ff137;  */

void FUN_1025ff014(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar3 = param_1;
  FUN_102690edc();
  uVar1 = uVar3;
  FUN_1025feca8();
  func_0x000107c6142c(uVar3);
  uVar3 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar1);
  uVar1 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0b35c0);
  func_0x000107c2c4c0(0x10000000000000,uVar3,uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  plVar2 = (long *)(lVar4 + 0x10);
  func_0x0001000a8868(plVar2,*(undefined8 *)(lVar4 + 0x28));
  uVar3 = *(undefined8 *)(*plVar2 + 0x10);
  func_0x000107c5fadc(param_4,0xe600000000000000);
  func_0x000105edaae4(uVar3,param_4,1);
  func_0x000107c61170(param_4);
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x0001002a64a8(&uStack_68);
  return;
}



/* Entry: 1025ff138; end: 1025ff14b; -[_TtC35MapAdTrackingServicesImplementation28MapAdPlaceProfileEventLogger logPlaceProfileClosedWithPlaceID:] */

void FUN_1025ff138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_1025ff014(param_3,param_2,1,0x6465736f6c63);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025ff14c; end: 1025ff2db;  */

void FUN_1025ff14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_1025ff014(param_3,param_2,param_4,param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025ff2dc; end: 1025ff337; -[_TtC35MapAdTrackingServicesImplementation28MapAdPlaceProfileEventLogger logPlaceProfileActionWithPlaceID:action:] */

void FUN_1025ff2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001025ff1b8(param_3,param_2,param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025ff338; end: 1025ff4b7;  */

void FUN_1025ff338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_8;
  func_0x000107c61434(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_6);
  uVar1 = param_8;
  func_0x000107c6157c(param_8);
  FUN_10268fa18();
  uVar2 = uVar1;
  FUN_1025feca8();
  func_0x000107c6142c(uVar1);
  uVar1 = uVar2;
  func_0x000107c5f9dc(uVar2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar2);
  uVar2 = 0x20706154206e6950;
  func_0x000107c5fadc(0x20706154206e6950,0xed0000746e657645);
  func_0x000107c2c4c0(0x10000000000000,uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  plVar3 = (long *)(lVar4 + 0x10);
  func_0x0001000a8868(plVar3,*(undefined8 *)(lVar4 + 0x28));
  func_0x000105edafa0(*(undefined8 *)(*plVar3 + 0x10),1);
  uStack_c8 = uStack_88;
  uStack_d0 = uStack_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  func_0x0001002a64a8(&uStack_d0);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 1025ff4b8; end: 1025ff5cf; -[_TtC35MapAdTrackingServicesImplementation28MapAdPlaceProfileEventLogger logPlacePinTappedWithPlaceID:uiContainer:baseView:adWillDismissHandler:adDidDismissHandler:] */

/* WARNING: Possible PIC construction at 0x0001025ff5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ff5b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025ff5a4) */
/* WARNING: Removing unreachable block (ram,0x0001025ff5b4) */

void FUN_1025ff4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110529900;
  func_0x000107c613fc(&UNK_110529900,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar2 = &UNK_110529928;
  func_0x000107c613fc(&UNK_110529928,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_1);
  FUN_1025ff338(param_3,param_2,param_4,param_5,FUN_1025ff614,puVar1,0x1025ff620,puVar2);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1025ff5d0; end: 1025ff613;  */

void FUN_1025ff5d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025ff614; end: 1025ff623;  */

void FUN_1025ff614(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001025ff61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1025ff624; end: 1025ff6c7;  */

void FUN_1025ff624(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1025ff6c8; end: 1025ff733;  */

void FUN_1025ff6c8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x38));
  return;
}



/* Entry: 1025ff734; end: 1025ff85f;  */

void FUN_1025ff734(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  bVar4 = *(byte *)(param_1 + 0x40);
  uVar3 = 0xed000079726f7473;
  if (bVar4 != 2) {
    uVar3 = 0xec0000006e6f6369;
  }
  uVar1 = 0x79726f7473;
  if (bVar4 != 0) {
    uVar1 = 0x6e6f6369;
  }
  uVar2 = 0xe500000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe400000000000000;
  }
  uVar6 = 0x5f64657375636f66;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar6 = uVar1;
  }
  uVar5 = *(undefined1 *)(param_1 + 0x41);
  func_0x000107c5fadc(uVar6,uVar3);
  func_0x000107c6142c(uVar3);
  puVar7 = PTR___sSiN_11034deb0;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar8);
  func_0x000105eda308(uVar9,uVar5,uVar6,puVar7,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1025ff860; end: 1025ff8a3;  */

void FUN_1025ff860(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025ff8a4; end: 1025ffb7b;  */

void FUN_1025ff8a4(undefined8 param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_2 < 3) {
    if (param_2 == 0) {
LAB_1025ff9f4:
      uVar7 = 0xe700000000000000;
      uVar6 = 0x6e776f6e6b6e75;
    }
    else if (param_2 == 1) {
      uVar7 = 0xe800000000000000;
      uVar6 = 0x74726f7077656976;
    }
    else {
      if (param_2 != 2) goto LAB_1025ffa24;
      uVar7 = 0xea00000000004955;
      uVar6 = 0x79426e6564646968;
    }
  }
  else {
    if (param_2 - 4U < 2) goto LAB_1025ff9f4;
    if (param_2 == 3) {
      uVar7 = 0xe90000000000006e;
      uVar6 = 0x6f6973696c6c6f63;
    }
    else {
      if (param_2 == 6) {
        uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar7 = 0xed000079726f7473;
        if (param_3 != 2) {
          uVar7 = 0xec0000006e6f6369;
        }
        uVar9 = 0x79726f7473;
        if (param_3 != 0) {
          uVar9 = 0x6e6f6369;
        }
        uVar1 = 0xe500000000000000;
        if (param_3 != 0) {
          uVar1 = 0xe400000000000000;
        }
        uVar6 = 0x5f64657375636f66;
        if (param_3 < 2) {
          uVar7 = uVar1;
          uVar6 = uVar9;
        }
        func_0x000107c5fadc(uVar6,uVar7);
        func_0x000107c6142c(uVar7);
        puVar3 = PTR___sSiN_11034deb0;
        puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar5);
        func_0x000105eda57c(uVar8,uVar6,puVar3,1);
        goto LAB_1025ffb54;
      }
LAB_1025ffa24:
      uVar7 = 0xe800000000000000;
      uVar6 = 0x646564756c63636f;
    }
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = 0xed000079726f7473;
  if (param_3 != 2) {
    uVar8 = 0xec0000006e6f6369;
  }
  uVar1 = 0x79726f7473;
  if (param_3 != 0) {
    uVar1 = 0x6e6f6369;
  }
  uVar2 = 0xe500000000000000;
  if (param_3 != 0) {
    uVar2 = 0xe400000000000000;
  }
  uVar4 = 0x5f64657375636f66;
  if (param_3 < 2) {
    uVar8 = uVar2;
    uVar4 = uVar1;
  }
  func_0x000107c5fadc(uVar4,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(uVar6,uVar7);
  func_0x000107c6142c(uVar7);
  puVar3 = PTR___sSiN_11034deb0;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar5);
  func_0x000105eda7ac(uVar9,uVar4,uVar6,puVar3,1);
  func_0x000107c61170(uVar4);
LAB_1025ffb54:
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1025ffb7c; end: 1025ffcbb;  */

void FUN_1025ffb7c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar4 = 0xec000000656c6966;
  uVar3 = 0x6f7250646e617262;
  if (param_1 != 6) {
    uVar4 = 0xe700000000000000;
    uVar3 = 0x6e776f6e6b6e75;
  }
  uVar5 = 0x6c6c6163;
  if (param_1 != 4) {
    uVar5 = 0x65746973626577;
  }
  uVar1 = 0xe400000000000000;
  if (param_1 != 4) {
    uVar1 = 0xe700000000000000;
  }
  if (param_1 < 6) {
    uVar4 = uVar1;
    uVar3 = uVar5;
  }
  uVar5 = 0xea0000000000736e;
  uVar1 = 0x6f69746365726964;
  if (param_1 != 2) {
    uVar5 = 0xe800000000000000;
    uVar1 = 0x657469726f766166;
  }
  uVar2 = 0x64656e65706f;
  if (param_1 != 0) {
    uVar2 = 0x6465736f6c63;
  }
  if (param_1 < 2) {
    uVar5 = 0xe600000000000000;
    uVar1 = uVar2;
  }
  if (param_1 < 4) {
    uVar4 = uVar5;
    uVar3 = uVar1;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000105edaae4(uVar5,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1025ffcbc; end: 1025ffd1f;  */

undefined8
FUN_1025ffcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1025ffd20(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 1025ffd20; end: 102600063;  */

undefined8 FUN_1025ffd20(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined8 *puVar13;
  long alStack_f0 [2];
  long lStack_d8;
  long lStack_c0;
  undefined **ppuStack_b8;
  long alStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar1 = param_2;
  func_0x000107c4c370();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
  }
  else {
    lVar1 = lVar2;
    func_0x000107c52060();
    func_0x000107c615e8(lVar2);
    lVar3 = 0;
    func_0x0001025ff884();
    lVar2 = lVar3;
    func_0x000107c613fc();
    puVar4 = PTR_PTR_1126aabc0;
    alStack_f0[1] = param_1;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar2 + 0x10) = puVar4;
    ppuStack_68 = &PTR_DAT_110529998;
    uVar5 = 0;
    alStack_88[0] = lVar2;
    lStack_70 = lVar3;
    func_0x0001025ff6a8();
    uVar6 = uVar5;
    func_0x000107c613fc();
    func_0x0001000c6518(alStack_88,lVar3);
    alStack_f0[0] = param_4;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    puVar13 = (undefined8 *)((long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar13);
    FUN_102600080(lVar1,*puVar13,uVar6);
    func_0x0001000834e4(alStack_88);
    ppuStack_68 = &PTR_DAT_110529940;
    alStack_88[0] = lVar1;
    lStack_70 = uVar5;
    FUN_102600448(0);
    func_0x000107c610f8();
    func_0x000107c6157c(lVar1);
    plVar7 = alStack_88;
    func_0x000102600368(plVar7);
    func_0x000107c42c20(param_3);
    func_0x000107c61170(plVar7);
    lVar8 = 0;
    func_0x0001025febd0();
    lVar2 = lVar8;
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar1;
    lVar9 = 0;
    func_0x0001025fe3f8();
    lVar3 = lVar9;
    func_0x000107c613fc();
    *(long *)(lVar3 + 0x10) = lVar1;
    lVar10 = 0;
    func_0x0001025ff5f4();
    func_0x000107c613fc();
    *(long *)(lVar10 + 0x10) = lVar1;
    lVar11 = 0;
    func_0x0001025fded4();
    lVar12 = lVar11;
    func_0x000107c613fc();
    *(long *)(lVar12 + 0x10) = lVar1;
    ppuStack_68 = &PTR_DAT_1105298c0;
    ppuStack_90 = &PTR_DAT_110529888;
    ppuStack_b8 = &PTR_DAT_110529868;
    lStack_d8 = lVar12;
    lStack_c0 = lVar11;
    alStack_b0[0] = lVar3;
    lStack_98 = lVar9;
    alStack_88[0] = lVar2;
    lStack_70 = lVar8;
    FUN_10268e53c(0);
    func_0x000107c610f8();
    func_0x000107c61580(lVar1,4);
    func_0x000107c6157c(lVar2);
    func_0x000107c6157c(lVar3);
    func_0x000107c6157c(lVar10);
    func_0x000107c6157c(lVar12);
    plVar7 = alStack_88;
    func_0x00010268e3bc(plVar7,alStack_b0,lVar10,&stack0xffffffffffffff28);
    param_4 = alStack_f0[0];
    func_0x000107c42c20(alStack_f0[0]);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(lVar10);
    func_0x000107c61574(lVar12);
    func_0x000107c61170(plVar7);
    func_0x000107c61170(alStack_f0[1]);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 102600064; end: 10260007f;  */

void FUN_102600064(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102600080; end: 10260027b;  */

long FUN_102600080(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uStack_68;
  undefined1 uStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar1 = 0;
  func_0x0001025ff884();
  ppuStack_38 = &PTR_DAT_110529998;
  uVar2 = 0x112eaf640;
  auStack_58[0] = param_2;
  uStack_40 = uVar1;
  func_0x0001000285a8(0x112eaf640,&UNK_10dac38c0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + 0x40) = uVar2;
  uVar2 = 0x112eaf648;
  func_0x0001000285a8(0x112eaf648,&UNK_10dac38c8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + 0x48) = uVar2;
  uVar2 = 0x112eaf650;
  func_0x0001000285a8(0x112eaf650,&UNK_10dac38d0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + 0x50) = uVar2;
  uVar2 = 0x112eaf658;
  func_0x0001000285a8(0x112eaf658,&UNK_10dac38d8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + 0x58) = uVar2;
  uVar2 = 0x112eaf660;
  func_0x0001000285a8(0x112eaf660,&UNK_10dac38e0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + 0x60) = uVar2;
  uVar2 = 0x112eaf668;
  func_0x0001000285a8(0x112eaf668,&UNK_10dac38e8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + 0x68) = uVar2;
  uStack_68 = uStack_68 & 0xffffffffffffff00;
  func_0x0001000285a8(0x112eaf670,&UNK_10dac38f0);
  func_0x000107c613fc();
  puVar3 = &uStack_68;
  func_0x00010042e6a0();
  *(ulong **)(param_3 + 0x70) = puVar3;
  uVar2 = 0x112eaf678;
  func_0x0001000285a8(0x112eaf678,&UNK_10dac38f8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + 0x78) = uVar2;
  uStack_60 = 0;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112eaf680,&UNK_10dac3900);
  func_0x000107c613fc();
  puVar3 = &uStack_68;
  func_0x00010042e6a0();
  *(ulong **)(param_3 + 0x38) = puVar3;
  FUN_10260029c(auStack_58,param_3 + 0x10);
  return param_3;
}



/* Entry: 10260027c; end: 10260029b;  */

void FUN_10260027c(void)

{
  func_0x000107c61168(&PTR_PTR_112eaf5e8);
  return;
}



/* Entry: 10260029c; end: 1026002b3;  */

undefined8 * FUN_10260029c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1026002b4; end: 1026002f7;  */

long FUN_1026002b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1026002f8; end: 1026003d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026002f8(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_1026002b4(param_1,unaff_x20 + _DAT_112eaf688);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1026003d8; end: 102600437; -[MapAdEventPublishingServices init] */

void FUN_1026003d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdEventPublishingServices.MapAdEventPublishingServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102600404);
  (*pcVar1)();
}



/* Entry: 102600438; end: 102600447; -[MapAdEventPublishingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102600438(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112eaf688))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eaf688));
  return;
}



/* Entry: 102600448; end: 102600467;  */

void FUN_102600448(void)

{
  func_0x000107c61168(&PTR_PTR_112853d28);
  return;
}



/* Entry: 102600468; end: 1026005bb;  */

void FUN_102600468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eaf6b8,&UNK_10dac3950);
  puVar1 = &UNK_110529b20;
  func_0x000107c613fc(&UNK_110529b20,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102600500,puVar1);
  return;
}



/* Entry: 1026005bc; end: 1026005cb;  */

undefined1  [16] FUN_1026005bc(void)

{
  return ZEXT816(0x110529b48);
}



/* Entry: 1026005cc; end: 1026005ff;  */

void FUN_1026005cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102600600; end: 10260081b;  */

void FUN_102600600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *param_2;
  func_0x0001000285a8(0x112eaf6c8,&UNK_10dac39a8);
  puVar2 = &uStack_48;
  uStack_48 = uVar5;
  func_0x0001000838ec(puVar2);
  func_0x0001026006a4(uVar3,uVar1,puVar2,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000100082720("MapArrivalNotificationsUpsellPresenterEntryPointProvider",0x38,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10260081c; end: 102600827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260081c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_10260113c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112eaf6d8) = 0;
  *(undefined8 *)(lVar7 + _DAT_112eaf6e0) = 0;
  *(long *)(lVar7 + _DAT_112eaf6e8) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112eaf6f0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112eaf6f8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112eaf700) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 102600828; end: 1026008cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102600828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eaf6d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eaf6e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eaf6e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eaf6f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eaf6f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eaf700) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026008cc; end: 102600cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1026008cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar5 = puStack_80;
  lVar2 = *(long *)(puStack_80 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(puVar5);
  lVar10 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar10;
  lVar3 = lVar10;
  if (lVar10 == 0) {
    lVar3 = 0;
    func_0x000107c5faec(0);
    uVar9 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c61174(lVar10);
  func_0x000100083b20(&puStack_80);
  puVar5 = puStack_80;
  puVar4 = puStack_80;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar5;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(puVar5);
    if (puVar4 != (undefined *)0x0) {
      func_0x000100083b20(&puStack_80);
      lVar6 = *(long *)(puStack_80 + _DAT_112fcd5d8);
      func_0x000107c61174();
      func_0x000107c61170(puStack_80);
      lVar10 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar10 == 0) {
        func_0x000107c61170(lVar3);
      }
      else {
        lVar6 = lVar10;
        func_0x000107c4c39c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(lVar3);
        if (lVar6 != 0) {
          lVar10 = ((undefined8 *)(lVar6 + _DAT_112fcd620))[1];
          if (lVar10 == 0) {
            uVar9 = *(undefined8 *)(lVar6 + _DAT_112fcd618);
            lVar3 = ((undefined8 *)(lVar6 + _DAT_112fcd618))[1];
            func_0x000107c61434(lVar3);
          }
          else {
            uVar9 = *(undefined8 *)(lVar6 + _DAT_112fcd620);
            lVar3 = lVar10;
          }
          puVar5 = &UNK_110529c60;
          func_0x000107c613fc(&UNK_110529c60,0x18,7);
          func_0x000107c61614(puVar5 + 0x10);
          puVar7 = PTR_PTR_1126aabc8;
          func_0x000107c610f8(PTR_PTR_1126aabc8);
          func_0x000107c6157c(puVar5);
          func_0x000107c61434(lVar10);
          func_0x000107c5fadc(uVar9,lVar3);
          func_0x000107c6142c(lVar3);
          pcStack_60 = FUN_10260115c;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          puStack_70 = &UNK_1000f6b44;
          puStack_68 = &UNK_110529c78;
          puStack_58 = puVar5;
          func_0x000107c60bc4(&puStack_80);
          func_0x000107c49200(puVar7);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(uVar9);
          puVar1 = puStack_58;
          func_0x000107c61574(puVar5);
          func_0x000107c61574(puVar1);
          lVar10 = ((undefined8 *)(lVar6 + _DAT_112fcd628))[1];
          if (lVar10 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar6 + _DAT_112fcd628);
            func_0x000107c61434(lVar10);
            func_0x000107c5fadc(uVar9,lVar10);
            func_0x000107c6142c(lVar10);
          }
          func_0x000107c52cc4(puVar7);
          func_0x000107c61170(uVar9);
          lVar10 = ((undefined8 *)(lVar6 + _DAT_112fcd630))[1];
          if (lVar10 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar6 + _DAT_112fcd630);
            func_0x000107c61434(lVar10);
            func_0x000107c5fadc(uVar9,lVar10);
            func_0x000107c6142c(lVar10);
          }
          func_0x000107c52d30(puVar7);
          func_0x000107c61170(uVar9);
          puVar5 = PTR_PTR_1126aabd0;
          func_0x000107c610f8(PTR_PTR_1126aabd0);
          func_0x000107c61174(puVar7);
          func_0x000107c49520(puVar5);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar7);
          func_0x000107c615e8(puVar4);
          return puVar5;
        }
      }
      func_0x000107c615e8(puVar4);
      goto LAB_102600ac4;
    }
  }
  func_0x000107c61170(lVar3);
LAB_102600ac4:
  func_0x000107c61170(lVar2);
  return (undefined *)0x0;
}



/* Entry: 102600cf8; end: 102600e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102600cf8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 0;
  FUN_1026015d0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112eaf730) = param_1;
  puVar4 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61174(param_1);
  plVar3 = &lStack_50;
  func_0x000107c61154(plVar3,puVar4,0,0);
  func_0x000107c61180();
  func_0x000107c53dec();
  FUN_1026012b4();
  puVar4 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c48e88();
  func_0x000107c61170(plVar3);
  func_0x000107c52684(puVar4);
  func_0x000107c5a074(puVar4);
  func_0x000107c5a05c(puVar4);
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_112eb7a88);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_58);
  func_0x000107c4ef3c(0x3fe6666666666666,puVar4);
  func_0x000107c615e8(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eaf6d8);
  *(undefined **)(unaff_x20 + _DAT_112eaf6d8) = puVar4;
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eaf6e0);
  *(long **)(unaff_x20 + _DAT_112eaf6e0) = plVar3;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 102600e60; end: 102600f9b; -[_TtC29MapArrivalNotificationsUpsell38MapArrivalNotificationsUpsellPresenter present] */

/* WARNING: Possible PIC construction at 0x000102600e88: Changing call to branch */

void FUN_102600e60(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1026008cc();
  if (lVar1 != 0) {
    FUN_102600cf8();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102600f9c; end: 102600ffb; -[_TtC29MapArrivalNotificationsUpsell38MapArrivalNotificationsUpsellPresenter init] */

void FUN_102600f9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapArrivalNotificationsUpsell.MapArrivalNotificationsUpsellPresenter",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102600fc8);
  (*pcVar1)();
}



/* Entry: 102600ffc; end: 102601073; -[_TtC29MapArrivalNotificationsUpsell38MapArrivalNotificationsUpsellPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102601058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260105c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102600ffc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eaf700));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eaf6e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eaf6f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eaf6f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eaf6d8));
  return;
}



/* Entry: 102601074; end: 1026010a7; -[_TtC29MapArrivalNotificationsUpsell38MapArrivalNotificationsUpsellPresenter tray:positionDidChange:] */

void FUN_102601074(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
    func_0x000107c61174();
    func_0x000102600ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1026010a8; end: 10260112b; -[_TtC29MapArrivalNotificationsUpsell38MapArrivalNotificationsUpsellPresenter tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026010a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xbff0000000000000;
  if (param_4 == 8) {
    lVar1 = *(long *)(param_1 + _DAT_112eaf6e0);
    if (lVar1 == 0) {
      uVar2 = 0x4082200000000000;
    }
    else {
      func_0x000107c61174(0xbff0000000000000);
      func_0x000107c61174(lVar1);
      FUN_102601180();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return uVar2;
}



/* Entry: 10260112c; end: 10260113b;  */

undefined1  [16] FUN_10260112c(void)

{
  return ZEXT816(0x110529c40);
}



/* Entry: 10260113c; end: 10260115b;  */

void FUN_10260113c(void)

{
  func_0x000107c61168(&PTR_PTR_112853de8);
  return;
}



/* Entry: 10260115c; end: 10260117f;  */

void FUN_10260115c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000102600ef0();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102601180; end: 10260125b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102601180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  
  lVar1 = _DAT_112eaf730;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eaf730);
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5e07c();
    func_0x000107c615e8(lVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar5 = 1.79769313486232e+308;
    func_0x000107c5b098(uVar4);
    func_0x000107c61170(uVar4);
    return dVar5 + 40.0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10260125c);
  (*pcVar2)();
}



/* Entry: 10260125c; end: 1026012b3; -[_TtC29MapArrivalNotificationsUpsell18TrayViewController initWithCoder:] */

void FUN_10260125c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "MapArrivalNotificationsUpsell/TrayViewController.swift",0x36,2,10,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026012b4);
  (*pcVar1)();
}



/* Entry: 1026012b4; end: 10260155f;  */

/* WARNING: Possible PIC construction at 0x000102601300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102601374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102601394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026013e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102601404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102601454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102601474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026014d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026014f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026014dc) */
/* WARNING: Removing unreachable block (ram,0x000102601478) */
/* WARNING: Removing unreachable block (ram,0x00010260155c) */
/* WARNING: Removing unreachable block (ram,0x0001026014ac) */
/* WARNING: Removing unreachable block (ram,0x000102601458) */
/* WARNING: Removing unreachable block (ram,0x000102601408) */
/* WARNING: Removing unreachable block (ram,0x000102601558) */
/* WARNING: Removing unreachable block (ram,0x00010260143c) */
/* WARNING: Removing unreachable block (ram,0x0001026013e8) */
/* WARNING: Removing unreachable block (ram,0x000102601398) */
/* WARNING: Removing unreachable block (ram,0x000102601554) */
/* WARNING: Removing unreachable block (ram,0x0001026013cc) */
/* WARNING: Removing unreachable block (ram,0x000102601378) */
/* WARNING: Removing unreachable block (ram,0x000102601304) */
/* WARNING: Removing unreachable block (ram,0x000102601550) */
/* WARNING: Removing unreachable block (ram,0x00010260135c) */
/* WARNING: Removing unreachable block (ram,0x0001026014fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026012b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + _DAT_112eaf730),param_2,0);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102601550);
  (*pcVar1)();
}



/* Entry: 102601560; end: 1026015bf; -[_TtC29MapArrivalNotificationsUpsell18TrayViewController initWithNibName:bundle:] */

void FUN_102601560(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapArrivalNotificationsUpsell.TrayViewController",0x30,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10260158c);
  (*pcVar1)();
}



/* Entry: 1026015c0; end: 1026015cf; -[_TtC29MapArrivalNotificationsUpsell18TrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026015c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eaf730));
  return;
}



/* Entry: 1026015d0; end: 1026015ef;  */

void FUN_1026015d0(void)

{
  func_0x000107c61168(&PTR_PTR_112853ed0);
  return;
}



/* Entry: 1026015f0; end: 1026017ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026015f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  func_0x000107c614f0(param_3);
  func_0x000107c610f8();
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eaf760);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eaf780) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eaf770) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eaf788) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102601800; end: 10260193b;  */

void FUN_102601800(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_48 [24];
  
  puVar3 = (undefined *)*param_2;
  if (*(long *)(puVar3 + 0x10) == 0) {
    puVar3 = PTR_PTR_1126aabe0;
    func_0x000107c610f8();
    uVar2 = 0;
    func_0x00010260279c(0,0x112eaf7b8,&PTR_PTR_1126aabf0);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar2);
    func_0x000107c47490();
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_3 != 0) {
      FUN_10260193c(puVar3);
      func_0x000107c61170(param_3);
      puVar4 = puVar3;
    }
    puVar3 = PTR_PTR_1126aabe0;
    func_0x000107c610f8();
    uVar2 = 0;
    func_0x00010260279c(0,0x112eaf7b8,&PTR_PTR_1126aabf0);
    puVar1 = puVar4;
    func_0x000107c5fc48(puVar4,uVar2);
    func_0x000107c6142c(puVar4);
    func_0x000107c47490();
  }
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10260193c; end: 102601bef;  */

undefined * FUN_10260193c(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  puStack_b8 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar10 = *(long *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    lVar11 = 0;
    do {
      puVar5 = puStack_b8;
      puVar7 = (ulong *)(param_1 + 0x20 + lVar11 * 0x38);
      uVar9 = puVar7[1];
      uVar13 = *puVar7;
      uStack_98 = puVar7[3];
      uStack_a0 = puVar7[2];
      uStack_88 = puVar7[5];
      uStack_90 = puVar7[4];
      uStack_80 = puVar7[6];
      uStack_b0 = uVar13;
      uStack_a8 = uVar9;
      if (0 < (long)uStack_80) {
        uVar8 = uVar13 & 0xffffffffffff;
        if ((uVar9 & 0x2000000000000000) != 0) {
          uVar8 = uVar9 >> 0x38 & 0xf;
        }
        if (uVar8 != 0) {
          if (*(long *)(puStack_b8 + 0x10) == 0) {
            FUN_10260272c(&uStack_b0,auStack_100);
          }
          else {
            func_0x000107c6068c(auStack_100,*(undefined8 *)(puStack_b8 + 0x28));
            FUN_10260272c(&uStack_b0,auStack_138);
            func_0x000107c61434(uVar9);
            puVar2 = auStack_100;
            func_0x000107c5fb58(puVar2,uVar13,uVar9);
            func_0x000107c606a8();
            uVar8 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
            uVar12 = (ulong)puVar2 & (uVar8 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar5 + (uVar12 >> 6) * 8 + 0x38) >> (uVar12 & 0x3f) & 1) != 0) {
              do {
                puVar7 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar12 * 0x10);
                uVar3 = *puVar7;
                uVar1 = puVar7[1];
                if ((uVar3 == uVar13 && uVar1 == uVar9) ||
                   (func_0x000107c605b8(uVar3,uVar1,uVar13,uVar9,0), (uVar3 & 1) != 0)) {
                  func_0x000107c6142c(uVar9);
                  func_0x000102602768(&uStack_b0);
                  goto LAB_1026019b4;
                }
                uVar12 = uVar12 + 1 & ~uVar8;
              } while ((*(ulong *)(puVar5 + (uVar12 >> 6) * 8 + 0x38) >> (uVar12 & 0x3f) & 1) != 0);
            }
            func_0x000107c6142c(uVar9);
          }
          func_0x000107c61434(uVar9);
          func_0x000100403b00(auStack_100,uVar13,uVar9);
          func_0x000107c6142c(uStack_f8);
          puVar7 = &uStack_b0;
          FUN_102601d14();
          func_0x000107c61180();
          puVar5 = puVar6;
          func_0x000107c61550();
          if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
             (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar6 >> 0x3e == 0) {
              puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar6) {
                puVar4 = puVar6;
              }
              func_0x000107c60480(puVar4);
            }
            puVar5 = (undefined *)0x0;
            func_0x00010260a2a4(0,puVar4 + 1,1,puVar6);
          }
          uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
          uVar13 = *(ulong *)(uVar9 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar13) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
            func_0x00010260a2a4(puVar6,uVar13 + 1,1,puVar5);
            uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar9 + 0x10) = uVar13 + 1;
          *(ulong **)(uVar9 + uVar13 * 8 + 0x20) = puVar7;
          func_0x000102602768(&uStack_b0);
          func_0x000107c61170(puVar7);
        }
      }
LAB_1026019b4:
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar10);
  }
  func_0x000107c6142c(puStack_b8);
  return puVar6;
}



/* Entry: 102601bf0; end: 102601cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102601bf0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_112eaf788);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    uVar1 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar1 != 0) {
      uVar3 = uVar1;
      func_0x000107c52060(uVar1);
      uVar2 = uVar1;
      func_0x000107c4c45c(uVar1);
      func_0x000107c610f8(PTR_PTR_1126aabe8);
      func_0x000107c475d4((double)uVar3,(double)uVar2);
      func_0x000107c615e8(uVar1);
      return;
    }
  }
  func_0x000107c610f8(PTR_PTR_1126aabe8);
  func_0x000107c475d4(0,0);
  return;
}



/* Entry: 102601cdc; end: 102601d13;  */

void FUN_102601cdc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102601d14; end: 10260210f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102601d14(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  
  lVar20 = _DAT_112eaf780;
  lVar10 = *(long *)(param_1 + 0x20);
  uVar16 = *(ulong *)(lVar10 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 == 0) {
LAB_102602058:
    lVar20 = *(long *)(param_1 + 0x28);
    lVar10 = *(long *)(param_1 + 0x30);
    puVar5 = PTR_PTR_1126aabf0;
    func_0x000107c610f8(PTR_PTR_1126aabf0);
    uVar9 = 0;
    func_0x00010260279c(0,0x112eaf7c0,&PTR_PTR_1126aabf8);
    puVar7 = puVar8;
    func_0x000107c5fc48(puVar8,uVar9);
    func_0x000107c6142c(puVar8);
    func_0x000107c45ad8((double)lVar20,(double)lVar10,puVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c52ba4(puVar5);
    return puVar5;
  }
  uVar18 = 0;
LAB_102601d70:
  uVar1 = uVar18;
  if (uVar18 <= uVar16) {
    uVar1 = uVar16;
  }
  puVar13 = (undefined8 *)(lVar10 + 0x28 + uVar18 * 0x10);
  uVar18 = uVar18 + 1;
  do {
    if (uVar18 - uVar1 == 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102602110);
      (*pcVar3)();
    }
    uVar9 = puVar13[-1];
    uVar2 = *puVar13;
    lVar15 = *(long *)(unaff_x20 + lVar20);
    func_0x000107c61434(uVar2);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar15 == 0) {
      func_0x000107c6142c(uVar2);
    }
    else {
      uVar14 = uVar9;
      func_0x000107c5fadc(uVar9,uVar2);
      lVar4 = lVar15;
      func_0x000107c4c39c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar15);
      func_0x000107c61170(uVar14);
      if (lVar4 == 0) {
        func_0x000107c6142c(uVar2);
      }
      else {
        lVar15 = ((undefined8 *)(lVar4 + _DAT_112fcd620))[1];
        if (lVar15 != 0) break;
        func_0x000107c6142c(uVar2);
        func_0x000107c61170(lVar4);
      }
    }
    uVar18 = uVar18 + 1;
    puVar13 = puVar13 + 2;
    if (uVar18 - uVar16 == 1) goto LAB_102602058;
  } while( true );
  lVar19 = ((undefined8 *)(lVar4 + _DAT_112fcd628))[1];
  if (lVar19 == 0) {
    uVar14 = 0;
    lVar17 = -0x2000000000000000;
  }
  else {
    uVar14 = *(undefined8 *)(lVar4 + _DAT_112fcd628);
    lVar17 = lVar19;
  }
  uVar11 = *(undefined8 *)(lVar4 + _DAT_112fcd620);
  puVar5 = PTR_PTR_1126aabf8;
  func_0x000107c610f8();
  func_0x000107c61434(lVar15);
  func_0x000107c61434(lVar19);
  func_0x000107c5fadc(uVar9,uVar2);
  func_0x000107c5fadc(uVar14,lVar17);
  func_0x000107c6142c(lVar17);
  func_0x000107c5fadc(uVar11,lVar15);
  func_0x000107c6142c(lVar15);
  func_0x000107c491c8();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  lVar15 = ((undefined8 *)(lVar4 + _DAT_112fcd630))[1];
  if (lVar15 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + _DAT_112fcd630);
    func_0x000107c61434(lVar15);
    func_0x000107c5fadc(uVar9,lVar15);
    func_0x000107c6142c(lVar15);
  }
  func_0x000107c58e54(puVar5);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar4);
  puVar7 = puVar8;
  func_0x000107c61550();
  if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
     (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar6 = puVar8;
      }
      func_0x000107c60480(puVar6);
    }
    puVar7 = (undefined *)0x0;
    FUN_10260a288(0,puVar6 + 1,1,puVar8);
  }
  uVar12 = (ulong)puVar7 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar12 + 0x10);
  puVar8 = puVar7;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
    FUN_10260a288(puVar8,uVar1 + 1,1,puVar7);
    uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
  *(undefined **)(uVar12 + uVar1 * 8 + 0x20) = puVar5;
  if (uVar18 == uVar16) goto LAB_102602058;
  goto LAB_102601d70;
}


