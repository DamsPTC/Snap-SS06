/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103395200; end: 10339521f;  */

void FUN_103395200(void)

{
  func_0x000107c61168(&PTR_PTR_1128d4260);
  return;
}



/* Entry: 103395220; end: 1033952a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103395220(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60038) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f60040);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033952a8);
  (*pcVar2)();
}



/* Entry: 1033952a8; end: 10339538f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033952a8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f60038);
  *(undefined **)(unaff_x20 + _DAT_112f60038) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f60040);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f60040))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106498d8;
  func_0x000107c613fc(&UNK_1106498d8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103395394,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103395390; end: 10339539b;  */

void FUN_103395390(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10339539c; end: 1033953fb; -[_TtC33PasskeyManagementScopeGraphBridge48SCPasskeyManagementScopedServicesSaberEntryPoint init] */

void FUN_10339539c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PasskeyManagementScopeGraphBridge.SCPasskeyManagementScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033953c8);
  (*pcVar1)();
}



/* Entry: 1033953fc; end: 103395433; -[_TtC33PasskeyManagementScopeGraphBridge48SCPasskeyManagementScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033953fc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f60040));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60038));
  return;
}



/* Entry: 103395434; end: 103395437;  */

void FUN_103395434(void)

{
  return;
}



/* Entry: 103395438; end: 103395457;  */

void FUN_103395438(void)

{
  FUN_1033952a8();
  return;
}



/* Entry: 103395458; end: 103395477;  */

void FUN_103395458(void)

{
  func_0x000107c61168(&PTR_PTR_1128d4328);
  return;
}



/* Entry: 103395478; end: 103395547;  */

undefined8 FUN_103395478(void)

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
  
  func_0x000107c61428(0x112f60070,&uStack_40,0x20,0);
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
    FUN_103395548();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103395548; end: 103395567;  */

void FUN_103395548(void)

{
  func_0x000107c61168(&PTR_PTR_1128d43f0);
  return;
}



/* Entry: 103395568; end: 10339558b;  */

void FUN_103395568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110649920;
  func_0x0001000285a8(0x112f60078,&UNK_10dbbbc58);
  func_0x000107c613fc(&UNK_110649920,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103395610,puVar1);
  return;
}



/* Entry: 10339558c; end: 10339560f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10339558c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_103395548();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f60080) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f60088) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103395610; end: 103395617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395610(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_103395548();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f60080) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f60088) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 103395618; end: 10339567b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395618(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60080) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f60088) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10339567c; end: 1033956db; -[_TtC33PasskeyManagementScopeGraphBridge41PasskeyManagementScopeGraphBridgeServices init] */

void FUN_10339567c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PasskeyManagementScopeGraphBridge.PasskeyManagementScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033956a8);
  (*pcVar1)();
}



/* Entry: 1033956dc; end: 103395753; -[_TtC33PasskeyManagementScopeGraphBridge41PasskeyManagementScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033956f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033956fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033956dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f60080));
  return;
}



/* Entry: 103395754; end: 10339575f;  */

void FUN_103395754(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103395760,param_1);
  return;
}



/* Entry: 103395760; end: 10339581f;  */

void FUN_103395760(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 103395820; end: 10339582b;  */

void FUN_103395820(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103395b50,param_1);
  return;
}



/* Entry: 10339582c; end: 103395883;  */

void FUN_10339582c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 103395884; end: 1033958af;  */

undefined8 FUN_103395884(void)

{
  return 0x1b;
}



/* Entry: 1033958b0; end: 10339592f;  */

void FUN_1033958b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 103395930; end: 103395a27;  */

