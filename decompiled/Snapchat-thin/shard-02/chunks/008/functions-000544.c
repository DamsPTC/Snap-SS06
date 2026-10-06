/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021f6494; end: 1021f65b3;  */

void FUN_1021f6494(long param_1,long param_2,long param_3)

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
                        "WebBrowserLinkHistoryScopeGraphBridge/SCWebBrowserLinkHistoryScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f65b4);
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



/* Entry: 1021f65b4; end: 1021f665f; -[SCWebBrowserLinkHistoryScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1021f65b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021f6494(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021f6660; end: 1021f66bf; -[SCWebBrowserLinkHistoryScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f6660(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e64048,0);
  *(undefined8 *)(param_1 + _DAT_112e64050) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021f66c0; end: 1021f66f3;  */

void FUN_1021f66c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021f66f4; end: 1021f672b; -[SCWebBrowserLinkHistoryScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f66f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e64048);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e64050));
  return;
}



/* Entry: 1021f672c; end: 1021f674b;  */

void FUN_1021f672c(void)

{
  func_0x000107c61168(&PTR_PTR_112829c98);
  return;
}



/* Entry: 1021f674c; end: 1021f67af;  */

undefined8
FUN_1021f674c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1021f67b0(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 1021f67b0; end: 1021f6a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021f67b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  
  puVar2 = &UNK_1104e1eb0;
  func_0x000107c613fc(&UNK_1104e1eb0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  func_0x0001000285a8(0x112e64080,&UNK_10da6e210);
  func_0x000107c61534();
  func_0x000107c61174();
  pcVar3 = FUN_1021f6b00;
  func_0x0001000bdd8c(FUN_1021f6b00,puVar2);
  pcVar4 = "init(valdiRuntime:mainQueuePerformer:)";
  func_0x0001000c10c0("init(valdiRuntime:mainQueuePerformer:)");
  func_0x000107c61180();
  uVar5 = 0;
  FUN_1021f756c(0);
  func_0x000107c610f8();
  FUN_1021f6bf4(pcVar3,pcVar4,uVar5);
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c4807c();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112e641d0);
  func_0x000107c615f0(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar4 = 
  "init(presentingUiContainer:webBrowserScopeExposer:webBrowserScopeServices:uiContainer:mainQueuePerformer:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar6 = 0;
  FUN_1021f7a14();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112e64170) = 0;
  func_0x000107c61614(lVar7 + _DAT_112e641a0,0);
  *(undefined8 *)(lVar7 + _DAT_112e64178) = uVar5;
  *(undefined8 *)(lVar7 + _DAT_112e64180) = param_4;
  *(undefined8 *)(lVar7 + _DAT_112e64188) = param_3;
  *(undefined **)(lVar7 + _DAT_112e64190) = puVar2;
  *(char **)(lVar7 + _DAT_112e64198) = pcVar4;
  plVar8 = &lStack_88;
  lStack_88 = lVar7;
  lStack_80 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x10) = plVar8;
  uVar5 = *(undefined8 *)((long)plVar8 + _DAT_112e64170);
  *(code **)((long)plVar8 + _DAT_112e64170) = pcVar3;
  func_0x000107c61170(uVar5);
  lVar7 = _DAT_112e641d8;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(param_1 + _DAT_112e641d8,auStack_a0,0,0);
  lVar7 = param_1 + lVar7;
  func_0x000107c61618(lVar7);
  func_0x000107c61174(lVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar2);
  func_0x000107c61604(lVar6 + _DAT_112e641a0,lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c615e8(lVar7);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar1 = pcVar3 + _DAT_112e64128;
  *(undefined ***)(pcVar1 + 8) = &PTR_DAT_1104e2028;
  func_0x000107c61604(pcVar1,uVar5);
  func_0x000107c61170(pcVar3);
  return unaff_x20;
}



/* Entry: 1021f6a88; end: 1021f6aff;  */

void FUN_1021f6a88(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1021f6b00; end: 1021f6b33;  */

void FUN_1021f6b00(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1021f6b34; end: 1021f6b57;  */

undefined8 FUN_1021f6b34(void)

{
  FUN_1021f76c0();
  return 0;
}



/* Entry: 1021f6b58; end: 1021f6b7b;  */

void FUN_1021f6b58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021f6b7c; end: 1021f6bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f6b7c(void)

{
  long *unaff_x20;
  
  if (*(long *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112e64170) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112e64178),
               PTR_s_attachUI__1125a0c08);
    return;
  }
  return;
}



/* Entry: 1021f6bac; end: 1021f6bd3;  */

undefined8 FUN_1021f6bac(void)

{
  FUN_1021f76c0();
  return 0;
}



/* Entry: 1021f6bd4; end: 1021f6bf3;  */

void FUN_1021f6bd4(void)

{
  func_0x000107c61168(&PTR_PTR_112e640c8);
  return;
}



/* Entry: 1021f6bf4; end: 1021f6dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021f6bf4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined *puVar6;
  long lStack_68;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112e64128;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112e64130;
  *(undefined8 *)(unaff_x20 + _DAT_112e64130) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e64140) = param_2;
  puVar2 = PTR_PTR_1126aa1c0;
  func_0x000107c610f8(PTR_PTR_1126aa1c0);
  func_0x000107c615f0(param_2);
  func_0x000107c453e4(puVar2);
  func_0x0001002ed07c(0);
  uVar3 = 1;
  func_0x000107c6010c(1);
  func_0x000107c54d14(puVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126aa1c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112e64138) = puVar4;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  puVar5 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  FUN_1021f6dcc();
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    func_0x000107c615e8(param_2);
    func_0x000107c61574(param_1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126aa1d0;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c615e8(lStack_68);
    func_0x000107c61574(param_1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(param_2);
  }
  uVar3 = *(undefined8 *)(puVar5 + _DAT_112e64130);
  *(undefined **)(puVar5 + _DAT_112e64130) = puVar6;
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  return puVar5;
}



/* Entry: 1021f6dcc; end: 1021f6f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f6dcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e64138);
  puVar4 = &UNK_1104e1ef8;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_1104e1ef8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1021f7664;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_1000f6b44;
  puStack_68 = &UNK_1104e1f10;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c541e0(uVar7);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c613fc(&UNK_1104e1ef8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcStack_60 = (code *)0x1021f7688;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1021f7340;
  puStack_68 = &UNK_1104e1f38;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56fe0(uVar7);
  func_0x000107c60bd0(ppuVar5);
  pcStack_60 = (code *)0x1021f738c;
  puStack_58 = (undefined *)0x0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1021f7414;
  puStack_68 = &UNK_1104e1f60;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c53ec0(uVar7);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 1021f6f50; end: 1021f6fd3; -[_TtC42WebBrowserLinkHistoryFeatureImplementation35WebBrowserLinkHistoryViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f6f50(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + _DAT_112e64128;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(param_1 + _DAT_112e64130) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "WebBrowserLinkHistoryFeatureImplementation/WebBrowserLinkHistoryViewController.swift"
                      ,0x54,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021f6fd4);
  (*pcVar2)();
}



/* Entry: 1021f6fd4; end: 1021f705f; -[_TtC42WebBrowserLinkHistoryFeatureImplementation35WebBrowserLinkHistoryViewController viewWillAppear:] */

void FUN_1021f6fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar2 = param_1;
  func_0x000107c4f044();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c53fcc();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021f7060; end: 1021f7077; -[_TtC42WebBrowserLinkHistoryFeatureImplementation35WebBrowserLinkHistoryViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7060(long param_1)

{
  if (*(long *)(param_1 + _DAT_112e64130) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setView__112666308);
    return;
  }
  return;
}



/* Entry: 1021f7078; end: 1021f7177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7078(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112e64140);
    puVar1 = &UNK_1104e1fe8;
    func_0x000107c613fc(&UNK_1104e1fe8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_1;
    uStack_58 = 0x1021f7698;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104e2000;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 1021f7178; end: 1021f71df;  */

/* WARNING: Possible PIC construction at 0x0001021f71c0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7178(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112e64128;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + _DAT_112e641a0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42008();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1021f71e0; end: 1021f72f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f71e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112e64140);
    puVar1 = &UNK_1104e1f98;
    func_0x000107c613fc(&UNK_1104e1f98,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    uStack_68 = 0x1021f7690;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104e1fb0;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 1021f72f4; end: 1021f733f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f72f4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + _DAT_112e64128;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1021f7780(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1021f7340; end: 1021f7413;  */

