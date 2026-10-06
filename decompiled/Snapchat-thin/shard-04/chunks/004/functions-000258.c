/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033f5848; end: 1033f589b;  */

void FUN_1033f5848(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033f589c; end: 1033f58c7;  */

void FUN_1033f589c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033f58c8; end: 1033f58cf;  */

void FUN_1033f58c8(undefined8 *param_1)

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
  puVar1 = &UNK_11064fb18;
  func_0x000107c613fc(&UNK_11064fb18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1033f4a40;
  func_0x00010058fa64(FUN_1033f4a40,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1033f58d0; end: 1033f5957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033f58d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1033f5c90();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f646b8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f646c0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033f5958);
  (*pcVar1)();
}



/* Entry: 1033f5958; end: 1033f59b7; -[_TtC29PlayGamesLensScopeGraphBridge44PlayGamesLensScopeGraphBridgeSaberEntryPoint init] */

void FUN_1033f5958(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesLensScopeGraphBridge.PlayGamesLensScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033f5984);
  (*pcVar1)();
}



/* Entry: 1033f59b8; end: 1033f59ef; -[_TtC29PlayGamesLensScopeGraphBridge44PlayGamesLensScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033f59d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033f59d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f59b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f646b8));
  return;
}



/* Entry: 1033f59f0; end: 1033f5a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f59f0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f646c0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f646b8));
  return;
}



/* Entry: 1033f5a18; end: 1033f5a37;  */

void FUN_1033f5a18(void)

{
  func_0x000107c61168(&PTR_PTR_1128d83c0);
  return;
}



/* Entry: 1033f5a38; end: 1033f5abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033f5a38(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f646f0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f646f8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033f5ac0);
  (*pcVar2)();
}



/* Entry: 1033f5ac0; end: 1033f5ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033f5ac0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f646f0);
  *(undefined **)(unaff_x20 + _DAT_112f646f0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f646f8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f646f8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11064fe28;
  func_0x000107c613fc(&UNK_11064fe28,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1033f5bac,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1033f5ba8; end: 1033f5bb3;  */

void FUN_1033f5ba8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1033f5bb4; end: 1033f5c13; -[_TtC29PlayGamesLensScopeGraphBridge42PlayGamesLensScopedServicesSaberEntryPoint init] */

void FUN_1033f5bb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesLensScopeGraphBridge.PlayGamesLensScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033f5be0);
  (*pcVar1)();
}



/* Entry: 1033f5c14; end: 1033f5c4b; -[_TtC29PlayGamesLensScopeGraphBridge42PlayGamesLensScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f5c14(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f646f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f646f0));
  return;
}



/* Entry: 1033f5c4c; end: 1033f5c4f;  */

void FUN_1033f5c4c(void)

{
  return;
}



/* Entry: 1033f5c50; end: 1033f5c6f;  */

void FUN_1033f5c50(void)

{
  FUN_1033f5ac0();
  return;
}



/* Entry: 1033f5c70; end: 1033f5c8f;  */

void FUN_1033f5c70(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8488);
  return;
}



/* Entry: 1033f5c90; end: 1033f5d5f;  */

undefined8 FUN_1033f5c90(void)

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
  
  func_0x000107c61428(0x112f64728,&uStack_40,0x20,0);
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
    FUN_1033f5d60();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1033f5d60; end: 1033f5d7f;  */

void FUN_1033f5d60(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8550);
  return;
}



/* Entry: 1033f5d80; end: 1033f5deb;  */

void FUN_1033f5d80(void)

{
  func_0x0001000285a8(0x112f64730,&UNK_10dbc0e58);
  func_0x0001000823a8(0x1033f5dc0,0);
  return;
}



/* Entry: 1033f5dec; end: 1033f5e27; -[_TtC29PlayGamesLensScopeGraphBridge37PlayGamesLensScopeGraphBridgeServices init] */

void FUN_1033f5dec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033f5e28; end: 1033f5e5b;  */

void FUN_1033f5e28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033f5e5c; end: 1033f5e63;  */

undefined8 FUN_1033f5e5c(void)

{
  return 0x1b;
}



/* Entry: 1033f5e64; end: 1033f5fdb;  */

void FUN_1033f5e64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11064fe70;
  func_0x000107c613fc(&UNK_11064fe70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1033f5fdc,puVar1);
  return;
}



/* Entry: 1033f5fdc; end: 1033f5fe3;  */

