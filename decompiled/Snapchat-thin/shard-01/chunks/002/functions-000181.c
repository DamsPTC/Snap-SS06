/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e305b0; end: 100e305cf;  */

void FUN_100e305b0(void)

{
  func_0x000107c61168(&PTR_PTR_11279a950);
  return;
}



/* Entry: 100e305d0; end: 100e305db; -[SCPasskeyEnrollmentTakeoverEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e305d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a9d0;
  func_0x000107c61428(param_1 + _DAT_112d3a9d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e305dc; end: 100e305e7; -[SCPasskeyEnrollmentTakeoverEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e305dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a9d0;
  func_0x000107c61428(param_1 + _DAT_112d3a9d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e305e8; end: 100e305f3; -[SCPasskeyEnrollmentTakeoverEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e305e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a9d8;
  func_0x000107c61428(param_1 + _DAT_112d3a9d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e305f4; end: 100e30637;  */

void FUN_100e305f4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e30638; end: 100e30643; -[SCPasskeyEnrollmentTakeoverEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e30638(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a9d8;
  func_0x000107c61428(param_1 + _DAT_112d3a9d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e30644; end: 100e30697;  */

void FUN_100e30644(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e30698; end: 100e306df; -[SCPasskeyEnrollmentTakeoverEntryPoint passkeyEnrollmentScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e30698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a9e0;
  func_0x000107c61428(param_1 + _DAT_112d3a9e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100e306e0; end: 100e30743; -[SCPasskeyEnrollmentTakeoverEntryPoint setPasskeyEnrollmentScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e306e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a9e0;
  func_0x000107c61428(param_1 + _DAT_112d3a9e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100e30744; end: 100e30907;  */

/* WARNING: Possible PIC construction at 0x000100e30884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e30894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e308a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e308e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e308a8) */
/* WARNING: Removing unreachable block (ram,0x000100e30898) */
/* WARNING: Removing unreachable block (ram,0x000100e30888) */
/* WARNING: Removing unreachable block (ram,0x000100e308e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e30744(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c3e8cc();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c4e3d4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      FUN_100e2f0f0(0);
      func_0x000107c613fc();
      func_0x000107c43b5c();
      func_0x000107c61180();
      lVar5 = 0;
      FUN_100e2faf0();
      lVar6 = lVar5;
      func_0x000107c610f8();
      *(undefined **)(lVar6 + _DAT_112d3a950) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      puVar1 = (undefined8 *)(lVar6 + _DAT_112d3a930);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar6 + _DAT_112d3a938) = 0;
      *(undefined1 *)(lVar6 + _DAT_112d3a958) = 0;
      *(long *)(lVar6 + _DAT_112d3a948) = lVar4;
      *(long *)(lVar6 + _DAT_112d3a940) = unaff_x20;
      puVar2 = PTR_s_init_1125d9248;
      lStack_60 = lVar6;
      lStack_58 = lVar5;
      func_0x000107c61174(unaff_x20);
      func_0x000107c61154(&lStack_60,puVar2);
      func_0x000107c4e9e4(lVar3);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100e30908; end: 100e3092f; -[SCPasskeyEnrollmentTakeoverEntryPoint begin] */

void FUN_100e30908(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e30744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e30930; end: 100e30973; -[SCPasskeyEnrollmentTakeoverEntryPoint end] */

void FUN_100e30930(undefined8 param_1)

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



/* Entry: 100e30974; end: 100e30b77;  */

void FUN_100e30974(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10eeea0)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001d;
        if (((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef10ed3c0)) &&
           (func_0x000107c605b8(0xd00000000000001d,0x800000010ef12c40,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCPasskeyEnrollmentTakeover/SCPasskeyEnrollmentTakeoverEntryPoint.swift"
                              ,0x47,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100e30b78);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57258();
        goto LAB_100e30a00;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c50();
  }
LAB_100e30a00:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e30b78; end: 100e30c23; -[SCPasskeyEnrollmentTakeoverEntryPoint setValue:forIvarName:] */

void FUN_100e30b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e30974(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e30c24; end: 100e30ca3; -[SCPasskeyEnrollmentTakeoverEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e30c24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d3a9d0,0);
  func_0x000107c61614(param_1 + _DAT_112d3a9d8,0);
  *(undefined8 *)(param_1 + _DAT_112d3a9e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112d3a9e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e30ca4; end: 100e30cd7;  */

void FUN_100e30ca4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e30cd8; end: 100e30d2f; -[SCPasskeyEnrollmentTakeoverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e30cd8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3a9d0);
  func_0x000107c61610(param_1 + _DAT_112d3a9d8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3a9e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3a9e8));
  return;
}



/* Entry: 100e30d30; end: 100e30d4f;  */

void FUN_100e30d30(void)

{
  func_0x000107c61168(&PTR_PTR_11279aa20);
  return;
}



/* Entry: 100e30d50; end: 100e30d63;  */

bool FUN_100e30d50(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100e30d64; end: 100e30e0f;  */

void FUN_100e30d64(void)

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



/* Entry: 100e30e10; end: 100e30e9f;  */

bool FUN_100e30e10(byte *param_1,byte *param_2)

{
  return *param_1 < *param_2;
}



/* Entry: 100e30ea0; end: 100e30f2f;  */

void FUN_100e30ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    func_0x000100087c34(&uStack_68);
  }
  else {
    FUN_100e30f30(param_3,param_2,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100e30f30; end: 100e3185f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e30f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar9 = param_2;
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112d3aa38));
  func_0x000100bc7fa4();
  if ((*(byte *)(unaff_x20 + _DAT_112d3aa58) & 1) != 0) {
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = 0;
    uStack_98 = 3;
    puStack_90 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff00);
    func_0x000100087c34(&puStack_a8);
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d3aa58) = 1;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa60);
  *(undefined8 *)(unaff_x20 + _DAT_112d3aa60) = param_1;
  func_0x000107c61170(uVar1);
  lVar11 = _DAT_112d3aa68;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa68);
  *(undefined8 *)(unaff_x20 + _DAT_112d3aa68) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa50);
  func_0x000107c6157c(param_2);
  func_0x000107c4bb24(uVar1);
  lVar11 = *(long *)(unaff_x20 + lVar11);
  if (lVar11 != 0) {
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = 0;
    uStack_98 = 4;
    puStack_90 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff00);
    func_0x000107c6157c(lVar11);
    func_0x000100087c34(&puStack_a8);
    func_0x000107c61574(lVar11);
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_112d3aa40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    lStack_b0 = 0;
    uVar12 = 0xe000000000000000;
    uVar1 = uVar9;
  }
  else {
    lVar2 = lVar11;
    func_0x000107c43f7c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    lStack_b0 = lVar2;
    func_0x000107c5faec();
    uVar1 = uVar9;
    func_0x000107c61170(lVar2);
    uVar12 = uVar9;
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_112d3aa48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 != 0) {
    lVar2 = lVar11;
    func_0x000107c5c198();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar2 != 0) {
      lVar11 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      goto LAB_100e310ec;
    }
  }
  lVar11 = 0;
  uVar1 = 0xe000000000000000;
LAB_100e310ec:
  plVar3 = (long *)(unaff_x20 + _DAT_112d3aa28);
  func_0x0001000a8868(plVar3,plVar3[3]);
  puVar4 = &UNK_110358060;
  func_0x000107c613fc(&UNK_110358060,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1103580b0;
  func_0x000107c613fc(&UNK_1103580b0,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  *(undefined8 *)(puVar5 + 0x20) = param_3;
  lVar13 = *plVar3;
  puVar6 = PTR_PTR_1126d09b0;
  func_0x000107c610f8(PTR_PTR_1126d09b0);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c453e4(puVar6);
  func_0x000107c5fadc(lVar11,uVar1);
  lVar2 = lVar11;
  func_0x000106b236f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  func_0x000107c54080(puVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c5fadc(lStack_b0,uVar12);
  func_0x000107c5345c(puVar6);
  func_0x000107c61170(lStack_b0);
  func_0x000107c545c0(puVar6);
  lVar11 = *(long *)(lVar13 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    func_0x000107c61428(puVar4 + 0x10,auStack_78,0,0);
    puVar8 = puVar4 + 0x10;
    func_0x000107c61618();
    if (puVar8 == (undefined *)0x0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_a8 = (undefined *)0x1;
      puStack_90 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff00);
      func_0x000100087c34(&puStack_a8);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(uVar1);
    }
    else {
      FUN_100e31860(1,0,0,0);
      uVar10 = *(undefined8 *)(puVar8 + _DAT_112d3aa50);
      func_0x000107c615f0(uVar10);
      uVar9 = 0x6f707365725f6f6e;
      func_0x000107c5fadc(0x6f707365725f6f6e,0xeb0000000065736e);
      func_0x000107c4bb58(uVar10);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(uVar1);
      func_0x000107c615e8(uVar10);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar8);
    }
  }
  else {
    pcStack_88 = FUN_100e32df4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x100e33964;
    puStack_90 = &UNK_1103580c8;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    puVar8 = puStack_80;
    func_0x000107c61174(puVar6);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar8);
    func_0x000107c441b8(lVar11);
    func_0x000107c61574(puVar5);
    func_0x000107c6142c(uVar12);
    func_0x000107c6142c(uVar1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 100e31860; end: 100e3195f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e31860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112d3aa38));
  func_0x000100bc7fa4();
  if (*(char *)(unaff_x20 + _DAT_112d3aa58) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112d3aa58) = 0;
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa60);
    *(undefined8 *)(unaff_x20 + _DAT_112d3aa60) = 0;
    func_0x000107c61170(uVar2);
    lVar1 = _DAT_112d3aa68;
    lVar3 = *(long *)(unaff_x20 + _DAT_112d3aa68);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uStack_58 = (undefined1)param_4;
      uStack_70 = param_1;
      uStack_68 = param_2;
      uStack_60 = param_3;
      func_0x000107c6157c(lVar3);
      func_0x000100e32e1c(param_1,param_2,param_3,param_4);
      func_0x000100087c34(&uStack_70);
      func_0x000107c61574(lVar3);
      func_0x000100e32e34(param_1,param_2,param_3,param_4);
      uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 100e31960; end: 100e319bf; -[_TtC26SCPasskeyEnrollmentFeature28PasskeyEnrollmentHandlerImpl init] */

void FUN_100e31960(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPasskeyEnrollmentFeature.PasskeyEnrollmentHandlerImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3198c);
  (*pcVar1)();
}



/* Entry: 100e319c0; end: 100e31a77; -[_TtC26SCPasskeyEnrollmentFeature28PasskeyEnrollmentHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e319c0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d3aa18));
  func_0x0001000834e4(param_1 + _DAT_112d3aa20);
  func_0x0001000834e4(param_1 + _DAT_112d3aa28);
  func_0x0001000834e4(param_1 + _DAT_112d3aa30);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d3aa38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3aa40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3aa48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d3aa50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3aa60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3aa68));
  return;
}



/* Entry: 100e31a78; end: 100e31d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e31a78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *unaff_x20;
  func_0x0001000285a8(0x112d3aaa8,&UNK_10d904480);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  uVar4 = *(undefined8 *)(lVar5 + _DAT_112d3aa38);
  func_0x000107c614f0(uVar4);
  puVar2 = &UNK_110358060;
  func_0x000107c613fc(&UNK_110358060,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,lVar5);
  puVar3 = &UNK_110358088;
  func_0x000107c613fc(&UNK_110358088,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(param_1);
  func_0x00010090569c(FUN_100e32da8,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  FUN_100e32db4();
  func_0x00010487d6d4();
  func_0x000107c61574(uVar1);
  return puVar3;
}



/* Entry: 100e31d34; end: 100e31d9b; -[_TtC26SCPasskeyEnrollmentFeature28PasskeyEnrollmentHandlerImpl authorizationController:didCompleteWithAuthorization:] */

/* WARNING: Possible PIC construction at 0x000100e31d84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e31d88) */

void FUN_100e31d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  func_0x000107c40d6c(param_4);
  func_0x000107c61180();
  func_0x000100e31b98();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100e31d9c; end: 100e32277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e31d9c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_a8;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d3aa40);
  uVar10 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = 0;
    uVar11 = 0xe000000000000000;
    uStack_98 = uVar10;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c43f7c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lVar1 = lVar2;
    func_0x000107c5faec();
    uStack_98 = uVar10;
    func_0x000107c61170(lVar2);
    uVar11 = uVar10;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d3aa48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c198();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      lStack_a8 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      goto LAB_100e31e90;
    }
  }
  lStack_a8 = 0;
  uStack_98 = 0xe000000000000000;
