/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f6862c; end: 101f6866b;  */

void FUN_101f6862c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101f68a88,0);
  return;
}



/* Entry: 101f6866c; end: 101f68677;  */

void FUN_101f6866c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101f68a70,param_1);
  return;
}



/* Entry: 101f68678; end: 101f68703;  */

void FUN_101f68678(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101f68a8c,0);
  return;
}



/* Entry: 101f68704; end: 101f6870f;  */

void FUN_101f68704(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101f68a74,param_1);
  return;
}



/* Entry: 101f68710; end: 101f68767;  */

void FUN_101f68710(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 101f68768; end: 101f6876f;  */

undefined8 FUN_101f68768(void)

{
  return 0x1b;
}



/* Entry: 101f68770; end: 101f688e7;  */

void FUN_101f68770(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104a8aa0;
  func_0x000107c613fc(&UNK_1104a8aa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f688e8,puVar1);
  return;
}



/* Entry: 101f688e8; end: 101f688ef;  */

void FUN_101f688e8(undefined8 *param_1)

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
  func_0x000107c61428(0x112e45da0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e45da0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104a8cb8;
  func_0x000107c613fc(&UNK_1104a8cb8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f68a5c;
  func_0x00010058fa64(0x101f68a5c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f688f0; end: 101f6894b;  */

void FUN_101f688f0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e45da0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e45da0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f6894c; end: 101f68a8f;  */

undefined ** FUN_101f6894c(void)

{
  return &PTR_DAT_113066f28;
}



/* Entry: 101f68a90; end: 101f68ad7; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68a90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45e48;
  func_0x000107c61428(param_1 + _DAT_112e45e48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f68ad8; end: 101f68b2f; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45e48;
  func_0x000107c61428(param_1 + _DAT_112e45e48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f68b30; end: 101f68b77; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint sCSpectaclesFlightImuCalibrationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68b30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45e50;
  func_0x000107c61428(param_1 + _DAT_112e45e50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f68b78; end: 101f68b83; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint setSCSpectaclesFlightImuCalibrationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45e50;
  func_0x000107c61428(param_1 + _DAT_112e45e50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f68b84; end: 101f68bcb; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint sCSpectaclesFlightSettingsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68b84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45e58;
  func_0x000107c61428(param_1 + _DAT_112e45e58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f68bcc; end: 101f68bd7; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint setSCSpectaclesFlightSettingsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45e58;
  func_0x000107c61428(param_1 + _DAT_112e45e58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f68bd8; end: 101f68c1f; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint sCSpectaclesHomeWifiScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68bd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45e60;
  func_0x000107c61428(param_1 + _DAT_112e45e60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f68c20; end: 101f68c2b; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint setSCSpectaclesHomeWifiScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45e60;
  func_0x000107c61428(param_1 + _DAT_112e45e60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f68c2c; end: 101f68c73; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint sCSpectaclesKioskModePageScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68c2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45e68;
  func_0x000107c61428(param_1 + _DAT_112e45e68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f68c74; end: 101f68c7f; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint setSCSpectaclesKioskModePageScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45e68;
  func_0x000107c61428(param_1 + _DAT_112e45e68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f68c80; end: 101f68cc7; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint sCSpectaclesOTAUpdatePageScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68c80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45e70;
  func_0x000107c61428(param_1 + _DAT_112e45e70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f68cc8; end: 101f68cd3; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint setSCSpectaclesOTAUpdatePageScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45e70;
  func_0x000107c61428(param_1 + _DAT_112e45e70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f68cd4; end: 101f68d1b; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint sCSpectaclesReportIssueScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68cd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45e78;
  func_0x000107c61428(param_1 + _DAT_112e45e78,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f68d1c; end: 101f68d27; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint setSCSpectaclesReportIssueScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45e78;
  func_0x000107c61428(param_1 + _DAT_112e45e78,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f68d28; end: 101f68d6f; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint spectaclesDeviceSettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68d28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45e80;
  func_0x000107c61428(param_1 + _DAT_112e45e80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f68d70; end: 101f68d7b; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint setSpectaclesDeviceSettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45e80;
  func_0x000107c61428(param_1 + _DAT_112e45e80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f68d7c; end: 101f68ddb;  */

void FUN_101f68d7c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101f68ddc; end: 101f69273;  */

/* WARNING: Possible PIC construction at 0x000101f690b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f690c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f690d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f690e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f691f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f691c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f691d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f691a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f691b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f691bc) */
/* WARNING: Removing unreachable block (ram,0x000101f691ac) */
/* WARNING: Removing unreachable block (ram,0x000101f691dc) */
/* WARNING: Removing unreachable block (ram,0x000101f691cc) */
/* WARNING: Removing unreachable block (ram,0x000101f6920c) */
/* WARNING: Removing unreachable block (ram,0x000101f691fc) */
/* WARNING: Removing unreachable block (ram,0x000101f6924c) */
/* WARNING: Removing unreachable block (ram,0x000101f6923c) */
/* WARNING: Removing unreachable block (ram,0x000101f6922c) */
/* WARNING: Removing unreachable block (ram,0x000101f69138) */
/* WARNING: Removing unreachable block (ram,0x000101f69128) */
/* WARNING: Removing unreachable block (ram,0x000101f69118) */
/* WARNING: Removing unreachable block (ram,0x000101f69108) */
/* WARNING: Removing unreachable block (ram,0x000101f690e4) */
/* WARNING: Removing unreachable block (ram,0x000101f690d4) */
/* WARNING: Removing unreachable block (ram,0x000101f690c4) */
/* WARNING: Removing unreachable block (ram,0x000101f690b4) */
/* WARNING: Removing unreachable block (ram,0x000101f6919c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f68ddc(void)

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
  func_0x000107c51374();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51380();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c51388();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c51390();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar5 = unaff_x20;
          func_0x000107c513b0();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c513cc();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar3);
              lVar3 = lVar4;
            }
            else {
              func_0x000107c5b70c();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar3);
                lVar3 = lVar4;
              }
              else {
                lVar6 = 0;
                FUN_101f67968();
                lVar4 = lVar6;
                func_0x000107c610f8();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                lVar5 = lVar3;
                FUN_101f67f64();
                if (lVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f69274);
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
                uVar1 = uStack_68;
                func_0x000100087c34(auStack_70);
                func_0x000107c61574(uVar1);
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
                *(long *)(lVar4 + _DAT_112e45ac0) = lVar5;
                *(long *)(lVar4 + _DAT_112e45ac8) = unaff_x20;
                lStack_80 = lVar4;
                lStack_78 = lVar6;
                func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 101f69274; end: 101f6929b; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f69274(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f68ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f6929c; end: 101f692df; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f6929c(undefined8 param_1)

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



/* Entry: 101f692e0; end: 101f696f7;  */

void FUN_101f692e0(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0fde410)) ||
       (func_0x000107c605b8(0xd00000000000002c,0x800000010f021bf0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5891c();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0fde3e0)) ||
         (func_0x000107c605b8(0xd000000000000026,0x800000010f021c20,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58928();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0fde3b0)) ||
           (func_0x000107c605b8(0xd000000000000020,0x800000010f021c50,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58930();
        }
        else {
          if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0fde380)) {
            uVar2 = 0xd000000000000025;
            func_0x000107c605b8(0xd000000000000025,0x800000010f021c80,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0fde350)) {
                uVar2 = 0xd000000000000025;
                func_0x000107c605b8(0xd000000000000025,0x800000010f021cb0,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0xd000000000000023;
                  if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef0fe2200)) ||
                     (func_0x000107c605b8(0xd000000000000023,0x800000010f01de00,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c58974();
                  }
                  else {
                    uVar2 = 0xd000000000000037;
                    if (((param_2 != -0x2fffffffffffffc9) || (param_3 != -0x7ffffffef0fde320)) &&
                       (func_0x000107c605b8(0xd000000000000037,0x800000010f021ce0,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "SpectaclesDeviceSettingsScopeGraphBridge/SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint.swift"
                                          ,0x68,2,0x4d,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f696f8);
                      (*pcVar1)();
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c595e4();
                  }
                  goto LAB_101f6936c;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58958();
              goto LAB_101f6936c;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58938();
        }
      }
    }
  }
LAB_101f6936c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f696f8; end: 101f697a3; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f696f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f692e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f697a4; end: 101f69857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f697a4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e45e48,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e45e50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e45e58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e45e60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e45e68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e45e70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e45e78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e45e80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e45e88) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f69858; end: 101f69877; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f69858(void)

{
  FUN_101f697a4();
  return;
}



/* Entry: 101f69878; end: 101f698ab;  */

void FUN_101f69878(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f698ac; end: 101f69953; -[SCSpectaclesDeviceSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f698d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f698f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f69938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f6991c) */
/* WARNING: Removing unreachable block (ram,0x000101f698fc) */
/* WARNING: Removing unreachable block (ram,0x000101f698dc) */
/* WARNING: Removing unreachable block (ram,0x000101f6993c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f698ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e45e48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45e50));
  return;
}



/* Entry: 101f69954; end: 101f69973;  */

void FUN_101f69954(void)

{
  func_0x000107c61168(&PTR_PTR_11280d150);
  return;
}



/* Entry: 101f69974; end: 101f6997f; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f69974(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45eb8;
  func_0x000107c61428(param_1 + _DAT_112e45eb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f69980; end: 101f6998b; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f69980(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45eb8;
  func_0x000107c61428(param_1 + _DAT_112e45eb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6998c; end: 101f69997; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider spectaclesDeviceSettingsScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6998c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45ec0;
  func_0x000107c61428(param_1 + _DAT_112e45ec0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f69998; end: 101f699db;  */

void FUN_101f69998(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101f699dc; end: 101f699e7; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider setSpectaclesDeviceSettingsScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f699dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45ec0;
  func_0x000107c61428(param_1 + _DAT_112e45ec0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f699e8; end: 101f69a3b;  */

void FUN_101f699e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f69a3c; end: 101f69c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101f69a3c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b708();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101f67a18();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e45db8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e45ec8);
      *(long *)(unaff_x20 + _DAT_112e45ec8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SpectaclesDeviceSettingsScopeGraphBridge/SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider.swift"
                      ,0x72,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f69b68);
  (*pcVar1)();
}



/* Entry: 101f69c50; end: 101f69c83; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider provide] */

void FUN_101f69c50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f69a3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f69c84; end: 101f69cb7; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider __safeProvide] */

void FUN_101f69c84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101f69b68();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f69cb8; end: 101f69cfb; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider end] */

