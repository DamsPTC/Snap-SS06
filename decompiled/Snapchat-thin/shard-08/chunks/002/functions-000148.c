/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e8fae0; end: 105e8fb97; -[SCComposerLensActionHandler openLensInfoCardWithLens:analyticsContext:] */

void FUN_105e8fae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105e8fb98;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e8fb98; end: 105e8fba7;  */

void FUN_105e8fb98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__openLensInfoCardWithLens_analyt_112578e60,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105e8fba8; end: 105e8fd1b; -[SCComposerLensActionHandler _openLensInfoCardWithLens:analyticsContext:] */

void FUN_105e8fba8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = param_4;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b6888;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = param_1;
  func_0x00010bdef5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042180(puVar1,param_2,uVar3,uVar4,lVar2,*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c156900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_PTR_1126c55c0;
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c156900(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcc60(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar3 = param_3;
  func_0x00010bf0a840(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10c800(uVar4,param_2,param_1,uVar3,8,0);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e8fd1c; end: 105e8ffb3; -[SCComposerLensActionHandler _replyParametersWithLens:user:analyticsContext:postToStory:] */

void FUN_105e8fd1c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae6c0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c25bbc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,0,0,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126ae6c0;
  if (lVar3 != 0) {
    lVar2 = param_4;
    func_0x00010c294420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294300(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar2);
    puVar1 = puVar4;
  }
  puVar4 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar5 = PTR_PTR_1126ae6d8;
  _objc_alloc(PTR_PTR_1126ae6d8);
  func_0x00010c0460c0();
  lVar2 = param_3;
  func_0x00010c08b6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf488a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c55c8;
    _objc_alloc(PTR_PTR_1126c55c8);
    lVar2 = lVar3;
    func_0x00010c15ffa0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045080(puVar9,param_2,lVar2,0,0);
    _objc_release(lVar2);
  }
  puVar6 = PTR_PTR_1126b47d0;
  _objc_alloc(PTR_PTR_1126b47d0);
  uVar7 = param_5;
  func_0x00010c15ffa0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c03ca00(puVar6,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110daafd8,uVar7,0);
  _objc_release(uVar7);
  puVar8 = PTR_PTR_1126b0100;
  _objc_alloc(PTR_PTR_1126b0100);
  func_0x00010bff7380();
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105e8ffb4; end: 105e9002b; -[SCComposerLensActionHandler _createLensInfoCardActionHandler] */

void FUN_105e8ffb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c094900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf54520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e9002c; end: 105e90033; -[SCComposerLensActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105e9002c(void)

{
  return 0;
}



/* Entry: 105e90034; end: 105e9003f; -[SCComposerLensActionHandler pushToValdiMarshaller:] */

undefined8 FUN_105e90034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df460;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 105e90040; end: 105e90057; -[SCComposerLensActionHandler presentingViewController] */

void FUN_105e90040(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e90058; end: 105e90063; -[SCComposerLensActionHandler setPresentingViewController:] */

void FUN_105e90058(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 105e90064; end: 105e90147; -[SCComposerLensActionHandler .cxx_destruct] */

void FUN_105e90064(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e90148; end: 105e90487; -[SCComposerLensActionHandlerFactory initWithLensInfoCardActionHandlingServices:lensCallToActionServices:lensInfoCardsScopeExposer:lensCreatorProfileScopeExposer:lensCreatorProfileScopeServices:lensExplorerNavigationServices:modularCameraScopeExposer:modularCameraScopeServices:playGamesPresenter:playGamesStudySettings:lensInfoCardsScopeServices:infoCardReportServices:lensCreatorSubscriptionProviderServices:lensTopicsServices:spectaclesLensServices:] */

undefined8 *
FUN_105e90148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
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
  puStack_70 = PTR_PTR_1126ed970;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
  }
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e90488; end: 105e906bf; -[SCComposerLensActionHandlerFactory createLensActionHandlerWithSource:lensPickerDelegate:] */

void FUN_105e90488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar9);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar11);
  puVar2 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e906c0;
  puStack_90 = &UNK_1108f0c80;
  uStack_88 = uVar9;
  uStack_80 = uVar11;
  _objc_retain(uVar11);
  _objc_retain(uVar9);
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar10);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar12);
  puVar3 = PTR_PTR_1126ae720;
  puStack_d8 = puVar4;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x105e906f0;
  puStack_c0 = &UNK_1108f0cb0;
  uStack_b8 = uVar10;
  uStack_b0 = uVar12;
  _objc_retain(uVar12);
  _objc_retain(uVar10);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_d8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c55d0;
  _objc_alloc(PTR_PTR_1126c55d0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c092d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c090080(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be8f1e0(param_1,param_2,param_3);
  func_0x00010c023dc0(puVar4,param_2,uVar5,uVar8,uVar1,uVar6,puVar3,puVar2,lVar7,param_4,
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80));
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar11);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e906c0; end: 105e9071f;  */

void FUN_105e906c0(void)

{
  _objc_alloc(PTR_PTR_1126b5f28);
  func_0x00010c025fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e90720; end: 105e9073b; -[SCComposerLensActionHandlerFactory _replySourceFromSnapSource:] */

ulong FUN_105e90720(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 != 0x52) && (param_3 != 0x59)) {
    if (param_3 < 0x86) {
      return *(ulong *)(&UNK_10dfba9f8 + param_3 * 8);
    }
    return 0xffffffffffffffff;
  }
  return param_3;
}



/* Entry: 105e9073c; end: 105e90813; -[SCComposerLensActionHandlerFactory .cxx_destruct] */

void FUN_105e9073c(long param_1)

{
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



/* Entry: 105e90814; end: 105e908f7; -[SCComposerLensActionHandlingServiceProvider provide] */

void FUN_105e90814(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c55e0;
  _objc_alloc(PTR_PTR_1126c55e0);
  func_0x00010c022a60();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e908f8; end: 105e90b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e908f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR_PTR_1126c55d8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112738a60;
    _objc_loadWeakRetained();
    lVar2 = param_1 + _DAT_112738a64;
    _objc_loadWeakRetained();
    uVar17 = *(undefined8 *)(param_1 + _DAT_112738a88);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112738a8c);
    lVar15 = (long)_DAT_112738a90;
    _objc_retain();
    _objc_retain(uVar17);
    lVar15 = param_1 + lVar15;
    _objc_loadWeakRetained();
    lVar4 = param_1 + _DAT_112738a5c;
    _objc_loadWeakRetained();
    lVar5 = (long)_DAT_112738a84;
    uVar18 = *(undefined8 *)(param_1 + _DAT_112738a80);
    _objc_retain(uVar18);
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained();
    lVar6 = param_1 + _DAT_112738a68;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c0fe560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112738a68;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c25df40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_112738a6c;
    _objc_loadWeakRetained();
    lVar11 = param_1 + _DAT_112738a70;
    _objc_loadWeakRetained();
    lVar12 = param_1 + _DAT_112738a74;
    _objc_loadWeakRetained();
    lVar13 = param_1 + _DAT_112738a78;
    _objc_loadWeakRetained();
    lVar14 = param_1 + _DAT_112738a7c;
    _objc_loadWeakRetained();
    func_0x00010c024b40(puVar16,param_2,lVar1,lVar2,uVar17,uVar3,lVar15,lVar4,uVar18,lVar5,lVar7,
                        lVar9,lVar10,lVar11,lVar12,lVar13,lVar14);
    _objc_release(uVar18);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_release(lVar15);
    _objc_release(uVar17);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 105e90b58; end: 105e90c37; -[SCComposerLensActionHandlingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e90b58(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738a90);
  _objc_storeStrong(param_1 + _DAT_112738a8c,0);
  _objc_storeStrong(param_1 + _DAT_112738a88,0);
  _objc_destroyWeak(param_1 + _DAT_112738a84);
  _objc_storeStrong(param_1 + _DAT_112738a80,0);
  _objc_destroyWeak(param_1 + _DAT_112738a7c);
  _objc_destroyWeak(param_1 + _DAT_112738a78);
  _objc_destroyWeak(param_1 + _DAT_112738a74);
  _objc_destroyWeak(param_1 + _DAT_112738a70);
  _objc_destroyWeak(param_1 + _DAT_112738a6c);
  _objc_destroyWeak(param_1 + _DAT_112738a68);
  _objc_destroyWeak(param_1 + _DAT_112738a64);
  _objc_destroyWeak(param_1 + _DAT_112738a60);
  _objc_destroyWeak(param_1 + _DAT_112738a5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112738a58);
  return;
}



/* Entry: 105e90c38; end: 105e90cbf; -[SCLensSearchLensExtensionModel initWithCoder:] */

undefined1 * FUN_105e90c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed978;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e90cc0; end: 105e90d37; -[SCLensSearchLensExtensionModel initWithSearchPageSessionId:] */

undefined1 * FUN_105e90cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed978;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e90d38; end: 105e90d5b; -[SCLensSearchLensExtensionModel copyWithZone:] */

undefined8 FUN_105e90d38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e90d5c; end: 105e90d73; -[SCLensSearchLensExtensionModel encodeWithCoder:] */

void FUN_105e90d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110e2e978);
  return;
}