void FUN_1033f5fdc(undefined8 *param_1)

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
  func_0x000107c61428(0x112f64728,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f64728,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11064ff08;
  func_0x000107c613fc(&UNK_11064ff08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1033f6090;
  func_0x00010058fa64(0x1033f6090,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1033f5fe4; end: 1033f603f;  */

void FUN_1033f5fe4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f64728,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f64728,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1033f6040; end: 1033f6097;  */

undefined ** FUN_1033f6040(void)

{
  return &PTR_DAT_113066700;
}



/* Entry: 1033f6098; end: 1033f60df; -[SCPlayGamesLensScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6098(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64788;
  func_0x000107c61428(param_1 + _DAT_112f64788,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f60e0; end: 1033f6137; -[SCPlayGamesLensScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f60e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64788;
  func_0x000107c61428(param_1 + _DAT_112f64788,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f6138; end: 1033f617f; -[SCPlayGamesLensScopeGraphBridgeSaberEntryPoint playGamesLensScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6138(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64790;
  func_0x000107c61428(param_1 + _DAT_112f64790,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033f6180; end: 1033f61e3; -[SCPlayGamesLensScopeGraphBridgeSaberEntryPoint setPlayGamesLensScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6180(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64790;
  func_0x000107c61428(param_1 + _DAT_112f64790,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033f61e4; end: 1033f6317;  */

/* WARNING: Possible PIC construction at 0x0001033f629c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f62b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f62d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033f62a0) */
/* WARNING: Removing unreachable block (ram,0x0001033f62bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f61e4(void)

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
  func_0x000107c4e878();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1033f5a18();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1033f5c90();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033f6318);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f646b8) = lVar5;
    *(long *)(lVar4 + _DAT_112f646c0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1033f6318; end: 1033f633f; -[SCPlayGamesLensScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1033f6318(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033f61e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033f6340; end: 1033f6383; -[SCPlayGamesLensScopeGraphBridgeSaberEntryPoint end] */

void FUN_1033f6340(undefined8 param_1)

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



/* Entry: 1033f6384; end: 1033f651b;  */

void FUN_1033f6384(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0eb5c90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f14a370,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PlayGamesLensScopeGraphBridge/SCPlayGamesLensScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x52,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033f651c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57468();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033f651c; end: 1033f65c7; -[SCPlayGamesLensScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1033f651c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033f6384(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033f65c8; end: 1033f6633; -[SCPlayGamesLensScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f65c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f64788,0);
  *(undefined8 *)(param_1 + _DAT_112f64790) = 0;
  *(undefined8 *)(param_1 + _DAT_112f64798) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033f6634; end: 1033f6667;  */

void FUN_1033f6634(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033f6668; end: 1033f66af; -[SCPlayGamesLensScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033f6694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033f6698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6668(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f64788);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f64790));
  return;
}



/* Entry: 1033f66b0; end: 1033f66cf;  */

void FUN_1033f66b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8600);
  return;
}



/* Entry: 1033f66d0; end: 1033f6717; -[SCPlayGamesLensScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f66d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f647c8;
  func_0x000107c61428(param_1 + _DAT_112f647c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f6718; end: 1033f676f; -[SCPlayGamesLensScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f647c8;
  func_0x000107c61428(param_1 + _DAT_112f647c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f6770; end: 1033f6847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6770(undefined8 param_1,long param_2)

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
    FUN_1033f5c70();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f646f0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033f6848);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f646f8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f647d0);
    *(long **)(unaff_x20 + _DAT_112f647d0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1033f6848; end: 1033f686f; -[SCPlayGamesLensScopedServicesSaberEntryPoint begin] */

void FUN_1033f6848(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033f6770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033f6870; end: 1033f69e7;  */

/* WARNING: Possible PIC construction at 0x0001033f68d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f6970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033f68dc) */
/* WARNING: Removing unreachable block (ram,0x0001033f6974) */
/* WARNING: Removing unreachable block (ram,0x0001033f698c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6870(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f647d0);
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



/* Entry: 1033f69e8; end: 1033f69ef;  */

void FUN_1033f69e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1033f69f0; end: 1033f6a23; -[SCPlayGamesLensScopedServicesSaberEntryPoint end] */

void FUN_1033f69f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033f6870();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033f6a24; end: 1033f6b43;  */

void FUN_1033f6a24(long param_1,long param_2,long param_3)

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
                        "PlayGamesLensScopeGraphBridge/SCPlayGamesLensScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033f6b44);
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



/* Entry: 1033f6b44; end: 1033f6bef; -[SCPlayGamesLensScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1033f6b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033f6a24(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033f6bf0; end: 1033f6c4f; -[SCPlayGamesLensScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6bf0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f647c8,0);
  *(undefined8 *)(param_1 + _DAT_112f647d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033f6c50; end: 1033f6c83;  */

void FUN_1033f6c50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033f6c84; end: 1033f6cbb; -[SCPlayGamesLensScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6c84(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f647c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f647d0));
  return;
}



/* Entry: 1033f6cbc; end: 1033f6d33;  */

void FUN_1033f6cbc(void)

{
  func_0x000107c61168(&PTR_PTR_1128d86c8);
  return;
}



/* Entry: 1033f6d34; end: 1033f6e3b;  */

uint FUN_1033f6d34(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = *param_2;
  if (lVar3 == 0) {
    if (uVar2 == 0) {
      return 1;
    }
  }
  else if (lVar3 == 1) {
    if (uVar2 == 1) {
      return 1;
    }
  }
  else if (1 < uVar2) {
    uVar1 = 0;
    FUN_1033f9f84(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(lVar3,uVar2,uVar1);
    return (uint)lVar3 & 1;
  }
  return 0;
}



/* Entry: 1033f6e3c; end: 1033f6e93; -[_TtC19GamesLensProcessing26PlayGamesSnapCapturingImpl isRecordingVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1033f6e3c(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f64840);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_21);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  return uStack_21;
}



/* Entry: 1033f6e94; end: 1033f6f47; -[_TtC19GamesLensProcessing26PlayGamesSnapCapturingImpl isInCaptureFlow] */

uint FUN_1033f6e94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001033f6ec8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1033f6f48; end: 1033f733b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6f48(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  char *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  ulong uStack_d0;
  long lStack_c8;
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
  undefined1 uStack_70;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112f64818);
  uVar1 = ((ulong *)(unaff_x20 + _DAT_112f64818))[1];
  func_0x000107c614f0();
  uVar4 = uVar3;
  (**(code **)(uVar1 + 0x20))();
  lVar8 = _DAT_112f64860;
  if ((uVar4 & 1) == 0) {
    pcVar12 = "; dropping preview";
    uVar13 = 0xd000000000000034;
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f64860);
    func_0x000107c6157c(uVar13);
    func_0x0001000c74f0(&uStack_d0);
    func_0x000107c61574(uVar13);
    if ((uStack_d0 & 1) == 0) {
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f64840);
      func_0x000107c6157c(uVar13);
      func_0x0001000c74f0(&uStack_d0);
      func_0x000107c61574(uVar13);
      if ((uStack_d0 & 1) == 0) {
        func_0x0001000d224c(&uStack_d0);
        lVar6 = lStack_c8;
        uVar4 = uStack_d0;
        uVar5 = uStack_d0;
        func_0x000107c614f0();
        (**(code **)(lVar6 + 0x28))();
        func_0x000107c615e8(uVar4);
        if ((uVar5 & 1) != 0) {
          pcVar12 = "gnoring captureImage";
          uVar13 = 0xd00000000000002a;
          goto LAB_1033f701c;
        }
        lVar6 = *(long *)(*(long *)(unaff_x20 + _DAT_112f64800) + _DAT_112f66f20);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar6 != 0) {
          lVar7 = lVar6;
          func_0x000107c3d114();
          func_0x000107c61180();
          func_0x000107c615e8(lVar6);
          lVar6 = lVar7;
          func_0x000107c3f5a4();
          func_0x000107c61180();
          func_0x000107c615e8(lVar7);
          if (lVar6 != 0) {
            uVar13 = *(undefined8 *)(unaff_x20 + lVar8);
            func_0x000107c6157c(uVar13);
            func_0x000100075034(0x1033fa3c4,0,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(uVar13);
            if (param_1 != 0) {
              lVar8 = param_1;
              func_0x000107c61174(param_1);
              func_0x0001000d224c(&uStack_d0);
              uVar4 = uStack_d0;
              func_0x000107c614f0(uStack_d0);
              (**(code **)(lStack_c8 + 0x10))(lVar8,uVar4,lStack_c8);
              func_0x000107c615e8(uStack_d0);
              func_0x000107c61170(lVar8);
            }
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_70 = 5;
            (**(code **)(uVar1 + 0x28))(&uStack_d0,uVar3,uVar1);
            lVar8 = lVar6;
            func_0x000107c3f5ac(lVar6);
            func_0x000107c61180();
            puVar9 = &UNK_1106500d0;
            func_0x000107c613fc(&UNK_1106500d0,0x18,7);
            func_0x000107c61614(puVar9 + 0x10);
            puVar10 = &UNK_110650260;
            func_0x000107c613fc(&UNK_110650260,0x28,7);
            *(undefined **)(puVar10 + 0x10) = puVar9;
            *(long *)(puVar10 + 0x18) = param_1;
            *(long *)(puVar10 + 0x20) = lVar2;
            pcStack_e8 = FUN_1033fa07c;
            puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_100 = 0x42000000;
            puStack_f8 = &UNK_1019535c4;
            puStack_f0 = &UNK_110650278;
            ppuVar11 = &puStack_108;
            puStack_e0 = puVar10;
            func_0x000107c60bc4(ppuVar11);
            puVar9 = puStack_e0;
            func_0x000107c61174(param_1);
            func_0x000107c61574(puVar9);
            func_0x000107c5dc64(lVar8);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(lVar8);
            return;
          }
        }
        pcVar12 = "CaptureHandler not available";
        uVar13 = 0xd00000000000001c;
      }
      else {
        pcVar12 = "Recording in progress - cannot capture image";
        uVar13 = 0xd00000000000002c;
      }
      func_0x000104366fc4(uVar13,(ulong)(pcVar12 + -0x20) | 0x8000000000000000,lVar2,
                          &PTR_DAT_110651ad8);
      return;
    }
    pcVar12 = "gress - cannot capture image";
    uVar13 = 0xd000000000000021;
  }
LAB_1033f701c:
  func_0x0001007d6c6c(1,uVar13,(ulong)pcVar12 | 0x8000000000000000,lVar2,&PTR_DAT_110651ad8);
  return;
}



/* Entry: 1033f733c; end: 1033f7367; -[_TtC19GamesLensProcessing26PlayGamesSnapCapturingImpl captureImage] */

void FUN_1033f733c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033f6f48(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033f7368; end: 1033f73bb; -[_TtC19GamesLensProcessing26PlayGamesSnapCapturingImpl captureImageWithShareSticker:] */

/* WARNING: Possible PIC construction at 0x0001033f73a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033f73a8) */

void FUN_1033f7368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1033f6f48(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033f73bc; end: 1033f787f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f73bc(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [24];
  ulong uStack_b8;
  long lStack_b0;
  undefined1 uStack_58;
  
  func_0x000107c61428(param_3 + 0x10,auStack_d0,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar7 = _DAT_113075098;
  if (param_3 != 0) {
    if (param_2 == 0) {
      if (param_1 != 0) {
        func_0x000107c61428(param_1 + _DAT_113075098,auStack_f0,0,0);
        lVar7 = *(long *)(param_1 + lVar7);
        if (lVar7 != 0) {
          plVar5 = (long *)(param_3 + _DAT_112f64828);
          func_0x0001000a8868(plVar5,plVar5[3]);
          uVar6 = *(undefined8 *)(*plVar5 + 0x10);
          func_0x000107c61174(param_1);
          func_0x000107c61174();
          uVar2 = 0x73736563637573;
          func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
          func_0x000106b9df10(uVar6,uVar2,1);
          func_0x000107c61170(uVar2);
          puVar3 = &UNK_1106500d0;
          func_0x000107c613fc(&UNK_1106500d0,0x18,7);
          func_0x000107c61614(puVar3 + 0x10,param_3);
          puVar4 = &UNK_1106502b0;
          func_0x000107c613fc(&UNK_1106502b0,0x28,7);
          *(undefined **)(puVar4 + 0x10) = puVar3;
          *(long *)(puVar4 + 0x18) = lVar7;
          *(undefined8 *)(puVar4 + 0x20) = param_4;
          func_0x000107c61174(param_4);
          func_0x000107c61174(lVar7);
          uVar2 = 0xc;
          func_0x0001001ca524(0xc,4,0x38,4,0,0,&UNK_10dbc1078,puVar4,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_1);
          func_0x000107c61170(lVar7);
          func_0x000107c61574(puVar4);
          func_0x000107c61574(uVar2);
          return;
        }
      }
      func_0x000104366fc4(0xd000000000000027,0x800000010f14aa10,param_5,&PTR_DAT_110651ad8);
      plVar5 = (long *)(param_3 + _DAT_112f64828);
      func_0x0001000a8868(plVar5,plVar5[3]);
      uVar6 = *(undefined8 *)(*plVar5 + 0x10);
      uVar2 = 0x6567616d695f6f6e;
      func_0x000107c5fadc(0x6567616d695f6f6e,0xe800000000000000);
      func_0x000106b9df10(uVar6,uVar2,1);
      func_0x000107c61170(uVar2);
      uVar2 = *(undefined8 *)(param_3 + _DAT_112f64860);
      func_0x000107c6157c(uVar2);
      func_0x000100075034(0x1033fa388,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar2);
      func_0x0001000d224c(&uStack_b8);
      uVar1 = uStack_b8;
      func_0x000107c614f0(uStack_b8);
      (**(code **)(lStack_b0 + 0x30))();
      func_0x000107c615e8(uVar1);
      uVar2 = *(undefined8 *)(param_3 + _DAT_112f64818);
      lVar7 = ((undefined8 *)(param_3 + _DAT_112f64818))[1];
      uVar6 = uVar2;
      func_0x000107c614f0(uVar2);
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
      uStack_58 = 2;
      pcVar8 = *(code **)(lVar7 + 0x28);
      func_0x000107c615f0(uVar2);
      (*pcVar8)(&uStack_b8,uVar6,lVar7);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(uVar2);
    }
    else {
      uStack_b8 = 0;
      lStack_b0 = 0xe000000000000000;
      func_0x000107c614b0(param_2);
      func_0x000107c602fc(0x12);
      func_0x000107c6142c(lStack_b0);
      uStack_b8 = 0xd000000000000010;
      lStack_b0 = -0x7ffffffef0eb55c0;
      func_0x000107c614cc(param_2,auStack_f8,auStack_110);
      uVar2 = uStack_100;
      func_0x000107c60640(uStack_108,uStack_100);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar2);
      lVar7 = lStack_b0;
      func_0x0001007d6c6c(3,uStack_b8,lStack_b0,param_5,&PTR_DAT_110651ad8);
      func_0x000107c6142c(lVar7);
      plVar5 = (long *)(param_3 + _DAT_112f64828);
      func_0x0001000a8868(plVar5,plVar5[3]);
      uVar6 = *(undefined8 *)(*plVar5 + 0x10);
      uVar2 = 0x6572756c696166;
      func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
      func_0x000106b9df10(uVar6,uVar2,1);
      func_0x000107c61170(uVar2);
      uVar2 = *(undefined8 *)(param_3 + _DAT_112f64860);
      func_0x000107c6157c(uVar2);
      func_0x000100075034(FUN_1033fa374,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar2);
      func_0x0001000d224c(&uStack_b8);
      lVar7 = lStack_b0;
      uVar1 = uStack_b8;
      func_0x000107c614f0(uStack_b8);
      (**(code **)(lVar7 + 0x30))();
      func_0x000107c615e8(uVar1);
      uVar2 = *(undefined8 *)(param_3 + _DAT_112f64818);
      lVar7 = ((undefined8 *)(param_3 + _DAT_112f64818))[1];
      uVar6 = uVar2;
      func_0x000107c614f0(uVar2);
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
      uStack_58 = 2;
      pcVar8 = *(code **)(lVar7 + 0x28);
      func_0x000107c615f0(uVar2);
      (*pcVar8)(&uStack_b8,uVar6,lVar7);
      func_0x000107c615e8(uVar2);
      func_0x000107c614ac(param_2);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 1033f7880; end: 1033f78ef;  */

void FUN_1033f7880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1033f78f0,uVar1,uVar2);
  return;
}



/* Entry: 1033f78f0; end: 1033f79bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f78f0(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe0) = lVar5;
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(lVar5 + _DAT_112f64810);
    lVar5 = ((undefined8 *)(lVar5 + _DAT_112f64810))[1];
    func_0x000107c614f0(uVar2);
    piVar4 = *(int **)(lVar5 + 0x40);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1033f79c0;
                    /* WARNING: Could not recover jumptable at 0x0001033f799c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(*(undefined8 *)(unaff_x22 + 0xb8),uVar2,lVar5);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x0001033f79bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1033f79c0; end: 1033f7a0b;  */

void FUN_1033f79c0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1033f7a0c,*(undefined8 *)(lVar1 + 0xd0),*(undefined8 *)(lVar1 + 0xd8));
  return;
}



/* Entry: 1033f7a0c; end: 1033f7bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f7a0c(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  if (*(long *)(unaff_x22 + 0xc0) != 0) {
    func_0x0001000d224c(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar7;
    func_0x000107c614f0(uVar7);
    piVar5 = *(int **)(lVar2 + 0x18);
    iVar1 = *piVar5;
    plVar3 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x100) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1033f7bc8;
                    /* WARNING: Could not recover jumptable at 0x0001033f7ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))(uVar7,lVar2);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar6 = *(long *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(lVar6 + _DAT_112f64860);
  func_0x000107c6157c(uVar7);
  func_0x000100075034(0x1033fa39c,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar7);
  func_0x0001000d224c(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar4 = uVar7;
  func_0x000107c614f0(uVar7);
  (**(code **)(lVar2 + 8))(uVar8,uVar9,uVar4,lVar2);
  func_0x000107c615e8(uVar7);
  uVar7 = *(undefined8 *)(lVar6 + _DAT_112f64818);
  lVar2 = ((undefined8 *)(lVar6 + _DAT_112f64818))[1];
  uVar4 = uVar7;
  func_0x000107c614f0(uVar7);
  *(undefined1 *)(unaff_x22 + 0x10) = 1;
  *(undefined1 *)(unaff_x22 + 0x70) = 2;
  pcVar10 = *(code **)(lVar2 + 0x28);
  func_0x000107c615f0(uVar7);
  (*pcVar10)((undefined1 *)(unaff_x22 + 0x10),uVar4,lVar2);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x0001033f7bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1033f7bc8; end: 1033f7c13;  */

void FUN_1033f7bc8(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x100));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1033f7c14,*(undefined8 *)(lVar2 + 0xd0),*(undefined8 *)(lVar2 + 0xd8));
  return;
}



