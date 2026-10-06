/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028cb270; end: 1028cb29b;  */

void FUN_1028cb270(void)

{
  FUN_1028cb1ec();
  return;
}



/* Entry: 1028cb29c; end: 1028cb343;  */

void FUN_1028cb29c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110563ef8;
  func_0x000107c613fc(&UNK_110563ef8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1028cb3b8;
  func_0x0001000823a8(FUN_1028cb3b8,puVar1);
  func_0x000100082720("SCTalkUIScopedServicesScopeInitializationPluginProvider",0x37,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1028cb344; end: 1028cb34b;  */

void FUN_1028cb344(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110563ef8;
  func_0x000107c613fc(&UNK_110563ef8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1028cb3b8;
  func_0x0001000823a8(FUN_1028cb3b8,puVar3);
  func_0x000100082720("SCTalkUIScopedServicesScopeInitializationPluginProvider",0x37,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1028cb34c; end: 1028cb38b;  */

void FUN_1028cb34c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028cb964(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("TalkUIScopeGraphBridgeScopeInitializationPluginProvider",0x37,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028cb38c; end: 1028cb3b7;  */

void FUN_1028cb38c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028cb3b8; end: 1028cb3cf;  */

void FUN_1028cb3b8(undefined8 *param_1)

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
  puVar1 = &UNK_110563c58;
  func_0x000107c613fc(&UNK_110563c58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028c8f1c;
  func_0x00010058fa64(FUN_1028c8f1c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028cb3d0; end: 1028cb457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028cb3d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1028cb790();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ec8600) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ec8608) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028cb458);
  (*pcVar1)();
}



/* Entry: 1028cb458; end: 1028cb4b7; -[_TtC22TalkUIScopeGraphBridge37TalkUIScopeGraphBridgeSaberEntryPoint init] */

void FUN_1028cb458(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TalkUIScopeGraphBridge.TalkUIScopeGraphBridgeSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028cb484);
  (*pcVar1)();
}



/* Entry: 1028cb4b8; end: 1028cb4ef; -[_TtC22TalkUIScopeGraphBridge37TalkUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028cb4d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028cb4d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cb4b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec8600));
  return;
}



/* Entry: 1028cb4f0; end: 1028cb517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cb4f0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ec8608),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ec8600));
  return;
}



/* Entry: 1028cb518; end: 1028cb537;  */

void FUN_1028cb518(void)

{
  func_0x000107c61168(&PTR_PTR_11286b750);
  return;
}



/* Entry: 1028cb538; end: 1028cb5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028cb538(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec8638) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ec8640);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cb5c0);
  (*pcVar2)();
}



/* Entry: 1028cb5c0; end: 1028cb6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028cb5c0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec8638);
  *(undefined **)(unaff_x20 + _DAT_112ec8638) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec8640);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec8640))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110564018;
  func_0x000107c613fc(&UNK_110564018,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1028cb6ac,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1028cb6a8; end: 1028cb6b3;  */

void FUN_1028cb6a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028cb6b4; end: 1028cb713; -[_TtC22TalkUIScopeGraphBridge37SCTalkUIScopedServicesSaberEntryPoint init] */

void FUN_1028cb6b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TalkUIScopeGraphBridge.SCTalkUIScopedServicesSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028cb6e0);
  (*pcVar1)();
}



/* Entry: 1028cb714; end: 1028cb74b; -[_TtC22TalkUIScopeGraphBridge37SCTalkUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cb714(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec8640));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec8638));
  return;
}



/* Entry: 1028cb74c; end: 1028cb74f;  */

void FUN_1028cb74c(void)

{
  return;
}



/* Entry: 1028cb750; end: 1028cb76f;  */

void FUN_1028cb750(void)

{
  FUN_1028cb5c0();
  return;
}



/* Entry: 1028cb770; end: 1028cb78f;  */

void FUN_1028cb770(void)

{
  func_0x000107c61168(&PTR_PTR_11286b818);
  return;
}



/* Entry: 1028cb790; end: 1028cb85f;  */

undefined8 FUN_1028cb790(void)

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
  
  func_0x000107c61428(0x112ec8670,&uStack_40,0x20,0);
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
    FUN_1028cb860();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1028cb860; end: 1028cb87f;  */

void FUN_1028cb860(void)

{
  func_0x000107c61168(&PTR_PTR_11286b8e0);
  return;
}



/* Entry: 1028cb880; end: 1028cb8eb;  */

void FUN_1028cb880(void)

{
  func_0x0001000285a8(0x112ec8678,&UNK_10daeaf58);
  func_0x0001000823a8(0x1028cb8c0,0);
  return;
}



/* Entry: 1028cb8ec; end: 1028cb927; -[_TtC22TalkUIScopeGraphBridge30TalkUIScopeGraphBridgeServices init] */

void FUN_1028cb8ec(undefined8 param_1)

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



/* Entry: 1028cb928; end: 1028cb95b;  */

void FUN_1028cb928(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028cb95c; end: 1028cb963;  */

undefined8 FUN_1028cb95c(void)

{
  return 0x1b;
}



/* Entry: 1028cb964; end: 1028cbadb;  */

void FUN_1028cb964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110564060;
  func_0x000107c613fc(&UNK_110564060,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028cbadc,puVar1);
  return;
}



/* Entry: 1028cbadc; end: 1028cbae3;  */

void FUN_1028cbadc(undefined8 *param_1)

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
  func_0x000107c61428(0x112ec8670,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec8670,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105640f8;
  func_0x000107c613fc(&UNK_1105640f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1028cbb90;
  func_0x00010058fa64(0x1028cbb90,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028cbae4; end: 1028cbb3f;  */

void FUN_1028cbae4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec8670,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec8670,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1028cbb40; end: 1028cbb97;  */

undefined ** FUN_1028cbb40(void)

{
  return &PTR_DAT_113067018;
}



/* Entry: 1028cbb98; end: 1028cbbdf; -[SCTalkUIScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cbb98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec86d0;
  func_0x000107c61428(param_1 + _DAT_112ec86d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028cbbe0; end: 1028cbc37; -[SCTalkUIScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cbbe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec86d0;
  func_0x000107c61428(param_1 + _DAT_112ec86d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028cbc38; end: 1028cbc7f; -[SCTalkUIScopeGraphBridgeSaberEntryPoint talkUIScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cbc38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec86d8;
  func_0x000107c61428(param_1 + _DAT_112ec86d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028cbc80; end: 1028cbce3; -[SCTalkUIScopeGraphBridgeSaberEntryPoint setTalkUIScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cbc80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec86d8;
  func_0x000107c61428(param_1 + _DAT_112ec86d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028cbce4; end: 1028cbe17;  */

/* WARNING: Possible PIC construction at 0x0001028cbd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028cbdb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028cbdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028cbda0) */
/* WARNING: Removing unreachable block (ram,0x0001028cbdbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cbce4(void)

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
  func_0x000107c5c6ec();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1028cb518();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1028cb790();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028cbe18);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ec8600) = lVar5;
    *(long *)(lVar4 + _DAT_112ec8608) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1028cbe18; end: 1028cbe3f; -[SCTalkUIScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1028cbe18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028cbce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028cbe40; end: 1028cbe83; -[SCTalkUIScopeGraphBridgeSaberEntryPoint end] */

void FUN_1028cbe40(undefined8 param_1)

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



/* Entry: 1028cbe84; end: 1028cc01b;  */

void FUN_1028cbe84(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f38a90)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f0c7570,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "TalkUIScopeGraphBridge/SCTalkUIScopeGraphBridgeSaberEntryPoint.swift",
                            0x44,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028cc01c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59bc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028cc01c; end: 1028cc0c7; -[SCTalkUIScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1028cc01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028cbe84(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028cc0c8; end: 1028cc133; -[SCTalkUIScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc0c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec86d0,0);
  *(undefined8 *)(param_1 + _DAT_112ec86d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec86e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028cc134; end: 1028cc167;  */

void FUN_1028cc134(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028cc168; end: 1028cc1af; -[SCTalkUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028cc194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028cc198) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc168(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec86d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec86d8));
  return;
}



/* Entry: 1028cc1b0; end: 1028cc1cf;  */

void FUN_1028cc1b0(void)

{
  func_0x000107c61168(&PTR_PTR_11286b990);
  return;
}



/* Entry: 1028cc1d0; end: 1028cc217; -[SCSCTalkUIScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc1d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec8710;
  func_0x000107c61428(param_1 + _DAT_112ec8710,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028cc218; end: 1028cc26f; -[SCSCTalkUIScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc218(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec8710;
  func_0x000107c61428(param_1 + _DAT_112ec8710,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028cc270; end: 1028cc347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc270(undefined8 param_1,long param_2)

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
    FUN_1028cb770();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ec8638) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cc348);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ec8640);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec8718);
    *(long **)(unaff_x20 + _DAT_112ec8718) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1028cc348; end: 1028cc36f; -[SCSCTalkUIScopedServicesSaberEntryPoint begin] */

void FUN_1028cc348(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028cc270();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028cc370; end: 1028cc4e7;  */

/* WARNING: Possible PIC construction at 0x0001028cc3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028cc470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028cc3dc) */
/* WARNING: Removing unreachable block (ram,0x0001028cc474) */
/* WARNING: Removing unreachable block (ram,0x0001028cc48c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc370(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec8718);
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



/* Entry: 1028cc4e8; end: 1028cc4ef;  */

void FUN_1028cc4e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028cc4f0; end: 1028cc523; -[SCSCTalkUIScopedServicesSaberEntryPoint end] */

void FUN_1028cc4f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028cc370();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028cc524; end: 1028cc643;  */

void FUN_1028cc524(long param_1,long param_2,long param_3)

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
                        "TalkUIScopeGraphBridge/SCSCTalkUIScopedServicesSaberEntryPoint.swift",0x44,
                        2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028cc644);
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



/* Entry: 1028cc644; end: 1028cc6ef; -[SCSCTalkUIScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028cc644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028cc524(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028cc6f0; end: 1028cc74f; -[SCSCTalkUIScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc6f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec8710,0);
  *(undefined8 *)(param_1 + _DAT_112ec8718) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028cc750; end: 1028cc783;  */

void FUN_1028cc750(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028cc784; end: 1028cc7bb; -[SCSCTalkUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc784(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec8710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec8718));
  return;
}



/* Entry: 1028cc7bc; end: 1028cc7db;  */

void FUN_1028cc7bc(void)

{
  func_0x000107c61168(&PTR_PTR_11286ba58);
  return;
}



/* Entry: 1028cc7dc; end: 1028cc87f;  */

void FUN_1028cc7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110564200;
  func_0x000107c613fc(&UNK_110564200,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1028cc880,puVar1);
  return;
}



/* Entry: 1028cc880; end: 1028cc9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc880(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  uVar1 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  uVar2 = uVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&lStack_60);
  uVar4 = *(undefined8 *)(lStack_60 + _DAT_11307b960);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_60);
  func_0x000100083b20(&uStack_68);
  uVar2 = uStack_68;
  func_0x000107c4cfb0(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar3 = *(undefined8 *)(lStack_70 + _DAT_11301aef0);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_70);
  FUN_1028cde1c(0);
  func_0x000107c610f8();
  func_0x0001028ccc9c(uVar1,param_3,uVar4,uVar2,uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028cc9e0; end: 1028cc9ef;  */

undefined1  [16] FUN_1028cc9e0(void)

{
  return ZEXT816(0x110564228);
}



/* Entry: 1028cc9f0; end: 1028cca37; -[SCMissedCallMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cc9f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec8748;
  func_0x000107c61428(param_1 + _DAT_112ec8748,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028cca38; end: 1028cca43; -[SCMissedCallMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cca38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec8748;
  func_0x000107c61428(param_1 + _DAT_112ec8748,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028cca44; end: 1028cca8b; -[SCMissedCallMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cca44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec8750;
  func_0x000107c61428(param_1 + _DAT_112ec8750,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028cca8c; end: 1028cca97; -[SCMissedCallMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cca8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec8750;
  func_0x000107c61428(param_1 + _DAT_112ec8750,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028cca98; end: 1028ccaf7;  */

void FUN_1028cca98(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1028ccaf8; end: 1028ccb3f; -[SCMissedCallMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ccaf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec8758;
  func_0x000107c61428(param_1 + _DAT_112ec8758,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028ccb40; end: 1028ccb97; -[SCMissedCallMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ccb40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec8758;
  func_0x000107c61428(param_1 + _DAT_112ec8758,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028ccb98; end: 1028cd053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ccb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec8748) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec8750) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ec8758,0);
  lVar2 = _DAT_112ec8760;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101c4bb68();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ec8768;
  func_0x000101c4bb68();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ec8770);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec8778) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec8780) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec8788) = param_5;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028cd054; end: 1028cd107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028cd054(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = param_1;
  func_0x000107c44778();
  if ((int)lVar2 != 0) {
    func_0x000107c3eff0();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028cd108);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112ec8780);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar3;
        func_0x000107c44238();
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c61170(lVar2);
      return lVar4;
    }
  }
  return 0;
}



/* Entry: 1028cd108; end: 1028cd17f; -[SCMissedCallMessagePlugin canMergeMessage:withPreviousMessage:] */

uint FUN_1028cd108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x0001028ccda0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1028cd180; end: 1028cdb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028cd180(double param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long extraout_x8;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x20;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined *apuStack_c8 [3];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar3 = unaff_x20;
  uVar10 = param_3;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  if (param_2 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar17 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar17 == 0) {
    return 0;
  }
  uStack_d8 = param_3;
  puStack_d0 = (undefined *)lVar21;
  if ((param_2 & 0xc000000000000001) == 0) {
    uVar16 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    if (uVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cdb50);
      (*pcVar2)();
    }
    if (SBORROW8(uVar17,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cdb54);
      (*pcVar2)();
    }
    if (uVar16 <= uVar17 - 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cdb58);
      (*pcVar2)();
    }
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    lVar21 = ((undefined8 *)(param_2 + 0x20))[uVar17 - 1];
    func_0x000107c61174();
    func_0x000107c61174();
  }
  else {
    uVar5 = 0;
    func_0x000101681cac(0,param_2);
    lVar21 = uVar17 - 1;
    if (SBORROW8(uVar17,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cdb6c);
      (*pcVar2)();
    }
    uVar10 = param_2;
    func_0x000101681cac();
  }
  lVar18 = *(long *)(unaff_x20 + _DAT_112ec8788);
  lVar19 = lVar18;
  func_0x000107c4ce08();
  func_0x000107c61180();
  func_0x000107c4ce08();
  func_0x000107c61180();
  lVar20 = lVar19;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar20 == 0) {
LAB_1028cd350:
    func_0x000107c615e8(lVar19);
    func_0x000107c615e8(lVar18);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(uVar5);
    return 0;
  }
  lVar6 = lVar20;
  lStack_e8 = lVar3;
  func_0x000107c404a8();
  if ((int)lVar6 != 8) {
    func_0x000107c61170(lVar20);
    goto LAB_1028cd350;
  }
  lStack_110 = lVar21;
  uStack_108 = uVar5;
  lStack_f8 = lVar18;
  lStack_f0 = lVar19;
  lStack_e0 = lVar20;
  func_0x000107c40258();
  func_0x000107c61180();
  lVar21 = lVar19;
  func_0x000107c5faec();
  func_0x000107c61170(lVar19);
  lVar3 = _DAT_112ec8760;
  func_0x000107c61428(unaff_x20 + _DAT_112ec8760,&puStack_a8,0x21,0);
  lVar19 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_1028cd3a0:
    puVar7 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61434(uVar10);
    func_0x000107c61174();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c61558(uVar5);
    apuStack_c8[0] = *(undefined **)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
    func_0x000101c4eb50(puVar7,lVar21,uVar10,uVar5);
    func_0x000107c6142c(uVar10);
    *(undefined **)(unaff_x20 + lVar3) = apuStack_c8[0];
  }
  else {
    func_0x000107c61434(lVar19);
    lVar20 = lVar21;
    uVar17 = uVar10;
    func_0x000100029284();
    if ((uVar17 & 1) == 0) {
      func_0x000107c6142c(lVar19);
      goto LAB_1028cd3a0;
    }
    puVar7 = *(undefined **)(*(long *)(lVar19 + 0x38) + lVar20 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(lVar19);
  }
  func_0x000107c614a8(&puStack_a8);
  if (param_2 >> 0x3e != 0) {
    uVar17 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar17 = param_2;
    }
    func_0x000107c60480(uVar17);
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c4d664(puVar7);
  func_0x000107c61170(puVar8);
  lVar3 = _DAT_112ec8768;
  func_0x000107c61428(unaff_x20 + _DAT_112ec8768,&puStack_a8,0x21,0);
  lVar19 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_1028cd4c0:
    puVar8 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61434(uVar10);
    func_0x000107c61174();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c61558(uVar5);
    apuStack_c8[0] = *(undefined **)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
    func_0x000101c4eb50(puVar8,lVar21,uVar10,uVar5);
    func_0x000107c6142c(uVar10);
    *(undefined **)(unaff_x20 + lVar3) = apuStack_c8[0];
  }
  else {
    func_0x000107c61434(lVar19);
    lVar20 = lVar21;
    uVar17 = uVar10;
    func_0x000100029284();
    if ((uVar17 & 1) == 0) {
      func_0x000107c6142c(lVar19);
      goto LAB_1028cd4c0;
    }
    puVar8 = *(undefined **)(*(long *)(lVar19 + 0x38) + lVar20 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(lVar19);
  }
  func_0x000107c614a8(&puStack_a8);
  func_0x000107c6142c(uVar10);
  lVar3 = lStack_f8;
  func_0x000107c4cde8(lStack_f8);
  func_0x000107c61180();
  func_0x000107c5ee94(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(lVar3);
  func_0x000107c5ee8c();
  (**(code **)((long)puStack_d0 + 8))(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1 * 1000.0);
  puStack_d0 = puVar8;
  func_0x000107c4d664(puVar8);
  func_0x000107c61170(puVar9);
  lVar21 = lStack_e0;
  func_0x000107c5bd28();
  func_0x000107c61180();
  lVar3 = lStack_f0;
  if (lVar21 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cdb5c);
    (*pcVar2)();
  }
  lVar19 = lVar21;
  puStack_100 = puVar7;
  func_0x000107c3f01c();
  func_0x000107c61180();
  func_0x000107c61170(lVar21);
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cdb60);
    (*pcVar2)();
  }
  func_0x000107c3efc4(lVar19);
  func_0x000107c61170(lVar19);
  plVar1 = (long *)(unaff_x20 + _DAT_112ec8770);
  lVar21 = lVar3;
  func_0x000107c4cde0();
  func_0x000107c61180();
  lVar20 = lVar21;
  func_0x000107c5faec();
  lVar18 = lVar4;
  func_0x000107c61170(lVar21);
  lVar21 = *plVar1;
  lVar19 = plVar1[1];
  if ((lVar21 == lVar20) && (lVar19 == lVar4)) {
    func_0x000107c6142c(lVar4);
  }
  else {
    lVar18 = lVar19;
    func_0x000107c605b8(lVar21,lVar19,lVar20,lVar4,0);
    func_0x000107c6142c(lVar4);
  }
  puVar7 = PTR_PTR_1126ab770;
  func_0x000107c610f8();
  func_0x000107c46f80();
  lVar4 = lStack_e0;
  func_0x000107c5bd28();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cdb64);
    (*pcVar2)();
  }
  lVar20 = lVar4;
  func_0x000107c3f01c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar10 = uStack_d8;
  if (lVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028cdb68);
    (*pcVar2)();
  }
  lVar4 = lVar20;
  func_0x000107c3eff0();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (lVar4 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = lVar4;
    func_0x000107c44fd8();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar20 != 0) {
      lVar4 = lVar20;
      func_0x000107c5ee30(lVar20);
      func_0x000107c61170(lVar20);
      lVar20 = lVar4;
      func_0x000107c5ee20(lVar4,lVar18);
      func_0x00010006c090(lVar4,lVar18);
    }
  }
  func_0x000107c52f38(puVar7);
  func_0x000107c61170(lVar20);
  uVar17 = uVar10;
  func_0x0001070b1c70();
  puStack_118 = puVar7;
  if ((int)uVar17 == 0) {
    func_0x000107c5fadc(lVar21,lVar19);
    lVar19 = lVar21;
    func_0x0001070b1d3c(uVar10,lVar21);
    func_0x000107c61180();
    func_0x000107c61170(lVar21);
    lVar4 = lStack_e8;
    if (uVar10 != 0) {
      uVar17 = uVar10;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      if (uVar17 != 0) {
        uVar10 = uVar17;
        func_0x000107c5faec();
        func_0x000107c61170(uVar17);
        func_0x00010446de8c(0);
        func_0x00010446dbbc(uVar10,lVar19);
        func_0x000107c6142c(lVar19);
        lVar4 = lStack_e8;
        goto LAB_1028cd83c;
      }
    }
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    func_0x00010446de8c();
    func_0x00010446db10();
    lVar4 = lStack_e8;
LAB_1028cd83c:
    func_0x000107c61174();
  }
  puVar7 = &UNK_1105642f0;
  func_0x000107c613fc(&UNK_1105642f0,0x18,7);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec8778);
  func_0x000107c61614(puVar7 + 0x10);
  func_0x000107c40674();
  func_0x000107c61180();
  lVar21 = lVar3;
  func_0x000107c5faec();
  uVar15 = 0;
  func_0x000107c60714();
  puVar9 = PTR_PTR_1126ab778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar8 = puStack_100;
  func_0x000107c421ac(puStack_100);
  func_0x000107c61180();
  puVar11 = puVar8;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c56b7c(puVar9);
  func_0x000107c61170(puVar11);
  puVar8 = puStack_d0;
  func_0x000107c421ac(puStack_d0);
  func_0x000107c61180();
  puVar11 = puVar8;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c55a70(puVar9);
  func_0x000107c61170(puVar11);
  func_0x000107c53964(puVar9);
  func_0x000107c61170(lVar3);
  puVar8 = &UNK_110564318;
  func_0x000107c613fc(&UNK_110564318,0x40,7);
  *(long *)(puVar8 + 0x10) = lVar4;
  *(undefined8 *)(puVar8 + 0x18) = uVar15;
  *(ulong *)(puVar8 + 0x20) = uVar10;
  *(undefined **)(puVar8 + 0x28) = puVar7;
  *(long *)(puVar8 + 0x30) = lVar21;
  *(undefined8 *)(puVar8 + 0x38) = uVar5;
  pcStack_88 = FUN_1028cdd04;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100288f10;
  puStack_90 = &UNK_110564330;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar12);
  puVar8 = puStack_80;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c56e74(puVar9);
  func_0x000107c60bd0(ppuVar12);
  uVar5 = 0x112ec8790;
  uVar13 = 0;
  FUN_1028cde3c(0,0x112ec8790,&PTR_PTR_1126ab780);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar15 = uVar13;
  func_0x000107c5faec();
  func_0x000107c61170(uVar13);
  uVar13 = 0;
  FUN_1028cde3c(0,0x112ec8798,&PTR_PTR_1126ab770);
  puVar8 = puStack_118;
  puStack_a8 = puStack_118;
  uVar14 = 0;
  puStack_90 = (undefined *)uVar13;
  FUN_1028cde3c(0,0x112ec87a0,&PTR_PTR_1126ab778);
  apuStack_c8[0] = puVar9;
  uStack_b0 = uVar14;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar9);
  FUN_1027efbc4(uVar15,uVar5,&puStack_a8,apuStack_c8);
  func_0x000107c61574(puVar7);
  func_0x000107c615e8(lStack_f0);
  func_0x000107c615e8(lStack_f8);
  func_0x000107c61170(puStack_100);
  func_0x000107c61170(puStack_d0);
  func_0x000107c61170(lStack_110);
  func_0x000107c61170(lStack_e0);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uStack_108);
  func_0x000107c61170(uVar10);
  return uVar15;
}