LAB_100e31e90:
  puVar4 = PTR_PTR_1126a5e30;
  func_0x000107c610f8(PTR_PTR_1126a5e30);
  func_0x000107c453e4();
  if (param_2 >> 0x3c < 0xf) {
    uVar12 = param_1;
    func_0x000107c5ee20(param_1,param_2);
  }
  else {
    uVar12 = 0;
  }
  func_0x000107c529b0(puVar4);
  func_0x000107c61170(uVar12);
  uVar12 = param_3;
  func_0x000107c5ee20(param_3,param_4);
  func_0x000107c53448(puVar4);
  func_0x000107c61170(uVar12);
  lVar2 = lVar1;
  func_0x000107c5fadc(lVar1,uVar11);
  func_0x000107c5345c(puVar4);
  func_0x000107c61170(lVar2);
  plVar5 = (long *)(unaff_x20 + _DAT_112d3aa28);
  func_0x0001000a8868(plVar5,plVar5[3]);
  puVar6 = &UNK_110358060;
  func_0x000107c613fc(&UNK_110358060,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  lVar2 = *plVar5;
  puVar7 = PTR_PTR_1126a5e30;
  func_0x000107c610f8(PTR_PTR_1126a5e30);
  func_0x000107c6157c(puVar6);
  func_0x000107c453e4(puVar7);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_1,param_2);
  }
  else {
    param_1 = 0;
  }
  func_0x000107c529b0(puVar7);
  func_0x000107c61170(param_1);
  func_0x000107c5ee20(param_3,param_4);
  func_0x000107c53448(puVar7);
  func_0x000107c61170(param_3);
  func_0x000107c5fadc(lStack_a8,uStack_98);
  lVar3 = lStack_a8;
  func_0x000106b236f4();
  func_0x000107c61180();
  func_0x000107c61170(lStack_a8);
  func_0x000107c54080(puVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c5fadc(lVar1,uVar11);
  func_0x000107c5345c(puVar7);
  func_0x000107c61170(lVar1);
  func_0x000106b23798();
  func_0x000107c61180();
  lVar2 = *(long *)(lVar2 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61428(puVar6 + 0x10,&puStack_90,0,0);
    puVar9 = puVar6 + 0x10;
    func_0x000107c61618();
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170(puVar7);
      func_0x000107c61170(lVar1);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(uStack_98);
    }
    else {
      FUN_100e31860(3,0,0,0);
      uVar13 = *(undefined8 *)(puVar9 + _DAT_112d3aa50);
      func_0x000107c615f0(uVar13);
      uVar12 = 0x6f707365725f6f6e;
      func_0x000107c5fadc(0x6f707365725f6f6e,0xeb0000000065736e);
      func_0x000107c4bd6c(uVar13);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(lVar1);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(uStack_98);
      func_0x000107c615e8(uVar13);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(puVar9);
    }
  }
  else {
    uStack_70 = 0x100e33544;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x100e33968;
    puStack_78 = &UNK_110358190;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar8);
    puVar9 = puStack_68;
    func_0x000107c61174(puVar7);
    func_0x000107c61174(lVar1);
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(puVar9);
    func_0x000107c428fc(lVar2);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uStack_98);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 100e32278; end: 100e325cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e32278(ulong param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_58 [24];
  
  puVar8 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar8,0,0);
  uVar2 = param_3 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  if (param_1 == 0) {
    FUN_100e31860(3,0,0,0);
    uVar7 = *(undefined8 *)(uVar2 + _DAT_112d3aa50);
    func_0x000107c615f0(uVar7);
    uVar4 = 0x6f707365725f6f6e;
    func_0x000107c5fadc(0x6f707365725f6f6e,0xeb0000000065736e);
    func_0x000107c4bd6c(uVar7);
    func_0x000107c615e8(uVar7);
    param_1 = uVar2;
    goto LAB_100e3259c;
  }
  func_0x000107c61174();
  uVar4 = param_1;
  func_0x000107c44aa4();
  if ((uVar4 & 1) == 0) {
    FUN_100e31860(3,0,0,0);
    uVar7 = *(undefined8 *)(uVar2 + _DAT_112d3aa50);
    func_0x000107c615f0(uVar7);
    uVar4 = 0x6c757365725f6f6e;
    uVar5 = 0xe900000000000074;
LAB_100e323e8:
    func_0x000107c5fadc(uVar4,uVar5);
    func_0x000107c4bd6c(uVar7);
    func_0x000107c61170(uVar2);
  }
  else {
    uVar4 = param_1;
    func_0x000107c506c8();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e325c8);
      (*pcVar1)();
    }
    uVar3 = uVar4;
    func_0x000107c5bd10();
    func_0x000107c61170(uVar4);
    if ((int)uVar3 == 1) {
      uVar4 = param_1;
      func_0x000107c44a0c();
      if ((int)uVar4 != 0) {
        FUN_100e31860(0,0,1,0);
        func_0x000107c4bb28(*(undefined8 *)(uVar2 + _DAT_112d3aa50));
        uVar4 = uVar2;
        goto LAB_100e3259c;
      }
      FUN_100e31860(3,0,0,0);
      uVar7 = *(undefined8 *)(uVar2 + _DAT_112d3aa50);
      func_0x000107c615f0(uVar7);
      uVar4 = 0x6b737361705f6f6e;
      uVar5 = 0xea00000000007965;
      goto LAB_100e323e8;
    }
    uVar4 = param_1;
    func_0x000107c506c8();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e325cc);
      (*pcVar1)();
    }
    uVar3 = uVar4;
    func_0x000107c44f70();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar3 == 0) {
      uVar4 = 0;
      puVar8 = (undefined1 *)0x0;
    }
    else {
      uVar4 = uVar3;
      func_0x000107c5faec(uVar3);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61434(puVar8);
    FUN_100e31860(3,uVar4,puVar8,0);
    func_0x000107c6142c(puVar8);
    uVar7 = *(undefined8 *)(uVar2 + _DAT_112d3aa50);
    func_0x000107c615f0(uVar7);
    uVar4 = param_1;
    func_0x000107c506c8();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e325d0);
      (*pcVar1)();
    }
    func_0x000107c5bd10();
    func_0x000107c61170(uVar4);
    puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    uVar4 = 0x635f737574617473;
    func_0x000107c5fadc(0x635f737574617473,0xec0000005f65646f);
    func_0x000107c6142c(0xec0000005f65646f);
    func_0x000107c4bd6c(uVar7);
    func_0x000107c6142c(puVar8);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c615e8(uVar7);
