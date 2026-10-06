/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10216c0dc; end: 10216c0e7;  */

void FUN_10216c0dc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10216c140,param_1);
  return;
}



/* Entry: 10216c0e8; end: 10216c13f;  */

void FUN_10216c0e8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10216c140; end: 10216c173;  */

void FUN_10216c140(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10216c174; end: 10216c17b;  */

undefined8 FUN_10216c174(void)

{
  return 0x1b;
}



/* Entry: 10216c17c; end: 10216c2f3;  */

void FUN_10216c17c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104d51f0;
  func_0x000107c613fc(&UNK_1104d51f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10216c2f4,puVar1);
  return;
}



/* Entry: 10216c2f4; end: 10216c2fb;  */

void FUN_10216c2f4(undefined8 *param_1)

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
  func_0x000107c61428(0x112e5d540,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e5d540,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104d5388;
  func_0x000107c613fc(&UNK_1104d5388,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10216c428;
  func_0x00010058fa64(0x10216c428,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10216c2fc; end: 10216c357;  */

void FUN_10216c2fc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e5d540,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e5d540,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10216c358; end: 10216c44b;  */

undefined ** FUN_10216c358(void)

{
  return &PTR_DAT_112fae420;
}



/* Entry: 10216c44c; end: 10216c493; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c44c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d5d0;
  func_0x000107c61428(param_1 + _DAT_112e5d5d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10216c494; end: 10216c4eb; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c494(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d5d0;
  func_0x000107c61428(param_1 + _DAT_112e5d5d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10216c4ec; end: 10216c533; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint sCMemoriesExternalShareAdaptorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c4ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d5d8;
  func_0x000107c61428(param_1 + _DAT_112e5d5d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10216c534; end: 10216c53f; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint setSCMemoriesExternalShareAdaptorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c534(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d5d8;
  func_0x000107c61428(param_1 + _DAT_112e5d5d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10216c540; end: 10216c587; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint sCMemoriesPrivateGallerySetupFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d5e0;
  func_0x000107c61428(param_1 + _DAT_112e5d5e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10216c588; end: 10216c593; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint setSCMemoriesPrivateGallerySetupFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d5e0;
  func_0x000107c61428(param_1 + _DAT_112e5d5e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10216c594; end: 10216c5db; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint sCSpectaclesBoomboxScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c594(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d5e8;
  func_0x000107c61428(param_1 + _DAT_112e5d5e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10216c5dc; end: 10216c5e7; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint setSCSpectaclesBoomboxScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d5e8;
  func_0x000107c61428(param_1 + _DAT_112e5d5e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10216c5e8; end: 10216c62f; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint sCSpectaclesMemoriesCustomExportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c5e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d5f0;
  func_0x000107c61428(param_1 + _DAT_112e5d5f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10216c630; end: 10216c63b; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint setSCSpectaclesMemoriesCustomExportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d5f0;
  func_0x000107c61428(param_1 + _DAT_112e5d5f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10216c63c; end: 10216c683; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint memoriesActionMenuScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c63c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d5f8;
  func_0x000107c61428(param_1 + _DAT_112e5d5f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10216c684; end: 10216c68f; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint setMemoriesActionMenuScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d5f8;
  func_0x000107c61428(param_1 + _DAT_112e5d5f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10216c690; end: 10216c6ef;  */

void FUN_10216c690(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10216c6f0; end: 10216ca4f;  */

/* WARNING: Possible PIC construction at 0x00010216c91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216c92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216c93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216c958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216c968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216c978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216c994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216ca14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216ca24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216c9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216c9d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216c9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010216c9d8) */
/* WARNING: Removing unreachable block (ram,0x00010216c9f8) */
/* WARNING: Removing unreachable block (ram,0x00010216ca28) */
/* WARNING: Removing unreachable block (ram,0x00010216ca18) */
/* WARNING: Removing unreachable block (ram,0x00010216c97c) */
/* WARNING: Removing unreachable block (ram,0x00010216c96c) */
/* WARNING: Removing unreachable block (ram,0x00010216c95c) */
/* WARNING: Removing unreachable block (ram,0x00010216c940) */
/* WARNING: Removing unreachable block (ram,0x00010216c930) */
/* WARNING: Removing unreachable block (ram,0x00010216c920) */
/* WARNING: Removing unreachable block (ram,0x00010216c9c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216c6f0(void)

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
  func_0x000107c5103c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51054();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c51334();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c513a4();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          func_0x000107c4cb18();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar6 = 0;
            FUN_10216b654();
            lVar4 = lVar6;
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            lVar5 = lVar3;
            FUN_10216bb24();
            if (lVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10216ca50);
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
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uStack_68);
            *(long *)(lVar4 + _DAT_112e5d330) = lVar5;
            *(long *)(lVar4 + _DAT_112e5d338) = unaff_x20;
            lStack_80 = lVar4;
            lStack_78 = lVar6;
            func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
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



/* Entry: 10216ca50; end: 10216ca77; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10216ca50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10216c6f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10216ca78; end: 10216cabb; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint end] */

void FUN_10216ca78(undefined8 param_1)

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



/* Entry: 10216cabc; end: 10216ce03;  */

void FUN_10216cabc(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd6) && (param_3 == -0x7ffffffef0f98f50)) ||
       (func_0x000107c605b8(0xd00000000000002a,0x800000010f0670b0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c585e4();
    }
    else {
      uVar2 = 0xd00000000000002d;
      if (((param_2 == -0x2fffffffffffffd3) && (param_3 == -0x7ffffffef0f98f20)) ||
         (func_0x000107c605b8(0xd00000000000002d,0x800000010f0670e0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c585fc();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f98ef0)) {
          uVar2 = 0xd00000000000001f;
          func_0x000107c605b8(0xd00000000000001f,0x800000010f067110,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0f98ed0)) ||
               (func_0x000107c605b8(0xd00000000000002c,0x800000010f067130,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5894c();
            }
            else {
              uVar2 = 0xd000000000000031;
              if (((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0f98ea0)) &&
                 (func_0x000107c605b8(0xd000000000000031,0x800000010f067160,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "MemoriesActionMenuScopeGraphBridge/SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint.swift"
                                    ,0x5c,2,0x45,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10216ce04);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c56508();
            }
            goto LAB_10216cb48;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c588dc();
      }
    }
  }
LAB_10216cb48:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10216ce04; end: 10216ceaf; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10216ce04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10216cabc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10216ceb0; end: 10216cf4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216ceb0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e5d5d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e5d5d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d5e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d5e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d5f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d5f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5d600) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10216cf4c; end: 10216cf6b; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint init] */

void FUN_10216cf4c(void)

{
  FUN_10216ceb0();
  return;
}



/* Entry: 10216cf6c; end: 10216cf9f;  */

void FUN_10216cf6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10216cfa0; end: 10216d027; -[SCMemoriesActionMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010216cfcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216cfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216d00c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010216cff0) */
/* WARNING: Removing unreachable block (ram,0x00010216cfd0) */
/* WARNING: Removing unreachable block (ram,0x00010216d010) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216cfa0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5d5d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5d5d8));
  return;
}



/* Entry: 10216d028; end: 10216d047;  */

void FUN_10216d028(void)

{
  func_0x000107c61168(&PTR_PTR_112821bf8);
  return;
}



/* Entry: 10216d048; end: 10216d053; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d048(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d630;
  func_0x000107c61428(param_1 + _DAT_112e5d630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10216d054; end: 10216d05f; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d054(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d630;
  func_0x000107c61428(param_1 + _DAT_112e5d630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10216d060; end: 10216d06b; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider memoriesActionMenuScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d060(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d638;
  func_0x000107c61428(param_1 + _DAT_112e5d638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10216d06c; end: 10216d0af;  */

void FUN_10216d06c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10216d0b0; end: 10216d0bb; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider setMemoriesActionMenuScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d638;
  func_0x000107c61428(param_1 + _DAT_112e5d638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10216d0bc; end: 10216d10f;  */

void FUN_10216d0bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10216d110; end: 10216d323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10216d110(void)

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
    func_0x000107c4cb14();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010216b704();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e5d550);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e5d640);
      *(long *)(unaff_x20 + _DAT_112e5d640) = lVar4;
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
                      "MemoriesActionMenuScopeGraphBridge/SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider.swift"
                      ,0x71,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10216d23c);
  (*pcVar1)();
}



/* Entry: 10216d324; end: 10216d357; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider provide] */

void FUN_10216d324(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10216d110();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10216d358; end: 10216d38b; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider __safeProvide] */

void FUN_10216d358(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010216d23c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10216d38c; end: 10216d3cf; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider end] */

void FUN_10216d38c(undefined8 param_1)

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



/* Entry: 10216d3d0; end: 10216d567;  */

void FUN_10216d3d0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0f98d80)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f067280,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemoriesActionMenuScopeGraphBridge/SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider.swift"
                            ,0x71,2,0x3b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10216d568);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56504();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10216d568; end: 10216d613; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10216d568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10216d3d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10216d614; end: 10216d687; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d614(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5d630,0);
  func_0x000107c61614(param_1 + _DAT_112e5d638,0);
  *(undefined8 *)(param_1 + _DAT_112e5d640) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10216d688; end: 10216d6bb;  */

