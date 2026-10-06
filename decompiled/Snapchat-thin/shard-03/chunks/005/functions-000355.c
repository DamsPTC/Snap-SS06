/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029b44bc; end: 1029b452f;  */

void FUN_1029b44bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029b465c;
  func_0x0001000823a8(0x1029b465c,param_3);
  func_0x000100082720("SCTwoFASettingsScopeEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029b4530; end: 1029b4537;  */

void FUN_1029b4530(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029b465c;
  func_0x0001000823a8();
  func_0x000100082720("SCTwoFASettingsScopeEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029b4538; end: 1029b45df;  */

void FUN_1029b4538(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057b620;
  func_0x000107c613fc(&UNK_11057b620,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1029b4654;
  func_0x0001000823a8(FUN_1029b4654,puVar1);
  func_0x000100082720("SCTwoFASettingsScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1029b45e0; end: 1029b45e7;  */

void FUN_1029b45e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11057b620;
  func_0x000107c613fc(&UNK_11057b620,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1029b4654;
  func_0x0001000823a8(FUN_1029b4654,puVar3);
  func_0x000100082720("SCTwoFASettingsScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1029b45e8; end: 1029b4627;  */

void FUN_1029b45e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029b4de8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("TwoFASettingsScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029b4628; end: 1029b4653;  */

void FUN_1029b4628(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029b4654; end: 1029b4663;  */

void FUN_1029b4654(undefined8 *param_1)

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
  puVar1 = &UNK_11057b428;
  func_0x000107c613fc(&UNK_11057b428,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029b2684;
  func_0x00010058fa64(FUN_1029b2684,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029b4664; end: 1029b473f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029b4664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1029b4a78();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ed3b50) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed3b58) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b4740);
  (*pcVar1)();
}



/* Entry: 1029b4740; end: 1029b479f; -[_TtC29TwoFASettingsScopeGraphBridge44TwoFASettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029b4740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TwoFASettingsScopeGraphBridge.TwoFASettingsScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b476c);
  (*pcVar1)();
}



/* Entry: 1029b47a0; end: 1029b47d7; -[_TtC29TwoFASettingsScopeGraphBridge44TwoFASettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029b47bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b47c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b47a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3b50));
  return;
}



/* Entry: 1029b47d8; end: 1029b47ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b47d8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed3b58),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed3b50));
  return;
}



/* Entry: 1029b4800; end: 1029b481f;  */

void FUN_1029b4800(void)

{
  func_0x000107c61168(&PTR_PTR_112878e10);
  return;
}



/* Entry: 1029b4820; end: 1029b48a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029b4820(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed3b88) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed3b90);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029b48a8);
  (*pcVar2)();
}



/* Entry: 1029b48a8; end: 1029b498f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029b48a8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed3b88);
  *(undefined **)(unaff_x20 + _DAT_112ed3b88) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed3b90);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed3b90))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11057b6e8;
  func_0x000107c613fc(&UNK_11057b6e8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029b4994,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1029b4990; end: 1029b499b;  */

void FUN_1029b4990(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029b499c; end: 1029b49fb; -[_TtC29TwoFASettingsScopeGraphBridge44SCTwoFASettingsScopedServicesSaberEntryPoint init] */

void FUN_1029b499c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TwoFASettingsScopeGraphBridge.SCTwoFASettingsScopedServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b49c8);
  (*pcVar1)();
}



/* Entry: 1029b49fc; end: 1029b4a33; -[_TtC29TwoFASettingsScopeGraphBridge44SCTwoFASettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b49fc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed3b90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3b88));
  return;
}



/* Entry: 1029b4a34; end: 1029b4a37;  */

void FUN_1029b4a34(void)

{
  return;
}



/* Entry: 1029b4a38; end: 1029b4a57;  */

void FUN_1029b4a38(void)

{
  FUN_1029b48a8();
  return;
}



/* Entry: 1029b4a58; end: 1029b4a77;  */

void FUN_1029b4a58(void)

{
  func_0x000107c61168(&PTR_PTR_112878ed8);
  return;
}



/* Entry: 1029b4a78; end: 1029b4b47;  */

undefined8 FUN_1029b4a78(void)

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
  
  func_0x000107c61428(0x112ed3bc0,&uStack_40,0x20,0);
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
    FUN_1029b4b48();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029b4b48; end: 1029b4b67;  */

void FUN_1029b4b48(void)

{
  func_0x000107c61168(&PTR_PTR_112878fa0);
  return;
}



/* Entry: 1029b4b68; end: 1029b4b83;  */

void FUN_1029b4b68(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed3bc8,&UNK_10dafc708);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029b4bf0,param_1);
  return;
}



/* Entry: 1029b4b84; end: 1029b4bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b4b84(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1029b4b48();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed3bd0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1029b4bf0; end: 1029b4bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b4bf0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1029b4b48();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed3bd0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1029b4bf8; end: 1029b4c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b4bf8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed3bd0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029b4c44; end: 1029b4ca3; -[_TtC29TwoFASettingsScopeGraphBridge37TwoFASettingsScopeGraphBridgeServices init] */

void FUN_1029b4c44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TwoFASettingsScopeGraphBridge.TwoFASettingsScopeGraphBridgeServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b4c70);
  (*pcVar1)();
}



/* Entry: 1029b4ca4; end: 1029b4cb3; -[_TtC29TwoFASettingsScopeGraphBridge37TwoFASettingsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b4ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed3bd0));
  return;
}



/* Entry: 1029b4cb4; end: 1029b4d3f;  */

void FUN_1029b4cb4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1029b4cf4,0);
  return;
}



/* Entry: 1029b4d40; end: 1029b4d5b;  */

void FUN_1029b4d40(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029b4dac,param_1);
  return;
}