void FUN_1021f7340(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1021f7414; end: 1021f74b3;  */

void FUN_1021f7414(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c5ee30(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = param_2;
  uVar5 = uVar4;
  (*pcVar1)(param_2,uVar4);
  func_0x00010006c090(param_2,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1021f74b4; end: 1021f7513; -[_TtC42WebBrowserLinkHistoryFeatureImplementation35WebBrowserLinkHistoryViewController initWithNibName:bundle:] */

void FUN_1021f74b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowserLinkHistoryFeatureImplementation.WebBrowserLinkHistoryViewController"
                      ,0x4e,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f74e0);
  (*pcVar1)();
}



/* Entry: 1021f7514; end: 1021f756b; -[_TtC42WebBrowserLinkHistoryFeatureImplementation35WebBrowserLinkHistoryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7514(long param_1)

{
  func_0x0001021f7640(param_1 + _DAT_112e64128);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e64130));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e64138));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e64140));
  return;
}



/* Entry: 1021f756c; end: 1021f758b;  */

void FUN_1021f756c(void)

{
  func_0x000107c61168(&PTR_PTR_112829d58);
  return;
}



/* Entry: 1021f758c; end: 1021f75d7; -[_TtC42WebBrowserLinkHistoryFeatureImplementation35WebBrowserLinkHistoryViewController presentationControllerDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001021f75c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021f75c4) */

void FUN_1021f758c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021f75d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1021f75d8; end: 1021f7663;  */

/* WARNING: Possible PIC construction at 0x0001021f7620: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f75d8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112e64128;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1 + _DAT_112e641a0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c42008();
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1021f7664; end: 1021f76bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7664(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112e64140);
    puVar2 = &UNK_1104e1fe8;
    func_0x000107c613fc(&UNK_1104e1fe8,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    uStack_58 = 0x1021f7698;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104e2000;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 1021f76c0; end: 1021f777b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f76c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e64180);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e64178);
  pcStack_30 = FUN_1021f777c;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_1000b0c7c;
  puStack_38 = &UNK_1104e2040;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c41864(uVar4,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1021f777c; end: 1021f777f;  */

void FUN_1021f777c(void)

{
  return;
}



/* Entry: 1021f7780; end: 1021f7927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7780(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = param_1;
  func_0x000107c3d9f4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5d7e8(param_1);
    func_0x000107c61180();
    lVar1 = param_1;
  }
  lVar3 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000107c5edd0(puVar7,lVar3,puVar5);
  func_0x000107c6142c(puVar5);
  puVar4 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x0001000293e4(puVar7);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar2);
    lVar1 = lVar6;
    func_0x000103b80ee4(*(undefined8 *)(unaff_x20 + _DAT_112e64188),lVar6,
                        *(undefined8 *)(unaff_x20 + _DAT_112e64190),0x1c);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112e64180));
    func_0x000107c61170(lVar1);
    (**(code **)(lVar8 + 8))(lVar6,lVar2);
  }
  return;
}



/* Entry: 1021f7928; end: 1021f792b;  */

void FUN_1021f7928(void)

{
  return;
}



/* Entry: 1021f792c; end: 1021f798b; -[_TtC42WebBrowserLinkHistoryFeatureImplementation29WebBrowserLinkHistoryWorkflow init] */

void FUN_1021f792c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowserLinkHistoryFeatureImplementation.WebBrowserLinkHistoryWorkflow",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f7958);
  (*pcVar1)();
}



/* Entry: 1021f798c; end: 1021f7a13; -[_TtC42WebBrowserLinkHistoryFeatureImplementation29WebBrowserLinkHistoryWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021f798c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e64170));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e64178));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e64180));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e64188));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e64190));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e64198));
  param_1 = param_1 + _DAT_112e641a0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1021f7a14; end: 1021f7a33;  */

void FUN_1021f7a14(void)

{
  func_0x000107c61168(&PTR_PTR_112829e30);
  return;
}



/* Entry: 1021f7a34; end: 1021f7ab7; -[_TtC42WebBrowserLinkHistoryFeatureImplementation29WebBrowserLinkHistoryWorkflow webBrowserScopeDidComplete] */

/* WARNING: Possible PIC construction at 0x0001021f7a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021f7a8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021f7a74) */
/* WARNING: Removing unreachable block (ram,0x0001021f7a90) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7a34(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021f7ab8; end: 1021f7adb;  */

undefined8 FUN_1021f7ab8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1021f7adc; end: 1021f7af7;  */

void FUN_1021f7adc(long param_1,long param_2)

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



/* Entry: 1021f7af8; end: 1021f7b17; -[_TtC26WebBrowserLinkHistoryScope26WebBrowserLinkHistoryScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7af8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e641d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021f7b18; end: 1021f7b5f; -[_TtC26WebBrowserLinkHistoryScope26WebBrowserLinkHistoryScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7b18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e641d8;
  func_0x000107c61428(param_1 + _DAT_112e641d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021f7b60; end: 1021f7bb7; -[_TtC26WebBrowserLinkHistoryScope26WebBrowserLinkHistoryScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e641d8;
  func_0x000107c61428(param_1 + _DAT_112e641d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021f7bb8; end: 1021f7c3b; -[_TtC26WebBrowserLinkHistoryScope26WebBrowserLinkHistoryScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021f7bb8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e641d0));
  param_1 = param_1 + _DAT_112e641d8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1021f7c3c; end: 1021f7ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7c3c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021f7ec4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e641e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021f7ca4; end: 1021f7cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7ca4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e641e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021f7cf0; end: 1021f7dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1021f7cf0(long param_1,undefined8 param_2)

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
  FUN_1021f7e4c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112e641d8;
  func_0x000107c61614(lVar4 + _DAT_112e641d8,0);
  *(long *)(lVar4 + _DAT_112e641d0) = param_1;
  func_0x000107c61428(lVar4 + lVar2,auStack_58,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_1);
  plVar5 = &lStack_68;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  func_0x000107c61574(uStack_70);
  func_0x000107c615e8(aplStack_80[0]);
  return plVar5;
}



/* Entry: 1021f7dd8; end: 1021f7e4b; -[_TtC26WebBrowserLinkHistoryScope34WebBrowserLinkHistoryScopeServices buildWithUiContainer:delegate:] */

void FUN_1021f7dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1021f7cf0(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021f7e4c; end: 1021f7e6b;  */

void FUN_1021f7e4c(void)

{
  func_0x000107c61168(&PTR_PTR_112829f20);
  return;
}



/* Entry: 1021f7e6c; end: 1021f7e6f;  */

void FUN_1021f7e6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021f7e70; end: 1021f7ea3;  */

void FUN_1021f7e70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021f7ea4; end: 1021f7ec3; -[_TtC26WebBrowserLinkHistoryScope34WebBrowserLinkHistoryScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f7ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e641e8));
  return;
}



/* Entry: 1021f7ec4; end: 1021f7ee3;  */

void FUN_1021f7ec4(void)

{
  func_0x000107c61168(&PTR_PTR_112829fe8);
  return;
}



/* Entry: 1021f7ee4; end: 1021f7ef7;  */

undefined1  [16] FUN_1021f7ee4(void)

{
  return ZEXT816(0x1104e2120);
}



/* Entry: 1021f7ef8; end: 1021f7f9b;  */

void FUN_1021f7ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104e21f8;
  func_0x000107c613fc(&UNK_1104e21f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021f7f9c,puVar1);
  return;
}



/* Entry: 1021f7f9c; end: 1021f80e7;  */

void FUN_1021f7f9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1104e2240;
  uVar8 = 0x30;
  func_0x000107c613fc(&UNK_1104e2240,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  pcStack_60 = FUN_1021f8134;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_1104e2258;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x0001000a0a8c(0);
  ppuVar7 = &PTR____CFConstantStringClassReference_110e25eb8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e25eb8);
  puVar6 = puVar5;
  func_0x000100a0dc54(puVar5,ppuVar7,uVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c6142c(uVar8);
  *param_1 = puVar6;
  return;
}



/* Entry: 1021f80e8; end: 1021f80f7;  */

undefined1  [16] FUN_1021f80e8(void)

{
  return ZEXT816(0x1104e2220);
}



/* Entry: 1021f80f8; end: 1021f8133;  */

void FUN_1021f80f8(void)

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



/* Entry: 1021f8134; end: 1021f82ab;  */