void FUN_10216d688(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10216d6bc; end: 10216d703; -[SCSCMemoriesActionMenuScopedMemoriesActivityServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d6bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5d630);
  func_0x000107c61610(param_1 + _DAT_112e5d638);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5d640));
  return;
}



/* Entry: 10216d704; end: 10216d723;  */

void FUN_10216d704(void)

{
  func_0x000107c61168(&PTR_PTR_112e5d688);
  return;
}



/* Entry: 10216d724; end: 10216d72f; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d724(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d6f0;
  func_0x000107c61428(param_1 + _DAT_112e5d6f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10216d730; end: 10216d73b; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d6f0;
  func_0x000107c61428(param_1 + _DAT_112e5d6f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10216d73c; end: 10216d747; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider memoriesActionMenuScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d73c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d6f8;
  func_0x000107c61428(param_1 + _DAT_112e5d6f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10216d748; end: 10216d78b;  */

void FUN_10216d748(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10216d78c; end: 10216d797; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider setMemoriesActionMenuScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216d78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d6f8;
  func_0x000107c61428(param_1 + _DAT_112e5d6f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10216d798; end: 10216d7eb;  */

void FUN_10216d798(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10216d7ec; end: 10216d9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10216d7ec(void)

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
    func_0x000107c4cb14();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010216b830();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e5d558);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e5d700);
      *(long *)(unaff_x20 + _DAT_112e5d700) = lVar4;
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
                      "MemoriesActionMenuScopeGraphBridge/SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider.swift"
                      ,0x6d,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10216d918);
  (*pcVar1)();
}