void FUN_103395930(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f60070,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f60070,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110649a60;
  func_0x000107c613fc(&UNK_110649a60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103395b48;
  func_0x00010058fa64(0x103395b48,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103395a28; end: 103395a53;  */

void FUN_103395a28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103395a54; end: 103395a5b;  */

void FUN_103395a54(undefined8 *param_1)

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
  func_0x000107c61428(0x112f60070,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f60070,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110649a60;
  func_0x000107c613fc(&UNK_110649a60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103395b48;
  func_0x00010058fa64(0x103395b48,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103395a5c; end: 103395ab7;  */

void FUN_103395a5c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f60070,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f60070,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103395ab8; end: 103395b5b;  */

undefined ** FUN_103395ab8(void)

{
  return &PTR_DAT_113066df0;
}



/* Entry: 103395b5c; end: 103395ba3; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395b5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f600e0;
  func_0x000107c61428(param_1 + _DAT_112f600e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103395ba4; end: 103395bfb; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f600e0;
  func_0x000107c61428(param_1 + _DAT_112f600e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103395bfc; end: 103395c43; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint sCPasskeyAlertViewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395bfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f600e8;
  func_0x000107c61428(param_1 + _DAT_112f600e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103395c44; end: 103395c4f; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint setSCPasskeyAlertViewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f600e8;
  func_0x000107c61428(param_1 + _DAT_112f600e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103395c50; end: 103395c97; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint sCPasskeyEnrollmentScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395c50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f600f0;
  func_0x000107c61428(param_1 + _DAT_112f600f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103395c98; end: 103395ca3; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint setSCPasskeyEnrollmentScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f600f0;
  func_0x000107c61428(param_1 + _DAT_112f600f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103395ca4; end: 103395ceb; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint passkeyManagementScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395ca4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f600f8;
  func_0x000107c61428(param_1 + _DAT_112f600f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103395cec; end: 103395cf7; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint setPasskeyManagementScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395cec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f600f8;
  func_0x000107c61428(param_1 + _DAT_112f600f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103395cf8; end: 103395d57;  */

void FUN_103395cf8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 103395d58; end: 103395f8f;  */

/* WARNING: Possible PIC construction at 0x000103395ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103395ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103395ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103395f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103395f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103395f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103395f04) */
/* WARNING: Removing unreachable block (ram,0x000103395ef4) */
/* WARNING: Removing unreachable block (ram,0x000103395ed8) */
/* WARNING: Removing unreachable block (ram,0x000103395ec8) */
/* WARNING: Removing unreachable block (ram,0x000103395f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103395d58(void)

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
  func_0x000107c51150();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51154();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c4e3fc();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_103395200();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_103395478();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103395f90);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112f60000) = lVar5;
        *(long *)(lVar4 + _DAT_112f60008) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103395f90; end: 103395fb7; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103395f90(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103395d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103395fb8; end: 103395ffb; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint end] */

void FUN_103395fb8(undefined8 param_1)

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



/* Entry: 103395ffc; end: 10339626b;  */

void FUN_103395ffc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0eb9ee0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f146120,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001f;
        if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef0eb9ec0)) ||
           (func_0x000107c605b8(0xd00000000000001f,0x800000010f146140,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c586fc();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0eb9ea0)) &&
             (func_0x000107c605b8(0xd000000000000030,0x800000010f146160,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PasskeyManagementScopeGraphBridge/SCPasskeyManagementScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x5a,2,0x41,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10339626c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c57264();
        }
        goto LAB_103396088;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c586f8();
  }
LAB_103396088:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10339626c; end: 103396317; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10339626c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103395ffc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103396318; end: 10339639b; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103396318(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f600e0,0);
  *(undefined8 *)(param_1 + _DAT_112f600e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f600f0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f600f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f60100) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10339639c; end: 1033963cf;  */

void FUN_10339639c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033963d0; end: 103396437; -[SCPasskeyManagementScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033963fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010339641c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103396400) */
/* WARNING: Removing unreachable block (ram,0x000103396420) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033963d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f600e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f600e8));
  return;
}



/* Entry: 103396438; end: 103396457;  */

void FUN_103396438(void)

{
  func_0x000107c61168(&PTR_PTR_1128d44b8);
  return;
}



/* Entry: 103396458; end: 10339649f; -[SCSCPasskeyManagementScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103396458(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f60130;
  func_0x000107c61428(param_1 + _DAT_112f60130,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033964a0; end: 1033964f7; -[SCSCPasskeyManagementScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033964a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f60130;
  func_0x000107c61428(param_1 + _DAT_112f60130,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033964f8; end: 1033965cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033964f8(undefined8 param_1,long param_2)

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
    FUN_103395458();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f60038) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033965d0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f60040);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f60138);
    *(long **)(unaff_x20 + _DAT_112f60138) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1033965d0; end: 1033965f7; -[SCSCPasskeyManagementScopedServicesSaberEntryPoint begin] */

void FUN_1033965d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033964f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033965f8; end: 10339676f;  */

/* WARNING: Possible PIC construction at 0x000103396660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033966f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103396664) */
/* WARNING: Removing unreachable block (ram,0x0001033966fc) */
/* WARNING: Removing unreachable block (ram,0x000103396714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033965f8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f60138);
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



/* Entry: 103396770; end: 103396777;  */

void FUN_103396770(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103396778; end: 1033967ab; -[SCSCPasskeyManagementScopedServicesSaberEntryPoint end] */

void FUN_103396778(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033965f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033967ac; end: 1033968cb;  */

void FUN_1033967ac(long param_1,long param_2,long param_3)

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
                        "PasskeyManagementScopeGraphBridge/SCSCPasskeyManagementScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x35,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033968cc);
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



/* Entry: 1033968cc; end: 103396977; -[SCSCPasskeyManagementScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1033968cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033967ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103396978; end: 1033969d7; -[SCSCPasskeyManagementScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103396978(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f60130,0);
  *(undefined8 *)(param_1 + _DAT_112f60138) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033969d8; end: 103396a0b;  */

void FUN_1033969d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103396a0c; end: 103396a43; -[SCSCPasskeyManagementScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103396a0c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f60130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60138));
  return;
}



/* Entry: 103396a44; end: 103396a63;  */

void FUN_103396a44(void)

{
  func_0x000107c61168(&PTR_PTR_1128d4590);
  return;
}



/* Entry: 103396a64; end: 103396af7;  */

void FUN_103396a64(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    FUN_103396af8(param_4,param_5,param_2,param_3);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103396af8; end: 103396f77;  */

void FUN_103396af8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar9 = param_2;
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100bc7fa4();
  if ((*(byte *)(unaff_x20 + 0x58) & 1) != 0) {
    (*param_3)(0,2);
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x58) = 1;
  func_0x000107c4be4c(*(undefined8 *)(unaff_x20 + 0x50));
  lVar1 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lStack_a0 = 0;
    uVar10 = 0xe000000000000000;
    uStack_98 = uVar9;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c43f7c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lStack_a0 = lVar2;
    func_0x000107c5faec();
    uStack_98 = uVar9;
    func_0x000107c61170(lVar2);
    uVar10 = uVar9;
  }
  lVar1 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c198();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      goto LAB_103396c18;
    }
  }
  lVar1 = 0;
  uStack_98 = 0xe000000000000000;
LAB_103396c18:
  plVar3 = (long *)(unaff_x20 + 0x10);
  func_0x0001000a8868(plVar3,*(undefined8 *)(unaff_x20 + 0x28));
  puVar4 = &UNK_110649b50;
  func_0x000107c613fc(&UNK_110649b50,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_110649ba0;
  func_0x000107c613fc(&UNK_110649ba0,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(code **)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_1;
  *(undefined8 *)(puVar5 + 0x30) = param_2;
  lVar12 = *plVar3;
  puVar6 = PTR_PTR_1126ad1e8;
  func_0x000107c610f8(PTR_PTR_1126ad1e8);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar4);
  func_0x000107c453e4(puVar6);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c57260(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(lVar1,uStack_98);
  lVar2 = lVar1;
  func_0x000106b236f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c54080(puVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c5fadc(lStack_a0,uVar10);
  func_0x000107c5345c(puVar6);
  func_0x000107c61170(lStack_a0);
  func_0x000106b23798();
  func_0x000107c61180();
  lVar1 = *(long *)(lVar12 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61428(puVar4 + 0x10,&puStack_90,0,0);
    puVar8 = puVar4 + 0x10;
    func_0x000107c61648();
    if (puVar8 == (undefined *)0x0) {
      (*param_3)();
      func_0x000107c61574(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lStack_a0);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uStack_98);
    }
    else {
      uVar11 = *(undefined8 *)(puVar8 + 0x38);
      uVar9 = uVar11;
      func_0x000107c614f0(uVar11);
      func_0x000107c615f0(uVar11);
      func_0x000100bc7fa4(uVar9);
      func_0x000107c615e8(uVar11);
      puVar8[0x58] = 0;
      (*param_3)(0,0);
      uVar11 = *(undefined8 *)(puVar8 + 0x50);
      func_0x000107c615f0(uVar11);
      uVar9 = 0x6f707365725f6f6e;
      func_0x000107c5fadc(0x6f707365725f6f6e,0xeb0000000065736e);
      func_0x000107c4be48(uVar11);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lStack_a0);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uStack_98);
      func_0x000107c61574(puVar8);
      func_0x000107c615e8(uVar11);
      func_0x000107c61170(uVar9);
    }
  }
  else {
    pcStack_70 = FUN_1033974a0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1033973c4;
    puStack_78 = &UNK_110649bb8;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    puVar8 = puStack_68;
    func_0x000107c61174(puVar6);
    func_0x000107c61174(lStack_a0);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar8);
    func_0x000107c5087c(lVar1);
    func_0x000107c61574(puVar5);
    func_0x000107c6142c(uVar10);
    func_0x000107c6142c(uStack_98);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lStack_a0);
    func_0x000107c61170(lStack_a0);
  }
  return;
}



