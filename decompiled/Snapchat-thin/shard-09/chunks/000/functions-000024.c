/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068334bc; end: 1068334ef;  */

void FUN_1068334bc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068334f0; end: 10683357f;  */

void FUN_1068334f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x00010bfb1920(lVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,0,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106833580; end: 1068337df; -[SCQRCodeCardSharePageControllerHelper onSelectShareDestination:previewView:presentingViewController:] */

void FUN_106833580(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126aead8;
  _objc_retain(param_5);
  _objc_alloc();
  func_0x00010c038f40();
  _objc_release(param_5);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1068337e0;
  puStack_78 = &UNK_110857568;
  uStack_70 = param_4;
  _objc_retain(param_4);
  lVar5 = param_1;
  func_0x00010bdf33a0(param_1,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b5688;
  _objc_alloc(PTR_PTR_1126b5688);
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  lVar7 = lVar5;
  func_0x00010c26b9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058480(puVar6,param_2,puVar4,uVar14,uVar12,uVar2,uVar15,uVar3,uVar1,uVar13,lVar7,0,
                      uVar8,3,0);
  _objc_release(uVar8);
  _objc_release(lVar7);
  puVar9 = PTR_PTR_1126b5690;
  _objc_alloc();
  lVar7 = lVar5;
  func_0x00010c26b9e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010c0c45a0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058880(puVar9,param_2,puVar4,puVar6,lVar7,lVar10,0,2,3,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x40),0,*(undefined8 *)(param_1 + 0x60),0,
                      *(undefined8 *)(param_1 + 0x58),0,*(undefined8 *)(param_1 + 0x38),0,
                      *(undefined8 *)(param_1 + 0xb0));
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar9;
  _objc_release(uVar12);
  _objc_release(lVar10);
  _objc_release(lVar7);
  uVar11 = (ulong)param_3;
  func_0x000108f95f24(uVar11);
  func_0x00010bfd26e0(*(undefined8 *)(param_1 + 0x28),param_2,uVar11);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(puVar4);
  return;
}



/* Entry: 1068337e0; end: 1068338df;  */

void FUN_1068337e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 in_x5;
  undefined8 uVar8;
  undefined *puStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  ppuVar6 = &puStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7c80(puVar2,param_2,uVar8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar7 = 0;
  puVar1 = PTR_PTR_1126b1c68;
  func_0x00010bfe94e0(PTR_PTR_1126b1c68,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b1a18;
    _objc_retain(in_x5);
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    _objc_retain(ppuVar6);
    _objc_alloc(puVar2);
    func_0x00010c048740();
    puVar1 = PTR_PTR_1126b1a20;
    _objc_alloc(PTR_PTR_1126b1a20);
    func_0x00010c01d640();
    puVar4 = PTR_PTR_1126b1a28;
    _objc_alloc(PTR_PTR_1126b1a28);
    func_0x00010c038ea0();
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126b4458;
    _objc_alloc(PTR_PTR_1126b4458);
    func_0x00010c01c300();
    _objc_release(ppuVar6);
    puVar3 = PTR_PTR_1126b1a30;
    _objc_alloc(PTR_PTR_1126b1a30);
    func_0x00010bff5040();
    _objc_release(in_x5);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068338e0; end: 106833a5f; -[SCQRCodeCardSharePageControllerHelper sendProfilePreviewImage:presentingViewController:workflowDelegate:preSelectedItems:] */

void FUN_1068338e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b1a18;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c048740();
  puVar2 = PTR_PTR_1126b1a20;
  _objc_alloc(PTR_PTR_1126b1a20);
  func_0x00010c01d640();
  puVar3 = PTR_PTR_1126b1a28;
  _objc_alloc(PTR_PTR_1126b1a28);
  func_0x00010c038ea0();
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126b4458;
  _objc_alloc(PTR_PTR_1126b4458);
  func_0x00010c01c300();
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b1a30;
  _objc_alloc(PTR_PTR_1126b1a30);
  func_0x00010bff5040();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106833a60; end: 106833e3f; -[SCQRCodeCardSharePageControllerHelper sendScreenshotToRecipients:storiesConfig:businessIds:groups:additionalText:profilePreviewImage:] */

void FUN_106833a60(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b4460;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ad60();
  _objc_release(puVar2);
  func_0x00010c1a9f00(puVar1);
  puVar3 = PTR_PTR_1126b4468;
  _objc_alloc();
  func_0x00010c05ce40();
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c243220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110942f38);
  uVar6 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110942f58);
  _objc_release();
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b840(uVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar7);
  _objc_release(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  uVar7 = uVar8;
  FUN_106833f70();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar8);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar8);
  uVar10 = param_4;
  func_0x00010846b590();
  if ((uVar10 & 1) == 0) {
    lVar9 = param_5;
    func_0x00010bf529e0();
    if (lVar9 == 0) goto LAB_106833de4;
  }
  uVar10 = *(ulong *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf56080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126b4470;
  _objc_retain(uVar11);
  _objc_opt_class(puVar2);
  uVar12 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar2);
  uVar10 = uVar11;
  if ((uVar12 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain(uVar10);
  _objc_release(uVar11);
  uVar12 = uVar10;
  func_0x00010bf982c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  func_0x00010c196d20(uVar12);
  func_0x00010c21acc0(uVar12);
  func_0x00010c1ac2c0(uVar12);
  func_0x00010c1d6440(uVar12);
  uVar7 = param_8;
  _UIImageJPEGRepresentation(0x3ff0000000000000,param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c0c3fe0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4480();
  _objc_release(uVar10);
  _objc_release(uVar7);
  uVar10 = uVar12;
  func_0x00010c0c3fe0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe86c0();
  _objc_release(uVar10);
  func_0x00010c105300(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar11);
LAB_106833de4:
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106833e40; end: 106833e4f;  */

void FUN_106833e40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 106833e50; end: 106833f6f; -[SCQRCodeCardSharePageControllerHelper .cxx_destruct] */

void FUN_106833e50(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106833f70; end: 106833f87;  */

void FUN_106833f70(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e61358;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e61358,
                      &PTR____CFConstantStringClassReference_110e61378,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106833f88; end: 106833f93; -[SCFeatureSettingsService isHasSeenMemoryLinkPrivacyAlertAvailable] */

void FUN_106833f88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e61398);
  return;
}



/* Entry: 106833f94; end: 106833f9f; -[SCFeatureSettingsService hasSeenMemoryLinkPrivacyAlertServerParam] */

undefined ** FUN_106833f94(void)

{
  return &PTR____CFConstantStringClassReference_110e61398;
}



/* Entry: 106833fa0; end: 106833faf; -[SCFeatureSettingsService setHasSeenMemoryLinkPrivacyAlert:] */

void FUN_106833fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e61398,param_3);
  return;
}



/* Entry: 106833fb0; end: 106833fb7; -[SCFeatureSettingsService SHARING_HAS_SEEN_MEDIA_LINK_PRIVACY_ALERT_client_value:] */

undefined * FUN_106833fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106833fb8; end: 106833fbf; -[SCFeatureSettingsService SHARING_HAS_SEEN_MEDIA_LINK_PRIVACY_ALERT_server_value:] */

void FUN_106833fb8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106833fc0; end: 106833fcf; -[SCFeatureSettingsService hasSeenMemoryLinkPrivacyAlert] */

void FUN_106833fc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e61398,0);
  return;
}