/* Entry: 105e90d74; end: 105e90d7b; -[SCLensSearchLensExtensionModel hash] */

void FUN_105e90d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105e90d7c; end: 105e90e0b; -[SCLensSearchLensExtensionModel isEqual:] */

long FUN_105e90d7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e90df0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105e90df0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105e90df0;
    }
  }
  lVar3 = 1;
LAB_105e90df0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e90e0c; end: 105e90e13; -[SCLensSearchLensExtensionModel searchPageSessionId] */

undefined8 FUN_105e90e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e90e14; end: 105e90e1f; -[SCLensSearchLensExtensionModel .cxx_destruct] */

void FUN_105e90e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e90e20; end: 105e90eef; -[SCComposerStorySnapViewStateProvider initWithStoriesSnapReadReceiptService:dataFetcher:storiesConfigProvider:] */

undefined1 *
FUN_105e90e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ed980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e90ef0; end: 105e90fd7; -[SCComposerStorySnapViewStateProvider getViewStatesWithSnapIds:callback:] */

void FUN_105e90ef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08d900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105e90fd8;
  puStack_48 = &UNK_1108846a8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c121840(uVar2,param_2,param_3,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e90fd8; end: 105e91183;  */

void FUN_105e90fd8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  long lStack_1b0;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar13 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar13);
  puVar10 = auStack_f0;
  lVar11 = 0x10;
  lVar3 = lVar13;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar2 = PTR_PTR_1126c55e8;
        _objc_alloc();
        func_0x00010c047ee0();
        func_0x00010befa120(puVar1);
        _objc_release(puVar2);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar10 = auStack_f0;
      lVar11 = 0x10;
      lVar3 = lVar13;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar13);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    puVar9 = (undefined8 *)0x0;
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(lVar11);
  puVar1 = PTR_PTR_1126b2798;
  _objc_opt_new();
  if (lVar11 == 0) {
    puVar2 = PTR_PTR_1126b2f30;
    _objc_alloc(PTR_PTR_1126b2f30);
    puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_250 = 0xc2000000;
    pcStack_248 = FUN_105e9162c;
    puStack_240 = &UNK_110842e18;
    ppuVar12 = &puStack_258;
    _objc_retain(puVar1);
    puStack_238 = puVar1;
    func_0x00010bffae00(puVar2);
    puVar4 = puStack_238;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    _objc_retain(puVar9);
    puVar5 = (undefined1 *)puVar9;
    func_0x00010bf52a60();
    if (puVar5 != (undefined1 *)0x0) {
      lVar3 = *plStack_290;
      do {
        puVar14 = (undefined1 *)0x0;
        do {
          if (*plStack_290 != lVar3) {
            _objc_enumerationMutation(puVar9);
          }
          uVar16 = *(undefined8 *)(lStack_298 + (long)puVar14 * 8);
          uVar6 = uVar16;
          func_0x00010c241220(uVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar6);
          if (puVar2 == (undefined *)0x0) {
            puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
            _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
            uVar6 = uVar16;
            func_0x00010c241220(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(uVar6);
            _objc_release(puVar2);
          }
          uVar6 = uVar16;
          func_0x00010c241220(uVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar4;
          func_0x00010c0e00e0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c259cc0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar16);
          _objc_release(puVar2);
          _objc_release(uVar6);
          puVar14 = puVar14 + 1;
        } while (puVar5 != puVar14);
        puVar5 = (undefined1 *)puVar9;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined1 *)0x0);
    }
    _objc_release(puVar9);
    _objc_initWeak(auStack_2a8,param_2);
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar6;
    func_0x00010c258b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d8 = 0xc2000000;
    pcStack_2d0 = FUN_105e91634;
    puStack_2c8 = &UNK_1108e9d98;
    _objc_retain(puVar4);
    ppuVar12 = &puStack_2e0;
    puStack_2c0 = puVar4;
    _objc_copyWeak(auStack_2b0,auStack_2a8);
    _objc_retain(lVar11);
    uVar8 = uVar16;
    lStack_2b8 = lVar11;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(uVar6);
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_retain(uVar8);
    func_0x00010bffae00(puVar2);
    func_0x00010bef7460(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2f30;
    _objc_alloc(PTR_PTR_1126b2f30);
    _objc_retain(puVar1);
    func_0x00010bffae00(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar8);
    _objc_release(uVar8);
    _objc_release(lStack_2b8);
    _objc_destroyWeak(auStack_2b0);
    _objc_release(puStack_2c0);
    _objc_destroyWeak(auStack_2a8);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar12 + 6);
  _objc_destroyWeak(auStack_2a8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)((long)puVar9 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105e91184; end: 105e9162b; -[SCComposerStorySnapViewStateProvider observeViewStateWithOrganicStoryIdSnapIdPairs:promotedStoryIdSnapCountPairs:callback:] */

void FUN_105e91184(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2798;
  _objc_opt_new();
  if (param_5 == 0) {
    puVar7 = PTR_PTR_1126b2f30;
    _objc_alloc(PTR_PTR_1126b2f30);
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_105e9162c;
    puStack_110 = &UNK_110842e18;
    ppuVar9 = &puStack_128;
    _objc_retain(puVar1);
    puStack_108 = puVar1;
    func_0x00010bffae00(puVar7);
    puVar2 = puStack_108;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_160;
      do {
        lVar10 = 0;
        do {
          if (*plStack_160 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar11 = *(undefined8 *)(lStack_168 + lVar10 * 8);
          uVar4 = uVar11;
          func_0x00010c241220(uVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar4);
          if (puVar7 == (undefined *)0x0) {
            puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
            _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
            uVar4 = uVar11;
            func_0x00010c241220(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(uVar4);
            _objc_release(puVar7);
          }
          uVar4 = uVar11;
          func_0x00010c241220(uVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          func_0x00010c0e00e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c259cc0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar7);
          _objc_release(uVar11);
          _objc_release(puVar7);
          _objc_release(uVar4);
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = param_3;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_3);
    _objc_initWeak(auStack_178,param_1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010c258b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_105e91634;
    puStack_198 = &UNK_1108e9d98;
    _objc_retain(puVar2);
    ppuVar9 = &puStack_1b0;
    puStack_190 = puVar2;
    _objc_copyWeak(auStack_180,auStack_178);
    _objc_retain(param_5);
    uVar6 = uVar11;
    lStack_188 = param_5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar7 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_retain(uVar6);
    func_0x00010bffae00(puVar7);
    func_0x00010bef7460(puVar1);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b2f30;
    _objc_alloc(PTR_PTR_1126b2f30);
    _objc_retain(puVar1);
    func_0x00010bffae00(puVar7);
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar6);
    _objc_release(lStack_188);
    _objc_destroyWeak(auStack_180);
    _objc_release(puStack_190);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar9 + 6);
  _objc_destroyWeak(auStack_178);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_3 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105e9162c; end: 105e91633;  */

void FUN_105e9162c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105e91634; end: 105e91947;  */

void FUN_105e91634(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(param_2);
      }
      lVar4 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = *(long *)(param_1 + 0x20);
      lVar5 = lVar4;
      func_0x00010c243260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar12;
      func_0x00010bf529e0();
      if (lVar5 != 0) {
        _objc_retain(lVar12);
        lVar5 = lVar12;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar12);
            }
            puVar6 = PTR_PTR_1126c55e8;
            _objc_alloc(PTR_PTR_1126c55e8);
            lVar7 = lVar4;
            func_0x00010c243260(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c29ea60(lVar4);
            func_0x00010c047ee0(puVar6);
            _objc_release(lVar7);
            func_0x00010c20d1a0(puVar6);
            func_0x00010befa120(puVar2);
            _objc_release(puVar6);
            lVar9 = lVar9 + 1;
          } while (lVar5 != lVar9);
          lVar5 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
      }
      _objc_release(lVar12);
      _objc_release(lVar4);
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar3);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar6 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bea6200();
    _objc_release(lVar3);
    lVar11 = *(long *)(param_1 + 0x28);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010be21be0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar11 + 0x10))(lVar11,puVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 105e91948; end: 105e91957;  */

void FUN_105e91948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 105e91958; end: 105e9195f; -[SCComposerStorySnapViewStateProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105e91958(void)

{
  return 0;
}



/* Entry: 105e91960; end: 105e9196b; -[SCComposerStorySnapViewStateProvider pushToValdiMarshaller:] */

void FUN_105e91960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b04af98(param_3,param_1);
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 105e9196c; end: 105e919ab; -[SCComposerStorySnapViewStateProvider _setOrganicSnapViewStates:] */

void FUN_105e9196c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 105e919ac; end: 105e919e7; -[SCComposerStorySnapViewStateProvider _getOrganicSnapViewStates] */

void FUN_105e919ac(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e919e8; end: 105e91a27; -[SCComposerStorySnapViewStateProvider _setPromotedStoryViewStates:] */

void FUN_105e919e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 105e91a28; end: 105e91a63; -[SCComposerStorySnapViewStateProvider _getPromotedStoryViewStates] */

void FUN_105e91a28(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e91a64; end: 105e91ab7; -[SCComposerStorySnapViewStateProvider .cxx_destruct] */

void FUN_105e91a64(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e91ab8; end: 105e91b9b; -[SCComposerStorySnapViewStateServiceProvider provide] */

void FUN_105e91ab8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c55f8;
  _objc_alloc(PTR_PTR_1126c55f8);
  func_0x00010c04d340();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e91b9c; end: 105e91c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e91b9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c55f0;
    _objc_alloc(PTR_PTR_1126c55f0);
    lVar1 = param_1 + _DAT_112738ab4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_112738ab8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112738abc;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d320(puVar6,param_2,lVar1,lVar3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e91c98; end: 105e91ce7; -[SCComposerStorySnapViewStateServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e91c98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738abc);
  _objc_destroyWeak(param_1 + _DAT_112738ab8);
  _objc_destroyWeak(param_1 + _DAT_112738ab4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112738ab0);
  return;
}



/* Entry: 105e91ce8; end: 105e91d5b; -[SCComposerStorySnapViewStateServices initWithStoriesSnapViewStateProvider:] */

undefined1 * FUN_105e91ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed988;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e91d5c; end: 105e91d63; -[SCComposerStorySnapViewStateServices storySnapViewStateProvider] */

undefined8 FUN_105e91d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e91d64; end: 105e91d6f; -[SCComposerStorySnapViewStateServices .cxx_destruct] */

void FUN_105e91d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e91d70; end: 105e91fa7; -[SCComposerTopicPageLauncher initWithTopicScopeMultiLauncher:topicViewerScopeServices:topicViewerLensScopeServices:topicMusicScopeMultiLauncher:topicLensScopeMultiLauncher:publicGroupsChatScopeLauncher:deckService:presentingViewController:navigationController:topicViewerMusicScopeBuilderServices:] */

undefined8 *
FUN_105e91d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ed990;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e91fa8; end: 105e91fcb; -[SCComposerTopicPageLauncher _scaPageTypeForComposerAnalyticsPageType:] */

undefined8 FUN_105e91fa8(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 6) {
    return *(undefined8 *)(&UNK_10ddd1360 + (ulong)(param_3 - 1U) * 8);
  }
  return 0x10;
}



/* Entry: 105e91fcc; end: 105e920b7; -[SCComposerTopicPageLauncher launchWithTopicId:conversationId:] */

void FUN_105e91fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105e920b8;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e920b8; end: 105e92197;  */

void FUN_105e920b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = lVar1 + 0x40;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    lVar3 = lVar1;
    func_0x00010bde9760(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf231a0(uVar4,param_2,lVar3,&PTR____CFConstantStringClassReference_110daafd8,
                        0xffffffffffffffff,puVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c08b7c0(*(undefined8 *)(lVar1 + 8),param_2,uVar4,lVar1);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e92198; end: 105e922bf; -[SCComposerTopicPageLauncher launchWithMetricsAndDeckContainerWithTopicId:analyticsContext:deckContainer:] */

void FUN_105e92198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105e922c0;
  puStack_60 = &UNK_110850cf8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_5);
  uStack_58 = param_5;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e922c0; end: 105e923ff;  */

void FUN_105e922c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010bf44a60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0fe260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0cfcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    lVar4 = lVar1;
    func_0x00010bde9760(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c247a00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c247a20(uVar6);
    lVar7 = lVar1;
    func_0x00010be9a840(lVar1,param_2,uVar6);
    func_0x00010bf231a0(uVar2,param_2,lVar4,uVar5,lVar7,uVar3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar4);
    func_0x00010c08b7c0(*(undefined8 *)(lVar1 + 8),param_2,uVar2,lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e92400; end: 105e92513; -[SCComposerTopicPageLauncher launchWithMetricsWithTopicId:analyticsContext:conversationId:] */

void FUN_105e92400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105e92514;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e92514; end: 105e92647;  */

void FUN_105e92514(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar2,param_2,uVar5,1);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    lVar4 = lVar1;
    func_0x00010bde9760(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c247a00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c247a20(uVar3);
    lVar6 = lVar1;
    func_0x00010be9a840(lVar1,param_2,uVar3);
    func_0x00010bf231a0(uVar7,param_2,lVar4,uVar5,lVar6,puVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar4);
    func_0x00010c08b7c0(*(undefined8 *)(lVar1 + 8),param_2,uVar7,lVar1);
    _objc_release(uVar7);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e92648; end: 105e92957; -[SCComposerTopicPageLauncher launchWithMusicWithTrack:analyticsContext:] */

void FUN_105e92648(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  lVar2 = param_2 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_3,lVar2,1);
  _objc_release(lVar2);
  uVar3 = param_4;
  func_0x00010c277e80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010af28d38();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c5600;
  _objc_alloc();
  uVar3 = param_4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010bf0a460();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar6 = param_4;
  func_0x00010beff2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar8,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010beff2c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010beff2c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a4e0(param_4);
  func_0x00010c054ca0(puVar5,param_3,uVar4,uVar3,uVar15,puVar8,uVar11,uVar14,(int)param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(uVar3);
  puVar8 = PTR_PTR_1126c5608;
  _objc_alloc(PTR_PTR_1126c5608);
  func_0x00010c01f360();
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = param_5;
  func_0x00010c247a00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c247a20(param_5);
  _objc_release(param_5);
  lVar2 = param_2;
  func_0x00010be9a840(param_2,param_3,uVar4);
  uVar4 = param_4;
  func_0x00010c07b240(param_4);
  _objc_release(param_4);
  func_0x00010bf23440(uVar15,param_3,puVar8,uVar3,lVar2,0,puVar1,uVar4,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c08b7c0(*(undefined8 *)(param_2 + 0x20),param_3,uVar15,param_2);
  _objc_release(uVar15);
  _objc_release(puVar8);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e92958; end: 105e92c63; -[SCComposerTopicPageLauncher launchWithLensWithLensInfo:analyticsContext:] */

void FUN_105e92958(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = param_3;
  func_0x00010bfe5be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar4 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c038f40();
    _objc_release(lVar4);
    puVar5 = PTR_PTR_1126b60a0;
    _objc_alloc();
    uVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c095760(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010bf5b580();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010bf5b600(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c078fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_3;
    func_0x00010c06d940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024600();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_initWeak(auStack_70,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105e92c64;
    puStack_98 = &UNK_110850cf8;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(puVar5);
    puStack_90 = puVar5;
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(puVar3);
    puStack_80 = puVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_b0);
    _objc_release(puStack_80);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e92c64; end: 105e92d17;  */

void FUN_105e92c64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c247a00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c247a20(uVar4);
    lVar5 = lVar2;
    func_0x00010be9a840(lVar2,param_2,uVar4);
    func_0x00010bf23300(uVar6,param_2,uVar1,uVar3,lVar5,*(undefined8 *)(param_1 + 0x30),lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c08b7c0(*(undefined8 *)(lVar2 + 0x28),param_2,uVar6,lVar2);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105e92d18; end: 105e92eaf; -[SCComposerTopicPageLauncher launchWithTopicChatWithConversationID:analyticsContext:deckContainer:] */

void FUN_105e92d18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puVar1 = *(undefined **)(param_1 + 0x38);
    func_0x00010bf44a60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0fe260();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d1da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar4 != (undefined *)0x0) goto LAB_105e92dfc;
  }
  puVar4 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  lVar5 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c038f40(puVar4,param_2,lVar5,1);
  _objc_release(lVar5);
LAB_105e92dfc:
  uVar6 = param_4;
  func_0x00010c247d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bc92e28();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b5c08;
  _objc_alloc(PTR_PTR_1126b5c08);
  lVar5 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c039140(puVar2,param_2,lVar5,param_3,uVar7,puVar4,param_1);
  _objc_release(lVar5);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x30),param_2,puVar2,param_1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e92eb0; end: 105e92ebb; -[SCComposerTopicPageLauncher pushToValdiMarshaller:] */

undefined8 FUN_105e92eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df1a0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 105e92ebc; end: 105e92f73; -[SCComposerTopicPageLauncher _convertTopicIdToName:] */

void FUN_105e92ebc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  ppuVar3 = param_3;
  func_0x00010c08fa60();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010c11f440(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf518,4);
    _objc_retain(param_3);
    ppuVar3 = param_3;
    if (ppuVar1 != (undefined **)0x7fffffffffffffff) {
      ppuVar2 = param_3;
      func_0x00010c08fa60();
      if ((undefined **)((long)ppuVar1 + 1U) < ppuVar2) {
        func_0x00010c260c00(param_3,param_2,(undefined **)((long)ppuVar1 + 1U));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
      }
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105e92f74; end: 105e92f7b; -[SCComposerTopicPageLauncher didCompleteTopicViewerScope:] */

void FUN_105e92f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 105e92f7c; end: 105e92f83; -[SCComposerTopicPageLauncher didCompleteTopicViewerMusicScope:] */

void FUN_105e92f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 105e92f84; end: 105e92f8b; -[SCComposerTopicPageLauncher didCompleteTopicViewerLensScope:] */

void FUN_105e92f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 105e92f8c; end: 105e92f93; -[SCComposerTopicPageLauncher didDismissChatWithScope:] */

void FUN_105e92f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 105e92f94; end: 105e9301f; -[SCComposerTopicPageLauncher .cxx_destruct] */

void FUN_105e92f94(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105e93020; end: 105e931ef; -[SCComposerTopicPageLauncherFactory initWithTopicScopeMultiLauncher:topicViewerScopeServices:topicViewerLensScopeServices:topicMusicScopeMultiLauncher:topicLensScopeMultiLauncher:publicGroupsChatScopeLauncher:deckService:navigationController:topicViewerMusicScopeBuilderServices:] */

undefined1 *
FUN_105e93020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ed998;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e931f0; end: 105e93267; -[SCComposerTopicPageLauncherFactory topicPageLauncherWithPresentingViewController:] */

void FUN_105e931f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5610;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0545a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e93268; end: 105e932eb; -[SCComposerTopicPageLauncherFactory .cxx_destruct] */

void FUN_105e93268(long param_1)

{
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



/* Entry: 105e932ec; end: 105e933cf; -[SCComposerTopicServiceProvider provide] */

void FUN_105e932ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5620;
  _objc_alloc(PTR_PTR_1126c5620);
  func_0x00010c0544e0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e933d0; end: 105e935ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e933d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR_PTR_1126c5618;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112738b14;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c2755c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112738b24;
    _objc_loadWeakRetained();
    lVar4 = param_1 + _DAT_112738b28;
    _objc_loadWeakRetained();
    lVar5 = param_1 + _DAT_112738b14;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c275340();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_112738b14;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c2752c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_112738b14;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c11a360();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112738b1c;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010bf66980();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_112738b18;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_112738b20;
    _objc_loadWeakRetained();
    func_0x00010c054580(puVar16,param_2,lVar2,lVar3,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,lVar15);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 105e935f0; end: 105e93663; -[SCComposerTopicServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e935f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738b28);
  _objc_destroyWeak(param_1 + _DAT_112738b24);
  _objc_destroyWeak(param_1 + _DAT_112738b20);
  _objc_destroyWeak(param_1 + _DAT_112738b1c);
  _objc_destroyWeak(param_1 + _DAT_112738b18);
  _objc_destroyWeak(param_1 + _DAT_112738b14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112738b10);
  return;
}



/* Entry: 105e93664; end: 105e93687; -[SCCreatorsProfileImageEntryPoint begin] */

void FUN_105e93664(undefined8 param_1)

{
  func_0x00010c0a5d60();
                    /* WARNING: Could not recover jumptable at 0x00010c10c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentImageView_112620b60);
  return;
}



/* Entry: 105e93688; end: 105e936c3; -[SCCreatorsProfileImageEntryPoint end] */

void FUN_105e93688(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed9a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e936c4; end: 105e9397f; -[SCCreatorsProfileImageEntryPoint presentImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e936c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar15 = (long)_DAT_112738b2c;
  lVar1 = *(long *)(param_5 + lVar15);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126c5628;
    _objc_alloc();
    lVar14 = (long)_DAT_112738b30;
    lVar1 = param_5 + lVar14;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5 + lVar14;
    _objc_loadWeakRetained();
    func_0x00010c063e00();
    lVar5 = param_5 + lVar14;
    uVar13 = param_1;
    uVar16 = param_2;
    uVar17 = param_3;
    uVar18 = param_4;
    _objc_loadWeakRetained();
    func_0x00010c269f20();
    lVar6 = param_5 + _DAT_112738b34;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bfe7760();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5 + _DAT_112738b38;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010bfe7720();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_5 + lVar14;
    _objc_loadWeakRetained(lVar11);
    func_0x00010bf9f800();
    func_0x00010c01cfa0(param_1,param_2,param_3,param_4,uVar13,uVar16,uVar17,uVar18);
    uVar13 = *(undefined8 *)(param_5 + lVar15);
    *(undefined **)(param_5 + lVar15) = puVar2;
    _objc_release(uVar13);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar15));
    lVar14 = param_5 + lVar14;
    _objc_loadWeakRetained(lVar14);
    lVar1 = lVar14;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ca20();
    _objc_release(lVar1);
    _objc_release(lVar14);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_5 + lVar15));
    puVar12 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_5 + lVar15));
    _objc_release(puVar12);
    _objc_release(puVar2);
    lVar1 = *(long *)(param_5 + lVar15);
  }
  func_0x00010c1cbe20(lVar1);
  func_0x00010c08cdc0(*(undefined8 *)(param_5 + lVar15));
  func_0x00010bf03380(*(undefined8 *)(param_5 + lVar15));
                    /* WARNING: Could not recover jumptable at 0x00010bf02bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + lVar15),PTR_s_animateActionSheetVisibility__11259e4a0,1);
  return;
}



/* Entry: 105e93980; end: 105e93983;  */

void FUN_105e93980(void)

{
  return;
}



/* Entry: 105e93984; end: 105e93b27; -[SCCreatorsProfileImageEntryPoint didPanProfileView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93984(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c252440();
  if (lVar2 == 1) {
    lVar3 = (long)_DAT_112738b3c;
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5,param_4,lVar2);
    *(double *)(param_3 + lVar3) = param_1;
    ((double *)(param_3 + lVar3))[1] = param_2;
    _objc_release(lVar2);
    func_0x00010bf02be0(*(undefined8 *)(param_3 + _DAT_112738b2c),param_4,0);
  }
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,lVar2);
  _objc_release(lVar2);
  lVar3 = (long)_DAT_112738b2c;
  pdVar1 = (double *)(param_3 + _DAT_112738b3c);
  func_0x00010c2772c0(*pdVar1,pdVar1[1],param_1,param_2,*(undefined8 *)(param_3 + lVar3));
  lVar2 = param_5;
  func_0x00010c252440();
  if ((lVar2 == 3) || (lVar2 = param_5, func_0x00010c252440(), lVar2 == 4)) {
    if (SQRT((pdVar1[1] - param_2) * (pdVar1[1] - param_2) +
             (*pdVar1 - param_1) * (*pdVar1 - param_1)) <= 100.0) {
      func_0x00010bf03380(*(undefined8 *)(param_3 + lVar3),param_4,1,
                          &PTR___NSConcreteGlobalBlock_1108f0d90);
      func_0x00010bf02be0(*(undefined8 *)(param_3 + lVar3),param_4,1);
    }
    else {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105e93b28;
      puStack_60 = &UNK_110841f20;
      lStack_58 = param_3;
      func_0x00010bf03380(*(undefined8 *)(param_3 + lVar3),param_4,0,&puStack_78);
    }
  }
  _objc_release(param_5);
  return;
}



/* Entry: 105e93b28; end: 105e93b33;  */

void FUN_105e93b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_removeView_112629668)
  ;
  return;
}



/* Entry: 105e93b34; end: 105e93ba7; -[SCCreatorsProfileImageEntryPoint removeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93b34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112738b2c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112738b30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e93ba8; end: 105e93c1f; -[SCCreatorsProfileImageEntryPoint didTapProfileView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93ba8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = (long)_DAT_112738b2c;
  func_0x00010bf02be0(*(undefined8 *)(param_1 + lVar1),param_2,0);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e93c20;
  puStack_30 = &UNK_110841f20;
  lStack_28 = param_1;
  func_0x00010bf03380(*(undefined8 *)(param_1 + lVar1),param_2,0,&puStack_48);
  return;
}



/* Entry: 105e93c20; end: 105e93c27;  */

void FUN_105e93c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_removeView_112629668)
  ;
  return;
}



/* Entry: 105e93c28; end: 105e93cdf; -[SCCreatorsProfileImageEntryPoint logExpandedImageViewEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93c28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c5630;
  _objc_alloc_init(PTR_PTR_1126c5630);
  lVar2 = param_1 + _DAT_112738b30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2478c0();
  func_0x00010c206c40(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112738b40;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e93ce0; end: 105e93d77; -[SCCreatorsProfileImageEntryPoint _logActionEventWithAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93ce0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c5638;
  _objc_alloc_init(PTR_PTR_1126c5638);
  func_0x00010c161620();
  param_1 = param_1 + _DAT_112738b40;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e93d78; end: 105e93df3; -[SCCreatorsProfileImageEntryPoint didTapReportProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010be4fc60(param_1,param_2,0);
  param_1 = param_1 + _DAT_112738b30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7d320();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e93df4; end: 105e93e6f; -[SCCreatorsProfileImageEntryPoint didTapShareProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010be4fc60(param_1,param_2,1);
  param_1 = param_1 + _DAT_112738b30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7d480();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e93e70; end: 105e93f23; -[SCCreatorsProfileImageEntryPoint shouldHideActionSheet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105e93e70(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112738b30;
  uVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c230b60();
    _objc_release(lVar4);
    _objc_release(param_1);
  }
  return lVar5;
}



/* Entry: 105e93f24; end: 105e93f43; -[SCCreatorsProfileImageEntryPoint bitmojiFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93f24(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112738b38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e93f44; end: 105e93f57; -[SCCreatorsProfileImageEntryPoint setBitmojiFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93f44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112738b38,param_3);
  return;
}



/* Entry: 105e93f58; end: 105e93f77; -[SCCreatorsProfileImageEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93f58(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112738b40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e93f78; end: 105e93f8b; -[SCCreatorsProfileImageEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93f78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112738b40,param_3);
  return;
}



/* Entry: 105e93f8c; end: 105e93feb; -[SCCreatorsProfileImageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e93f8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738b40);
  _objc_destroyWeak(param_1 + _DAT_112738b38);
  _objc_destroyWeak(param_1 + _DAT_112738b34);
  _objc_destroyWeak(param_1 + _DAT_112738b30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738b2c,0);
  return;
}



/* Entry: 105e93fec; end: 105e941b7; -[SCImpalaProfileImageView initWithImageURL:initialFrame:targetFrame:delegate:imageFetchingService:bitmojiFetcher:fadeOutOnDisappearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e93fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  puVar3 = &uStack_b0;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_a8 = PTR_PTR_1126ed9a8;
  uStack_b0 = param_9;
  _objc_msgSendSuper2(&uStack_b0,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112738b44;
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_11;
    _objc_release(uVar4);
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_112738b48);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_112738b4c);
    *puVar1 = param_5;
    puVar1[1] = param_6;
    puVar1[2] = param_7;
    puVar1[3] = param_8;
    _objc_storeWeak((undefined1 *)((long)puVar3 + (long)_DAT_112738b50),param_12);
    lVar5 = (long)_DAT_112738b54;
    _objc_retain(param_13);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_13;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112738b58;
    _objc_retain(param_14);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_14;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + (long)_DAT_112738b5c) = param_15;
    pdVar2 = (double *)((long)puVar3 + (long)_DAT_112738b60);
    dVar6 = (double)puVar1[2];
    auVar7 = NEON_fmov(0x3fe0000000000000,8);
    pdVar2[1] = ((double)puVar1[3] + -200.0) * auVar7._8_8_;
    *pdVar2 = (dVar6 + -200.0) * auVar7._0_8_;
    pdVar2[3] = 200.0;
    pdVar2[2] = 200.0;
    func_0x00010c228440(puVar3);
    func_0x00010c228be0(puVar3);
    func_0x00010c2285a0(puVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  return (undefined1 *)puVar3;
}



/* Entry: 105e941b8; end: 105e94243; -[SCImpalaProfileImageView createLabelWithText:textColor:] */

void FUN_105e941b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c219b60();
  func_0x00010c212f20(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c21ad00(puVar1,param_2,0x14);
  func_0x00010c213180(puVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e94244; end: 105e942df; -[SCImpalaProfileImageView createImageViewWithIconType:color:] */

void FUN_105e94244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4034000000000000,0x4034000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c216160(puVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e942e0; end: 105e9463f; -[SCImpalaProfileImageView buttonContainerWithLabel:imageView:] */

void FUN_105e942e0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010befbb60(param_1,param_2,puVar1);
  func_0x00010befbb60(puVar1,param_2,param_3);
  func_0x00010befbb60(puVar1,param_2,param_4);
  puVar2 = param_3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493c0(0x4034000000000000,puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  puStack_98 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493c0(0x4020000000000000,puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  puStack_90 = puVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493c0(0xc020000000000000,puVar8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_3;
  puStack_88 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar12 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf49520(0xc034000000000000,puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  puStack_80 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493c0(0xc034000000000000,uVar14,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_4;
  uStack_78 = uVar16;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar18 = puVar1;
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef79e0(param_1,param_2,puVar20);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_105e96268();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf56c20(puVar2,param_2,puVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf56820(puVar2,param_2,0x28,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf25500(puVar2,param_2,puVar4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e94640; end: 105e9474b; -[SCImpalaProfileImageView createShareProfileContainer] */

void FUN_105e94640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_105e96268();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf56c20(param_1,param_2,puVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = param_1;
  func_0x00010bf56820(param_1,param_2,0x28,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25500(param_1,param_2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e9474c; end: 105e94857; -[SCImpalaProfileImageView createReportProfileContainer] */

void FUN_105e9474c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x8f);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e96280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf56c20(param_1,param_2,puVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = param_1;
  func_0x00010bf56820(param_1,param_2,0x110,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25500(param_1,param_2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e94858; end: 105e9505b; -[SCImpalaProfileImageView setupButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e94858(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  ulong uVar35;
  undefined8 uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined *puVar42;
  ulong uVar43;
  ulong uVar44;
  undefined8 uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  undefined *puVar49;
  long lVar50;
  undefined8 uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  double dVar55;
  
  lVar50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar53 = (long)_DAT_112738b50;
  uVar2 = param_1 + lVar53;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
LAB_105e948e0:
    uVar2 = param_1;
    func_0x00010bf58dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf58500();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar53 = (long)_DAT_112738b64;
    uVar51 = *(undefined8 *)(param_1 + lVar53);
    *(undefined **)(param_1 + lVar53) = puVar5;
    _objc_release(uVar51);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar53));
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar53));
    _objc_release(puVar5);
    uVar51 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010c08c0e0(uVar51);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402c000000000000);
    _objc_release(uVar51);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar53));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar53));
    func_0x00010befbb60(param_1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar53));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar53));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar53));
    uVar6 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar51 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493c0(0x4064400000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf49420(0x406e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar55 = 50.0;
    uVar23 = uVar22;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar29;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar34 = puVar32;
    func_0x00010bf49420(1.0 / dVar55);
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar35;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar38;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar42 = puVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar43 = uVar41;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = *(undefined8 *)(param_1 + lVar53);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = uVar44;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar47 = uVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar48 = uVar47;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef79e0(param_1);
    _objc_release(puVar49);
    _objc_release(uVar48);
    _objc_release(uVar47);
    _objc_release(uVar46);
    _objc_release(uVar45);
    _objc_release(uVar44);
    _objc_release(uVar43);
    _objc_release(puVar42);
    _objc_release(uVar41);
    _objc_release(uVar40);
    _objc_release(uVar39);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(uVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(uVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(uVar24);
    _objc_release(puVar5);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar51);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release();
  }
  else {
    uVar2 = param_1 + lVar53;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c230b60();
    _objc_release();
    if ((uVar3 & 1) == 0) goto LAB_105e948e0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar50) {
    return;
  }
  ___stack_chk_fail();
  lVar52 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar54 = (long)_DAT_112738b68;
  uVar51 = *(undefined8 *)(uVar2 + lVar54);
  *(undefined **)(uVar2 + lVar54) = puVar4;
  _objc_release(uVar51);
  func_0x00010c219b60(*(undefined8 *)(uVar2 + lVar54));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf414e0(0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(uVar2 + lVar54));
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1677c0(0,*(undefined8 *)(uVar2 + lVar54));
  func_0x00010befbb60(uVar2);
  lVar53 = *(long *)(uVar2 + lVar54);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar53;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(uVar2 + lVar54);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(uVar2 + lVar54);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c274200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(uVar2 + lVar54);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef79e0(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar51);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar50);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar52) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar50 = (long)_DAT_112738b6c;
  uVar51 = *(undefined8 *)(lVar53 + lVar50);
  *(undefined **)(lVar53 + lVar50) = puVar4;
  _objc_release(uVar51);
  func_0x00010c219b60(*(undefined8 *)(lVar53 + lVar50));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar53 + lVar50));
  _objc_release(puVar4);
  puVar1 = (undefined8 *)(lVar53 + _DAT_112738b48);
  func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined8 *)(lVar53 + lVar50));
  dVar55 = (double)puVar1[2];
  uVar51 = *(undefined8 *)(lVar53 + lVar50);
  func_0x00010c08c0e0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar55 * 0.5);
  _objc_release(uVar51);
  func_0x00010c17d4c0(*(undefined8 *)(lVar53 + lVar50));
  func_0x00010befbb60(lVar53);
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar50 = (long)_DAT_112738b70;
  uVar51 = *(undefined8 *)(lVar53 + lVar50);
  *(undefined **)(lVar53 + lVar50) = puVar4;
  _objc_release(uVar51);
  func_0x00010c219b60(*(undefined8 *)(lVar53 + lVar50));
  func_0x00010c182220(*(undefined8 *)(lVar53 + lVar50));
  func_0x00010c19f0e0(0,0,puVar1[2],puVar1[3],*(undefined8 *)(lVar53 + lVar50));
  func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined8 *)(lVar53 + lVar50));
  dVar55 = (double)puVar1[2];
  uVar51 = *(undefined8 *)(lVar53 + lVar50);
  func_0x00010c08c0e0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar55 * 0.5);
  _objc_release(uVar51);
  func_0x00010c17d4c0(*(undefined8 *)(lVar53 + lVar50));
  func_0x00010befbb60(lVar53);
  lVar52 = *(long *)(lVar53 + _DAT_112738b44);
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar52;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar50 != 0) {
    lVar54 = lVar52;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar50);
    if (lVar54 != 0) {
      func_0x00010c09af60(lVar53);
      goto LAB_105e95508;
    }
  }
  func_0x00010c09b700(lVar53);