/* Entry: 1033f7c14; end: 1033f7d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f7c14(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar3 = *(long *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112f64860);
  func_0x000107c6157c(uVar4);
  func_0x000100075034(0x1033fa39c,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  func_0x0001000d224c(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar2 = uVar4;
  func_0x000107c614f0(uVar4);
  (**(code **)(lVar1 + 8))(uVar5,uVar6,uVar2,lVar1);
  func_0x000107c615e8(uVar4);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112f64818);
  lVar1 = ((undefined8 *)(lVar3 + _DAT_112f64818))[1];
  uVar2 = uVar4;
  func_0x000107c614f0(uVar4);
  *(undefined1 *)(unaff_x22 + 0x10) = 1;
  *(undefined1 *)(unaff_x22 + 0x70) = 2;
  pcVar7 = *(code **)(lVar1 + 0x28);
  func_0x000107c615f0(uVar4);
  (*pcVar7)((undefined1 *)(unaff_x22 + 0x10),uVar2,lVar1);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001033f7d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1033f7d48; end: 1033f818b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033f7d48(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  char *pcVar11;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [32];
  ulong uStack_c8;
  long lStack_c0;
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
  undefined1 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f64818);
  uVar1 = ((ulong *)(unaff_x20 + _DAT_112f64818))[1];
  func_0x000107c614f0();
  uVar5 = uVar4;
  (**(code **)(uVar1 + 0x20))();
  lVar2 = _DAT_112f64840;
  if ((uVar5 & 1) == 0) {
    pcVar11 = "Stopping video capture";
    uVar13 = 0xd000000000000039;
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f64840);
    func_0x000107c6157c(uVar13);
    func_0x0001000c74f0(&uStack_c8);
    func_0x000107c61574(uVar13);
    if ((uStack_c8 & 1) != 0) {
      pcVar11 = "ing video capture";
      uVar6 = 2;
      uVar13 = 0xd000000000000017;
      goto LAB_1033f7e24;
    }
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f64860);
    func_0x000107c6157c(uVar13);
    func_0x0001000c74f0(&uStack_c8);
    func_0x000107c61574(uVar13);
    if ((uStack_c8 & 1) == 0) {
      func_0x0001000d224c(&uStack_c8);
      uVar5 = uStack_c8;
      func_0x000107c614f0();
      (**(code **)(lStack_c0 + 0x28))();
      func_0x000107c615e8(uStack_c8);
      if ((uVar5 & 1) == 0) {
        lVar7 = *(long *)(*(long *)(unaff_x20 + _DAT_112f64800) + _DAT_112f66f20);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar7 != 0) {
          lVar8 = lVar7;
          func_0x000107c3d114();
          func_0x000107c61180();
          func_0x000107c615e8(lVar7);
          lVar7 = lVar8;
          func_0x000107c3f5a4();
          func_0x000107c61180();
          func_0x000107c615e8(lVar8);
          if (lVar7 != 0) {
            func_0x000107c615e8(lVar7);
            uVar13 = *(undefined8 *)(unaff_x20 + lVar2);
            func_0x000107c6157c(uVar13);
            func_0x000100075034(0x1033fa3b0,0,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(uVar13);
            lVar2 = _DAT_112f64858;
            func_0x000107c61428(unaff_x20 + _DAT_112f64858,auStack_e8,1,0);
            uVar13 = *(undefined8 *)(unaff_x20 + lVar2);
            *(undefined8 *)(unaff_x20 + lVar2) = 1;
            func_0x0001033f9f74(uVar13);
            uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f64850);
            *(undefined8 *)(unaff_x20 + _DAT_112f64850) = 0;
            func_0x000107c61170(uVar13);
            uStack_c8 = 1;
            uStack_b8 = 0;
            lStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_70 = 0;
            uStack_68 = 5;
            (**(code **)(uVar1 + 0x28))(&uStack_c8,uVar4,uVar1);
            uVar4 = *(ulong *)(unaff_x20 + _DAT_112f64810);
            uVar1 = ((ulong *)(unaff_x20 + _DAT_112f64810))[1];
            func_0x000107c614f0();
            uVar5 = uVar4;
            (**(code **)(uVar1 + 8))();
            *(byte *)(unaff_x20 + _DAT_112f64848) = (byte)uVar5 & 1;
            if ((uVar5 & 1) == 0) {
              uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f64830);
              puVar9 = &UNK_1106500d0;
              func_0x000107c613fc(&UNK_1106500d0,0x18,7);
              func_0x000107c61614(puVar9 + 0x10);
              uStack_f8 = 0x1033fa448;
              puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_110 = 0x42000000;
              puStack_108 = &UNK_1000f6b44;
              puStack_100 = &UNK_1106500e8;
              ppuVar10 = &puStack_118;
              puStack_f0 = puVar9;
              func_0x000107c60bc4(ppuVar10);
              func_0x000107c61574(puStack_f0);
              func_0x000107c4e524(uVar13);
              func_0x000107c60bd0(ppuVar10);
              return 1;
            }
            puVar9 = &UNK_1106500d0;
            func_0x000107c613fc(&UNK_1106500d0,0x18,7);
            func_0x000107c61614(puVar9 + 0x10);
            pcVar12 = *(code **)(uVar1 + 0x18);
            func_0x000107c6157c(puVar9);
            (*pcVar12)(0x1033f9fe0,puVar9,uVar4,uVar1);
            func_0x000107c61578(puVar9,2);
            return 1;
          }
        }
        func_0x000104366fc4(0xd00000000000001c,0x800000010f14a5d0,lVar3,&PTR_DAT_110651ad8);
        return 0;
      }
      pcVar11 = "CaptureHandler not available";
      uVar13 = 0xd000000000000030;
    }
    else {
      pcVar11 = "ng video capture";
      uVar13 = 0xd000000000000031;
    }
  }
  uVar6 = 1;
LAB_1033f7e24:
  func_0x0001007d6c6c(uVar6,uVar13,(ulong)pcVar11 | 0x8000000000000000,lVar3,&PTR_DAT_110651ad8);
  return 0;
}



/* Entry: 1033f818c; end: 1033f82ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f818c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112f64830);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1106500d0;
    func_0x000107c613fc(&UNK_1106500d0,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618(param_1);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c61170(param_1);
    pcStack_70 = FUN_1033f9fe8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110650110;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 1033f82ac; end: 1033f89b3;  */