undefined * FUN_1021f8134(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = PTR_PTR_1126c3810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_1104e2290;
  func_0x000107c613fc(&UNK_1104e2290,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x28) = uVar2;
  pcStack_60 = FUN_1021f8300;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x1021f8410;
  puStack_68 = &UNK_1104e22a8;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(puVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000100083b20(&puStack_80);
  puVar6 = puStack_80;
  puVar8 = puStack_80;
  func_0x000107c5b130(puStack_80);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126aa1d8;
  func_0x000107c610f8(PTR_PTR_1126aa1d8);
  func_0x000107c48880();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  return puVar6;
}



/* Entry: 1021f82ac; end: 1021f82e3;  */

void FUN_1021f82ac(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1021f82e4; end: 1021f82ff;  */

void FUN_1021f82e4(long param_1,long param_2)

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



/* Entry: 1021f8300; end: 1021f8407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021f8300(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c3eba8(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&lStack_50);
  uVar3 = *(undefined8 *)(lStack_50 + _DAT_113093a98);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_50);
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126c3820;
    func_0x000107c610f8(PTR_PTR_1126c3820);
    func_0x000107c45a40();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f8408);
  (*pcVar1)();
}



/* Entry: 1021f8408; end: 1021f8413;  */

void FUN_1021f8408(long param_1,long param_2)

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



/* Entry: 1021f8414; end: 1021f85b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021f8414(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  puVar5 = &stack0xffffffffffffffa0;
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e64268) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e64270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e64258) = param_1;
  puVar3 = &UNK_1104e2390;
  func_0x000107c613fc(&UNK_1104e2390,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(long *)(puVar3 + 0x18) = lVar2;
  func_0x0001000285a8(0x112d61fe0,&UNK_10d992300);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  pcVar4 = FUN_1021fb2e4;
  func_0x0001000bdd8c(FUN_1021fb2e4,puVar3);
  *(code **)(unaff_x20 + _DAT_112e64260) = pcVar4;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  puVar3 = &UNK_1104e23b8;
  func_0x000107c613fc(&UNK_1104e23b8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,puVar5);
  func_0x0001000285a8(0x112d61fe8,&UNK_10d927fa0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar6 = 0x1021fb2ec;
  func_0x0001000bdd8c(0x1021fb2ec,puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  uVar7 = *(undefined8 *)(puVar5 + _DAT_112e64268);
  *(undefined8 *)(puVar5 + _DAT_112e64268) = uVar6;
  func_0x000107c61170(puVar5);
  func_0x000107c61574(uVar7);
  return puVar5;
}



/* Entry: 1021f85b8; end: 1021f874f;  */

void FUN_1021f85b8(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f070fb0);
    lVar2 = param_2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    func_0x000107c61170(uVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1021f8750; end: 1021f8763; -[_TtC24NewFriendsShortcutPlugin28NewFriendsShortcutPluginImpl shortcutForSource:] */

void FUN_1021f8750(void)

{
  FUN_1021fb188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021f8764; end: 1021f877b; -[_TtC24NewFriendsShortcutPlugin28NewFriendsShortcutPluginImpl shortcutId] */

/* WARNING: Removing unreachable block (ram,0x0001021f8778) */

void FUN_1021f8764(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1021f877c; end: 1021f8787; -[_TtC24NewFriendsShortcutPlugin28NewFriendsShortcutPluginImpl shouldShowForSource:] */

bool FUN_1021f877c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) == 0;
}



/* Entry: 1021f8788; end: 1021f87d7;  */

uint FUN_1021f8788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  uVar1 = 0;
  FUN_1021fb148(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c60118(uVar2,uVar3,uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 1021f87d8; end: 1021f8873; -[_TtC24NewFriendsShortcutPlugin28NewFriendsShortcutPluginImpl recipientsForSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f87d8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + _DAT_112e64268);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c6157c(lVar3);
    func_0x0001000d224c(&uStack_38);
    func_0x000107c61574(lVar3);
    pcVar1 = FUN_1021f8788;
    func_0x00010487de38(FUN_1021f8788,0);
    func_0x000107c61574(uStack_38);
    uVar2 = uStack_38;
    func_0x0001004575f0();
    func_0x000107c61170(param_1);
    func_0x000107c61574(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f8874);
  (*pcVar1)();
}



/* Entry: 1021f8874; end: 1021f8bcb; -[_TtC24NewFriendsShortcutPlugin28NewFriendsShortcutPluginImpl pauseUpdates] */

/* WARNING: Possible PIC construction at 0x0001021f88d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021f88d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f8874(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  plVar1 = (long *)(param_1 + _DAT_112e64270);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
    *plVar1 = 0;
    plVar1[1] = 0;
    func_0x000107c61170(param_1);
  }
  else {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1021f8bcc; end: 1021f8bf3; -[_TtC24NewFriendsShortcutPlugin28NewFriendsShortcutPluginImpl resumeUpdates] */

void FUN_1021f8bcc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001021f890c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021f8bf4; end: 1021f8bfb; -[_TtC24NewFriendsShortcutPlugin28NewFriendsShortcutPluginImpl alwaysShow] */

undefined8 FUN_1021f8bf4(void)

{
  return 0;
}



/* Entry: 1021f8bfc; end: 1021f8c67;  */

void FUN_1021f8bfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_28;
  
  uVar3 = *param_2;
  puStack_28 = (undefined *)0x0;
  uVar2 = 0;
  FUN_1021fb148(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5fc50(uVar3,&puStack_28,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 1021f8c68; end: 1021f91b7;  */

/* WARNING: Removing unreachable block (ram,0x0001021f91ac) */

void FUN_1021f8c68(undefined8 *param_1,ulong *param_2,undefined *param_3,undefined8 param_4,
                  undefined **param_5)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined *puStack_68;
  
  uVar20 = *param_2;
  uVar19 = uVar20 & 0xffffffffffffff8;
  if (uVar20 >> 0x3e == 0) {
    uVar22 = *(ulong *)(uVar19 + 0x10);
  }
  else {
    uVar22 = uVar19;
    if (0x7fffffffffffffff < uVar20) {
      uVar22 = uVar20;
    }
    func_0x000107c60480();
  }
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar22 != 0) {
    uVar24 = 0;
    do {
      while( true ) {
        if ((uVar20 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar19 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f8d94);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(uVar20 + uVar24 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar24;
          func_0x00010103193c(uVar24,uVar20);
        }
        uVar1 = uVar24 + 1;
        if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f8d90);
          (*pcVar3)();
        }
        param_3 = (undefined *)0x1e;
        uVar6 = uVar5;
        func_0x00010901e254(uVar5,0x1e);
        if ((uVar6 & 1) != 0) break;
        func_0x000107c61170(uVar5);
        uVar24 = uVar24 + 1;
        if (uVar1 == uVar22) goto LAB_1021f8db0;
      }
      puVar7 = puVar16;
      func_0x000107c61558();
      puStack_68 = puVar16;
      if (((ulong)puVar7 & 1) == 0) {
        param_3 = (undefined *)(*(long *)(puVar16 + 0x10) + 1);
        func_0x0001010673e4(0,param_3,1);
      }
      uVar24 = *(ulong *)(puStack_68 + 0x10);
      puVar16 = (undefined *)(uVar24 + 1);
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar24) {
        param_3 = puVar16;
        func_0x0001010673e4(1 < *(ulong *)(puStack_68 + 0x18),puVar16,1);
      }
      *(undefined **)(puStack_68 + 0x10) = puVar16;
      *(ulong *)(puStack_68 + uVar24 * 8 + 0x20) = uVar5;
      puVar16 = puStack_68;
      uVar24 = uVar1;
    } while (uVar1 != uVar22);
  }
LAB_1021f8db0:
  if (((long)puVar16 < 0) || (((ulong)puVar16 >> 0x3e & 1) != 0)) {
    puVar7 = puVar16;
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c6157c(puVar16);
      param_5 = &PTR_PTR_1126b15c8;
      puVar8 = puVar7;
      FUN_1021f97e0(puVar7,0,0x112d4ed88,&PTR_PTR_1126b15c8,0x112d4edc0,&UNK_10d914cd0);
      param_3 = puVar7;
      puVar23 = puVar16;
      func_0x000100f63690(puVar8 + 0x20,puVar7);
      func_0x000107c6142c();
      if (puVar23 != puVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f919c);
        (*pcVar3)();
      }
    }
  }
  else {
    func_0x000107c6157c(puVar16);
    puVar8 = puVar16;
  }
  puStack_68 = puVar8;
  FUN_1021f96d0(&puStack_68);
  func_0x000107c61574(puVar16);
  puVar16 = puStack_68;
  uVar18 = (uint)((ulong)puStack_68 >> 0x3e) & 1;
  if ((long)puStack_68 < 0) {
    uVar18 = 1;
  }
  if (uVar18 == 1) {
    puVar7 = puStack_68;
    func_0x000107c60480();
    if ((long)puVar7 < 3) goto LAB_1021f90f0;
    puVar7 = puVar16;
    func_0x000107c60480();
    puVar8 = puVar16;
    func_0x000107c60480();
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f91ac);
      (*pcVar3)();
    }
    if ((undefined *)0x63 < puVar7) {
      puVar7 = (undefined *)0x64;
    }
    puVar8 = puVar16;
    func_0x000107c60480();
    if ((long)puVar8 < (long)puVar7) goto LAB_1021f90ec;
  }
  else {
    puVar8 = *(undefined **)(puStack_68 + 0x10);
    if (puVar8 < (undefined *)0x3) {
LAB_1021f90f0:
      func_0x000107c61574(puVar16);
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      func_0x000107c453e4();
      goto LAB_1021f910c;
    }
    puVar7 = puVar8;
    if ((undefined *)0x63 < puVar8) {
      puVar7 = (undefined *)0x64;
    }
    if ((long)puVar8 < (long)puVar7) {
LAB_1021f90ec:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f90f0);
      (*pcVar3)();
    }
  }
  if ((((ulong)puVar16 & 0xc000000000000001) == 0) || (puVar7 == (undefined *)0x0)) {
    func_0x000107c61434(puVar16);
  }
  else {
    uVar9 = 0;
    FUN_1021fb148(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    func_0x000107c61434(puVar16);
    puVar8 = (undefined *)0x0;
    do {
      puVar23 = puVar8 + 1;
      param_3 = puVar16;
      func_0x000107c60318(puVar8,puVar16,uVar9);
      puVar8 = puVar23;
    } while (puVar7 != puVar23);
  }
  func_0x000107c61574(puVar16);
  if (uVar18 == 0) {
    puVar23 = (undefined *)0x0;
    puVar8 = puVar16 + 0x20;
    puVar21 = puVar7;
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 != (undefined *)0x0) goto LAB_1021f8eb8;
  }
  else {
    puVar8 = (undefined *)0x0;
    puVar23 = puVar16;
    func_0x000107c60484(0);
    param_3 = puVar7;
    func_0x000107c61574(puVar16);
    puVar16 = puVar8;
    puVar21 = (undefined *)((ulong)param_5 >> 1);
    puVar8 = puVar7;
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar23 != (undefined *)((ulong)param_5 >> 1)) {
LAB_1021f8eb8:
      puVar7 = puVar23;
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar17 = puVar23;
      do {
        while( true ) {
          if (((long)puVar17 < (long)puVar23) || ((long)puVar21 <= (long)puVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f90a8);
            (*pcVar3)();
          }
          lVar10 = *(long *)(puVar8 + (long)puVar7 * 8);
          puVar2 = puVar7 + 1;
          func_0x000107c61174();
          lVar11 = lVar10;
          func_0x000107c5d984();
          func_0x000107c61180();
          if (lVar11 != 0) break;
          func_0x000107c61170(lVar10);
          puVar7 = puVar2;
          if (puVar21 == puVar2) goto LAB_1021f9068;
        }
        lVar12 = lVar11;
        func_0x000107c5faec();
        func_0x000107c61170(lVar11);
        puVar13 = PTR_PTR_1126b14a0;
        func_0x000107c61168();
        func_0x000107c61434(param_3);
        func_0x000107c5fadc(lVar12,param_3);
        func_0x000107c5b498();
        func_0x000107c61180();
        puVar17 = (undefined *)0x2;
        func_0x000107c61430(param_3);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar12);
        puVar14 = puVar15;
        func_0x000107c61550();
        if ((((int)puVar14 == 0) || ((long)puVar15 < 0)) || (((ulong)puVar15 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar15 >> 0x3e == 0) {
            puVar17 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar17 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar15) {
              puVar17 = puVar15;
            }
            func_0x000107c60480();
          }
          puVar17 = puVar17 + 1;
          puVar14 = (undefined *)0x0;
          func_0x00010117ee1c(0,puVar17,1,puVar15);
          puVar15 = puVar14;
        }
        uVar20 = (ulong)puVar15 & 0xffffffffffffff8;
        uVar19 = *(ulong *)(uVar20 + 0x10);
        puVar14 = (undefined *)(uVar19 + 1);
        if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar19) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar20 + 0x18));
          puVar17 = puVar14;
          func_0x00010117ee1c(puVar15,puVar14,1);
          uVar20 = (ulong)puVar15 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar20 + 0x10) = puVar14;
        *(undefined **)(uVar20 + uVar19 * 8 + 0x20) = puVar13;
        bVar4 = puVar21 + -1 != puVar7;
        param_3 = puVar17;
        puVar7 = puVar2;
        puVar17 = puVar2;
      } while (bVar4);
    }
  }