/* Entry: 103396f78; end: 10339729f;  */

void FUN_103396f78(ulong param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    (*param_4)();
    return;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  uVar3 = uVar5;
  func_0x000107c614f0(uVar5);
  func_0x000107c615f0(uVar5);
  func_0x000100bc7fa4(uVar3);
  func_0x000107c615e8(uVar5);
  *(undefined1 *)(param_3 + 0x58) = 0;
  if (param_1 == 0) {
    (*param_4)(0,0);
    uVar3 = *(undefined8 *)(param_3 + 0x50);
    func_0x000107c615f0(uVar3);
    param_1 = 0x6f707365725f6f6e;
    func_0x000107c5fadc(0x6f707365725f6f6e,0xeb0000000065736e);
    func_0x000107c4be48(uVar3);
    func_0x000107c61574(param_3);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c61174();
    uVar6 = param_1;
    func_0x000107c44aa4();
    if ((uVar6 & 1) == 0) {
      (*param_4)(0,0);
      uVar5 = *(undefined8 *)(param_3 + 0x50);
      func_0x000107c615f0(uVar5);
      uVar3 = 0x6c757365725f6f6e;
      func_0x000107c5fadc(0x6c757365725f6f6e,0xe900000000000074);
      func_0x000107c4be48(uVar5);
      func_0x000107c61574(param_3);
      func_0x000107c615e8(uVar5);
    }
    else {
      uVar6 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103397298);
        (*pcVar1)();
      }
      uVar2 = uVar6;
      func_0x000107c5bd10();
      func_0x000107c61170(uVar6);
      if ((int)uVar2 == 1) {
        (*param_4)(0,1);
        func_0x000107c4be50(*(undefined8 *)(param_3 + 0x50));
        func_0x000107c61574(param_3);
        goto LAB_103397270;
      }
      uVar6 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10339729c);
        (*pcVar1)();
      }
      uVar2 = uVar6;
      func_0x000107c44f70();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (uVar2 == 0) {
        uVar6 = 0;
        puVar7 = (undefined1 *)0x0;
      }
      else {
        uVar6 = uVar2;
        func_0x000107c5faec(uVar2);
        func_0x000107c61170(uVar2);
      }
      func_0x000107c61434(puVar7);
      (*param_4)(uVar6,puVar7);
      func_0x000107c6142c(puVar7);
      uVar5 = *(undefined8 *)(param_3 + 0x50);
      func_0x000107c615f0(uVar5);
      uVar6 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033972a0);
        (*pcVar1)();
      }
      func_0x000107c5bd10();
      func_0x000107c61170(uVar6);
      puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      uVar3 = 0x635f737574617473;
      func_0x000107c5fadc(0x635f737574617473,0xec0000005f65646f);
      func_0x000107c6142c(0xec0000005f65646f);
      func_0x000107c4be48(uVar5);
      func_0x000107c6142c(puVar7);
      func_0x000107c61574(param_3);
      func_0x000107c615e8(uVar5);
    }
    func_0x000107c61170(uVar3);
  }