/* Entry: 106833fd0; end: 106834143; -[SCStandardExternalShareExportItemSource activityViewControllerPlaceholderItem:] */

void FUN_106833fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106834144;
  uStack_40 = 0x106834154;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106834144;
  uStack_70 = 0x106834154;
  uStack_68 = 0;
  func_0x00010c0be4e0(*(undefined8 *)(param_1 + 0x18));
  if ((*(char *)(param_1 + 9) != '\x01') ||
     (ppuVar1 = *(undefined ***)(param_1 + 0x20), ppuVar1 == (undefined **)0x0)) {
    ppuVar1 = (undefined **)puStack_58[5];
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar1 = (undefined **)puStack_88[5];
      if ((ppuVar1 == (undefined **)0x0) &&
         (ppuVar1 = *(undefined ***)(param_1 + 0x20), ppuVar1 == (undefined **)0x0)) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
        goto LAB_1068340cc;
      }
    }
  }
  _objc_retain(ppuVar1);
LAB_1068340cc:
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106834144; end: 10683415b;  */

void FUN_106834144(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10683415c; end: 1068341cb;  */

void FUN_10683415c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068341cc; end: 10683436b; -[SCStandardExternalShareExportItemSource activityViewController:itemForActivityType:] */

void FUN_1068341cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106834144;
    uStack_40 = 0x106834154;
    uStack_38 = 0;
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106834144;
    uStack_70 = 0x106834154;
    uStack_68 = 0;
    func_0x00010c0be4e0(*(undefined8 *)(param_1 + 0x18));
    if ((((*(char *)(param_1 + 9) != '\x01') ||
         (uVar1 = param_4, func_0x00010c0720c0(), (int)uVar1 != 0)) &&
        ((lVar2 = puStack_58[5], lVar2 != 0 || (lVar2 = puStack_88[5], lVar2 != 0)))) ||
       (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
      _objc_retain(lVar2);
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    _objc_retain(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10683436c; end: 1068343db;  */

void FUN_10683436c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068343dc; end: 1068345cf; -[SCStandardExternalShareExportItemSource activityViewControllerLinkMetadata:] */

void FUN_1068343dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 8) == '\x01') && (*(long *)(param_1 + 0x28) == 0)) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_106834144;
    uStack_50 = 0x106834154;
    puVar1 = PTR__OBJC_CLASS___LPLinkMetadata_1126b3aa8;
    _objc_opt_new();
    puStack_48 = puVar1;
    if (*(long *)(param_1 + 0x18) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSItemProvider_1126b3ab0;
      _objc_alloc(PTR__OBJC_CLASS___NSItemProvider_1126b3ab0);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01fd40(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010c1a97a0(puStack_68[5]);
      func_0x00010c1aa7e0(puStack_68[5]);
      _objc_release(puVar1);
    }
    else {
      func_0x00010c0be4e0();
    }
    func_0x00010c216240(puStack_68[5]);
    func_0x00010c21afe0(puStack_68[5]);
    uVar4 = puStack_68[5];
    _objc_retain(uVar4);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puStack_48);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1068345d0; end: 10683467b;  */

void FUN_1068345d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSItemProvider_1126b3ab0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  _UIImagePNGRepresentation(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01fd40(puVar1);
  _objc_release(uVar2);
  func_0x00010c1a97a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  func_0x00010c1aa7e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10683467c; end: 106834847;  */

void FUN_10683467c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  _objc_retain(param_2);
  func_0x00010bf0b9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc(PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170);
  func_0x00010bff41a0();
  if (puVar1 == (undefined *)0x0) {
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_68,puVar1);
  }
  uStack_68 = 0;
  puVar3 = puVar2;
  func_0x00010bf51e60(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSItemProvider_1126b3ab0;
  _objc_alloc(PTR__OBJC_CLASS___NSItemProvider_1126b3ab0);
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01fd40(puVar3);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSItemProvider_1126b3ab0;
  _objc_alloc(PTR__OBJC_CLASS___NSItemProvider_1126b3ab0);
  puVar6 = puVar4;
  _UIImagePNGRepresentation(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fd40(puVar5);
  func_0x00010c1a97a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar5);
  _objc_release(puVar6);
  func_0x00010c221d20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106834848; end: 10683484f; -[SCStandardExternalShareExportItemSource isFirstItem] */

undefined1 FUN_106834848(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106834850; end: 106834857; -[SCStandardExternalShareExportItemSource setIsFirstItem:] */

void FUN_106834850(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106834858; end: 10683485f; -[SCStandardExternalShareExportItemSource title] */

undefined8 FUN_106834858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106834860; end: 10683488f; -[SCStandardExternalShareExportItemSource setTitle:] */

void FUN_106834860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106834890; end: 106834897; -[SCStandardExternalShareExportItemSource media] */

undefined8 FUN_106834890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106834898; end: 1068348c7; -[SCStandardExternalShareExportItemSource setMedia:] */

void FUN_106834898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068348c8; end: 1068348cf; -[SCStandardExternalShareExportItemSource textContent] */

undefined8 FUN_1068348c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068348d0; end: 1068348ff; -[SCStandardExternalShareExportItemSource setTextContent:] */

void FUN_1068348d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106834900; end: 106834907; -[SCStandardExternalShareExportItemSource url] */

undefined8 FUN_106834900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106834908; end: 106834937; -[SCStandardExternalShareExportItemSource setUrl:] */

void FUN_106834908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106834938; end: 10683493f; -[SCStandardExternalShareExportItemSource namedMediaFile] */

undefined8 FUN_106834938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106834940; end: 10683496f; -[SCStandardExternalShareExportItemSource setNamedMediaFile:] */

void FUN_106834940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106834970; end: 106834977; -[SCStandardExternalShareExportItemSource preferSharingText] */

undefined1 FUN_106834970(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106834978; end: 10683497f; -[SCStandardExternalShareExportItemSource setPreferSharingText:] */

void FUN_106834978(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106834980; end: 1068349d3; -[SCStandardExternalShareExportItemSource .cxx_destruct] */

void FUN_106834980(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068349d4; end: 106834c93; -[SCOffPlatformShareOperationLogger initWithUserTrackedLogger:eventSubject:shareSessionId:shareSource:shareUIType:performerProvider:circumstanceEngine:] */

undefined8 *
FUN_1068349d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f3708;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar1[4] = param_6;
    puVar1[5] = param_7;
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106834c94;
    puStack_a0 = &UNK_1108544e0;
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_8);
    uStack_98 = param_8;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[2];
    _objc_copyWeak(auStack_c0,auStack_88);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ce6a0;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106834c94; end: 106834d23;  */

void FUN_106834c94(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106834d24; end: 106834e1b; -[SCOffPlatformShareOperationLogger _respondToEvent:] */

void FUN_106834d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106834e1c; end: 10683504f;  */

void FUN_106834e1c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106835050;
  puStack_80 = &UNK_1108434b0;
  _objc_copyWeak(auStack_78,param_1 + 0x28);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10683507c;
  puStack_a8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a0,param_1 + 0x28);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1068350a8;
  puStack_d0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_c8,param_1 + 0x28);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106835124;
  puStack_f8 = &UNK_110942fe8;
  _objc_copyWeak(auStack_f0,param_1 + 0x28);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_106835184;
  puStack_120 = &UNK_110943018;
  _objc_copyWeak(auStack_118,param_1 + 0x28);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x106835208;
  puStack_148 = &UNK_110943048;
  _objc_copyWeak(auStack_140,param_1 + 0x28);
  _objc_copyWeak(auStack_168,param_1 + 0x28);
  func_0x00010c0bfa40(uVar2);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106835050; end: 10683511f;  */

void FUN_106835050(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106835120; end: 106835123;  */

void FUN_106835120(void)

{
  return;
}



/* Entry: 106835124; end: 106835183;  */

void FUN_106835124(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be1b640(param_1);
  _objc_release(lVar1);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be1b5e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106835184; end: 10683528b;  */

void FUN_106835184(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5e760(param_1);
  _objc_release(lVar1);
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    func_0x00010be5e740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10683528c; end: 10683528f;  */

void FUN_10683528c(void)

{
  return;
}



/* Entry: 106835290; end: 106835383;  */

void FUN_106835290(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x58) != 0) {
      puVar1 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf941e0();
      _objc_release(puVar1);
    }
    func_0x00010bde3340(param_1,param_2);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106835384; end: 1068353ab; -[SCOffPlatformShareOperationLogger _requestShareSheet] */

void FUN_106835384(undefined8 param_1)

{
  func_0x000108f95118();
                    /* WARNING: Could not recover jumptable at 0x00010bdc8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStageWithName_timestamp__11254fb20,0);
  return;
}



/* Entry: 1068353ac; end: 1068353d3; -[SCOffPlatformShareOperationLogger _shareSheetRenderComplete] */

void FUN_1068353ac(undefined8 param_1)

{
  func_0x000108f95118();
                    /* WARNING: Could not recover jumptable at 0x00010bdc8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStageWithName_timestamp__11254fb20,1);
  return;
}



/* Entry: 1068353d4; end: 1068353ff; -[SCOffPlatformShareOperationLogger _selectShare] */

void FUN_1068353d4(undefined8 param_1,long param_2)

{
  func_0x000108f95118();
  *(undefined8 *)(param_2 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__addStageWithName_timestamp__11254fb20,2);
  return;
}



/* Entry: 106835400; end: 106835407; -[SCOffPlatformShareOperationLogger _shareLinkGenerationStartWithTimestamp:] */

void FUN_106835400(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStageWithName_timestamp__11254fb20,4);
  return;
}



/* Entry: 106835408; end: 10683540f; -[SCOffPlatformShareOperationLogger _shareLinkGenerationCompleteWithTimestamp:] */

void FUN_106835408(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStageWithName_timestamp__11254fb20,5);
  return;
}



/* Entry: 106835410; end: 106835417; -[SCOffPlatformShareOperationLogger _generateMediaStartWithTimestamp:] */

void FUN_106835410(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStageWithName_timestamp__11254fb20,6);
  return;
}



/* Entry: 106835418; end: 10683541f; -[SCOffPlatformShareOperationLogger _generateMediaCompleteWithTimestamp:] */

void FUN_106835418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStageWithName_timestamp__11254fb20,7);
  return;
}



/* Entry: 106835420; end: 106835427; -[SCOffPlatformShareOperationLogger _mediaExportStartWithTimestamp:] */

void FUN_106835420(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStageWithName_timestamp__11254fb20,8);
  return;
}



/* Entry: 106835428; end: 10683542f; -[SCOffPlatformShareOperationLogger _mediaExportCompleteWithTimestamp:] */

void FUN_106835428(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStageWithName_timestamp__11254fb20,9);
  return;
}



/* Entry: 106835430; end: 10683565f; -[SCOffPlatformShareOperationLogger _completeShareWithDestination:shareResult:textConfiguration:mediaConfiguration:completedTimestamp:] */

void FUN_106835430(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_5 == 0) {
    func_0x00010bdc8600(param_1,param_2);
    if (param_6 == 0) goto LAB_1068354a8;
LAB_106835484:
    lVar4 = param_6;
    func_0x00010bf681e0();
  }
  else {
    if (param_6 != 0) goto LAB_106835484;
LAB_1068354a8:
    lVar4 = 0;
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x50);
  func_0x000108faa364();
  puVar5 = PTR_PTR_1126ae558;
  uVar3 = param_7;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x50);
    func_0x000108faa350();
    puVar5 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106835564;
    }
    func_0x00010c0c3fe0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c45e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
