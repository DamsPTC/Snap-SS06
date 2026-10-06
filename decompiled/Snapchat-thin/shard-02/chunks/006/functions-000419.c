/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f88558; end: 101f88563;  */

void FUN_101f88558(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f88564; end: 101f885c3; -[_TtC41SpectaclesDeviceStatusBarScopeGraphBridge56SCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint init] */

void FUN_101f88564(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceStatusBarScopeGraphBridge.SCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f88590);
  (*pcVar1)();
}



/* Entry: 101f885c4; end: 101f885fb; -[_TtC41SpectaclesDeviceStatusBarScopeGraphBridge56SCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f885c4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e47690));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47688));
  return;
}



/* Entry: 101f885fc; end: 101f885ff;  */

void FUN_101f885fc(void)

{
  return;
}



/* Entry: 101f88600; end: 101f8861f;  */

void FUN_101f88600(void)

{
  FUN_101f88470();
  return;
}



/* Entry: 101f88620; end: 101f8863f;  */

void FUN_101f88620(void)

{
  func_0x000107c61168(&PTR_PTR_11280eeb8);
  return;
}



/* Entry: 101f88640; end: 101f8870f;  */

undefined8 FUN_101f88640(void)

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
  
  func_0x000107c61428(0x112e476c0,&uStack_40,0x20,0);
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
    FUN_101f88710();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f88710; end: 101f8872f;  */

void FUN_101f88710(void)

{
  func_0x000107c61168(&PTR_PTR_11280ef80);
  return;
}



/* Entry: 101f88730; end: 101f8874b;  */

void FUN_101f88730(undefined8 param_1)

{
  func_0x0001000285a8(0x112e476c8,&UNK_10da3c7f8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f887b8,param_1);
  return;
}



/* Entry: 101f8874c; end: 101f887b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8874c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101f88710();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e476d0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101f887b8; end: 101f887bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f887b8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101f88710();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e476d0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101f887c0; end: 101f8880b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f887c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e476d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f8880c; end: 101f8886b; -[_TtC41SpectaclesDeviceStatusBarScopeGraphBridge49SpectaclesDeviceStatusBarScopeGraphBridgeServices init] */

void FUN_101f8880c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceStatusBarScopeGraphBridge.SpectaclesDeviceStatusBarScopeGraphBridgeServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f88838);
  (*pcVar1)();
}



/* Entry: 101f8886c; end: 101f8887b; -[_TtC41SpectaclesDeviceStatusBarScopeGraphBridge49SpectaclesDeviceStatusBarScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8886c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e476d0));
  return;
}



/* Entry: 101f8887c; end: 101f88907;  */

void FUN_101f8887c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101f888bc,0);
  return;
}



/* Entry: 101f88908; end: 101f88923;  */

void FUN_101f88908(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f88974,param_1);
  return;
}



/* Entry: 101f88924; end: 101f88973;  */

void FUN_101f88924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 101f88974; end: 101f889a7;  */

void FUN_101f88974(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101f889a8; end: 101f889af;  */

undefined8 FUN_101f889a8(void)

{
  return 0x1b;
}



/* Entry: 101f889b0; end: 101f88b27;  */

void FUN_101f889b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ac790;
  func_0x000107c613fc(&UNK_1104ac790,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f88b28,puVar1);
  return;
}



/* Entry: 101f88b28; end: 101f88b2f;  */