LAB_103397270:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1033972a0; end: 1033972e3;  */

void FUN_1033972a0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033972e4; end: 1033973c3;  */

/* WARNING: Possible PIC construction at 0x0001033973a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033973a4) */

void FUN_1033972e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  func_0x000107c614f0(uVar4);
  puVar1 = &UNK_110649b50;
  func_0x000107c613fc(&UNK_110649b50,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar3);
  puVar2 = &UNK_110649b78;
  func_0x000107c613fc(&UNK_110649b78,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_2);
  func_0x00010090569c(FUN_10339745c,puVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1033973c4; end: 10339743b;  */

/* WARNING: Possible PIC construction at 0x000103397420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103397424) */

void FUN_1033973c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10339743c; end: 10339745b;  */

void FUN_10339743c(void)

{
  func_0x000107c61168(&PTR_PTR_112f601a8);
  return;
}



/* Entry: 10339745c; end: 10339746b;  */

void FUN_10339745c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    (*pcVar2)();
  }
  else {
    FUN_103396af8(uVar3,uVar5,pcVar2,uVar1);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 10339746c; end: 10339749f;  */

void FUN_10339746c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033974a0; end: 1033974cb;  */

void FUN_1033974a0(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 *puVar8;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  puVar8 = auStack_68;
  func_0x000107c61428(lVar2 + 0x10,puVar8,0,0,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    (*pcVar1)();
    return;
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x38);
  uVar4 = uVar6;
  func_0x000107c614f0(uVar6);
  func_0x000107c615f0(uVar6);
  func_0x000100bc7fa4(uVar4);
  func_0x000107c615e8(uVar6);
  *(undefined1 *)(lVar2 + 0x58) = 0;
  if (param_1 == 0) {
    (*pcVar1)(0,0);
    uVar4 = *(undefined8 *)(lVar2 + 0x50);
    func_0x000107c615f0(uVar4);
    param_1 = 0x6f707365725f6f6e;
    func_0x000107c5fadc(0x6f707365725f6f6e,0xeb0000000065736e);
    func_0x000107c4be48(uVar4);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(uVar4);
  }
  else {
    func_0x000107c61174();
    uVar7 = param_1;
    func_0x000107c44aa4();
    if ((uVar7 & 1) == 0) {
      (*pcVar1)(0,0);
      uVar6 = *(undefined8 *)(lVar2 + 0x50);
      func_0x000107c615f0(uVar6);
      uVar4 = 0x6c757365725f6f6e;
      func_0x000107c5fadc(0x6c757365725f6f6e,0xe900000000000074);
      func_0x000107c4be48(uVar6);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(uVar6);
    }
    else {
      uVar7 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103397298);
        (*pcVar1)();
      }
      uVar3 = uVar7;
      func_0x000107c5bd10();
      func_0x000107c61170(uVar7);
      if ((int)uVar3 == 1) {
        (*pcVar1)(0,1);
        func_0x000107c4be50(*(undefined8 *)(lVar2 + 0x50));
        func_0x000107c61574(lVar2);
        goto LAB_103397270;
      }
      uVar7 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10339729c);
        (*pcVar1)();
      }
      uVar3 = uVar7;
      func_0x000107c44f70();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (uVar3 == 0) {
        uVar7 = 0;
        puVar8 = (undefined1 *)0x0;
      }
      else {
        uVar7 = uVar3;
        func_0x000107c5faec(uVar3);
        func_0x000107c61170(uVar3);
      }
      func_0x000107c61434(puVar8);
      (*pcVar1)(uVar7,puVar8);
      func_0x000107c6142c(puVar8);
      uVar6 = *(undefined8 *)(lVar2 + 0x50);
      func_0x000107c615f0(uVar6);
      uVar7 = param_1;
      func_0x000107c506c8();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033972a0);
        (*pcVar1)();
      }
      func_0x000107c5bd10();
      func_0x000107c61170(uVar7);
      puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      uVar4 = 0x635f737574617473;
      func_0x000107c5fadc(0x635f737574617473,0xec0000005f65646f);
      func_0x000107c6142c(0xec0000005f65646f);
      func_0x000107c4be48(uVar6);
      func_0x000107c6142c(puVar8);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(uVar6);
    }
    func_0x000107c61170(uVar4);
  }
