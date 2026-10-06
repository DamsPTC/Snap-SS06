/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a1b3d8; end: 100a1b453; -[SCLockfreeLazy initWithInitializationBlock:] */

undefined1 * FUN_100a1b3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127057a0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a1b454; end: 100a1b503; -[SCLockfreeLazy map:] */

void FUN_100a1b454(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126df850;
    func_0x000107c610f4(PTR_PTR_1126df850);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_100b45bd8;
    puStack_48 = &UNK_110cb7910;
    func_0x000107c61174(param_3);
    uStack_40 = param_1;
    lStack_38 = param_3;
    func_0x000107c46ea4(puVar1,param_2,&puStack_60);
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a1b504; end: 100a1b5cf; -[SCServicesContainer exposeLazyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1b504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4db94(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278ca54);
  *(undefined8 *)(param_1 + _DAT_11278ca54) = param_3;
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100a1b5d0; end: 100a1b687; -[SCLockfreeLazy onCreated:] */

/* WARNING: Possible PIC construction at 0x000100a1b63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1b668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1b640) */
/* WARNING: Removing unreachable block (ram,0x000100a1b66c) */

void FUN_100a1b5d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      puVar1 = *(undefined **)(param_1 + 0x10);
      if (puVar1 == (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c61160();
      }
      else {
        func_0x000107c61174(puVar1);
      }
      param_3 = *(long *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar1;
    }
    else {
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 8));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100a1b688; end: 100a1b6f3; -[SCAppinsSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1b688(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130531f0,0);
  *(undefined8 *)(param_1 + _DAT_1130531f8) = 0;
  *(undefined8 *)(param_1 + _DAT_113053200) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a1b6f4; end: 100a1b79f; -[SCAppinsSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a1b6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a1b7a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a1b7a0; end: 100a1b937;  */

void FUN_100a1b7a0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e1aee0)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f1e5120,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AppinsSystemScopeGraphBridge/SCAppinsSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x50,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1b938);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52820();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a1b938; end: 100a1b98f; -[SCAppinsSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1b938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130531f0;
  func_0x000107c61428(param_1 + _DAT_1130531f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a1b990; end: 100a1b9f3; -[SCAppinsSystemScopeGraphBridgeSaberEntryPoint setAppinsSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1b990(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130531f8;
  func_0x000107c61428(param_1 + _DAT_1130531f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a1b9f4; end: 100a1ba1b; -[SCAppinsSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a1b9f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a1ba1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1ba1c; end: 100a1bb4f;  */

/* WARNING: Possible PIC construction at 0x000100a1bad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1baf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1bb0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1bad8) */
/* WARNING: Removing unreachable block (ram,0x000100a1baf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ba1c(void)

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
  func_0x000107c3df2c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a1bbe0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a1bc00();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1bb50);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113052a98) = lVar5;
    *(long *)(lVar4 + _DAT_113052aa0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a1bb50; end: 100a1bb97; -[SCAppinsSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1bb50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130531f0;
  func_0x000107c61428(param_1 + _DAT_1130531f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a1bb98; end: 100a1bbdf; -[SCAppinsSystemScopeGraphBridgeSaberEntryPoint appinsSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1bb98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130531f8;
  func_0x000107c61428(param_1 + _DAT_1130531f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a1bbe0; end: 100a1bbff;  */

void FUN_100a1bbe0(void)

{
  func_0x000107c61168(&PTR_PTR_112983118);
  return;
}



/* Entry: 100a1bc00; end: 100a1bccf;  */

undefined8 FUN_100a1bc00(void)

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
  
  func_0x000107c61428(0x113053150,&uStack_40,0x20,0);
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
    FUN_1000a0c04();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a1bcd0; end: 100a1bcd7; -[SCScopeLifecycleContext delayedEntryPointsHandler] */

undefined8 FUN_100a1bcd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100a1bcd8; end: 100a1bcdf; +[SCApplicationShortcutItemsEntryPoint context] */

undefined8 FUN_100a1bcd8(void)

{
  return 1;
}



/* Entry: 100a1bce0; end: 100a1bd47; -[SCDelayedEntryPointHandler shouldDelay:context:] */

long FUN_100a1bce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x000107c5bcb8();
  if (lVar1 == 0) {
    func_0x000107c3c72c(param_1,param_2,param_3,param_4);
  }
  else {
    param_1 = 0;
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100a1bd48; end: 100a1bd4f; -[SCDelayedEntryPointHandlerContext startupType] */

undefined8 FUN_100a1bd48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100a1bd50; end: 100a1bdc3; -[SCDelayedEntryPointHandler _shouldDelayForColdStartup:context:] */

uint FUN_100a1bd50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  func_0x000107c61174(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x000107c43840();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c5abd8(uVar2,param_2,param_3);
    if ((int)uVar2 != 0) {
      func_0x000107c3bacc(param_1,param_2,param_4);
      uVar3 = (uint)param_1 ^ 1;
      goto LAB_100a1bda8;
    }
  }
  uVar3 = 0;
LAB_100a1bda8:
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100a1bdc4; end: 100a1bdcb; -[SCDelayedEntryPointHandlerContext foregroundLaunch] */

undefined1 FUN_100a1bdc4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100a1bdcc; end: 100a1bdd3; -[SCDelayedEntryPointConfigProvider shouldEnableDelayEntryPoint:] */

undefined8 FUN_100a1bdcc(void)

{
  return 1;
}



/* Entry: 100a1bdd4; end: 100a1beeb; -[SCDelayedEntryPointHandler _isContextForTargetScreen:] */

bool FUN_100a1bdd4(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3 == 1) {
    return false;
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x000107c43b28();
  if ((uVar2 & 1) == 0) {
    if (param_3 == 3) {
      return true;
    }
    return param_3 == 6;
  }
  if (param_3 == 2) {
    return true;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x000107c5c74c();
  if (lVar3 < 0xb) {
    if (lVar3 < 7) {
      if (lVar3 - 2U < 3) {
        return param_3 == 9 || param_3 == 7;
      }
      return lVar3 != 1 || (param_3 == 3 || param_3 == 6);
    }
    if ((lVar3 != 7) && (lVar3 != 9)) {
      return true;
    }
LAB_100a1bed4:
    bVar1 = param_3 == 4;
  }
  else {
    if (lVar3 < 0xe) {
      if (lVar3 != 0xb) {
        return lVar3 != 0xd || (param_3 & 0xfffffffffffffffd) == 8;
      }
    }
    else {
      if (lVar3 - 0xeU < 3) goto LAB_100a1bed4;
      if (lVar3 == 0x13) {
        return param_3 == 0xb;
      }
      if (lVar3 != 0x14) {
        return true;
      }
    }
    bVar1 = param_3 == 5;
  }
  return bVar1;
}



/* Entry: 100a1beec; end: 100a1bfb7; -[SCDelayedEntryPointHandler delayEntryPointName:context:callback:] */

/* WARNING: Possible PIC construction at 0x000100a1bf44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1bf84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1bf48) */
/* WARNING: Removing unreachable block (ram,0x000100a1bf88) */
/* WARNING: Removing unreachable block (ram,0x000100a1bfa0) */

void FUN_100a1beec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  if (cVar1 == '\x01') {
    func_0x000105266228();
    param_5 = param_3;
  }
  else {
    FUN_100a1bfb8(uVar2,param_3,1);
    func_0x000107c610f4(PTR_PTR_1126b6bc8);
    func_0x000107c467a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100a1bfb8; end: 100a1c12b;  */

char * FUN_100a1bfb8(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *unaff_x22;
  char *pcStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  func_0x000107c61174(param_2);
  plVar9 = (long *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110872228);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
      unaff_x22 = &uStack_80;
    }
  }
  pcVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  pcVar2 = pcVar1;
  func_0x000107c60bd8();
  ppcVar3 = &pcStack_c0;
  pcStack_88 = FUN_100a1c12c;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar9;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar5);
  func_0x000107c61174(param_5);
  puStack_b8 = PTR_PTR_1126e7330;
  pcStack_c0 = pcVar2;
  func_0x000107c61154(&pcStack_c0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    puVar4 = puVar5;
    func_0x000107c40794();
    uVar7 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(undefined1 **)((long)ppcVar3 + 0x10) = puVar4;
    func_0x000107c61170(uVar7);
    *(undefined1 **)((long)ppcVar3 + 0x18) = param_4;
    uVar7 = param_5;
    func_0x000107c61184();
    uVar8 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined8 *)((long)ppcVar3 + 8) = uVar7;
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar5);
  return (char *)ppcVar3;
}



/* Entry: 100a1c12c; end: 100a1c1df; -[SCDelayedEntryPointDelayContext initWithEntryPointName:context:callback:] */

undefined1 *
FUN_100a1c12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e7330;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a1c1e0; end: 100a1c24b; -[SCCameraSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1c1e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113054078,0);
  *(undefined8 *)(param_1 + _DAT_113054080) = 0;
  *(undefined8 *)(param_1 + _DAT_113054088) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a1c24c; end: 100a1c2f7; -[SCCameraSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a1c24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a1c2f8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a1c2f8; end: 100a1c48f;  */

void FUN_100a1c2f8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e1a600)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f1e5a00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraSystemScopeGraphBridge/SCCameraSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x50,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1c490);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c530cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a1c490; end: 100a1c4e7; -[SCCameraSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1c490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054078;
  func_0x000107c61428(param_1 + _DAT_113054078,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a1c4e8; end: 100a1c54b; -[SCCameraSystemScopeGraphBridgeSaberEntryPoint setCameraSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1c4e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054080;
  func_0x000107c61428(param_1 + _DAT_113054080,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a1c54c; end: 100a1c573; -[SCCameraSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a1c54c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a1c574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1c574; end: 100a1c6a7;  */

/* WARNING: Possible PIC construction at 0x000100a1c62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1c648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1c664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1c630) */
/* WARNING: Removing unreachable block (ram,0x000100a1c64c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1c574(void)

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
  func_0x000107c3f248();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a1c738();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a1c758();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1c6a8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_1130539b8) = lVar5;
    *(long *)(lVar4 + _DAT_1130539c0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a1c6a8; end: 100a1c6ef; -[SCCameraSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1c6a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054078;
  func_0x000107c61428(param_1 + _DAT_113054078,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a1c6f0; end: 100a1c737; -[SCCameraSystemScopeGraphBridgeSaberEntryPoint cameraSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1c6f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054080;
  func_0x000107c61428(param_1 + _DAT_113054080,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a1c738; end: 100a1c757;  */

void FUN_100a1c738(void)

{
  func_0x000107c61168(&PTR_PTR_112983b38);
  return;
}



/* Entry: 100a1c758; end: 100a1c827;  */

undefined8 FUN_100a1c758(void)

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
  
  func_0x000107c61428(0x113053fd8,&uStack_40,0x20,0);
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
    FUN_10009e958();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a1c828; end: 100a1c893; -[SCClientresSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1c828(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113054a58,0);
  *(undefined8 *)(param_1 + _DAT_113054a60) = 0;
  *(undefined8 *)(param_1 + _DAT_113054a68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a1c894; end: 100a1c93f; -[SCClientresSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a1c894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a1c940(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a1c940; end: 100a1cad7;  */

void FUN_100a1c940(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e19f40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f1e60c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ClientresSystemScopeGraphBridge/SCClientresSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1cad8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c534a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a1cad8; end: 100a1cb2f; -[SCClientresSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1cad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054a58;
  func_0x000107c61428(param_1 + _DAT_113054a58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a1cb30; end: 100a1cb93; -[SCClientresSystemScopeGraphBridgeSaberEntryPoint setClientresSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1cb30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113054a60;
  func_0x000107c61428(param_1 + _DAT_113054a60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a1cb94; end: 100a1cbbb; -[SCClientresSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a1cb94(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a1cbbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1cbbc; end: 100a1ccef;  */

/* WARNING: Possible PIC construction at 0x000100a1cc74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1cc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1ccac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1cc78) */
/* WARNING: Removing unreachable block (ram,0x000100a1cc94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1cbbc(void)

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
  func_0x000107c3fbf8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a1cd80();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a1cda0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1ccf0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_1130546b8) = lVar5;
    *(long *)(lVar4 + _DAT_1130546c0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a1ccf0; end: 100a1cd37; -[SCClientresSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ccf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054a58;
  func_0x000107c61428(param_1 + _DAT_113054a58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a1cd38; end: 100a1cd7f; -[SCClientresSystemScopeGraphBridgeSaberEntryPoint clientresSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1cd38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054a60;
  func_0x000107c61428(param_1 + _DAT_113054a60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a1cd80; end: 100a1cd9f;  */

void FUN_100a1cd80(void)

{
  func_0x000107c61168(&PTR_PTR_1129842d0);
  return;
}



/* Entry: 100a1cda0; end: 100a1ce6f;  */

undefined8 FUN_100a1cda0(void)

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
  
  func_0x000107c61428(0x1130549d0,&uStack_40,0x20,0);
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
    FUN_10009f970();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a1ce70; end: 100a1cedb; -[SCCmSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ce70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113055310,0);
  *(undefined8 *)(param_1 + _DAT_113055318) = 0;
  *(undefined8 *)(param_1 + _DAT_113055320) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a1cedc; end: 100a1cf87; -[SCCmSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a1cedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a1cf88(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a1cf88; end: 100a1d11f;  */

void FUN_100a1cf88(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e199f0)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1e6610,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CmSystemScopeGraphBridge/SCCmSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x48,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1d120);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c534f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a1d120; end: 100a1d177; -[SCCmSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113055310;
  func_0x000107c61428(param_1 + _DAT_113055310,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a1d178; end: 100a1d1db; -[SCCmSystemScopeGraphBridgeSaberEntryPoint setCmSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113055318;
  func_0x000107c61428(param_1 + _DAT_113055318,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a1d1dc; end: 100a1d203; -[SCCmSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a1d1dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a1d204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1d204; end: 100a1d337;  */

/* WARNING: Possible PIC construction at 0x000100a1d2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1d2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1d2f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1d2c0) */
/* WARNING: Removing unreachable block (ram,0x000100a1d2dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d204(void)

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
  func_0x000107c3fc84();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a1d3c8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a1d3e8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1d338);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113054d68) = lVar5;
    *(long *)(lVar4 + _DAT_113054d70) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a1d338; end: 100a1d37f; -[SCCmSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d338(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113055310;
  func_0x000107c61428(param_1 + _DAT_113055310,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a1d380; end: 100a1d3c7; -[SCCmSystemScopeGraphBridgeSaberEntryPoint cmSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d380(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113055318;
  func_0x000107c61428(param_1 + _DAT_113055318,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a1d3c8; end: 100a1d3e7;  */

void FUN_100a1d3c8(void)

{
  func_0x000107c61168(&PTR_PTR_112984948);
  return;
}



/* Entry: 100a1d3e8; end: 100a1d4b7;  */

undefined8 FUN_100a1d3e8(void)

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
  
  func_0x000107c61428(0x113055280,&uStack_40,0x20,0);
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
    FUN_10009cdf8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a1d4b8; end: 100a1d523; -[SCCntSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d4b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113055f68,0);
  *(undefined8 *)(param_1 + _DAT_113055f70) = 0;
  *(undefined8 *)(param_1 + _DAT_113055f78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a1d524; end: 100a1d5cf; -[SCCntSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a1d524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a1d5d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a1d5d0; end: 100a1d767;  */

void FUN_100a1d5d0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e19390)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1e6c70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CntSystemScopeGraphBridge/SCCntSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4a,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1d768);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53518();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a1d768; end: 100a1d7bf; -[SCCntSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d768(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113055f68;
  func_0x000107c61428(param_1 + _DAT_113055f68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a1d7c0; end: 100a1d823; -[SCCntSystemScopeGraphBridgeSaberEntryPoint setCntSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d7c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113055f70;
  func_0x000107c61428(param_1 + _DAT_113055f70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a1d824; end: 100a1d84b; -[SCCntSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a1d824(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a1d84c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1d84c; end: 100a1d97f;  */

/* WARNING: Possible PIC construction at 0x000100a1d904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1d920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1d93c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1d908) */
/* WARNING: Removing unreachable block (ram,0x000100a1d924) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d84c(void)

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
  func_0x000107c3fca4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a1da10();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a1da30();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1d980);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_1130557d0) = lVar5;
    *(long *)(lVar4 + _DAT_1130557d8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a1d980; end: 100a1d9c7; -[SCCntSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d980(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113055f68;
  func_0x000107c61428(param_1 + _DAT_113055f68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a1d9c8; end: 100a1da0f; -[SCCntSystemScopeGraphBridgeSaberEntryPoint cntSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1d9c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113055f70;
  func_0x000107c61428(param_1 + _DAT_113055f70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a1da10; end: 100a1da2f;  */

void FUN_100a1da10(void)

{
  func_0x000107c61168(&PTR_PTR_112984d70);
  return;
}



/* Entry: 100a1da30; end: 100a1daff;  */

undefined8 FUN_100a1da30(void)

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
  
  func_0x000107c61428(0x113055ec0,&uStack_40,0x20,0);
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
    FUN_10009ff18();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a1db00; end: 100a1db6b; -[SCCofSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1db00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113056e08,0);
  *(undefined8 *)(param_1 + _DAT_113056e10) = 0;
  *(undefined8 *)(param_1 + _DAT_113056e18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a1db6c; end: 100a1dc17; -[SCCofSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a1db6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a1dc18(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a1dc18; end: 100a1ddaf;  */

void FUN_100a1dc18(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e18b60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1e74a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CofSystemScopeGraphBridge/SCCofSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4a,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1ddb0);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53554();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a1ddb0; end: 100a1de07; -[SCCofSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ddb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056e08;
  func_0x000107c61428(param_1 + _DAT_113056e08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a1de08; end: 100a1de6b; -[SCCofSystemScopeGraphBridgeSaberEntryPoint setCofSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1de08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056e10;
  func_0x000107c61428(param_1 + _DAT_113056e10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a1de6c; end: 100a1de93; -[SCCofSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a1de6c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a1de94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1de94; end: 100a1dfc7;  */

/* WARNING: Possible PIC construction at 0x000100a1df4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1df68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1df84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1df50) */
/* WARNING: Removing unreachable block (ram,0x000100a1df6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1de94(void)

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
  func_0x000107c3fd2c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a1e058();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a1e078();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1dfc8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_1130565f0) = lVar5;
    *(long *)(lVar4 + _DAT_1130565f8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a1dfc8; end: 100a1e00f; -[SCCofSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1dfc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056e08;
  func_0x000107c61428(param_1 + _DAT_113056e08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a1e010; end: 100a1e057; -[SCCofSystemScopeGraphBridgeSaberEntryPoint cofSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1e010(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056e10;
  func_0x000107c61428(param_1 + _DAT_113056e10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a1e058; end: 100a1e077;  */

void FUN_100a1e058(void)

{
  func_0x000107c61168(&PTR_PTR_1129853d8);
  return;
}



/* Entry: 100a1e078; end: 100a1e147;  */

undefined8 FUN_100a1e078(void)

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
  
  func_0x000107c61428(0x113056d50,&uStack_40,0x20,0);
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
    FUN_10009a718();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a1e148; end: 100a1e1b3; -[SCComposerSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1e148(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113057840,0);
  *(undefined8 *)(param_1 + _DAT_113057848) = 0;
  *(undefined8 *)(param_1 + _DAT_113057850) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a1e1b4; end: 100a1e25f; -[SCComposerSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a1e1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a1e260(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a1e260; end: 100a1e3f7;  */

void FUN_100a1e260(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e18490)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1e7b70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ComposerSystemScopeGraphBridge/SCComposerSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x54,2,0x2d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1e3f8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a1e3f8; end: 100a1e44f; -[SCComposerSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1e3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113057840;
  func_0x000107c61428(param_1 + _DAT_113057840,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a1e450; end: 100a1e4b3; -[SCComposerSystemScopeGraphBridgeSaberEntryPoint setComposerSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1e450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113057848;
  func_0x000107c61428(param_1 + _DAT_113057848,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a1e4b4; end: 100a1e4db; -[SCComposerSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a1e4b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a1e4dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1e4dc; end: 100a1e60f;  */

/* WARNING: Possible PIC construction at 0x000100a1e594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1e5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1e5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1e598) */
/* WARNING: Removing unreachable block (ram,0x000100a1e5b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1e4dc(void)

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
  func_0x000107c40028();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a1e6a0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a1e6c0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1e610);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113057520) = lVar5;
    *(long *)(lVar4 + _DAT_113057528) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a1e610; end: 100a1e657; -[SCComposerSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1e610(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113057840;
  func_0x000107c61428(param_1 + _DAT_113057840,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a1e658; end: 100a1e69f; -[SCComposerSystemScopeGraphBridgeSaberEntryPoint composerSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1e658(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113057848;
  func_0x000107c61428(param_1 + _DAT_113057848,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a1e6a0; end: 100a1e6bf;  */

void FUN_100a1e6a0(void)

{
  func_0x000107c61168(&PTR_PTR_112985d80);
  return;
}



/* Entry: 100a1e6c0; end: 100a1e78f;  */

undefined8 FUN_100a1e6c0(void)

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
  
  func_0x000107c61428(0x1130577c8,&uStack_40,0x20,0);
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
    FUN_1000a2d68();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a1e790; end: 100a1e7fb; -[SCConvoSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1e790(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113057c60,0);
  *(undefined8 *)(param_1 + _DAT_113057c68) = 0;
  *(undefined8 *)(param_1 + _DAT_113057c70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a1e7fc; end: 100a1e8a7; -[SCConvoSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a1e7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a1e8a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a1e8a8; end: 100a1ea3f;  */

void FUN_100a1e8a8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e18190)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f1e7e70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoSystemScopeGraphBridge/SCConvoSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4e,2,0x2b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1ea40);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53998();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a1ea40; end: 100a1ea97; -[SCConvoSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ea40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113057c60;
  func_0x000107c61428(param_1 + _DAT_113057c60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a1ea98; end: 100a1eafb; -[SCConvoSystemScopeGraphBridgeSaberEntryPoint setConvoSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ea98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113057c68;
  func_0x000107c61428(param_1 + _DAT_113057c68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a1eafc; end: 100a1eb23; -[SCConvoSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a1eafc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a1eb24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1eb24; end: 100a1ec57;  */

/* WARNING: Possible PIC construction at 0x000100a1ebdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1ebf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1ec14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1ebe0) */
/* WARNING: Removing unreachable block (ram,0x000100a1ebfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1eb24(void)

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
  func_0x000107c4075c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a1ece8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a1ed08();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1ec58);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113057af0) = lVar5;
    *(long *)(lVar4 + _DAT_113057af8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a1ec58; end: 100a1ec9f; -[SCConvoSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ec58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113057c60;
  func_0x000107c61428(param_1 + _DAT_113057c60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


