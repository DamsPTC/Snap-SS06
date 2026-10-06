/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028885ec; end: 102888623; -[_TtC37BlockedExceptionAlertScopeGraphBridge52BlockedExceptionAlertScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102888608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010288860c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028885ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec5d38));
  return;
}



/* Entry: 102888624; end: 10288864b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888624(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ec5d40),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ec5d38));
  return;
}



/* Entry: 10288864c; end: 10288866b;  */

void FUN_10288864c(void)

{
  func_0x000107c61168(&PTR_PTR_112868030);
  return;
}



/* Entry: 10288866c; end: 1028886f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10288866c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec5d70) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ec5d78);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028886f4);
  (*pcVar2)();
}



/* Entry: 1028886f4; end: 1028887db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028886f4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec5d70);
  *(undefined **)(unaff_x20 + _DAT_112ec5d70) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec5d78);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec5d78))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11055ce48;
  func_0x000107c613fc(&UNK_11055ce48,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1028887e0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1028887dc; end: 1028887e7;  */

void FUN_1028887dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028887e8; end: 102888847; -[_TtC37BlockedExceptionAlertScopeGraphBridge52SCBlockedExceptionAlertScopedServicesSaberEntryPoint init] */

void FUN_1028887e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BlockedExceptionAlertScopeGraphBridge.SCBlockedExceptionAlertScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102888814);
  (*pcVar1)();
}



/* Entry: 102888848; end: 10288887f; -[_TtC37BlockedExceptionAlertScopeGraphBridge52SCBlockedExceptionAlertScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888848(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec5d78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec5d70));
  return;
}



/* Entry: 102888880; end: 102888883;  */

void FUN_102888880(void)

{
  return;
}



/* Entry: 102888884; end: 1028888a3;  */

void FUN_102888884(void)

{
  FUN_1028886f4();
  return;
}



/* Entry: 1028888a4; end: 1028888c3;  */

void FUN_1028888a4(void)

{
  func_0x000107c61168(&PTR_PTR_1128680f8);
  return;
}



/* Entry: 1028888c4; end: 102888993;  */

undefined8 FUN_1028888c4(void)

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
  
  func_0x000107c61428(0x112ec5da8,&uStack_40,0x20,0);
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
    FUN_102888994();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102888994; end: 1028889b3;  */

void FUN_102888994(void)

{
  func_0x000107c61168(&PTR_PTR_1128681c0);
  return;
}



/* Entry: 1028889b4; end: 1028889cf;  */

void FUN_1028889b4(undefined8 param_1)

{
  func_0x0001000285a8(0x112ec5db0,&UNK_10dae6ec8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102888a3c,param_1);
  return;
}



/* Entry: 1028889d0; end: 102888a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028889d0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102888994();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ec5db8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102888a3c; end: 102888a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888a3c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102888994();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ec5db8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102888a44; end: 102888a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888a44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec5db8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102888a90; end: 102888aef; -[_TtC37BlockedExceptionAlertScopeGraphBridge45BlockedExceptionAlertScopeGraphBridgeServices init] */

void FUN_102888a90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BlockedExceptionAlertScopeGraphBridge.BlockedExceptionAlertScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102888abc);
  (*pcVar1)();
}



/* Entry: 102888af0; end: 102888aff; -[_TtC37BlockedExceptionAlertScopeGraphBridge45BlockedExceptionAlertScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec5db8));
  return;
}



/* Entry: 102888b00; end: 102888b8b;  */

void FUN_102888b00(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102888b40,0);
  return;
}



/* Entry: 102888b8c; end: 102888ba7;  */

void FUN_102888b8c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102888bf8,param_1);
  return;
}



/* Entry: 102888ba8; end: 102888bf7;  */

void FUN_102888ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102888bf8; end: 102888c2b;  */

void FUN_102888bf8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102888c2c; end: 102888c33;  */

undefined8 FUN_102888c2c(void)

{
  return 0x1b;
}



/* Entry: 102888c34; end: 102888dab;  */

void FUN_102888c34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11055ce90;
  func_0x000107c613fc(&UNK_11055ce90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102888dac,puVar1);
  return;
}



/* Entry: 102888dac; end: 102888db3;  */