void FUN_101f69cb8(undefined8 param_1)

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



/* Entry: 101f69cfc; end: 101f69e93;  */

void FUN_101f69cfc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0fde1f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f021e10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesDeviceSettingsScopeGraphBridge/SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider.swift"
                            ,0x72,2,0x3b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f69e94);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f69e94; end: 101f69f3f; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101f69e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f69cfc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f69f40; end: 101f69fb3; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f69f40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e45eb8,0);
  func_0x000107c61614(param_1 + _DAT_112e45ec0,0);
  *(undefined8 *)(param_1 + _DAT_112e45ec8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f69fb4; end: 101f69fe7;  */

void FUN_101f69fb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f69fe8; end: 101f6a02f; -[SCSCSpectaclesFlightImuCalibrationScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f69fe8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e45eb8);
  func_0x000107c61610(param_1 + _DAT_112e45ec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e45ec8));
  return;
}



/* Entry: 101f6a030; end: 101f6a04f;  */

void FUN_101f6a030(void)

{
  func_0x000107c61168(&PTR_PTR_112e45f10);
  return;
}



/* Entry: 101f6a050; end: 101f6a05b; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a050(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45f78;
  func_0x000107c61428(param_1 + _DAT_112e45f78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f6a05c; end: 101f6a067; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a05c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45f78;
  func_0x000107c61428(param_1 + _DAT_112e45f78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6a068; end: 101f6a073; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider spectaclesDeviceSettingsScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a068(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45f80;
  func_0x000107c61428(param_1 + _DAT_112e45f80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f6a074; end: 101f6a0b7;  */