LAB_103397270:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1033974cc; end: 10339750f;  */

void FUN_1033974cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103397510; end: 103397643;  */

long FUN_103397510(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x68);
  lVar1 = lVar3;
  if (lVar3 == 1) {
    lVar1 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c3e270();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x000107c4f800(lVar2,param_2,2,0x33,1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
    *(long *)(unaff_x20 + 0x68) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000100d459c4(uVar4);
  }
  func_0x000100d459d4(lVar3);
  return lVar1;
}



/* Entry: 103397644; end: 103397853;  */

long FUN_103397644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar1 = unaff_x20;
  FUN_103397854();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(long *)(unaff_x20 + 0x58) = lVar1;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x70) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar3 = PTR_PTR_1126a5e38;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c49084();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  return unaff_x20;
}



/* Entry: 103397854; end: 103397873;  */

void FUN_103397854(void)

{
  func_0x000107c61168(&PTR_PTR_1128d4650);
  return;
}



/* Entry: 103397874; end: 103397d0f;  */

/* WARNING: Possible PIC construction at 0x000103397af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103397b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103397bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103397cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103397cc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103397bc0) */
/* WARNING: Removing unreachable block (ram,0x000103397b6c) */
/* WARNING: Removing unreachable block (ram,0x000103397af4) */
/* WARNING: Removing unreachable block (ram,0x000103397d0c) */
/* WARNING: Removing unreachable block (ram,0x000103397b28) */
/* WARNING: Removing unreachable block (ram,0x000103397cb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103397874(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long alStack_a0 [6];
  long lStack_70;
  undefined **ppuStack_68;
  
  FUN_103397510();
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x0001033975c4();
  if (lVar1 != 0) {
    alStack_a0[1] = *(undefined8 *)(unaff_x20 + 0x58);
    func_0x000107c3e2c0(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113067250));
    lVar2 = 0;
    func_0x0001033974f0();
    lVar8 = lVar2;
    func_0x000107c613fc();
    *(long *)(lVar8 + 0x10) = lVar1;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113083770);
    func_0x000107c6157c();
    func_0x000107c61174();
    alStack_a0[2] = uVar5;
    func_0x000107c61174();
    func_0x000107c61174();
    alStack_a0[0] = lVar1;
    func_0x000107c44fe4();
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126ad1f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuStack_68 = &PTR_DAT_110649be0;
    lVar4 = 0;
    alStack_a0[3] = lVar8;
    lStack_70 = lVar2;
    FUN_10339743c();
    lVar1 = lVar4;
    func_0x000107c613fc();
    func_0x0001000c6518(alStack_a0 + 3,lVar2);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    puVar6 = (undefined8 *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar6);
    uVar5 = *puVar6;
    *(long *)(lVar1 + 0x28) = lVar2;
    *(undefined ***)(lVar1 + 0x30) = &PTR_DAT_110649be0;
    *(long *)(lVar1 + 0x38) = param_1;
    *(undefined8 *)(lVar1 + 0x10) = uVar5;
    *(undefined1 *)(lVar1 + 0x58) = 0;
    *(long *)(lVar1 + 0x40) = alStack_a0[2];
    *(undefined8 *)(lVar1 + 0x48) = uVar7;
    *(undefined **)(lVar1 + 0x50) = puVar3;
    func_0x0001000834e4(alStack_a0 + 3);
    func_0x000107c61574(lVar8);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c6157c(lVar1);
    func_0x000107c4e404(uVar7);
    func_0x000107c61180();
    lVar8 = *(long *)(unaff_x20 + 0x40);
    ppuStack_68 = &PTR_DAT_110649b30;
    uVar5 = 0;
    alStack_a0[3] = lVar1;
    lStack_70 = lVar4;
    FUN_10339f7b4(0);
    func_0x000107c613fc();
    func_0x0001000c6518(alStack_a0 + 3,lVar4);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    puVar6 = (undefined8 *)((long)alStack_a0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_00 + 0x10))(puVar6);
    uVar9 = *puVar6;
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar8);
    FUN_103398018(uVar7,lVar8,uVar9,param_1,uVar5);
    func_0x000107c615e8(uVar7);
    param_1 = lVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103397d10; end: 103397de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103397d10(ulong *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  uVar1 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  lVar2 = _DAT_113067248;
  if (param_2 == 0) {
    return;
  }
  if ((char)uVar1 == '\x02') {
    lVar3 = *(long *)(param_2 + 0x10);
    if ((uVar4 & 1) == 0) {
      func_0x000107c61428(lVar3 + _DAT_113067248,auStack_60,0,0);
      lVar3 = lVar3 + lVar2;
      func_0x000107c61618();
      if (lVar3 == 0) goto LAB_103397dd0;
      func_0x000107c4e3f8(lVar3);
    }
    else {
      lVar3 = *(long *)(lVar3 + _DAT_113067250);
      func_0x000107c615f0(lVar3);
      func_0x000107c41864();
    }
    func_0x000107c615e8(lVar3);
  }
LAB_103397dd0:
  func_0x000107c61574();
  return;
}



/* Entry: 103397de8; end: 103397e83;  */