LAB_100e3259c:
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100e325d0; end: 100e32637; -[_TtC26SCPasskeyEnrollmentFeature28PasskeyEnrollmentHandlerImpl authorizationController:didCompleteWithError:] */

/* WARNING: Possible PIC construction at 0x000100e32618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3261c) */

void FUN_100e325d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_100e33070(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e32638; end: 100e326bf;  */

void FUN_100e32638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100e31860(param_2,param_3,param_4,param_5);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100e326c0; end: 100e3270f; -[_TtC26SCPasskeyEnrollmentFeature28PasskeyEnrollmentHandlerImpl presentationAnchorForAuthorizationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e326c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112d3aa60);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIWindow_1126c3e70);
    func_0x000107c453e4();
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100e32710; end: 100e32787;  */

/* WARNING: Possible PIC construction at 0x000100e3276c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e32770) */

void FUN_100e32710(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100e32788; end: 100e327a7;  */

void FUN_100e32788(void)

{
  func_0x000107c61168(&PTR_PTR_11279aaf0);
  return;
}



/* Entry: 100e327a8; end: 100e327d3;  */

void FUN_100e327a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (uVar2 - 1 < 3 || 2 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 100e327d4; end: 100e3284f;  */

undefined8 * FUN_100e327d4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[2];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (((int)uVar1 + -1 < 3) && (2 < uVar2 - 1)) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_1[1] = param_2[1];
    param_1[2] = uVar2;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    func_0x000107c61434(uVar2);
    return param_1;
  }
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  return param_1;
}



/* Entry: 100e32850; end: 100e32993;  */