LAB_105e95508:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar52);
  return;
}



/* Entry: 105e9505c; end: 105e9530f; -[SCImpalaProfileImageView setupAlphaView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9505c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar14 = (long)_DAT_112738b68;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar14),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  lVar4 = *(long *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010bf493a0(lVar4,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  lStack_88 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef79e0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(lVar14);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar12);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar15 = (long)_DAT_112738b6c;
  uVar13 = *(undefined8 *)(lVar4 + lVar15);
  *(undefined **)(lVar4 + lVar15) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(lVar4 + lVar15),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar4 + lVar15),param_2,puVar2);
  _objc_release(puVar2);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112738b48);
  func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined8 *)(lVar4 + lVar15));
  dVar16 = (double)puVar1[2];
  uVar13 = *(undefined8 *)(lVar4 + lVar15);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar16 * 0.5);
  _objc_release(uVar13);
  func_0x00010c17d4c0(*(undefined8 *)(lVar4 + lVar15),param_2,1);
  func_0x00010befbb60(lVar4,param_2,*(undefined8 *)(lVar4 + lVar15));
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar15 = (long)_DAT_112738b70;
  uVar13 = *(undefined8 *)(lVar4 + lVar15);
  *(undefined **)(lVar4 + lVar15) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(lVar4 + lVar15),param_2,1);
  func_0x00010c182220(*(undefined8 *)(lVar4 + lVar15),param_2,2);
  func_0x00010c19f0e0(0,0,puVar1[2],puVar1[3],*(undefined8 *)(lVar4 + lVar15));
  func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined8 *)(lVar4 + lVar15));
  dVar16 = (double)puVar1[2];
  uVar13 = *(undefined8 *)(lVar4 + lVar15);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar16 * 0.5);
  _objc_release(uVar13);
  func_0x00010c17d4c0(*(undefined8 *)(lVar4 + lVar15),param_2,1);
  func_0x00010befbb60(lVar4,param_2,*(undefined8 *)(lVar4 + lVar15));
  lVar12 = *(long *)(lVar4 + _DAT_112738b44);
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 != 0) {
    lVar6 = lVar12;
    func_0x00010c0e00e0(lVar12,param_2,&PTR____CFConstantStringClassReference_110db11d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar15);
    if (lVar6 != 0) {
      func_0x00010c09af60(lVar4,param_2,lVar12);
      goto LAB_105e95508;
    }
  }
  func_0x00010c09b700(lVar4);
LAB_105e95508:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 105e95310; end: 105e95523; -[SCImpalaProfileImageView setupImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e95310(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar6 = (long)_DAT_112738b6c;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
  _objc_release(puVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112738b48);
  func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined8 *)(param_1 + lVar6));
  dVar7 = (double)puVar1[2];
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar7 * 0.5);
  _objc_release(uVar5);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar6 = (long)_DAT_112738b70;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar6),param_2,2);
  func_0x00010c19f0e0(0,0,puVar1[2],puVar1[3],*(undefined8 *)(param_1 + lVar6));
  func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined8 *)(param_1 + lVar6));
  dVar7 = (double)puVar1[2];
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar7 * 0.5);
  _objc_release(uVar5);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  lVar3 = *(long *)(param_1 + _DAT_112738b44);
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar4 = lVar3;
    func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110db11d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar4 != 0) {
      func_0x00010c09af60(param_1,param_2,lVar3);
      goto LAB_105e95508;
    }
  }
  func_0x00010c09b700(param_1);
LAB_105e95508:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105e95524; end: 105e95623; -[SCImpalaProfileImageView loadImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e95524(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(undefined1 *)(param_1 + _DAT_112738b74) = 0;
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1;
  func_0x00010be36fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112738b54);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa7900(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}