LAB_1021f9068:
  func_0x000107c615e8(puVar16);
  uVar9 = 0;
  FUN_1021fb148(0,0x112d61f60,&PTR_PTR_1126b14a0);
  puVar16 = puVar15;
  func_0x000107c5fc48(puVar15,uVar9);
  func_0x000107c6142c(puVar15);
LAB_1021f910c:
  *param_1 = puVar16;
  return;
}



/* Entry: 1021f91b8; end: 1021f948b;  */

bool FUN_1021f91b8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_68 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar7 - extraout_x12_01;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar4 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12_02;
  lVar2 = *param_1;
  lStack_70 = *param_2;
  func_0x00010901e19c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5ee94(lVar9);
    func_0x000107c61170(lVar2);
  }
  pcVar3 = *(code **)(lVar8 + 0x38);
  (*pcVar3)(lVar9,lVar2 == 0,1,lVar1);
  func_0x0001003a4c00(lVar9,lVar7);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar2 = lVar7;
  (*pcVar10)(lVar7,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000107c5ee60(lVar5);
    lVar2 = lVar7;
    (*pcVar10)(lVar7,1,lVar1);
    if ((int)lVar2 != 1) {
      func_0x0001000d1dcc(lVar7);
    }
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar5,lVar7,lVar1);
  }
  lVar2 = lStack_70;
  func_0x00010901e19c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5ee94(lVar6);
    func_0x000107c61170(lVar2);
  }
  (*pcVar3)(lVar6,lVar2 == 0,1,lVar1);
  lVar2 = lStack_68;
  func_0x0001003a4c00(lVar6,lStack_68);
  lVar6 = lVar2;
  (*pcVar10)(lVar2,1,lVar1);
  if ((int)lVar6 == 1) {
    func_0x000107c5ee60(lVar4);
    lVar6 = lVar2;
    (*pcVar10)(lVar2,1,lVar1);
    if ((int)lVar6 != 1) {
      func_0x0001000d1dcc(lVar2);
    }
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar4,lVar2,lVar1);
  }
  lVar2 = lVar4;
  func_0x000107c5ee9c(lVar4);
  pcVar3 = *(code **)(lVar8 + 8);
  (*pcVar3)(lVar4,lVar1);
  (*pcVar3)(lVar5,lVar1);
  return lVar2 == 1;
}



/* Entry: 1021f948c; end: 1021f94eb; -[_TtC24NewFriendsShortcutPlugin28NewFriendsShortcutPluginImpl init] */

void FUN_1021f948c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NewFriendsShortcutPlugin.NewFriendsShortcutPluginImpl",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f94b8);
  (*pcVar1)();
}



/* Entry: 1021f94ec; end: 1021f9543; -[_TtC24NewFriendsShortcutPlugin28NewFriendsShortcutPluginImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f94ec(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e64258));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e64260));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e64268));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e64270));
  return;
}



/* Entry: 1021f9544; end: 1021f9563;  */

void FUN_1021f9544(void)

{
  func_0x000107c61168(&PTR_PTR_11282a0a8);
  return;
}



/* Entry: 1021f9564; end: 1021f95d3;  */

void FUN_1021f9564(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112e642a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e17d68;
  func_0x00010002969c(0x112e17d68,&UNK_10daf6410);
  uVar2 = uVar1;
  FUN_1021f95d4();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112e642a0 = puVar3;
  return;
}



/* Entry: 1021f95d4; end: 1021f9627;  */

void FUN_1021f95d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e642a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1021fb148(0xff,0x112d4ed88,&PTR_PTR_1126b15c8);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112e642a8 = puVar2;
  return;
}



/* Entry: 1021f9628; end: 1021f962f;  */

/* WARNING: Removing unreachable block (ram,0x0001021f91ac) */