undefined8 * FUN_100e32850(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_1[2];
  uVar1 = uVar6;
  if (0xfffffffe < uVar6) {
    uVar1 = 0xffffffff;
  }
  uVar4 = param_2[2];
  uVar2 = uVar4;
  if (0xfffffffe < uVar4) {
    uVar2 = 0xffffffff;
  }
  iVar3 = (int)uVar2 + -1;
  if ((int)uVar1 + -1 < 3) {
    if (2 < iVar3) {
      if (2 < uVar6 - 1) {
        func_0x000107c6142c(uVar6);
      }
      goto LAB_100e32934;
    }
    if (2 < uVar6 - 1) {
      if (uVar4 - 1 < 3) {
        FUN_100e32994();
        uVar7 = *(undefined8 *)((long)param_2 + 0x11);
        uVar5 = *(undefined8 *)((long)param_2 + 9);
        uVar8 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar8;
        *(undefined8 *)((long)param_1 + 0x11) = uVar7;
        *(undefined8 *)((long)param_1 + 9) = uVar5;
        return param_1;
      }
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      uVar5 = param_2[2];
      param_1[2] = uVar5;
      func_0x000107c61434(uVar5);
      func_0x000107c6142c(uVar6);
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      return param_1;
    }
  }
  else if (2 < iVar3) goto LAB_100e32934;
  if (2 < uVar4 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_1[1] = param_2[1];
    uVar5 = param_2[2];
    param_1[2] = uVar5;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    func_0x000107c61434(uVar5);
    return param_1;
  }
LAB_100e32934:
  uVar7 = param_2[1];
  uVar5 = *param_2;
  uVar8 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar8;
  param_1[1] = uVar7;
  *param_1 = uVar5;
  return param_1;
}



/* Entry: 100e32994; end: 100e32ac3;  */

undefined8 FUN_100e32994(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d3aa98;
  func_0x0001000285a8(0x112d3aa98,&UNK_10d904350);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100e32ac4; end: 100e32d67;  */

int FUN_100e32ac4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff8 < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0x7ffffff9;
  }
  uVar5 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar5) {
    uVar5 = 0xffffffff;
  }
  uVar4 = (int)uVar5 - 1;
  uVar3 = uVar4;
  if (0x7fffffff < uVar4) {
    uVar3 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < uVar3 - 2) {
    iVar1 = uVar3 - 5;
  }
  iVar2 = 0;
  if (2 < (int)uVar4) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Entry: 100e32d68; end: 100e32da7;  */

void FUN_100e32d68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3aaa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d904420;
  func_0x000107c61520(&UNK_10d904420,&UNK_110358030);
  puRam0000000112d3aaa0 = puVar1;
  return;
}



/* Entry: 100e32da8; end: 100e32db3;  */

