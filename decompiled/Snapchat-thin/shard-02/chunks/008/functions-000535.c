/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021d8abc; end: 1021d8b2f; -[_TtC23AdAutofillSettingsScope31AdAutofillSettingsScopeServices buildWithUiContainer:delegate:] */

void FUN_1021d8abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1021d89d4(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021d8b30; end: 1021d8b4f;  */

void FUN_1021d8b30(void)

{
  func_0x000107c61168(&PTR_PTR_112826c78);
  return;
}



/* Entry: 1021d8b50; end: 1021d8b7b; -[_TtC23AdAutofillSettingsScope31AdAutofillSettingsScopeServices init] */

void FUN_1021d8b50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdAutofillSettingsScope.AdAutofillSettingsScopeServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021d8b7c);
  (*pcVar1)();
}



/* Entry: 1021d8b7c; end: 1021d8b7f;  */

void FUN_1021d8b7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021d8b80; end: 1021d8bb3;  */

void FUN_1021d8b80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021d8bb4; end: 1021d8bd3; -[_TtC23AdAutofillSettingsScope31AdAutofillSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021d8bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e623f0));
  return;
}



/* Entry: 1021d8bd4; end: 1021d8bf3;  */

void FUN_1021d8bd4(void)

{
  func_0x000107c61168(&PTR_PTR_112826d40);
  return;
}



/* Entry: 1021d8bf4; end: 1021d8c07;  */

undefined1  [16] FUN_1021d8bf4(void)

{
  return ZEXT816(0x1104ddf60);
}



/* Entry: 1021d8c08; end: 1021d8c63; +[AdBrowserSettingsComponentFactory makeViewModel] */

void FUN_1021d8c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3580;
  func_0x000107c610f8(PTR_PTR_1126c3580);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54d14(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1021d8c64; end: 1021d90af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1021d8c64(undefined8 param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,long param_7,long param_8,undefined4 param_9,undefined4 param_10,
             undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 unaff_x20;
  long lVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  pcVar2 = 
  "makeContext(hostViewController:alertPresenterFactory:notificationPresenterFactory:navigationDelegate:privacyConsentInfoManager:webBrowsingSecureGuard:valdiCOFStoresServices:deckHierarchyFactory:valdiRuntimeProvider:clearCache:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c3588;
  func_0x000107c610f8(PTR_PTR_1126c3588);
  func_0x000107c453e4();
  uVar4 = *(undefined8 *)(param_7 + _DAT_112fbabe0);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c53548(puVar3);
  func_0x000107c615e8(uVar4);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    if (param_4 != 0) {
      uVar5 = param_4;
      func_0x000107c61150(param_4,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_modalContainer__112611880);
      if ((uVar5 & 1) == 0) {
        param_4 = 0;
      }
      else {
        func_0x000107c4d040(param_4);
        func_0x000107c61180();
      }
    }
    func_0x000107c4c1e0(param_2);
    func_0x000107c61180();
    func_0x000107c615e8(param_4);
  }
  func_0x000107c52604(puVar3);
  func_0x000107c615e8(param_2);
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c4c1dc(param_3);
    func_0x000107c61180();
  }
  func_0x000107c56b20(puVar3);
  func_0x000107c615e8(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)param_11;
  puStack_78 = (undefined *)param_12;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1104de008;
  ppuVar6 = &puStack_a0;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_78;
  func_0x000107c6157c(param_12);
  func_0x000107c61574(puVar7);
  func_0x000107c53424(puVar3);
  func_0x000107c60bd0(ppuVar6);
  puVar7 = &UNK_1104de040;
  func_0x000107c613fc(&UNK_1104de040,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_5;
  pcStack_80 = FUN_1021d90cc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1001de374;
  puStack_88 = &UNK_1104de058;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar7);
  func_0x000107c54ed0(puVar3);
  func_0x000107c60bd0(ppuVar6);
  puVar7 = &UNK_1104de090;
  func_0x000107c613fc(&UNK_1104de090,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_5;
  pcStack_80 = (code *)0x1021d9118;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1021d9164;
  puStack_88 = &UNK_1104de0a8;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_78;
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar7);
  func_0x000107c5a200(puVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_8 != 0) {
    lVar8 = param_8;
    func_0x000107c409cc();
    func_0x000107c61180();
    func_0x000107c615e8(param_8);
    if (lVar8 != 0) {
      lVar9 = lVar8;
      func_0x000107c40978(lVar8);
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      goto LAB_1021d8f74;
    }
  }
  lVar9 = 0;
