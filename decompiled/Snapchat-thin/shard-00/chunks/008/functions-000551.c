/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a8e3c4; end: 100a8e493;  */

undefined8 FUN_100a8e3c4(void)

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
  
  func_0x000107c61428(0x113049340,&uStack_40,0x20,0);
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
    FUN_1002092e8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a8e494; end: 100a8e513; -[SCValdiBlizzardLoggingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8e494(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112db2d10,0);
  func_0x000107c61614(param_1 + _DAT_112db2d18,0);
  *(undefined8 *)(param_1 + _DAT_112db2d20) = 0;
  *(undefined8 *)(param_1 + _DAT_112db2d28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a8e514; end: 100a8e5bf; -[SCValdiBlizzardLoggingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a8e514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a8e5c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a8e5c0; end: 100a8e7c3;  */

void FUN_100a8e5c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef104e730)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010efb18d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef104dda0)) {
          uVar2 = 0xd000000000000023;
          func_0x000107c605b8(0xd000000000000023,0x800000010efb2260,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "UserSessionScopeGraphBridge/SCValdiBlizzardLoggingServicesSaberEntryPoint.swift"
                                ,0x4f,2,0x6f,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100a8e7c4);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a470();
        goto LAB_100a8e64c;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3fc();
  }
LAB_100a8e64c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a8e7c4; end: 100a8e7cf; -[SCValdiBlizzardLoggingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8e7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2d10;
  func_0x000107c61428(param_1 + _DAT_112db2d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8e7d0; end: 100a8e823;  */

void FUN_100a8e7d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8e824; end: 100a8e82f; -[SCValdiBlizzardLoggingServicesSaberEntryPoint setUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8e824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2d18;
  func_0x000107c61428(param_1 + _DAT_112db2d18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8e830; end: 100a8e893; -[SCValdiBlizzardLoggingServicesSaberEntryPoint setValdiBlizzardLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8e830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2d20;
  func_0x000107c61428(param_1 + _DAT_112db2d20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a8e894; end: 100a8e8bb; -[SCValdiBlizzardLoggingServicesSaberEntryPoint begin] */

void FUN_100a8e894(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a8e8bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a8e8bc; end: 100a8ea3f;  */

/* WARNING: Possible PIC construction at 0x000100a8e9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a8e9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a8e9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a8e9c0) */
/* WARNING: Removing unreachable block (ram,0x000100a8e9d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8e8bc(void)

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
    func_0x000107c5da78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5dbb0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a8eae4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112db2620);
        *(undefined8 *)(lVar2 + _DAT_112db1770) = uVar6;
        *(long *)(lVar2 + _DAT_112db1778) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112db1778);
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



/* Entry: 100a8ea40; end: 100a8ea4b; -[SCValdiBlizzardLoggingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8ea40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2d10;
  func_0x000107c61428(param_1 + _DAT_112db2d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a8ea4c; end: 100a8ea8f;  */

void FUN_100a8ea4c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a8ea90; end: 100a8ea9b; -[SCValdiBlizzardLoggingServicesSaberEntryPoint userSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8ea90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2d18;
  func_0x000107c61428(param_1 + _DAT_112db2d18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a8ea9c; end: 100a8eae3; -[SCValdiBlizzardLoggingServicesSaberEntryPoint valdiBlizzardLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8ea9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2d20;
  func_0x000107c61428(param_1 + _DAT_112db2d20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8eae4; end: 100a8eb03;  */

void FUN_100a8eae4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e1728);
  return;
}



/* Entry: 100a8eb04; end: 100a8eb83; -[SCValdiCOFStoresServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8eb04(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112db2d58,0);
  func_0x000107c61614(param_1 + _DAT_112db2d60,0);
  *(undefined8 *)(param_1 + _DAT_112db2d68) = 0;
  *(undefined8 *)(param_1 + _DAT_112db2d70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a8eb84; end: 100a8ec2f; -[SCValdiCOFStoresServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a8eb84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a8ec30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a8ec30; end: 100a8ee33;  */

void FUN_100a8ec30(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000023;
    if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef104e730)) ||
       (func_0x000107c605b8(0xd000000000000023,0x800000010efb18d0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a3fc();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef104dd20)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010efb22e0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "UserSessionScopeGraphBridge/SCValdiCOFStoresServicesSaberEntryPoint.swift"
                              ,0x49,2,0x6f,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a8ee34);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a478();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a8ee34; end: 100a8ee3f; -[SCValdiCOFStoresServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8ee34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2d58;
  func_0x000107c61428(param_1 + _DAT_112db2d58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8ee40; end: 100a8ee93;  */

void FUN_100a8ee40(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8ee94; end: 100a8ee9f; -[SCValdiCOFStoresServicesSaberEntryPoint setUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8ee94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2d60;
  func_0x000107c61428(param_1 + _DAT_112db2d60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8eea0; end: 100a8ef03; -[SCValdiCOFStoresServicesSaberEntryPoint setValdiCOFStoresServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8eea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db2d68;
  func_0x000107c61428(param_1 + _DAT_112db2d68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a8ef04; end: 100a8ef2b; -[SCValdiCOFStoresServicesSaberEntryPoint begin] */

void FUN_100a8ef04(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a8ef2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a8ef2c; end: 100a8f0af;  */

/* WARNING: Possible PIC construction at 0x000100a8f02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a8f03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a8f058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a8f030) */
/* WARNING: Removing unreachable block (ram,0x000100a8f040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8ef2c(void)

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
    func_0x000107c5da78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5dbb8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a8f154();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112db2628);
        *(undefined8 *)(lVar2 + _DAT_112db17a8) = uVar6;
        *(long *)(lVar2 + _DAT_112db17b0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112db17b0);
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



/* Entry: 100a8f0b0; end: 100a8f0bb; -[SCValdiCOFStoresServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f0b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2d58;
  func_0x000107c61428(param_1 + _DAT_112db2d58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a8f0bc; end: 100a8f0ff;  */

void FUN_100a8f0bc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a8f100; end: 100a8f10b; -[SCValdiCOFStoresServicesSaberEntryPoint userSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f100(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2d60;
  func_0x000107c61428(param_1 + _DAT_112db2d60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a8f10c; end: 100a8f153; -[SCValdiCOFStoresServicesSaberEntryPoint valdiCOFStoresServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f10c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db2d68;
  func_0x000107c61428(param_1 + _DAT_112db2d68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8f154; end: 100a8f173;  */

void FUN_100a8f154(void)

{
  func_0x000107c61168(&PTR_PTR_1127e17f0);
  return;
}



/* Entry: 100a8f174; end: 100a8f1df; -[SCWschedUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f174(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113049658,0);
  *(undefined8 *)(param_1 + _DAT_113049660) = 0;
  *(undefined8 *)(param_1 + _DAT_113049668) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a8f1e0; end: 100a8f28b; -[SCWschedUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a8f1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a8f28c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a8f28c; end: 100a8f423;  */

void FUN_100a8f28c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e20910)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f1df6f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "WschedUserSessionScopeGraphBridge/SCWschedUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5a,2,0x2c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a8f424);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a7ec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a8f424; end: 100a8f47b; -[SCWschedUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f424(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113049658;
  func_0x000107c61428(param_1 + _DAT_113049658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8f47c; end: 100a8f4df; -[SCWschedUserSessionScopeGraphBridgeSaberEntryPoint setWschedUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113049660;
  func_0x000107c61428(param_1 + _DAT_113049660,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a8f4e0; end: 100a8f507; -[SCWschedUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a8f4e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a8f508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a8f508; end: 100a8f63b;  */

/* WARNING: Possible PIC construction at 0x000100a8f5c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a8f5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a8f5f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a8f5c4) */
/* WARNING: Removing unreachable block (ram,0x000100a8f5e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f508(void)

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
  func_0x000107c5e9dc();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a8f6cc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a8f6ec();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a8f63c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_1130494a8) = lVar5;
    *(long *)(lVar4 + _DAT_1130494b0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a8f63c; end: 100a8f683; -[SCWschedUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f63c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113049658;
  func_0x000107c61428(param_1 + _DAT_113049658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a8f684; end: 100a8f6cb; -[SCWschedUserSessionScopeGraphBridgeSaberEntryPoint wschedUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f684(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113049660;
  func_0x000107c61428(param_1 + _DAT_113049660,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8f6cc; end: 100a8f6eb;  */

void FUN_100a8f6cc(void)

{
  func_0x000107c61168(&PTR_PTR_11297f7e0);
  return;
}



/* Entry: 100a8f6ec; end: 100a8f7bb;  */

undefined8 FUN_100a8f6ec(void)

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
  
  func_0x000107c61428(0x1130495e8,&uStack_40,0x20,0);
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
    FUN_1001f59e8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a8f7bc; end: 100a8f83b; -[SCSCComposerJobSchedulerServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8f7bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113049698,0);
  func_0x000107c61614(param_1 + _DAT_1130496a0,0);
  *(undefined8 *)(param_1 + _DAT_1130496a8) = 0;
  *(undefined8 *)(param_1 + _DAT_1130496b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a8f83c; end: 100a8f8e7; -[SCSCComposerJobSchedulerServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a8f83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a8f8e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a8f8e8; end: 100a8faeb;  */

void FUN_100a8f8e8(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000029;
    if (((param_2 == -0x2fffffffffffffd7) && (param_3 == -0x7ffffffef0e20870)) ||
       (func_0x000107c605b8(0xd000000000000029,0x800000010f1df790,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a7e8();
    }
    else {
      if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e20840)) {
        uVar2 = 0xd000000000000025;
        func_0x000107c605b8(0xd000000000000025,0x800000010f1df7c0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "WschedUserSessionScopeGraphBridge/SCSCComposerJobSchedulerServicesSaberEntryPoint.swift"
                              ,0x57,2,0x30,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a8faec);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c581ac();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a8faec; end: 100a8faf7; -[SCSCComposerJobSchedulerServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8faec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113049698;
  func_0x000107c61428(param_1 + _DAT_113049698,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8faf8; end: 100a8fb4b;  */

void FUN_100a8faf8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8fb4c; end: 100a8fb57; -[SCSCComposerJobSchedulerServicesSaberEntryPoint setWschedUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8fb4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130496a0;
  func_0x000107c61428(param_1 + _DAT_1130496a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a8fb58; end: 100a8fbbb; -[SCSCComposerJobSchedulerServicesSaberEntryPoint setSCComposerJobSchedulerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8fb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130496a8;
  func_0x000107c61428(param_1 + _DAT_1130496a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a8fbbc; end: 100a8fbe3; -[SCSCComposerJobSchedulerServicesSaberEntryPoint begin] */

void FUN_100a8fbbc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a8fbe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a8fbe4; end: 100a8fd67;  */

/* WARNING: Possible PIC construction at 0x000100a8fce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a8fcf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a8fd10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a8fce8) */
/* WARNING: Removing unreachable block (ram,0x000100a8fcf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8fbe4(void)

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
    func_0x000107c5e9d8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50c04();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a8fe0c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_1130495f8);
        *(undefined8 *)(lVar2 + _DAT_1130494e0) = uVar6;
        *(long *)(lVar2 + _DAT_1130494e8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_1130494e8);
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



/* Entry: 100a8fd68; end: 100a8fd73; -[SCSCComposerJobSchedulerServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8fd68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113049698;
  func_0x000107c61428(param_1 + _DAT_113049698,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a8fd74; end: 100a8fdb7;  */

void FUN_100a8fd74(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a8fdb8; end: 100a8fdc3; -[SCSCComposerJobSchedulerServicesSaberEntryPoint wschedUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8fdb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130496a0;
  func_0x000107c61428(param_1 + _DAT_1130496a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a8fdc4; end: 100a8fe0b; -[SCSCComposerJobSchedulerServicesSaberEntryPoint sCComposerJobSchedulerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8fdc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130496a8;
  func_0x000107c61428(param_1 + _DAT_1130496a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a8fe0c; end: 100a8fe2b;  */

void FUN_100a8fe0c(void)

{
  func_0x000107c61168(&PTR_PTR_11297f8a8);
  return;
}



/* Entry: 100a8fe2c; end: 100a8fe77;  */

void FUN_100a8fe2c(long param_1)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  func_0x000100a41680();
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  FUN_100a8fe78();
  if (iVar1 == 0) {
    FUN_10012dbd0(auStack_38,&UNK_10f4f5600);
    func_0x000107c38da0();
    func_0x000107c38db0();
    func_0x000107c38da4();
  }
  return;
}



/* Entry: 100a8fe78; end: 100a8ff7b;  */

undefined8 FUN_100a8fe78(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [40];
  
  *(undefined4 *)(param_1[6] + 0xbc) = 0;
  plVar1 = param_1;
  FUN_1001e83a0();
  func_0x000107c60e5c();
  *(undefined4 *)plVar1 = 0;
  lVar2 = param_1[6];
  if ((*(long *)(lVar2 + 0x110) == 0) ||
     ((*(byte *)(*(long *)(lVar2 + 0x110) + 0x618) >> 3 & 1) != 0)) {
    if (*(int *)(lVar2 + 0xa8) != 2) {
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x18))(param_1,auStack_48);
      if ((int)plVar1 != 0) {
        do {
          plVar1 = param_1;
          FUN_10023688c(param_1,auStack_48);
          if ((int)plVar1 == 0) {
            lVar3 = param_1[6];
            *(undefined4 *)(lVar3 + 0xa8) = 2;
            func_0x000107c2b2ac();
            lVar2 = *(long *)(lVar3 + 0xb0);
            *(long **)(lVar3 + 0xb0) = plVar1;
            if (lVar2 != 0) {
              func_0x000107c2b2a8();
              return 0;
            }
            return 0;
          }
          (**(code **)(*param_1 + 0x20))(param_1);
          plVar1 = param_1;
          (**(code **)(*param_1 + 0x18))(param_1,auStack_48);
        } while (((ulong)plVar1 & 1) != 0);
      }
      return 1;
    }
    func_0x000107c2b2b0(*(undefined8 *)(lVar2 + 0xb0));
  }
  else {
    FUN_1004d2c58(0x10,0,0x42,&UNK_10f6d0a17,0x393);
  }
  return 0;
}



/* Entry: 100a8ff7c; end: 100a911c7;  */

undefined8 FUN_100a8ff7c(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_1009f07f0();
  uStack_28 = param_2;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),&uStack_28);
  func_0x0001001e7290(&uStack_28);
  return 1;
}



/* Entry: 100a911c8; end: 100a91233; -[SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a911c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbb720,0);
  *(undefined8 *)(param_1 + _DAT_112fbb728) = 0;
  *(undefined8 *)(param_1 + _DAT_112fbb730) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a91234; end: 100a912df; -[SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a91234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a912e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a912e0; end: 100a91477;  */

void FUN_100a912e0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcb) || (param_3 != -0x7ffffffef0e81150)) {
      uVar2 = 0xd000000000000035;
      func_0x000107c605b8(0xd000000000000035,0x800000010f17eeb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActivActiveUserSessionScopeGraphBridge/SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,100,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a91478);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c521a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a91478; end: 100a914cf; -[SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a91478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb720;
  func_0x000107c61428(param_1 + _DAT_112fbb720,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a914d0; end: 100a91533; -[SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint setActivActiveUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a914d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb728;
  func_0x000107c61428(param_1 + _DAT_112fbb728,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a91534; end: 100a9155b; -[SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a91534(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a9155c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a9155c; end: 100a9168f;  */

/* WARNING: Possible PIC construction at 0x000100a91614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a91630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a9164c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a91618) */
/* WARNING: Removing unreachable block (ram,0x000100a91634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a9155c(void)

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
  func_0x000107c3d01c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a91720();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a91740();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a91690);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112fbb2e8) = lVar5;
    *(long *)(lVar4 + _DAT_112fbb2f0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a91690; end: 100a916d7; -[SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a91690(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb720;
  func_0x000107c61428(param_1 + _DAT_112fbb720,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a916d8; end: 100a9171f; -[SCActivActiveUserSessionScopeGraphBridgeSaberEntryPoint activActiveUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a916d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb728;
  func_0x000107c61428(param_1 + _DAT_112fbb728,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a91720; end: 100a9173f;  */

void FUN_100a91720(void)

{
  func_0x000107c61168(&PTR_PTR_1129096c0);
  return;
}



/* Entry: 100a91740; end: 100a9180f;  */

undefined8 FUN_100a91740(void)

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
  
  func_0x000107c61428(0x112fbb698,&uStack_40,0x20,0);
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
    FUN_1002b5b14();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a91810; end: 100a91a13;  */

void FUN_100a91810(void)

{
  return;
}



/* Entry: 100a91a14; end: 100a91cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a91a14(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112dfd690,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dfd698) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd6f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd700) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd708) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd710) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd718) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd720) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd730) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd738) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd740) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd748) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd750) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd758) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd760) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd768) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd770) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd778) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd780) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd788) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd790) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd798) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd7f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd800) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd808) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd810) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd818) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd820) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd828) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd830) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd838) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd840) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dfd848) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a91cfc; end: 100a91d1b; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_100a91cfc(void)

{
  FUN_100a91a14();
  return;
}



/* Entry: 100a91d1c; end: 100a91da7;  */

ulong * FUN_100a91d1c(ulong *param_1,ulong param_2,ulong *param_3)

{
  bool bVar1;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x10;
  
  if ((*param_1 == param_2) || (*(ulong *)(param_2 - 0x10) < *param_3)) {
    bVar1 = param_2 <= param_1[1];
    if ((param_1[1] == param_2) || (func_0x000107c38070(), !bVar1)) {
      func_0x0001009e6f20();
      func_0x0001009e7274();
      return extraout_x8_00;
    }
    if (extraout_x9 <= extraout_x10) {
      return extraout_x8;
    }
  }
  func_0x0001009e6e00();
  return param_1;
}



/* Entry: 100a91da8; end: 100a91e53; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a91da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a91e54(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a91e54; end: 100a9353f;  */

void FUN_100a91e54(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar3 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_100a91ee8;
  }
  if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef1006240)) {
    uVar3 = 0xd00000000000002b;
    func_0x000107c605b8(0xd00000000000002b,0x800000010eff9dc0,param_2,param_3,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef1006210)) ||
         (uVar4 = uVar3,
         func_0x000107c605b8(0xd000000000000020,0x800000010eff9df0,param_2,param_3,0),
         (uVar4 & 1) != 0)) {
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57fc0();
      }
      else {
        uVar4 = 0xd00000000000001f;
        if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef104eb00)) ||
           (func_0x000107c605b8(0xd00000000000001f,0x800000010efb1500,param_2,param_3,0),
           (uVar4 & 1) != 0)) {
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58044();
        }
        else {
          uVar4 = 0;
          if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef10061e0)) ||
             (uVar5 = uVar4,
             func_0x000107c605b8(0xd000000000000026,0x800000010eff9e20,param_2,param_3,0),
             (uVar5 & 1) != 0)) {
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5804c();
          }
          else {
            uVar5 = 0xd000000000000021;
            if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10061b0)) ||
               (func_0x000107c605b8(0xd000000000000021,0x800000010eff9e50,param_2,param_3,0),
               (uVar5 & 1) != 0)) {
              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5807c();
            }
            else {
              uVar5 = 0xd00000000000001d;
              if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef1006180)) ||
                 (uVar2 = uVar5,
                 func_0x000107c605b8(0xd00000000000001d,0x800000010eff9e80,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c58084();
              }
              else if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef1006160)) ||
                      (func_0x000107c605b8(0xd000000000000020,0x800000010eff9ea0,param_2,param_3,0),
                      (uVar3 & 1) != 0)) {
                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c58304();
              }
              else {
                uVar3 = 0xd000000000000019;
                if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef1006130)) ||
                   (func_0x000107c605b8(0xd000000000000019,0x800000010eff9ed0,param_2,param_3,0),
                   (uVar3 & 1) != 0)) {
                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c58390();
                }
                else {
                  uVar3 = 0;
                  if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef1006110)) ||
                     (func_0x000107c605b8(0xd00000000000001e,0x800000010eff9ef0,param_2,param_3,0),
                     (uVar3 & 1) != 0)) {
                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c583bc();
                  }
                  else {
                    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef10060f0)) {
                      uVar3 = 0;
                      func_0x000107c605b8(0xd000000000000028,0x800000010eff9f10,param_2,param_3,0);
                      if ((uVar3 & 1) == 0) {
                        if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef10060c0)) {
                          uVar3 = 0xd00000000000002b;
                          func_0x000107c605b8(0xd00000000000002b,0x800000010eff9f40,param_2,param_3,
                                              0);
                          if ((uVar3 & 1) == 0) {
                            uVar3 = 0xd000000000000031;
                            if (((param_2 == -0x2fffffffffffffcf) &&
                                (param_3 == -0x7ffffffef1006090)) ||
                               (func_0x000107c605b8(0xd000000000000031,0x800000010eff9f70,param_2,
                                                    param_3,0), (uVar3 & 1) != 0)) {
                              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c58640();
                            }
                            else if (((param_2 == -0x2fffffffffffffe3) &&
                                     (param_3 == -0x7ffffffef1006050)) ||
                                    (uVar3 = uVar5,
                                    func_0x000107c605b8(0xd00000000000001d,0x800000010eff9fb0,
                                                        param_2,param_3,0), (uVar3 & 1) != 0)) {
                              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c587a4();
                            }
                            else if (((param_2 == -0x2fffffffffffffe3) &&
                                     (param_3 == -0x7ffffffef1006030)) ||
                                    (func_0x000107c605b8(0xd00000000000001d,0x800000010eff9fd0,
                                                         param_2,param_3,0), (uVar5 & 1) != 0)) {
                              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c587c4();
                            }
                            else {
                              uVar3 = 0;
                              if (((param_2 == -0x2fffffffffffffde) &&
                                  (param_3 == -0x7ffffffef1006010)) ||
                                 (func_0x000107c605b8(0xd000000000000022,0x800000010eff9ff0,param_2,
                                                      param_3,0), (uVar3 & 1) != 0)) {
                                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c58848();
                              }
                              else {
                                uVar3 = 0xd00000000000001b;
                                if (((param_2 == -0x2fffffffffffffe5) &&
                                    (param_3 == -0x7ffffffef104ea40)) ||
                                   (func_0x000107c605b8(0xd00000000000001b,0x800000010efb15c0,
                                                        param_2,param_3,0), (uVar3 & 1) != 0)) {
                                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c58864();
                                }
                                else {
                                  uVar3 = 0;
                                  if (((param_2 == -0x2fffffffffffffea) &&
                                      (param_3 == -0x7ffffffef1009320)) ||
                                     (func_0x000107c605b8(0xd000000000000016,0x800000010eff6ce0,
                                                          param_2,param_3,0), (uVar3 & 1) != 0)) {
                                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c588c4();
                                  }
                                  else {
                                    if ((param_2 != -0x2fffffffffffffd8) ||
                                       (param_3 != -0x7ffffffef1005fe0)) {
                                      uVar3 = 0;
                                      func_0x000107c605b8(0xd000000000000028,0x800000010effa020,
                                                          param_2,param_3,0);
                                      if ((uVar3 & 1) == 0) {
                                        if ((param_2 != -0x2fffffffffffffd8) ||
                                           (param_3 != -0x7ffffffef1005fb0)) {
                                          uVar3 = 0;
                                          func_0x000107c605b8(0xd000000000000028,0x800000010effa050,
                                                              param_2,param_3,0);
                                          if ((uVar3 & 1) == 0) {
                                            uVar3 = 0xd000000000000025;
                                            if (((param_2 == -0x2fffffffffffffdb) &&
                                                (param_3 == -0x7ffffffef1005f80)) ||
                                               (uVar5 = uVar3,
                                               func_0x000107c605b8(0xd000000000000025,
                                                                   0x800000010effa080,param_2,
                                                                   param_3,0), (uVar5 & 1) != 0)) {
                                              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                              ;
                                              func_0x000107c605b0();
                                              func_0x000107c58900();
                                            }
                                            else if (((param_2 == -0x2fffffffffffffda) &&
                                                     (param_3 == -0x7ffffffef1005f50)) ||
                                                    (uVar5 = uVar4,
                                                    func_0x000107c605b8(0xd000000000000026,
                                                                        0x800000010effa0b0,param_2,
                                                                        param_3,0), (uVar5 & 1) != 0
                                                    )) {
                                              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                              ;
                                              func_0x000107c605b0();
                                              func_0x000107c5890c();
                                            }
                                            else {
                                              uVar5 = 0xd000000000000033;
                                              if (((param_2 == -0x2fffffffffffffcd) &&
                                                  (param_3 == -0x7ffffffef1005f20)) ||
                                                 (func_0x000107c605b8(0xd000000000000033,
                                                                      0x800000010effa0e0,param_2,
                                                                      param_3,0), (uVar5 & 1) != 0))
                                              {
                                                FUN_1006732c8(param_1,*(undefined8 *)
                                                                       (param_1 + 0x18));
                                                func_0x000107c605b0();
                                                func_0x000107c589b8();
                                              }
                                              else {
                                                if ((param_2 != -0x2fffffffffffffd1) ||
                                                   (param_3 != -0x7ffffffef1005ee0)) {
                                                  uVar5 = 0xd00000000000002f;
                                                  func_0x000107c605b8(0xd00000000000002f,
                                                                      0x800000010effa120,param_2,
                                                                      param_3,0);
                                                  if ((uVar5 & 1) == 0) {
                                                    if ((param_2 != -0x2fffffffffffffca) ||
                                                       (param_3 != -0x7ffffffef1005eb0)) {
                                                      uVar5 = 0;
                                                      func_0x000107c605b8(0xd000000000000036,
                                                                          0x800000010effa150,param_2
                                                                          ,param_3,0);
                                                      if ((uVar5 & 1) == 0) {
                                                        if ((param_2 != -0x2fffffffffffffcf) ||
                                                           (param_3 != -0x7ffffffef1005e70)) {
                                                          uVar5 = 0xd000000000000031;
                                                          func_0x000107c605b8(0xd000000000000031,
                                                                              0x800000010effa190,
                                                                              param_2,param_3,0);
                                                          if ((uVar5 & 1) == 0) {
                                                            if ((param_2 != -0x2fffffffffffffca) ||
                                                               (param_3 != -0x7ffffffef1005e30)) {
                                                              uVar5 = 0;
                                                              func_0x000107c605b8(0xd000000000000036
                                                                                  ,
                                                  0x800000010effa1d0,param_2,param_3,0);
                                                  if ((uVar5 & 1) == 0) {
                                                    if ((param_2 != -0x2fffffffffffffc4) ||
                                                       (param_3 != -0x7ffffffef1005df0)) {
                                                      uVar5 = 0;
                                                      func_0x000107c605b8(0xd00000000000003c,
                                                                          0x800000010effa210,param_2
                                                                          ,param_3,0);
                                                      if ((uVar5 & 1) == 0) {
                                                        if ((param_2 != -0x2fffffffffffffc4) ||
                                                           (param_3 != -0x7ffffffef1005db0)) {
                                                          uVar5 = 0;
                                                          func_0x000107c605b8(0xd00000000000003c,
                                                                              0x800000010effa250,
                                                                              param_2,param_3,0);
                                                          if ((uVar5 & 1) == 0) {
                                                            uVar5 = 0;
                                                            if (((param_2 == -0x2fffffffffffffd4) &&
                                                                (param_3 == -0x7ffffffef1005d70)) ||
                                                               (func_0x000107c605b8(
                                                  0xd00000000000002c,0x800000010effa290,param_2,
                                                  param_3,0), (uVar5 & 1) != 0)) {
                                                    FUN_1006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                                    func_0x000107c605b0();
                                                    func_0x000107c589d4();
                                                  }
                                                  else {
                                                    uVar5 = 0;
                                                    if (((param_2 == -0x2fffffffffffffbe) &&
                                                        (param_3 == -0x7ffffffef1005d40)) ||
                                                       (func_0x000107c605b8(0xd000000000000042,
                                                                            0x800000010effa2c0,
                                                                            param_2,param_3,0),
                                                       (uVar5 & 1) != 0)) {
                                                      FUN_1006732c8(param_1,*(undefined8 *)
                                                                             (param_1 + 0x18));
                                                      func_0x000107c605b0();
                                                      func_0x000107c589d8();
                                                    }
                                                    else {
                                                      if ((param_2 != -0x2fffffffffffffcd) ||
                                                         (param_3 != -0x7ffffffef1005cf0)) {
                                                        uVar5 = 0xd000000000000033;
                                                        func_0x000107c605b8(0xd000000000000033,
                                                                            0x800000010effa310,
                                                                            param_2,param_3,0);
                                                        if ((uVar5 & 1) == 0) {
                                                          if ((param_2 != -0x2fffffffffffffca) ||
                                                             (param_3 != -0x7ffffffef1005cb0)) {
                                                            uVar5 = 0;
                                                            func_0x000107c605b8(0xd000000000000036,
                                                                                0x800000010effa350,
                                                                                param_2,param_3,0);
                                                            if ((uVar5 & 1) == 0) {
                                                              uVar5 = 0;
                                                              if (((param_2 == -0x2fffffffffffffc8)
                                                                  && (param_3 == -0x7ffffffef1005c70
                                                                     )) || (func_0x000107c605b8(
                                                  0xd000000000000038,0x800000010effa390,param_2,
                                                  param_3,0), (uVar5 & 1) != 0)) {
                                                    FUN_1006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                                    func_0x000107c605b0();
                                                    func_0x000107c589e4();
                                                    goto LAB_100a91ee8;
                                                  }
                                                  if ((param_2 != -0x2fffffffffffffd0) ||
                                                     (param_3 != -0x7ffffffef1005c30)) {
                                                    uVar5 = 0;
                                                    func_0x000107c605b8(0xd000000000000030,
                                                                        0x800000010effa3d0,param_2,
                                                                        param_3,0);
                                                    if ((uVar5 & 1) == 0) {
                                                      if ((param_2 != -0x2fffffffffffffd1) ||
                                                         (param_3 != -0x7ffffffef1005bf0)) {
                                                        uVar5 = 0xd00000000000002f;
                                                        func_0x000107c605b8(0xd00000000000002f,
                                                                            0x800000010effa410,
                                                                            param_2,param_3,0);
                                                        if ((uVar5 & 1) == 0) {
                                                          if ((param_2 != -0x2fffffffffffffd5) ||
                                                             (param_3 != -0x7ffffffef1005bc0)) {
                                                            uVar5 = 0xd00000000000002b;
                                                            func_0x000107c605b8(0xd00000000000002b,
                                                                                0x800000010effa440,
                                                                                param_2,param_3,0);
                                                            if ((uVar5 & 1) == 0) {
                                                              if ((param_2 != -0x2fffffffffffffe8)
                                                                 || (param_3 != -0x7ffffffef1005b90)
                                                                 ) {
                                                                uVar5 = 0;
                                                                func_0x000107c605b8(
                                                  0xd000000000000018,0x800000010effa470,param_2,
                                                  param_3,0);
                                                  if ((uVar5 & 1) == 0) {
                                                    uVar5 = 0;
                                                    if (((param_2 == -0x2fffffffffffffe4) &&
                                                        (param_3 == -0x7ffffffef1005b70)) ||
                                                       (uVar2 = uVar5,
                                                       func_0x000107c605b8(0xd00000000000001c,
                                                                           0x800000010effa490,
                                                                           param_2,param_3,0),
                                                       (uVar2 & 1) != 0)) {
                                                      FUN_1006732c8(param_1,*(undefined8 *)
                                                                             (param_1 + 0x18));
                                                      func_0x000107c605b0();
                                                      func_0x000107c58af0();
                                                      goto LAB_100a91ee8;
                                                    }
                                                    if ((param_2 != -0x2fffffffffffffe8) ||
                                                       (param_3 != -0x7ffffffef104a5f0)) {
                                                      uVar2 = 0;
                                                      func_0x000107c605b8(0xd000000000000018,
                                                                          0x800000010efb5a10,param_2
                                                                          ,param_3,0);
                                                      if ((uVar2 & 1) == 0) {
                                                        if (((param_2 == -0x2fffffffffffffe4) &&
                                                            (param_3 == -0x7ffffffef1005b50)) ||
                                                           (func_0x000107c605b8(0xd00000000000001c,
                                                                                0x800000010effa4b0,
                                                                                param_2,param_3,0),
                                                           (uVar5 & 1) != 0)) {
                                                          FUN_1006732c8(param_1,*(undefined8 *)
                                                                                 (param_1 + 0x18));
                                                          func_0x000107c605b0();
                                                          func_0x000107c592c8();
                                                        }
                                                        else if (((param_2 == -0x2fffffffffffffdb)
                                                                 && (param_3 == -0x7ffffffef1005b30)
                                                                 ) || (func_0x000107c605b8(
                                                  0xd000000000000025,0x800000010effa4d0,param_2,
                                                  param_3,0), (uVar3 & 1) != 0)) {
                                                    FUN_1006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                                    func_0x000107c605b0();
                                                    func_0x000107c59960();
                                                  }
                                                  else {
                                                    uVar3 = 0xd000000000000017;
                                                    if (((param_2 == -0x2fffffffffffffe9) &&
                                                        (param_3 == -0x7ffffffef10ed990)) ||
                                                       (func_0x000107c605b8(0xd000000000000017,
                                                                            0x800000010ef12670,
                                                                            param_2,param_3,0),
                                                       (uVar3 & 1) != 0)) {
                                                      FUN_1006732c8(param_1,*(undefined8 *)
                                                                             (param_1 + 0x18));
                                                      func_0x000107c605b0();
                                                      func_0x000107c5a68c();
                                                    }
                                                    else {
                                                      if ((param_2 != -0x2fffffffffffffcf) ||
                                                         (param_3 != -0x7ffffffef1005b00)) {
                                                        uVar3 = 0xd000000000000031;
                                                        func_0x000107c605b8(0xd000000000000031,
                                                                            0x800000010effa500,
                                                                            param_2,param_3,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          uVar3 = 0xd000000000000035;
                                                          if (((param_2 == -0x2fffffffffffffcb) &&
                                                              (param_3 == -0x7ffffffef1005ac0)) ||
                                                             (func_0x000107c605b8(0xd000000000000035
                                                                                  ,
                                                  0x800000010effa540,param_2,param_3,0),
                                                  (uVar3 & 1) != 0)) {
                                                    FUN_1006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                                    func_0x000107c605b0();
                                                    func_0x000107c565d8();
                                                  }
                                                  else {
                                                    uVar3 = 0xd00000000000003b;
                                                    if (((param_2 == -0x2fffffffffffffc5) &&
                                                        (param_3 == -0x7ffffffef1005a80)) ||
                                                       (func_0x000107c605b8(0xd00000000000003b,
                                                                            0x800000010effa580,
                                                                            param_2,param_3,0),
                                                       (uVar3 & 1) != 0)) {
                                                      FUN_1006732c8(param_1,*(undefined8 *)
                                                                             (param_1 + 0x18));
                                                      func_0x000107c605b0();
                                                      func_0x000107c581a0();
                                                    }
                                                    else {
                                                      if ((param_2 != -0x2fffffffffffffc5) ||
                                                         (param_3 != -0x7ffffffef1005a40)) {
                                                        uVar3 = 0xd00000000000003b;
                                                        func_0x000107c605b8(0xd00000000000003b,
                                                                            0x800000010effa5c0,
                                                                            param_2,param_3,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          if ((param_2 != -0x2fffffffffffffd8) ||
                                                             (param_3 != -0x7ffffffef1005a00)) {
                                                            uVar3 = 0;
                                                            func_0x000107c605b8(0xd000000000000028,
                                                                                0x800000010effa600,
                                                                                param_2,param_3,0);
                                                            if ((uVar3 & 1) == 0) {
                                                              uVar3 = 0xd000000000000039;
                                                              if (((param_2 == -0x2fffffffffffffc7)
                                                                  && (param_3 == -0x7ffffffef10059d0
                                                                     )) || (func_0x000107c605b8(
                                                  0xd000000000000039,0x800000010effa630,param_2,
                                                  param_3,0), (uVar3 & 1) != 0)) {
                                                    FUN_1006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                                    func_0x000107c605b0();
                                                    func_0x000107c585d0();
                                                  }
                                                  else {
                                                    uVar3 = 0xd000000000000037;
                                                    if (((param_2 == -0x2fffffffffffffc9) &&
                                                        (param_3 == -0x7ffffffef1005990)) ||
                                                       (func_0x000107c605b8(0xd000000000000037,
                                                                            0x800000010effa670,
                                                                            param_2,param_3,0),
                                                       (uVar3 & 1) != 0)) {
                                                      FUN_1006732c8(param_1,*(undefined8 *)
                                                                             (param_1 + 0x18));
                                                      func_0x000107c605b0();
                                                      func_0x000107c58634();
                                                    }
                                                    else {
                                                      if ((param_2 != -0x2fffffffffffffd8) ||
                                                         (param_3 != -0x7ffffffef1005950)) {
                                                        uVar3 = 0;
                                                        func_0x000107c605b8(0xd000000000000028,
                                                                            0x800000010effa6b0,
                                                                            param_2,param_3,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          uVar3 = 0;
                                                          if (((param_2 == -0x2fffffffffffffd2) &&
                                                              (param_3 == -0x7ffffffef1005920)) ||
                                                             (func_0x000107c605b8(0xd00000000000002e
                                                                                  ,
                                                  0x800000010effa6e0,param_2,param_3,0),
                                                  (uVar3 & 1) != 0)) {
                                                    FUN_1006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                                    func_0x000107c605b0();
                                                    func_0x000107c586d0();
                                                  }
                                                  else {
                                                    if ((param_2 != -0x2fffffffffffffd5) ||
                                                       (param_3 != -0x7ffffffef10058f0)) {
                                                      uVar3 = 0xd00000000000002b;
                                                      func_0x000107c605b8(0xd00000000000002b,
                                                                          0x800000010effa710,param_2
                                                                          ,param_3,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        if (((param_2 == -0x2fffffffffffffda) &&
                                                            (param_3 == -0x7ffffffef10058c0)) ||
                                                           (func_0x000107c605b8(0xd000000000000026,
                                                                                0x800000010effa740,
                                                                                param_2,param_3,0),
                                                           (uVar4 & 1) != 0)) {
                                                          FUN_1006732c8(param_1,*(undefined8 *)
                                                                                 (param_1 + 0x18));
                                                          func_0x000107c605b0();
                                                          func_0x000107c5a6a0();
                                                        }
                                                        else {
                                                          if ((param_2 != -0x2fffffffffffffd0) ||
                                                             (param_3 != -0x7ffffffef1005890)) {
                                                            uVar3 = 0;
                                                            func_0x000107c605b8(0xd000000000000030,
                                                                                0x800000010effa770,
                                                                                param_2,param_3,0);
                                                            if ((uVar3 & 1) == 0) {
                                                              func_0x000107c602fc(0x15);
                                                              func_0x000107c6142c(0xe000000000000000
                                                                                 );
                                                              func_0x000107c5fb78(param_2,param_3);
                                                              func_0x000107c60450("Fatal error",0xb,
                                                                                  2,
                                                  0xd000000000000013,0x800000010ef0fc20,
                                                  "ActiveUserSessionScopeGraphBridge/SCActiveUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                                                  ,0x5a,2,0x165,0);
                    /* WARNING: Does not return */
                                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a93540)
                                                  ;
                                                  (*pcVar1)();
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c52230();
                                                  }
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c5871c();
                                                  }
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c586b8();
                                                  }
                                                  }
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c582b8();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c581a4();
                                                  }
                                                  }
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c5a698();
                                                  }
                                                  }
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c58b24();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c58a60();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589f0();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589ec();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589e8();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589e0();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589dc();
                                                  }
                                                  }
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589d0();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589cc();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589c8();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589c4();
                                                  goto LAB_100a91ee8;
                                                  }
                                                  }
                                                  FUN_1006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c589c0();
                                                  goto LAB_100a91ee8;
                                                  }
                                                }
                                                FUN_1006732c8(param_1,*(undefined8 *)
                                                                       (param_1 + 0x18));
                                                func_0x000107c605b0();
                                                func_0x000107c589bc();
                                              }
                                            }
                                            goto LAB_100a91ee8;
                                          }
                                        }
                                        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                        func_0x000107c605b0();
                                        func_0x000107c588fc();
                                        goto LAB_100a91ee8;
                                      }
                                    }
                                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c588e4();
                                  }
                                }
                              }
                            }
                            goto LAB_100a91ee8;
                          }
                        }
                        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c585d4();
                        goto LAB_100a91ee8;
                      }
                    }
                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c584cc();
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_100a91ee8;
    }
  }
  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5650c();
LAB_100a91ee8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a93540; end: 100a93597; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a93540(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd690;
  func_0x000107c61428(param_1 + _DAT_112dfd690,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a93598; end: 100a942db;  */

void FUN_100a93598(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_1 + 0x370) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x370) = 1;
    func_0x000100a3be2c();
    func_0x000100a93734();
    func_0x000100a3bfe4();
    for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -8) {
      func_0x0001009e60e4();
      (**(code **)(extraout_x8 + 0x38))();
    }
    func_0x000100a3c000(auStack_48);
    if ((*(byte *)(unaff_x19 + 0x488) & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x480) = 0;
      *(undefined8 *)(unaff_x19 + 0x1e0) = 0;
      *(undefined8 *)(unaff_x19 + 0x200) = 0xffffffffffffffff;
    }
    return;
  }
  return;
}



/* Entry: 100a942dc; end: 100a942e7; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setActiveUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a942dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd840;
  func_0x000107c61428(param_1 + _DAT_112dfd840,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a942e8; end: 100a94347;  */

void FUN_100a942e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100a94348; end: 100a94353; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setMemoriesAlbumFetchCacheServicesScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94348(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd698;
  func_0x000107c61428(param_1 + _DAT_112dfd698,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94354; end: 100a9435f; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCAddFriendsTakeOverScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6a0;
  func_0x000107c61428(param_1 + _DAT_112dfd6a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94360; end: 100a9436b; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCBitmojiCreateFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6a8;
  func_0x000107c61428(param_1 + _DAT_112dfd6a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a9436c; end: 100a94377; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCBitmojiEditAvatarBuilderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a9436c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6b0;
  func_0x000107c61428(param_1 + _DAT_112dfd6b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94378; end: 100a94383; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCBitmojiSelfiePickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94378(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6b8;
  func_0x000107c61428(param_1 + _DAT_112dfd6b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94384; end: 100a9438f; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCBitmojiSettingsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94384(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6c0;
  func_0x000107c61428(param_1 + _DAT_112dfd6c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94390; end: 100a9439b; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCExternalShareSheetScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94390(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6c8;
  func_0x000107c61428(param_1 + _DAT_112dfd6c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a9439c; end: 100a943a7; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCGroupAvatarScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a9439c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6d0;
  func_0x000107c61428(param_1 + _DAT_112dfd6d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a943a8; end: 100a943b3; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCLeaveCustomStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a943a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6d8;
  func_0x000107c61428(param_1 + _DAT_112dfd6d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a943b4; end: 100a943bf; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCLensProcessingSnapRendererScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a943b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6e0;
  func_0x000107c61428(param_1 + _DAT_112dfd6e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a943c0; end: 100a943cb; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCMemoriesCameraRollAlbumPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a943c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6e8;
  func_0x000107c61428(param_1 + _DAT_112dfd6e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a943cc; end: 100a943d7; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCMemoriesTrackingImageProcessCommandScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a943cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6f0;
  func_0x000107c61428(param_1 + _DAT_112dfd6f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a943d8; end: 100a943e3; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCProgressOverlayScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a943d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd6f8;
  func_0x000107c61428(param_1 + _DAT_112dfd6f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a943e4; end: 100a943ef; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCRecipientPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a943e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd700;
  func_0x000107c61428(param_1 + _DAT_112dfd700,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a943f0; end: 100a943fb; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCSendToRankingPreloadScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a943f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd708;
  func_0x000107c61428(param_1 + _DAT_112dfd708,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a943fc; end: 100a94407; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCShakeToReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a943fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd710;
  func_0x000107c61428(param_1 + _DAT_112dfd710,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94408; end: 100a94413; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCSnapcodeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd718;
  func_0x000107c61428(param_1 + _DAT_112dfd718,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94414; end: 100a9441f; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCSpectaclesClientControllerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd720;
  func_0x000107c61428(param_1 + _DAT_112dfd720,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94420; end: 100a9442b; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCSpectaclesDeviceConnectionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd728;
  func_0x000107c61428(param_1 + _DAT_112dfd728,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a9442c; end: 100a94437; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCSpectaclesDeviceFeatureScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a9442c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd730;
  func_0x000107c61428(param_1 + _DAT_112dfd730,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94438; end: 100a94443; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCSpectaclesDeviceSettingsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd738;
  func_0x000107c61428(param_1 + _DAT_112dfd738,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a94444; end: 100a9444f; -[SCActiveUserSessionScopeGraphBridgeSaberEntryPoint setSCStartupCompleteCameraLockScreenWidgetScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a94444(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfd740;
  func_0x000107c61428(param_1 + _DAT_112dfd740,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}