void FUN_100e32da8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    func_0x000100087c34(&uStack_68);
  }
  else {
    FUN_100e30f30(uVar1,uVar2,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 100e32db4; end: 100e32df3;  */

void FUN_100e32db4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3aab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d904448;
  func_0x000107c61520(&UNK_10d904448,&UNK_110357fa0);
  puRam0000000112d3aab0 = puVar1;
  return;
}



/* Entry: 100e32df4; end: 100e32e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e32df4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x20;
  undefined1 *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar14 = auStack_78;
  func_0x000107c61428(lVar12 + 0x10,puVar14,0,0);
  uVar2 = lVar12 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 1;
    uStack_80 = 0;
    func_0x000100087c34(&uStack_98);
    return;
  }
  if (param_1 == 0) {
    FUN_100e31860(1,0,0,0);
    uVar11 = *(undefined8 *)(uVar2 + _DAT_112d3aa50);
    func_0x000107c615f0(uVar11);
    uVar13 = 0x6f707365725f6f6e;
    func_0x000107c5fadc(0x6f707365725f6f6e,0xeb0000000065736e);
    func_0x000107c4bb58(uVar11);
    func_0x000107c615e8(uVar11);
    param_1 = uVar2;
LAB_100e31628:
    func_0x000107c61170(uVar13);
  }
  else {
    func_0x000107c61174();
    uVar13 = param_1;
    func_0x000107c44aa4();
    if ((uVar13 & 1) == 0) {
      FUN_100e31860(1,0,0,0);
      uVar15 = *(undefined8 *)(uVar2 + _DAT_112d3aa50);
      func_0x000107c615f0(uVar15);
      uVar11 = 0x6c757365725f6f6e;
      func_0x000107c5fadc(0x6c757365725f6f6e,0xe900000000000074);
      func_0x000107c4bb58(uVar15);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(uVar15);
    }
    else {
      uVar13 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100e31854);
        (*pcVar16)();
      }
      uVar3 = uVar13;
      func_0x000107c5bd10();
      func_0x000107c61170(uVar13);
      if ((int)uVar3 == 1) {
        func_0x000107c4bd68(*(undefined8 *)(uVar2 + _DAT_112d3aa50));
        lVar12 = *(long *)(uVar2 + _DAT_112d3aa68);
        if (lVar12 != 0) {
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_88 = 5;
          uStack_80 = 0;
          func_0x000107c6157c(lVar12);
          func_0x000100087c34(&uStack_98);
          func_0x000107c61574(lVar12);
        }
        lVar12 = uVar2 + _DAT_112d3aa30;
        uVar15 = *(undefined8 *)(lVar12 + 0x18);
        lVar1 = *(long *)(lVar12 + 0x20);
        func_0x0001000a8868(lVar12,uVar15);
        plVar5 = (long *)(uVar2 + _DAT_112d3aa20);
        lVar12 = plVar5[3];
        plVar4 = plVar5;
        func_0x0001000a8868(plVar5,lVar12);
        FUN_100e339c4();
        lVar9 = plVar5[3];
        func_0x0001000a8868(plVar5,lVar9);
        uVar6 = *(undefined8 *)(*plVar5 + 0x10);
        func_0x000107c5d984(uVar6);
        func_0x000107c61180();
        uVar7 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        pcVar16 = *(code **)(lVar1 + 8);
        func_0x000107c61174(uVar2);
        (*pcVar16)(param_1,plVar4,lVar12,uVar7,lVar9,uVar2,uVar11,uVar15,lVar1);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(lVar12);
        func_0x000107c6142c(lVar9);
        uVar13 = uVar2;
        param_1 = uVar2;
        goto LAB_100e31628;
      }
      uVar13 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100e31858);
        (*pcVar16)();
      }
      uVar3 = uVar13;
      func_0x000107c44f70();
      func_0x000107c61180();
      func_0x000107c61170(uVar13);
      if (uVar3 == 0) {
        uVar13 = 0;
        puVar14 = (undefined1 *)0x0;
      }
      else {
        uVar13 = uVar3;
        func_0x000107c5faec(uVar3);
        func_0x000107c61170(uVar3);
      }
      uVar3 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100e3185c);
        (*pcVar16)();
      }
      uVar8 = uVar3;
      func_0x000107c5bd10();
      func_0x000107c61170(uVar3);
      func_0x000107c61434(puVar14);
      FUN_100e31860(1,uVar13,puVar14,(int)uVar8 - 3U < 2);
      func_0x000107c6142c(puVar14);
      uVar15 = *(undefined8 *)(uVar2 + _DAT_112d3aa50);
      uStack_98 = 0x635f737574617473;
      uStack_90 = 0xec0000005f65646f;
      func_0x000107c615f0(uVar15);
      uVar13 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100e31860);
        (*pcVar16)();
      }
      func_0x000107c5bd10();
      func_0x000107c61170(uVar13);
      puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar10);
      uVar7 = uStack_90;
      uVar11 = uStack_98;
      func_0x000107c5fadc(uStack_98,uStack_90);
      func_0x000107c6142c(uVar7);
      func_0x000107c4bb58(uVar15);
      func_0x000107c6142c(puVar14);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(uVar15);
    }
    func_0x000107c61170(uVar11);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100e32e4c; end: 100e3306f;  */

uint FUN_100e32e4c(char param_1,ulong param_2,long param_3,uint param_4,char param_5,ulong param_6,
                  long param_7,uint param_8)

{
  if (param_3 == 1) {
    if (param_7 == 1) {
      return 1;
    }
  }
  else if (param_3 == 2) {
    if (param_7 == 2) {
      return 1;
    }
  }
  else if (param_3 == 3) {
    if (param_7 == 3) {
      return 1;
    }
  }
  else if ((2 < param_7 - 1U) && (param_5 == param_1)) {
    if (param_3 == 0) {
      if (param_7 == 0) goto LAB_100e32f10;
    }
    else if ((param_7 != 0) &&
            (((param_2 == param_6 && (param_3 == param_7)) ||
             (func_0x000107c605b8(param_2,param_3,param_6,param_7,0), (param_2 & 1) != 0)))) {
LAB_100e32f10:
      return (param_8 ^ param_4 ^ 1) & 1;
    }
  }
  return 0;
}



/* Entry: 100e33070; end: 100e334f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e33070(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lStack_88 = param_1;
  func_0x000107c614b0();
  uVar9 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  func_0x000100e21e2c();
  plVar4 = &lStack_58;
  func_0x000107c6147c(plVar4,&lStack_88,uVar9,lVar3,6);
  lVar1 = lStack_58;
  if ((int)plVar4 == 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa50);
    func_0x000107c614cc(param_1,auStack_60,&lStack_78);
    func_0x000107c614c0(lStack_78,uStack_70,1);
    uStack_80 = uStack_68;
    uVar9 = 0x112d3a1e8;
    lStack_88 = lStack_78;
    func_0x0001000285a8(0x112d3a1e8,&UNK_10d904490);
    plVar4 = &lStack_88;
    func_0x000107c5fb18(plVar4,uVar9);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
    func_0x000107c4bd64(uVar7);
    func_0x000107c61170(plVar4);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa38);
    func_0x000107c614f0(uVar9);
    puVar5 = &UNK_110358060;
    func_0x000107c613fc(&UNK_110358060,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_110358100;
    func_0x000107c613fc(&UNK_110358100,0x31,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x28) = 0;
    puVar6[0x30] = 0;
    func_0x000107c6157c(puVar5);
    func_0x00010090569c(FUN_100e334f8,puVar6,uVar9);
    goto LAB_100e33428;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa50);
  lStack_88 = 0x6f635f726f727265;
  uStack_80 = 0xeb000000005f6564;
  uVar9 = 0x112d3a168;
  FUN_100e338c4(0x112d3a168,0x100e21e2c,&UNK_10d9039f4);
  func_0x000107c5ed1c(auStack_90,lVar3,uVar9);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  uVar7 = uStack_80;
  lVar8 = lStack_88;
  func_0x000107c5fadc(lStack_88,uStack_80);
  func_0x000107c6142c(uVar7);
  func_0x000107c4bd64(uVar10);
  func_0x000107c61170(lVar8);
  lStack_88 = lVar1;
  func_0x000107c5ed1c(&lStack_58,lVar3,uVar9);
  if (lStack_58 == 0x3e9) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa38);
    func_0x000107c614f0(uVar7);
    puVar5 = &UNK_110358060;
    func_0x000107c613fc(&UNK_110358060,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_110358178;
    func_0x000107c613fc(&UNK_110358178,0x31,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x28) = 2;
    puVar6[0x30] = 0;
    func_0x000107c6157c(puVar5);
    uVar9 = 0x100e3397c;
LAB_100e33414:
    func_0x00010090569c(uVar9,puVar6,uVar7);
  }
  else {
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 == 0) {
LAB_100e333a0:
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa38);
      func_0x000107c614f0(uVar7);
      puVar5 = &UNK_110358060;
      func_0x000107c613fc(&UNK_110358060,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_110358128;
      func_0x000107c613fc(&UNK_110358128,0x31,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      *(undefined8 *)(puVar6 + 0x28) = 0;
      puVar6[0x30] = 0;
      func_0x000107c6157c(puVar5);
      uVar9 = 0x100e33974;
      goto LAB_100e33414;
    }
    lStack_88 = lVar1;
    func_0x000107c5ed1c(&lStack_58);
    if (lStack_58 != 0x3ee) goto LAB_100e333a0;
    func_0x000106b247e0();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar8 = 0;
      uVar9 = 0;
    }
    else {
      lVar8 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d3aa38);
    func_0x000107c614f0(uVar7);
    puVar5 = &UNK_110358060;
    func_0x000107c613fc(&UNK_110358060,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_110358150;
    func_0x000107c613fc(&UNK_110358150,0x31,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(long *)(puVar6 + 0x20) = lVar8;
    *(undefined8 *)(puVar6 + 0x28) = uVar9;
    puVar6[0x30] = 1;
    func_0x000107c61434(uVar9);
    func_0x000107c6157c(puVar5);
    func_0x00010090569c(0x100e33978,puVar6,uVar7);
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c61170(lVar1);
LAB_100e33428:
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 100e334f8; end: 100e334fb;  */

void FUN_100e334f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    FUN_100e31860(uVar2,uVar1,uVar3,uVar4);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 100e334fc; end: 100e33533;  */

void FUN_100e334fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (2 < *(long *)(unaff_x20 + 0x28) - 1U) {
    func_0x000107c6142c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100e33534; end: 100e3357f;  */

void FUN_100e33534(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    FUN_100e31860(uVar2,uVar1,uVar3,uVar4);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 100e33580; end: 100e335eb;  */

undefined8 * FUN_100e33580(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[2];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    uVar3 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar3;
    return param_1;
  }
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  param_1[1] = param_2[1];
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 100e335ec; end: 100e336e7;  */

undefined8 * FUN_100e335ec(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_1[2];
  uVar1 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar1 = 0xffffffff;
  }
  uVar4 = param_2[2];
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  iVar2 = (int)uVar4 + -1;
  if ((int)uVar1 + -1 < 0) {
    if (iVar2 < 0) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      uVar3 = param_2[2];
      param_1[2] = uVar3;
      func_0x000107c61434(uVar3);
      func_0x000107c6142c(uVar5);
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    }
    else {
      func_0x000107c6142c(uVar5);
      uVar6 = param_2[1];
      uVar3 = *param_2;
      uVar7 = *(undefined8 *)((long)param_2 + 9);
      *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
      *(undefined8 *)((long)param_1 + 9) = uVar7;
      param_1[1] = uVar6;
      *param_1 = uVar3;
    }
  }
  else if (iVar2 < 0) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_1[1] = param_2[1];
    uVar3 = param_2[2];
    param_1[2] = uVar3;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    func_0x000107c61434(uVar3);
  }
  else {
    uVar6 = param_2[1];
    uVar3 = *param_2;
    uVar7 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar7;
    param_1[1] = uVar6;
    *param_1 = uVar3;
  }
  return param_1;
}



/* Entry: 100e336e8; end: 100e33793;  */