/* Entry: 1029b4d5c; end: 1029b4dab;  */

void FUN_1029b4d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1029b4dac; end: 1029b4ddf;  */

void FUN_1029b4dac(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029b4de0; end: 1029b4de7;  */

undefined8 FUN_1029b4de0(void)

{
  return 0x1b;
}



/* Entry: 1029b4de8; end: 1029b4f5f;  */

void FUN_1029b4de8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057b730;
  func_0x000107c613fc(&UNK_11057b730,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029b4f60,puVar1);
  return;
}



/* Entry: 1029b4f60; end: 1029b4f67;  */

void FUN_1029b4f60(undefined8 *param_1)

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
  func_0x000107c61428(0x112ed3bc0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed3bc0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11057b808;
  func_0x000107c613fc(&UNK_11057b808,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029b5034;
  func_0x00010058fa64(0x1029b5034,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029b4f68; end: 1029b4fc3;  */

void FUN_1029b4f68(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed3bc0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed3bc0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029b4fc4; end: 1029b503b;  */

undefined ** FUN_1029b4fc4(void)

{
  return &PTR_DAT_112ed3cc8;
}



/* Entry: 1029b503c; end: 1029b5083; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b503c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed3c28;
  func_0x000107c61428(param_1 + _DAT_112ed3c28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029b5084; end: 1029b50db; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5084(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed3c28;
  func_0x000107c61428(param_1 + _DAT_112ed3c28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029b50dc; end: 1029b5123; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint sCUserPhoneVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b50dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed3c30;
  func_0x000107c61428(param_1 + _DAT_112ed3c30,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029b5124; end: 1029b512f; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint setSCUserPhoneVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5124(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed3c30;
  func_0x000107c61428(param_1 + _DAT_112ed3c30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029b5130; end: 1029b5177; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint twoFASettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5130(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed3c38;
  func_0x000107c61428(param_1 + _DAT_112ed3c38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029b5178; end: 1029b5183; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint setTwoFASettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed3c38;
  func_0x000107c61428(param_1 + _DAT_112ed3c38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029b5184; end: 1029b51e3;  */

void FUN_1029b5184(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1029b51e4; end: 1029b539f;  */

/* WARNING: Possible PIC construction at 0x0001029b52fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b5320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b5330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b5374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b5334) */
/* WARNING: Removing unreachable block (ram,0x0001029b5324) */
/* WARNING: Removing unreachable block (ram,0x0001029b5300) */
/* WARNING: Removing unreachable block (ram,0x0001029b5378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b51e4(void)

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
  func_0x000107c51550();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5d0e0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1029b4800();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1029b4a78();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b53a0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ed3b50) = lVar5;
      *(long *)(lVar3 + _DAT_112ed3b58) = unaff_x20;
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



/* Entry: 1029b53a0; end: 1029b53c7; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1029b53a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029b51e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029b53c8; end: 1029b540b; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029b53c8(undefined8 param_1)

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



/* Entry: 1029b540c; end: 1029b560f;  */

void FUN_1029b540c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0fa67c0)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f059840,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0f2b7d0)) &&
           (func_0x000107c605b8(0xd00000000000002c,0x800000010f0d4830,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "TwoFASettingsScopeGraphBridge/SCTwoFASettingsScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x52,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b5610);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a0f0();
        goto LAB_1029b5498;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58af8();
  }
LAB_1029b5498:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1029b5610; end: 1029b56bb; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1029b5610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029b540c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029b56bc; end: 1029b5733; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b56bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed3c28,0);
  *(undefined8 *)(param_1 + _DAT_112ed3c30) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed3c38) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed3c40) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029b5734; end: 1029b5767;  */

void FUN_1029b5734(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029b5768; end: 1029b57bf; -[SCTwoFASettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029b5794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b5798) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5768(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed3c28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3c30));
  return;
}



/* Entry: 1029b57c0; end: 1029b57df;  */

void FUN_1029b57c0(void)

{
  func_0x000107c61168(&PTR_PTR_112879060);
  return;
}