void FUN_102888dac(undefined8 *param_1)

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
  func_0x000107c61428(0x112ec5da8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec5da8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11055cf68;
  func_0x000107c613fc(&UNK_11055cf68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102888e80;
  func_0x00010058fa64(0x102888e80,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102888db4; end: 102888e0f;  */

void FUN_102888db4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec5da8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec5da8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102888e10; end: 102888e87;  */

undefined ** FUN_102888e10(void)

{
  return &PTR_DAT_113066868;
}



/* Entry: 102888e88; end: 102888ecf; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888e88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec5e10;
  func_0x000107c61428(param_1 + _DAT_112ec5e10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102888ed0; end: 102888f27; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec5e10;
  func_0x000107c61428(param_1 + _DAT_112ec5e10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102888f28; end: 102888f6f; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint sCLeaveGroupAlertScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888f28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec5e18;
  func_0x000107c61428(param_1 + _DAT_112ec5e18,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102888f70; end: 102888f7b; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint setSCLeaveGroupAlertScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec5e18;
  func_0x000107c61428(param_1 + _DAT_112ec5e18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102888f7c; end: 102888fc3; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint blockedExceptionAlertScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888f7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec5e20;
  func_0x000107c61428(param_1 + _DAT_112ec5e20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102888fc4; end: 102888fcf; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint setBlockedExceptionAlertScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102888fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec5e20;
  func_0x000107c61428(param_1 + _DAT_112ec5e20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102888fd0; end: 10288902f;  */

void FUN_102888fd0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102889030; end: 1028891eb;  */

/* WARNING: Possible PIC construction at 0x000102889148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288916c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010288917c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028891c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102889180) */
/* WARNING: Removing unreachable block (ram,0x000102889170) */
/* WARNING: Removing unreachable block (ram,0x00010288914c) */
/* WARNING: Removing unreachable block (ram,0x0001028891c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102889030(void)

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
  func_0x000107c50e18();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3eb14();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10288864c();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1028888c4();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028891ec);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ec5d38) = lVar5;
      *(long *)(lVar3 + _DAT_112ec5d40) = unaff_x20;
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



/* Entry: 1028891ec; end: 102889213; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1028891ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102889030();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102889214; end: 102889257; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint end] */

void FUN_102889214(undefined8 param_1)

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



/* Entry: 102889258; end: 10288945b;  */

void FUN_102889258(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0f3bd90)) {
      uVar2 = 0xd00000000000001d;
      func_0x000107c605b8(0xd00000000000001d,0x800000010f0c4270,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0f3bd70)) &&
           (func_0x000107c605b8(0xd000000000000034,0x800000010f0c4290,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BlockedExceptionAlertScopeGraphBridge/SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x62,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10288945c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52d98();
        goto LAB_1028892e4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c583c0();
  }
LAB_1028892e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10288945c; end: 102889507; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10288945c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102889258(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102889508; end: 10288957f; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102889508(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec5e10,0);
  *(undefined8 *)(param_1 + _DAT_112ec5e18) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec5e20) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec5e28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102889580; end: 1028895b3;  */

void FUN_102889580(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028895b4; end: 10288960b; -[SCBlockedExceptionAlertScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028895e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028895e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028895b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec5e10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec5e18));
  return;
}



/* Entry: 10288960c; end: 10288962b;  */

void FUN_10288960c(void)

{
  func_0x000107c61168(&PTR_PTR_112868280);
  return;
}



/* Entry: 10288962c; end: 102889673; -[SCSCBlockedExceptionAlertScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10288962c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec5e58;
  func_0x000107c61428(param_1 + _DAT_112ec5e58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102889674; end: 1028896cb; -[SCSCBlockedExceptionAlertScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102889674(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec5e58;
  func_0x000107c61428(param_1 + _DAT_112ec5e58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028896cc; end: 1028897a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028896cc(undefined8 param_1,long param_2)

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
    FUN_1028888a4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ec5d70) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028897a4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ec5d78);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec5e60);
    *(long **)(unaff_x20 + _DAT_112ec5e60) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1028897a4; end: 1028897cb; -[SCSCBlockedExceptionAlertScopedServicesSaberEntryPoint begin] */

void FUN_1028897a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028896cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028897cc; end: 102889943;  */

/* WARNING: Possible PIC construction at 0x000102889834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028898cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102889838) */
/* WARNING: Removing unreachable block (ram,0x0001028898d0) */
/* WARNING: Removing unreachable block (ram,0x0001028898e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028897cc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec5e60);
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



/* Entry: 102889944; end: 10288994b;  */

void FUN_102889944(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10288994c; end: 10288997f; -[SCSCBlockedExceptionAlertScopedServicesSaberEntryPoint end] */

void FUN_10288994c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028897cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102889980; end: 102889a9f;  */

void FUN_102889980(long param_1,long param_2,long param_3)

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
                        "BlockedExceptionAlertScopeGraphBridge/SCSCBlockedExceptionAlertScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102889aa0);
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



/* Entry: 102889aa0; end: 102889b4b; -[SCSCBlockedExceptionAlertScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102889aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102889980(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102889b4c; end: 102889bab; -[SCSCBlockedExceptionAlertScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102889b4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec5e58,0);
  *(undefined8 *)(param_1 + _DAT_112ec5e60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102889bac; end: 102889bdf;  */

void FUN_102889bac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102889be0; end: 102889c17; -[SCSCBlockedExceptionAlertScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102889be0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec5e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec5e60));
  return;
}



/* Entry: 102889c18; end: 102889c37;  */

void FUN_102889c18(void)

{
  func_0x000107c61168(&PTR_PTR_112868350);
  return;
}



/* Entry: 102889c38; end: 102889ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102889c38(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10288a02c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ec5e98) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102889ca4; end: 102889d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102889ca4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec5e98) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102889d10; end: 102889d6f; -[_TtC42ChatActionMenuScopedFactoryServiceProvider28ChatActionMenuScopedServices init] */

void FUN_102889d10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatActionMenuScopedFactoryServiceProvider.ChatActionMenuScopedServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102889d3c);
  (*pcVar1)();
}