undefined8 * FUN_100e336e8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[2];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    uVar3 = param_2[2];
    uVar1 = uVar3;
    if (0xfffffffe < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      param_1[2] = uVar3;
      func_0x000107c6142c(uVar2);
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    }
    else {
      func_0x000107c6142c(uVar2);
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      uVar4 = *(undefined8 *)((long)param_2 + 9);
      *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
      *(undefined8 *)((long)param_1 + 9) = uVar4;
    }
  }
  else {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar4;
  }
  return param_1;
}



/* Entry: 100e33794; end: 100e338c3;  */

int FUN_100e33794(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0x7ffffffc;
  }
  uVar3 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < uVar2 + 1) {
    iVar1 = uVar2 - 2;
  }
  return iVar1;
}



/* Entry: 100e338c4; end: 100e33947;  */

void FUN_100e338c4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100e33948; end: 100e3397f;  */

void FUN_100e33948(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 100e33980; end: 100e339c3;  */

void FUN_100e33980(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e339c4; end: 100e33a7f;  */

undefined1  [16] FUN_100e339c4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar3 = 0x6c6c756e;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = -0x1c00000000000000;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = -0x1c00000000000000;
    if (lVar1 != 0) {
      uStack_40 = 0;
      lStack_38 = 0;
      func_0x000107c5fae8(lVar1,&uStack_40);
      func_0x000107c61170(lVar1);
      if (lStack_38 != 0) {
        uVar3 = uStack_40;
      }
      lVar2 = -0x1c00000000000000;
      if (lStack_38 != 0) {
        lVar2 = lStack_38;
      }
    }
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 100e33a80; end: 100e33ac3;  */

void FUN_100e33a80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e33ac4; end: 100e33b77;  */

long FUN_100e33ac4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x58);
  lVar1 = lVar3;
  if (lVar3 == 1) {
    lVar1 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c3e270();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x000107c4f800(lVar2,param_2,2,0x33,1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
    *(long *)(unaff_x20 + 0x58) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000100c98234(uVar4);
  }
  FUN_100c982c4(lVar3);
  return lVar1;
}



/* Entry: 100e33b78; end: 100e33d17;  */

long FUN_100e33b78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x60);
  lVar3 = lVar4;
  if (lVar4 == 1) {
    lVar1 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c61174();
    lVar2 = lVar1;
    FUN_100e33ac4();
    lVar3 = lVar1;
    func_0x000107c40ab8(lVar1,param_2,lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
    *(long *)(unaff_x20 + 0x60) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000100c98234(uVar5);
  }
  FUN_100c982c4(lVar4);
  return lVar3;
}



/* Entry: 100e33d18; end: 100e34357;  */

long FUN_100e33d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 1;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a5e38;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c49084();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  return unaff_x20;
}



/* Entry: 100e34358; end: 100e344ff;  */

/* WARNING: Possible PIC construction at 0x000100e34434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e344b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3457c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e34784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e34794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e347c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e347d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3467c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3460c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e347dc) */
/* WARNING: Removing unreachable block (ram,0x000100e347cc) */
/* WARNING: Removing unreachable block (ram,0x000100e34798) */
/* WARNING: Removing unreachable block (ram,0x000100e34788) */
/* WARNING: Removing unreachable block (ram,0x000100e34580) */
/* WARNING: Removing unreachable block (ram,0x000100e34438) */
/* WARNING: Removing unreachable block (ram,0x000100e34610) */
/* WARNING: Removing unreachable block (ram,0x000100e34650) */
/* WARNING: Removing unreachable block (ram,0x000100e347fc) */
/* WARNING: Removing unreachable block (ram,0x000100e346b0) */

void FUN_100e34358(void)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  long unaff_x20;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar6 = lVar4;
  func_0x000107c4f094();
  func_0x000107c61180();
  if (lVar6 == 0) {
    pcVar5 = *(char **)(unaff_x20 + 0x10);
    pcVar3 = pcVar5;
    func_0x000107c5cfd8();
    if (pcVar3 == (char *)0x0) {
      pcVar3 = pcVar5;
      func_0x000107c5d17c();
      func_0x000107c61180();
      if (pcVar3 != (char *)0x0) {
        lVar6 = *(long *)(unaff_x20 + 0x48);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000106b247c8();
          func_0x000107c61180();
          func_0x000108b9aaec();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100e34804);
            (*pcVar1)();
          }
          func_0x000107c5faec();
        }
        goto code_r0x000107c61170;
      }
    }
    func_0x000107c61168(PTR_PTR_1126d1490);
    func_0x000107c42d84();
    func_0x000107c61180();
    func_0x000107c4168c();
    func_0x000107c61180();
    if (pcVar5 == (char *)0x0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    func_0x000107c61168(PTR_PTR_1126d1498);
    func_0x000107c435c4();
    func_0x000107c61180();
    func_0x000107c4e3dc(pcVar5);
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x90,&stack0xffffffffffffffa8,0,0);
    if (*(long *)(unaff_x20 + 0xa8) == 0) {
      func_0x000107c61170(lVar6);
      return;
    }
    FUN_100e350a8(unaff_x20 + 0x90,auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    func_0x000107c5cfd8(lVar4);
    uVar2 = 0;
    FUN_100e32788(0);
    FUN_100e31a78(lVar6,lVar4,uVar2,&PTR_DAT_110358040);
    pcVar5 = "startEnrollment()";
    func_0x0001000c10c0("startEnrollment()");
    func_0x000107c61180();
    func_0x000100471e0c();
    func_0x000107c61574(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar5);
  return;
}



/* Entry: 100e34500; end: 100e34803;  */

/* WARNING: Possible PIC construction at 0x000100e3457c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e34784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e34794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e347c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e347d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3467c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3460c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e347dc) */
/* WARNING: Removing unreachable block (ram,0x000100e347cc) */
/* WARNING: Removing unreachable block (ram,0x000100e34798) */
/* WARNING: Removing unreachable block (ram,0x000100e34788) */
/* WARNING: Removing unreachable block (ram,0x000100e34580) */
/* WARNING: Removing unreachable block (ram,0x000100e34610) */