/* Entry: 1029b57e0; end: 1029b5827; -[SCSCTwoFASettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b57e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed3c70;
  func_0x000107c61428(param_1 + _DAT_112ed3c70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029b5828; end: 1029b587f; -[SCSCTwoFASettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5828(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed3c70;
  func_0x000107c61428(param_1 + _DAT_112ed3c70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029b5880; end: 1029b5957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5880(undefined8 param_1,long param_2)

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
    FUN_1029b4a58();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed3b88) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029b5958);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed3b90);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed3c78);
    *(long **)(unaff_x20 + _DAT_112ed3c78) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029b5958; end: 1029b597f; -[SCSCTwoFASettingsScopedServicesSaberEntryPoint begin] */

void FUN_1029b5958(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029b5880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029b5980; end: 1029b5af7;  */

/* WARNING: Possible PIC construction at 0x0001029b59e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b5a80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b59ec) */
/* WARNING: Removing unreachable block (ram,0x0001029b5a84) */
/* WARNING: Removing unreachable block (ram,0x0001029b5a9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5980(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed3c78);
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



/* Entry: 1029b5af8; end: 1029b5aff;  */

void FUN_1029b5af8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029b5b00; end: 1029b5b33; -[SCSCTwoFASettingsScopedServicesSaberEntryPoint end] */

void FUN_1029b5b00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029b5980();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029b5b34; end: 1029b5c53;  */

void FUN_1029b5b34(long param_1,long param_2,long param_3)

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
                        "TwoFASettingsScopeGraphBridge/SCSCTwoFASettingsScopedServicesSaberEntryPoint.swift"
                        ,0x52,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b5c54);
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



/* Entry: 1029b5c54; end: 1029b5cff; -[SCSCTwoFASettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1029b5c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029b5b34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029b5d00; end: 1029b5d5f; -[SCSCTwoFASettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5d00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed3c70,0);
  *(undefined8 *)(param_1 + _DAT_112ed3c78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029b5d60; end: 1029b5d93;  */

void FUN_1029b5d60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029b5d94; end: 1029b5dcb; -[SCSCTwoFASettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5d94(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed3c70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3c78));
  return;
}



/* Entry: 1029b5dcc; end: 1029b5deb;  */

void FUN_1029b5dcc(void)

{
  func_0x000107c61168(&PTR_PTR_112879130);
  return;
}



/* Entry: 1029b5dec; end: 1029b5dfb; -[_TtC20SCTwoFASettingsScope20SCTwoFASettingsScope navContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ed3ca8));
  return;
}



/* Entry: 1029b5dfc; end: 1029b5e43; -[_TtC20SCTwoFASettingsScope20SCTwoFASettingsScope settingsDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5dfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed3cb0;
  func_0x000107c61428(param_1 + _DAT_112ed3cb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029b5e44; end: 1029b5e9b; -[_TtC20SCTwoFASettingsScope20SCTwoFASettingsScope setSettingsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed3cb0;
  func_0x000107c61428(param_1 + _DAT_112ed3cb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029b5e9c; end: 1029b5f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029b5e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ed3cb0;
  func_0x000107c61614(unaff_x20 + _DAT_112ed3cb0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ed3ca8) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1029b5f5c; end: 1029b5fff; -[_TtC20SCTwoFASettingsScope20SCTwoFASettingsScope initWithNavContainer:settingsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b5f5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112ed3cb0;
  func_0x000107c61614(param_1 + _DAT_112ed3cb0,0);
  *(undefined8 *)(param_1 + _DAT_112ed3ca8) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1029b6000; end: 1029b605b; -[_TtC20SCTwoFASettingsScope20SCTwoFASettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029b6000(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed3ca8));
  param_1 = param_1 + _DAT_112ed3cb0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029b605c; end: 1029b60c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b605c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003437d8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed3cc0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029b60c4; end: 1029b610f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b60c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed3cc0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029b6110; end: 1029b61f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1029b6110(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000100337850();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112ed3cb0;
  func_0x000107c61614(lVar4 + _DAT_112ed3cb0,0);
  *(long *)(lVar4 + _DAT_112ed3ca8) = param_1;
  func_0x000107c61428(lVar4 + lVar2,auStack_58,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c61174(param_1);
  plVar5 = &lStack_68;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  func_0x000107c61574(uStack_70);
  func_0x000107c615e8(aplStack_80[0]);
  return plVar5;
}



/* Entry: 1029b61f8; end: 1029b626b; -[_TtC20SCTwoFASettingsScope28SCTwoFASettingsScopeServices buildWithNavContainer:settingsDelegate:] */

void FUN_1029b61f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1029b6110(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029b626c; end: 1029b626f;  */

void FUN_1029b626c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029b6270; end: 1029b62a3;  */

void FUN_1029b6270(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029b62a4; end: 1029b62d7; -[_TtC20SCTwoFASettingsScope28SCTwoFASettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b62a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed3cc0));
  return;
}



