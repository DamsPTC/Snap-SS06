/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c4f194; end: 100c4f1db; -[SCSnapRendererMemoriesPlaybackEntryPoint memoriesSnapRendererServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4f194(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127612b8;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4ccb0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c4f1dc; end: 100c4f1e3; -[SCLensProcessingSnapRendererScopedMemoriesSnapRendererServices memoriesSnapRendererServices] */

undefined8 FUN_100c4f1dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c4f1e4; end: 100c4f1eb; -[SCLensProcessingSnapRendererScope scopeDestination] */

undefined8 FUN_100c4f1e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c4f1ec; end: 100c4f1fb; -[SCMemoriesSnapRendererServices performer] */

undefined8 FUN_100c4f1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c4f1fc; end: 100c4f227;  */

void FUN_100c4f1fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c4f228; end: 100c4f2d7; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint init] */

void FUN_100c4f228(void)

{
  func_0x000100c4f248();
  return;
}



/* Entry: 100c4f2d8; end: 100c4f383; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100c4f2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100c4f384(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c4f384; end: 100c4f65f;  */

void FUN_100c4f384(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef104eae0)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010efb1520,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef104eab0)) {
          uVar2 = 0xd000000000000023;
          func_0x000107c605b8(0xd000000000000023,0x800000010efb1550,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000025;
            if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef104e870)) ||
               (func_0x000107c605b8(0xd000000000000025,0x800000010efb1790,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c584d4();
            }
            else {
              uVar2 = 0xd000000000000039;
              if (((param_2 != -0x2fffffffffffffc7) || (param_3 != -0x7ffffffef0e63da0)) &&
                 (func_0x000107c605b8(0xd000000000000039,0x800000010f19c260,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "LensProcessingSnapRendererScopeGraphBridge/SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint.swift"
                                    ,0x6c,2,0x49,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100c4f660);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55e2c();
            }
            goto LAB_100c4f410;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c584c4();
        goto LAB_100c4f410;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c584ac();
  }
LAB_100c4f410:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c4f660; end: 100c4f6b7; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4f660(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe7cc8;
  func_0x000107c61428(param_1 + _DAT_112fe7cc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c4f6b8; end: 100c4f6c3; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint setLensProcessingSnapRendererScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4f6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe7ce8;
  func_0x000107c61428(param_1 + _DAT_112fe7ce8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100c4f6c4; end: 100c4f723;  */

void FUN_100c4f6c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 100c4f724; end: 100c4f72f; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint setSCLensProcessingBitmojiScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4f724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe7cd0;
  func_0x000107c61428(param_1 + _DAT_112fe7cd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100c4f730; end: 100c4f73b; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint setSCLensProcessingPluginsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4f730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe7cd8;
  func_0x000107c61428(param_1 + _DAT_112fe7cd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100c4f73c; end: 100c4f747; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint setSCLensProcessingURIPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4f73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe7ce0;
  func_0x000107c61428(param_1 + _DAT_112fe7ce0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100c4f748; end: 100c4f76f; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100c4f748(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c4f770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c4f770; end: 100c4fa33;  */

/* WARNING: Possible PIC construction at 0x000100c4f938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4f948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4f96c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4f97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4f98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4f9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4fa08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4f9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c4fa0c) */
/* WARNING: Removing unreachable block (ram,0x000100c4f9fc) */
/* WARNING: Removing unreachable block (ram,0x000100c4f990) */
/* WARNING: Removing unreachable block (ram,0x000100c4f980) */
/* WARNING: Removing unreachable block (ram,0x000100c4f970) */
/* WARNING: Removing unreachable block (ram,0x000100c4f94c) */
/* WARNING: Removing unreachable block (ram,0x000100c4f93c) */
/* WARNING: Removing unreachable block (ram,0x000100c4f9ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4f770(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50f04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50f1c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c50f2c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c4b374();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_100c4fb9c();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_100c4fbbc();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100c4fa34);
            (*pcVar2)();
          }
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112fe76d0) = lVar5;
          *(long *)(lVar4 + _DAT_112fe76d8) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100c4fa34; end: 100c4fa7b; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4fa34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe7cc8;
  func_0x000107c61428(param_1 + _DAT_112fe7cc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c4fa7c; end: 100c4fac3; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint sCLensProcessingBitmojiScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4fa7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe7cd0;
  func_0x000107c61428(param_1 + _DAT_112fe7cd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100c4fac4; end: 100c4fb0b; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint sCLensProcessingPluginsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4fac4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe7cd8;
  func_0x000107c61428(param_1 + _DAT_112fe7cd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100c4fb0c; end: 100c4fb53; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint sCLensProcessingURIPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4fb0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe7ce0;
  func_0x000107c61428(param_1 + _DAT_112fe7ce0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100c4fb54; end: 100c4fb9b; -[SCLensProcessingSnapRendererScopeGraphBridgeSaberEntryPoint lensProcessingSnapRendererScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4fb54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe7ce8;
  func_0x000107c61428(param_1 + _DAT_112fe7ce8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100c4fb9c; end: 100c4fbbb;  */

void FUN_100c4fb9c(void)

{
  func_0x000107c61168(&PTR_PTR_112924600);
  return;
}



/* Entry: 100c4fbbc; end: 100c4fc8b;  */

undefined8 FUN_100c4fbbc(void)

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
  
  func_0x000107c61428(0x112fe7c20,&uStack_40,0x20,0);
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
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_100c46498();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100c4fc8c; end: 100c4fceb; -[SCSCLensProcessingSnapRendererScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4fc8c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe81a0,0);
  *(undefined8 *)(param_1 + _DAT_112fe81a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c4fcec; end: 100c4feb7; -[SCSCLensProcessingSnapRendererScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100c4fcec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100c4fd98(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c4feb8; end: 100c4ff0f; -[SCSCLensProcessingSnapRendererScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4feb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe81a0;
  func_0x000107c61428(param_1 + _DAT_112fe81a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c4ff10; end: 100c4ff37; -[SCSCLensProcessingSnapRendererScopedServicesSaberEntryPoint begin] */

void FUN_100c4ff10(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c4ff38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c4ff38; end: 100c5000f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4ff38(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_100c50058();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112fe7be8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c50010);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112fe7bf0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fe81a8);
    *(long **)(unaff_x20 + _DAT_112fe81a8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 100c50010; end: 100c50057; -[SCSCLensProcessingSnapRendererScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c50010(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe81a0;
  func_0x000107c61428(param_1 + _DAT_112fe81a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c50058; end: 100c50077;  */

void FUN_100c50058(void)

{
  func_0x000107c61168(&PTR_PTR_1129246c8);
  return;
}



/* Entry: 100c50078; end: 100c50103;  */

/* WARNING: Possible PIC construction at 0x000100c500d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c500ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c500d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c50078(long param_1)

{
  param_1 = param_1 + 0x30;
  func_0x000107c61148();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112761324;
    func_0x000107c61148(param_1);
    func_0x000107c3ed84();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c50104; end: 100c5010b; -[SCContentProductSnapRendererServices performer] */

undefined8 FUN_100c50104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c5010c; end: 100c501cf;  */

void FUN_100c5010c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100c51604;
  puStack_30 = &UNK_110846660;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  uStack_28 = uVar2;
  func_0x000107c42c14(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110967250,&puStack_48);
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 100c501d0; end: 100c50243; -[SCMemoriesSpectaclesContentDataSourcePluginScope initWithPlugInRegistry:] */

undefined1 * FUN_100c501d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f59c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c50244; end: 100c502b7; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c50244(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe3208,0);
  func_0x000107c61614(param_1 + _DAT_112fe3210,0);
  *(undefined8 *)(param_1 + _DAT_112fe3218) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c502b8; end: 100c50363; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c502b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100c50364(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c50364; end: 100c504fb;  */

void FUN_100c50364(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e68410)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesMemoriesContentServicesSaberServiceProvider.swift"
                            ,0x68,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c504fc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c504fc; end: 100c50507; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c504fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3208;
  func_0x000107c61428(param_1 + _DAT_112fe3208,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c50508; end: 100c5055b;  */

void FUN_100c50508(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c5055c; end: 100c50567; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5055c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3210;
  func_0x000107c61428(param_1 + _DAT_112fe3210,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c50568; end: 100c5059b; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider __safeProvide] */

void FUN_100c50568(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c5059c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c5059c; end: 100c50683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5059c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c506e0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fe2cc0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fe3218);
      *(long *)(unaff_x20 + _DAT_112fe3218) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c50684; end: 100c5068f; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c50684(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3208;
  func_0x000107c61428(param_1 + _DAT_112fe3208,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c50690; end: 100c506d3;  */

void FUN_100c50690(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100c506d4; end: 100c506df; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider specengActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c506d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3210;
  func_0x000107c61428(param_1 + _DAT_112fe3210,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c506e0; end: 100c5075b;  */

void FUN_100c506e0(undefined8 param_1)

{
  if (lRam0000000112fe2a30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7a78c8);
  return;
}



/* Entry: 100c5075c; end: 100c50763;  */

void FUN_100c5075c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c50764; end: 100c507b7;  */

void FUN_100c50764(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c507b8; end: 100c512ef;  */

void FUN_100c507b8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x0001002d3a98();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  puVar1 = PTR_PTR_1126a98e8;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar19 = uStack_100;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar20 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar21 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef384c0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00d930);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f01a160);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2a290);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar22);
  uVar21 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar14);
  func_0x000107c61174();
  uVar21 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc30d0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  uVar21 = uVar22;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  *(undefined8 *)(param_2 + 0xa8) = uVar21;
  *param_1 = param_2;
  return;
}



/* Entry: 100c512f0; end: 100c5133b;  */

void FUN_100c512f0(void)

{
  long unaff_x20;
  
  FUN_100c507b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 100c5133c; end: 100c5141f; -[SCSpectaclesMemoriesContentServiceProvider provide] */

void FUN_100c5133c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d2f18;
  func_0x000107c610f4(PTR_PTR_1126d2f18);
  func_0x000107c47768();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c51420; end: 100c51493; -[SCSpectaclesMemoriesContentServices initWithMemoriesSpectaclesContentDataSource:] */

undefined1 * FUN_100c51420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f79d0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c51494; end: 100c51547;  */

void FUN_100c51494(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c51548; end: 100c515f3; -[SCMemoriesSpectaclesContentDataSourcePlugInEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c515c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c515d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c515c8) */
/* WARNING: Removing unreachable block (ram,0x000100c515d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c51548(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_11275a884;
    func_0x000107c61148(lVar2);
  }
  func_0x000107c4e9e4(lVar2);
  func_0x000107c61180();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11275a888;
    func_0x000107c61148(lVar1);
  }
  func_0x000107c4ccc4(lVar1);
  func_0x000107c61180();
  func_0x000107c4fba8(lVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c515f4; end: 100c515fb; -[SCMemoriesSpectaclesContentDataSourcePluginScope plugInRegistry] */

undefined8 FUN_100c515f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c515fc; end: 100c51603; -[SCSpectaclesMemoriesContentServices memoriesSpectaclesContentDataSource] */

undefined8 FUN_100c515fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c51604; end: 100c51667;  */

/* WARNING: Possible PIC construction at 0x000100c51650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c51654) */

void FUN_100c51604(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3dd50(param_2);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3fefc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c51668; end: 100c516a7;  */

void FUN_100c51668(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bf00();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c516a8; end: 100c51a93; -[SCSpectaclesMemoriesContentServiceProvider _memoriesDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c516a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  
  puVar1 = PTR_PTR_1126d2f20;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_1127605a4;
  func_0x000107c61148();
  lVar3 = param_1 + _DAT_1127605a8;
  func_0x000107c61148();
  lVar4 = lVar3;
  func_0x000107c5da1c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_1127605ac;
  func_0x000107c61148();
  lVar7 = lVar6;
  func_0x000107c5b748();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_1127605b0;
  func_0x000107c61148();
  lVar9 = param_1 + _DAT_1127605b4;
  func_0x000107c61148();
  lVar10 = lVar9;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  lVar11 = param_1 + _DAT_1127605b8;
  func_0x000107c61148();
  lVar12 = lVar11;
  func_0x000107c4cb54();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_1127605bc;
  func_0x000107c61148();
  lVar14 = lVar13;
  func_0x000107c3fc48();
  func_0x000107c61180();
  lVar15 = param_1 + _DAT_1127605c0;
  func_0x000107c61148();
  lVar16 = lVar15;
  func_0x000107c42798();
  func_0x000107c61180();
  lVar17 = param_1 + _DAT_1127605c4;
  func_0x000107c61148();
  lVar18 = lVar17;
  func_0x000107c4ad4c();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_1127605c8;
  func_0x000107c61148();
  lVar20 = lVar19;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar21 = param_1 + _DAT_1127605cc;
  func_0x000107c61148();
  lVar22 = param_1 + _DAT_1127605d0;
  func_0x000107c61148();
  lVar23 = lVar22;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar24 = param_1 + _DAT_1127605d4;
  func_0x000107c61148();
  lVar25 = lVar24;
  func_0x000107c5bd38();
  func_0x000107c61180();
  lVar26 = param_1 + _DAT_1127605d8;
  func_0x000107c61148();
  lVar27 = lVar26;
  func_0x000107c4f124();
  func_0x000107c61180();
  lVar28 = param_1 + _DAT_1127605dc;
  func_0x000107c61148();
  lVar29 = lVar28;
  func_0x000107c4cb28();
  func_0x000107c61180();
  lVar30 = param_1 + _DAT_1127605e0;
  func_0x000107c61148();
  lVar31 = lVar30;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  lVar32 = param_1 + _DAT_1127605e4;
  func_0x000107c61148();
  lVar33 = lVar32;
  func_0x000107c5c800();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_1127605e8;
  func_0x000107c61148();
  lVar34 = param_1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c48920(puVar1,param_2,lVar2,lVar5,lVar7,lVar8,lVar10,lVar12,lVar14,lVar16,lVar18,
                      lVar20,lVar21,lVar23,lVar25,lVar27,lVar29,lVar31,lVar33,lVar34);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c51a94; end: 100c51caf;  */

void FUN_100c51a94(ulong param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong unaff_x23;
  ulong uVar12;
  undefined4 uStack_524;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined **ppuStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4f0;
  undefined1 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  undefined1 uStack_491;
  undefined **ppuStack_490;
  undefined4 uStack_488;
  undefined2 uStack_478;
  byte bStack_476;
  byte bStack_475;
  undefined1 *puStack_458;
  undefined ***pppuStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long *plStack_430;
  long *plStack_428;
  undefined **ppuStack_420;
  undefined4 uStack_418;
  undefined4 uStack_408;
  undefined1 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined1 uStack_3a9;
  undefined **ppuStack_3a8;
  undefined4 uStack_3a0;
  undefined2 uStack_390;
  byte bStack_38e;
  byte bStack_38d;
  undefined1 *puStack_370;
  undefined ***pppuStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 uStack_332;
  undefined1 uStack_331;
  undefined **ppuStack_330;
  undefined4 uStack_328;
  undefined1 uStack_318;
  byte bStack_317;
  byte bStack_316;
  byte bStack_315;
  undefined1 *puStack_2f8;
  undefined1 *puStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined **ppuStack_2c0;
  undefined4 uStack_2b8;
  undefined2 uStack_2a8;
  byte bStack_2a6;
  byte bStack_2a5;
  undefined ***pppuStack_288;
  undefined ***pppuStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined **ppuStack_250;
  undefined4 uStack_248;
  undefined2 uStack_238;
  byte bStack_236;
  byte bStack_235;
  undefined ***pppuStack_218;
  undefined ***pppuStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  uVar2 = param_1;
  FUN_100c51cb0();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000107c4080c();
  lVar6 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        func_0x000107c61128(uVar2);
      }
      unaff_x23 = *(ulong *)(uVar12 * 8);
      uVar4 = unaff_x23;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c49d0c();
      func_0x000107c61170(uVar4);
      if ((uVar5 & 1) == 0) {
        func_0x000108c1d730(param_1,unaff_x23,0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar3 != uVar12);
    uVar3 = uVar2;
    func_0x000107c4080c();
  }
  func_0x000107c61170(uVar2);
  lVar6 = param_2;
  func_0x000107c4adac();
  if (lVar6 != 0) {
    unaff_x23 = param_1;
    FUN_100bed2fc(param_1,param_2);
    func_0x000107c61180();
    func_0x000108c1d730(param_1,unaff_x23,1);
    func_0x000107c61170(unaff_x23);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  uVar3 = param_1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(unaff_x23);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8();
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (uVar3 == 0) {
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_1e0,uVar3);
  }
  puVar7 = &uStack_331;
  FUN_100c43338();
  puVar8 = &uStack_332;
  FUN_100c486cc();
  bStack_315 = puVar7[0x1b] & puVar8[0x1b];
  bStack_317 = (puVar7[0x19] | puVar8[0x19]) & 1;
  bStack_316 = (puVar7[0x1a] | puVar8[0x1a]) & 1;
  uStack_328 = 4;
  uStack_318 = 0;
  ppuStack_330 = &PTR_SUB_1108629c8;
  plStack_2c8 = (long *)0x0;
  plStack_2d0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lStack_2e8 = 0;
  puVar9 = &uStack_3a9;
  puStack_2f8 = puVar7;
  puStack_2f0 = puVar8;
  FUN_100c52148();
  uStack_418 = 0xf;
  uStack_408 = 0x100;
  uStack_3f0 = 1;
  ppuStack_420 = &PTR_SUB_1108629c8;
  uStack_3e0 = 0;
  uStack_3e8 = 0;
  uStack_3d0 = 0;
  lStack_3d8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3c8 = 0;
  plStack_3b8 = (long *)0x0;
  bStack_38e = puVar9[0x1a];
  bStack_38d = puVar9[0x1b];
  uStack_3a0 = 10;
  uStack_390 = 0x100;
  ppuStack_3a8 = &PTR_SUB_1108629c8;
  plStack_340 = (long *)0x0;
  uStack_358 = 0;
  lStack_360 = 0;
  plStack_348 = (long *)0x0;
  uStack_350 = 0;
  bStack_2a6 = bStack_316 | bStack_38e;
  bStack_2a5 = bStack_315 & bStack_38d;
  uStack_2b8 = 4;
  uStack_2a8 = 0x100;
  ppuStack_2c0 = &PTR_SUB_1108629c8;
  pppuStack_280 = &ppuStack_3a8;
  uStack_270 = 0;
  lStack_278 = 0;
  plStack_260 = (long *)0x0;
  uStack_268 = 0;
  plStack_258 = (long *)0x0;
  puVar7 = &uStack_491;
  puStack_370 = puVar9;
  pppuStack_368 = &ppuStack_420;
  pppuStack_288 = &ppuStack_330;
  func_0x0001008a97dc();
  uStack_500 = 0xf;
  uStack_4f0 = 0x100;
  uStack_4d8 = 0;
  ppuStack_508 = &PTR_SUB_1108629c8;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  lStack_4c0 = 0;
  plStack_4a8 = (long *)0x0;
  uStack_4b0 = 0;
  plStack_4a0 = (long *)0x0;
  bStack_476 = puVar7[0x1a];
  bStack_475 = puVar7[0x1b];
  uStack_488 = 10;
  uStack_478 = 0x100;
  ppuStack_490 = &PTR_SUB_1108629c8;
  plStack_428 = (long *)0x0;
  uStack_440 = 0;
  lStack_448 = 0;
  plStack_430 = (long *)0x0;
  uStack_438 = 0;
  bStack_236 = bStack_2a6 | bStack_476;
  bStack_235 = bStack_2a5 & bStack_475;
  uStack_248 = 4;
  uStack_238 = 0x100;
  ppuStack_250 = &PTR_SUB_1108629c8;
  pppuStack_218 = &ppuStack_2c0;
  pppuStack_210 = &ppuStack_490;
  uStack_200 = 0;
  lStack_208 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1f8 = 0;
  plStack_1e8 = (long *)0x0;
  lStack_520 = 0;
  lStack_518 = 0;
  uStack_510 = 0;
  uStack_524 = 0;
  puVar10 = &uStack_1e0;
  puStack_458 = puVar7;
  pppuStack_450 = &ppuStack_508;
  func_0x0001000e77a0(puVar10,&ppuStack_250,&lStack_520,&uStack_524);
  func_0x000107c61180();
  if (lStack_520 != 0) {
    lStack_518 = lStack_520;
    func_0x000107c60e14();
  }
  plVar1 = plStack_1e8;
  ppuStack_250 = &PTR_SUB_1108629c8;
  plStack_1e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1f0;
  plStack_1f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_208 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_428;
  ppuStack_490 = &PTR_SUB_1108629c8;
  plStack_428 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_430;
  plStack_430 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_448 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_4a0;
  ppuStack_508 = &PTR_SUB_1108629c8;
  plStack_4a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4a8;
  plStack_4a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4c0 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_258;
  ppuStack_2c0 = &PTR_SUB_1108629c8;
  plStack_258 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_260;
  plStack_260 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_278 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_340;
  ppuStack_3a8 = &PTR_SUB_1108629c8;
  plStack_340 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_348;
  plStack_348 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_360 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_3b8;
  ppuStack_420 = &PTR_SUB_1108629c8;
  plStack_3b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3c0;
  plStack_3c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3d8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_2c8;
  ppuStack_330 = &PTR_SUB_1108629c8;
  plStack_2c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2d0;
  plStack_2d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2e8 != 0) {
    func_0x000107c60e14();
  }
  func_0x0001000e76e0(&uStack_1b8);
  func_0x000107c61170(uStack_1c8);
  func_0x000107c61170(uStack_1d0);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 100c51cb0; end: 100c5213f;  */

void FUN_100c51cb0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_3f4;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined **ppuStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3c0;
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined1 uStack_361;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined2 uStack_348;
  byte bStack_346;
  byte bStack_345;
  undefined1 *puStack_328;
  undefined ***pppuStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  FUN_100c43338();
  puVar3 = &uStack_202;
  FUN_100c486cc();
  bStack_1e5 = puVar2[0x1b] & puVar3[0x1b];
  bStack_1e7 = (puVar2[0x19] | puVar3[0x19]) & 1;
  bStack_1e6 = (puVar2[0x1a] | puVar3[0x1a]) & 1;
  uStack_1f8 = 4;
  uStack_1e8 = 0;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1b8 = 0;
  puVar4 = &uStack_279;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar3;
  FUN_100c52148();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  uStack_2c0 = 1;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar4[0x1a];
  bStack_25d = puVar4[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_SUB_1108629c8;
  plStack_210 = (long *)0x0;
  uStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_176 = bStack_1e6 | bStack_25e;
  bStack_175 = bStack_1e5 & bStack_25d;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_150 = &ppuStack_278;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_361;
  puStack_240 = puVar4;
  pppuStack_238 = &ppuStack_2f0;
  pppuStack_158 = &ppuStack_200;
  func_0x0001008a97dc();
  uStack_3d0 = 0xf;
  uStack_3c0 = 0x100;
  uStack_3a8 = 0;
  ppuStack_3d8 = &PTR_SUB_1108629c8;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  lStack_390 = 0;
  plStack_378 = (long *)0x0;
  uStack_380 = 0;
  plStack_370 = (long *)0x0;
  bStack_346 = puVar2[0x1a];
  bStack_345 = puVar2[0x1b];
  uStack_358 = 10;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_SUB_1108629c8;
  plStack_2f8 = (long *)0x0;
  uStack_310 = 0;
  lStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  bStack_106 = bStack_176 | bStack_346;
  bStack_105 = bStack_175 & bStack_345;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_360;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3f4 = 0;
  puVar5 = &uStack_b0;
  puStack_328 = puVar2;
  pppuStack_320 = &ppuStack_3d8;
  func_0x0001000e77a0(puVar5,&ppuStack_120,&lStack_3f0,&uStack_3f4);
  func_0x000107c61180();
  if (lStack_3f0 != 0) {
    lStack_3e8 = lStack_3f0;
    func_0x000107c60e14();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_SUB_1108629c8;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_318 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_370;
  ppuStack_3d8 = &PTR_SUB_1108629c8;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_378;
  plStack_378 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_390 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_SUB_1108629c8;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    func_0x000107c60e14();
  }
  func_0x0001000e76e0(&uStack_88);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c52140; end: 100c52147; -[SCMemoriesDataMutatingServices spectaclesMutating] */

undefined8 FUN_100c52140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100c52148; end: 100c52203;  */

undefined8 FUN_100c52148(void)

{
  int iVar1;
  
  if ((bRam0000000113828ed0 & 1) == 0) {
    iVar1 = 0x13828ed0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113828e68 = 0xe;
      puRam0000000113828e70 = &UNK_10f50c00b;
      uRam0000000113828e78 = 0x1010000;
      pcRam0000000113828e80 = FUN_100c527e8;
      puRam0000000113828e88 = &UNK_108c2d758;
      ppuRam0000000113828e60 = &PTR_SUB_1108629c8;
      uRam0000000113828ea0 = 0;
      uRam0000000113828e98 = 0;
      uRam0000000113828eb0 = 0;
      uRam0000000113828ea8 = 0;
      uRam0000000113828ec0 = 0;
      uRam0000000113828eb8 = 0;
      uRam0000000113828ec8 = 0;
      func_0x000107c60e34(&SUB_105007830,0x113828e60,0x100000000);
      func_0x000107c60e4c(0x113828ed0);
    }
  }
  return 0x113828e60;
}



/* Entry: 100c52204; end: 100c527e7; -[SCGalleryLagunaContentDataSource initWithSpectaclesServices:userPreferenceTimeProvider:spectaclesDataMutator:spectaclesAuxiliaryContentServices:dataObjectContext:cloudFS:cloudSync:encryptedContentManager:galleryLogger:userPreferences:userInfoServices:circumstanceEngine:appStatusProvider:filterDataProviderFactory:memoriesBackupManager:locationProvider:temporaryFileWriter:applicationLifecycleEvents:] */

undefined8 *
FUN_100c52204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  puStack_70 = PTR_PTR_1126f79a8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar7 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar7 = puVar1[0x17];
    puVar1[0x17] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_3);
    uVar7 = puVar1[0x1a];
    puVar1[0x1a] = param_3;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_7);
    uVar7 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_8);
    uVar7 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_10);
    uVar7 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_11);
    uVar7 = puVar1[0xe];
    puVar1[0xe] = param_11;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126d2ed8;
    func_0x000107c610f4();
    func_0x000107c48d00();
    uVar7 = puVar1[9];
    puVar1[9] = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126d2ee0;
    func_0x000107c610f4();
    func_0x000107c47f14();
    uVar7 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126d2ee8;
    func_0x000107c610f4();
    func_0x000107c4891c();
    uVar7 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126d2ef0;
    func_0x000107c610f4();
    func_0x000107c47f18();
    uVar7 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126b33c0;
    func_0x000107c610fc();
    uVar7 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c611a0(puVar1 + 0x1d,param_5);
    func_0x000107c61174(param_12);
    uVar7 = puVar1[0xf];
    puVar1[0xf] = param_12;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_13);
    uVar7 = puVar1[0x10];
    puVar1[0x10] = param_13;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_14);
    uVar7 = puVar1[0x11];
    puVar1[0x11] = param_14;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_15);
    uVar7 = puVar1[0x12];
    puVar1[0x12] = param_15;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_16);
    uVar7 = puVar1[0x13];
    puVar1[0x13] = param_16;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_17);
    uVar7 = puVar1[0x14];
    puVar1[0x14] = param_17;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_18);
    uVar7 = puVar1[0x15];
    puVar1[0x15] = param_18;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_19);
    uVar7 = puVar1[0x16];
    puVar1[0x16] = param_19;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_20);
    uVar7 = puVar1[0x1e];
    puVar1[0x1e] = param_20;
    func_0x000107c61170(uVar7);
    func_0x000107c61144(auStack_80,puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_106e7ff74;
    puStack_90 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_88,auStack_80);
    ppuVar3 = &puStack_a8;
    func_0x000107c61184(ppuVar3);
    puVar4 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126c14e8;
    func_0x000107c5a89c(PTR_PTR_1126c14e8);
    func_0x000107c61180();
    func_0x000107c5b6e0(puVar2);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126ae970;
    func_0x000107c4c0f8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    uVar7 = puVar1[0xd];
    func_0x000107c4f7c0(uVar7);
    func_0x000107c61180();
    func_0x000107c5e070(puVar4);
    func_0x000107c611b0();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c527e8; end: 100c528b7;  */

bool FUN_100c527e8(uint *param_1,undefined1 *param_2)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  
  piVar3 = (int *)((long)param_1 + (ulong)*param_1);
  if ((0x16 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar4 != 0)) {
    puVar1 = (uint *)((long)piVar3 + uVar4);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
    func_0x000100befafc();
    if (lVar2 != 0) {
      *param_2 = 0;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x17) ||
         (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar4 == 0)) {
        piVar3 = (int *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar3 + uVar4);
        piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
      func_0x000100befafc();
      if ((0x14 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[10], uVar4 != 0)) {
        return *(char *)((long)piVar3 + uVar4) != '\0';
      }
      return false;
    }
  }
  *param_2 = 1;
  return false;
}



/* Entry: 100c528b8; end: 100c52997; -[SCSpectaclesGalleryPlaceholderFactory initWithTimeProvider:] */

undefined1 * FUN_100c528b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f79c8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c52998; end: 100c52aef; -[SCSpectaclesGalleryEntryBucketer initWithPlaceholderFactory:dataObjectContext:delegate:performer:] */

undefined1 *
FUN_100c52998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f79c0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    FUN_100c52af0();
    if ((int)puVar2 == 0) {
      func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_5);
    }
    else {
      puVar3 = PTR_PTR_1126c18e0;
      func_0x000107c610fc(PTR_PTR_1126c18e0);
      uVar4 = param_5;
      func_0x000106ec596c(param_5,puVar3);
      func_0x000107c61180();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
      func_0x000107c61170(uVar5);
      func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),*(undefined8 *)((long)puVar1 + 0x20));
      func_0x000106ec5470(puVar1,puVar3);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar4);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c52af0; end: 100c52b2f;  */

void FUN_100c52af0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3b40;
  func_0x000107c49820();
  if ((ppuVar1 != (undefined **)0x1) && (ppuVar1 == (undefined **)0x2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uRam00000001138466e8,PTR_s_exclusiveAccessValidationEnabled_1125c4500);
    return;
  }
  return;
}



/* Entry: 100c52b30; end: 100c52b37; -[SCSpectaclesCircumstanceEngineConfigs exclusiveAccessValidationEnabled] */

undefined1 FUN_100c52b30(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 100c52b38; end: 100c52cf3; -[SCGalleryLagunaContentLoaderFactory initWithSpectaclesServices:spectaclesAuxiliaryContentServices:dataObjectContext:cloudFS:encryptedContentManager:performer:] */

undefined1 *
FUN_100c52b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126f7a20;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    func_0x000107c5b73c(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c52cf4; end: 100c52d83;  */

void FUN_100c52cf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5b73c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100c52d84; end: 100c53713; -[SCSpectaclesEntryPoint _createLagunaModuleWithSpectaclesNetworkConnectivityServices:workerQueue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c52d84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  long lVar61;
  undefined8 uVar62;
  
  puVar1 = PTR_PTR_1126c0d18;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_11272d1dc;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_11272d1e0;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar7 = param_1 + _DAT_11272d1e4;
  func_0x000107c61148();
  lVar8 = lVar7;
  func_0x000107c42eac();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar10 = param_1 + _DAT_11272d1e8;
  func_0x000107c61148();
  lVar11 = lVar10;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_11272d1ec;
  func_0x000107c61148();
  lVar14 = lVar13;
  func_0x000107c5d8d8();
  func_0x000107c61180();
  lVar15 = lVar14;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar16 = lVar15;
  func_0x000107c515cc();
  func_0x000107c61180();
  lVar61 = (long)_DAT_11272d1f0;
  lVar17 = param_1 + lVar61;
  func_0x000107c61148();
  lVar18 = lVar17;
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar19 = param_1 + lVar61;
  func_0x000107c61148();
  lVar20 = lVar19;
  func_0x000107c42498();
  func_0x000107c61180();
  lVar21 = lVar20;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar22 = lVar21;
  func_0x000107c41050();
  func_0x000107c61180();
  lVar23 = lVar22;
  func_0x000107c4248c();
  func_0x000107c61180();
  lVar61 = param_1 + lVar61;
  func_0x000107c61148();
  lVar24 = lVar61;
  func_0x000107c3e944();
  func_0x000107c61180();
  lVar25 = lVar24;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar26 = lVar25;
  func_0x000107c41050();
  func_0x000107c61180();
  lVar27 = param_1 + _DAT_11272d1f4;
  func_0x000107c61148();
  lVar28 = lVar27;
  func_0x000107c43398();
  func_0x000107c61180();
  lVar29 = lVar28;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar30 = param_1 + _DAT_11272d1f8;
  func_0x000107c61148();
  lVar31 = lVar30;
  func_0x000107c4d81c();
  func_0x000107c61180();
  lVar32 = lVar31;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar33 = param_1 + _DAT_11272d1fc;
  func_0x000107c61148();
  lVar34 = lVar33;
  func_0x000107c4e9a8();
  func_0x000107c61180();
  lVar35 = lVar34;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar36 = param_1 + _DAT_11272d200;
  func_0x000107c61148();
  lVar37 = lVar36;
  func_0x000107c5dac4();
  func_0x000107c61180();
  uVar58 = *(undefined8 *)(param_1 + _DAT_11272d204);
  lVar38 = param_1 + _DAT_11272d1b0;
  func_0x000107c61148();
  lVar39 = param_1 + _DAT_11272d208;
  func_0x000107c61148();
  lVar40 = lVar39;
  func_0x000107c4d598();
  func_0x000107c61180();
  lVar41 = lVar40;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar42 = param_1 + _DAT_11272d20c;
  func_0x000107c61148();
  lVar43 = lVar42;
  func_0x000107c408d0();
  func_0x000107c61180();
  lVar44 = param_1 + _DAT_11272d210;
  func_0x000107c61148();
  lVar45 = lVar44;
  func_0x000107c3e5d8();
  func_0x000107c61180();
  lVar46 = param_1 + _DAT_11272d214;
  func_0x000107c61148();
  lVar47 = lVar46;
  func_0x000107c51fc8();
  func_0x000107c61180();
  lVar48 = param_1 + _DAT_11272d218;
  func_0x000107c61148();
  lVar49 = lVar48;
  func_0x000107c4dbac();
  func_0x000107c61180();
  lVar50 = param_1 + _DAT_11272d21c;
  func_0x000107c61148();
  lVar51 = lVar50;
  func_0x000107c5b034();
  func_0x000107c61180();
  uVar60 = *(undefined8 *)(param_1 + _DAT_11272d1b8);
  uVar59 = *(undefined8 *)(param_1 + _DAT_11272d1c0);
  uVar62 = *(undefined8 *)(param_1 + _DAT_11272d220);
  lVar52 = param_1 + _DAT_11272d224;
  func_0x000107c61148();
  lVar53 = param_1 + _DAT_11272d228;
  func_0x000107c61148();
  lVar54 = lVar53;
  func_0x000107c5c800();
  func_0x000107c61180();
  lVar55 = param_1 + _DAT_11272d22c;
  func_0x000107c61148();
  lVar56 = lVar55;
  func_0x000107c3dfac();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11272d230;
  func_0x000107c61148();
  lVar57 = param_1;
  func_0x000107c3e484();
  func_0x000107c61180();
  func_0x000107c493c0(puVar1,param_2,lVar3,lVar6,lVar9,lVar12,lVar16,lVar18,lVar23,lVar26,lVar29,
                      lVar32,lVar35,lVar37,uVar58,lVar38,lVar41,param_3,lVar43,lVar45,lVar47,lVar49,
                      lVar51,uVar60,uVar59,uVar62,lVar52,param_4,lVar54,lVar56,lVar57);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar57);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar56);
  func_0x000107c61170(lVar55);
  func_0x000107c61170(lVar54);
  func_0x000107c61170(lVar53);
  func_0x000107c61170(lVar52);
  func_0x000107c61170(lVar51);
  func_0x000107c61170(lVar50);
  func_0x000107c61170(lVar49);
  func_0x000107c61170(lVar48);
  func_0x000107c61170(lVar47);
  func_0x000107c61170(lVar46);
  func_0x000107c61170(lVar45);
  func_0x000107c61170(lVar44);
  func_0x000107c61170(lVar43);
  func_0x000107c61170(lVar42);
  func_0x000107c61170(lVar41);
  func_0x000107c61170(lVar40);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar38);
  func_0x000107c61170(lVar37);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar61);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c53714; end: 100c5381f; -[SCUserAdIdProvider initWithSAID:preferences:grapheneRegistry:initType:] */

undefined1 *
FUN_100c53714(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e8410;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    lVar3 = param_3;
    func_0x000107c4adac();
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      func_0x000107c5c734(uVar2);
      func_0x000107c61180();
      func_0x000107c58b58();
      func_0x000107c61170(uVar2);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c53820; end: 100c53843;  */

void FUN_100c53820(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c53844; end: 100c53847;  */

void FUN_100c53844(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c53848; end: 100c538cb; -[SCUserAdIdProvider said] */

void FUN_100c53848(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c515cc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c4adac();
  if (lVar1 == 0) {
    func_0x000107c3be64(param_1);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 100c538cc; end: 100c5392f; -[SCPreferences said] */

void FUN_100c538cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110ee8a78);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c53930; end: 100c53b07;  */

void FUN_100c53930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c439a8(param_1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c3a4();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3e1d0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = param_2;
  func_0x000107c43a60(param_2);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000100504554();
  func_0x000107c61170(uVar1);
  uVar1 = param_1;
  func_0x000107c43a60(param_1);
  func_0x000107c61180();
  uVar4 = param_2;
  func_0x000107c5b3fc(param_2);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c49804();
  uVar6 = uVar1;
  FUN_100c53b08(uVar1,uVar3,uVar2,uVar5,param_3);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 100c53b08; end: 100c53bf3;  */

void FUN_100c53b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  FUN_100c53bf4(param_2);
  uVar1 = param_3;
  uVar2 = param_1;
  func_0x000107c5b3fc(param_3);
  FUN_100c53bf4(param_4);
  FUN_100c53d5c(param_1,uVar2,uVar1,param_5,param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c53bf4; end: 100c53d5b;  */

double FUN_100c53bf4(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  puVar9 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  dVar13 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c4080c();
  iVar8 = (int)param_4;
  dVar14 = 0.0;
  if (lVar2 != 0) {
    lVar11 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar11) {
          func_0x000107c61128(param_3);
        }
        puVar10 = *(undefined1 **)(lStack_138 + lVar12 * 8);
        puVar3 = puVar10;
        func_0x000107c3f710();
        func_0x000107c61180();
        uVar4 = 0;
        puVar9 = (undefined8 *)puVar3;
        func_0x000107c49d0c();
        func_0x000107c61170(puVar3);
        iVar8 = (int)param_4;
        if ((uVar4 & 1) != 0) {
          func_0x000107c42bd4(puVar10);
          param_2 = 1000.0;
          dVar14 = dVar13 * 1000.0;
          goto LAB_100c53d08;
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_3;
      puVar9 = &uStack_140;
      func_0x000107c4080c();
      iVar8 = (int)param_4;
    } while (lVar2 != 0);
  }
LAB_100c53d08:
  func_0x000107c61170(param_3);
  func_0x000107c61170();
  iVar1 = (int)param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return dVar14;
  }
  func_0x000107c60e78();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar14 = dVar13;
  func_0x000107c61174(puVar9);
  func_0x000107c61160(puVar5);
  puVar3 = (undefined1 *)puVar9;
  func_0x000107c40ef8();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar3 == (undefined1 *)0x0) {
    dVar15 = 0.0;
  }
  else {
    func_0x000107c5c9e4(puVar3);
    dVar14 = (double)(long)(dVar14 * 1000.0);
    dVar15 = (double)(long)dVar14;
  }
  func_0x000107c61170(puVar3);
  if ((param_2 <= 0.0) || (iVar8 < 1)) {
joined_r0x000100c53e24:
    if ((iVar1 < 1) || (dVar13 <= dVar15)) goto LAB_100c53ed4;
  }
  else if (dVar13 <= param_2) {
    dVar14 = dVar15 + 259200000.0;
    if (dVar14 < param_2) {
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantDictionary_111174f90;
      func_0x000107c4d9e8(&PTR__OBJC_CLASS___NSConstantDictionary_111174f90);
      func_0x000107c61180();
      func_0x000107c3d798(puVar5);
      func_0x000107c61170(ppuVar6);
    }
    if (iVar1 <= iVar8) goto LAB_100c53ed4;
    goto joined_r0x000100c53e24;
  }
  ppuVar6 = &PTR__OBJC_CLASS___NSConstantDictionary_111174f90;
  func_0x000107c4d9e8(&PTR__OBJC_CLASS___NSConstantDictionary_111174f90);
  func_0x000107c61180();
  func_0x000107c3d798(puVar5);
  func_0x000107c61170(ppuVar6);
LAB_100c53ed4:
  puVar7 = PTR_PTR_1126db330;
  func_0x000107c610f4(PTR_PTR_1126db330);
  func_0x000107c48ad8();
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return dVar14;
}



/* Entry: 100c53d5c; end: 100c53f17;  */

void FUN_100c53d5c(double param_1,double param_2,int param_3,int param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar5 = param_1;
  func_0x000107c61174(param_5);
  func_0x000107c61160(puVar1);
  lVar2 = param_5;
  func_0x000107c40ef8();
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  if (lVar2 == 0) {
    dVar5 = 0.0;
  }
  else {
    func_0x000107c5c9e4(lVar2);
    dVar5 = (double)(long)(dVar5 * 1000.0);
  }
  func_0x000107c61170(lVar2);
  if ((param_2 <= 0.0) || (param_4 < 1)) {
joined_r0x000100c53e24:
    if ((param_3 < 1) || (param_1 <= dVar5)) goto LAB_100c53ed4;
  }
  else if (param_1 <= param_2) {
    if (dVar5 + 259200000.0 < param_2) {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantDictionary_111174f90;
      func_0x000107c4d9e8(&PTR__OBJC_CLASS___NSConstantDictionary_111174f90);
      func_0x000107c61180();
      func_0x000107c3d798(puVar1);
      func_0x000107c61170(ppuVar3);
    }
    if (param_3 <= param_4) goto LAB_100c53ed4;
    goto joined_r0x000100c53e24;
  }
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantDictionary_111174f90;
  func_0x000107c4d9e8(&PTR__OBJC_CLASS___NSConstantDictionary_111174f90);
  func_0x000107c61180();
  func_0x000107c3d798(puVar1);
  func_0x000107c61170(ppuVar3);
LAB_100c53ed4:
  puVar4 = PTR_PTR_1126db330;
  func_0x000107c610f4(PTR_PTR_1126db330);
  func_0x000107c48ad8();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c53f18; end: 100c53f9f; -[SCSnapchattersShouldProcessStreakResult initWithStreakErrorsTypes:shouldProcess:] */

undefined1 *
FUN_100c53f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126fdde8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c53fa0; end: 100c53fa7; -[SCSnapchattersShouldProcessStreakResult streakErrorsTypes] */

undefined8 FUN_100c53fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c53fa8; end: 100c53fb3; -[SCSnapchattersShouldProcessStreakResult .cxx_destruct] */

void FUN_100c53fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c53fb4; end: 100c5432f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100c53fb4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ae720;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c6111c(auStack_78,param_1 + 0x38);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar11);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c61174();
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x28) + (long)_DAT_1127612ec;
    func_0x000107c61148();
  }
  lVar3 = lVar12;
  func_0x000107c4cb88();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c4b6e4();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar12);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if ((int)lVar5 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c5a790(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x000107c61180();
    func_0x000107c3b368();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c5c734(uVar9);
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c4fc88(uVar9);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c5a78c();
    func_0x000107c61180();
    func_0x000107c3b368();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c5a790(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x000107c61180();
    func_0x000107c3b368();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = *(undefined **)(param_1 + 0x30);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_68 = uVar8;
    uStack_60 = uVar9;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c4fc88(puVar6);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  puVar10 = auStack_78;
  func_0x000107c61120();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  func_0x000107c60e78();
  func_0x000107c61120(auStack_78);
  func_0x000107c60bd8(puVar10);
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000029,0x800000010efcbc70,0,puVar10);
  func_0x000107c61170(puVar10);
  return (undefined1 *)(ulong)(uVar1 & 1);
}



/* Entry: 100c54330; end: 100c54387; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl liveRenderingForOperaPlaybackEnabled] */

uint FUN_100c54330(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000029,0x800000010efcbc70,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 100c54388; end: 100c5441b; -[SCSnapRendererMemoriesPlaybackEntryPoint _createSrPluginFactoryWithPerformer:lensProcessingUseCase:supportedDestinations:lensContentPreparationStrategy:] */

void FUN_100c54388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c3b2b0(param_1,param_2,param_3,param_4,param_6);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126d3368;
  func_0x000107c610f4(PTR_PTR_1126d3368);
  func_0x000107c47294();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c5441c; end: 100c54733; -[SCSnapRendererMemoriesPlaybackEntryPoint _createLensEffectPluginImplWithPerformer:lensProcessingUseCase:lensContentPreparationStrategy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5441c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  if (param_1 == 0) {
    uStack_70 = 0;
  }
  else {
    uStack_70 = param_1 + _DAT_1127612e8;
    func_0x000107c61148();
  }
  puVar1 = PTR_PTR_1126d3370;
  func_0x000107c610f4();
  if (param_1 == 0) {
    uStack_78 = 0;
  }
  else {
    uStack_78 = param_1 + _DAT_1127612c8;
    func_0x000107c61148();
  }
  lVar2 = param_1;
  FUN_100c548bc();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4db04();
  func_0x000107c61180();
  lVar4 = param_1;
  FUN_100c548bc();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c4db0c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_1127612c4;
    func_0x000107c61148();
  }
  lVar6 = lVar14;
  func_0x000107c3f130();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127612c0;
    func_0x000107c61148();
  }
  lVar7 = lVar15;
  func_0x000107c3dfac();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_1127612e0;
    func_0x000107c61148();
  }
  lVar8 = lVar16;
  func_0x000107c4e604();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127612e4;
    func_0x000107c61148();
  }
  lVar9 = lVar17;
  func_0x000107c408d0();
  func_0x000107c61180();
  lVar10 = param_1;
  func_0x000107c4ccb0();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c4cbfc();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c43bf4();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127612d4;
    func_0x000107c61148();
  }
  lVar13 = param_1;
  func_0x000107c4e8fc();
  func_0x000107c61180();
  func_0x000107c47104(puVar1,param_2,uStack_78,lVar3,lVar5,lVar6,lVar7,lVar8,param_4,param_3,lVar9,
                      param_5,lVar12,lVar13,uStack_70,0x101);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c54734; end: 100c547db;  */

long * FUN_100c54734(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 100c547dc; end: 100c548bb;  */

void FUN_100c547dc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1[1];
  if (*param_1 == 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  else {
    func_0x000107c61184();
    lVar2 = *param_1;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x100c549e8;
    puStack_48 = &UNK_1107d0af0;
    lStack_38 = lVar1;
    func_0x000107c61174(param_2);
    uStack_40 = param_2;
    func_0x000107c61174(lVar1);
    func_0x00010007380c(lVar2,&puStack_60);
    func_0x000107c61170(uStack_40);
    func_0x000107c61170(lStack_38);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c548bc; end: 100c548df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c548bc(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127612cc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c548e0; end: 100c548e7; -[SCLensEffectOffscreenRenderingServices offscreenRenderingFactory] */

undefined8 FUN_100c548e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c548e8; end: 100c548ef; -[SCDocObjectFetchedResult expressionPtr] */

long FUN_100c548e8(long param_1)

{
  return param_1 + 0x80;
}



/* Entry: 100c548f0; end: 100c548f7; -[SCDocObjectFetchedResult orderBy] */

long FUN_100c548f0(long param_1)

{
  return param_1 + 0x90;
}



/* Entry: 100c548f8; end: 100c5494b;  */

undefined8 FUN_100c548f8(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x000107c49ac4(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100c5494c; end: 100c549f7;  */

long FUN_100c5494c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 100c549f8; end: 100c54a3f;  */

/* WARNING: Possible PIC construction at 0x000100c54a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c54a30) */

void FUN_100c549f8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c564();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c54a40; end: 100c54a7f; -[SCDocObjectObserver _setDocObject:] */

void FUN_100c54a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 100c54a80; end: 100c54c1f;  */

/* WARNING: Possible PIC construction at 0x000100c54b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c54b84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c54b78) */
/* WARNING: Removing unreachable block (ram,0x000100c54b88) */

void FUN_100c54a80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    func_0x000107c6071c();
    lVar2 = param_1 + 0x50;
    func_0x000107c61148(lVar2);
    func_0x000107c43a64(*(undefined8 *)(param_1 + 0x30));
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c3e88c(*(undefined8 *)(param_1 + 0x30));
    func_0x000107c61180();
    func_0x000107c40808();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c3d95c();
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c3be30(lVar2);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,0);
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c4bf1c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c54c20; end: 100c54cef; -[SCSnapchattersFetchRequestCoordinator _logFetchFriendsBlizzardEventWithSuccess:errorMsg:triggerSource:syncType:friendCountFetched:bestFriendsCount:addedMeCount:overallLatencyMS:networkLatencyMS:] */

/* WARNING: Possible PIC construction at 0x000100c54cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c54ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c54cc0) */
/* WARNING: Removing unreachable block (ram,0x000100c54cd0) */

void FUN_100c54c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4bb90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}