LAB_106835564:
  _objc_initWeak(auStack_78,param_2);
  _objc_copyWeak(auStack_a0,auStack_78);
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uStack_98 = param_1;
  lStack_90 = lVar4;
  lStack_88 = param_5;
  uStack_80 = param_4;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar5);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 106835660; end: 1068357ef;  */

void FUN_106835660(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_2);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar4 == 0) goto LAB_1068357c4;
  lVar6 = param_2;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
LAB_1068356cc:
    uVar11 = 0x18;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0c6c20();
    if (2 < uVar5) goto LAB_1068356cc;
    uVar11 = *(undefined8 *)(&UNK_10dde1758 + uVar5 * 8);
  }
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010c0c6d00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010c0c6d00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0c6c20();
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (lVar8 != -1) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0c6d00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010c0c6c20();
      _objc_release(uVar9);
    }
  }
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar6);
  func_0x00010be54220(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar6);
  uVar12 = *(undefined8 *)(lVar4 + 8);
  uVar9 = *(undefined8 *)(lVar4 + 0x20);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  uVar13 = *(undefined8 *)(lVar4 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  lVar6 = lVar4;
  func_0x00010be22ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f958b0(uVar12,uVar13,uVar1,uVar2,uVar9,uVar11,uVar3,uVar10,lVar6);
  _objc_release(lVar6);
  func_0x00010be93340(lVar4);
LAB_1068357c4:
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068357f0; end: 10683587b; -[SCOffPlatformShareOperationLogger _addStageWithName:timestamp:] */

void FUN_1068357f0(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _os_unfair_lock_lock(param_2 + 0x40);
  puVar1 = PTR_PTR_1126ce6a8;
  _objc_opt_new(PTR_PTR_1126ce6a8);
  func_0x00010c1cafa0();
  func_0x00010c215dc0(puVar1,param_3,(long)param_1);
  func_0x00010befa120(*(undefined8 *)(param_2 + 0x48),param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x40);
  return;
}



/* Entry: 10683587c; end: 1068358d7; -[SCOffPlatformShareOperationLogger _createPerformerWithPerformerProvider:] */

void FUN_10683587c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068358d8; end: 106835927; -[SCOffPlatformShareOperationLogger _getStages] */

void FUN_1068358d8(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106835928; end: 106835987; -[SCOffPlatformShareOperationLogger _resetLoggingParams] */

void FUN_106835928(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x40);
  return;
}



/* Entry: 106835988; end: 106835a5f; -[SCOffPlatformShareOperationLogger _logGrapheneExportCompleteLatencyWithTimestamp:deepLinkSourceType:mediaType:] */

void FUN_106835988(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(double *)(param_2 + 0x68) != 0.0) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    func_0x000108f95820(param_4);
    func_0x00010bc8ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bc90ccc(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x000108f94dd8(uVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106847d34(uVar2,param_4,param_5,uVar1,(long)(param_1 - *(double *)(param_2 + 0x68)));
    _objc_release(uVar1);
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 106835a60; end: 106835ad7; -[SCOffPlatformShareOperationLogger .cxx_destruct] */

void FUN_106835a60(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106835ad8; end: 106835f47; -[SCStandardExternalShareLogger initWithShareSource:destinationsAvailable:shareUIType:eventSubject:userTrackedLogger:shareSessionId:sendToSessionId:captureSessionId:performerProvider:grapheneRegistry:dreamsMetadata:posterId:snapId:memoriesLogger:circumstanceEngine:sharingMetadata:] */

undefined8 *
FUN_106835ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_80 = PTR_PTR_1126f3710;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    puVar1[3] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106835f48;
    puStack_a8 = &UNK_1108544e0;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_12);
    uStack_a0 = param_12;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _CACurrentMediaTime();
    puVar1[0xe] = param_1;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[7];
    _objc_copyWeak(auStack_c8,auStack_90);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106835f48; end: 106835fd7;  */

void FUN_106835f48(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106835fd8; end: 10683601b; -[SCStandardExternalShareLogger dealloc] */

void FUN_106835fd8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be28800();
  puStack_28 = PTR_PTR_1126f3710;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10683601c; end: 106836113; -[SCStandardExternalShareLogger _respondToEvent:] */

void FUN_10683601c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106836114; end: 1068362a7;  */

void FUN_106836114(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068362b4;
  puStack_70 = &UNK_110943178;
  _objc_copyWeak(auStack_68,param_1 + 0x28);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106836324;
  puStack_98 = &UNK_110942fe8;
  _objc_copyWeak(auStack_90,param_1 + 0x28);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106836370;
  puStack_c0 = &UNK_110943048;
  _objc_copyWeak(auStack_b8,param_1 + 0x28);
  _objc_copyWeak(auStack_e0,param_1 + 0x28);
  func_0x00010c0bfa40(uVar2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1068362a8; end: 1068362b3;  */

void FUN_1068362a8(void)

{
  return;
}



/* Entry: 1068362b4; end: 106836323;  */

void FUN_1068362b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fc00();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106836324; end: 10683636b;  */

void FUN_106836324(double param_1,double param_2,long param_3)

{
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2a280(param_2 - param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10683636c; end: 10683636f;  */

void FUN_10683636c(void)

{
  return;
}



/* Entry: 106836370; end: 1068363b7;  */

void FUN_106836370(double param_1,double param_2,long param_3)

{
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2a260(param_2 - param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068363b8; end: 1068363bb;  */

void FUN_1068363b8(void)

{
  return;
}



/* Entry: 1068363bc; end: 1068364ab;  */

void FUN_1068363bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be27420(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068364ac; end: 106836553; -[SCStandardExternalShareLogger _handleDismiss] */

void FUN_1068364ac(long param_1)

{
  if (((*(byte *)(param_1 + 0x78) & 1) == 0) && (*(long *)(param_1 + 0x18) != 2)) {
    func_0x000108f9516c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x10),0,
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 8),0,0,0,*(long *)(param_1 + 0x18),0x18,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010be07d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__emitGrapheneShareSheetSelectedW_11255f8e8,0,0);
    return;
  }
  return;
}



/* Entry: 106836554; end: 10683682b; -[SCStandardExternalShareLogger _handleSelectShareWithMediaConfiguration:phoneNumber:destination:] */

void FUN_106836554(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar14;
  undefined8 unaff_x27;
  undefined *puVar15;
  undefined8 unaff_x28;
  undefined1 auStack_278 [8];
  undefined8 *puStack_270;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined1 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar7 = param_4;
  uVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined8 *)0x0) {
    puVar3 = param_3;
    func_0x00010c0c6c20();
    if (puVar3 < (undefined8 *)0x3) {
      uVar8 = *(undefined8 *)(&UNK_10dde1770 + (long)puVar3 * 8);
    }
    else {
      uVar8 = 0x18;
    }
    *(undefined8 *)(param_1 + 0x90) = uVar8;
    _objc_retain(param_4);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 **)(param_1 + 0x28) = param_4;
    puStack_200 = param_4;
    _objc_release(uVar8);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    puStack_1f8 = param_3;
    func_0x00010c0c45e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c241420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar4 = puVar3;
    func_0x00010bf52a60();
    unaff_x24 = param_3;
    if (puVar4 != (undefined8 *)0x0) {
      lVar10 = *plStack_1a0;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          if (*plStack_1a0 != lVar10) {
            _objc_enumerationMutation(puVar3);
          }
          unaff_x25 = *(undefined8 *)(lStack_1a8 + (long)puVar12 * 8);
          unaff_x26 = *(undefined8 *)(param_1 + 0xb0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb0780();
          _objc_release(unaff_x26);
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar4 != puVar12);
        puVar4 = puVar3;
        func_0x00010bf52a60();
        unaff_x24 = (undefined8 *)0x0;
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(puVar3);
    unaff_x23 = *(long *)(param_1 + 0xc0);
    func_0x00010bf2a740();
    _objc_retainAutoreleasedReturnValue();
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    puVar3 = &uStack_1f0;
    puVar7 = auStack_170;
    uVar8 = 0x10;
    lVar10 = unaff_x23;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar13 = *plStack_1e0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1e0 != lVar13) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x25 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);
          uVar8 = *(undefined8 *)(param_1 + 0xc0);
          func_0x00010bf0b2a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x25;
          func_0x00010c09da80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = uVar8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          _objc_release(uVar8);
          unaff_x26 = *(undefined8 *)(param_1 + 0xb0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb0760();
          _objc_release(unaff_x26);
          _objc_release(unaff_x28);
          lVar11 = lVar11 + 1;
        } while (lVar10 != lVar11);
        puVar3 = &uStack_1f0;
        puVar7 = auStack_170;
        uVar8 = 0x10;
        lVar10 = unaff_x23;
        func_0x00010bf52a60();
        unaff_x24 = (undefined8 *)0x0;
      } while (lVar10 != 0);
    }
    _objc_release(unaff_x23);
    param_3 = puStack_1f8;
    param_4 = puStack_200;
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puStack_200;
  pcStack_208 = FUN_10683682c;
  uStack_260 = unaff_x28;
  uStack_258 = unaff_x27;
  uStack_250 = unaff_x26;
  uStack_248 = unaff_x25;
  puStack_240 = unaff_x24;
  lStack_238 = unaff_x23;
  lStack_230 = param_1;
  uStack_228 = param_5;
  puStack_220 = param_4;
  puStack_218 = param_3;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puVar1);
  *(undefined1 *)(puVar4 + 0xf) = 1;
  if (puVar7 != (undefined1 *)0x0) {
    puVar5 = puVar7;
    func_0x00010bf681e0();
    puVar4[4] = puVar5;
    puVar5 = puVar7;
    func_0x00010bf681e0();
    if (puVar5 == (undefined1 *)0x11) {
      puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc();
      puVar14 = puVar7;
      func_0x00010c26bac0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820();
      uVar9 = puVar4[6];
      puVar4[6] = puVar15;
      _objc_release(uVar9);
    }
    else {
      puVar5 = puVar7;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = (undefined1 *)puVar4[6];
      puVar4[6] = puVar5;
    }
    _objc_release(puVar14);
  }
  iVar2 = (int)puVar4[0x17];
  func_0x000108faa364();
  puVar15 = PTR_PTR_1126ae558;
  uVar9 = uVar8;
  if (iVar2 == 0) {
    iVar2 = (int)puVar4[0x17];
    func_0x000108faa350();
    puVar15 = PTR_PTR_1126ae558;
    if (iVar2 == 0) {
      puVar15 = (undefined *)0x0;
      goto LAB_106836a1c;
    }
    func_0x00010c0c3fe0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar15);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c45e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar15);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
  _objc_release(uVar9);
LAB_106836a1c:
  _objc_initWeak(auStack_268,puVar4);
  _objc_copyWeak(auStack_278,auStack_268);
  _objc_retain(uVar8);
  puStack_270 = puVar3;
  _objc_retain(puVar1);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar9 = puVar4[0x10];
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar15);
  _objc_release(uVar9);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_278);
  _objc_destroyWeak(auStack_268);
  _objc_release(puVar15);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 10683682c; end: 106836b7b; -[SCStandardExternalShareLogger _handleCompleteShareWithShareDestination:textConfiguration:mediaConfiguration:activityType:shortLinkURL:lensLoggingInfo:shareIdOverride:] */