/* WARNING: Removing unreachable block (ram,0x0001033f8994) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f82ac(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  undefined1 auStack_e0 [24];
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar6 = _DAT_112f64858;
  func_0x000107c61428(unaff_x20 + _DAT_112f64858,auStack_e0,1,0);
  uVar14 = *(ulong *)(unaff_x20 + lVar6);
  if (1 < uVar14) {
    *(undefined8 *)(unaff_x20 + lVar6) = 0;
    puStack_c8 = (undefined *)0x0;
    lStack_c0 = 0xe000000000000000;
    func_0x000107c602fc(0x57);
    uVar9 = 0x800000010f14a790;
    func_0x000107c5fb78(0xd000000000000054,0x800000010f14a790);
    uVar4 = uVar14;
    func_0x000107c417f0(uVar14);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    func_0x000107c5fb78(uVar5,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    lVar6 = lStack_c0;
    func_0x0001007d6c6c(1,puStack_c8,lStack_c0,lVar2,&PTR_DAT_110651ad8);
    func_0x000107c6142c(lVar6);
    lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f64810))[1];
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f64810));
    (**(code **)(lVar6 + 0x30))();
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f64840);
    func_0x000107c6157c(uVar9);
    func_0x000100075034(0x1033fa3d8,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar9);
    if (lRam0000000112f64898 != -1) {
      func_0x000107c61568(0x112f64898,0x1033f6d08);
    }
    FUN_1033f9f84(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar14;
    func_0x000107c60118(uVar14,uRam0000000113807308);
    if ((uVar4 & 1) == 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f64818);
      lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f64818))[1];
      func_0x000107c614f0(uVar9);
      puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
      uStack_68 = 3;
      (**(code **)(lVar6 + 0x28))(&puStack_c8,uVar9,lVar6);
    }
    func_0x0001033f9f74(uVar14);
    return;
  }
  *(undefined8 *)(unaff_x20 + lVar6) = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f64860);
  func_0x000107c6157c(uVar9);
  func_0x0001000c74f0(&puStack_c8);
  func_0x000107c61574(uVar9);
  if (((ulong)puStack_c8 & 1) == 0) {
    func_0x0001000d224c(&puStack_c8);
    puVar8 = puStack_c8;
    puVar3 = puStack_c8;
    func_0x000107c614f0();
    (**(code **)(lStack_c0 + 0x28))();
    func_0x000107c615e8(puVar8);
    if (((ulong)puVar3 & 1) == 0) {
      lVar6 = *(long *)(*(long *)(unaff_x20 + _DAT_112f64800) + _DAT_112f66f20);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar15 = lVar6;
        func_0x000107c3d114();
        func_0x000107c61180();
        func_0x000107c615e8(lVar6);
        lVar6 = lVar15;
        func_0x000107c3f5a4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar15);
        if (lVar6 != 0) {
          lVar13 = lVar6;
          func_0x000107c614f0();
          func_0x000107c61440();
          lVar15 = 0;
          if (lVar13 != 0) {
            if (*(char *)(unaff_x20 + _DAT_112f64848) == '\x01') {
              func_0x000107c61174();
              ppuVar11 = &PTR_DAT_1106500b0;
              lVar15 = unaff_x20;
            }
            else {
              lVar15 = 0;
              ppuVar11 = (undefined **)0x0;
            }
            lVar7 = lVar6;
            func_0x000107c614f0(lVar6);
            pcVar16 = *(code **)(lVar13 + 0x10);
            func_0x000107c615f4(lVar6,2);
            (*pcVar16)(lVar15,ppuVar11,lVar7,lVar13);
            func_0x000107c615e8(lVar6);
            lVar15 = lVar6;
          }
          lVar7 = _DAT_112f64848;
          if (*(char *)(unaff_x20 + _DAT_112f64848) == '\x01') {
            func_0x000107c615f0(lVar15);
            lVar12 = lVar15;
          }
          else {
            lVar12 = 0;
            lVar13 = 0;
          }
          lVar1 = unaff_x20 + _DAT_112f64868;
          *(long *)(lVar1 + 8) = lVar13;
          func_0x000107c61604(lVar1,lVar12);
          func_0x000107c615e8(lVar12);
          puVar8 = PTR_PTR_1126ae560;
          func_0x000107c610f8();
          func_0x000107c453e4();
          uVar9 = 0;
          func_0x0001043d1774(0);
          func_0x000107c610f8();
          func_0x000107c453e4();
          if ((*(byte *)(unaff_x20 + lVar7) & 1) == 0) {
            uVar14 = (ulong)*(byte *)(unaff_x20 + _DAT_112f64820);
          }
          else {
            uVar14 = 1;
          }
          func_0x0001043cf7b4(uVar14);
          func_0x000107c61170();
          func_0x0001043cfc54();
          lVar13 = lVar6;
          func_0x000107c5bc38(lVar6);
          func_0x000107c61180();
          uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f64838);
          *(undefined **)(unaff_x20 + _DAT_112f64838) = puVar8;
          func_0x000107c61174(puVar8);
          func_0x000107c61170(uVar10);
          func_0x0001007d6c6c(1,0xd000000000000015,0x800000010f14a720,lVar2,&PTR_DAT_110651ad8);
          if ((*(byte *)(unaff_x20 + lVar7) & 1) != 0) {
            lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f64810))[1];
            func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f64810));
            (**(code **)(lVar2 + 0x20))();
          }
          puVar3 = &UNK_1106500d0;
          func_0x000107c613fc(&UNK_1106500d0,0x18,7);
          func_0x000107c61614(puVar3 + 0x10);
          pcStack_a8 = FUN_1033fa000;
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          lStack_c0 = 0x42000000;
          puStack_b8 = &UNK_10102ec58;
          puStack_b0 = &UNK_110650138;
          ppuVar11 = &puStack_c8;
          puStack_a0 = puVar3;
          func_0x000107c60bc4(ppuVar11);
          func_0x000107c61574(puStack_a0);
          func_0x000107c5dc64(lVar13);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c615e8(lVar6);
          func_0x000107c615e8(lVar15);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar14);
          func_0x000107c61170(lVar13);
          return;
        }
      }
      func_0x0001007d6c6c(2,0xd000000000000042,0x800000010f14a690,lVar2,&PTR_DAT_110651ad8);
      lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f64810))[1];
      func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f64810));
      (**(code **)(lVar6 + 0x30))();
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f64840);
      func_0x000107c6157c(uVar10);
      uVar9 = 0x1033fa400;
      goto LAB_1033f83e8;
    }
  }
  func_0x0001007d6c6c(1,0x1000000000000049,0x800000010f14a740,lVar2,&PTR_DAT_110651ad8);
  lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f64810))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f64810));
  (**(code **)(lVar6 + 0x30))();
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f64840);
  func_0x000107c6157c(uVar10);
  uVar9 = 0x1033fa3ec;
LAB_1033f83e8:
  func_0x000100075034(uVar9,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar10);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f64818);
  lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f64818))[1];
  func_0x000107c614f0(uVar9);
  puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
  uStack_68 = 3;
  (**(code **)(lVar6 + 0x28))(&puStack_c8,uVar9,lVar6);
  return;
}



/* Entry: 1033f89b4; end: 1033f8a07;  */

