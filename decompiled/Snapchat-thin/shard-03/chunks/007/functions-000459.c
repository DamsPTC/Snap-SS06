/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b85100; end: 102b85133;  */

void FUN_102b85100(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b85134; end: 102b851a3; -[_TtC33SpotlightCommentsStickerPickerAPI35SpotlightCommentsStickerPickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b85134(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efa6f0));
  func_0x000102b85180(param_1 + _DAT_112efa6f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112efa700 + 8))
  ;
  return;
}



/* Entry: 102b851a4; end: 102b851c3;  */

void FUN_102b851a4(void)

{
  func_0x000107c61168(&PTR_PTR_112890bd8);
  return;
}



/* Entry: 102b851c4; end: 102b851e3; -[_TtC34SCSpotlightRepliesSettingPageScope34SCSpotlightRepliesSettingPageScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b851c4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112efa730));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b851e4; end: 102b8522b; -[_TtC34SCSpotlightRepliesSettingPageScope34SCSpotlightRepliesSettingPageScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b851e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efa738;
  func_0x000107c61428(param_1 + _DAT_112efa738,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b8522c; end: 102b85283; -[_TtC34SCSpotlightRepliesSettingPageScope34SCSpotlightRepliesSettingPageScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8522c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efa738;
  func_0x000107c61428(param_1 + _DAT_112efa738,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b85284; end: 102b85293; -[_TtC34SCSpotlightRepliesSettingPageScope34SCSpotlightRepliesSettingPageScope backArrowPointsDownward] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102b85284(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112efa740);
}



/* Entry: 102b85294; end: 102b8542b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b85294(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112efa738;
  func_0x000107c61614(unaff_x20 + _DAT_112efa738,0);
  *(undefined8 *)(unaff_x20 + _DAT_112efa730) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined1 *)(unaff_x20 + _DAT_112efa740) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 102b8542c; end: 102b854df; -[_TtC34SCSpotlightRepliesSettingPageScope34SCSpotlightRepliesSettingPageScope initWithUIContainer:delegate:backArrowPointsDownward:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8542c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112efa738;
  func_0x000107c61614(param_1 + _DAT_112efa738,0);
  *(undefined8 *)(param_1 + _DAT_112efa730) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  *(undefined1 *)(param_1 + _DAT_112efa740) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 102b854e0; end: 102b85513;  */

void FUN_102b854e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b85514; end: 102b8556f; -[_TtC34SCSpotlightRepliesSettingPageScope34SCSpotlightRepliesSettingPageScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b85514(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efa730));
  param_1 = param_1 + _DAT_112efa738;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102b85570; end: 102b8558f;  */

void FUN_102b85570(void)

{
  func_0x000107c61168(&PTR_PTR_112890ca8);
  return;
}



/* Entry: 102b85590; end: 102b8559f; -[_TtC41SCSpotlightRepliesFeatureSettingsServices41SCSpotlightRepliesFeatureSettingsServices spotlightRepliesFeatureSettingsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b85590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112efa770));
  return;
}



/* Entry: 102b855a0; end: 102b855eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b855a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efa770) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b855ec; end: 102b85643; -[_TtC41SCSpotlightRepliesFeatureSettingsServices41SCSpotlightRepliesFeatureSettingsServices initWithSpotlightRepliesFeatureSettingsManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b855ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112efa770) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102b85644; end: 102b856a3; -[_TtC41SCSpotlightRepliesFeatureSettingsServices41SCSpotlightRepliesFeatureSettingsServices init] */

void FUN_102b85644(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightRepliesFeatureSettingsServices.SCSpotlightRepliesFeatureSettingsServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b85670);
  (*pcVar1)();
}



/* Entry: 102b856a4; end: 102b856b3; -[_TtC41SCSpotlightRepliesFeatureSettingsServices41SCSpotlightRepliesFeatureSettingsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b856a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efa770));
  return;
}



/* Entry: 102b856b4; end: 102b8571f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b856b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102b85aa8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112efa7a8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b85720; end: 102b8578b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b85720(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efa7a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b8578c; end: 102b857eb; -[_TtC47SpotlightQuickShareScopedFactoryServiceProvider35SCSpotlightQuickShareScopedServices init] */

void FUN_102b8578c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightQuickShareScopedFactoryServiceProvider.SCSpotlightQuickShareScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b857b8);
  (*pcVar1)();
}