void FUN_1021f9628(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined *puVar19;
  long unaff_x20;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined *puStack_68;
  
  puVar16 = *(undefined **)(unaff_x20 + 0x10);
  uVar20 = *param_2;
  uVar18 = uVar20 & 0xffffffffffffff8;
  if (uVar20 >> 0x3e == 0) {
    uVar22 = *(ulong *)(uVar18 + 0x10);
  }
  else {
    uVar22 = uVar18;
    if (0x7fffffffffffffff < uVar20) {
      uVar22 = uVar20;
    }
    func_0x000107c60480(uVar22,puVar16);
  }
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar22 != 0) {
    uVar24 = 0;
    do {
      while( true ) {
        if ((uVar20 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f8d94);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(uVar20 + uVar24 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar24;
          func_0x00010103193c(uVar24,uVar20);
        }
        uVar1 = uVar24 + 1;
        if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f8d90);
          (*pcVar3)();
        }
        puVar16 = (undefined *)0x1e;
        uVar6 = uVar5;
        func_0x00010901e254(uVar5,0x1e);
        if ((uVar6 & 1) != 0) break;
        func_0x000107c61170(uVar5);
        uVar24 = uVar24 + 1;
        if (uVar1 == uVar22) goto LAB_1021f8db0;
      }
      puVar7 = puVar19;
      func_0x000107c61558();
      puStack_68 = puVar19;
      if (((ulong)puVar7 & 1) == 0) {
        puVar16 = (undefined *)(*(long *)(puVar19 + 0x10) + 1);
        func_0x0001010673e4(0,puVar16,1);
      }
      uVar24 = *(ulong *)(puStack_68 + 0x10);
      puVar19 = (undefined *)(uVar24 + 1);
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar24) {
        puVar16 = puVar19;
        func_0x0001010673e4(1 < *(ulong *)(puStack_68 + 0x18),puVar19,1);
      }
      *(undefined **)(puStack_68 + 0x10) = puVar19;
      *(ulong *)(puStack_68 + uVar24 * 8 + 0x20) = uVar5;
      puVar19 = puStack_68;
      uVar24 = uVar1;
    } while (uVar1 != uVar22);
  }
LAB_1021f8db0:
  if (((long)puVar19 < 0) || (((ulong)puVar19 >> 0x3e & 1) != 0)) {
    puVar7 = puVar19;
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c6157c(puVar19);
      param_5 = &PTR_PTR_1126b15c8;
      puVar8 = puVar7;
      FUN_1021f97e0(puVar7,0,0x112d4ed88,&PTR_PTR_1126b15c8,0x112d4edc0,&UNK_10d914cd0);
      puVar16 = puVar7;
      puVar23 = puVar19;
      func_0x000100f63690(puVar8 + 0x20,puVar7);
      func_0x000107c6142c();
      if (puVar23 != puVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f919c);
        (*pcVar3)();
      }
    }
  }
  else {
    func_0x000107c6157c(puVar19);
    puVar8 = puVar19;
  }
  puStack_68 = puVar8;
  FUN_1021f96d0(&puStack_68);
  func_0x000107c61574(puVar19);
  puVar19 = puStack_68;
  uVar17 = (uint)((ulong)puStack_68 >> 0x3e) & 1;
  if ((long)puStack_68 < 0) {
    uVar17 = 1;
  }
  if (uVar17 == 1) {
    puVar7 = puStack_68;
    func_0x000107c60480();
    if ((long)puVar7 < 3) goto LAB_1021f90f0;
    puVar7 = puVar19;
    func_0x000107c60480();
    puVar8 = puVar19;
    func_0x000107c60480();
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f91ac);
      (*pcVar3)();
    }
    if ((undefined *)0x63 < puVar7) {
      puVar7 = (undefined *)0x64;
    }
    puVar8 = puVar19;
    func_0x000107c60480();
    if ((long)puVar8 < (long)puVar7) goto LAB_1021f90ec;
  }
  else {
    puVar8 = *(undefined **)(puStack_68 + 0x10);
    if (puVar8 < (undefined *)0x3) {
LAB_1021f90f0:
      func_0x000107c61574(puVar19);
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      func_0x000107c453e4();
      goto LAB_1021f910c;
    }
    puVar7 = puVar8;
    if ((undefined *)0x63 < puVar8) {
      puVar7 = (undefined *)0x64;
    }
    if ((long)puVar8 < (long)puVar7) {
LAB_1021f90ec:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f90f0);
      (*pcVar3)();
    }
  }
  if ((((ulong)puVar19 & 0xc000000000000001) == 0) || (puVar7 == (undefined *)0x0)) {
    func_0x000107c61434(puVar19);
  }
  else {
    uVar9 = 0;
    FUN_1021fb148(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    func_0x000107c61434(puVar19);
    puVar8 = (undefined *)0x0;
    do {
      puVar23 = puVar8 + 1;
      puVar16 = puVar19;
      func_0x000107c60318(puVar8,puVar19,uVar9);
      puVar8 = puVar23;
    } while (puVar7 != puVar23);
  }
  func_0x000107c61574(puVar19);
  if (uVar17 == 0) {
    puVar23 = (undefined *)0x0;
    puVar8 = puVar19 + 0x20;
    puVar21 = puVar7;
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 != (undefined *)0x0) goto LAB_1021f8eb8;
  }
  else {
    puVar8 = (undefined *)0x0;
    puVar23 = puVar19;
    func_0x000107c60484(0);
    puVar16 = puVar7;
    func_0x000107c61574(puVar19);
    puVar19 = puVar8;
    puVar21 = (undefined *)((ulong)param_5 >> 1);
    puVar8 = puVar7;
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar23 != (undefined *)((ulong)param_5 >> 1)) {
LAB_1021f8eb8:
      puVar7 = puVar23;
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar15 = puVar23;
      do {
        while( true ) {
          if (((long)puVar15 < (long)puVar23) || ((long)puVar21 <= (long)puVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1021f90a8);
            (*pcVar3)();
          }
          lVar10 = *(long *)(puVar8 + (long)puVar7 * 8);
          puVar2 = puVar7 + 1;
          func_0x000107c61174();
          lVar11 = lVar10;
          func_0x000107c5d984();
          func_0x000107c61180();
          if (lVar11 != 0) break;
          func_0x000107c61170(lVar10);
          puVar7 = puVar2;
          if (puVar21 == puVar2) goto LAB_1021f9068;
        }
        lVar12 = lVar11;
        func_0x000107c5faec();
        func_0x000107c61170(lVar11);
        puVar13 = PTR_PTR_1126b14a0;
        func_0x000107c61168();
        func_0x000107c61434(puVar16);
        func_0x000107c5fadc(lVar12,puVar16);
        func_0x000107c5b498();
        func_0x000107c61180();
        puVar15 = (undefined *)0x2;
        func_0x000107c61430(puVar16);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar12);
        puVar16 = puVar14;
        func_0x000107c61550();
        if ((((int)puVar16 == 0) || ((long)puVar14 < 0)) || (((ulong)puVar14 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar14 >> 0x3e == 0) {
            puVar15 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar15 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar14) {
              puVar15 = puVar14;
            }
            func_0x000107c60480();
          }
          puVar15 = puVar15 + 1;
          puVar16 = (undefined *)0x0;
          func_0x00010117ee1c(0,puVar15,1,puVar14);
          puVar14 = puVar16;
        }
        uVar20 = (ulong)puVar14 & 0xffffffffffffff8;
        uVar18 = *(ulong *)(uVar20 + 0x10);
        puVar16 = (undefined *)(uVar18 + 1);
        if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar18) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar20 + 0x18));
          puVar15 = puVar16;
          func_0x00010117ee1c(puVar14,puVar16,1);
          uVar20 = (ulong)puVar14 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar20 + 0x10) = puVar16;
        *(undefined **)(uVar20 + uVar18 * 8 + 0x20) = puVar13;
        bVar4 = puVar21 + -1 != puVar7;
        puVar16 = puVar15;
        puVar7 = puVar2;
        puVar15 = puVar2;
      } while (bVar4);
    }
  }
LAB_1021f9068:
  func_0x000107c615e8(puVar19);
  uVar9 = 0;
  FUN_1021fb148(0,0x112d61f60,&PTR_PTR_1126b14a0);
  puVar16 = puVar14;
  func_0x000107c5fc48(puVar14,uVar9);
  func_0x000107c6142c(puVar14);
LAB_1021f910c:
  *param_1 = puVar16;
  return;
}



/* Entry: 1021f9630; end: 1021f9657;  */

void FUN_1021f9630(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x0001007d6d78(&uStack_18);
  return;
}



/* Entry: 1021f9658; end: 1021f96cf;  */