void FUN_103397de8(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000100d459c4(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000100d459c4(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 103397e84; end: 103397ea3;  */

void FUN_103397e84(void)

{
  FUN_103397874();
  return;
}



/* Entry: 103397ea4; end: 103397eab;  */

undefined8 FUN_103397ea4(void)

{
  return 0;
}



/* Entry: 103397eac; end: 103397eb3; -[_TtC26SCPasskeyManagementFeature30PasskeySingleScreenUIContainer shouldPopToRootViewController] */

undefined8 FUN_103397eac(void)

{
  return 0;
}



/* Entry: 103397eb4; end: 103397ebb; -[_TtC26SCPasskeyManagementFeature30PasskeySingleScreenUIContainer shouldPopToRootViewControllerLater] */

undefined8 FUN_103397eb4(void)

{
  return 1;
}



/* Entry: 103397ebc; end: 103397f67; -[_TtC26SCPasskeyManagementFeature30PasskeySingleScreenUIContainer initWithNibName:bundle:] */

undefined1 * FUN_103397ebc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    param_2 = param_4;
    func_0x000107c61174();
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c();
  }
  FUN_103397854();
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 103397f68; end: 103397fe7; -[_TtC26SCPasskeyManagementFeature30PasskeySingleScreenUIContainer initWithCoder:] */

undefined1 * FUN_103397f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  FUN_103397854();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 103397fe8; end: 103398017;  */

void FUN_103397fe8(void)

{
  FUN_103397854();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103398018; end: 103398237;  */

undefined1 *
FUN_103398018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  ppuVar3 = &puStack_a0;
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  uVar1 = 0;
  FUN_10339743c();
  ppuStack_48 = &PTR_DAT_110649b30;
  puVar2 = PTR_PTR_1126ae810;
  auStack_68[0] = param_3;
  uStack_50 = uVar1;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_5 + 0x98) = puVar2;
  *(undefined8 *)(param_5 + 0x58) = param_1;
  *(undefined8 *)(param_5 + 0x60) = param_2;
  FUN_10339844c(auStack_68,param_5 + 0x68);
  *(undefined8 *)(param_5 + 0x90) = param_4;
  puStack_a0 = (undefined *)0x0;
  uStack_98 = 0;
  puStack_90 = (undefined *)CONCAT62(puStack_90._2_6_,3);
  puStack_88 = (undefined *)0x0;
  pcStack_80 = (code *)0x0;
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_70 = 1;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  func_0x000103dbf4dc();
  func_0x000107c61580();
  func_0x000107c4e410(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c421ac();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = &UNK_110649c40;
  func_0x000107c613fc(&UNK_110649c40,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,ppuVar3);
  func_0x000107c61574(ppuVar3);
  pcStack_80 = FUN_103398490;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101218f4c;
  puStack_88 = &UNK_110649c58;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
  puStack_a0 = (undefined *)0x0;
  uStack_98 = 0;
  puStack_90 = (undefined *)CONCAT71(puStack_90._1_7_,9);
  func_0x000100854cb0(&puStack_a0);
  uVar1 = *(undefined8 *)((long)ppuVar3 + 0x90);
  func_0x000100471e0c(uVar1,1);
  func_0x000107c61574(ppuVar6);
  func_0x000103dbf524(uVar1);
  func_0x000107c61574(ppuVar3);
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(auStack_68);
  return (undefined1 *)ppuVar3;
}



/* Entry: 103398238; end: 103398423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103398238(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined8 *puVar9;
  long alStack_b0 [5];
  long lStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar8 = *param_4;
  ppuStack_58 = &PTR_DAT_11064a090;
  lVar4 = 0;
  auStack_78[0] = param_1;
  lStack_60 = lVar8;
  FUN_10339df48();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_78,lVar8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar9 = (undefined8 *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar9);
  lVar2 = _DAT_112f60628;
  alStack_b0[2] = *puVar9;
  ppuStack_80 = &PTR_DAT_11064a090;
  uVar6 = 0x112f603f8;
  lStack_88 = lVar8;
  func_0x0001000285a8(0x112f603f8,&UNK_10dbbc100);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar5 + lVar2) = uVar6;
  *(undefined8 *)(lVar5 + _DAT_112f60630) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f60638) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f60640) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f60648) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f60650) = 1;
  lVar2 = _DAT_112f60658;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar5 + lVar2) = uVar6;
  *(undefined1 *)(lVar5 + _DAT_112f60660) = 2;
  FUN_10339844c(alStack_b0 + 2,lVar5 + _DAT_112f60610);
  *(undefined8 *)(lVar5 + _DAT_112f60618) = param_2;
  *(undefined8 *)(lVar5 + _DAT_112f60620) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  alStack_b0[0] = lVar5;
  alStack_b0[1] = lVar4;
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  plVar7 = alStack_b0;
  func_0x000107c61154(plVar7,puVar1);
  if (plVar7 != (long *)0x0) {
    func_0x000107c5900c();
    func_0x0001000834e4(alStack_b0 + 2);
    func_0x0001000834e4(auStack_78);
    return plVar7;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103398424);
  (*pcVar3)();
}



/* Entry: 103398424; end: 10339842b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103398424(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  uVar1 = param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  lVar2 = _DAT_113067248;
  if (lVar3 == 0) {
    return;
  }
  if ((char)uVar1 == '\x02') {
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((uVar4 & 1) == 0) {
      func_0x000107c61428(lVar3 + _DAT_113067248,auStack_60,0,0);
      lVar3 = lVar3 + lVar2;
      func_0x000107c61618();
      if (lVar3 == 0) goto LAB_103397dd0;
      func_0x000107c4e3f8(lVar3);
    }
    else {
      lVar3 = *(long *)(lVar3 + _DAT_113067250);
      func_0x000107c615f0(lVar3);
      func_0x000107c41864();
    }
    func_0x000107c615e8(lVar3);
  }
LAB_103397dd0:
  func_0x000107c61574();
  return;
}



/* Entry: 10339842c; end: 10339844b;  */

void FUN_10339842c(void)

{
  func_0x000107c61168(&PTR_PTR_112f60310);
  return;
}



/* Entry: 10339844c; end: 10339848f;  */

long FUN_10339844c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103398490; end: 1033984c3;  */

void FUN_103398490(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long extraout_x8;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  undefined1 auStack_b8 [32];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lStack_f0 = lVar13;
    lStack_e8 = lVar4;
    func_0x000107c600f4(lVar12);
    func_0x000100e15a08();
    func_0x000107c601c0(&puStack_98,lVar3,lVar4);
    puVar2 = PTR___sypN_11034f1a8;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_80 != 0) {
      func_0x000100102924(&puStack_98,auStack_b8);
      func_0x000100102924(auStack_b8,auStack_e0);
      uVar7 = 0;
      FUN_1033a17c8(0,0x112e0e4a8,&PTR_PTR_1126a8d40);
      plVar8 = &lStack_c0;
      func_0x000107c6147c(plVar8,auStack_e0,puVar2 + 8,uVar7,6);
      lVar13 = lStack_c0;
      if ((((ulong)plVar8 & 1) != 0) && (lStack_c0 != 0)) {
        puVar6 = puVar9;
        func_0x000107c61550();
        if (((int)puVar6 == 0) ||
           (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar9 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar9) {
              puVar5 = puVar9;
            }
            func_0x000107c60480(puVar5);
          }
          puVar6 = (undefined *)0x0;
          func_0x000101c7007c(0,puVar5 + 1,1,puVar9);
        }
        uVar11 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar11 + 0x10);
        puVar9 = puVar6;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          func_0x000101c7007c(puVar9,uVar1 + 1,1,puVar6);
          uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
        *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar13;
      }
      func_0x000107c601c0(&puStack_98,lVar3,lVar4);
    }
    (**(code **)(lStack_f0 + 8))(lVar12,lVar3);
    func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
    uStack_90 = 0;
    uStack_88 = 0;
    ppuVar10 = &puStack_98;
    puStack_98 = puVar9;
    func_0x000100854cb0(ppuVar10);
    lVar4 = lStack_e8;
    uVar7 = *(undefined8 *)(lStack_e8 + 0x90);
    func_0x000100471e0c(uVar7,1);
    func_0x000107c61574(ppuVar10);
    func_0x000103dbf524(uVar7);
    func_0x000107c61574(lVar4);
    func_0x000107c6142c(puVar9);
    func_0x000107c61574(uVar7);
  }
  return;
}