/* Entry: 102889d70; end: 102889d7f; -[_TtC42ChatActionMenuScopedFactoryServiceProvider28ChatActionMenuScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102889d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec5e98));
  return;
}



/* Entry: 102889d80; end: 102889deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102889d80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11055d188;
  func_0x000107c613fc(&UNK_11055d188,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10288a0c4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102889dec; end: 102889e87;  */

void FUN_102889dec(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11055d098;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11055d098;
  return;
}



/* Entry: 102889e88; end: 102889ebf;  */

void FUN_102889e88(long *param_1)

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



/* Entry: 102889ec0; end: 102889ec7;  */

undefined8 FUN_102889ec0(void)

{
  return 0x1b;
}



/* Entry: 102889ec8; end: 102889ffb;  */

void FUN_102889ec8(undefined8 *param_1)

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
  puVar1 = &UNK_11055d1b0;
  func_0x000107c613fc(&UNK_11055d1b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10288a09c;
  func_0x00010058fa64(FUN_10288a09c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102889ffc; end: 10288a02b;  */

undefined ** FUN_102889ffc(void)

{
  return &PTR_DAT_113066568;
}



/* Entry: 10288a02c; end: 10288a04b;  */

void FUN_10288a02c(void)

{
  func_0x000107c61168(&PTR_PTR_112868410);
  return;
}



/* Entry: 10288a04c; end: 10288a09b;  */

undefined1  [16] FUN_10288a04c(void)

{
  return ZEXT816(0x11055d0e8);
}



/* Entry: 10288a09c; end: 10288a0c3;  */

void FUN_10288a09c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10288a0c4; end: 10288a0c7;  */

void FUN_10288a0c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10288a0c8; end: 10288a447;  */

void FUN_10288a0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec5f00,&UNK_10dae7310);
  puVar1 = &UNK_11055d1f0;
  func_0x000107c613fc(&UNK_11055d1f0,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_15;
  *(undefined8 *)(puVar1 + 0x58) = param_18;
  *(undefined8 *)(puVar1 + 0x60) = param_10;
  *(undefined8 *)(puVar1 + 0x68) = param_11;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_17;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_13;
  *(undefined8 *)(puVar1 + 0x98) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10288a448,puVar1);
  return;
}



/* Entry: 10288a448; end: 10288a48b;  */