void FUN_1021f9658(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1021fb148(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1021f96d0; end: 1021f97df;  */

void FUN_1021f96d0(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_101a7c0b4();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0;
      FUN_1021fb148(0,0x112d4ed88,&PTR_PTR_1126b15c8);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1021f9870(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1021fa314(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1021f97e0; end: 1021f986f;  */

undefined *
FUN_1021f97e0(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1021f9658(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1021f9870; end: 1021fa313;  */

void FUN_1021f9870(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x13;
  long lVar18;
  undefined8 uVar19;
  long unaff_x21;
  ulong uVar20;
  long *plVar21;
  code *pcVar22;
  undefined1 auStack_140 [8];
  long lStack_138;
  long *plStack_130;
  long lStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  undefined *puStack_58;
  
  lVar3 = 0x112d373d8;
  lStack_138 = param_4;
  plStack_130 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_b0 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (lVar15 - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar18 - extraout_x12_03;
  lStack_d8 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar16 - extraout_x12_05;
  lVar3 = 0;
  lStack_f8 = lVar12;
  func_0x000107c5eea4();
  lStack_80 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_06;
  lStack_88 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_07;
  lStack_100 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_d0 = lVar12 - extraout_x12_08;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = param_3[1];
  plStack_120 = param_3;
  if (0 < lVar12) {
    lVar6 = lStack_80;
    lVar14 = 0;
    lStack_108 = lVar18;
    lStack_e0 = lVar16;
    lStack_c0 = extraout_x13;
    puStack_b8 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_a8 = lVar15 - extraout_x12_01;
    lStack_90 = lVar3;
    do {
      lVar16 = lVar14 + 1;
      lStack_118 = lVar14;
      if (lVar16 < lVar12) {
        lVar18 = *param_3;
        uVar4 = *(undefined8 *)(lVar18 + lVar16 * 8);
        uVar19 = *(undefined8 *)(lVar18 + lVar14 * 8);
        uStack_78 = uVar19;
        auStack_70[0] = uVar4;
        func_0x000107c61174();
        func_0x000107c61174(uVar19);
        puVar5 = auStack_70;
        FUN_1021f91b8(puVar5,&uStack_78);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar19);
        if (unaff_x21 != 0) goto LAB_1021fa2ac;
        lStack_f0 = lVar14 * 8;
        plVar21 = (long *)(lVar18 + lStack_f0 + 0x10);
        plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,(int)puVar5);
        lVar18 = lVar14 + 2;
        lStack_128 = unaff_x21;
        lStack_c8 = lVar12;
        do {
          lVar16 = lStack_c8;
          if (lStack_c8 == lVar18) break;
          lVar12 = plVar21[-1];
          lVar16 = *plVar21;
          func_0x000107c61174();
          func_0x000107c61174();
          lStack_a0 = lVar16;
          lStack_98 = lVar12;
          func_0x00010901e19c();
          func_0x000107c61180();
          lVar12 = lStack_f8;
          if (lVar16 != 0) {
            func_0x000107c5ee94(lStack_f8);
            func_0x000107c61170(lVar16);
          }
          lVar14 = lStack_80;
          lVar6 = lStack_d8;
          pcVar13 = *(code **)(lStack_80 + 0x38);
          (*pcVar13)(lVar12,lVar16 == 0,1,lVar3);
          lVar16 = lStack_e0;
          func_0x0001003a4c00(lVar12,lStack_e0);
          pcVar22 = *(code **)(lVar14 + 0x30);
          lVar12 = lVar16;
          (*pcVar22)(lVar16,1,lVar3);
          if ((int)lVar12 == 1) {
            func_0x000107c5ee60(lStack_d0);
            (*pcVar22)(lVar16,1,lVar3);
            lVar12 = lStack_100;
            if ((int)lVar16 != 1) {
              func_0x0001000d1dcc(lStack_e0);
            }
          }
          else {
            (**(code **)(lVar14 + 0x20))(lStack_d0,lVar16,lVar3);
            lVar12 = lStack_100;
          }
          lVar16 = lStack_98;
          func_0x00010901e19c();
          func_0x000107c61180();
          if (lVar16 != 0) {
            func_0x000107c5ee94(lVar6);
            lVar6 = lStack_d8;
            func_0x000107c61170(lVar16);
          }
          (*pcVar13)(lVar6,lVar16 == 0,1,lVar3);
          lVar16 = lStack_108;
          func_0x0001003a4c00(lVar6,lStack_108);
          lVar14 = lVar16;
          (*pcVar22)(lVar16,1,lVar3);
          lVar6 = lStack_80;
          if ((int)lVar14 == 1) {
            func_0x000107c5ee60(lVar12);
            lVar14 = lVar16;
            (*pcVar22)(lVar16,1,lVar3);
            lVar6 = lStack_80;
            if ((int)lVar14 != 1) {
              func_0x0001000d1dcc(lVar16);
            }
          }
          else {
            (**(code **)(lStack_80 + 0x20))(lVar12,lVar16,lVar3);
          }
          lVar16 = lStack_d0;
          lVar14 = lVar12;
          func_0x000107c5ee9c();
          pcVar13 = *(code **)(lVar6 + 8);
          (*pcVar13)(lVar12,lVar3);
          (*pcVar13)(lVar16,lVar3);
          func_0x000107c61170(lStack_a0);
          func_0x000107c61170(lStack_98);
          plVar21 = plVar21 + 1;
          lVar16 = lVar18;
          lVar18 = lVar18 + 1;
        } while ((((uint)plStack_e8 ^ lVar14 != 1) & 1) != 0);
        unaff_x21 = lStack_128;
        lVar6 = lStack_80;
        param_3 = plStack_120;
        if (((ulong)plStack_e8 & 1) != 0) {
          if (lVar16 < lStack_118) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa2f0);
            (*pcVar13)();
          }
          if (lStack_118 < lVar16) {
            lVar14 = *plStack_120;
            puVar17 = (undefined8 *)(lVar14 + lVar16 * 8);
            puVar5 = (undefined8 *)(lVar14 + lStack_f0);
            lVar18 = lVar16;
            lVar12 = lStack_118;
            do {
              puVar17 = puVar17 + -1;
              lVar18 = lVar18 + -1;
              if (lVar12 != lVar18) {
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa308);
                  (*pcVar13)();
                }
                uVar4 = *puVar5;
                *puVar5 = *puVar17;
                *puVar17 = uVar4;
              }
              lVar12 = lVar12 + 1;
              puVar5 = puVar5 + 1;
            } while (lVar12 < lVar18);
          }
        }
      }
      lVar12 = param_3[1];
      if (lVar16 < lVar12) {
        if (SBORROW8(lVar16,lStack_118)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa2e4);
          (*pcVar13)();
        }
        if (lStack_138 <= lVar16 - lStack_118) goto LAB_1021fa0d0;
        if (SCARRY8(lStack_118,lStack_138)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa2e8);
          (*pcVar13)();
        }
        lVar18 = lStack_118 + lStack_138;
        if (lVar12 <= lStack_118 + lStack_138) {
          lVar18 = lVar12;
        }
        if (lVar18 < lStack_118) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa2ec);
          (*pcVar13)();
        }
        if (lVar16 == lVar18) goto LAB_1021fa0d0;
        lStack_a0 = *param_3;
        plVar21 = (long *)(lStack_a0 + lVar16 * 8 + -8);
        lVar12 = lStack_118 - lVar16;
        lStack_128 = unaff_x21;
        lStack_110 = lVar18;
        do {
          lVar18 = *(long *)(lStack_a0 + lVar16 * 8);
          lStack_f0 = lVar12;
          plStack_e8 = plVar21;
          lStack_c8 = lVar16;
          do {
            lVar3 = lStack_a8;
            lVar16 = *plVar21;
            func_0x000107c61174();
            func_0x000107c61174();
            lStack_98 = lVar18;
            func_0x00010901e19c();
            func_0x000107c61180();
            if (lVar18 != 0) {
              func_0x000107c5ee94(lVar3);
              func_0x000107c61170(lVar18);
            }
            lVar14 = lStack_90;
            pcVar22 = *(code **)(lVar6 + 0x38);
            (*pcVar22)(lVar3,lVar18 == 0,1,lStack_90);
            func_0x0001003a4c00(lVar3,lVar15);
            pcVar13 = *(code **)(lVar6 + 0x30);
            lVar3 = lVar15;
            (*pcVar13)(lVar15,1,lVar14);
            if ((int)lVar3 == 1) {
              func_0x000107c5ee60(lStack_88);
              lVar3 = lVar15;
              (*pcVar13)(lVar15,1,lVar14);
              if ((int)lVar3 != 1) {
                func_0x0001000d1dcc(lVar15);
              }
            }
            else {
              (**(code **)(lVar6 + 0x20))(lStack_88,lVar15,lVar14);
            }
            lVar6 = lVar16;
            func_0x00010901e19c();
            func_0x000107c61180();
            lVar18 = lStack_b0;
            if (lVar6 != 0) {
              func_0x000107c5ee94(lStack_b0);
              func_0x000107c61170(lVar6);
            }
            lVar3 = lStack_90;
            (*pcVar22)(lVar18,lVar6 == 0,1,lStack_90);
            puVar1 = puStack_b8;
            func_0x0001003a4c00(lVar18,puStack_b8);
            puVar7 = puVar1;
            (*pcVar13)(puVar1,1,lVar3);
            lVar6 = lStack_80;
            lVar18 = lStack_c0;
            if ((int)puVar7 == 1) {
              func_0x000107c5ee60(lStack_c0);
              puVar7 = puVar1;
              (*pcVar13)(puVar1,1,lVar3);
              lVar6 = lStack_80;
              if ((int)puVar7 != 1) {
                func_0x0001000d1dcc(puVar1);
              }
            }
            else {
              (**(code **)(lStack_80 + 0x20))(lStack_c0,puVar1,lVar3);
            }
            lVar14 = lStack_88;
            lVar8 = lVar18;
            func_0x000107c5ee9c();
            pcVar13 = *(code **)(lVar6 + 8);
            (*pcVar13)(lVar18,lVar3);
            (*pcVar13)(lVar14,lVar3);
            func_0x000107c61170(lStack_98);
            func_0x000107c61170(lVar16);
            lVar6 = lStack_80;
            if (lVar8 != 1) break;
            if (lStack_a0 == 0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa2f4);
              (*pcVar13)();
            }
            lVar16 = *plVar21;
            lVar18 = plVar21[1];
            *plVar21 = lVar18;
            plVar21[1] = lVar16;
            bVar2 = lVar12 != -1;
            lVar12 = lVar12 + 1;
            plVar21 = plVar21 + -1;
          } while (bVar2);
          lVar16 = lStack_c8 + 1;
          plVar21 = plStack_e8 + 1;
          lVar12 = lStack_f0 + -1;
        } while (lVar16 != lStack_110);
        lVar16 = lStack_110;
        unaff_x21 = lStack_128;
        if (lStack_110 < lStack_118) goto LAB_1021fa2d4;
      }
      else {
LAB_1021fa0d0:
        if (lVar16 < lStack_118) {
LAB_1021fa2d4:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa2d8);
          (*pcVar13)();
        }
      }
      puVar11 = puStack_58;
      puVar9 = puStack_58;
      func_0x000107c61558();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar20 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar20) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        func_0x0001000a91e0(puVar11,uVar20 + 1,1,puVar10);
      }
      param_3 = plStack_120;
      *(ulong *)(puVar11 + 0x10) = uVar20 + 1;
      *(long *)(puVar11 + uVar20 * 0x10 + 0x20) = lStack_118;
      *(long *)(puVar11 + uVar20 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar11;
      if (*plStack_130 == 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa30c);
        (*pcVar13)();
      }
      FUN_1021fa6d4(&puStack_58,*plStack_130,plStack_120);
      if (unaff_x21 != 0) goto LAB_1021fa2ac;
      lVar12 = param_3[1];
      lVar14 = lVar16;
    } while (lVar16 < lVar12);
    unaff_x21 = 0;
  }
  puVar11 = puStack_58;
  lVar3 = *plStack_130;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa314);
    (*pcVar13)();
  }
  puVar9 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar9 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar20 = *(ulong *)(puVar11 + 0x10);
  while (puStack_58 = puVar11, 1 < uVar20) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa310);
      (*pcVar13)();
    }
    lVar16 = uVar20 - 1;
    lVar18 = *(long *)(puVar11 + uVar20 * 0x10);
    lVar15 = *(long *)(puVar11 + lVar16 * 0x10 + 0x28);
    FUN_1021fa93c(lVar12 + lVar18 * 8,lVar12 + *(long *)(puVar11 + lVar16 * 0x10 + 0x20) * 8,
                  lVar12 + lVar15 * 8,lVar3);
    if (unaff_x21 != 0) break;
    if (lVar15 < lVar18) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa2dc);
      (*pcVar13)();
    }
    puVar9 = puVar11;
    func_0x000107c61558();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar11 + 0x10) <= uVar20 - 2) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1021fa2e0);
      (*pcVar13)();
    }
    *(long *)(puVar11 + uVar20 * 0x10) = lVar18;
    *(long *)((long)(puVar11 + uVar20 * 0x10) + 8) = lVar15;
    puStack_58 = puVar11;
    func_0x0001000a97cc(lVar16);
    puVar11 = puStack_58;
    param_3 = plStack_120;
    uVar20 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1021fa2ac:
  func_0x000107c6142c(puStack_58);
  return;
}