void FUN_1033f89b4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1033f82ac();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1033f8a08; end: 1033f8a3b; -[_TtC19GamesLensProcessing26PlayGamesSnapCapturingImpl startVideoCapture] */

uint FUN_1033f8a08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033f7d48();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1033f8a3c; end: 1033f8b2b;  */

void FUN_1033f8a3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_50 + -extraout_x8;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c5edb4(puVar2,param_1);
    }
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_1 == 0,1,lVar1);
    FUN_1033f8b2c(puVar2,param_2);
    func_0x000107c61170(param_3);
    func_0x0001000293e4(puVar2);
  }
  return;
}



/* Entry: 1033f8b2c; end: 1033f8cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f8b2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c614f0();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f64840);
  func_0x000107c6157c(uVar9);
  func_0x000100075034(0x1033fa414,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar9);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f64838);
  *(undefined8 *)(unaff_x20 + _DAT_112f64838) = 0;
  func_0x000107c61170(uVar9);
  lVar1 = unaff_x20 + _DAT_112f64868;
  lVar5 = lVar1;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar11 = *(long *)(lVar1 + 8);
    lVar6 = lVar5;
    func_0x000107c614f0();
    (**(code **)(lVar11 + 0x10))(0,0,lVar6,lVar11);
    func_0x000107c615e8(lVar5);
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61604(lVar1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f64850);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f64830);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f64810);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f64810))[1];
  uVar7 = uVar10;
  func_0x000107c61174(uVar10);
  func_0x0001000d224c(&uStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f64818);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f64818))[1];
  puVar8 = &UNK_110650170;
  func_0x000107c613fc(&UNK_110650170,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar12;
  func_0x000107c615f0(uVar12);
  FUN_1033f8d84(param_1,param_2,uVar10,uVar9,uVar3,uStack_78,uStack_70,uVar2,uVar4,0x1033fa008,
                puVar8);
  func_0x000107c615e8(uStack_78);
  func_0x000107c61574(puVar8);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 1033f8cf0; end: 1033f8d83;  */