/* Entry: 1029b62d8; end: 1029b6427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029b62d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  uVar1 = 0x112ebedb0;
  func_0x0001000285a8(0x112ebedb0,&UNK_10dadb6b0);
  pcVar2 = FUN_1029b6428;
  func_0x00010072927c(FUN_1029b6428,0,uVar1);
  *(code **)(unaff_x20 + _DAT_112ed3d38) = pcVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed3d40) = param_2;
  func_0x0001000285a8(0x112ed3d48,&UNK_10dafca00);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  pcVar2 = FUN_1029b6650;
  func_0x0001000bdd8c(FUN_1029b6650,param_1);
  *(code **)(unaff_x20 + _DAT_112ed3d50) = pcVar2;
  func_0x0001000285a8(0x112ed3d58,&UNK_10dafca08);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar1 = 0x1029b6658;
  func_0x0001000bdd8c(0x1029b6658,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112ed3d60) = uVar1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar3;
}



/* Entry: 1029b6428; end: 1029b6457;  */

void FUN_1029b6428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c42d48();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1029b6458; end: 1029b653b;  */

void FUN_1029b6458(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_1029b7bcc(0);
  func_0x000107c610f8();
  uVar2 = uVar1;
  FUN_1029b7bec();
  func_0x000107c615e8(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1029b653c; end: 1029b6547; -[_TtC25SpotlightTileServicesImpl25SpotlightTileServicesImpl snapDocBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b653c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1029b6548; end: 1029b6553; -[_TtC25SpotlightTileServicesImpl25SpotlightTileServicesImpl uploader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b6548(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1029b6554; end: 1029b6597;  */

void FUN_1029b6554(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1029b6598; end: 1029b65f7; -[_TtC25SpotlightTileServicesImpl25SpotlightTileServicesImpl init] */

void FUN_1029b6598(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightTileServicesImpl.SpotlightTileServicesImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b65c4);
  (*pcVar1)();
}



/* Entry: 1029b65f8; end: 1029b664f; -[_TtC25SpotlightTileServicesImpl25SpotlightTileServicesImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029b6614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b6634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b6618) */
/* WARNING: Removing unreachable block (ram,0x0001029b6638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b65f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed3d38));
  return;
}



/* Entry: 1029b6650; end: 1029b6677;  */

void FUN_1029b6650(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_1029b7bcc(0);
  func_0x000107c610f8();
  uVar2 = uVar1;
  FUN_1029b7bec();
  func_0x000107c615e8(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1029b6678; end: 1029b669f;  */

void FUN_1029b6678(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126abc30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112ed3dd0 = puVar1;
  return;
}



/* Entry: 1029b66a0; end: 1029b6c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b66a0(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  undefined *unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [88];
  
  puVar5 = unaff_x20;
  dVar21 = param_1;
  uStack_118 = param_4;
  uStack_108 = param_5;
  func_0x000107c614f0();
  lVar6 = 0;
  puStack_110 = puVar5;
  func_0x000107c5fb10();
  lVar20 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  puVar17 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  func_0x000107c5eec8();
  lVar19 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112ed3dc8 != -1) {
    func_0x000107c61568(0x112ed3dc8,FUN_1029b6678);
  }
  uStack_100 = uRam0000000112ed3dd0;
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c5ee20();
  func_0x000107c4635c();
  func_0x000107c61170();
  uVar13 = uStack_100;
  if (puVar5 == (undefined *)0x0) {
    uVar11 = 0x65646f636564;
    func_0x000107c5fadc(0x65646f636564,0xe600000000000000);
    func_0x000107c6071c();
    dVar21 = (dVar21 - param_1) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1029b6c5c);
      (*pcVar4)();
    }
    if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1029b6c60);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1029b6c64);
      (*pcVar4)();
    }
    func_0x00010607a66c(uVar13,uVar11,0,(long)dVar21);
    func_0x000107c61170(uVar11);
    puStack_f8 = puStack_110;
    func_0x000107c614e4();
    ppuVar12 = &puStack_f8;
    puVar15 = puStack_110;
    func_0x000107c5fb18(ppuVar12,puStack_110);
    lVar6 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar17 = auStack_c8;
    func_0x000107c61534();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    uVar13 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar6 + 0x20) = uVar13;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined **)(lVar6 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar6 + 0x28) = puVar17;
    *(undefined8 *)(lVar6 + 0x30) = 0xd000000000000026;
    *(undefined8 *)(lVar6 + 0x38) = 0x800000010f0d4a10;
    lVar7 = lVar6;
    func_0x000100214a84(lVar6);
    func_0x000107c61588(lVar6);
    func_0x000100f15a0c((undefined8 *)(lVar6 + 0x20));
    puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c5fadc(ppuVar12,puVar15);
    func_0x000107c6142c(puVar15);
    lVar6 = lVar7;
    func_0x000107c5f9dc(lVar7,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar7);
    func_0x000107c466bc(puVar14);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(lVar6);
    puVar15 = puVar14;
    func_0x000107c5ed2c(puVar14);
    func_0x000107c61170(puVar14);
    func_0x000107c3fef8(uStack_108);
  }
  else {
    func_0x000107c5eec4(lVar18);
    func_0x000107c5eeac();
    uStack_120 = param_3;
    (**(code **)(lVar19 + 8))(lVar18,lVar7);
    puVar14 = PTR_PTR_1126b25c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar15 = puVar14;
    puStack_f8 = param_2;
    uStack_f0 = param_3;
    func_0x000107c5fb04(puVar17);
    func_0x000100e8b654();
    uVar16 = 0;
    puVar8 = puVar17;
    func_0x000107c60214(puVar17,0,PTR___sSSN_11034da80,puVar15);
    (**(code **)(lVar20 + 8))(puVar17,lVar6);
    puVar17 = (undefined1 *)0x0;
    if (uVar16 >> 0x3c < 0xf) {
      puVar17 = puVar8;
    }
    uVar1 = 0xc000000000000000;
    if (uVar16 >> 0x3c < 0xf) {
      uVar1 = uVar16;
    }
    puVar8 = puVar17;
    func_0x000107c5ee20(puVar17,uVar1);
    func_0x00010006c090(puVar17,uVar1);
    puStack_128 = puVar14;
    func_0x000107c5389c(puVar14);
    func_0x000107c61170(puVar8);
    puVar9 = *(undefined **)(unaff_x20 + _DAT_112ed3d90);
    func_0x000107c42428();
    func_0x000107c61180();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_d8 = FUN_1029b6d3c;
    puStack_d0 = (undefined *)0x0;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0x42000000;
    puStack_e8 = &UNK_1010c3770;
    puStack_e0 = &UNK_11057ba50;
    ppuVar12 = &puStack_f8;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c5d618(puVar9);
    func_0x000107c60bd0(ppuVar12);
    puVar10 = PTR_PTR_1126affc0;
    func_0x000107c61168(PTR_PTR_1126affc0);
    puStack_f8 = *(undefined **)PTR__kCMTimeZero_110348670;
    puStack_e8 = *(undefined **)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    func_0x000107c5d19c();
    func_0x000107c61180();
    puVar15 = puVar9;
    func_0x000107c3d5d4(puVar9);
    func_0x000107c61180();
    puVar14 = &UNK_11057ba88;
    func_0x000107c613fc(&UNK_11057ba88,0x50,7);
    uVar3 = uStack_100;
    uVar11 = uStack_108;
    uVar13 = uStack_118;
    *(undefined **)(puVar14 + 0x10) = puVar9;
    *(undefined8 *)(puVar14 + 0x18) = uStack_118;
    *(undefined **)(puVar14 + 0x20) = param_2;
    *(undefined8 *)(puVar14 + 0x28) = uStack_120;
    *(double *)(puVar14 + 0x30) = param_1;
    *(undefined8 *)(puVar14 + 0x38) = uStack_100;
    *(undefined8 *)(puVar14 + 0x40) = uStack_108;
    *(undefined **)(puVar14 + 0x48) = puStack_110;
    pcStack_d8 = FUN_1029b7d48;
    puStack_f8 = puVar2;
    uStack_f0 = 0x42000000;
    puStack_e8 = &UNK_101e07dbc;
    puStack_e0 = &UNK_11057baa0;
    ppuVar12 = &puStack_f8;
    puStack_d0 = puVar14;
    func_0x000107c60bc4(ppuVar12);
    puVar14 = puStack_d0;
    func_0x000107c615f0(puVar9);
    func_0x000107c61174(uVar13);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar11);
    func_0x000107c61574(puVar14);
    func_0x000107c5dc64(puVar15);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puStack_128);
    func_0x000107c615e8(puVar9);
    func_0x000107c61170(puVar10);
  }
  func_0x000107c61170(puVar15);
  return;
}



/* Entry: 1029b6c64; end: 1029b6d3b; -[_TtC25SpotlightTileServicesImpl31SpotlightTileSnapDocBuilderImpl buildTileSnapDocWithTileImageBytes:sourceSnapDoc:] */

void FUN_1029b6c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8(PTR_PTR_1126ae560);
  func_0x000107c453e4();
  func_0x000107c6071c();
  FUN_1029b66a0(param_3,param_2,param_4,puVar2);
  puVar3 = puVar2;
  func_0x000107c43bf4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1029b6d3c; end: 1029b6df7;  */

/* WARNING: Possible PIC construction at 0x0001029b6d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029b6dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029b6d8c) */
/* WARNING: Removing unreachable block (ram,0x0001029b6df4) */
/* WARNING: Removing unreachable block (ram,0x0001029b6da0) */
/* WARNING: Removing unreachable block (ram,0x0001029b6dcc) */

void FUN_1029b6d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b25e0;
  func_0x000107c610f8(PTR_PTR_1126b25e0);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126b3068;
  func_0x000107c610f8(PTR_PTR_1126b3068);
  func_0x000107c453e4();
  func_0x000107c574c8(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1029b6df8; end: 1029b7b33;  */

void FUN_1029b6df8(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  undefined *puStack_108;
  undefined1 auStack_c8 [88];
  
  if ((param_2 == 0) || (param_3 != (undefined *)0x0)) {
    uVar2 = 0x657361625f646461;
    dVar13 = param_1;
    func_0x000107c5fadc(0x657361625f646461,0xee00616964656d5f);
    func_0x000107c6071c();
    dVar13 = (dVar13 - param_1) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73b4);
      (*pcVar1)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73b8);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73bc);
      (*pcVar1)();
    }
    func_0x00010607a66c(param_8,uVar2,0,(long)dVar13);
    func_0x000107c61170(uVar2);
    puVar5 = param_3;
    if (param_3 == (undefined *)0x0) {
      func_0x000107c614e4();
      puVar8 = &stack0xffffffffffffff08;
      func_0x000107c5fb18(puVar8,unaff_x20);
      lVar3 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar9 = auStack_c8;
      func_0x000107c61534();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar3 + 0x20) = uVar2;
      puVar11 = PTR___sSSN_11034da80;
      *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
      *(undefined1 **)(lVar3 + 0x28) = puVar9;
      *(undefined8 *)(lVar3 + 0x30) = 0xd000000000000022;
      *(undefined8 *)(lVar3 + 0x38) = 0x800000010f0d4a40;
      lVar4 = lVar3;
      func_0x000100214a84(lVar3);
      func_0x000107c61588(lVar3);
      func_0x000100f15a0c((undefined8 *)(lVar3 + 0x20));
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c5fadc(puVar8,unaff_x20);
      func_0x000107c6142c(unaff_x20);
      lVar3 = lVar4;
      func_0x000107c5f9dc(lVar4,puVar11,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar4);
      func_0x000107c466bc(puVar5);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c614b0(param_3);
    param_4 = puVar5;
    func_0x000107c5ed2c(puVar5);
    func_0x000107c614ac(puVar5);
    func_0x000107c3fef8(param_9);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61168();
    func_0x000107c61174();
    puVar11 = puVar5;
    func_0x000107c51bc4();
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      puStack_108 = (undefined *)0xe000000000000000;
      puVar12 = param_3;
    }
    else {
      puVar10 = puVar11;
      func_0x000107c5faec();
      puVar12 = param_3;
      func_0x000107c61170(puVar11);
      puStack_108 = param_3;
    }
    func_0x000107c51bc4();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      puVar12 = (undefined *)0xe000000000000000;
    }
    else {
      puVar11 = puVar5;
      func_0x000107c5faec();
      func_0x000107c61170(puVar5);
    }
    puVar5 = param_4;
    func_0x000107c5b198();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73cc);
      (*pcVar1)();
    }
    puVar5 = puVar6;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73d0);
      (*pcVar1)();
    }
    puVar6 = puVar5;
    func_0x000107c40808();
    func_0x000107c61170(puVar5);
    if (puVar6 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b25d0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c563e8();
      puVar6 = puVar5;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73d4);
        (*pcVar1)();
      }
      func_0x000107c5293c();
      func_0x000107c61170(puVar6);
      puVar6 = puVar5;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73d8);
        (*pcVar1)();
      }
      func_0x000107c5a0f8();
      func_0x000107c61170(puVar6);
      puVar6 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      func_0x000107c4b838();
      func_0x000107c61180();
      puVar7 = param_4;
      func_0x000107c3d7f4(param_4);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
    }
    puVar5 = &UNK_11057bad8;
    func_0x000107c613fc(&UNK_11057bad8,0x48,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar10;
    *(undefined **)(puVar5 + 0x20) = puStack_108;
    *(undefined **)(puVar5 + 0x28) = puVar11;
    *(undefined **)(puVar5 + 0x30) = puVar12;
    *(undefined8 *)(puVar5 + 0x38) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x40) = param_5;
    dVar13 = 5.47077039858234e-315;
    puVar8 = &stack0xffffffffffffff08;
    func_0x000107c60bc4(puVar8);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_5);
    func_0x000107c61574(puVar5);
    func_0x000107c5d618(param_4);
    func_0x000107c60bd0(puVar8);
    uVar2 = 0x656e6f6e;
    func_0x000107c5fadc(0x656e6f6e,0xe400000000000000);
    func_0x000107c6071c();
    dVar13 = (dVar13 - param_1) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73c0);
      (*pcVar1)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73c4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b73c8);
      (*pcVar1)();
    }
    func_0x00010607a66c(param_8,uVar2,1,(long)dVar13);
    func_0x000107c61170(uVar2);
    func_0x000107c5b198(param_4);
    func_0x000107c61180();
    func_0x00010393e310(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_7);
    func_0x00010393e208(param_4,param_6,param_7);
    func_0x000107c3fefc(param_9);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1029b7b34; end: 1029b7b93; -[_TtC25SpotlightTileServicesImpl31SpotlightTileSnapDocBuilderImpl init] */