/* Entry: 1021fa314; end: 1021fa6d3;  */

void FUN_1021fa314(long param_1,long param_2,long param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffff40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar10 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar19 - extraout_x12_01;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar11 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar11 - extraout_x12_02;
  if (param_3 != param_2) {
    lVar8 = *param_4;
    plVar12 = (long *)(lVar8 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar3 = *(long *)(lVar8 + param_3 * 8);
      plVar13 = plVar12;
      lVar16 = param_1;
      do {
        lVar15 = *plVar13;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x00010901e19c();
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000107c5ee94(lVar17);
          func_0x000107c61170(lVar4);
        }
        pcVar14 = *(code **)(lVar6 + 0x38);
        (*pcVar14)(lVar17,lVar4 == 0,1,lVar2);
        func_0x0001003a4c00(lVar17,lVar19);
        pcVar18 = *(code **)(lVar6 + 0x30);
        lVar4 = lVar19;
        (*pcVar18)(lVar19,1,lVar2);
        if ((int)lVar4 == 1) {
          func_0x000107c5ee60(lVar7);
          lVar4 = lVar19;
          (*pcVar18)(lVar19,1,lVar2);
          if ((int)lVar4 != 1) {
            func_0x0001000d1dcc(lVar19);
          }
        }
        else {
          (**(code **)(lVar6 + 0x20))(lVar7,lVar19,lVar2);
        }
        lVar4 = lVar15;
        func_0x00010901e19c();
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000107c5ee94(lVar10);
          func_0x000107c61170(lVar4);
        }
        (*pcVar14)(lVar10,lVar4 == 0,1,lVar2);
        func_0x0001003a4c00(lVar10,puVar9);
        puVar5 = puVar9;
        (*pcVar18)(puVar9,1,lVar2);
        if ((int)puVar5 == 1) {
          func_0x000107c5ee60(lVar11);
          puVar5 = puVar9;
          (*pcVar18)(puVar9,1,lVar2);
          if ((int)puVar5 != 1) {
            func_0x0001000d1dcc(puVar9);
          }
        }
        else {
          (**(code **)(lVar6 + 0x20))(lVar11,puVar9,lVar2);
        }
        lVar4 = lVar11;
        func_0x000107c5ee9c();
        pcVar14 = *(code **)(lVar6 + 8);
        (*pcVar14)(lVar11,lVar2);
        (*pcVar14)(lVar7,lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar15);
        if (lVar4 != 1) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1021fa6d4);
          (*pcVar14)();
        }
        lVar4 = *plVar13;
        lVar3 = plVar13[1];
        *plVar13 = lVar3;
        plVar13[1] = lVar4;
        bVar1 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        plVar13 = plVar13 + -1;
      } while (bVar1);
      param_3 = param_3 + 1;
      plVar12 = plVar12 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1021fa6d4; end: 1021fa93b;  */

undefined8 FUN_1021fa6d4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1021fa7a8;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa924);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1021fa80c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa914);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa91c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa8fc);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa900);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa908);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa910);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1021fa7a8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa904);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa90c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa918);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa920);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1021fa80c;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa928);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa8f0);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa93c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1021fa93c(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa8f4);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021fa8f8);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1021fa93c; end: 1021fb147;  */