void FUN_10683682c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  *(undefined1 *)(param_1 + 0x78) = 1;
  if (param_4 != 0) {
    lVar2 = param_4;
    func_0x00010bf681e0();
    *(long *)(param_1 + 0x20) = lVar2;
    lVar2 = param_4;
    func_0x00010bf681e0();
    if (lVar2 == 0x11) {
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc();
      lVar5 = param_4;
      func_0x00010c26bac0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar6;
      _objc_release(uVar4);
    }
    else {
      lVar2 = param_4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar2;
    }
    _objc_release(lVar5);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0xb8);
  func_0x000108faa364();
  puVar6 = PTR_PTR_1126ae558;
  uVar4 = param_5;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xb8);
    func_0x000108faa350();
    puVar6 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_106836a1c;
    }
    func_0x00010c0c3fe0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c45e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
LAB_106836a1c:
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_5);
  uStack_70 = param_3;
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar6);
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106836b7c; end: 106836e87;  */

void FUN_106836b7c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar10 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar10 != 0) {
    lVar21 = param_2;
    func_0x00010bf529e0();
    if (lVar21 == 0) {
      lVar21 = 0x18;
    }
    else {
      lVar21 = *(long *)(lVar10 + 0x90);
    }
    lVar11 = *(long *)(param_1 + 0x20);
    func_0x00010c0c6d00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) {
      lVar12 = *(long *)(param_1 + 0x20);
      func_0x00010c0c6d00();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar12;
      func_0x00010c0c6c20();
      _objc_release(lVar12);
      _objc_release(lVar11);
      unaff_x22 = lVar11;
      if (lVar14 != -1) {
        unaff_x22 = *(long *)(param_1 + 0x20);
        func_0x00010c0c6d00();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = unaff_x22;
        func_0x00010c0c6c20();
        _objc_release(unaff_x22);
      }
    }
    lVar11 = *(long *)(param_1 + 0x20);
    func_0x00010c116020();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) {
      lVar12 = *(long *)(param_1 + 0x20);
      func_0x00010c116020();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar12;
      func_0x00010c116000();
      _objc_release(lVar12);
      _objc_release(lVar11);
      unaff_x22 = lVar11;
      if (lVar14 != -1) {
        unaff_x22 = *(long *)(param_1 + 0x20);
        func_0x00010c116020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c116000();
        _objc_release(unaff_x22);
      }
    }
    uVar22 = *(undefined8 *)(lVar10 + 0x70);
    uVar18 = *(undefined8 *)(param_1 + 0x50);
    uVar17 = *(undefined8 *)(lVar10 + 0x48);
    uVar4 = *(undefined8 *)(lVar10 + 0x50);
    uVar16 = *(undefined8 *)(lVar10 + 0x58);
    uVar19 = *(undefined8 *)(lVar10 + 0x68);
    uVar1 = *(undefined8 *)(lVar10 + 8);
    uVar5 = *(undefined8 *)(lVar10 + 0x10);
    uVar13 = *(undefined8 *)(lVar10 + 0x30);
    func_0x00010beec820(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar10 + 0x18);
    uVar6 = *(undefined8 *)(lVar10 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfde6e0();
    lVar14 = *(long *)(lVar10 + 0x28);
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar14;
    func_0x00010c08fa60();
    if (lVar11 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      unaff_x22 = *(long *)(lVar10 + 0x28);
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf529e0();
    func_0x000108f9516c(uVar22,uVar5,uVar18,uVar17,uVar4,uVar16,uVar19,uVar1,uVar13,uVar8,uVar6,
                        uVar2,lVar21,uVar3,uVar7,uVar9);
    if (lVar11 != 0) {
      _objc_release(puVar20);
      _objc_release(unaff_x22);
    }
    _objc_release(lVar14);
    _objc_release(uVar13);
    func_0x00010be07d20(lVar10);
    func_0x00010be93320(lVar10);
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    *(undefined8 *)(param_2 + 0x90) = 0x18;
    *(undefined8 *)(param_2 + 0x20) = 0;
    uVar17 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar17);
    return;
  }
  return;
}