void FUN_1033f8cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110650228;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1033f8d84; end: 1033f94db;  */

/* WARNING: Possible PIC construction at 0x0001033f902c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f9160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f9094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f9228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033f9098) */
/* WARNING: Removing unreachable block (ram,0x0001033f9164) */
/* WARNING: Removing unreachable block (ram,0x0001033f9030) */
/* WARNING: Removing unreachable block (ram,0x0001033f916c) */
/* WARNING: Removing unreachable block (ram,0x0001033f922c) */
/* WARNING: Removing unreachable block (ram,0x0001033f9338) */
/* WARNING: Removing unreachable block (ram,0x0001033f9230) */
/* WARNING: Removing unreachable block (ram,0x0001033f91b8) */

void FUN_1033f8d84(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  long lVar8;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  char cStack_c0;
  
  uStack_130 = param_12;
  uStack_138 = param_11;
  lVar2 = 0x112d36580;
  uStack_148 = param_7;
  uStack_140 = param_6;
  uStack_108 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  puStack_100 = auStack_150 + -extraout_x8;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lStack_128 = (long)(auStack_150 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = uRam0000000113807308;
  if (lRam0000000112f64898 != -1) {
    func_0x000107c61568(0x112f64898,0x1033f6d08);
    uVar5 = uRam0000000113807308;
  }
  uRam0000000113807308 = uVar5;
  if (param_3 != 0) {
    uVar3 = 0;
    FUN_1033f9f84(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uStack_120 = uVar3;
    func_0x000107c61174(uVar5);
    uStack_118 = param_8;
    uStack_110 = param_5;
    func_0x000107c61174();
    uVar4 = param_3;
    func_0x000107c60118();
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar5);
    if ((uVar4 & 1) != 0) {
      uVar5 = 1;
      lVar2 = -0x2fffffffffffffd3;
      lVar8 = -0x7ffffffef0eb5740;
      goto code_r0x0001007d6c6c;
    }
  }
  puVar1 = puStack_100;
  if (param_2 == 0) {
    func_0x000100029394(uStack_108,puStack_100);
    puVar7 = puVar1;
    (**(code **)(lVar8 + 0x30))(puVar1,1,lVar2);
    if ((int)puVar7 == 1) {
      func_0x0001000293e4(puVar1);
      lVar2 = -0x2fffffffffffffdc;
      lVar8 = -0x7ffffffef0eb5810;
      uVar5 = 2;
    }
    else {
      (**(code **)(lVar8 + 0x20))(lStack_128,puVar1,lVar2);
      lVar2 = 0x6163206f65646956;
      lVar8 = -0x11ff9b9a8d8a8b90;
      uVar5 = 1;
    }
  }
  else {
    lStack_d8 = param_2;
    func_0x000107c614b0(param_2);
    func_0x000107c614b0(param_2);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar6 = &lStack_d0;
    func_0x000107c6147c(plVar6,&lStack_d8,uVar5,&UNK_110652ef8,6);
    if ((int)plVar6 != 0) {
      if (((cStack_c0 == '\x02') && (lStack_d0 == 3)) && (lStack_c8 == 0)) {
        uVar5 = 2;
        lVar2 = -0x2fffffffffffffc6;
        lVar8 = -0x7ffffffef0eb5780;
        goto code_r0x0001007d6c6c;
      }
      func_0x0001033fa020();
    }
    lStack_d0 = 0;
    lStack_c8 = 0xe000000000000000;
    func_0x000107c602fc(0x18);
    func_0x000107c6142c(lStack_c8);
    lStack_d0 = -0x2fffffffffffffea;
    lStack_c8 = -0x7ffffffef0eb57a0;
    func_0x000107c614cc(param_2,auStack_e0,auStack_f8);
    uVar5 = uStack_e8;
    func_0x000107c60640(uStack_f0,uStack_e8);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar5);
    uVar5 = 3;
    lVar2 = lStack_d0;
    lVar8 = lStack_c8;
  }
code_r0x0001007d6c6c:
  (*(code *)(undefined *)0x10340ebe8)(uVar5,lVar2,lVar8,0,unaff_x20);
  return;
}



/* Entry: 1033f94dc; end: 1033f9603;  */

void FUN_1033f94dc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [96];
  undefined1 uStack_48;
  
  func_0x000107c61428(param_1 + 0x10,auStack_c0,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    func_0x000107c61428(param_2 + 0x10,auStack_d8,0,0);
    lVar2 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar4 = *(long *)(param_2 + 0x18);
      lVar3 = lVar1;
      func_0x000107c614f0(lVar1);
      (**(code **)(lVar5 + 0x20))(param_3,lVar3,lVar5);
      lVar5 = lVar2;
      func_0x000107c614f0(lVar2);
      auStack_a8[0] = 1;
      uStack_48 = 3;
      (**(code **)(lVar4 + 0x28))(auStack_a8,lVar5,lVar4);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar2);
      return;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x0001007d6c6c(1,0xd000000000000042,0x800000010f14a8f0,param_4,&PTR_DAT_110651ad8);
  return;
}