void FUN_101f88b28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e476c0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e476c0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ac868;
  func_0x000107c613fc(&UNK_1104ac868,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f88bfc;
  func_0x00010058fa64(0x101f88bfc,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f88b30; end: 101f88b8b;  */

void FUN_101f88b30(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e476c0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e476c0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f88b8c; end: 101f88c03;  */

undefined ** FUN_101f88b8c(void)

{
  return &PTR_DAT_112fe9398;
}



/* Entry: 101f88c04; end: 101f88c4b; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f88c04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47728;
  func_0x000107c61428(param_1 + _DAT_112e47728,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f88c4c; end: 101f88ca3; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f88c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47728;
  func_0x000107c61428(param_1 + _DAT_112e47728,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f88ca4; end: 101f88ceb; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint sCSpectaclesHomeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f88ca4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47730;
  func_0x000107c61428(param_1 + _DAT_112e47730,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f88cec; end: 101f88cf7; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint setSCSpectaclesHomeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f88cec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47730;
  func_0x000107c61428(param_1 + _DAT_112e47730,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f88cf8; end: 101f88d3f; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint spectaclesDeviceStatusBarScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f88cf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47738;
  func_0x000107c61428(param_1 + _DAT_112e47738,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f88d40; end: 101f88d4b; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint setSpectaclesDeviceStatusBarScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f88d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47738;
  func_0x000107c61428(param_1 + _DAT_112e47738,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f88d4c; end: 101f88dab;  */

void FUN_101f88d4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101f88dac; end: 101f88f67;  */

/* WARNING: Possible PIC construction at 0x000101f88ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f88ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f88ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f88f3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f88efc) */
/* WARNING: Removing unreachable block (ram,0x000101f88eec) */
/* WARNING: Removing unreachable block (ram,0x000101f88ec8) */
/* WARNING: Removing unreachable block (ram,0x000101f88f40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f88dac(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c51384();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b710();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_101f883c8();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_101f88640();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f88f68);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e47650) = lVar5;
      *(long *)(lVar3 + _DAT_112e47658) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f88f68; end: 101f88f8f; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f88f68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f88dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f88f90; end: 101f88fd3; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f88f90(undefined8 param_1)

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



/* Entry: 101f88fd4; end: 101f891d7;  */

void FUN_101f88fd4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0fdbd20)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0242e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffc8) || (param_3 != -0x7ffffffef0fdbd00)) &&
           (func_0x000107c605b8(0xd000000000000038,0x800000010f024300,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpectaclesDeviceStatusBarScopeGraphBridge/SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x6a,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101f891d8);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c595e8();
        goto LAB_101f89060;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5892c();
  }
LAB_101f89060:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f891d8; end: 101f89283; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f891d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f88fd4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f89284; end: 101f892fb; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f89284(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e47728,0);
  *(undefined8 *)(param_1 + _DAT_112e47730) = 0;
  *(undefined8 *)(param_1 + _DAT_112e47738) = 0;
  *(undefined8 *)(param_1 + _DAT_112e47740) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f892fc; end: 101f8932f;  */

void FUN_101f892fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f89330; end: 101f89387; -[SCSpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f8935c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f89360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f89330(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e47728);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47730));
  return;
}



/* Entry: 101f89388; end: 101f893a7;  */

void FUN_101f89388(void)

{
  func_0x000107c61168(&PTR_PTR_11280f040);
  return;
}



/* Entry: 101f893a8; end: 101f893ef; -[SCSCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f893a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47770;
  func_0x000107c61428(param_1 + _DAT_112e47770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f893f0; end: 101f89447; -[SCSCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f893f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47770;
  func_0x000107c61428(param_1 + _DAT_112e47770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f89448; end: 101f8951f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f89448(undefined8 param_1,long param_2)

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
    FUN_101f88620();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e47688) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f89520);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e47690);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e47778);
    *(long **)(unaff_x20 + _DAT_112e47778) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f89520; end: 101f89547; -[SCSCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint begin] */

void FUN_101f89520(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f89448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f89548; end: 101f896bf;  */

/* WARNING: Possible PIC construction at 0x000101f895b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f89648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f895b4) */
/* WARNING: Removing unreachable block (ram,0x000101f8964c) */
/* WARNING: Removing unreachable block (ram,0x000101f89664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f89548(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e47778);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101f896c0; end: 101f896c7;  */

void FUN_101f896c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f896c8; end: 101f896fb; -[SCSCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint end] */

void FUN_101f896c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f89548();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f896fc; end: 101f8981b;  */

void FUN_101f896fc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "SpectaclesDeviceStatusBarScopeGraphBridge/SCSCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint.swift"
                        ,0x6a,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8981c);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f8981c; end: 101f898c7; -[SCSCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f8981c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f896fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f898c8; end: 101f89927; -[SCSCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f898c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e47770,0);
  *(undefined8 *)(param_1 + _DAT_112e47778) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f89928; end: 101f8995b;  */

void FUN_101f89928(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f8995c; end: 101f89993; -[SCSCSpectaclesDeviceStatusBarScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8995c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e47770);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47778));
  return;
}