void FUN_1029b7b34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightTileServicesImpl.SpotlightTileSnapDocBuilderImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029b7b60);
  (*pcVar1)();
}



/* Entry: 1029b7b94; end: 1029b7bcb; -[_TtC25SpotlightTileServicesImpl31SpotlightTileSnapDocBuilderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b7b94(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed3d90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3d98));
  return;
}



/* Entry: 1029b7bcc; end: 1029b7beb;  */

void FUN_1029b7bcc(void)

{
  func_0x000107c61168(&PTR_PTR_112879450);
  return;
}



/* Entry: 1029b7bec; end: 1029b7d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029b7bec(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_112ed3d90) = param_1;
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0d4a70);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + _DAT_112ed3d98) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029b7d2c; end: 1029b7d47;  */

void FUN_1029b7d2c(long param_1,long param_2)

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



/* Entry: 1029b7d48; end: 1029b7d77;  */

void FUN_1029b7d48(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1029b6df8(*(undefined8 *)(unaff_x20 + 0x30),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1029b7d78; end: 1029b7d8b;  */

void FUN_1029b7d78(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  code *pcVar14;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_d8 = *(ulong *)(unaff_x20 + 0x20);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_c8 = *(ulong *)(unaff_x20 + 0x30);
  uStack_118 = *(ulong *)(unaff_x20 + 0x40);
  lVar2 = 0;
  func_0x000107c5fb10();
  lStack_f0 = *(long *)(lVar2 + -8);
  lStack_e8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar2 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_f8 = lVar2;
  func_0x000107c5eea4();
  lStack_128 = *(long *)(lVar3 + -8);
  lStack_120 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_128 + 0x40));
  lVar2 = lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_130 = lVar2;
  func_0x000107c5ed50();
  lStack_140 = *(long *)(lVar3 + -8);
  lStack_138 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_140 + 0x40));
  lVar2 = lVar2 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = param_2;
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b1c);
    (*pcVar14)();
  }
  lVar3 = param_2;
  func_0x000107c40808();
  func_0x000107c61170(param_2);
  if ((lVar3 == 0) && (lVar3 = lVar5, func_0x000107c44984(), (int)lVar3 != 0)) {
    puVar4 = PTR_PTR_1126b25d8;
    func_0x000107c610f8(PTR_PTR_1126b25d8);
    func_0x000107c453e4();
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b30);
      (*pcVar14)();
    }
    func_0x000107c4c9b4();
    func_0x000107c61170(lVar5);
    func_0x000107c56438(puVar4);
    func_0x000107c56498(puVar4);
    lVar5 = lStack_110;
    lVar3 = lStack_110;
    func_0x000107c4ca10();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b34);
      (*pcVar14)();
    }
    func_0x000107c3d798();
    func_0x000107c61170(lVar3);
    func_0x000107c5643c(lVar5);
    func_0x000107c61170(puVar4);
  }
  lVar5 = lStack_110;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b20);
    (*pcVar14)();
  }
  lVar3 = lVar5;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar3 != 0) {
    func_0x000107c600f4(lVar2);
    func_0x000107c61170(lVar3);
    uStack_a8 = uStack_e0;
    uStack_a0 = uStack_d8;
    uStack_b8 = uStack_d0;
    uStack_b0 = uStack_c8;
    func_0x000107c5ed4c(auStack_98);
    puVar4 = PTR___sypN_11034f1a8;
    if (lStack_80 != 0) {
      uVar6 = 0;
      FUN_1029b7f94(0,0x112d55598,&PTR_PTR_1126b25d0);
      uStack_108 = uVar6;
      lStack_100 = lVar2;
      do {
        plVar7 = &lStack_c0;
        func_0x000107c6147c(plVar7,auStack_98,puVar4 + 8,uVar6,6);
        lVar5 = lStack_c0;
        if (((ulong)plVar7 & 1) != 0) {
          lVar3 = lStack_c0;
          func_0x000107c4abb4();
          if ((int)lVar3 == 1) {
            puVar4 = PTR_PTR_1126d5750;
            func_0x000107c610f8(PTR_PTR_1126d5750);
            func_0x000107c453e4();
            lVar3 = lStack_f8;
            puVar8 = puVar4;
            func_0x000107c5fb04(lStack_f8);
            func_0x000100e8b654();
            uVar13 = 0;
            lVar9 = lVar3;
            func_0x000107c60214(lVar3,0,PTR___sSSN_11034da80,puVar8);
            lVar1 = lStack_e8;
            pcVar14 = *(code **)(lStack_f0 + 8);
            (*pcVar14)(lVar3,lStack_e8);
            lVar2 = 0;
            if (uVar13 >> 0x3c < 0xf) {
              lVar2 = lVar9;
            }
            uVar11 = 0xc000000000000000;
            if (uVar13 >> 0x3c < 0xf) {
              uVar11 = uVar13;
            }
            lVar9 = lVar2;
            func_0x000107c5ee20(lVar2,uVar11);
            func_0x00010006c090(lVar2,uVar11);
            func_0x000107c559a4(puVar4);
            func_0x000107c61170(lVar9);
            func_0x000107c5fb04(lVar3);
            uVar13 = 0;
            lVar9 = lVar3;
            func_0x000107c60214(lVar3,0,PTR___sSSN_11034da80,puVar8);
            (*pcVar14)(lVar3,lVar1);
            lVar2 = 0;
            if (uVar13 >> 0x3c < 0xf) {
              lVar2 = lVar9;
            }
            uVar11 = 0xc000000000000000;
            if (uVar13 >> 0x3c < 0xf) {
              uVar11 = uVar13;
            }
            lVar3 = lVar2;
            func_0x000107c5ee20(lVar2,uVar11);
            func_0x00010006c090(lVar2,uVar11);
            func_0x000107c55938(puVar4);
            func_0x000107c61170(lVar3);
            lVar2 = lVar5;
            func_0x000107c4c930();
            func_0x000107c61180();
            if (lVar2 == 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b18);
              (*pcVar14)();
            }
            func_0x000107c54574();
            func_0x000107c61170(lVar2);
            puVar8 = PTR_PTR_1126d5750;
            func_0x000107c610f8(PTR_PTR_1126d5750);
            func_0x000107c453e4();
            uVar10 = uStack_e0;
            uVar13 = uStack_d8;
            func_0x000107c5ee08(uStack_e0,uStack_d8,0);
            uVar6 = 0;
            if (uVar13 >> 0x3c < 0xf) {
              uVar6 = uVar10;
            }
            uVar11 = 0xc000000000000000;
            if (uVar13 >> 0x3c < 0xf) {
              uVar11 = uVar13;
            }
            uVar10 = uVar6;
            func_0x000107c5ee20(uVar6,uVar11);
            func_0x00010006c090(uVar6,uVar11);
            func_0x000107c559a4(puVar8);
            func_0x000107c61170(uVar10);
            uVar10 = uStack_d0;
            uVar13 = uStack_c8;
            func_0x000107c5ee08(uStack_d0,uStack_c8,0);
            uVar6 = 0;
            if (uVar13 >> 0x3c < 0xf) {
              uVar6 = uVar10;
            }
            uVar11 = 0xc000000000000000;
            if (uVar13 >> 0x3c < 0xf) {
              uVar11 = uVar13;
            }
            uVar10 = uVar6;
            func_0x000107c5ee20(uVar6,uVar11);
            func_0x00010006c090(uVar6,uVar11);
            func_0x000107c55938(puVar8);
            func_0x000107c61170(uVar10);
            lVar2 = lVar5;
            func_0x000107c4c930();
            func_0x000107c61180();
            if (lVar2 == 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b14);
              (*pcVar14)();
            }
            func_0x000107c54578();
            func_0x000107c61170(lVar5);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(lVar2);
            uVar6 = uStack_108;
            lVar2 = lStack_100;
            puVar4 = PTR___sypN_11034f1a8;
          }
          else {
            func_0x000107c61170(lVar5);
          }
        }
        func_0x000107c5ed4c(auStack_98);
      } while (lStack_80 != 0);
    }
    (**(code **)(lStack_140 + 8))(lVar2,lStack_138);
    lVar2 = lStack_110;
    FUN_1029b7d8c(lStack_110);
    puVar8 = PTR_PTR_1126bcf30;
    func_0x000107c610f8(PTR_PTR_1126bcf30);
    func_0x000107c453e4();
    lVar5 = lStack_130;
    func_0x000107c5eea0(lStack_130);
    func_0x000107c5ee8c();
    (**(code **)(lStack_128 + 8))(lVar5,lStack_120);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b08);
      (*pcVar14)();
    }
    if (-1.0 < param_1) {
      if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b10);
        (*pcVar14)();
      }
      func_0x000107c59340(puVar8);
      func_0x000107c59df8(lVar2);
      uVar13 = uStack_118;
      uVar11 = uStack_118;
      func_0x000107c44738();
      if ((uVar11 & 1) != 0) {
        func_0x000107c3e324();
        func_0x000107c61180();
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b28);
          (*pcVar14)();
        }
        uVar11 = uVar13;
        func_0x000107c40794();
        func_0x000107c61170(uVar13);
        func_0x000107c60234(auStack_98,uVar11);
        func_0x000107c615e8(uVar11);
        uVar6 = 0;
        FUN_1029b7f94(0,0x112ed3de0,&PTR_PTR_1126cf388);
        puVar12 = &uStack_a8;
        func_0x000107c6147c(puVar12,auStack_98,puVar4 + 8,uVar6,6);
        uVar6 = uStack_a8;
        if ((int)puVar12 == 0) {
          uVar6 = 0;
        }
        func_0x000107c5299c(lVar2);
        func_0x000107c61170(uVar6);
        uVar13 = uStack_118;
      }
      uVar11 = uVar13;
      func_0x000107c4483c();
      if ((int)uVar11 != 0) {
        func_0x000107c42400();
        func_0x000107c61180();
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b2c);
          (*pcVar14)();
        }
        uVar11 = uVar13;
        func_0x000107c40794();
        func_0x000107c61170(uVar13);
        func_0x000107c60234(auStack_98,uVar11);
        func_0x000107c615e8(uVar11);
        uVar6 = 0;
        FUN_1029b7f94(0,0x112ed3dd8,&PTR_PTR_1126cea50);
        puVar12 = &uStack_a8;
        func_0x000107c6147c(puVar12,auStack_98,puVar4 + 8,uVar6,6);
        uVar6 = uStack_a8;
        if ((int)puVar12 == 0) {
          uVar6 = 0;
        }
        func_0x000107c543d8(lVar2);
        func_0x000107c61170(uVar6);
      }
      func_0x000107c61170(puVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b0c);
    (*pcVar14)();
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1029b7b24);
  (*pcVar14)();
}