/* Entry: 1033f9604; end: 1033f99df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f9604(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  undefined1 uStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar7 = _DAT_112f64858;
  func_0x000107c61428(unaff_x20 + _DAT_112f64858,&uStack_c8,0x21,0);
  lVar6 = *(long *)(unaff_x20 + lVar7);
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      *(ulong *)(unaff_x20 + lVar7) = param_1;
      func_0x000107c61174(param_1);
    }
    else {
      FUN_1033f9f84(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      if (lRam0000000112f64898 != -1) {
        func_0x000107c61568(0x112f64898,0x1033f6d08);
      }
      uVar5 = param_1;
      func_0x000107c60118(param_1,uRam0000000113807308);
      if ((uVar5 & 1) != 0) {
        *(ulong *)(unaff_x20 + lVar7) = param_1;
        func_0x000107c61174(param_1);
        func_0x0001033f9f74(lVar6);
      }
    }
    func_0x000107c614a8(&uStack_c8);
    uStack_c8 = 0;
    uStack_c0 = 0xe000000000000000;
    func_0x000107c602fc(0x43);
    uVar4 = 0x800000010f14a4e0;
    func_0x000107c5fb78(0xd000000000000041,0x800000010f14a4e0);
    func_0x000107c417f0(param_1);
    func_0x000107c61180();
    uVar5 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(uVar5,uVar4);
    func_0x000107c6142c(uVar4);
    uVar4 = uStack_c0;
    func_0x0001007d6c6c(1,uStack_c8,uStack_c0,lVar1,&PTR_DAT_110651ad8);
    func_0x000107c6142c(uVar4);
    return;
  }
  func_0x000107c614a8(&uStack_c8);
  FUN_1033f9f84(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  if (lRam0000000112f64898 != -1) {
    func_0x000107c61568(0x112f64898,0x1033f6d08);
  }
  uVar4 = uRam0000000113807308;
  uVar5 = param_1;
  func_0x000107c60118(param_1,uRam0000000113807308);
  lVar7 = _DAT_112f64850;
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112f64850);
    if (uVar5 == 0) {
      uVar2 = 0;
LAB_1033f9870:
      *(ulong *)(unaff_x20 + lVar7) = param_1;
      goto LAB_1033f9874;
    }
    FUN_1033f9f84(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = uVar4;
    func_0x000107c61174(uVar4);
    func_0x000107c61174();
    uVar3 = uVar5;
    func_0x000107c60118();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + lVar7);
      goto LAB_1033f9870;
    }
  }
  else {
    lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f64810))[1];
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f64810));
    (**(code **)(lVar7 + 0x30))();
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f64850);
    *(ulong *)(unaff_x20 + _DAT_112f64850) = param_1;
LAB_1033f9874:
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_1);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112f64838);
  if (lVar7 == 0) {
    func_0x0001007d6c6c(2,0xd000000000000039,0x800000010f14a530,lVar1,&PTR_DAT_110651ad8);
    return;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112f64838) = 0;
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112f64850);
  if (uVar5 != 0) {
    FUN_1033f9f84(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar4);
    func_0x000107c61174();
    uVar3 = uVar5;
    func_0x000107c60118();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    if ((uVar3 & 1) != 0) goto LAB_1033f9948;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f64818);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f64818))[1];
  func_0x000107c614f0(uVar4);
  uStack_c8 = 2;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = 5;
  (**(code **)(lVar1 + 0x28))(&uStack_c8,uVar4,lVar1);
LAB_1033f9948:
  func_0x000107c3fefc(lVar7);
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 1033f99e0; end: 1033f9bd3; -[_TtC19GamesLensProcessing26PlayGamesSnapCapturingImpl stopVideoCapture] */

void FUN_1033f99e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174(param_1);
  func_0x0001007d6c6c(1,0xd000000000000016,0x800000010f14a570,uVar1,&PTR_DAT_110651ad8);
  if (lRam0000000112f648a0 != -1) {
    func_0x000107c61568(0x112f648a0,0x1033f6cdc);
  }
  FUN_1033f9604(uRam0000000113807310);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033f9bd4; end: 1033f9bfb; -[_TtC19GamesLensProcessing26PlayGamesSnapCapturingImpl cancelVideoCapture] */

void FUN_1033f9bd4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001033f9a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033f9bfc; end: 1033f9c5b; -[_TtC19GamesLensProcessing26PlayGamesSnapCapturingImpl init] */

void FUN_1033f9bfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesLensProcessing.PlayGamesSnapCapturingImpl",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033f9c28);
  (*pcVar1)();
}



/* Entry: 1033f9c5c; end: 1033f9d33; -[_TtC19GamesLensProcessing26PlayGamesSnapCapturingImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033f9c5c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f64800));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f64808));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f64810));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f64818));
  func_0x0001000834e4(param_1 + _DAT_112f64828);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f64830));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f64838));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f64840));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f64850));
  func_0x0001033f9f74(*(undefined8 *)(param_1 + _DAT_112f64858));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f64860));
  param_1 = param_1 + _DAT_112f64868;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1033f9d34; end: 1033f9da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f9d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f64810);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f64810))[1];
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x38))(param_1,param_2,param_3,param_4,uVar2,lVar1);
  return;
}



/* Entry: 1033f9da4; end: 1033f9dc3;  */

void FUN_1033f9da4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8788);
  return;
}



/* Entry: 1033f9dc4; end: 1033f9dd7;  */

void FUN_1033f9dc4(ulong *param_1)

{
  if (*param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1033f9dd8; end: 1033f9ebb;  */

ulong * FUN_1033f9dd8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 2) {
    if (uVar1 < 2) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61174();
    }
  }
  else if (uVar1 < 2) {
    func_0x000107c61170(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
  }
  return param_1;
}



/* Entry: 1033f9ebc; end: 1033f9f83;  */

int FUN_1033f9ebc(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 2;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1033f9f84; end: 1033f9fc3;  */

void FUN_1033f9f84(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1033f9fc4; end: 1033f9fe7;  */

void FUN_1033f9fc4(long param_1,long param_2)

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



/* Entry: 1033f9fe8; end: 1033f9fff;  */

void FUN_1033f9fe8(void)

{
  FUN_1033f89b4();
  return;
}



/* Entry: 1033fa000; end: 1033fa037;  */

void FUN_1033fa000(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c5edb4(puVar3,param_1);
    }
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,param_1 == 0,1,lVar2);
    FUN_1033f8b2c(puVar3,param_2);
    func_0x000107c61170(lVar1);
    func_0x0001000293e4(puVar3);
  }
  return;
}



/* Entry: 1033fa038; end: 1033fa07b;  */