/* Entry: 1033984c4; end: 10339884b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033984c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  lVar1 = _DAT_112f60408;
  puVar3 = &stack0xffffffffffffff80;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = unaff_x20 + _DAT_112f60410;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f60418) = 1;
  FUN_103398948();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112f60408;
  uVar9 = *(undefined8 *)(puVar3 + _DAT_112f60408);
  puVar4 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  func_0x000107c3d89c(puVar4);
  func_0x000107c5a050(uVar9);
  func_0x000107c61170(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c4acb0(puVar4);
  func_0x000107c61180();
  uVar9 = uVar6;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5ce8c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar9 = uVar6;
  func_0x000107c40284(0xc030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x28) = uVar9;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar9 = uVar6;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar9 = uVar6;
  func_0x000107c40284(0xc051c00000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  uVar9 = 0;
  func_0x000100847984(0);
  puVar8 = puVar5;
  func_0x000107c5fc48(puVar5,uVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar8);
  uVar9 = *(undefined8 *)(puVar3 + lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar9);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar2);
  uVar9 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4aba4(uVar9);
  func_0x000107c61180();
  func_0x000107c539d4(0x4038000000000000);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar9);
  return puVar4;
}



/* Entry: 10339884c; end: 10339886b; -[_TtC26SCPasskeyManagementFeature21PasskeyEmptyStateView initWithFrame:] */