/* Entry: 1028cdb6c; end: 1028cdc03; -[SCMissedCallMessagePlugin valdiContextParamsForMessages:conversationParticipants:] */

void FUN_1028cdb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1028cde3c(0,0x112dbe420,&PTR_PTR_1126b2d28);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028cd180(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028cdc04; end: 1028cdc1b; -[SCMissedCallMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028cdc18) */

void FUN_1028cdc04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028cdc1c; end: 1028cdc23; -[SCMissedCallMessagePlugin pluginType] */

undefined8 FUN_1028cdc1c(void)

{
  return 0;
}



/* Entry: 1028cdc24; end: 1028cdc57;  */

void FUN_1028cdc24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028cdc58; end: 1028cdd03; -[SCMissedCallMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028cdca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028cdce8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028cdcac) */
/* WARNING: Removing unreachable block (ram,0x0001028cdcec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028cdc58(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8748));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8750));
  func_0x000100e3b598(param_1 + _DAT_112ec8758);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ec8770 + 8))
  ;
  return;
}



/* Entry: 1028cdd04; end: 1028cddff;  */

void FUN_1028cdd04(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_110564368;
  func_0x000107c613fc(&UNK_110564368,0x31,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar5;
  puVar6[0x30] = param_1;
  pcStack_60 = FUN_1028cde7c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110564380;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c5fb28(lVar8,uVar3);
  func_0x000100162d98(lVar8 + 0x20,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(lVar8);
  return;
}



/* Entry: 1028cde00; end: 1028cde1b;  */

void FUN_1028cde00(long param_1,long param_2)

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



/* Entry: 1028cde1c; end: 1028cde3b;  */

void FUN_1028cde1c(void)

{
  func_0x000107c61168(&PTR_PTR_11286bb18);
  return;
}



/* Entry: 1028cde3c; end: 1028cde7b;  */

void FUN_1028cde3c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028cde7c; end: 1028cdf63;  */

void FUN_1028cde7c(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    cVar1 = *(char *)(unaff_x20 + 0x30);
    lVar2 = *(long *)(unaff_x20 + 0x18) + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c61174(lVar6);
      func_0x000107c5fadc(uVar3,uVar5);
      uVar5 = 1;
      if (cVar1 == '\0') {
        uVar5 = 2;
      }
      uVar4 = 0;
      func_0x000104461378(0);
      func_0x000104460bcc(uVar5,0,0,uVar4);
      func_0x000107c4ab3c(lVar2);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1028cdf64; end: 1028cdf6b;  */

void FUN_1028cdf64(long param_1,long param_2)

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



/* Entry: 1028cdf6c; end: 1028ce2fb;  */

void FUN_1028cdf6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110564460;
  func_0x000107c613fc(&UNK_110564460,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x1028ce058,puVar1);
  return;
}



/* Entry: 1028ce2fc; end: 1028ce30b;  */

undefined1  [16] FUN_1028ce2fc(void)

{
  return ZEXT816(0x110564488);
}



/* Entry: 1028ce30c; end: 1028ce377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ce30c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1028ce700();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ec87e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1028ce378; end: 1028ce3e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ce378(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec87e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028ce3e4; end: 1028ce443; -[_TtC46ClearConversationsScopedFactoryServiceProvider34SCClearConversationsScopedServices init] */

void FUN_1028ce3e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ClearConversationsScopedFactoryServiceProvider.SCClearConversationsScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ce410);
  (*pcVar1)();
}



/* Entry: 1028ce444; end: 1028ce453; -[_TtC46ClearConversationsScopedFactoryServiceProvider34SCClearConversationsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ce444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec87e0));
  return;
}



/* Entry: 1028ce454; end: 1028ce4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ce454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110564660;
  func_0x000107c613fc(&UNK_110564660,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1028ce7dc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028ce4c0; end: 1028ce55b;  */

void FUN_1028ce4c0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110564570;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110564570;
  return;
}