void FUN_100e34500(byte param_1,undefined8 param_2,long param_3,byte param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar7 = lVar6;
  func_0x000107c5cfd8();
  if (lVar7 == 0 || 2 < param_1) {
    lVar7 = lVar6;
    func_0x000107c5d17c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar7 = *(long *)(unaff_x20 + 0x48);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000106b247c8();
        func_0x000107c61180();
        if (param_3 == 0) {
          func_0x000108b9aaec();
          func_0x000107c61180();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100e34804);
            (*pcVar1)();
          }
          func_0x000107c5faec();
        }
        else {
          func_0x000107c61434(param_3);
          func_0x000107c5fadc(param_2,param_3);
          func_0x000107c6142c();
          func_0x000108b9a8c4();
          func_0x000107c61180();
          if (param_3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100e34800);
            (*pcVar1)();
          }
          puVar2 = PTR_PTR_1126d0968;
          func_0x000107c61168(PTR_PTR_1126d0968);
          puVar3 = &UNK_110358350;
          func_0x000107c613fc(&UNK_110358350,0x18,7);
          func_0x000107c61644(puVar3 + 0x10);
          puVar4 = &UNK_1103583a0;
          func_0x000107c613fc(&UNK_1103583a0,0x19,7);
          *(undefined **)(puVar4 + 0x10) = puVar3;
          puVar4[0x18] = param_4 & 1;
          uStack_70 = 0x100e35080;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_1000f6b44;
          puStack_78 = &UNK_1103583b8;
          puStack_68 = puVar4;
          func_0x000107c60bc4(&puStack_90);
          func_0x000107c61574(puStack_68);
          func_0x000107c42a2c(puVar2);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar5);
        }
      }
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c61168(PTR_PTR_1126d1490);
  func_0x000107c42d84();
  func_0x000107c61180();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c61168(PTR_PTR_1126d1498);
    func_0x000107c435c4();
    func_0x000107c61180();
    func_0x000107c4e3dc(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
    return;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100e34804; end: 100e34887;  */

void FUN_100e34804(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = *(undefined1 *)(param_1 + 3);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_100e34888(uVar1,uVar2,uVar4,uVar3);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100e34888; end: 100e34bcf;  */

/* WARNING: Possible PIC construction at 0x000100e34a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e34a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e34ad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e34a8c) */
/* WARNING: Removing unreachable block (ram,0x000100e34ad8) */

void FUN_100e34888(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_3 == 6) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    lVar4 = lVar3;
    func_0x000107c5cfd8();
    if (lVar4 == 1) {
      func_0x000100e34af8();
    }
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      return;
    }
    puVar1 = PTR_PTR_1126d1498;
    func_0x000107c61168(PTR_PTR_1126d1498);
    func_0x000107c4e66c();
  }
  else if (param_3 == 5) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      return;
    }
    puVar1 = PTR_PTR_1126d1498;
    func_0x000107c61168(PTR_PTR_1126d1498);
    func_0x000107c40c48();
  }
  else {
    if (param_3 != 4) {
      puVar1 = &UNK_110358350;
      func_0x000107c613fc(&UNK_110358350,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      puVar2 = &UNK_110358378;
      func_0x000107c613fc(&UNK_110358378,0x31,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      *(long *)(puVar2 + 0x28) = param_3;
      puVar2[0x30] = (char)param_4;
      lVar4 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c6157c(puVar1);
      func_0x000100e35004(param_1,param_2,param_3,param_4);
      func_0x000107c5d17c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        FUN_100e34bd0(puVar1,param_1,param_2,param_3,param_4);
      }
      else {
        func_0x000100e33c10(auStack_78);
        func_0x0001000a8868(auStack_78,uStack_60);
        (**(code **)(lStack_58 + 0x10))(lVar4,0x100e34ff4,puVar2,uStack_60,lStack_58);
        func_0x000107c615e8(lVar4);
        puVar1 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar1);
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    lVar4 = lVar3;
    func_0x000107c5cfd8();
    if (lVar4 == 0) {
      func_0x000100e34af8();
    }
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      return;
    }
    puVar1 = PTR_PTR_1126d1498;
    func_0x000107c61168(PTR_PTR_1126d1498);
    func_0x000107c43358();
  }
  func_0x000107c61180();
  func_0x000107c4e3dc(lVar3);
  func_0x000107c615e8(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100e34bd0; end: 100e34d87;  */

void FUN_100e34bd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126d1490;
  if (param_4 == 1) {
    func_0x000107c61168(PTR_PTR_1126d1490);
    func_0x000107c5c3b4();
    func_0x000107c61180();
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126d1498;
      func_0x000107c61168(PTR_PTR_1126d1498);
      func_0x000107c435c4();
LAB_100e34d24:
      func_0x000107c61180();
      func_0x000107c4e3dc(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar3);
    }
  }
  else if (param_4 == 2) {
    func_0x000107c61168(PTR_PTR_1126d1490);
    func_0x000107c3f510();
    func_0x000107c61180();
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126d1498;
      func_0x000107c61168(PTR_PTR_1126d1498);
      func_0x000107c435c4();
      goto LAB_100e34d24;
    }
  }
  else {
    if (param_4 != 3) {
      FUN_100e34500(param_2,param_3,param_4,param_5 & 1);
      goto LAB_100e34d68;
    }
    func_0x000107c61168(PTR_PTR_1126d1490);
    func_0x000107c414c0();
    func_0x000107c61180();
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126d1498;
      func_0x000107c61168(PTR_PTR_1126d1498);
      func_0x000107c435c4();
      goto LAB_100e34d24;
    }
  }
  func_0x000107c61170(puVar2);
LAB_100e34d68:
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 100e34d88; end: 100e34e5f;  */