void FUN_10339884c(void)

{
  FUN_1033984c4();
  return;
}



/* Entry: 10339886c; end: 103398903; -[_TtC26SCPasskeyManagementFeature21PasskeyEmptyStateView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10339886c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = _DAT_112f60408;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar2;
  lVar3 = param_1 + _DAT_112f60410;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  *(undefined1 *)(param_1 + _DAT_112f60418) = 1;
  func_0x000107c61170(*(undefined8 *)(param_1 + lVar1));
  FUN_10339adb0(lVar3);
  FUN_103398948();
  func_0x000107c61464(param_1,lVar3,0x21,7);
  return 0;
}



/* Entry: 103398904; end: 10339890f;  */

void FUN_103398904(void)

{
  FUN_103398948();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103398910; end: 103398947; -[_TtC26SCPasskeyManagementFeature21PasskeyEmptyStateView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103398910(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f60408));
  param_1 = param_1 + _DAT_112f60410;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103398948; end: 103398967;  */

void FUN_103398948(void)

{
  func_0x000107c61168(&PTR_PTR_1128d4700);
  return;
}



/* Entry: 103398968; end: 10339897f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103398968(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112f60470),PTR_s_setEnabled__112642f38,param_1 & 1);
  return;
}



/* Entry: 103398980; end: 103398aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103398980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f60448;
  puVar3 = &stack0xffffffffffffff90;
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f60450;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f60458;
  FUN_103399b50();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f60460;
  FUN_10339a230();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f60468;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f60470;
  puVar2 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  FUN_103399938();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112f60408;
  uVar5 = *(undefined8 *)(puVar3 + _DAT_112f60408);
  puVar4 = puVar3;
  func_0x000107c61174();
  FUN_103398c7c(uVar5);
  func_0x000103398eb4(*(undefined8 *)(puVar3 + lVar1));
  func_0x0001033990e4(*(undefined8 *)(puVar4 + _DAT_112f60448));
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 103398aec; end: 103398b0b; -[_TtC26SCPasskeyManagementFeature30PasskeySupportedEmptyStateView initWithFrame:] */

void FUN_103398aec(void)

{
  FUN_103398980();
  return;
}



/* Entry: 103398b0c; end: 103398c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103398b0c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar1 = _DAT_112f60448;
  puVar7 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar7;
  lVar2 = _DAT_112f60450;
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar7;
  lVar3 = _DAT_112f60458;
  FUN_103399b50();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar7;
  lVar4 = _DAT_112f60460;
  FUN_10339a230();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar7;
  lVar5 = _DAT_112f60468;
  puVar7 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar5) = puVar7;
  lVar6 = _DAT_112f60470;
  puVar7 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + lVar6) = puVar7;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar3));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar4));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar5));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar6));
  FUN_103399938();
  func_0x000107c61464();
  return 0;
}



/* Entry: 103398c50; end: 103398c7b; -[_TtC26SCPasskeyManagementFeature30PasskeySupportedEmptyStateView initWithCoder:] */

undefined8 FUN_103398c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103398b0c();
  return 0;
}