void FUN_101f6a074(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101f6a0b8; end: 101f6a0c3; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider setSpectaclesDeviceSettingsScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45f80;
  func_0x000107c61428(param_1 + _DAT_112e45f80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6a0c4; end: 101f6a117;  */

void FUN_101f6a0c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6a118; end: 101f6a32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101f6a118(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b708();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101f67b44();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e45dc8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e45f88);
      *(long *)(unaff_x20 + _DAT_112e45f88) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SpectaclesDeviceSettingsScopeGraphBridge/SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider.swift"
                      ,0x6c,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6a244);
  (*pcVar1)();
}



/* Entry: 101f6a32c; end: 101f6a35f; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider provide] */

void FUN_101f6a32c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f6a118();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f6a360; end: 101f6a393; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider __safeProvide] */

void FUN_101f6a360(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101f6a244();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f6a394; end: 101f6a3d7; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider end] */

void FUN_101f6a394(undefined8 param_1)

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



/* Entry: 101f6a3d8; end: 101f6a56f;  */

void FUN_101f6a3d8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0fde1f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f021e10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesDeviceSettingsScopeGraphBridge/SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider.swift"
                            ,0x6c,2,0x3b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6a570);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f6a570; end: 101f6a61b; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101f6a570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f6a3d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f6a61c; end: 101f6a68f; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a61c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e45f78,0);
  func_0x000107c61614(param_1 + _DAT_112e45f80,0);
  *(undefined8 *)(param_1 + _DAT_112e45f88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f6a690; end: 101f6a6c3;  */

void FUN_101f6a690(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f6a6c4; end: 101f6a70b; -[SCSCSpectaclesFlightSettingsScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a6c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e45f78);
  func_0x000107c61610(param_1 + _DAT_112e45f80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e45f88));
  return;
}



/* Entry: 101f6a70c; end: 101f6a72b;  */

void FUN_101f6a70c(void)

{
  func_0x000107c61168(&PTR_PTR_112e45fd0);
  return;
}