void FUN_100e34d88(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126d1490;
    func_0x000107c61168(PTR_PTR_1126d1490);
    func_0x000107c42d84();
    func_0x000107c61180();
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126d1498;
      func_0x000107c61168(PTR_PTR_1126d1498);
      func_0x000107c435c4();
      func_0x000107c61180();
      func_0x000107c4e3dc(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(puVar1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100e34e60; end: 100e34efb;  */

void FUN_100e34e60(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100c98234(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000100c98234(*(undefined8 *)(unaff_x20 + 0x60));
  FUN_100e34efc(unaff_x20 + 0x68,0x112d3ac10,&UNK_10d904620);
  FUN_100e34efc(unaff_x20 + 0x90,0x112d3ac18,&UNK_10d904628);
  return;
}



/* Entry: 100e34efc; end: 100e34f3b;  */

undefined8 FUN_100e34efc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100e34f3c; end: 100e34f5b;  */

void FUN_100e34f3c(void)

{
  FUN_100e34e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e34f5c; end: 100e34f7f;  */

void FUN_100e34f5c(void)

{
  func_0x000100e33e44();
  FUN_100e34358();
  return;
}



/* Entry: 100e34f80; end: 100e34f87;  */

undefined8 FUN_100e34f80(void)

{
  return 0;
}



/* Entry: 100e34f88; end: 100e34fa7;  */

void FUN_100e34f88(void)

{
  func_0x000107c61168(&PTR_PTR_112d3ac60);
  return;
}



/* Entry: 100e34fa8; end: 100e34feb; -[_TtC26SCPasskeyEnrollmentFeature27PasskeyEnrollmentEntryPoint alertViewDismissed] */

void FUN_100e34fa8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c6157c();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100e34fec; end: 100e35017;  */

void FUN_100e34fec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = param_1[2];
  uVar3 = *(undefined1 *)(param_1 + 3);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_100e34888(uVar1,uVar2,uVar5,uVar3);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 100e35018; end: 100e35067;  */

undefined8 FUN_100e35018(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d3ac10;
  func_0x0001000285a8(0x112d3ac10,&UNK_10d904620);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100e35068; end: 100e350a7;  */

undefined8 * FUN_100e35068(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 100e350a8; end: 100e35133;  */

long FUN_100e350a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100e35134; end: 100e3513f; -[SCPasskeyEnrollmentEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35134(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3ad20;
  func_0x000107c61428(param_1 + _DAT_112d3ad20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e35140; end: 100e3514b; -[SCPasskeyEnrollmentEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35140(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3ad20;
  func_0x000107c61428(param_1 + _DAT_112d3ad20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3514c; end: 100e35157; -[SCPasskeyEnrollmentEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3514c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3ad28;
  func_0x000107c61428(param_1 + _DAT_112d3ad28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e35158; end: 100e35163; -[SCPasskeyEnrollmentEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35158(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3ad28;
  func_0x000107c61428(param_1 + _DAT_112d3ad28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e35164; end: 100e3516f; -[SCPasskeyEnrollmentEntryPoint passkeyStoreServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35164(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3ad30;
  func_0x000107c61428(param_1 + _DAT_112d3ad30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e35170; end: 100e3517b; -[SCPasskeyEnrollmentEntryPoint setPasskeyStoreServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35170(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3ad30;
  func_0x000107c61428(param_1 + _DAT_112d3ad30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3517c; end: 100e35187; -[SCPasskeyEnrollmentEntryPoint userUnifiedGRPCServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3517c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3ad38;
  func_0x000107c61428(param_1 + _DAT_112d3ad38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e35188; end: 100e35193; -[SCPasskeyEnrollmentEntryPoint setUserUnifiedGRPCServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35188(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3ad38;
  func_0x000107c61428(param_1 + _DAT_112d3ad38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e35194; end: 100e3519f; -[SCPasskeyEnrollmentEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35194(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3ad40;
  func_0x000107c61428(param_1 + _DAT_112d3ad40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e351a0; end: 100e351ab; -[SCPasskeyEnrollmentEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e351a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3ad40;
  func_0x000107c61428(param_1 + _DAT_112d3ad40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e351ac; end: 100e351b7; -[SCPasskeyEnrollmentEntryPoint blizzardClientIdProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e351ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3ad48;
  func_0x000107c61428(param_1 + _DAT_112d3ad48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e351b8; end: 100e351c3; -[SCPasskeyEnrollmentEntryPoint setBlizzardClientIdProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e351b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3ad48;
  func_0x000107c61428(param_1 + _DAT_112d3ad48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e351c4; end: 100e351cf; -[SCPasskeyEnrollmentEntryPoint deviceInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e351c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3ad50;
  func_0x000107c61428(param_1 + _DAT_112d3ad50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e351d0; end: 100e35213;  */

void FUN_100e351d0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e35214; end: 100e3521f; -[SCPasskeyEnrollmentEntryPoint setDeviceInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3ad50;
  func_0x000107c61428(param_1 + _DAT_112d3ad50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e35220; end: 100e35273;  */

void FUN_100e35220(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e35274; end: 100e352bb; -[SCPasskeyEnrollmentEntryPoint alertViewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e35274(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3ad58;
  func_0x000107c61428(param_1 + _DAT_112d3ad58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100e352bc; end: 100e3531f; -[SCPasskeyEnrollmentEntryPoint setAlertViewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e352bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3ad58;
  func_0x000107c61428(param_1 + _DAT_112d3ad58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100e35320; end: 100e356ef;  */

/* WARNING: Possible PIC construction at 0x000100e35520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e356a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e356b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e356c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e35600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e35614) */
/* WARNING: Removing unreachable block (ram,0x000100e35634) */
/* WARNING: Removing unreachable block (ram,0x000100e35664) */
/* WARNING: Removing unreachable block (ram,0x000100e35654) */
/* WARNING: Removing unreachable block (ram,0x000100e35694) */
/* WARNING: Removing unreachable block (ram,0x000100e35684) */
/* WARNING: Removing unreachable block (ram,0x000100e35674) */
/* WARNING: Removing unreachable block (ram,0x000100e356c4) */
/* WARNING: Removing unreachable block (ram,0x000100e356b4) */
/* WARNING: Removing unreachable block (ram,0x000100e356a4) */
/* WARNING: Removing unreachable block (ram,0x000100e3559c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100e3558c) */
/* WARNING: Removing unreachable block (ram,0x000100e3557c) */
/* WARNING: Removing unreachable block (ram,0x000100e3556c) */
/* WARNING: Removing unreachable block (ram,0x000100e35534) */
/* WARNING: Removing unreachable block (ram,0x000100e35524) */
/* WARNING: Removing unreachable block (ram,0x000100e35604) */

void FUN_100e35320(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5d9b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4e408();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c5dac8();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c3e274();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c3eaa0();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c41918();
            func_0x000107c61180();
            if (lVar6 != 0) {
              func_0x000107c3db04();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar7 = 0;
                FUN_100e34f88();
                func_0x000107c613fc();
                func_0x0001000c6560();
                func_0x000107c613fc();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174();
                func_0x000107c61174(lVar6);
                func_0x000107c61174();
                func_0x0001000c6580();
                *(long *)(lVar7 + 0x50) = unaff_x20;
                *(undefined8 *)(lVar7 + 0x60) = 1;
                *(undefined8 *)(lVar7 + 0x58) = 1;
                *(undefined8 *)(lVar7 + 0x70) = 0;
                *(undefined8 *)(lVar7 + 0x68) = 0;
                *(undefined8 *)(lVar7 + 0x80) = 0;
                *(undefined8 *)(lVar7 + 0x78) = 0;
                *(undefined8 *)(lVar7 + 0x90) = 0;
                *(undefined8 *)(lVar7 + 0x88) = 0;
                *(undefined8 *)(lVar7 + 0xa0) = 0;
                *(undefined8 *)(lVar7 + 0x98) = 0;
                *(undefined8 *)(lVar7 + 0xb0) = 0;
                *(undefined8 *)(lVar7 + 0xa8) = 0;
                *(long *)(lVar7 + 0x10) = lVar1;
                *(long *)(lVar7 + 0x18) = lVar3;
                *(long *)(lVar7 + 0x20) = lVar2;
                puVar8 = PTR_PTR_1126a5e38;
                func_0x000107c610f8(PTR_PTR_1126a5e38);
                func_0x000107c61174();
                func_0x000107c61174(lVar2);
                func_0x000107c61174(lVar3);
                func_0x000107c49084(puVar8);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e356f0; end: 100e35717; -[SCPasskeyEnrollmentEntryPoint begin] */

void FUN_100e356f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e35320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e35718; end: 100e3575b; -[SCPasskeyEnrollmentEntryPoint end] */

void FUN_100e35718(undefined8 param_1)

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



/* Entry: 100e3575c; end: 100e35b73;  */

void FUN_100e3575c(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ef5f0)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a368();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ed2d0)) ||
         (func_0x000107c605b8(0xd000000000000014,0x800000010ef12d30,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57268();
      }
      else {
        uVar2 = 0xd000000000000017;
        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ed2b0)) ||
           (func_0x000107c605b8(0xd000000000000017,0x800000010ef12d50,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a418();
        }
        else {
          if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed650)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10ed290)) ||
                 (func_0x000107c605b8(0xd000000000000020,0x800000010ef12d70,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c52d64();
              }
              else {
                if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed260)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd000000000000012,0x800000010ef12da0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0xd000000000000015;
                    if (((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10ed610)) &&
                       (func_0x000107c605b8(0xd000000000000015,0x800000010ef129f0,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "SCPasskeyEnrollmentFeature/SCPasskeyEnrollmentEntryPoint.swift"
                                          ,0x3e,2,0x53,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e35b74);
                      (*pcVar1)();
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5260c();
                    goto LAB_100e357e8;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c54090();
              }
              goto LAB_100e357e8;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52954();
        }
      }
    }
  }
LAB_100e357e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


