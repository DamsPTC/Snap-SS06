/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a57ee0; end: 100a57f8b; -[SCSCApplicationConfigProvidingSaberEntryPoint setValue:forIvarName:] */

void FUN_100a57ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a57f8c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a57f8c; end: 100a5818f;  */

void FUN_100a57f8c(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0e3f000)) ||
       (func_0x000107c605b8(0xd000000000000026,0x800000010f1c1000,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5355c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e3efd0)) {
        uVar2 = 0xd000000000000023;
        func_0x000107c605b8(0xd000000000000023,0x800000010f1c1030,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CofUserSessionScopeGraphBridge/SCSCApplicationConfigProvidingSaberEntryPoint.swift"
                              ,0x52,2,0x2f,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58190);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57fe4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a58190; end: 100a5819b; -[SCSCApplicationConfigProvidingSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58190(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113018600;
  func_0x000107c61428(param_1 + _DAT_113018600,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5819c; end: 100a581ef;  */

void FUN_100a5819c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a581f0; end: 100a581fb; -[SCSCApplicationConfigProvidingSaberEntryPoint setCofUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a581f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113018608;
  func_0x000107c61428(param_1 + _DAT_113018608,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a581fc; end: 100a5825f; -[SCSCApplicationConfigProvidingSaberEntryPoint setSCApplicationConfigProvidingExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a581fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113018610;
  func_0x000107c61428(param_1 + _DAT_113018610,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a58260; end: 100a58287; -[SCSCApplicationConfigProvidingSaberEntryPoint begin] */

void FUN_100a58260(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a58288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a58288; end: 100a5840b;  */

/* WARNING: Possible PIC construction at 0x000100a58390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a583a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a583e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a583a4) */
/* WARNING: Removing unreachable block (ram,0x000100a58394) */
/* WARNING: Removing unreachable block (ram,0x000100a583e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58288(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c3fd34();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c50a3c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_100a584b0();
      lVar5 = lVar4;
      func_0x000107c610f8();
      uVar7 = *(undefined8 *)(lVar3 + _DAT_113018560);
      *(undefined8 *)(lVar5 + _DAT_1130184e0) = uVar7;
      *(long *)(lVar5 + _DAT_1130184e8) = unaff_x20;
      puVar1 = PTR_s_init_1125d9248;
      lStack_70 = lVar5;
      lStack_68 = lVar4;
      func_0x000107c61174(unaff_x20);
      func_0x000107c6157c(uVar7);
      plVar6 = &lStack_70;
      func_0x000107c61154(plVar6,puVar1);
      uVar7 = *(undefined8 *)((long)plVar6 + _DAT_1130184e8);
      FUN_100083b20(&uStack_78);
      func_0x000107c42c20(uVar7);
      func_0x000107c615e8(uStack_78);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a5840c; end: 100a58417; -[SCSCApplicationConfigProvidingSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5840c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113018600;
  func_0x000107c61428(param_1 + _DAT_113018600,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a58418; end: 100a5845b;  */

void FUN_100a58418(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a5845c; end: 100a58467; -[SCSCApplicationConfigProvidingSaberEntryPoint cofUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5845c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113018608;
  func_0x000107c61428(param_1 + _DAT_113018608,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a58468; end: 100a584af; -[SCSCApplicationConfigProvidingSaberEntryPoint sCApplicationConfigProvidingExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58468(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113018610;
  func_0x000107c61428(param_1 + _DAT_113018610,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a584b0; end: 100a584cf;  */

void FUN_100a584b0(void)

{
  func_0x000107c61168(&PTR_PTR_112953fb8);
  return;
}



/* Entry: 100a584d0; end: 100a5854f; -[SCSCBitmojiFetchServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a584d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113013d10,0);
  func_0x000107c61614(param_1 + _DAT_113013d18,0);
  *(undefined8 *)(param_1 + _DAT_113013d20) = 0;
  *(undefined8 *)(param_1 + _DAT_113013d28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a58550; end: 100a585fb; -[SCSCBitmojiFetchServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a58550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a585fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a585fc; end: 100a587ff;  */

void FUN_100a585fc(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000025;
    if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef0e42160)) ||
       (func_0x000107c605b8(0xd000000000000025,0x800000010f1bdea0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52dc4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0e42130)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010f1bded0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BmUserSessionScopeGraphBridge/SCSCBitmojiFetchServicesSaberEntryPoint.swift"
                              ,0x4b,2,0x3e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58800);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58054();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a58800; end: 100a5880b; -[SCSCBitmojiFetchServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013d10;
  func_0x000107c61428(param_1 + _DAT_113013d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5880c; end: 100a5885f;  */

void FUN_100a5880c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a58860; end: 100a5886b; -[SCSCBitmojiFetchServicesSaberEntryPoint setBmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58860(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013d18;
  func_0x000107c61428(param_1 + _DAT_113013d18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5886c; end: 100a588cf; -[SCSCBitmojiFetchServicesSaberEntryPoint setSCBitmojiFetchServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5886c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013d20;
  func_0x000107c61428(param_1 + _DAT_113013d20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a588d0; end: 100a588f7; -[SCSCBitmojiFetchServicesSaberEntryPoint begin] */

void FUN_100a588d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a588f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a588f8; end: 100a58a7b;  */

/* WARNING: Possible PIC construction at 0x000100a589f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a58a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a58a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a589fc) */
/* WARNING: Removing unreachable block (ram,0x000100a58a0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a588f8(void)

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
    func_0x000107c3eb78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50aac();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a58b20();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113013c30);
        *(undefined8 *)(lVar2 + _DAT_113013110) = uVar6;
        *(long *)(lVar2 + _DAT_113013118) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113013118);
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



/* Entry: 100a58a7c; end: 100a58a87; -[SCSCBitmojiFetchServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58a7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013d10;
  func_0x000107c61428(param_1 + _DAT_113013d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a58a88; end: 100a58acb;  */

void FUN_100a58a88(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a58acc; end: 100a58ad7; -[SCSCBitmojiFetchServicesSaberEntryPoint bmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58acc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013d18;
  func_0x000107c61428(param_1 + _DAT_113013d18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a58ad8; end: 100a58b1f; -[SCSCBitmojiFetchServicesSaberEntryPoint sCBitmojiFetchServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58ad8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013d20;
  func_0x000107c61428(param_1 + _DAT_113013d20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a58b20; end: 100a58b3f;  */

void FUN_100a58b20(void)

{
  func_0x000107c61168(&PTR_PTR_112950428);
  return;
}



/* Entry: 100a58b40; end: 100a58bbf; -[SCSCBitmojiMetricsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58b40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113013d58,0);
  func_0x000107c61614(param_1 + _DAT_113013d60,0);
  *(undefined8 *)(param_1 + _DAT_113013d68) = 0;
  *(undefined8 *)(param_1 + _DAT_113013d70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a58bc0; end: 100a58c6b; -[SCSCBitmojiMetricsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a58bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a58c6c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a58c6c; end: 100a58e6f;  */

void FUN_100a58c6c(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000025;
    if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef0e42160)) ||
       (func_0x000107c605b8(0xd000000000000025,0x800000010f1bdea0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52dc4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0e420c0)) {
        uVar2 = 0xd00000000000001f;
        func_0x000107c605b8(0xd00000000000001f,0x800000010f1bdf40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BmUserSessionScopeGraphBridge/SCSCBitmojiMetricsServicesSaberEntryPoint.swift"
                              ,0x4d,2,0x3e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58e70);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5806c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a58e70; end: 100a58e7b; -[SCSCBitmojiMetricsServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013d58;
  func_0x000107c61428(param_1 + _DAT_113013d58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a58e7c; end: 100a58ecf;  */

void FUN_100a58e7c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a58ed0; end: 100a58edb; -[SCSCBitmojiMetricsServicesSaberEntryPoint setBmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013d60;
  func_0x000107c61428(param_1 + _DAT_113013d60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a58edc; end: 100a58f3f; -[SCSCBitmojiMetricsServicesSaberEntryPoint setSCBitmojiMetricsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013d68;
  func_0x000107c61428(param_1 + _DAT_113013d68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a58f40; end: 100a58f67; -[SCSCBitmojiMetricsServicesSaberEntryPoint begin] */

void FUN_100a58f40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a58f68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a58f68; end: 100a590eb;  */

/* WARNING: Possible PIC construction at 0x000100a59068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a59078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a59094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a5906c) */
/* WARNING: Removing unreachable block (ram,0x000100a5907c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a58f68(void)

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
    func_0x000107c3eb78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50ac4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a59190();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113013c58);
        *(undefined8 *)(lVar2 + _DAT_113013148) = uVar6;
        *(long *)(lVar2 + _DAT_113013150) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113013150);
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



/* Entry: 100a590ec; end: 100a590f7; -[SCSCBitmojiMetricsServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a590ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013d58;
  func_0x000107c61428(param_1 + _DAT_113013d58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a590f8; end: 100a5913b;  */

void FUN_100a590f8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a5913c; end: 100a59147; -[SCSCBitmojiMetricsServicesSaberEntryPoint bmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5913c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013d60;
  func_0x000107c61428(param_1 + _DAT_113013d60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a59148; end: 100a5918f; -[SCSCBitmojiMetricsServicesSaberEntryPoint sCBitmojiMetricsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59148(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013d68;
  func_0x000107c61428(param_1 + _DAT_113013d68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a59190; end: 100a591af;  */

void FUN_100a59190(void)

{
  func_0x000107c61168(&PTR_PTR_1129504f0);
  return;
}



/* Entry: 100a591b0; end: 100a5922f; -[SCSCBitmojiProfileLensServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a591b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113013da0,0);
  func_0x000107c61614(param_1 + _DAT_113013da8,0);
  *(undefined8 *)(param_1 + _DAT_113013db0) = 0;
  *(undefined8 *)(param_1 + _DAT_113013db8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a59230; end: 100a592db; -[SCSCBitmojiProfileLensServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a59230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a592dc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a592dc; end: 100a594df;  */

void FUN_100a592dc(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000025;
    if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef0e42160)) ||
       (func_0x000107c605b8(0xd000000000000025,0x800000010f1bdea0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52dc4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e42050)) {
        uVar2 = 0xd000000000000023;
        func_0x000107c605b8(0xd000000000000023,0x800000010f1bdfb0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BmUserSessionScopeGraphBridge/SCSCBitmojiProfileLensServicesSaberEntryPoint.swift"
                              ,0x51,2,0x3e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a594e0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58074();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a594e0; end: 100a594eb; -[SCSCBitmojiProfileLensServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a594e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013da0;
  func_0x000107c61428(param_1 + _DAT_113013da0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a594ec; end: 100a5953f;  */

void FUN_100a594ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a59540; end: 100a5954b; -[SCSCBitmojiProfileLensServicesSaberEntryPoint setBmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59540(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013da8;
  func_0x000107c61428(param_1 + _DAT_113013da8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5954c; end: 100a595af; -[SCSCBitmojiProfileLensServicesSaberEntryPoint setSCBitmojiProfileLensServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5954c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013db0;
  func_0x000107c61428(param_1 + _DAT_113013db0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a595b0; end: 100a595d7; -[SCSCBitmojiProfileLensServicesSaberEntryPoint begin] */

void FUN_100a595b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a595d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a595d8; end: 100a5975b;  */

/* WARNING: Possible PIC construction at 0x000100a596d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a596e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a59704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a596dc) */
/* WARNING: Removing unreachable block (ram,0x000100a596ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a595d8(void)

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
    func_0x000107c3eb78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50acc();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a59800();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113013c60);
        *(undefined8 *)(lVar2 + _DAT_113013180) = uVar6;
        *(long *)(lVar2 + _DAT_113013188) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113013188);
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



/* Entry: 100a5975c; end: 100a59767; -[SCSCBitmojiProfileLensServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5975c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013da0;
  func_0x000107c61428(param_1 + _DAT_113013da0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a59768; end: 100a597ab;  */

void FUN_100a59768(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a597ac; end: 100a597b7; -[SCSCBitmojiProfileLensServicesSaberEntryPoint bmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a597ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013da8;
  func_0x000107c61428(param_1 + _DAT_113013da8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a597b8; end: 100a597ff; -[SCSCBitmojiProfileLensServicesSaberEntryPoint sCBitmojiProfileLensServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a597b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013db0;
  func_0x000107c61428(param_1 + _DAT_113013db0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a59800; end: 100a5981f;  */

void FUN_100a59800(void)

{
  func_0x000107c61168(&PTR_PTR_1129505b8);
  return;
}



/* Entry: 100a59820; end: 100a59827;  */

void FUN_100a59820(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a59828; end: 100a5987b;  */

void FUN_100a59828(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a5987c; end: 100a598fb; -[SCSCBitmojiSelfieServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5987c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113013de8,0);
  func_0x000107c61614(param_1 + _DAT_113013df0,0);
  *(undefined8 *)(param_1 + _DAT_113013df8) = 0;
  *(undefined8 *)(param_1 + _DAT_113013e00) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a598fc; end: 100a599a7; -[SCSCBitmojiSelfieServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a598fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a599a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a599a8; end: 100a59bab;  */

void FUN_100a599a8(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000025;
    if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef0e42160)) ||
       (func_0x000107c605b8(0xd000000000000025,0x800000010f1bdea0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52dc4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0e41fc0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001e,0x800000010f1be040,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BmUserSessionScopeGraphBridge/SCSCBitmojiSelfieServicesSaberEntryPoint.swift"
                              ,0x4c,2,0x3e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a59bac);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58080();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a59bac; end: 100a59bb7; -[SCSCBitmojiSelfieServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013de8;
  func_0x000107c61428(param_1 + _DAT_113013de8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a59bb8; end: 100a59c0b;  */

void FUN_100a59bb8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a59c0c; end: 100a59c17; -[SCSCBitmojiSelfieServicesSaberEntryPoint setBmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013df0;
  func_0x000107c61428(param_1 + _DAT_113013df0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a59c18; end: 100a59c7b; -[SCSCBitmojiSelfieServicesSaberEntryPoint setSCBitmojiSelfieServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013df8;
  func_0x000107c61428(param_1 + _DAT_113013df8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a59c7c; end: 100a59ca3; -[SCSCBitmojiSelfieServicesSaberEntryPoint begin] */

void FUN_100a59c7c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a59ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a59ca4; end: 100a59e27;  */

/* WARNING: Possible PIC construction at 0x000100a59da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a59db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a59dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a59da8) */
/* WARNING: Removing unreachable block (ram,0x000100a59db8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59ca4(void)

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
    func_0x000107c3eb78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50ad8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a59ecc();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113013c68);
        *(undefined8 *)(lVar2 + _DAT_1130131b8) = uVar6;
        *(long *)(lVar2 + _DAT_1130131c0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_1130131c0);
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



/* Entry: 100a59e28; end: 100a59e33; -[SCSCBitmojiSelfieServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59e28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013de8;
  func_0x000107c61428(param_1 + _DAT_113013de8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a59e34; end: 100a59e77;  */

void FUN_100a59e34(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a59e78; end: 100a59e83; -[SCSCBitmojiSelfieServicesSaberEntryPoint bmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59e78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013df0;
  func_0x000107c61428(param_1 + _DAT_113013df0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a59e84; end: 100a59ecb; -[SCSCBitmojiSelfieServicesSaberEntryPoint sCBitmojiSelfieServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59e84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013df8;
  func_0x000107c61428(param_1 + _DAT_113013df8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a59ecc; end: 100a59eeb;  */

void FUN_100a59ecc(void)

{
  func_0x000107c61168(&PTR_PTR_112950680);
  return;
}



/* Entry: 100a59eec; end: 100a59f6b; -[SCSCBitmojiUserServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a59eec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113013e30,0);
  func_0x000107c61614(param_1 + _DAT_113013e38,0);
  *(undefined8 *)(param_1 + _DAT_113013e40) = 0;
  *(undefined8 *)(param_1 + _DAT_113013e48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a59f6c; end: 100a5a017; -[SCSCBitmojiUserServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a59f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a5a018(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a5a018; end: 100a5a21b;  */

void FUN_100a5a018(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000025;
    if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef0e42160)) ||
       (func_0x000107c605b8(0xd000000000000025,0x800000010f1bdea0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52dc4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0e41f50)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001c,0x800000010f1be0b0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BmUserSessionScopeGraphBridge/SCSCBitmojiUserServicesSaberEntryPoint.swift"
                              ,0x4a,2,0x3e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5a21c);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58090();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a5a21c; end: 100a5a227; -[SCSCBitmojiUserServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013e30;
  func_0x000107c61428(param_1 + _DAT_113013e30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5a228; end: 100a5a27b;  */

void FUN_100a5a228(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5a27c; end: 100a5a287; -[SCSCBitmojiUserServicesSaberEntryPoint setBmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013e38;
  func_0x000107c61428(param_1 + _DAT_113013e38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5a288; end: 100a5a2eb; -[SCSCBitmojiUserServicesSaberEntryPoint setSCBitmojiUserServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013e40;
  func_0x000107c61428(param_1 + _DAT_113013e40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a5a2ec; end: 100a5a313; -[SCSCBitmojiUserServicesSaberEntryPoint begin] */

void FUN_100a5a2ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a5a314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a5a314; end: 100a5a497;  */

/* WARNING: Possible PIC construction at 0x000100a5a414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a5a424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a5a440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a5a418) */
/* WARNING: Removing unreachable block (ram,0x000100a5a428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a314(void)

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
    func_0x000107c3eb78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50ae8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a5a53c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113013c70);
        *(undefined8 *)(lVar2 + _DAT_1130131f0) = uVar6;
        *(long *)(lVar2 + _DAT_1130131f8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_1130131f8);
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



/* Entry: 100a5a498; end: 100a5a4a3; -[SCSCBitmojiUserServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a498(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013e30;
  func_0x000107c61428(param_1 + _DAT_113013e30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a5a4a4; end: 100a5a4e7;  */

void FUN_100a5a4a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a5a4e8; end: 100a5a4f3; -[SCSCBitmojiUserServicesSaberEntryPoint bmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a4e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013e38;
  func_0x000107c61428(param_1 + _DAT_113013e38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a5a4f4; end: 100a5a53b; -[SCSCBitmojiUserServicesSaberEntryPoint sCBitmojiUserServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a4f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013e40;
  func_0x000107c61428(param_1 + _DAT_113013e40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a5a53c; end: 100a5a55b;  */

void FUN_100a5a53c(void)

{
  func_0x000107c61168(&PTR_PTR_112950748);
  return;
}



/* Entry: 100a5a55c; end: 100a5a5db; -[SCSCBloopsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a55c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113015460,0);
  func_0x000107c61614(param_1 + _DAT_113015468,0);
  *(undefined8 *)(param_1 + _DAT_113015470) = 0;
  *(undefined8 *)(param_1 + _DAT_113015478) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a5a5dc; end: 100a5a687; -[SCSCBloopsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a5a5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a5a688(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a5a688; end: 100a5a88b;  */

void FUN_100a5a688(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd8) && (param_3 == -0x7ffffffef0e41360)) ||
       (func_0x000107c605b8(0xd000000000000028,0x800000010f1beca0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52f98();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef0e41330)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010f1becd0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CameoUserSessionScopeGraphBridge/SCSCBloopsServicesSaberEntryPoint.swift"
                              ,0x48,2,0x3b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a5a88c);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5809c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a5a88c; end: 100a5a897; -[SCSCBloopsServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113015460;
  func_0x000107c61428(param_1 + _DAT_113015460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5a898; end: 100a5a8eb;  */

void FUN_100a5a898(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5a8ec; end: 100a5a8f7; -[SCSCBloopsServicesSaberEntryPoint setCameoUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113015468;
  func_0x000107c61428(param_1 + _DAT_113015468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a5a8f8; end: 100a5a95b; -[SCSCBloopsServicesSaberEntryPoint setSCBloopsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a8f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113015470;
  func_0x000107c61428(param_1 + _DAT_113015470,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a5a95c; end: 100a5a983; -[SCSCBloopsServicesSaberEntryPoint begin] */

void FUN_100a5a95c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a5a984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a5a984; end: 100a5ab07;  */

/* WARNING: Possible PIC construction at 0x000100a5aa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a5aa94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a5aab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a5aa88) */
/* WARNING: Removing unreachable block (ram,0x000100a5aa98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5a984(void)

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
    func_0x000107c3f030();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50af4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a5abac();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113015388);
        *(undefined8 *)(lVar2 + _DAT_113014888) = uVar6;
        *(long *)(lVar2 + _DAT_113014890) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113014890);
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



/* Entry: 100a5ab08; end: 100a5ab13; -[SCSCBloopsServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5ab08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113015460;
  func_0x000107c61428(param_1 + _DAT_113015460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a5ab14; end: 100a5ab57;  */

void FUN_100a5ab14(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a5ab58; end: 100a5ab63; -[SCSCBloopsServicesSaberEntryPoint cameoUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5ab58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113015468;
  func_0x000107c61428(param_1 + _DAT_113015468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a5ab64; end: 100a5abab; -[SCSCBloopsServicesSaberEntryPoint sCBloopsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5ab64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113015470;
  func_0x000107c61428(param_1 + _DAT_113015470,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a5abac; end: 100a5abcb;  */

void FUN_100a5abac(void)

{
  func_0x000107c61168(&PTR_PTR_112951560);
  return;
}



/* Entry: 100a5abcc; end: 100a5ac4b; -[SCSCCameraActivePathServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5abcc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113016638,0);
  func_0x000107c61614(param_1 + _DAT_113016640,0);
  *(undefined8 *)(param_1 + _DAT_113016648) = 0;
  *(undefined8 *)(param_1 + _DAT_113016650) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