/* Entry: 10216da00; end: 10216da33; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider provide] */

void FUN_10216da00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10216d7ec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10216da34; end: 10216da67; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider __safeProvide] */

void FUN_10216da34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010216d918();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10216da68; end: 10216daab; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider end] */

void FUN_10216da68(undefined8 param_1)

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



/* Entry: 10216daac; end: 10216dc43;  */

void FUN_10216daac(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0f98d80)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f067280,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemoriesActionMenuScopeGraphBridge/SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider.swift"
                            ,0x6d,2,0x3b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10216dc44);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56504();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10216dc44; end: 10216dcef; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10216dc44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10216daac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10216dcf0; end: 10216dd63; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216dcf0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5d6f0,0);
  func_0x000107c61614(param_1 + _DAT_112e5d6f8,0);
  *(undefined8 *)(param_1 + _DAT_112e5d700) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10216dd64; end: 10216dd97;  */

void FUN_10216dd64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10216dd98; end: 10216dddf; -[SCSCMemoriesActionMenuScopedMemoriesSendServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216dd98(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5d6f0);
  func_0x000107c61610(param_1 + _DAT_112e5d6f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5d700));
  return;
}



/* Entry: 10216dde0; end: 10216ddff;  */

void FUN_10216dde0(void)

{
  func_0x000107c61168(&PTR_PTR_112e5d748);
  return;
}



/* Entry: 10216de00; end: 10216de47; -[SCSCMemoriesActionMenuScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216de00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5d7b0;
  func_0x000107c61428(param_1 + _DAT_112e5d7b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10216de48; end: 10216de9f; -[SCSCMemoriesActionMenuScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216de48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5d7b0;
  func_0x000107c61428(param_1 + _DAT_112e5d7b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10216dea0; end: 10216df77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216dea0(undefined8 param_1,long param_2)

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
    FUN_10216bb04();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e5d508) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10216df78);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e5d510);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5d7b8);
    *(long **)(unaff_x20 + _DAT_112e5d7b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10216df78; end: 10216df9f; -[SCSCMemoriesActionMenuScopedServicesSaberEntryPoint begin] */

void FUN_10216df78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10216dea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10216dfa0; end: 10216e117;  */

/* WARNING: Possible PIC construction at 0x00010216e008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216e0a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010216e00c) */
/* WARNING: Removing unreachable block (ram,0x00010216e0a4) */
/* WARNING: Removing unreachable block (ram,0x00010216e0bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216dfa0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5d7b8);
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



/* Entry: 10216e118; end: 10216e11f;  */

