/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100abe03c; end: 100abe0e7; -[SCSigActiveUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100abe03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100abe0e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100abe0e8; end: 100abe27f;  */

void FUN_100abe0e8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0e68c40)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f1973c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SigActiveUserSessionScopeGraphBridge/SCSigActiveUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x2b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100abe280);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c592a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100abe280; end: 100abe2d7; -[SCSigActiveUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abe280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe24a0;
  func_0x000107c61428(param_1 + _DAT_112fe24a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100abe2d8; end: 100abe33b; -[SCSigActiveUserSessionScopeGraphBridgeSaberEntryPoint setSigActiveUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abe2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe24a8;
  func_0x000107c61428(param_1 + _DAT_112fe24a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100abe33c; end: 100abe363; -[SCSigActiveUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100abe33c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100abe364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100abe364; end: 100abe497;  */

/* WARNING: Possible PIC construction at 0x000100abe41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100abe438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100abe454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100abe420) */
/* WARNING: Removing unreachable block (ram,0x000100abe43c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abe364(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5af58();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100abe528();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100abe548();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100abe498);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112fe2330) = lVar5;
    *(long *)(lVar4 + _DAT_112fe2338) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100abe498; end: 100abe4df; -[SCSigActiveUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abe498(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe24a0;
  func_0x000107c61428(param_1 + _DAT_112fe24a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100abe4e0; end: 100abe527; -[SCSigActiveUserSessionScopeGraphBridgeSaberEntryPoint sigActiveUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abe4e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe24a8;
  func_0x000107c61428(param_1 + _DAT_112fe24a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100abe528; end: 100abe547;  */

void FUN_100abe528(void)

{
  func_0x000107c61168(&PTR_PTR_11291fae0);
  return;
}



/* Entry: 100abe548; end: 100abe617;  */

undefined8 FUN_100abe548(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112fe2438,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1002aace0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100abe618; end: 100abe697; -[SCSongGenerationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abe618(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdd1d8,0);
  func_0x000107c61614(param_1 + _DAT_112fdd1e0,0);
  *(undefined8 *)(param_1 + _DAT_112fdd1e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112fdd1f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100abe698; end: 100abe743; -[SCSongGenerationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100abe698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100abe744(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100abe744; end: 100abe947;  */

void FUN_100abe744(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd00000000000002d;
    if (((param_2 == -0x2fffffffffffffd3) && (param_3 == -0x7ffffffef0e6c440)) ||
       (func_0x000107c605b8(0xd00000000000002d,0x800000010f193bc0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57548();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0e6c410)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010f193bf0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PlusActiveUserSessionScopeGraphBridge/SCSongGenerationServicesSaberEntryPoint.swift"
                              ,0x53,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100abe948);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59528();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100abe948; end: 100abe953; -[SCSongGenerationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abe948(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdd1d8;
  func_0x000107c61428(param_1 + _DAT_112fdd1d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100abe954; end: 100abe9a7;  */

void FUN_100abe954(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100abe9a8; end: 100abe9b3; -[SCSongGenerationServicesSaberEntryPoint setPlusActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abe9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdd1e0;
  func_0x000107c61428(param_1 + _DAT_112fdd1e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100abe9b4; end: 100abea17; -[SCSongGenerationServicesSaberEntryPoint setSongGenerationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abe9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdd1e8;
  func_0x000107c61428(param_1 + _DAT_112fdd1e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100abea18; end: 100abea3f; -[SCSongGenerationServicesSaberEntryPoint begin] */

void FUN_100abea18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100abea40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100abea40; end: 100abebc3;  */

/* WARNING: Possible PIC construction at 0x000100abeb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100abeb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100abeb6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100abeb44) */
/* WARNING: Removing unreachable block (ram,0x000100abeb54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abea40(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4ea20();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5b590();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100abec68();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fdd140);
        *(undefined8 *)(lVar2 + _DAT_112fdcd98) = uVar6;
        *(long *)(lVar2 + _DAT_112fdcda0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fdcda0);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100abebc4; end: 100abebcf; -[SCSongGenerationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abebc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdd1d8;
  func_0x000107c61428(param_1 + _DAT_112fdd1d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100abebd0; end: 100abec13;  */

void FUN_100abebd0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100abec14; end: 100abec1f; -[SCSongGenerationServicesSaberEntryPoint plusActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abec14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdd1e0;
  func_0x000107c61428(param_1 + _DAT_112fdd1e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100abec20; end: 100abec67; -[SCSongGenerationServicesSaberEntryPoint songGenerationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abec20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdd1e8;
  func_0x000107c61428(param_1 + _DAT_112fdd1e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100abec68; end: 100abec87;  */

void FUN_100abec68(void)

{
  func_0x000107c61168(&PTR_PTR_11291c100);
  return;
}



/* Entry: 100abec88; end: 100abec8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abec88(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_30);
  FUN_1002ab2c0();
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fdd608);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  puVar2 = auStack_40;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 100abec90; end: 100abecfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abec90(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_30);
  FUN_1002ab2c0();
  lVar2 = param_2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fdd608);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  plVar3 = &lStack_40;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 100abecfc; end: 100abeda7;  */

void FUN_100abecfc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  func_0x000100abf358();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  func_0x000107c615f0(uStack_48);
  uVar1 = uStack_50;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000107c615e8(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_11045d5f0;
  return;
}



/* Entry: 100abeda8; end: 100abf16f;  */

void FUN_100abeda8(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  
  ppuVar5 = &puStack_b0;
  ppuVar9 = &puStack_b0;
  ppuVar10 = &puStack_b0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = &UNK_101c62c14;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101c62cc4;
  puStack_98 = &UNK_11045f448;
  puStack_88 = (undefined *)uVar2;
  func_0x000107c60bc4(&puStack_b0);
  puVar8 = puStack_88;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar8);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  FUN_100083b20(&puStack_b0);
  puVar8 = puStack_b0;
  puVar6 = puStack_b0;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100abf170);
    (*pcVar3)();
  }
  puVar7 = PTR_PTR_1126bd940;
  func_0x000107c610f8();
  func_0x000107c49080();
  func_0x000107c615e8(puVar6);
  func_0x000107c61170(puVar4);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar8 = &UNK_11045f480;
  uVar14 = 0x18;
  func_0x000107c613fc(&UNK_11045f480,0x18,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  puStack_90 = &UNK_101c62c40;
  puStack_b0 = puVar15;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101c62cc0;
  puStack_98 = &UNK_11045f498;
  puStack_88 = puVar8;
  func_0x000107c60bc4(&puStack_b0);
  puVar8 = puStack_88;
  func_0x000107c61174(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_90 = &UNK_101c62c64;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = puVar15;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101c62cc8;
  puStack_98 = &UNK_11045f4c0;
  func_0x000107c60bc4();
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x000100abf254();
  func_0x000107c61180();
  if (ppuVar10 != (undefined **)0x0) {
    puVar11 = (undefined1 *)ppuVar10;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar10);
    uVar1 = (ulong)puVar11 & 0xffffffffffff;
    if ((uVar14 & 0x2000000000000000) != 0) {
      uVar1 = uVar14 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar6 = PTR_PTR_1126ae748;
      func_0x000107c61168(PTR_PTR_1126ae748);
      func_0x000107c61434(uVar14);
      func_0x000107c3edf4(puVar6);
      func_0x000107c61180();
      lVar12 = 0x112d38300;
      FUN_1000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61534();
      *(undefined8 *)(lVar12 + 0x18) = 2;
      *(undefined8 *)(lVar12 + 0x10) = 1;
      *(undefined8 *)(lVar12 + 0x20) = 0xd000000000000010;
      *(undefined8 *)(lVar12 + 0x28) = 0x800000010ef1c330;
      *(undefined1 **)(lVar12 + 0x30) = puVar11;
      *(ulong *)(lVar12 + 0x38) = uVar14;
      func_0x000107c61434(uVar14);
      lVar13 = lVar12;
      FUN_1001830b8(lVar12);
      func_0x000107c61588(lVar12);
      func_0x000100ab5dc4((undefined8 *)(lVar12 + 0x20));
      lVar12 = lVar13;
      func_0x000107c5f9dc(lVar13,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(lVar13);
      puVar15 = puVar6;
      func_0x000107c3d704(puVar6);
      func_0x000107c61180();
      func_0x000107c61430(uVar14,2);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(puVar6);
      func_0x000107c61174(puVar15);
      goto LAB_100abf0fc;
    }
    func_0x000107c6142c(uVar14);
  }
  puVar15 = (undefined *)0x0;
LAB_100abf0fc:
  puVar6 = PTR_PTR_1126bd900;
  func_0x000107c610f8();
  func_0x000107c47818();
  func_0x000107c615e8(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  *param_1 = puVar6;
  return;
}



/* Entry: 100abf170; end: 100abf193;  */

void FUN_100abf170(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100abf194; end: 100abf1a7;  */

void FUN_100abf194(long param_1,long param_2)

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



/* Entry: 100abf1a8; end: 100abf24b; -[UNISCMinervaMinervaServiceFactory initWithUnifiedGRPCClientFactory:circumstanceEngine:] */

undefined1 *
FUN_100abf1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ea028;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100abf24c; end: 100abf25f;  */

void FUN_100abf24c(long param_1,long param_2)

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



/* Entry: 100abf260; end: 100abf32b; -[SCMinervaAISongGrpcServiceImpl initWithMinervaService:minervaProtoModelsConverter:grpcCallOptionsBuilder:] */

undefined1 *
FUN_100abf260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126ea008;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100abf32c; end: 100abf3a3;  */

void FUN_100abf32c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100abf3a4; end: 100abf40f; -[SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abf3a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe2d48,0);
  *(undefined8 *)(param_1 + _DAT_112fe2d50) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe2d58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100abf410; end: 100abf4bb; -[SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100abf410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100abf4bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100abf4bc; end: 100abf653;  */

void FUN_100abf4bc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffc9) || (param_3 != -0x7ffffffef0e684c0)) {
      uVar2 = 0xd000000000000037;
      func_0x000107c605b8(0xd000000000000037,0x800000010f197b40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpecengActiveUserSessionScopeGraphBridge/SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x68,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100abf654);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100abf654; end: 100abf6ab; -[SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abf654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2d48;
  func_0x000107c61428(param_1 + _DAT_112fe2d48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100abf6ac; end: 100abf70f; -[SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint setSpecengActiveUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abf6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2d50;
  func_0x000107c61428(param_1 + _DAT_112fe2d50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100abf710; end: 100abf737; -[SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100abf710(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100abf738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100abf738; end: 100abf86b;  */

/* WARNING: Possible PIC construction at 0x000100abf7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100abf80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100abf828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100abf7f4) */
/* WARNING: Removing unreachable block (ram,0x000100abf810) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abf738(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5b6c8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100abf8fc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100abf91c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100abf86c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112fe25a0) = lVar5;
    *(long *)(lVar4 + _DAT_112fe25a8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100abf86c; end: 100abf8b3; -[SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abf86c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2d48;
  func_0x000107c61428(param_1 + _DAT_112fe2d48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100abf8b4; end: 100abf8fb; -[SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint specengActiveUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abf8b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2d50;
  func_0x000107c61428(param_1 + _DAT_112fe2d50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100abf8fc; end: 100abf91b;  */

void FUN_100abf8fc(void)

{
  func_0x000107c61168(&PTR_PTR_11291fd78);
  return;
}



/* Entry: 100abf91c; end: 100abf9eb;  */

undefined8 FUN_100abf91c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112fe2c78,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1002d90e0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100abf9ec; end: 100abfa6b; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abf9ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe2d88,0);
  func_0x000107c61614(param_1 + _DAT_112fe2d90,0);
  *(undefined8 *)(param_1 + _DAT_112fe2d98) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe2da0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100abfa6c; end: 100abfb17; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100abfa6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100abfb18(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100abfb18; end: 100abfd1b;  */

void FUN_100abfb18(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef0e68410)) ||
       (func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c595ac();
    }
    else {
      if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e683d0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000024,0x800000010f197c30,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesAppStatusServicesSaberEntryPoint.swift"
                              ,0x5d,2,0x3c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100abfd1c);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c588c8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100abfd1c; end: 100abfd27; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abfd1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2d88;
  func_0x000107c61428(param_1 + _DAT_112fe2d88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100abfd28; end: 100abfd7b;  */

void FUN_100abfd28(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100abfd7c; end: 100abfd87; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abfd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2d90;
  func_0x000107c61428(param_1 + _DAT_112fe2d90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100abfd88; end: 100abfdeb; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint setSCSpectaclesAppStatusServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abfd88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2d98;
  func_0x000107c61428(param_1 + _DAT_112fe2d98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100abfdec; end: 100abfe13; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint begin] */

void FUN_100abfdec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100abfe14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100abfe14; end: 100abff97;  */

/* WARNING: Possible PIC construction at 0x000100abff14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100abff24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100abff40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100abff18) */
/* WARNING: Removing unreachable block (ram,0x000100abff28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abfe14(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51320();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac003c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe2c90);
        *(undefined8 *)(lVar2 + _DAT_112fe25d8) = uVar6;
        *(long *)(lVar2 + _DAT_112fe25e0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe25e0);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100abff98; end: 100abffa3; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abff98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2d88;
  func_0x000107c61428(param_1 + _DAT_112fe2d88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100abffa4; end: 100abffe7;  */

void FUN_100abffa4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100abffe8; end: 100abfff3; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint specengActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abffe8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2d90;
  func_0x000107c61428(param_1 + _DAT_112fe2d90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100abfff4; end: 100ac003b; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint sCSpectaclesAppStatusServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100abfff4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2d98;
  func_0x000107c61428(param_1 + _DAT_112fe2d98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac003c; end: 100ac005b;  */

void FUN_100ac003c(void)

{
  func_0x000107c61168(&PTR_PTR_11291fe40);
  return;
}



/* Entry: 100ac005c; end: 100ac00db; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac005c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe2dd0,0);
  func_0x000107c61614(param_1 + _DAT_112fe2dd8,0);
  *(undefined8 *)(param_1 + _DAT_112fe2de0) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe2de8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac00dc; end: 100ac0187; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac00dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac0188(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac0188; end: 100ac038b;  */

void FUN_100ac0188(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef0e68410)) ||
       (func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c595ac();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0e68340)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001e,0x800000010f197cc0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesAsyncQueuesSaberEntryPoint.swift"
                              ,0x57,2,0x3c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac038c);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c588cc();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac038c; end: 100ac0397; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac038c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2dd0;
  func_0x000107c61428(param_1 + _DAT_112fe2dd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac0398; end: 100ac03eb;  */

void FUN_100ac0398(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac03ec; end: 100ac03f7; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac03ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2dd8;
  func_0x000107c61428(param_1 + _DAT_112fe2dd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac03f8; end: 100ac045b; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint setSCSpectaclesAsyncQueuesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac03f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2de0;
  func_0x000107c61428(param_1 + _DAT_112fe2de0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac045c; end: 100ac0483; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint begin] */

void FUN_100ac045c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac0484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac0484; end: 100ac0607;  */

/* WARNING: Possible PIC construction at 0x000100ac0584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac0594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac05b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac0588) */
/* WARNING: Removing unreachable block (ram,0x000100ac0598) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0484(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51324();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac06ac();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe2c98);
        *(undefined8 *)(lVar2 + _DAT_112fe2610) = uVar6;
        *(long *)(lVar2 + _DAT_112fe2618) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe2618);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100ac0608; end: 100ac0613; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0608(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2dd0;
  func_0x000107c61428(param_1 + _DAT_112fe2dd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac0614; end: 100ac0657;  */

void FUN_100ac0614(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac0658; end: 100ac0663; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint specengActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0658(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2dd8;
  func_0x000107c61428(param_1 + _DAT_112fe2dd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac0664; end: 100ac06ab; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint sCSpectaclesAsyncQueuesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0664(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2de0;
  func_0x000107c61428(param_1 + _DAT_112fe2de0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac06ac; end: 100ac06cb;  */

void FUN_100ac06ac(void)

{
  func_0x000107c61168(&PTR_PTR_11291ff08);
  return;
}



/* Entry: 100ac06cc; end: 100ac06d3;  */

void FUN_100ac06cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x150);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100ac06d4; end: 100ac0727;  */

void FUN_100ac06d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x150);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100ac0728; end: 100ac07a7; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0728(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe2e18,0);
  func_0x000107c61614(param_1 + _DAT_112fe2e20,0);
  *(undefined8 *)(param_1 + _DAT_112fe2e28) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe2e30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac07a8; end: 100ac0853; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac07a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac0854(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac0854; end: 100ac0a57;  */

void FUN_100ac0854(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e68410)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0e682c0)) &&
           (func_0x000107c605b8(0xd000000000000032,0x800000010f197d40,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint.swift"
                              ,0x6b,2,0x3c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac0a58);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c588d8();
        goto LAB_100ac08e0;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595ac();
  }
LAB_100ac08e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac0a58; end: 100ac0a63; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2e18;
  func_0x000107c61428(param_1 + _DAT_112fe2e18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac0a64; end: 100ac0ab7;  */

void FUN_100ac0a64(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac0ab8; end: 100ac0ac3; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2e20;
  func_0x000107c61428(param_1 + _DAT_112fe2e20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac0ac4; end: 100ac0b27; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint setSCSpectaclesBluetoothCentralManagerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2e28;
  func_0x000107c61428(param_1 + _DAT_112fe2e28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac0b28; end: 100ac0b4f; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint begin] */

void FUN_100ac0b28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac0b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac0b50; end: 100ac0cd3;  */

/* WARNING: Possible PIC construction at 0x000100ac0c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac0c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac0c7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac0c54) */
/* WARNING: Removing unreachable block (ram,0x000100ac0c64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0b50(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51330();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac0d78();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe2cb0);
        *(undefined8 *)(lVar2 + _DAT_112fe2648) = uVar6;
        *(long *)(lVar2 + _DAT_112fe2650) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe2650);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100ac0cd4; end: 100ac0cdf; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0cd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2e18;
  func_0x000107c61428(param_1 + _DAT_112fe2e18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac0ce0; end: 100ac0d23;  */

void FUN_100ac0ce0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ac0d24; end: 100ac0d2f; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint specengActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0d24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2e20;
  func_0x000107c61428(param_1 + _DAT_112fe2e20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ac0d30; end: 100ac0d77; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint sCSpectaclesBluetoothCentralManagerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0d30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2e28;
  func_0x000107c61428(param_1 + _DAT_112fe2e28,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ac0d78; end: 100ac0d97;  */

void FUN_100ac0d78(void)

{
  func_0x000107c61168(&PTR_PTR_11291ffd0);
  return;
}



/* Entry: 100ac0d98; end: 100ac0d9f;  */

void FUN_100ac0d98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x160);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100ac0da0; end: 100ac0df3;  */

void FUN_100ac0da0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x160);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100ac0df4; end: 100ac0e73; -[SCSCSpectaclesContentStatusServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac0df4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe2e60,0);
  func_0x000107c61614(param_1 + _DAT_112fe2e68,0);
  *(undefined8 *)(param_1 + _DAT_112fe2e70) = 0;
  *(undefined8 *)(param_1 + _DAT_112fe2e78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ac0e74; end: 100ac0f1f; -[SCSCSpectaclesContentStatusServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ac0e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ac0f20(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ac0f20; end: 100ac1123;  */

void FUN_100ac0f20(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef0e68410)) ||
       (func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c595ac();
    }
    else {
      if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e68210)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000028,0x800000010f197df0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesContentStatusServicesSaberEntryPoint.swift"
                              ,0x61,2,0x3c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ac1124);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c588ec();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ac1124; end: 100ac112f; -[SCSCSpectaclesContentStatusServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac1124(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2e60;
  func_0x000107c61428(param_1 + _DAT_112fe2e60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac1130; end: 100ac1183;  */

void FUN_100ac1130(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac1184; end: 100ac118f; -[SCSCSpectaclesContentStatusServicesSaberEntryPoint setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac1184(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2e68;
  func_0x000107c61428(param_1 + _DAT_112fe2e68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ac1190; end: 100ac11f3; -[SCSCSpectaclesContentStatusServicesSaberEntryPoint setSCSpectaclesContentStatusServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac1190(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2e70;
  func_0x000107c61428(param_1 + _DAT_112fe2e70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ac11f4; end: 100ac121b; -[SCSCSpectaclesContentStatusServicesSaberEntryPoint begin] */

void FUN_100ac11f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ac121c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ac121c; end: 100ac139f;  */

/* WARNING: Possible PIC construction at 0x000100ac131c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac132c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ac1348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ac1320) */
/* WARNING: Removing unreachable block (ram,0x000100ac1330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac121c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51344();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100ac1444();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fe2cb8);
        *(undefined8 *)(lVar2 + _DAT_112fe2680) = uVar6;
        *(long *)(lVar2 + _DAT_112fe2688) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fe2688);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}