void FUN_10288a448(void)

{
  long unaff_x20;
  
  func_0x00010288a26c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 10288a48c; end: 10288a49b;  */

undefined1  [16] FUN_10288a48c(void)

{
  return ZEXT816(0x11055d218);
}



/* Entry: 10288a49c; end: 10288abe7;  */

void FUN_10288a49c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  code *pcVar13;
  char *pcVar14;
  undefined *puVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  undefined8 *puVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 auStack_70 [2];
  
  uVar22 = *param_2;
  func_0x0001000285a8(0x112ec5f10,&UNK_10dae7358);
  puVar1 = auStack_70;
  auStack_70[0] = uVar22;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1028921f0();
  pcVar3 = "AIRemixScopeExposerSubjectServiceProvider";
  func_0x000100082720("AIRemixScopeExposerSubjectServiceProvider",0x29,2);
  FUN_10289224c();
  pcVar4 = "ChatReactionMenuScopeExposerSubjectServiceProvider";
  func_0x000100082720("ChatReactionMenuScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1028922a8();
  pcVar5 = "ModularStickerCutoutScopeExposerSubjectServiceProvider";
  func_0x000100082720("ModularStickerCutoutScopeExposerSubjectServiceProvider",0x36,2);
  FUN_102892304();
  pcVar6 = "PlusSubscribeScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
  func_0x000102892394();
  pcVar7 = "SimpleWebBrowserScopeExposerSubjectServiceProvider";
  func_0x000100082720("SimpleWebBrowserScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1028923f0();
  func_0x000100082720("MessageActionMenuItemPluginScopeExposerSubjectServiceProvider",0x3d,2);
  puVar8 = puVar2;
  FUN_102892230();
  func_0x000100082720("AIRemixScopeExposerObservableServiceProvider",0x2c,2);
  pcVar9 = pcVar3;
  FUN_10289228c();
  func_0x000100082720("ChatReactionMenuScopeExposerObservableServiceProvider",0x35,2);
  pcVar10 = pcVar4;
  FUN_1028922e8();
  func_0x000100082720("ModularStickerCutoutScopeExposerObservableServiceProvider",0x39,2);
  pcVar11 = pcVar5;
  FUN_102892344();
  func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
  pcVar12 = pcVar6;
  FUN_1028923d4();
  func_0x000100082720("SimpleWebBrowserScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar13 = FUN_102889e88;
  func_0x0001000823a8(FUN_102889e88,0);
  func_0x000100082720("ChatActionMenuScopedServicesCleanupRelayServiceProvider",0x37,2);
  pcVar14 = pcVar7;
  FUN_102892480();
  func_0x000100082720("MessageActionMenuItemPluginScopeExposerObservableServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ec5f18,&UNK_10dae7368);
  puVar15 = &UNK_11055d260;
  func_0x000107c613fc(&UNK_11055d260,0x78,7);
  *(undefined8 *)(puVar15 + 0x10) = param_8;
  *(undefined8 *)(puVar15 + 0x18) = param_10;
  *(undefined8 *)(puVar15 + 0x20) = param_9;
  *(undefined8 *)(puVar15 + 0x28) = param_5;
  *(undefined8 **)(puVar15 + 0x30) = puVar8;
  *(undefined8 *)(puVar15 + 0x38) = param_11;
  *(undefined8 *)(puVar15 + 0x40) = param_6;
  *(undefined8 *)(puVar15 + 0x48) = param_4;
  *(undefined8 *)(puVar15 + 0x50) = param_7;
  *(char **)(puVar15 + 0x58) = pcVar11;
  *(undefined8 *)(puVar15 + 0x60) = param_12;
  *(undefined8 *)(puVar15 + 0x68) = param_3;
  *(char **)(puVar15 + 0x70) = pcVar10;
  func_0x000107c6157c();
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(pcVar10);
  pcVar16 = FUN_10288ace8;
  func_0x0001000823a8(FUN_10288ace8,puVar15);
  func_0x000100082720("MessageActionMenuItemPluginRegistryServiceProvider",0x32,2);
  pcVar17 = pcVar16;
  FUN_10289ef00();
  func_0x000100082720("MessageActionMenuItemPluginSaberServiceServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ec5f20,&UNK_10dae7370);
  puVar15 = &UNK_11055d288;
  func_0x000107c613fc(&UNK_11055d288,0x78,7);
  *(undefined8 **)(puVar15 + 0x10) = puVar1;
  *(undefined8 *)(puVar15 + 0x18) = param_8;
  *(undefined8 *)(puVar15 + 0x20) = param_13;
  *(undefined8 *)(puVar15 + 0x28) = param_14;
  *(undefined8 *)(puVar15 + 0x30) = param_15;
  *(undefined8 *)(puVar15 + 0x38) = param_16;
  *(undefined8 *)(puVar15 + 0x40) = param_17;
  *(undefined8 *)(puVar15 + 0x48) = param_18;
  *(undefined8 *)(puVar15 + 0x50) = param_19;
  *(undefined8 *)(puVar15 + 0x58) = param_20;
  *(code **)(puVar15 + 0x60) = pcVar17;
  *(char **)(puVar15 + 0x68) = pcVar9;
  *(char **)(puVar15 + 0x70) = pcVar14;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(pcVar17);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(pcVar14);
  pcVar18 = FUN_10288ad78;
  func_0x0001000823a8(FUN_10288ad78,puVar15);
  func_0x000100082720("ChatActionMenuScopeEntryPointWrapperServiceProvider",0x33,2);
  puVar19 = puVar2;
  FUN_102891d7c(puVar2,pcVar3,pcVar17,pcVar7,pcVar4,pcVar5,pcVar6);
  func_0x000100082720("ChatActionMenuScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ec5f28,&UNK_10dae7378);
  puVar15 = &UNK_11055d2b0;
  func_0x000107c613fc(&UNK_11055d2b0,0x30,7);
  *(code **)(puVar15 + 0x10) = pcVar18;
  *(undefined8 **)(puVar15 + 0x18) = puVar1;
  *(undefined8 **)(puVar15 + 0x20) = puVar19;
  *(code **)(puVar15 + 0x28) = pcVar13;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(puVar19);
  func_0x000107c6157c(pcVar13);
  pcVar20 = FUN_10288adc4;
  func_0x0001000823a8(FUN_10288adc4,puVar15);
  func_0x000100082720("ChatActionMenuScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ec5ea0,&UNK_10dae7120);
  func_0x000107c6157c(pcVar20);
  uVar22 = 0x10288add0;
  func_0x0001000823a8(0x10288add0,pcVar20);
  func_0x000100082720("ChatActionMenuScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ec5e90,&UNK_10dae7110);
  func_0x000107c6157c(uVar22);
  uVar21 = 0x10288add8;
  func_0x0001000823a8(0x10288add8,uVar22);
  func_0x000100082720("ChatActionMenuScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar15 = &UNK_11055d2d8;
  func_0x000107c613fc(&UNK_11055d2d8,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = uVar21;
  *(code **)(puVar15 + 0x18) = pcVar13;
  func_0x000107c6157c(pcVar13);
  uVar21 = 0x10288ade0;
  func_0x0001000823a8(0x10288ade0,puVar15);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(puVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(uVar22);
  func_0x000100082720("ChatActionMenuScopeEntryPointProvider",0x25,2);
  *param_1 = uVar21;
  return;
}



/* Entry: 10288abe8; end: 10288ace7;  */

void FUN_10288abe8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10288ace8; end: 10288acf3;  */

void FUN_10288ace8(void)

{
  long unaff_x20;
  
  FUN_10288b950(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10288acf4; end: 10288ad77;  */

void FUN_10288acf4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10288ad78; end: 10288ad83;  */

void FUN_10288ad78(void)

{
  long unaff_x20;
  
  FUN_10288ade8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10288ad84; end: 10288adc3;  */

void FUN_10288ad84(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
             *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10288adc4; end: 10288ade7;  */

void FUN_10288adc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10288b5bc(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("ChatActionMenuScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10288ade8; end: 10288b36b;  */

void FUN_10288ade8(long *param_1,long param_2)

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
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
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
  FUN_10288b50c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  func_0x0001000285a8(0x112ec5f30,&UNK_10db94510);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  uVar12 = uVar11;
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x18) = puVar13;
  func_0x0001000285a8(0x112ec5f38,&UNK_10dae7380);
  func_0x000107c610f8();
  uVar12 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  uVar14 = uVar12;
  func_0x00010025a71c();
  puVar15 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x20) = puVar15;
  FUN_102899ebc(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000102896b90(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                      puVar13,puVar15);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  *(undefined8 *)(param_2 + 0x10) = uVar14;
  *param_1 = param_2;
  return;
}



/* Entry: 10288b36c; end: 10288b407;  */

void FUN_10288b36c(void)

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
  return;
}



/* Entry: 10288b408; end: 10288b40f;  */

undefined8 FUN_10288b408(void)

{
  return 0x1b;
}



/* Entry: 10288b410; end: 10288b493;  */

void FUN_10288b410(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10288b54c,param_2,FUN_10288b550,param_2,FUN_10288b578,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10288b494; end: 10288b4db;  */

undefined8 FUN_10288b494(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102896fbc();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 10288b4dc; end: 10288b50b;  */

undefined ** FUN_10288b4dc(void)

{
  return &PTR_DAT_113066568;
}



/* Entry: 10288b50c; end: 10288b52b;  */

void FUN_10288b50c(void)

{
  func_0x000107c61168(&PTR_PTR_112ec5fa8);
  return;
}



/* Entry: 10288b52c; end: 10288b54f;  */

undefined1  [16] FUN_10288b52c(void)

{
  return ZEXT816(0x11055d330);
}



/* Entry: 10288b550; end: 10288b577;  */

void FUN_10288b550(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10288b578; end: 10288b57f;  */

undefined8 FUN_10288b578(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102896fbc();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 10288b580; end: 10288b5bb;  */

void FUN_10288b580(undefined8 *param_1,undefined8 param_2)

{
  FUN_10288b5bc();
  func_0x0001000a7f38("ChatActionMenuScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10288b5bc; end: 10288b7a7;  */

void FUN_10288b5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cb78;
  ppuVar4 = &PTR_DAT_113066568;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ec6068;
  func_0x0001000285a8(0x112ec6068,&UNK_10dae7518);
  func_0x0001000a6ee8(&UNK_11055d330,
                      "ChatActionMenuScopeEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_10288b81c,param_1,uVar2,&UNK_11055d330,&PTR_DAT_112ec5f40);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11055d380;
  func_0x000107c613fc(&UNK_11055d380,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11055e0a0,"ChatActionMenuScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_10288b824,puVar3,uVar2,&UNK_11055e0a0,&PTR_DAT_112ec63c0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11055d3a8;
  func_0x000107c613fc(&UNK_11055d3a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11055d128,"ChatActionMenuScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_10288b90c,puVar3,uVar2,&UNK_11055d128,&PTR_DAT_112ec5ea8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ec6070;
  func_0x0001000285a8(0x112ec6070,&UNK_10dae7520);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10288b7a8; end: 10288b81b;  */

void FUN_10288b7a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10288b948;
  func_0x0001000823a8(0x10288b948,param_3);
  func_0x000100082720("ChatActionMenuScopeEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 10288b81c; end: 10288b823;  */

void FUN_10288b81c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10288b948;
  func_0x0001000823a8();
  func_0x000100082720("ChatActionMenuScopeEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 10288b824; end: 10288b863;  */

void FUN_10288b824(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028924f4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ChatActionMenuScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10288b864; end: 10288b90b;  */

void FUN_10288b864(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11055d3d0;
  func_0x000107c613fc(&UNK_11055d3d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10288b940;
  func_0x0001000823a8(FUN_10288b940,puVar1);
  func_0x000100082720("ChatActionMenuScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10288b90c; end: 10288b913;  */

void FUN_10288b90c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11055d3d0;
  func_0x000107c613fc(&UNK_11055d3d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10288b940;
  func_0x0001000823a8(FUN_10288b940,puVar3);
  func_0x000100082720("ChatActionMenuScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10288b914; end: 10288b93f;  */

void FUN_10288b914(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10288b940; end: 10288b94f;  */

void FUN_10288b940(undefined8 *param_1)

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
  puVar1 = &UNK_11055d1b0;
  func_0x000107c613fc(&UNK_11055d1b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10288a09c;
  func_0x00010058fa64(FUN_10288a09c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