/* Entry: 106836e88; end: 106836ea3; -[SCStandardExternalShareLogger _resetLoggingParametersAfterCompleteShare] */

void FUN_106836e88(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x90) = 0x18;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106836ea4; end: 106836eaf; -[SCStandardExternalShareLogger _handleGenerateMediaWithShareDestination:duration:] */

void FUN_106836ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be07d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__emitGrapheneShareSheetContentGe_11255f8e0,param_3,
             &PTR____CFConstantStringClassReference_110db9458);
  return;
}



/* Entry: 106836eb0; end: 106836ebb; -[SCStandardExternalShareLogger _handleGenerateMediaLinkWithShareDestination:duration:] */

void FUN_106836eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be07d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__emitGrapheneShareSheetContentGe_11255f8e0,param_3,
             &PTR____CFConstantStringClassReference_110dbf1d8);
  return;
}



/* Entry: 106836ebc; end: 10683705f; -[SCStandardExternalShareLogger _emitGrapheneShareSheetContentGeneratedWithDestination:duration:type:] */

void FUN_106836ebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5648;
  _objc_retain(param_4);
  func_0x00010c22aee0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f94918(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcecf8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9478,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000108f950bc(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dad058,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000108f94dd8(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c22af20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106837060; end: 10683723b; -[SCStandardExternalShareLogger _emitGrapheneShareSheetSelectedWithShareDestination:activityType:] */

void FUN_106837060(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5648;
  func_0x00010c22afa0(PTR_PTR_1126b5648);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f94918(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcecf8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f95094(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e61438,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000108f94dd8(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000108f950bc(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad058,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = puVar1;
  if (param_4 != 0) {
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e61458,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c22af20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10683723c; end: 106837297; -[SCStandardExternalShareLogger _createPerformerWithPerformerProvider:] */

void FUN_10683723c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106837298; end: 106837387; -[SCStandardExternalShareLogger .cxx_destruct] */

void FUN_106837298(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106837388; end: 1068375b3; -[SCStandardExternalShareActionHandler generateWatermarkedMediaConfigurationWithMediaConfiguration:textConfiguration:watermarkLayout:watermarkType:] */

void FUN_106837388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = auStack_68;
  _objc_loadWeakRetained(puVar3);
  uVar4 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2a2a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010be1c4c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar8 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c297260(puVar8);
  puVar9 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1068375b4; end: 1068377f3;  */

void FUN_1068375b4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2478;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c45e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c241420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021e80();
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b2490;
    _objc_alloc(PTR_PTR_1126b2490);
    func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c106740(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bfb4ac0(*(undefined8 *)(param_1 + 0x28));
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2a2a00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c6d00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c116020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077880();
    func_0x00010c028f20(puVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
    _objc_release(param_2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1068377f4; end: 1068378b3;  */

void FUN_1068377f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068378b4; end: 1068378c7;  */

void FUN_1068378b4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001068378c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068378c8; end: 106837c4f; -[SCStandardExternalShareActionHandler _generateWatermarkedMediaWithNonWatermarkedMedia:nonWatermarkedMediaContent:textConfiguration:watermarkProfile:watermarkLayout:watermarkType:] */

void FUN_1068378c8(undefined **param_1,undefined **param_2,long param_3,undefined **param_4,
                  undefined8 param_5,undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined2 uStack_1f8;
  long lStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 uStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined *apuStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b8 = param_3;
  _objc_retain(param_3);
  ppuStack_1b0 = param_4;
  _objc_retain(param_4);
  uStack_1a0 = param_5;
  _objc_retain(param_5);
  ppuStack_1a8 = param_6;
  _objc_retain(param_6);
  ppuVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x000108faa4cc();
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x000108faa4e0();
  _objc_release(ppuVar1);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar4 = param_1;
  ppuStack_198 = ppuVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar4;
  func_0x000108faa364();
  _objc_release(ppuVar4);
  if ((int)ppuVar1 == 0) {
    ppuVar1 = param_1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x000108faa350();
    _objc_release(ppuVar1);
    if ((int)ppuVar2 != 0) {
      lVar5 = lStack_1b8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf51e00();
      _objc_release(lVar5);
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      plStack_180 = (long *)0x0;
      _objc_retain(lVar6);
      lVar5 = lVar6;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        unaff_x22 = *plStack_180;
        do {
          lVar9 = 0;
          do {
            if (*plStack_180 != unaff_x22) {
              _objc_enumerationMutation(lVar6);
            }
            param_6 = param_1;
            uStack_1c0 = (char)ppuVar3;
            func_0x00010be1c4e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuStack_198);
            _objc_release(param_6);
            lVar9 = lVar9 + 1;
          } while (lVar5 != lVar9);
          lVar5 = lVar6;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      ppuVar2 = (undefined **)0x0;
      _objc_release(lVar6);
      _objc_release(lVar6);
    }
  }
  else {
    _objc_initWeak(apuStack_f8,param_1);
    ppuVar4 = ppuStack_1b0;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_106837c50;
    puStack_130 = &UNK_110943278;
    param_6 = &puStack_148;
    param_2 = apuStack_f8;
    _objc_copyWeak(auStack_118,param_2);
    uVar7 = uStack_1a0;
    _objc_retain(uStack_1a0);
    ppuVar1 = ppuStack_1a8;
    uStack_128 = uVar7;
    _objc_retain(ppuStack_1a8);
    ppuStack_120 = ppuVar1;
    uStack_100 = SUB81(ppuVar2,0);
    ppuVar1 = ppuVar4;
    uStack_110 = param_7;
    uStack_108 = param_8;
    uStack_ff = (char)ppuVar3;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0d3c80();
    _objc_release(ppuStack_198);
    _objc_release(ppuVar1);
    _objc_release(ppuVar4);
    _objc_release(ppuStack_120);
    _objc_release(uStack_128);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(apuStack_f8);
    ppuStack_198 = ppuVar2;
  }
  _objc_release(ppuStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(ppuStack_1b0);
  lVar5 = lStack_1b8;
  _objc_release();
  ppuVar1 = ppuStack_198;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(apuStack_f8);
    lVar6 = lVar5;
    __Unwind_Resume();
    pcStack_1c8 = FUN_106837c50;
    lStack_1f0 = unaff_x22;
    ppuStack_1e8 = param_6;
    ppuStack_1e0 = ppuVar2;
    lStack_1d8 = lVar5;
    puStack_1d0 = &stack0xfffffffffffffff0;
    _objc_retain(param_2);
    _objc_copyWeak(auStack_210,lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(lVar6 + 0x28);
    _objc_retain(uVar8);
    uStack_200 = *(undefined8 *)(lVar6 + 0x40);
    uStack_208 = *(undefined8 *)(lVar6 + 0x38);
    uStack_1f8 = *(undefined2 *)(lVar6 + 0x48);
    ppuVar1 = param_2;
    func_0x00010bfb2660(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_210);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106837c50; end: 106837d43;  */

void FUN_106837c50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined2 *)(param_1 + 0x48);
  uVar1 = param_2;
  func_0x00010bfb2660(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106837d44; end: 106837ddf;  */

void FUN_106837d44(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x00010be1c4e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106837de0; end: 106837fd7; -[SCStandardExternalShareActionHandler _generateWatermarkedMediaWithNonWatermarkedMedia:textConfiguration:watermarkProfile:watermarkLayout:watermarkType:enableWatermarkImages:enableWatermarkVideos:] */

void FUN_106837de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c2a29c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbe800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106837fd8;
  puStack_b8 = &UNK_1109432f8;
  uStack_b0 = uVar3;
  uStack_80 = param_8;
  _objc_retain(param_5);
  uStack_a8 = param_5;
  uStack_90 = param_6;
  uStack_88 = param_7;
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(puVar1);
  puStack_118 = puVar4;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1068382b0;
  puStack_100 = &UNK_110943328;
  uStack_f8 = param_5;
  uStack_f0 = param_1;
  uStack_e8 = uVar2;
  puStack_e0 = puVar1;
  uStack_d8 = param_3;
  puStack_98 = puVar1;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  func_0x00010c0be4e0(param_3,param_2,&puStack_d0,&puStack_118);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_d8);
  _objc_release(puStack_e0);
  _objc_release(uStack_f8);
  _objc_release(puStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106837fd8; end: 10683812f;  */

void FUN_106837fd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2a2a20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    func_0x00010bfc0720(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  else {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x38));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106838130; end: 10683825b;  */

void FUN_106838130(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10683825c;
  uStack_40 = 0x10683826c;
  uStack_38 = 0;
  func_0x00010c0c0800(param_2);
  if (puStack_58[5] == 0) {
    puVar1 = *(undefined **)(param_1 + 0x30);
    _objc_retain(puVar1);
  }
  else {
    puVar1 = PTR_PTR_1126b1c68;
    func_0x00010bfe94e0(PTR_PTR_1126b1c68);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10683825c; end: 106838273;  */

void FUN_10683825c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106838274; end: 1068382ab;  */

void FUN_106838274(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