void FUN_10216e118(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10216e120; end: 10216e153; -[SCSCMemoriesActionMenuScopedServicesSaberEntryPoint end] */

void FUN_10216e120(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10216dfa0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10216e154; end: 10216e273;  */

void FUN_10216e154(long param_1,long param_2,long param_3)

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
                        "MemoriesActionMenuScopeGraphBridge/SCSCMemoriesActionMenuScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x31,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10216e274);
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



/* Entry: 10216e274; end: 10216e31f; -[SCSCMemoriesActionMenuScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10216e274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10216e154(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10216e320; end: 10216e37f; -[SCSCMemoriesActionMenuScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216e320(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5d7b0,0);
  *(undefined8 *)(param_1 + _DAT_112e5d7b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10216e380; end: 10216e3b3;  */

void FUN_10216e380(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10216e3b4; end: 10216e3eb; -[SCSCMemoriesActionMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216e3b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5d7b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5d7b8));
  return;
}



/* Entry: 10216e3ec; end: 10216e40b;  */

void FUN_10216e3ec(void)

{
  func_0x000107c61168(&PTR_PTR_112821d70);
  return;
}



/* Entry: 10216e40c; end: 10216e477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216e40c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10216e800();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e5d7f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10216e478; end: 10216e4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216e478(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5d7f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10216e4e4; end: 10216e543; -[_TtC44MemoriesBackupUIScopedFactoryServiceProvider32SCMemoriesBackupUIScopedServices init] */

void FUN_10216e4e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesBackupUIScopedFactoryServiceProvider.SCMemoriesBackupUIScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10216e510);
  (*pcVar1)();
}



/* Entry: 10216e544; end: 10216e553; -[_TtC44MemoriesBackupUIScopedFactoryServiceProvider32SCMemoriesBackupUIScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216e544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5d7f0));
  return;
}



/* Entry: 10216e554; end: 10216e5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10216e554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104d55a0;
  func_0x000107c613fc(&UNK_1104d55a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10216e8dc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10216e5c0; end: 10216e65b;  */

void FUN_10216e5c0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104d54b0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d54b0;
  return;
}



/* Entry: 10216e65c; end: 10216e693;  */

void FUN_10216e65c(long *param_1)

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



/* Entry: 10216e694; end: 10216e69b;  */

undefined8 FUN_10216e694(void)

{
  return 0x1b;
}



/* Entry: 10216e69c; end: 10216e7cf;  */