/* Entry: 102b857ec; end: 102b857fb; -[_TtC47SpotlightQuickShareScopedFactoryServiceProvider35SCSpotlightQuickShareScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b857ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efa7a8));
  return;
}



/* Entry: 102b857fc; end: 102b85867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b857fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a6128;
  func_0x000107c613fc(&UNK_1105a6128,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102b85b40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b85868; end: 102b85903;  */

void FUN_102b85868(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a6038;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a6038;
  return;
}



/* Entry: 102b85904; end: 102b8593b;  */

void FUN_102b85904(long *param_1)

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



/* Entry: 102b8593c; end: 102b85943;  */

undefined8 FUN_102b8593c(void)

{
  return 0x1b;
}



/* Entry: 102b85944; end: 102b85a77;  */

void FUN_102b85944(undefined8 *param_1)

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
  puVar1 = &UNK_1105a6150;
  func_0x000107c613fc(&UNK_1105a6150,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b85b18;
  func_0x00010058fa64(FUN_102b85b18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b85a78; end: 102b85aa7;  */

undefined ** FUN_102b85a78(void)

{
  return &PTR_DAT_113066fd0;
}



/* Entry: 102b85aa8; end: 102b85ac7;  */

void FUN_102b85aa8(void)

{
  func_0x000107c61168(&PTR_PTR_112890e38);
  return;
}



/* Entry: 102b85ac8; end: 102b85b17;  */

undefined1  [16] FUN_102b85ac8(void)

{
  return ZEXT816(0x1105a6088);
}



/* Entry: 102b85b18; end: 102b85b3f;  */

void FUN_102b85b18(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102b85b40; end: 102b85b43;  */

void FUN_102b85b40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b85b44; end: 102b85deb;  */

void FUN_102b85b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112efa810,&UNK_10db2a350);
  puVar1 = &UNK_1105a6190;
  func_0x000107c613fc(&UNK_1105a6190,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  *(undefined8 *)(puVar1 + 0x18) = param_9;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_10;
  *(undefined8 *)(puVar1 + 0x48) = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_3;
  *(undefined8 *)(puVar1 + 0x58) = param_13;
  *(undefined8 *)(puVar1 + 0x60) = param_5;
  *(undefined8 *)(puVar1 + 0x68) = param_6;
  *(undefined8 *)(puVar1 + 0x70) = param_8;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_102b85dec,puVar1);
  return;
}



/* Entry: 102b85dec; end: 102b85e27;  */

void FUN_102b85dec(void)

{
  long unaff_x20;
  
  func_0x000102b85c80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102b85e28; end: 102b85e37;  */

undefined1  [16] FUN_102b85e28(void)

{
  return ZEXT816(0x1105a61b8);
}



/* Entry: 102b85e38; end: 102b8626f;  */

void FUN_102b85e38(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112efa820,&UNK_10db2a3a0);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102b877c8();
  func_0x000100082720("SCGroupAvatarScopeExposerSubjectServiceProvider",0x2f,2);
  puVar3 = puVar2;
  FUN_102b87854();
  func_0x000100082720("SCGroupAvatarScopeExposerObservableServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102b85904;
  func_0x0001000823a8(FUN_102b85904,0);
  func_0x000100082720("SCSpotlightQuickShareScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112efa828,&UNK_10db2a3b0);
  puVar5 = &UNK_1105a6200;
  func_0x000107c613fc(&UNK_1105a6200,0x88,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  *(undefined8 *)(puVar5 + 0x40) = param_8;
  *(undefined8 *)(puVar5 + 0x48) = param_9;
  *(undefined8 *)(puVar5 + 0x50) = param_10;
  *(undefined8 *)(puVar5 + 0x58) = param_11;
  *(undefined8 *)(puVar5 + 0x60) = param_12;
  *(undefined8 *)(puVar5 + 0x68) = param_13;
  *(undefined8 *)(puVar5 + 0x70) = param_14;
  *(undefined8 *)(puVar5 + 0x78) = param_15;
  *(undefined8 **)(puVar5 + 0x80) = puVar3;
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
  func_0x000107c6157c(puVar3);
  uVar10 = 0x102b86334;
  func_0x0001000823a8(0x102b86334,puVar5);
  func_0x000100082720("SpotlightQuickShareEntryPointWrapperServiceProvider",0x33,2);
  puVar6 = puVar2;
  FUN_102b8767c();
  func_0x000100082720("SpotlightQuickShareScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112efa830,&UNK_10db2a3b8);
  puVar5 = &UNK_1105a6228;
  func_0x000107c613fc(&UNK_1105a6228,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(code **)(puVar5 + 0x18) = pcVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 **)(puVar5 + 0x28) = puVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  pcVar7 = FUN_102b86378;
  func_0x0001000823a8(FUN_102b86378,puVar5);
  func_0x000100082720("SCSpotlightQuickShareScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112efa7b0,&UNK_10db2a130);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x102b86384;
  func_0x0001000823a8(0x102b86384,pcVar7);
  func_0x000100082720("SCSpotlightQuickShareScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112efa7a0,&UNK_10db2a120);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102b8638c;
  func_0x0001000823a8(0x102b8638c,uVar8);
  func_0x000100082720("SCSpotlightQuickShareScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1105a6250;
  func_0x000107c613fc(&UNK_1105a6250,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102b86394;
  func_0x0001000823a8(0x102b86394,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSpotlightQuickShareScopeEntryPointProvider",0x2c,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102b86270; end: 102b86377;  */

void FUN_102b86270(void)

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



/* Entry: 102b86378; end: 102b8639b;  */

void FUN_102b86378(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b86de4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpotlightQuickShareScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 102b8639c; end: 102b86ba7;  */

void FUN_102b8639c(long *param_1,long param_2)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
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
  FUN_102b86d10();
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
  func_0x0001000285a8(0x112efa838,&UNK_10db2f7b0);
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
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  func_0x0001003b3b80();
  puVar15 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar15;
  FUN_102b8cad8(0);
  func_0x000107c613fc();
  uVar14 = auStack_70[0];
  func_0x000102b8b7a0(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                      uVar11,uVar12,uVar13,puVar15);
  *(undefined8 *)(param_2 + 0x10) = uVar14;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(puVar15);
  uVar16 = auStack_70[0];
  func_0x000107c61174(auStack_70[0]);
  func_0x000107c6157c(uVar14);
  func_0x000102b8b858();
  func_0x000107c61170(uVar16);
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
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uVar14);
  *param_1 = param_2;
  return;
}



/* Entry: 102b86ba8; end: 102b86c53;  */

void FUN_102b86ba8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 102b86c54; end: 102b86c5b;  */

undefined8 FUN_102b86c54(void)

{
  return 0x1b;
}



/* Entry: 102b86c5c; end: 102b86cdf;  */

void FUN_102b86c5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102b86d50,param_2,FUN_102b86d54,param_2,0x102b86d7c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102b86ce0; end: 102b86d0f;  */

undefined ** FUN_102b86ce0(void)

{
  return &PTR_DAT_113066fd0;
}



/* Entry: 102b86d10; end: 102b86d2f;  */

void FUN_102b86d10(void)

{
  func_0x000107c61168(&PTR_PTR_112efa8a8);
  return;
}



/* Entry: 102b86d30; end: 102b86d53;  */

undefined1  [16] FUN_102b86d30(void)

{
  return ZEXT816(0x1105a62a8);
}



/* Entry: 102b86d54; end: 102b86da7;  */

void FUN_102b86d54(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b86da8; end: 102b86de3;  */

void FUN_102b86da8(undefined8 *param_1,undefined8 param_2)

{
  FUN_102b86de4();
  func_0x0001000a7f38("SCSpotlightQuickShareScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 102b86de4; end: 102b87077;  */

void FUN_102b86de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dcd0;
  ppuVar4 = &PTR_DAT_113066fd0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105a62f8;
  func_0x000107c613fc(&UNK_1105a62f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112efa978;
  func_0x0001000285a8(0x112efa978,&UNK_10db2a568);
  func_0x0001000a6ee8(&UNK_1105a60c8,
                      "SCSpotlightQuickShareScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_102b87078,puVar2,uVar3,&UNK_1105a60c8,&PTR_DAT_112efa7b8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a62a8,
                      "SpotlightQuickShareEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_102b870f4,param_3,uVar3,&UNK_1105a62a8,&PTR_DAT_112efa840);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1105a6320;
  func_0x000107c613fc(&UNK_1105a6320,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a6548,
                      "SpotlightQuickShareScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_102b870fc,puVar2,uVar3,&UNK_1105a6548,&PTR_DAT_112efaa10);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112efa980;
  func_0x0001000285a8(0x112efa980,&UNK_10db2a570);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102b87078; end: 102b8707f;  */

void FUN_102b87078(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a6348;
  func_0x000107c613fc(&UNK_1105a6348,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102b87170;
  func_0x0001000823a8(FUN_102b87170,puVar3);
  func_0x000100082720("SCSpotlightQuickShareScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 102b87080; end: 102b870f3;  */

void FUN_102b87080(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_102b8713c;
  func_0x0001000823a8(FUN_102b8713c,param_3);
  func_0x000100082720("SpotlightQuickShareEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar1;
  return;
}



/* Entry: 102b870f4; end: 102b870fb;  */

void FUN_102b870f4(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  pcVar1 = FUN_102b8713c;
  func_0x0001000823a8();
  func_0x000100082720("SpotlightQuickShareEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar1;
  return;
}



/* Entry: 102b870fc; end: 102b8713b;  */

void FUN_102b870fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b878fc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpotlightQuickShareScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 102b8713c; end: 102b87143;  */

void FUN_102b8713c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102b86d50);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102b87144; end: 102b8716f;  */

void FUN_102b87144(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b87170; end: 102b87177;  */

void FUN_102b87170(undefined8 *param_1)

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
  puVar1 = &UNK_1105a6150;
  func_0x000107c613fc(&UNK_1105a6150,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b85b18;
  func_0x00010058fa64(FUN_102b85b18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b87178; end: 102b87253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b87178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_102b8758c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112efa988) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112efa990) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b87254);
  (*pcVar1)();
}



/* Entry: 102b87254; end: 102b872b3; -[_TtC35SpotlightQuickShareScopeGraphBridge50SpotlightQuickShareScopeGraphBridgeSaberEntryPoint init] */

void FUN_102b87254(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightQuickShareScopeGraphBridge.SpotlightQuickShareScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b87280);
  (*pcVar1)();
}



/* Entry: 102b872b4; end: 102b872eb; -[_TtC35SpotlightQuickShareScopeGraphBridge50SpotlightQuickShareScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b872d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b872d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b872b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efa988));
  return;
}



/* Entry: 102b872ec; end: 102b87313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b872ec(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efa990),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efa988));
  return;
}



/* Entry: 102b87314; end: 102b87333;  */

void FUN_102b87314(void)

{
  func_0x000107c61168(&PTR_PTR_112890ef8);
  return;
}



/* Entry: 102b87334; end: 102b873bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b87334(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efa9c0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efa9c8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b873bc);
  (*pcVar2)();
}



/* Entry: 102b873bc; end: 102b874a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b873bc(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efa9c0);
  *(undefined **)(unaff_x20 + _DAT_112efa9c0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efa9c8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efa9c8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a6468;
  func_0x000107c613fc(&UNK_1105a6468,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102b874a8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102b874a4; end: 102b874af;  */

void FUN_102b874a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b874b0; end: 102b8750f; -[_TtC35SpotlightQuickShareScopeGraphBridge50SCSpotlightQuickShareScopedServicesSaberEntryPoint init] */

void FUN_102b874b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightQuickShareScopeGraphBridge.SCSpotlightQuickShareScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b874dc);
  (*pcVar1)();
}



/* Entry: 102b87510; end: 102b87547; -[_TtC35SpotlightQuickShareScopeGraphBridge50SCSpotlightQuickShareScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87510(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efa9c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efa9c0));
  return;
}



/* Entry: 102b87548; end: 102b8754b;  */

void FUN_102b87548(void)

{
  return;
}



/* Entry: 102b8754c; end: 102b8756b;  */

void FUN_102b8754c(void)

{
  FUN_102b873bc();
  return;
}



/* Entry: 102b8756c; end: 102b8758b;  */

void FUN_102b8756c(void)

{
  func_0x000107c61168(&PTR_PTR_112890fc0);
  return;
}



/* Entry: 102b8758c; end: 102b8765b;  */

undefined8 FUN_102b8758c(void)

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
  
  func_0x000107c61428(0x112efa9f8,&uStack_40,0x20,0);
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
    FUN_102b8765c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102b8765c; end: 102b8767b;  */

void FUN_102b8765c(void)

{
  func_0x000107c61168(&PTR_PTR_112891088);
  return;
}



/* Entry: 102b8767c; end: 102b87697;  */

void FUN_102b8767c(undefined8 param_1)

{
  func_0x0001000285a8(0x112efaa00,&UNK_10db2a648);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102b87704,param_1);
  return;
}



/* Entry: 102b87698; end: 102b87703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87698(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102b8765c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112efaa08) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102b87704; end: 102b8770b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87704(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102b8765c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112efaa08) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102b8770c; end: 102b87757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8770c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efaa08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b87758; end: 102b877b7; -[_TtC35SpotlightQuickShareScopeGraphBridge43SpotlightQuickShareScopeGraphBridgeServices init] */

void FUN_102b87758(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightQuickShareScopeGraphBridge.SpotlightQuickShareScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b87784);
  (*pcVar1)();
}



/* Entry: 102b877b8; end: 102b877c7; -[_TtC35SpotlightQuickShareScopeGraphBridge43SpotlightQuickShareScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b877b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efaa08));
  return;
}



/* Entry: 102b877c8; end: 102b87853;  */

void FUN_102b877c8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102b87808,0);
  return;
}



/* Entry: 102b87854; end: 102b8786f;  */

void FUN_102b87854(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102b878c0,param_1);
  return;
}



/* Entry: 102b87870; end: 102b878bf;  */

void FUN_102b87870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102b878c0; end: 102b878f3;  */

void FUN_102b878c0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102b878f4; end: 102b878fb;  */

undefined8 FUN_102b878f4(void)

{
  return 0x1b;
}



/* Entry: 102b878fc; end: 102b87a73;  */

void FUN_102b878fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a64b0;
  func_0x000107c613fc(&UNK_1105a64b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102b87a74,puVar1);
  return;
}



/* Entry: 102b87a74; end: 102b87a7b;  */

void FUN_102b87a74(undefined8 *param_1)

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
  func_0x000107c61428(0x112efa9f8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efa9f8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a6588;
  func_0x000107c613fc(&UNK_1105a6588,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102b87b48;
  func_0x00010058fa64(0x102b87b48,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b87a7c; end: 102b87ad7;  */

void FUN_102b87a7c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efa9f8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efa9f8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102b87ad8; end: 102b87b4f;  */

undefined ** FUN_102b87ad8(void)

{
  return &PTR_DAT_113066fd0;
}



/* Entry: 102b87b50; end: 102b87b97; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87b50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efaa60;
  func_0x000107c61428(param_1 + _DAT_112efaa60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b87b98; end: 102b87bef; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efaa60;
  func_0x000107c61428(param_1 + _DAT_112efaa60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b87bf0; end: 102b87c37; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint sCGroupAvatarScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87bf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efaa68;
  func_0x000107c61428(param_1 + _DAT_112efaa68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b87c38; end: 102b87c43; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint setSCGroupAvatarScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efaa68;
  func_0x000107c61428(param_1 + _DAT_112efaa68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b87c44; end: 102b87c8b; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint spotlightQuickShareScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87c44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efaa70;
  func_0x000107c61428(param_1 + _DAT_112efaa70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b87c8c; end: 102b87c97; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint setSpotlightQuickShareScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efaa70;
  func_0x000107c61428(param_1 + _DAT_112efaa70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b87c98; end: 102b87cf7;  */

void FUN_102b87c98(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102b87cf8; end: 102b87eb3;  */

/* WARNING: Possible PIC construction at 0x000102b87e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b87e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b87e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b87e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b87e48) */
/* WARNING: Removing unreachable block (ram,0x000102b87e38) */
/* WARNING: Removing unreachable block (ram,0x000102b87e14) */
/* WARNING: Removing unreachable block (ram,0x000102b87e8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b87cf8(void)

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
  func_0x000107c50de8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b938();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102b87314();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_102b8758c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b87eb4);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112efa988) = lVar5;
      *(long *)(lVar3 + _DAT_112efa990) = unaff_x20;
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



/* Entry: 102b87eb4; end: 102b87edb; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102b87eb4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b87cf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b87edc; end: 102b87f1f; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint end] */

void FUN_102b87edc(undefined8 param_1)

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



/* Entry: 102b87f20; end: 102b88123;  */

void FUN_102b87f20(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef1006130)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010eff9ed0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0f07d50)) &&
           (func_0x000107c605b8(0xd000000000000032,0x800000010f0f82b0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpotlightQuickShareScopeGraphBridge/SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5e,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b88124);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59704();
        goto LAB_102b87fac;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58390();
  }
LAB_102b87fac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b88124; end: 102b881cf; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102b88124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b87f20(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b881d0; end: 102b88247; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b881d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efaa60,0);
  *(undefined8 *)(param_1 + _DAT_112efaa68) = 0;
  *(undefined8 *)(param_1 + _DAT_112efaa70) = 0;
  *(undefined8 *)(param_1 + _DAT_112efaa78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b88248; end: 102b8827b;  */

void FUN_102b88248(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b8827c; end: 102b882d3; -[SCSpotlightQuickShareScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b882a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b882ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8827c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efaa60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efaa68));
  return;
}



/* Entry: 102b882d4; end: 102b882f3;  */

void FUN_102b882d4(void)

{
  func_0x000107c61168(&PTR_PTR_112891148);
  return;
}