/* Entry: 101f6a72c; end: 101f6a737; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a72c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e46038;
  func_0x000107c61428(param_1 + _DAT_112e46038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f6a738; end: 101f6a743; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a738(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e46038;
  func_0x000107c61428(param_1 + _DAT_112e46038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6a744; end: 101f6a74f; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider spectaclesDeviceSettingsScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a744(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e46040;
  func_0x000107c61428(param_1 + _DAT_112e46040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f6a750; end: 101f6a793;  */

void FUN_101f6a750(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101f6a794; end: 101f6a79f; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider setSpectaclesDeviceSettingsScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6a794(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e46040;
  func_0x000107c61428(param_1 + _DAT_112e46040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6a7a0; end: 101f6a7f3;  */

void FUN_101f6a7a0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6a7f4; end: 101f6aa07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101f6a7f4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b708();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101f67c70();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e45dd8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e46048);
      *(long *)(unaff_x20 + _DAT_112e46048) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SpectaclesDeviceSettingsScopeGraphBridge/SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider.swift"
                      ,0x66,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6a920);
  (*pcVar1)();
}



/* Entry: 101f6aa08; end: 101f6aa3b; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider provide] */

void FUN_101f6aa08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f6a7f4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f6aa3c; end: 101f6aa6f; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider __safeProvide] */

void FUN_101f6aa3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101f6a920();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f6aa70; end: 101f6aab3; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider end] */

void FUN_101f6aa70(undefined8 param_1)

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



/* Entry: 101f6aab4; end: 101f6ac4b;  */

void FUN_101f6aab4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0fde1f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f021e10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesDeviceSettingsScopeGraphBridge/SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider.swift"
                            ,0x66,2,0x3b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6ac4c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f6ac4c; end: 101f6acf7; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101f6ac4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f6aab4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f6acf8; end: 101f6ad6b; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6acf8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e46038,0);
  func_0x000107c61614(param_1 + _DAT_112e46040,0);
  *(undefined8 *)(param_1 + _DAT_112e46048) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f6ad6c; end: 101f6ad9f;  */

void FUN_101f6ad6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f6ada0; end: 101f6ade7; -[SCSCSpectaclesHomeWifiScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6ada0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e46038);
  func_0x000107c61610(param_1 + _DAT_112e46040);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e46048));
  return;
}



/* Entry: 101f6ade8; end: 101f6ae07;  */

void FUN_101f6ade8(void)

{
  func_0x000107c61168(&PTR_PTR_112e46090);
  return;
}



/* Entry: 101f6ae08; end: 101f6ae4f; -[SCSCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6ae08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e460f8;
  func_0x000107c61428(param_1 + _DAT_112e460f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f6ae50; end: 101f6aea7; -[SCSCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6ae50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e460f8;
  func_0x000107c61428(param_1 + _DAT_112e460f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6aea8; end: 101f6af7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6aea8(undefined8 param_1,long param_2)

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
    FUN_101f67f44();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e45d68) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f6af80);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e45d70);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e46100);
    *(long **)(unaff_x20 + _DAT_112e46100) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f6af80; end: 101f6afa7; -[SCSCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint begin] */

void FUN_101f6af80(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f6aea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f6afa8; end: 101f6b11f;  */

/* WARNING: Possible PIC construction at 0x000101f6b010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f6b0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f6b014) */
/* WARNING: Removing unreachable block (ram,0x000101f6b0ac) */
/* WARNING: Removing unreachable block (ram,0x000101f6b0c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6afa8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e46100);
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



/* Entry: 101f6b120; end: 101f6b127;  */

void FUN_101f6b120(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f6b128; end: 101f6b15b; -[SCSCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint end] */

void FUN_101f6b128(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f6afa8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f6b15c; end: 101f6b27b;  */

void FUN_101f6b15c(long param_1,long param_2,long param_3)

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
                        "SpectaclesDeviceSettingsScopeGraphBridge/SCSCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint.swift"
                        ,0x68,2,0x31,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6b27c);
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



/* Entry: 101f6b27c; end: 101f6b327; -[SCSCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f6b27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f6b15c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f6b328; end: 101f6b387; -[SCSCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6b328(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e460f8,0);
  *(undefined8 *)(param_1 + _DAT_112e46100) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f6b388; end: 101f6b3bb;  */

void FUN_101f6b388(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f6b3bc; end: 101f6b3f3; -[SCSCSpectaclesDeviceSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6b3bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e460f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e46100));
  return;
}



/* Entry: 101f6b3f4; end: 101f6b413;  */

void FUN_101f6b3f4(void)

{
  func_0x000107c61168(&PTR_PTR_11280d320);
  return;
}



/* Entry: 101f6b414; end: 101f6b47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6b414(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f6b808();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e46138) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f6b480; end: 101f6b4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6b480(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e46138) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