void FUN_10216e69c(undefined8 *param_1)

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
  puVar1 = &UNK_1104d55c8;
  func_0x000107c613fc(&UNK_1104d55c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10216e8b4;
  func_0x00010058fa64(FUN_10216e8b4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10216e7d0; end: 10216e7ff;  */

undefined ** FUN_10216e7d0(void)

{
  return &PTR_DAT_112f234a0;
}



/* Entry: 10216e800; end: 10216e81f;  */

void FUN_10216e800(void)

{
  func_0x000107c61168(&PTR_PTR_112821e30);
  return;
}



/* Entry: 10216e820; end: 10216e86f;  */

undefined1  [16] FUN_10216e820(void)

{
  return ZEXT816(0x1104d5500);
}



/* Entry: 10216e870; end: 10216e8b3;  */

void FUN_10216e870(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5d858 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9fc0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5d858 = puVar1;
  return;
}



/* Entry: 10216e8b4; end: 10216e8db;  */

void FUN_10216e8b4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10216e8dc; end: 10216e8df;  */

void FUN_10216e8dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10216e8e0; end: 10216eb8f;  */

/* WARNING: Possible PIC construction at 0x00010216ea80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216ea90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eaa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216ead0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eaf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eb00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010216eb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010216eb54) */
/* WARNING: Removing unreachable block (ram,0x00010216eb44) */
/* WARNING: Removing unreachable block (ram,0x00010216eb34) */
/* WARNING: Removing unreachable block (ram,0x00010216eb24) */
/* WARNING: Removing unreachable block (ram,0x00010216eb14) */
/* WARNING: Removing unreachable block (ram,0x00010216eb04) */
/* WARNING: Removing unreachable block (ram,0x00010216eaf4) */
/* WARNING: Removing unreachable block (ram,0x00010216eae4) */
/* WARNING: Removing unreachable block (ram,0x00010216ead4) */
/* WARNING: Removing unreachable block (ram,0x00010216eac4) */
/* WARNING: Removing unreachable block (ram,0x00010216eab4) */
/* WARNING: Removing unreachable block (ram,0x00010216eaa4) */
/* WARNING: Removing unreachable block (ram,0x00010216ea94) */
/* WARNING: Removing unreachable block (ram,0x00010216ea84) */
/* WARNING: Removing unreachable block (ram,0x00010216eb64) */

void FUN_10216e8e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104d5650;
  func_0x000107c613fc(&UNK_1104d5650,0x108,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  uVar2 = 0x112e5d868;
  func_0x0001000285a8(0x112e5d868,&UNK_10da64520);
  func_0x000107c613fc();
  uVar3 = 0x10216f2c0;
  func_0x0001000841fc(0x10216f2c0,puVar1,uVar2);
  func_0x000100084214(&UNK_10da644f0,0x2e,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10216eb90; end: 10216ebf3;  */

void FUN_10216eb90(void)

{
  long unaff_x20;
  
  FUN_10216e8e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100));
  return;
}



/* Entry: 10216ebf4; end: 10216ec03;  */

undefined1  [16] FUN_10216ebf4(void)

{
  return ZEXT816(0x1104d5630);
}



/* Entry: 10216ec04; end: 10216f1ab;  */

void FUN_10216ec04(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e5d870,&UNK_10da64528);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021725d4();
  func_0x000100082720("SCMemoriesSnapVideoFilterScopeExposerSubjectServiceProvider",0x3b,2);
  puVar3 = puVar2;
  FUN_102172660();
  func_0x000100082720("SCMemoriesSnapVideoFilterScopeExposerObservableServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10216e65c;
  func_0x0001000823a8(FUN_10216e65c,0);
  func_0x000100082720("SCMemoriesBackupUIScopedServicesCleanupRelayServiceProvider",0x3b,2);
  puVar5 = puVar2;
  FUN_102172488();
  func_0x000100082720("MemoriesBackupUIScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e5d878,&UNK_10da64540);
  puVar6 = &UNK_1104d5678;
  func_0x000107c613fc(&UNK_1104d5678,0x118,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 *)(puVar6 + 0x50) = param_10;
  *(undefined8 *)(puVar6 + 0x58) = param_11;
  *(undefined8 *)(puVar6 + 0x60) = param_12;
  *(undefined8 *)(puVar6 + 0x68) = param_13;
  *(undefined8 *)(puVar6 + 0x70) = param_14;
  *(undefined8 *)(puVar6 + 0x78) = param_15;
  *(undefined8 *)(puVar6 + 0x80) = param_16;
  *(undefined8 *)(puVar6 + 0x88) = param_17;
  *(undefined8 *)(puVar6 + 0x90) = param_18;
  *(undefined8 *)(puVar6 + 0x98) = param_19;
  *(undefined8 *)(puVar6 + 0xa0) = param_20;
  *(undefined8 *)(puVar6 + 0xa8) = param_21;
  *(undefined8 *)(puVar6 + 0xb0) = param_22;
  *(undefined8 *)(puVar6 + 0xb8) = param_23;
  *(undefined8 *)(puVar6 + 0xc0) = param_24;
  *(undefined8 *)(puVar6 + 200) = param_25;
  *(undefined8 *)(puVar6 + 0xd0) = param_26;
  *(undefined8 *)(puVar6 + 0xd8) = param_27;
  *(undefined8 *)(puVar6 + 0xe0) = param_28;
  *(undefined8 *)(puVar6 + 0xe8) = param_29;
  *(undefined8 *)(puVar6 + 0xf0) = param_30;
  *(undefined8 *)(puVar6 + 0xf8) = param_31;
  *(undefined8 *)(puVar6 + 0x100) = param_32;
  *(undefined8 *)(puVar6 + 0x108) = param_33;
  *(undefined8 **)(puVar6 + 0x110) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10216f338;
  func_0x0001000823a8(0x10216f338,puVar6);
  func_0x000100082720("SCMemoriesBackupUIEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e5d880,&UNK_10da64530);
  puVar6 = &UNK_1104d56a0;
  func_0x000107c613fc(&UNK_1104d56a0,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_10216f39c;
  func_0x0001000823a8(FUN_10216f39c,puVar6);
  func_0x000100082720("SCMemoriesBackupUIScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e5d7f8,&UNK_10da642d0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10216f3a8;
  func_0x0001000823a8(0x10216f3a8,pcVar7);
  func_0x000100082720("SCMemoriesBackupUIScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e5d7e8,&UNK_10da642c0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10216f3b0;
  func_0x0001000823a8(0x10216f3b0,uVar8);
  func_0x000100082720("SCMemoriesBackupUIScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104d56c8;
  func_0x000107c613fc(&UNK_1104d56c8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10216f3b8;
  func_0x0001000823a8(0x10216f3b8,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCMemoriesBackupUIScopeEntryPointProvider",0x29,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10216f1ac; end: 10216f39b;  */

void FUN_10216f1ac(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10216f39c; end: 10216f3bf;  */

void FUN_10216f39c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102171bf0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMemoriesBackupUIScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10216f3c0; end: 1021718f7;  */

void FUN_10216f3c0(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined *puVar12;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  FUN_102171b40();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_100;
  *(undefined8 *)(param_2 + 0xb0) = uStack_108;
  *(undefined8 *)(param_2 + 0xb8) = uStack_110;
  *(undefined8 *)(param_2 + 0xc0) = uStack_118;
  *(undefined8 *)(param_2 + 200) = uStack_120;
  *(undefined8 *)(param_2 + 0xd0) = uStack_128;
  *(undefined8 *)(param_2 + 0xd8) = uStack_130;
  *(undefined8 *)(param_2 + 0xe0) = uStack_138;
  *(undefined8 *)(param_2 + 0xe8) = uStack_140;
  *(undefined8 *)(param_2 + 0xf0) = uStack_148;
  *(undefined8 *)(param_2 + 0xf8) = uStack_150;
  *(undefined8 *)(param_2 + 0x100) = uStack_158;
  *(undefined8 *)(param_2 + 0x108) = uStack_160;
  *(undefined8 *)(param_2 + 0x110) = uStack_168;
  func_0x0001000285a8(0x112e5d888,&UNK_10da956c0);
  func_0x000107c610f8();
  uVar14 = uStack_78;
  func_0x000107c61174();
  uVar16 = uStack_80;
  func_0x000107c61174();
  uVar17 = uStack_88;
  func_0x000107c61174();
  uVar18 = uStack_90;
  func_0x000107c61174();
  uVar19 = uStack_98;
  func_0x000107c61174();
  uVar1 = uStack_a0;
  func_0x000107c61174();
  uVar2 = uStack_a8;
  func_0x000107c61174();
  uVar3 = uStack_b0;
  func_0x000107c61174();
  uVar4 = uStack_b8;
  func_0x000107c61174();
  uVar5 = uStack_c0;
  func_0x000107c61174();
  uVar6 = uStack_c8;
  func_0x000107c61174();
  uVar7 = uStack_d0;
  func_0x000107c61174();
  uVar8 = uStack_d8;
  func_0x000107c61174();
  uVar9 = uStack_e0;
  func_0x000107c61174();
  uVar10 = uStack_e8;
  func_0x000107c61174();
  uVar11 = uStack_f0;
  func_0x000107c61174();
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  uVar30 = uStack_148;
  func_0x000107c61174();
  uVar31 = uStack_150;
  func_0x000107c61174();
  uVar32 = uStack_158;
  func_0x000107c61174();
  uVar33 = uStack_160;
  func_0x000107c61174();
  uVar34 = uStack_168;
  func_0x000107c61174();
  uVar35 = uStack_170;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar12 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar35);
  *(undefined **)(param_2 + 0x18) = puVar12;
  puVar12 = PTR_PTR_1126a9fc8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar37 = 0xd000000000000015;
  uVar35 = uVar37;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f067580);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar35);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar35 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar36 = 0xd000000000000016;
  uVar35 = uVar36;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar35);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar35);
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef299a0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef851b0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar35);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar35);
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar36);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc7150);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar35 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc8a80);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar35);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2b490);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef384a0);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar37);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar35);
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0675a0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00d930);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar35);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar35);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar35);
  uVar15 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(uVar35);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0675d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0669d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f067600);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar35 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f067630);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d050);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar36 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar35 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f067660);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar35);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar1);
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
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61574(uStack_170);
  *param_1 = param_2;
  return;
}



/* Entry: 1021718f8; end: 102171a33;  */

void FUN_1021718f8(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  return;
}



/* Entry: 102171a34; end: 102171a3b;  */

undefined8 FUN_102171a34(void)

{
  return 0x1b;
}