/* Entry: 1028ce55c; end: 1028ce593;  */

void FUN_1028ce55c(long *param_1)

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



/* Entry: 1028ce594; end: 1028ce59b;  */

undefined8 FUN_1028ce594(void)

{
  return 0x1b;
}



/* Entry: 1028ce59c; end: 1028ce6cf;  */

void FUN_1028ce59c(undefined8 *param_1)

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
  puVar1 = &UNK_110564688;
  func_0x000107c613fc(&UNK_110564688,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028ce7b4;
  func_0x00010058fa64(FUN_1028ce7b4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028ce6d0; end: 1028ce6ff;  */

undefined ** FUN_1028ce6d0(void)

{
  return &PTR_DAT_112ec8ae8;
}



/* Entry: 1028ce700; end: 1028ce71f;  */

void FUN_1028ce700(void)

{
  func_0x000107c61168(&PTR_PTR_11286bc18);
  return;
}



/* Entry: 1028ce720; end: 1028ce76f;  */

undefined1  [16] FUN_1028ce720(void)

{
  return ZEXT816(0x1105645c0);
}



/* Entry: 1028ce770; end: 1028ce7b3;  */

void FUN_1028ce770(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec8848 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ab790;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ec8848 = puVar1;
  return;
}



/* Entry: 1028ce7b4; end: 1028ce7db;  */

void FUN_1028ce7b4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1028ce7dc; end: 1028ce7df;  */

void FUN_1028ce7dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028ce7e0; end: 1028ce8f3;  */

/* WARNING: Possible PIC construction at 0x0001028ce8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ce8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ce8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ce8d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ce8c4) */
/* WARNING: Removing unreachable block (ram,0x0001028ce8b4) */
/* WARNING: Removing unreachable block (ram,0x0001028ce8a4) */
/* WARNING: Removing unreachable block (ram,0x0001028ce8d4) */

void FUN_1028ce7e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110564710;
  func_0x000107c613fc(&UNK_110564710,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  uVar2 = 0x112ec8858;
  func_0x0001000285a8(0x112ec8858,&UNK_10daeb3e8);
  func_0x000107c613fc();
  uVar3 = 0x1028cece4;
  func_0x0001000841fc(0x1028cece4,puVar1,uVar2);
  func_0x000100084214(&UNK_10daeb3b0,0x30,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1028ce8f4; end: 1028ce917;  */

/* WARNING: Possible PIC construction at 0x0001028ce8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ce8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ce8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ce8d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ce8c4) */
/* WARNING: Removing unreachable block (ram,0x0001028ce8b4) */
/* WARNING: Removing unreachable block (ram,0x0001028ce8a4) */
/* WARNING: Removing unreachable block (ram,0x0001028ce8d4) */

void FUN_1028ce8f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_110564710;
  func_0x000107c613fc(&UNK_110564710,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112ec8858;
  func_0x0001000285a8(0x112ec8858,&UNK_10daeb3e8);
  func_0x000107c613fc();
  uVar9 = 0x1028cece4;
  func_0x0001000841fc(0x1028cece4,puVar7,uVar8);
  func_0x000100084214(&UNK_10daeb3b0,0x30,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1028ce918; end: 1028cec87;  */

void FUN_1028ce918(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ec8860,&UNK_10daeb3f0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1028d0208();
  func_0x000100082720("ClearConversationsScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ec8868,&UNK_10daeb400);
  puVar3 = &UNK_110564738;
  func_0x000107c613fc(&UNK_110564738,0x58,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar8 = 0x1028ced14;
  func_0x0001000823a8(0x1028ced14,puVar3);
  func_0x000100082720("SCClearConversationsScopeEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1028ce55c;
  func_0x0001000823a8(FUN_1028ce55c,0);
  func_0x000100082720("SCClearConversationsScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ec8870,&UNK_10daeb3f8);
  puVar3 = &UNK_110564760;
  func_0x000107c613fc(&UNK_110564760,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_1028ced48;
  func_0x0001000823a8(FUN_1028ced48,puVar3);
  func_0x000100082720("SCClearConversationsScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112ec87e8,&UNK_10daeb180);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1028ced54;
  func_0x0001000823a8(0x1028ced54,pcVar5);
  func_0x000100082720("SCClearConversationsScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ec87d8,&UNK_10daeb170);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1028ced5c;
  func_0x0001000823a8(0x1028ced5c,uVar6);
  func_0x000100082720("SCClearConversationsScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110564788;
  func_0x000107c613fc(&UNK_110564788,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1028ced64;
  func_0x0001000823a8(0x1028ced64,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCClearConversationsScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar7;
  return;
}