LAB_1021d8f74:
  func_0x000107c53e94(puVar3);
  func_0x000107c615e8(lVar9);
  puVar7 = &UNK_1104de0e0;
  func_0x000107c613fc(&UNK_1104de0e0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,param_1);
  pcStack_80 = (code *)0x1021d91ac;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1104de0f8;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_78);
  func_0x000107c541e0(puVar3);
  func_0x000107c60bd0(ppuVar6);
  puVar7 = &UNK_1104de130;
  func_0x000107c613fc(&UNK_1104de130,0x28,7);
  *(undefined8 *)(puVar7 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar7 + 0x18) = param_6;
  *(char **)(puVar7 + 0x20) = pcVar2;
  pcStack_80 = FUN_1021d9244;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100e46924;
  puStack_88 = &UNK_1104de148;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_78;
  func_0x000107c61174(param_6);
  func_0x000107c615f0(pcVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c533ec(puVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar2);
  return puVar3;
}



/* Entry: 1021d90b0; end: 1021d90cb;  */

void FUN_1021d90b0(long param_1,long param_2)

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



/* Entry: 1021d90cc; end: 1021d9163;  */

long FUN_1021d90cc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c44204();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 1021d9164; end: 1021d9243;  */

void FUN_1021d9164(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1021d9244; end: 1021d937b;  */

undefined * FUN_1021d9244(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = *(undefined **)(unaff_x20 + 0x18);
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c43b74(puVar1);
  }
  else {
    puVar4 = puVar2;
    func_0x000107c3e4a0();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    puVar2 = &UNK_1104de1a8;
    func_0x000107c613fc(&UNK_1104de1a8,0x18,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    pcStack_50 = FUN_1021d95b0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101286f34;
    puStack_58 = &UNK_1104de1c0;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c5dc64(puVar4);
    func_0x000107c60bd0(ppuVar3);
  }
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1021d937c; end: 1021d9513; +[AdBrowserSettingsComponentFactory makeContextWithHostViewController:alertPresenterFactory:notificationPresenterFactory:navigationDelegate:privacyConsentInfoManager:webBrowsingSecureGuard:valdiCOFStoresServices:deckHierarchyFactory:valdiRuntimeProvider:clearCache:] */

void FUN_1021d937c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1104de180;
  func_0x000107c613fc(&UNK_1104de180,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  func_0x000107c614ec();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar2 = param_3;
  FUN_1021d8c64(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                FUN_1021d95a4,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021d9514; end: 1021d954f; -[AdBrowserSettingsComponentFactory init] */

void FUN_1021d9514(undefined8 param_1)

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



/* Entry: 1021d9550; end: 1021d95a3;  */

void FUN_1021d9550(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021d95a4; end: 1021d95af;  */

void FUN_1021d95a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001021d95ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1021d95b0; end: 1021d9653;  */

/* WARNING: Possible PIC construction at 0x0001021d95f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021d95f4) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */

void FUN_1021d95b0(undefined *param_1,undefined *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == (undefined *)0x0) {
    param_2 = param_1;
    if (param_1 == (undefined *)0x0) {
      param_2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      param_1 = (undefined *)0x0;
    }
    func_0x000107c61174(param_1);
    func_0x000107c43b74(uVar1);
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c43b70(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1021d9654; end: 1021d96d3;  */

void FUN_1021d9654(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4d508();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c4eb48(lVar2);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1021d96d4; end: 1021d9703;  */

void FUN_1021d96d4(long param_1,long param_2)

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



/* Entry: 1021d9704; end: 1021d976f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021d9704(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021d9af8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e62490) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021d9770; end: 1021d97db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021d9770(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e62490) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021d97dc; end: 1021d983b; -[_TtC51AdLifestyleAndInterestsScopedFactoryServiceProvider37AdLifestyleAndInterestsScopedServices init] */

void FUN_1021d97dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdLifestyleAndInterestsScopedFactoryServiceProvider.AdLifestyleAndInterestsScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021d9808);
  (*pcVar1)();
}



/* Entry: 1021d983c; end: 1021d984b; -[_TtC51AdLifestyleAndInterestsScopedFactoryServiceProvider37AdLifestyleAndInterestsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021d983c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e62490));
  return;
}



/* Entry: 1021d984c; end: 1021d98b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021d984c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104de3d8;
  func_0x000107c613fc(&UNK_1104de3d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1021d9b90,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1021d98b8; end: 1021d9953;  */

void FUN_1021d98b8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104de2e8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104de2e8;
  return;
}



/* Entry: 1021d9954; end: 1021d998b;  */

void FUN_1021d9954(long *param_1)

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



/* Entry: 1021d998c; end: 1021d9993;  */

undefined8 FUN_1021d998c(void)

{
  return 0x1b;
}



/* Entry: 1021d9994; end: 1021d9ac7;  */

void FUN_1021d9994(undefined8 *param_1)

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
  puVar1 = &UNK_1104de400;
  func_0x000107c613fc(&UNK_1104de400,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021d9b68;
  func_0x00010058fa64(FUN_1021d9b68,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021d9ac8; end: 1021d9af7;  */

undefined ** FUN_1021d9ac8(void)

{
  return &PTR_DAT_112e627a8;
}



/* Entry: 1021d9af8; end: 1021d9b17;  */

void FUN_1021d9af8(void)

{
  func_0x000107c61168(&PTR_PTR_112826eb0);
  return;
}



/* Entry: 1021d9b18; end: 1021d9b67;  */

undefined1  [16] FUN_1021d9b18(void)

{
  return ZEXT816(0x1104de338);
}



/* Entry: 1021d9b68; end: 1021d9b8f;  */

void FUN_1021d9b68(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1021d9b90; end: 1021d9b93;  */

void FUN_1021d9b90(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1021d9b94; end: 1021d9dc7;  */

void FUN_1021d9b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e624f8,&UNK_10da6aa30);
  puVar1 = &UNK_1104de440;
  func_0x000107c613fc(&UNK_1104de440,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_9;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_1;
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021d9dc8,puVar1);
  return;
}



/* Entry: 1021d9dc8; end: 1021d9dfb;  */

void FUN_1021d9dc8(void)

{
  long unaff_x20;
  
  func_0x0001021d9c98(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1021d9dfc; end: 1021d9e0b;  */

undefined1  [16] FUN_1021d9dfc(void)

{
  return ZEXT816(0x1104de468);
}



/* Entry: 1021d9e0c; end: 1021da187;  */

void FUN_1021d9e0c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  func_0x0001000285a8(0x112e62508,&UNK_10da6aa80);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021db82c();
  func_0x000100082720("AdLifestyleAndInterestsScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e62510,&UNK_10da6aa90);
  puVar3 = &UNK_1104de4b0;
  func_0x000107c613fc(&UNK_1104de4b0,0x60,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  *(undefined8 *)(puVar3 + 0x58) = param_11;
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
  uVar8 = 0x1021da220;
  func_0x0001000823a8(0x1021da220,puVar3);
  func_0x000100082720("SCAdLifestyleAndInterestsEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1021d9954;
  func_0x0001000823a8(FUN_1021d9954,0);
  func_0x000100082720("AdLifestyleAndInterestsScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e62518,&UNK_10da6aa88);
  puVar3 = &UNK_1104de4d8;
  func_0x000107c613fc(&UNK_1104de4d8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar8);
  pcVar5 = FUN_1021da254;
  func_0x0001000823a8(FUN_1021da254,puVar3);
  func_0x000100082720("AdLifestyleAndInterestsScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e62498,&UNK_10da6a7d0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1021da260;
  func_0x0001000823a8(0x1021da260,pcVar5);
  func_0x000100082720("AdLifestyleAndInterestsScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e62488,&UNK_10da6a7c0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1021da268;
  func_0x0001000823a8(0x1021da268,uVar6);
  func_0x000100082720("AdLifestyleAndInterestsScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104de500;
  func_0x000107c613fc(&UNK_1104de500,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1021da270;
  func_0x0001000823a8(0x1021da270,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("AdLifestyleAndInterestsScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1021da188; end: 1021da253;  */

void FUN_1021da188(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021da254; end: 1021da277;  */

void FUN_1021da254(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021dafe8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("AdLifestyleAndInterestsScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021da278; end: 1021dada7;  */

void FUN_1021da278(long *param_1,long param_2)

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
  FUN_1021daf38();
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
  puVar1 = PTR_PTR_1126c3590;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
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
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f06ddd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f06ddf0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar12 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4730);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f06de10);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *param_1 = param_2;
  return;
}



/* Entry: 1021dada8; end: 1021dae2b;  */

void FUN_1021dada8(void)

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
  return;
}



/* Entry: 1021dae2c; end: 1021dae33;  */

undefined8 FUN_1021dae2c(void)

{
  return 0x1b;
}



/* Entry: 1021dae34; end: 1021daeb7;  */

void FUN_1021dae34(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1021daf78,param_2,FUN_1021daf7c,param_2,FUN_1021dafa4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1021daeb8; end: 1021daf07;  */

undefined8 FUN_1021daeb8(void)

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



/* Entry: 1021daf08; end: 1021daf37;  */

undefined ** FUN_1021daf08(void)

{
  return &PTR_DAT_112e627a8;
}



/* Entry: 1021daf38; end: 1021daf57;  */

void FUN_1021daf38(void)

{
  func_0x000107c61168(&PTR_PTR_112e62588);
  return;
}



/* Entry: 1021daf58; end: 1021daf7b;  */

undefined1  [16] FUN_1021daf58(void)

{
  return ZEXT816(0x1104de558);
}



/* Entry: 1021daf7c; end: 1021dafa3;  */

void FUN_1021daf7c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1021dafa4; end: 1021dafab;  */

undefined8 FUN_1021dafa4(void)

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



/* Entry: 1021dafac; end: 1021dafe7;  */

void FUN_1021dafac(undefined8 *param_1,undefined8 param_2)

{
  FUN_1021dafe8();
  func_0x0001000a7f38("AdLifestyleAndInterestsScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1021dafe8; end: 1021db1d3;  */

void FUN_1021dafe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104de8a8;
  ppuVar4 = &PTR_DAT_112e627a8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104de5a8;
  func_0x000107c613fc(&UNK_1104de5a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e62630;
  func_0x0001000285a8(0x112e62630,&UNK_10da6ac20);
  func_0x0001000a6ee8(&UNK_1104de760,
                      "AdLifestyleAndInterestsScopeGraphBridgeScopeInitializationPluginKey",0x43,2,
                      FUN_1021db1d4,puVar2,uVar3,&UNK_1104de760,&PTR_DAT_112e626c0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104de5d0;
  func_0x000107c613fc(&UNK_1104de5d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104de378,
                      "AdLifestyleAndInterestsScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_1021db2bc,puVar2,uVar3,&UNK_1104de378,&PTR_DAT_112e624a0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104de558,
                      "SCAdLifestyleAndInterestsEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_1021db338,param_4,uVar3,&UNK_1104de558,&PTR_DAT_112e62520);
  func_0x000107c61574(param_4);
  uVar3 = 0x112e62638;
  func_0x0001000285a8(0x112e62638,&UNK_10da6ac28);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1021db1d4; end: 1021db213;  */

void FUN_1021db1d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021db910(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdLifestyleAndInterestsScopeGraphBridgeScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021db214; end: 1021db2bb;  */

void FUN_1021db214(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104de5f8;
  func_0x000107c613fc(&UNK_1104de5f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1021db374;
  func_0x0001000823a8(FUN_1021db374,puVar1);
  func_0x000100082720("AdLifestyleAndInterestsScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1021db2bc; end: 1021db2c3;  */

void FUN_1021db2bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104de5f8;
  func_0x000107c613fc(&UNK_1104de5f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1021db374;
  func_0x0001000823a8(FUN_1021db374,puVar3);
  func_0x000100082720("AdLifestyleAndInterestsScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1021db2c4; end: 1021db337;  */

void FUN_1021db2c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1021db340;
  func_0x0001000823a8(0x1021db340,param_3);
  func_0x000100082720("SCAdLifestyleAndInterestsEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021db338; end: 1021db347;  */

void FUN_1021db338(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1021db340;
  func_0x0001000823a8();
  func_0x000100082720("SCAdLifestyleAndInterestsEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021db348; end: 1021db373;  */

void FUN_1021db348(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021db374; end: 1021db37b;  */

void FUN_1021db374(undefined8 *param_1)

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
  puVar1 = &UNK_1104de400;
  func_0x000107c613fc(&UNK_1104de400,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021d9b68;
  func_0x00010058fa64(FUN_1021d9b68,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021db37c; end: 1021db403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021db37c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1021db73c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e62640) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e62648) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021db404);
  (*pcVar1)();
}



/* Entry: 1021db404; end: 1021db463; -[_TtC39AdLifestyleAndInterestsScopeGraphBridge54AdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1021db404(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdLifestyleAndInterestsScopeGraphBridge.AdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021db430);
  (*pcVar1)();
}



/* Entry: 1021db464; end: 1021db49b; -[_TtC39AdLifestyleAndInterestsScopeGraphBridge54AdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021db480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021db484) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021db464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62640));
  return;
}



/* Entry: 1021db49c; end: 1021db4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021db49c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e62648),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e62640));
  return;
}



/* Entry: 1021db4c4; end: 1021db4e3;  */

void FUN_1021db4c4(void)

{
  func_0x000107c61168(&PTR_PTR_112826f70);
  return;
}



/* Entry: 1021db4e4; end: 1021db56b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021db4e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e62678) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e62680);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021db56c);
  (*pcVar2)();
}



/* Entry: 1021db56c; end: 1021db653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021db56c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e62678);
  *(undefined **)(unaff_x20 + _DAT_112e62678) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e62680);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e62680))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104de6c0;
  func_0x000107c613fc(&UNK_1104de6c0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021db658,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021db654; end: 1021db65f;  */

void FUN_1021db654(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021db660; end: 1021db6bf; -[_TtC39AdLifestyleAndInterestsScopeGraphBridge52AdLifestyleAndInterestsScopedServicesSaberEntryPoint init] */

void FUN_1021db660(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdLifestyleAndInterestsScopeGraphBridge.AdLifestyleAndInterestsScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021db68c);
  (*pcVar1)();
}



/* Entry: 1021db6c0; end: 1021db6f7; -[_TtC39AdLifestyleAndInterestsScopeGraphBridge52AdLifestyleAndInterestsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021db6c0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e62680));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62678));
  return;
}



/* Entry: 1021db6f8; end: 1021db6fb;  */

void FUN_1021db6f8(void)

{
  return;
}



/* Entry: 1021db6fc; end: 1021db71b;  */

void FUN_1021db6fc(void)

{
  FUN_1021db56c();
  return;
}



/* Entry: 1021db71c; end: 1021db73b;  */

void FUN_1021db71c(void)

{
  func_0x000107c61168(&PTR_PTR_112827038);
  return;
}



/* Entry: 1021db73c; end: 1021db80b;  */

undefined8 FUN_1021db73c(void)

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
  
  func_0x000107c61428(0x112e626b0,&uStack_40,0x20,0);
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
    FUN_1021db80c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1021db80c; end: 1021db82b;  */

void FUN_1021db80c(void)

{
  func_0x000107c61168(&PTR_PTR_112827100);
  return;
}



/* Entry: 1021db82c; end: 1021db897;  */

void FUN_1021db82c(void)

{
  func_0x0001000285a8(0x112e626b8,&UNK_10da6acf8);
  func_0x0001000823a8(0x1021db86c,0);
  return;
}



/* Entry: 1021db898; end: 1021db8d3; -[_TtC39AdLifestyleAndInterestsScopeGraphBridge47AdLifestyleAndInterestsScopeGraphBridgeServices init] */

void FUN_1021db898(undefined8 param_1)

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



/* Entry: 1021db8d4; end: 1021db907;  */

void FUN_1021db8d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021db908; end: 1021db90f;  */

undefined8 FUN_1021db908(void)

{
  return 0x1b;
}



/* Entry: 1021db910; end: 1021dba87;  */

void FUN_1021db910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104de708;
  func_0x000107c613fc(&UNK_1104de708,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021dba88,puVar1);
  return;
}



/* Entry: 1021dba88; end: 1021dba8f;  */

void FUN_1021dba88(undefined8 *param_1)

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
  func_0x000107c61428(0x112e626b0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e626b0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104de7a0;
  func_0x000107c613fc(&UNK_1104de7a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1021dbb3c;
  func_0x00010058fa64(0x1021dbb3c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021dba90; end: 1021dbaeb;  */

void FUN_1021dba90(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e626b0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e626b0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1021dbaec; end: 1021dbb43;  */

undefined ** FUN_1021dbaec(void)

{
  return &PTR_DAT_112e627a8;
}



/* Entry: 1021dbb44; end: 1021dbb8b; -[SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dbb44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62710;
  func_0x000107c61428(param_1 + _DAT_112e62710,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021dbb8c; end: 1021dbbe3; -[SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dbb8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62710;
  func_0x000107c61428(param_1 + _DAT_112e62710,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021dbbe4; end: 1021dbc2b; -[SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint adLifestyleAndInterestsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dbbe4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62718;
  func_0x000107c61428(param_1 + _DAT_112e62718,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1021dbc2c; end: 1021dbc8f; -[SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint setAdLifestyleAndInterestsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dbc2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62718;
  func_0x000107c61428(param_1 + _DAT_112e62718,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1021dbc90; end: 1021dbdc3;  */

/* WARNING: Possible PIC construction at 0x0001021dbd48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021dbd64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021dbd80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021dbd4c) */
/* WARNING: Removing unreachable block (ram,0x0001021dbd68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dbc90(void)

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
  func_0x000107c3d338();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1021db4c4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1021db73c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021dbdc4);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e62640) = lVar5;
    *(long *)(lVar4 + _DAT_112e62648) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1021dbdc4; end: 1021dbdeb; -[SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1021dbdc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021dbc90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021dbdec; end: 1021dbe2f; -[SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1021dbdec(undefined8 param_1)

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



/* Entry: 1021dbe30; end: 1021dbfc7;  */

void FUN_1021dbe30(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffca) || (param_3 != -0x7ffffffef0f91f30)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000036,0x800000010f06e0d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdLifestyleAndInterestsScopeGraphBridge/SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x66,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021dbfc8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5231c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1021dbfc8; end: 1021dc073; -[SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1021dbfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021dbe30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021dc074; end: 1021dc0df; -[SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc074(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e62710,0);
  *(undefined8 *)(param_1 + _DAT_112e62718) = 0;
  *(undefined8 *)(param_1 + _DAT_112e62720) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021dc0e0; end: 1021dc113;  */

void FUN_1021dc0e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021dc114; end: 1021dc15b; -[SCAdLifestyleAndInterestsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021dc140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021dc144) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc114(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e62710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62718));
  return;
}



/* Entry: 1021dc15c; end: 1021dc17b;  */

void FUN_1021dc15c(void)

{
  func_0x000107c61168(&PTR_PTR_1128271b0);
  return;
}



/* Entry: 1021dc17c; end: 1021dc1c3; -[SCAdLifestyleAndInterestsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc17c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62750;
  func_0x000107c61428(param_1 + _DAT_112e62750,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021dc1c4; end: 1021dc21b; -[SCAdLifestyleAndInterestsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc1c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62750;
  func_0x000107c61428(param_1 + _DAT_112e62750,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021dc21c; end: 1021dc2f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021dc21c(undefined8 param_1,long param_2)

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
    FUN_1021db71c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e62678) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021dc2f4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e62680);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e62758);
    *(long **)(unaff_x20 + _DAT_112e62758) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1021dc2f4; end: 1021dc31b; -[SCAdLifestyleAndInterestsScopedServicesSaberEntryPoint begin] */

void FUN_1021dc2f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021dc21c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