void FUN_1033fa038(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [96];
  undefined1 uStack_48;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xffffffffffffff8));
  func_0x000107c61428(lVar1 + 0x10,auStack_c0,0,0);
  lVar3 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar1 + 0x18);
    func_0x000107c61428(lVar2 + 0x10,auStack_d8,0,0);
    lVar1 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar6 = *(long *)(lVar2 + 0x18);
      lVar2 = lVar3;
      func_0x000107c614f0(lVar3);
      (**(code **)(lVar7 + 0x20))(unaff_x20 + uVar5,lVar2,lVar7);
      lVar2 = lVar1;
      func_0x000107c614f0(lVar1);
      auStack_a8[0] = 1;
      uStack_48 = 3;
      (**(code **)(lVar6 + 0x28))(auStack_a8,lVar2,lVar6);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar1);
      return;
    }
    func_0x000107c615e8(lVar3);
  }
  func_0x0001007d6c6c(1,0xd000000000000042,0x800000010f14a8f0,uVar4,&PTR_DAT_110651ad8);
  return;
}



/* Entry: 1033fa07c; end: 1033fa087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fa07c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [24];
  ulong uStack_b8;
  long lStack_b0;
  undefined1 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_d0,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar8 = _DAT_113075098;
  if (lVar2 != 0) {
    if (param_2 == 0) {
      if (param_1 != 0) {
        func_0x000107c61428(param_1 + _DAT_113075098,auStack_f0,0,0);
        lVar8 = *(long *)(param_1 + lVar8);
        if (lVar8 != 0) {
          plVar6 = (long *)(lVar2 + _DAT_112f64828);
          func_0x0001000a8868(plVar6,plVar6[3]);
          uVar10 = *(undefined8 *)(*plVar6 + 0x10);
          func_0x000107c61174(param_1);
          func_0x000107c61174();
          uVar7 = 0x73736563637573;
          func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
          func_0x000106b9df10(uVar10,uVar7,1);
          func_0x000107c61170(uVar7);
          puVar4 = &UNK_1106500d0;
          func_0x000107c613fc(&UNK_1106500d0,0x18,7);
          func_0x000107c61614(puVar4 + 0x10,lVar2);
          puVar5 = &UNK_1106502b0;
          func_0x000107c613fc(&UNK_1106502b0,0x28,7);
          *(undefined **)(puVar5 + 0x10) = puVar4;
          *(long *)(puVar5 + 0x18) = lVar8;
          *(undefined8 *)(puVar5 + 0x20) = uVar3;
          func_0x000107c61174(uVar3);
          func_0x000107c61174(lVar8);
          uVar3 = 0xc;
          func_0x0001001ca524(0xc,4,0x38,4,0,0,&UNK_10dbc1078,puVar5,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(param_1);
          func_0x000107c61170(lVar8);
          func_0x000107c61574(puVar5);
          func_0x000107c61574(uVar3);
          return;
        }
      }
      func_0x000104366fc4(0xd000000000000027,0x800000010f14aa10,uVar7,&PTR_DAT_110651ad8);
      plVar6 = (long *)(lVar2 + _DAT_112f64828);
      func_0x0001000a8868(plVar6,plVar6[3]);
      uVar7 = *(undefined8 *)(*plVar6 + 0x10);
      uVar3 = 0x6567616d695f6f6e;
      func_0x000107c5fadc(0x6567616d695f6f6e,0xe800000000000000);
      func_0x000106b9df10(uVar7,uVar3,1);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(lVar2 + _DAT_112f64860);
      func_0x000107c6157c(uVar3);
      func_0x000100075034(0x1033fa388,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar3);
      func_0x0001000d224c(&uStack_b8);
      uVar1 = uStack_b8;
      func_0x000107c614f0(uStack_b8);
      (**(code **)(lStack_b0 + 0x30))();
      func_0x000107c615e8(uVar1);
      uVar3 = *(undefined8 *)(lVar2 + _DAT_112f64818);
      lVar8 = ((undefined8 *)(lVar2 + _DAT_112f64818))[1];
      uVar7 = uVar3;
      func_0x000107c614f0(uVar3);
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
      uStack_58 = 2;
      pcVar9 = *(code **)(lVar8 + 0x28);
      func_0x000107c615f0(uVar3);
      (*pcVar9)(&uStack_b8,uVar7,lVar8);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(uVar3);
    }
    else {
      uStack_b8 = 0;
      lStack_b0 = 0xe000000000000000;
      func_0x000107c614b0(param_2);
      func_0x000107c602fc(0x12);
      func_0x000107c6142c(lStack_b0);
      uStack_b8 = 0xd000000000000010;
      lStack_b0 = -0x7ffffffef0eb55c0;
      func_0x000107c614cc(param_2,auStack_f8,auStack_110);
      uVar3 = uStack_100;
      func_0x000107c60640(uStack_108,uStack_100);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar3);
      lVar8 = lStack_b0;
      func_0x0001007d6c6c(3,uStack_b8,lStack_b0,uVar7,&PTR_DAT_110651ad8);
      func_0x000107c6142c(lVar8);
      plVar6 = (long *)(lVar2 + _DAT_112f64828);
      func_0x0001000a8868(plVar6,plVar6[3]);
      uVar7 = *(undefined8 *)(*plVar6 + 0x10);
      uVar3 = 0x6572756c696166;
      func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
      func_0x000106b9df10(uVar7,uVar3,1);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(lVar2 + _DAT_112f64860);
      func_0x000107c6157c(uVar3);
      func_0x000100075034(FUN_1033fa374,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar3);
      func_0x0001000d224c(&uStack_b8);
      lVar8 = lStack_b0;
      uVar1 = uStack_b8;
      func_0x000107c614f0(uStack_b8);
      (**(code **)(lVar8 + 0x30))();
      func_0x000107c615e8(uVar1);
      uVar3 = *(undefined8 *)(lVar2 + _DAT_112f64818);
      lVar8 = ((undefined8 *)(lVar2 + _DAT_112f64818))[1];
      uVar7 = uVar3;
      func_0x000107c614f0(uVar3);
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
      uStack_58 = 2;
      pcVar9 = *(code **)(lVar8 + 0x28);
      func_0x000107c615f0(uVar3);
      (*pcVar9)(&uStack_b8,uVar7,lVar8);
      func_0x000107c615e8(uVar3);
      func_0x000107c614ac(param_2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1033fa088; end: 1033fa0f3;  */

void FUN_1033fa088(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1033fa0f4;
  plVar3[0x17] = lVar1;
  plVar3[0x18] = lVar4;
  plVar3[0x16] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x19] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x1a] = lVar1;
  plVar3[0x1b] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1033f78f0,lVar1,lVar2);
  return;
}



/* Entry: 1033fa0f4; end: 1033fa12f;  */

void FUN_1033fa0f4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001033fa12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1033fa130; end: 1033fa153;  */

undefined8 FUN_1033fa130(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1033fa154; end: 1033fa16b;  */

void FUN_1033fa154(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 1033fa16c; end: 1033fa267;  */

ulong * FUN_1033fa16c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61174();
    }
  }
  else if (uVar1 < 0xffffffff) {
    func_0x000107c61170(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
  }
  return param_1;
}



/* Entry: 1033fa268; end: 1033fa373;  */

int FUN_1033fa268(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 1033fa374; end: 1033fa427;  */

void FUN_1033fa374(void)

{
  func_0x000100d475c4();
  return;
}



/* Entry: 1033fa428; end: 1033fa44b;  */

void FUN_1033fa428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1033fa44c; end: 1033fa457; -[_TtC19GamesLensProcessing28PlayGamesSnapCapturingRouter isInCaptureFlow] */

uint FUN_1033fa44c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_1033fa458();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}