undefined8 FUN_1021fa93c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
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
  long *plVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  long *plVar24;
  code *pcVar25;
  long *plVar26;
  long *plVar27;
  long *plStack_58;
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffff20 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar13 - extraout_x12_05;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar23 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar14 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar15 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar16 - extraout_x12_08;
  lVar21 = (long)param_2 - (long)param_1;
  lVar5 = lVar21 + 7;
  if (-1 < lVar21) {
    lVar5 = lVar21;
  }
  lVar5 = lVar5 >> 3;
  lVar19 = (long)param_3 - (long)param_2;
  lVar17 = lVar19 + 7;
  if (-1 < lVar19) {
    lVar17 = lVar19;
  }
  lVar17 = lVar17 >> 3;
  if (lVar5 < lVar17) {
    if (((param_4 < param_1) || (param_1 + lVar5 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar5 << 3);
    }
    plStack_58 = param_4 + lVar5;
    plVar26 = param_1;
    if (7 < lVar21) {
      do {
        if (param_3 <= param_2) break;
        lVar8 = *param_2;
        lVar9 = *param_4;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar8;
        func_0x00010901e19c();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c5ee94(lVar20);
          func_0x000107c61170(lVar5);
        }
        pcVar25 = *(code **)(lVar23 + 0x38);
        (*pcVar25)(lVar20,lVar5 == 0,1,lVar2);
        func_0x0001003a4c00(lVar20,lVar13);
        pcVar22 = *(code **)(lVar23 + 0x30);
        lVar5 = lVar13;
        (*pcVar22)(lVar13,1,lVar2);
        if ((int)lVar5 == 1) {
          func_0x000107c5ee60(lVar4);
          lVar5 = lVar13;
          (*pcVar22)(lVar13,1,lVar2);
          if ((int)lVar5 != 1) {
            func_0x0001000d1dcc(lVar13);
          }
        }
        else {
          (**(code **)(lVar23 + 0x20))(lVar4,lVar13,lVar2);
        }
        lVar5 = lVar9;
        func_0x00010901e19c();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c5ee94(lVar12);
          func_0x000107c61170(lVar5);
        }
        (*pcVar25)(lVar12,lVar5 == 0,1,lVar2);
        func_0x0001003a4c00(lVar12,lVar11);
        lVar5 = lVar11;
        (*pcVar22)(lVar11,1,lVar2);
        if ((int)lVar5 == 1) {
          func_0x000107c5ee60(lVar16);
          lVar5 = lVar11;
          (*pcVar22)(lVar11,1,lVar2);
          if ((int)lVar5 != 1) {
            func_0x0001000d1dcc(lVar11);
          }
        }
        else {
          (**(code **)(lVar23 + 0x20))(lVar16,lVar11,lVar2);
        }
        lVar5 = lVar16;
        func_0x000107c5ee9c();
        pcVar22 = *(code **)(lVar23 + 8);
        (*pcVar22)(lVar16,lVar2);
        (*pcVar22)(lVar4,lVar2);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar9);
        if (lVar5 == 1) {
          plVar18 = param_4;
          plVar24 = param_2;
          param_2 = param_2 + 1;
        }
        else {
          plVar18 = param_4 + 1;
          plVar24 = param_4;
        }
        param_4 = plVar18;
        if (plVar26 != plVar24) {
          *plVar26 = *plVar24;
        }
        plVar26 = plVar26 + 1;
      } while (param_4 < plStack_58);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar17 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar17 << 3);
    }
    plStack_58 = param_4 + lVar17;
    plVar26 = param_2;
    if (7 < lVar19) {
      while (plVar26 = param_2, param_1 < param_2) {
        plVar18 = param_2 + -1;
        plVar24 = param_3;
        while( true ) {
          param_3 = plVar24 + -1;
          plVar27 = plStack_58 + -1;
          lVar4 = *plVar27;
          lVar11 = *plVar18;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar4;
          func_0x00010901e19c();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c5ee94(lVar10);
            func_0x000107c61170(lVar5);
          }
          pcVar22 = *(code **)(lVar23 + 0x38);
          (*pcVar22)(lVar10,lVar5 == 0,1,lVar2);
          func_0x0001003a4c00(lVar10,lVar9);
          pcVar25 = *(code **)(lVar23 + 0x30);
          lVar5 = lVar9;
          (*pcVar25)(lVar9,1,lVar2);
          if ((int)lVar5 == 1) {
            func_0x000107c5ee60(lVar15);
            lVar5 = lVar9;
            (*pcVar25)(lVar9,1,lVar2);
            if ((int)lVar5 != 1) {
              func_0x0001000d1dcc(lVar9);
            }
          }
          else {
            (**(code **)(lVar23 + 0x20))(lVar15,lVar9,lVar2);
          }
          lVar5 = lVar11;
          func_0x00010901e19c();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c5ee94(lVar8);
            func_0x000107c61170(lVar5);
          }
          (*pcVar22)(lVar8,lVar5 == 0,1,lVar2);
          func_0x0001003a4c00(lVar8,puVar7);
          puVar3 = puVar7;
          (*pcVar25)(puVar7,1,lVar2);
          if ((int)puVar3 == 1) {
            func_0x000107c5ee60(lVar14);
            puVar3 = puVar7;
            (*pcVar25)(puVar7,1,lVar2);
            if ((int)puVar3 != 1) {
              func_0x0001000d1dcc(puVar7);
            }
          }
          else {
            (**(code **)(lVar23 + 0x20))(lVar14,puVar7,lVar2);
          }
          lVar5 = lVar14;
          func_0x000107c5ee9c();
          pcVar22 = *(code **)(lVar23 + 8);
          (*pcVar22)(lVar14,lVar2);
          (*pcVar22)(lVar15,lVar2);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar11);
          if (lVar5 == 1) break;
          if (plVar24 != plStack_58) {
            *param_3 = *plVar27;
          }
          plVar24 = param_3;
          plStack_58 = plVar27;
          if (plVar27 <= param_4) goto LAB_1021fb0e0;
        }
        if (plVar24 != param_2) {
          *param_3 = *plVar18;
        }
        plVar26 = plVar18;
        param_2 = plVar18;
        if (plStack_58 <= param_4) break;
      }
    }
  }
LAB_1021fb0e0:
  uVar6 = (long)plStack_58 - (long)param_4;
  uVar1 = uVar6 + 7;
  if (-1 < (long)uVar6) {
    uVar1 = uVar6;
  }
  if ((plVar26 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar26)) {
    func_0x000107c610b8(plVar26,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1021fb148; end: 1021fb187;  */

void FUN_1021fb148(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1021fb188; end: 1021fb2e3;  */

/* WARNING: Removing unreachable block (ram,0x0001021fb2e0) */

undefined ** FUN_1021fb188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x000107c61168(PTR_PTR_1126b1490);
  puVar2 = puVar1;
  FUN_1021fb440();
  uVar5 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c5c388(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1cd58;
  func_0x000107c61174();
  ppuVar4 = ppuVar3;
  func_0x0001021fb50c();
  puVar2 = PTR_PTR_1126b1498;
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  func_0x000107c5fadc(ppuVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c48694();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar4);
  func_0x0001000285a8(0x112e642b0,&UNK_10dab58c0);
  ppuVar4 = &puStack_48;
  puStack_48 = puVar2;
  func_0x000100854cb0(ppuVar4);
  ppuVar3 = ppuVar4;
  func_0x000104877210();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(ppuVar4);
  return ppuVar3;
}



/* Entry: 1021fb2e4; end: 1021fb2f3;  */

void FUN_1021fb2e4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734(lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f070fb0);
    lVar3 = lVar1;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 1021fb2f4; end: 1021fb427;  */

void FUN_1021fb2f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5aac0,&UNK_10da60520);
  puVar1 = &UNK_1104e23e0;
  func_0x000107c613fc(&UNK_1104e23e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021fb428,puVar1);
  return;
}



/* Entry: 1021fb428; end: 1021fb43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fb428(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar2 = lStack_38;
  func_0x000107c5b478();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    func_0x000100083b20(&lStack_40);
    uVar3 = *(undefined8 *)(lStack_40 + _DAT_113093a98);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lStack_40);
    FUN_1021f9544(0);
    func_0x000107c610f8();
    FUN_1021f8414(lVar2,uVar3);
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021fb428);
  (*pcVar1)();
}



/* Entry: 1021fb440; end: 1021fb71b;  */

undefined1  [16] FUN_1021fb440(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f071030);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f071010);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021fb50c);
  (*pcVar1)();
}



/* Entry: 1021fb71c; end: 1021fb72b;  */

undefined1  [16] FUN_1021fb71c(void)

{
  return ZEXT816(0x1104e24d0);
}



/* Entry: 1021fb72c; end: 1021fb887;  */

void FUN_1021fb72c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5aac0,&UNK_10da60520);
  puVar1 = &UNK_1104e2570;
  func_0x000107c613fc(&UNK_1104e2570,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1021fb7ac,puVar1);
  return;
}