/* Entry: 101f89994; end: 101f899b3;  */

void FUN_101f89994(void)

{
  func_0x000107c61168(&PTR_PTR_11280f110);
  return;
}



/* Entry: 101f899b4; end: 101f89a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f899b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f89da8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e477b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f89a20; end: 101f89a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f89a20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e477b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f89a8c; end: 101f89aeb; -[_TtC42SpectaclesHomeScopedFactoryServiceProvider30SCSpectaclesHomeScopedServices init] */

void FUN_101f89a8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesHomeScopedFactoryServiceProvider.SCSpectaclesHomeScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f89ab8);
  (*pcVar1)();
}



/* Entry: 101f89aec; end: 101f89afb; -[_TtC42SpectaclesHomeScopedFactoryServiceProvider30SCSpectaclesHomeScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f89aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e477b0));
  return;
}



/* Entry: 101f89afc; end: 101f89b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f89afc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104aca80;
  func_0x000107c613fc(&UNK_1104aca80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f89e40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f89b68; end: 101f89c03;  */

void FUN_101f89b68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104ac990;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104ac990;
  return;
}



/* Entry: 101f89c04; end: 101f89c3b;  */

void FUN_101f89c04(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101f89c3c; end: 101f89c43;  */

undefined8 FUN_101f89c3c(void)

{
  return 0x1b;
}



/* Entry: 101f89c44; end: 101f89d77;  */

void FUN_101f89c44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104acaa8;
  func_0x000107c613fc(&UNK_1104acaa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f89e18;
  func_0x00010058fa64(FUN_101f89e18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f89d78; end: 101f89da7;  */

undefined ** FUN_101f89d78(void)

{
  return &PTR_DAT_112f31678;
}



/* Entry: 101f89da8; end: 101f89dc7;  */

void FUN_101f89da8(void)

{
  func_0x000107c61168(&PTR_PTR_11280f1d0);
  return;
}



/* Entry: 101f89dc8; end: 101f89e17;  */

undefined1  [16] FUN_101f89dc8(void)

{
  return ZEXT816(0x1104ac9e0);
}



/* Entry: 101f89e18; end: 101f89e3f;  */

void FUN_101f89e18(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f89e40; end: 101f89e53;  */

void FUN_101f89e40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f89e54; end: 101f8a16b;  */

void FUN_101f89e54(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e47828,&UNK_10da3cca8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e47830,&UNK_10da3ccb0);
  puVar2 = &UNK_1104acb58;
  func_0x000107c613fc(&UNK_1104acb58,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x101f8a178;
  func_0x0001000823a8(0x101f8a178,puVar2);
  func_0x000100082720("SCSpectaclesHomeComposerImageLoaderEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f89c04;
  func_0x0001000823a8(FUN_101f89c04,0);
  pcVar4 = "SCSpectaclesHomeScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesHomeScopedServicesCleanupRelayServiceProvider",0x39,2);
  FUN_101f8b158();
  func_0x000100082720("SpectaclesHomeScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e47838,&UNK_10da3ccc0);
  puVar2 = &UNK_1104acb80;
  func_0x000107c613fc(&UNK_1104acb80,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101f8a1c0;
  func_0x0001000823a8(FUN_101f8a1c0,puVar2);
  func_0x000100082720("SCSpectaclesHomeScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e477b8,&UNK_10da3ca70);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101f8a1cc;
  func_0x0001000823a8(0x101f8a1cc,pcVar5);
  func_0x000100082720("SCSpectaclesHomeScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e477a8,&UNK_10da3ca60);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f8a1d4;
  func_0x0001000823a8(0x101f8a1d4,uVar6);
  func_0x000100082720("SCSpectaclesHomeScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104acba8;
  func_0x000107c613fc(&UNK_1104acba8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101f8a1dc;
  func_0x0001000823a8(0x101f8a1dc,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesHomeScopeEntryPointProvider",0x27,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101f8a16c; end: 101f8a183;  */

void FUN_101f8a16c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e47828,&UNK_10da3cca8);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e47830,&UNK_10da3ccb0);
  puVar2 = &UNK_1104acb58;
  func_0x000107c613fc(&UNK_1104acb58,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar3 = 0x101f8a178;
  func_0x0001000823a8(0x101f8a178,puVar2);
  func_0x000100082720("SCSpectaclesHomeComposerImageLoaderEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f89c04;
  func_0x0001000823a8(FUN_101f89c04,0);
  pcVar5 = "SCSpectaclesHomeScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesHomeScopedServicesCleanupRelayServiceProvider",0x39,2);
  FUN_101f8b158();
  func_0x000100082720("SpectaclesHomeScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e47838,&UNK_10da3ccc0);
  puVar2 = &UNK_1104acb80;
  func_0x000107c613fc(&UNK_1104acb80,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(char **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_101f8a1c0;
  func_0x0001000823a8(FUN_101f8a1c0,puVar2);
  func_0x000100082720("SCSpectaclesHomeScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e477b8,&UNK_10da3ca70);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x101f8a1cc;
  func_0x0001000823a8(0x101f8a1cc,pcVar6);
  func_0x000100082720("SCSpectaclesHomeScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e477a8,&UNK_10da3ca60);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101f8a1d4;
  func_0x0001000823a8(0x101f8a1d4,uVar7);
  func_0x000100082720("SCSpectaclesHomeScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104acba8;
  func_0x000107c613fc(&UNK_1104acba8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x101f8a1dc;
  func_0x0001000823a8(0x101f8a1dc,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCSpectaclesHomeScopeEntryPointProvider",0x27,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 101f8a184; end: 101f8a1bf;  */

void FUN_101f8a184(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f8a1c0; end: 101f8a1e3;  */

void FUN_101f8a1c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f8a914(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpectaclesHomeScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8a1e4; end: 101f8a477;  */

void FUN_101f8a1e4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_101f8a864();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9bc0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f024630);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef307d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 101f8a478; end: 101f8a4ff;  */

undefined8
FUN_101f8a478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101f8a62c(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 101f8a500; end: 101f8a53b;  */

void FUN_101f8a500(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f8a53c; end: 101f8a543;  */

undefined8 FUN_101f8a53c(void)

{
  return 0x1b;
}



/* Entry: 101f8a544; end: 101f8a5c7;  */

void FUN_101f8a544(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f8a8a4,param_2,FUN_101f8a8a8,param_2,FUN_101f8a8d0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f8a5c8; end: 101f8a617;  */

undefined8 FUN_101f8a5c8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f8a618; end: 101f8a62b;  */

void FUN_101f8a618(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104acbc0;
  return;
}



/* Entry: 101f8a62c; end: 101f8a847;  */

void FUN_101f8a62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a9bc0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f024630);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef307d0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f8a848; end: 101f8a863;  */

undefined ** FUN_101f8a848(void)

{
  return &PTR_DAT_112f31678;
}



/* Entry: 101f8a864; end: 101f8a883;  */

void FUN_101f8a864(void)

{
  func_0x000107c61168(&PTR_PTR_112e478a8);
  return;
}



/* Entry: 101f8a884; end: 101f8a8a7;  */

undefined1  [16] FUN_101f8a884(void)

{
  return ZEXT816(0x1104acc00);
}



/* Entry: 101f8a8a8; end: 101f8a8cf;  */

void FUN_101f8a8a8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f8a8d0; end: 101f8a8d7;  */

undefined8 FUN_101f8a8d0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f8a8d8; end: 101f8a913;  */

void FUN_101f8a8d8(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f8a914();
  func_0x0001000a7f38("SCSpectaclesHomeScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f8a914; end: 101f8aaff;  */

void FUN_101f8a914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105fb3d0;
  ppuVar4 = &PTR_DAT_112f31678;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e47920;
  func_0x0001000285a8(0x112e47920,&UNK_10da3ce58);
  func_0x0001000a6ee8(&UNK_1104acc00,
                      "SCSpectaclesHomeComposerImageLoaderEntryPointWrapperScopeInitializationPluginKey"
                      ,0x50,2,FUN_101f8ab74,param_1,uVar2,&UNK_1104acc00,&PTR_DAT_112e47840);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104acc50;
  func_0x000107c613fc(&UNK_1104acc50,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104aca20,"SCSpectaclesHomeScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_101f8ac24,puVar3,uVar2,&UNK_1104aca20,&PTR_DAT_112e477c0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104acc78;
  func_0x000107c613fc(&UNK_1104acc78,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104ace30,"SpectaclesHomeScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_101f8ac2c,puVar3,uVar2,&UNK_1104ace30,&PTR_DAT_112e479b0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e47928;
  func_0x0001000285a8(0x112e47928,&UNK_10da3ce60);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f8ab00; end: 101f8ab73;  */

void FUN_101f8ab00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f8aca0;
  func_0x0001000823a8(0x101f8aca0,param_3);
  func_0x000100082720("SCSpectaclesHomeComposerImageLoaderEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x55,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8ab74; end: 101f8ab7b;  */

void FUN_101f8ab74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f8aca0;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesHomeComposerImageLoaderEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x55,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8ab7c; end: 101f8ac23;  */

void FUN_101f8ab7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104acca0;
  func_0x000107c613fc(&UNK_1104acca0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f8ac98;
  func_0x0001000823a8(FUN_101f8ac98,puVar1);
  func_0x000100082720("SCSpectaclesHomeScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f8ac24; end: 101f8ac2b;  */

void FUN_101f8ac24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104acca0;
  func_0x000107c613fc(&UNK_1104acca0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f8ac98;
  func_0x0001000823a8(FUN_101f8ac98,puVar3);
  func_0x000100082720("SCSpectaclesHomeScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f8ac2c; end: 101f8ac6b;  */

void FUN_101f8ac2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f8b23c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesHomeScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8ac6c; end: 101f8ac97;  */

void FUN_101f8ac6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f8ac98; end: 101f8aca7;  */

void FUN_101f8ac98(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104acaa8;
  func_0x000107c613fc(&UNK_1104acaa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f89e18;
  func_0x00010058fa64(FUN_101f89e18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f8aca8; end: 101f8ad2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f8aca8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f8b068();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e47930) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e47938) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8ad30);
  (*pcVar1)();
}



/* Entry: 101f8ad30; end: 101f8ad8f; -[_TtC30SpectaclesHomeScopeGraphBridge45SpectaclesHomeScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f8ad30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesHomeScopeGraphBridge.SpectaclesHomeScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8ad5c);
  (*pcVar1)();
}



/* Entry: 101f8ad90; end: 101f8adc7; -[_TtC30SpectaclesHomeScopeGraphBridge45SpectaclesHomeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f8adac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8adb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8ad90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47930));
  return;
}



/* Entry: 101f8adc8; end: 101f8adef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8adc8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e47938),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e47930));
  return;
}



/* Entry: 101f8adf0; end: 101f8ae0f;  */

void FUN_101f8adf0(void)

{
  func_0x000107c61168(&PTR_PTR_11280f290);
  return;
}



/* Entry: 101f8ae10; end: 101f8ae97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f8ae10(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e47968) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e47970);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f8ae98);
  (*pcVar2)();
}



/* Entry: 101f8ae98; end: 101f8af7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f8ae98(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47968);
  *(undefined **)(unaff_x20 + _DAT_112e47968) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47970);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e47970))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104acd90;
  func_0x000107c613fc(&UNK_1104acd90,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f8af84,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f8af80; end: 101f8af8b;  */

void FUN_101f8af80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}


