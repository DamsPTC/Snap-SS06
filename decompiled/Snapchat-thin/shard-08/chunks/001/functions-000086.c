/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d38ce0; end: 105d38ce7; -[SCPreviewFeatureCTLensAiModeImpl isAiModeLensApplied] */

undefined1 FUN_105d38ce0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb0);
}



/* Entry: 105d38ce8; end: 105d38cef; -[SCPreviewFeatureCTLensAiModeImpl isAiModeEditing] */

undefined1 FUN_105d38ce8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb1);
}



/* Entry: 105d38cf0; end: 105d38d27; -[SCPreviewFeatureCTLensAiModeImpl isFeatureEnabled] */

void FUN_105d38cf0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06bc20();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldEnableFeature_11258a760);
    return;
  }
  return;
}



/* Entry: 105d38d28; end: 105d38d4f; -[SCPreviewFeatureCTLensAiModeImpl aiModeSessionId] */

void FUN_105d38d28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d38d50; end: 105d38e4f; -[SCPreviewFeatureCTLensAiModeImpl contentReportParams] */

void FUN_105d38d50(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x168);
  func_0x00010c118460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  ppuVar6 = ppuVar1;
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_1 + 0x168);
    func_0x00010c096560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = ppuVar2;
    }
    _objc_retain(ppuVar6);
    _objc_release(ppuVar1);
    _objc_release(ppuVar2);
  }
  puVar3 = PTR_PTR_1126bd640;
  _objc_alloc(PTR_PTR_1126bd640);
  uVar4 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010bf4dc80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c086560(uVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar2 = ppuVar6;
  }
  func_0x00010c003f20(puVar3,param_2,uVar4,uVar5,0,ppuVar2,4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d38e50; end: 105d38eaf; -[SCPreviewFeatureCTLensAiModeImpl aiModeLensId] */

void FUN_105d38e50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0xb8);
  func_0x00010c08fa60();
  uVar3 = uVar1;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
  }
  _objc_retain(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d38eb0; end: 105d38f6b; -[SCPreviewFeatureCTLensAiModeImpl aiModeLens] */

void FUN_105d38eb0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010befed80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0820;
    func_0x00010c08fb40(PTR_PTR_1126b0820);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b2880();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2b1600();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d38f6c; end: 105d38f73; -[SCPreviewFeatureCTLensAiModeImpl aiModeShareableLensId] */

void FUN_105d38f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1d8),PTR_s_shareableLensId_112668778);
  return;
}



/* Entry: 105d38f74; end: 105d39117; -[SCPreviewFeatureCTLensAiModeImpl _shouldEnableFeature] */

long FUN_105d38f74(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar6;
  func_0x00010c075080();
  if ((uVar2 & 1) == 0) goto LAB_105d38fbc;
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c070a20();
  if ((int)lVar4 != 0) {
    _objc_release(lVar3);
    goto LAB_105d38fbc;
  }
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c134300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  if (lVar5 != 0) {
    return 0;
  }
  uVar6 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar6;
  func_0x00010c07e840();
  _objc_release(uVar6);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c07e620();
  if ((int)lVar4 == 0) {
    _objc_release(lVar3);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8);
    func_0x00010c06bc80();
    _objc_release(lVar3);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c07e920();
  if ((int)lVar4 == 0) {
LAB_105d390a8:
    _objc_release(lVar3);
  }
  else {
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c07e880();
    if ((int)lVar5 != 0) {
      _objc_release(lVar4);
      goto LAB_105d390a8;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c06bc60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (iVar1 != 0) goto LAB_105d39100;
  }
  uVar6 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar6;
  func_0x00010c07e880();
  if ((int)uVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c06bc40();
    _objc_release(uVar6);
    if (iVar1 == 0) {
      return 0;
    }
LAB_105d39100:
                    /* WARNING: Could not recover jumptable at 0x00010be446b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isSupportedAspectRatio_11256eb48);
    return param_1;
  }
LAB_105d38fbc:
  _objc_release(uVar6);
  return 0;
}



/* Entry: 105d39118; end: 105d3916f; -[SCPreviewFeatureCTLensAiModeImpl _isSupportedAspectRatio] */

bool FUN_105d39118(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_2 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0c4080();
  dVar2 = param_1;
  func_0x00010befeca0(*(undefined8 *)(param_2 + 8));
  _objc_release(lVar1);
  return param_1 <= (double)SUB84(dVar2,0);
}



/* Entry: 105d39170; end: 105d39223; -[SCPreviewFeatureCTLensAiModeImpl toolbarItemConfiguration] */

void FUN_105d39170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bdf66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8220(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c4010;
  _objc_alloc(PTR_PTR_1126c4010);
  puVar3 = puVar2;
  func_0x000108edf320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020380(puVar2,param_2,0x17,puVar1,0,&PTR____CFConstantStringClassReference_110e29158,
                      &PTR____CFConstantStringClassReference_110e29158,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d39224; end: 105d392cb; -[SCPreviewFeatureCTLensAiModeImpl handleCTLensButtonTap] */

void FUN_105d39224(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105d392cc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105d392cc; end: 105d392ff;  */

void FUN_105d392cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be26a60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d39300; end: 105d39347; -[SCPreviewFeatureCTLensAiModeImpl _handleCTLensButtonTap] */

void FUN_105d39300(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06b2e0();
  if ((iVar1 != 0) && (lVar2 = param_1, func_0x00010be45060(), (int)lVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be7c370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentLensPlusSubscribePage_11257ca78);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddd6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkDisclaimerAndRunAIMode_112554f48);
  return;
}



/* Entry: 105d39348; end: 105d3937f; -[SCPreviewFeatureCTLensAiModeImpl _checkDisclaimerAndRunAIMode] */

void FUN_105d39348(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be3fac0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be25890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAiMode_112566fc0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb8b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showDisclaimer_11258bc88);
  return;
}



/* Entry: 105d39380; end: 105d393bf; -[SCPreviewFeatureCTLensAiModeImpl _isDisclaimerAccepted] */

undefined8 FUN_105d39380(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb920();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105d393c0; end: 105d393d3; -[SCPreviewFeatureCTLensAiModeImpl _handleAiMode] */

void FUN_105d393c0(long param_1)

{
  if (*(char *)(param_1 + 0xb1) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelEditing_112554390);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enterEditingMode_1125603a8);
  return;
}



/* Entry: 105d393d4; end: 105d39463; -[SCPreviewFeatureCTLensAiModeImpl state] */

void FUN_105d393d4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06b320();
  if (iVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010befee20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if ((lVar3 == 0) || (func_0x00010c06bcc0(), (int)param_1 == 0)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126c4340;
      _objc_alloc(PTR_PTR_1126c4340);
      func_0x00010c0241a0();
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d39464; end: 105d39533; -[SCPreviewFeatureCTLensAiModeImpl handleCTLensEvent:] */

void FUN_105d39464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105d39534;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105d39534; end: 105d3956f;  */

void FUN_105d39534(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be26a80(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d39570; end: 105d395e7; -[SCPreviewFeatureCTLensAiModeImpl ctLensBottomComponent:didTapButtonWithType:] */

void FUN_105d39570(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010bdf6400(param_1,param_2,param_3);
  }
  else if (param_4 == 2) {
    func_0x00010bdf6420(param_1,param_2,param_3);
  }
  else if (param_4 == 1) {
    func_0x00010bdf63e0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d395e8; end: 105d395eb; -[SCPreviewFeatureCTLensAiModeImpl _ctLensBottomComponentDidTapCancel:] */

void FUN_105d395e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelEditing_112554390);
  return;
}



/* Entry: 105d395ec; end: 105d395ef; -[SCPreviewFeatureCTLensAiModeImpl _ctLensBottomComponentDidTapDone:] */

void FUN_105d395ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde6150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__confirmEditingWithBurnInLensEff_1125571f0);
  return;
}



/* Entry: 105d395f0; end: 105d395f3; -[SCPreviewFeatureCTLensAiModeImpl _ctLensBottomComponentDidTapGenerate:] */

void FUN_105d395f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e46d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onGenerationAttempt_112616bc8);
  return;
}



/* Entry: 105d395f4; end: 105d396b3; -[SCPreviewFeatureCTLensAiModeImpl onGenerationAttempt] */

void FUN_105d395f4(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bfe2500();
  if (iVar1 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xe8));
  }
  uVar2 = param_1;
  func_0x00010be45080();
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec00b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startGeneration_11258d9d0);
    return;
  }
  func_0x00010c236960(param_1);
  func_0x00010be7c360(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bfe2500();
  if (iVar1 != 0) {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bfe5d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be8b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAIModeChromeHiddenIconVie_112580650)
    ;
    return;
  }
  return;
}



/* Entry: 105d396b4; end: 105d396fb; -[SCPreviewFeatureCTLensAiModeImpl hideCloseButton] */

void FUN_105d396b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d396fc; end: 105d39743; -[SCPreviewFeatureCTLensAiModeImpl showCloseButton] */

void FUN_105d396fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d39744; end: 105d39833; -[SCPreviewFeatureCTLensAiModeImpl _startGeneration] */

void FUN_105d39744(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1;
  func_0x00010befed80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010bf3cdc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c4308;
    _objc_alloc(PTR_PTR_1126c4308);
    func_0x00010befed80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c4310;
    func_0x00010bfbee00(PTR_PTR_1126c4310);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024460(puVar5,param_2,param_1,puVar6);
    func_0x00010bf8de60(uVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d39834; end: 105d3983b; -[SCPreviewFeatureCTLensAiModeImpl _modernAIModeEnabled] */

void FUN_105d39834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06b330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isAIModeLensShareable_1125f86d8);
  return;
}



/* Entry: 105d3983c; end: 105d39f1b; -[SCPreviewFeatureCTLensAiModeImpl _enterEditingMode] */

void FUN_105d3983c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  if ((*(byte *)(param_1 + 0xb1) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xb1) = 1;
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x188);
  *(long *)(param_1 + 0x188) = lVar1;
  _objc_release(uVar12);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lVar2;
  _objc_release(uVar12);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010bfe6060();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c186260();
  _objc_release(lVar1);
  _objc_release(uVar12);
  _objc_release(uVar3);
  func_0x00010bed64c0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = uVar12;
  _objc_release(uVar13);
  _objc_release(uVar3);
  func_0x00010be973a0(param_1);
  if (*(long *)(param_1 + 0xe0) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = uVar13;
    _objc_release(uVar14);
    _objc_release(uVar3);
    _objc_release(uVar12);
    _objc_release(uVar4);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010befed80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe3c80(uVar12);
  _objc_release(lVar1);
  _objc_release(uVar12);
  func_0x00010bea53e0(param_1);
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR_PTR_1126c4348;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010befed80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010becf960(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bf4ff80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24d9c0(*(undefined8 *)(param_1 + 0x1d8));
  func_0x00010c077ae0();
  func_0x00010c0fc000();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105d39f1c;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c00ed20(puVar5);
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x160));
  func_0x00010bea3be0(0,param_1);
  func_0x00010bfe1c60(param_1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar7 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c084c40();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar10 == 0x17) goto LAB_105d39c78;
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(lVar2);
    _objc_release(puVar11);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_105d39c78:
  func_0x00010bed8d00(param_1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar6 == 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(lVar2);
    _objc_release(puVar11);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbac0();
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bee3fa0(param_1);
    func_0x00010bed43a0(param_1);
    func_0x00010c18b7a0(*(undefined8 *)(param_1 + 0xf8));
    func_0x00010c1eb3e0(*(undefined8 *)(param_1 + 0xf8));
    func_0x00010bebb740(param_1);
    func_0x00010c293a40(*(undefined8 *)(param_1 + 0x150));
    uVar12 = *(undefined8 *)(param_1 + 0x148);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0e00();
    _objc_release(uVar12);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf429e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c243340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010befed80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c08fa60();
    if ((lVar2 != 0) && (lVar2 = lVar1, func_0x00010c08fa60(), lVar2 != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x1c8);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174ec0();
      _objc_release(uVar12);
    }
    _objc_release(lVar1);
    _objc_release(lVar6);
  }
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 105d39f1c; end: 105d39f83;  */

void FUN_105d39f1c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdda7c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d39f84; end: 105d3a133; -[SCPreviewFeatureCTLensAiModeImpl _confirmEditingWithBurnInLensEffect] */

void FUN_105d39f84(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = param_1;
  func_0x00010befee20();
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  func_0x00010bed4720(param_1);
  func_0x00010be81220(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06b320();
  if ((iVar1 != 0) && (lVar3 = lVar2, func_0x00010c08fa60(), lVar3 != 0)) {
    lVar4 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c186500();
    _objc_release(lVar3);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0972c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c240000(uVar10);
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c22df00();
    if (iVar1 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x80);
    }
    func_0x00010bf47300(uVar5,param_2,lVar3,uVar7,uVar9,lVar2,uVar10,0,uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105d3a134; end: 105d3a183; -[SCPreviewFeatureCTLensAiModeImpl _trendingPromptsViewContainerProvider] */

void FUN_105d3a134(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1c0);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined **)(param_1 + 0x1c0) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x1c0);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d3a184; end: 105d3a1e3; -[SCPreviewFeatureCTLensAiModeImpl _updateCTLensApplicationState] */

void FUN_105d3a184(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4318;
  _objc_alloc(PTR_PTR_1126c4318);
  func_0x00010bff3d60();
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5cea0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d3a1e4; end: 105d3a30f; -[SCPreviewFeatureCTLensAiModeImpl _processFinalImage] */

void FUN_105d3a1e4(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar2 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7a80();
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d3a310;
  puStack_48 = &UNK_110856cc0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfbf520(0x7ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d3a310; end: 105d3a3f3;  */

void FUN_105d3a310(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d3a3f4;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_3);
  uStack_48 = param_3;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105d3a3f4; end: 105d3a443;  */

void FUN_105d3a3f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010bedd3e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010bddf3c0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d3a444; end: 105d3a617; -[SCPreviewFeatureCTLensAiModeImpl _updatePlaybackImageWithImage:] */

void FUN_105d3a444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_105d3a618;
  uStack_68 = 0x105d3a628;
  uStack_60 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = puStack_80[5];
  puStack_80[5] = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf1a3e0(puStack_80[5]);
  func_0x00010bedd3a0(param_1);
  _objc_destroyWeak(auStack_90);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105d3a618; end: 105d3a62f;  */

void FUN_105d3a618(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d3a630; end: 105d3a6c3;  */

void FUN_105d3a630(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bd660(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3a6c4; end: 105d3a70b;  */

void FUN_105d3a6c4(long param_1)

{
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  if (*(char *)(*(long *)(param_1 + 0x20) + 0xb2) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be258b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__handleAiModeCompletion_112566fc8);
    return;
  }
  return;
}



/* Entry: 105d3a70c; end: 105d3a7c7; -[SCPreviewFeatureCTLensAiModeImpl _updatePlaybackImage:] */

void FUN_105d3a70c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0xd0));
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0xd0));
  if (param_1 <= param_2) {
    lVar2 = *(long *)(param_3 + 0x50);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  else {
    lVar2 = param_3;
    func_0x00010bdf6240(param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105d3a7c8; end: 105d3ab4f; -[SCPreviewFeatureCTLensAiModeImpl _handleAiModeCompletion] */

void FUN_105d3a7c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x00010bea53e0(param_1,param_2,0);
  func_0x00010be0c060(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128740();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c08f640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar1);
  _objc_release(uVar2);
  puVar3 = *(undefined **)(param_1 + 0x138);
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar6;
  func_0x00010c2736c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  if (puVar5 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    puVar3 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010c2736a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f029f8);
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c0b3920(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb4a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c0b3920(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010befed80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2880(uVar2,param_2,lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  uVar9 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c0b3920(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2c80(uVar2,param_2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar9);
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c0b3920(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9740(uVar2,param_2,lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105d3ab50; end: 105d3ab93; -[SCPreviewFeatureCTLensAiModeImpl _cancelEditing] */

void FUN_105d3ab50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitEditingModeFromUserAction_1125609c0);
  return;
}



/* Entry: 105d3ab94; end: 105d3ada3; -[SCPreviewFeatureCTLensAiModeImpl _deleteEditing] */

void FUN_105d3ab94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  *(undefined1 *)(param_1 + 0xb0) = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c0b3920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c094540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c0b3920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c096b60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2c80(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c0b3920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c2736c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb4a0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4318;
  _objc_alloc(PTR_PTR_1126c4318);
  func_0x00010bff3d60();
  func_0x00010bf5cea0(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar4);
  func_0x00010be973a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitEditingModeFromUserAction_1125609c0);
  return;
}



/* Entry: 105d3ada4; end: 105d3ae5b; -[SCPreviewFeatureCTLensAiModeImpl _exitEditingModeFromUserAction] */

void FUN_105d3ada4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x1d8);
  func_0x00010bf3dcc0();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xb1) = 0;
    lVar2 = *(long *)(param_1 + 0x160);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x160));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bea53e0(param_1);
    func_0x00010c292040(*(undefined8 *)(param_1 + 0x150));
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c240640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9ba20();
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitEditingMode_1125609b8);
  return;
}



/* Entry: 105d3ae5c; end: 105d3b02f; -[SCPreviewFeatureCTLensAiModeImpl _exitEditingMode] */

void FUN_105d3ae5c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  *(undefined1 *)(param_1 + 0xb1) = 0;
  lVar2 = *(long *)(param_1 + 0x160);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x160));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bea53e0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c620();
  _objc_release(uVar3);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c186260();
  _objc_release(lVar2);
  func_0x00010bed64c0(param_1);
  func_0x00010bea3be0(0x3ff0000000000000,param_1);
  func_0x00010c236960(param_1);
  func_0x00010bed8d00(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bfe2500();
  if (iVar1 != 0) {
    func_0x00010bea6860(param_1);
    func_0x00010be8b2c0(param_1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xe8));
  }
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c084c40();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (lVar6 == 0x17) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(lVar4);
    _objc_release(puVar7);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010bed43a0(param_1);
    func_0x00010c292040(*(undefined8 *)(param_1 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010be93cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetStatePublisher_1125828d8);
    return;
  }
  return;
}



/* Entry: 105d3b030; end: 105d3b12b; -[SCPreviewFeatureCTLensAiModeImpl _revertToOriginalImage] */

void FUN_105d3b030(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfbbbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_40;
  _objc_copyWeak(puVar2,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d3b12c; end: 105d3b19b;  */

void FUN_105d3b12c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3b19c; end: 105d3b44b; -[SCPreviewFeatureCTLensAiModeImpl _setLensActive:] */

void FUN_105d3b19c(undefined *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((byte)param_1[0xb2] == param_3) {
    return;
  }
  param_1[0xb2] = (char)param_3;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  if (param_1[0xb2] == '\x01') {
    puVar1 = param_1;
    func_0x00010befed80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      func_0x00010bddf3c0(param_1);
      goto LAB_105d3b3d8;
    }
    _objc_initWeak(auStack_50,param_1);
    puVar3 = PTR_PTR_1126c3c78;
    _objc_alloc(PTR_PTR_1126c3c78);
    func_0x00010c0258c0();
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    _objc_copyWeak(auStack_60,auStack_50);
    _objc_retain(puVar1);
    _objc_copyWeak(auStack_58,auStack_48);
    func_0x00010bf08a20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = uVar5;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_60);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
  }
  else {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 200));
    uVar5 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    _objc_release(uVar5);
    if (*(long *)(param_1 + 0xb8) == 0) goto LAB_105d3b3e4;
    uVar5 = *(undefined8 *)(param_1 + 0x1c8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174ec0();
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c183960();
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b1c0();
    _objc_release(uVar5);
    func_0x00010c27f1c0(*(undefined8 *)(param_1 + 0x70));
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    _objc_release(uVar5);
    puVar3 = *(undefined **)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
LAB_105d3b3d8:
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_105d3b3e4:
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d3b44c; end: 105d3b52f;  */

void FUN_105d3b44c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010bddf3c0(lVar1);
    }
    else {
      func_0x00010be2b360(lVar1);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010c183960();
      _objc_release(param_1);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3b530; end: 105d3b63b; -[SCPreviewFeatureCTLensAiModeImpl _handleLensAppliedWithId:withLensMetadata:] */

void FUN_105d3b530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_release(uVar1);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_4;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d3b63c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d3b63c; end: 105d3b66f;  */

void FUN_105d3b63c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bed8d00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d3b670; end: 105d3b72b; -[SCPreviewFeatureCTLensAiModeImpl _cleanUpWithLensLoadingError:] */

void FUN_105d3b670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105d3b72c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105d3b72c; end: 105d3b76b;  */

void FUN_105d3b72c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0c060(param_1);
    func_0x00010bea53e0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d3b76c; end: 105d3b897; -[SCPreviewFeatureCTLensAiModeImpl _updateGenerationOnTapOnScreenIsEnabled] */

void FUN_105d3b76c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((*(char *)(param_1 + 0xb1) == '\x01') &&
     (uVar1 = param_1, func_0x00010be45080(), (uVar1 & 1) == 0)) {
    if (*(long *)(param_1 + 0x178) != 0) {
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c9c0();
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar5 = *(undefined8 *)(param_1 + 0x178);
    *(undefined **)(param_1 + 0x178) = puVar4;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x178),param_2,param_1);
    func_0x00010c178280(*(undefined8 *)(param_1 + 0x178),param_2,1);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
  }
  else {
    if (*(long *)(param_1 + 0x178) == 0) {
      return;
    }
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105d3b898; end: 105d3b99b; -[SCPreviewFeatureCTLensAiModeImpl _setExistingToolViewAlpha:] */

void FUN_105d3b898(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2790a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c252b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c278d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d3b99c; end: 105d3bb5f; -[SCPreviewFeatureCTLensAiModeImpl _setPreviewChromeHiddenForAiModeSession:] */

void FUN_105d3b99c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(char *)(param_1 + 0x1e0) = (char)param_3;
  uVar3 = 0;
  if (param_3 == 0) {
    uVar3 = 0x3ff0000000000000;
  }
  func_0x00010bea3be0(uVar3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c22a7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0da200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c14a0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c110940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideCloseButton_1125d60d8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c236970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showCloseButton_11266b480);
  return;
}



/* Entry: 105d3bb60; end: 105d3bc6b; -[SCPreviewFeatureCTLensAiModeImpl _observeLensCarouselEventsForChromeHiding] */

void FUN_105d3bb60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d3bc6c; end: 105d3bd03;  */

void FUN_105d3bc6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (*(char *)(param_1 + 0x1e0) == '\x01')) &&
     (uVar1 = param_2, func_0x00010bf1f3c0(), (int)uVar1 != 0)) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c110940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3bd04; end: 105d3be07; -[SCPreviewFeatureCTLensAiModeImpl _updateCroppingState] */

void FUN_105d3bd04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bf27a60(&uStack_60,lVar3,param_2,1);
  }
  func_0x00010c2235a0(uVar1,param_2,&uStack_60);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c072ea0();
  func_0x00010c186160(uVar4,param_2,(uint)uVar6 ^ 1);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 105d3be08; end: 105d3c1af; -[SCPreviewFeatureCTLensAiModeImpl _updateBottomComponent] */

void FUN_105d3be08(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined **)(param_1 + 0xf0) = puVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar5,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010c0da200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010c15b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar6);
    goto LAB_105d3c17c;
  }
  lVar3 = *(long *)(param_1 + 0xf0);
  func_0x00010bf529e0();
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar4 = lVar6;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = lVar4;
    func_0x00010bf4b900(lVar4,param_2,*(undefined8 *)(param_1 + 0xe8));
    _objc_release(lVar4);
    _objc_release(lVar6);
    bVar1 = false;
    if ((int)lVar3 != 0) {
      lVar6 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar6);
      lVar4 = lVar6;
      func_0x00010bf20760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(lVar4);
      goto LAB_105d3c09c;
    }
  }
  else {
    func_0x00010c12adc0(lVar4);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = *(long *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
LAB_105d3c09c:
    _objc_release(lVar6);
    bVar1 = true;
  }
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010c0da200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  _objc_release(lVar6);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  _objc_release(lVar6);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  _objc_release(lVar6);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010c14a0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  _objc_release(lVar6);
  if (!bVar1) {
    return;
  }
LAB_105d3c17c:
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d3c1b0; end: 105d3c237; -[SCPreviewFeatureCTLensAiModeImpl _handleCTLensEvent:] */

void FUN_105d3c1b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c115a60();
  lVar2 = param_3;
  func_0x00010bfc09a0();
  *(long *)(param_1 + 0x180) = lVar2;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  *(long *)(param_1 + 0x168) = param_3;
  _objc_release(uVar3);
  if (lVar1 == 2) {
    func_0x00010be501c0(param_1);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x170),param_2,param_3);
  func_0x00010bee3fa0(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d3c238; end: 105d3c39f; -[SCPreviewFeatureCTLensAiModeImpl _updateViewsWithLensProcessingStatus:] */

void FUN_105d3c238(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c4350;
  _objc_alloc();
  uVar4 = 1;
  func_0x00010c055900();
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_105d3c30c;
    if (param_3 != 1) goto LAB_105d3c368;
    uVar6 = *(undefined8 *)(param_1 + 0xe8);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c28c580(uVar6);
    uVar4 = SUB81(puVar3,0);
  }
  else {
    if (param_3 == 2) {
      func_0x00010bde6140(param_1);
      goto LAB_105d3c368;
    }
    if (param_3 == 3) {
      func_0x00010c236960(param_1);
      func_0x00010bed8d00(param_1);
    }
    else if (param_3 != 4) goto LAB_105d3c368;
LAB_105d3c30c:
    puVar3 = PTR_PTR_1126c4350;
    _objc_alloc();
    func_0x00010c055900();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c28c580(*(undefined8 *)(param_1 + 0xe8));
    uVar4 = SUB81(puVar3,0);
  }
  _objc_release(puVar2);
LAB_105d3c368:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar1[0x198] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010c18ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar1 + 0xf8),PTR_s_setDisabled__112641538);
    return;
  }
  return;
}



/* Entry: 105d3c3a0; end: 105d3c3ab; -[SCPreviewFeatureCTLensAiModeImpl _setToolbarItemDisabled:] */

void FUN_105d3c3a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x198) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c18ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_setDisabled__112641538);
  return;
}



/* Entry: 105d3c3ac; end: 105d3c59b; -[SCPreviewFeatureCTLensAiModeImpl _setupBottomComponent] */

void FUN_105d3c3ac(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  if (*(long *)(param_5 + 0xe8) != 0) {
    return;
  }
  lVar1 = param_5 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfb4520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar1);
  if (lVar2 == 0) {
    func_0x00010bf20c00();
    lVar2 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMaxY();
    param_1 = param_4 - param_1;
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_4 = 72.0;
    if (72.0 <= param_1) {
      param_4 = param_1;
    }
    lVar1 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_1 = 0.0;
    _objc_release(lVar2);
    puVar6 = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfb4520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    lVar1 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfb42e0();
    func_0x00010c23ba80(puVar6,param_6,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c4358;
  _objc_alloc();
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  uVar5 = *(undefined8 *)(param_5 + 0xe8);
  *(undefined **)(param_5 + 0xe8) = puVar4;
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0xe8),param_6,param_5);
  func_0x00010c16e440(*(undefined8 *)(param_5 + 0xe8),param_6,puVar6);
  uVar5 = *(undefined8 *)(param_5 + 0xe8);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar5);
  func_0x00010bed43a0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105d3c59c; end: 105d3c6a7; -[SCPreviewFeatureCTLensAiModeImpl _observeCTLensApplicationStateUpdate] */

void FUN_105d3c59c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5ce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d3c6a8; end: 105d3c6f7;  */

void FUN_105d3c6a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be26a40(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3c6f8; end: 105d3c777; -[SCPreviewFeatureCTLensAiModeImpl _handleCTLensApplicationState:] */

void FUN_105d3c6f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x130);
  func_0x00010bf07d20();
  if (lVar2 != 1) {
    lVar2 = *(long *)(param_1 + 0x130);
    func_0x00010bf07d20();
    if (lVar2 != 3) goto LAB_105d3c768;
  }
  lVar2 = *(long *)(param_1 + 0x130);
  func_0x00010c0ff440();
  if (lVar2 != 1) {
    lVar2 = *(long *)(param_1 + 0x130);
    func_0x00010c0ff440();
    if (lVar2 != 0) goto LAB_105d3c768;
  }
  *(undefined1 *)(param_1 + 0xb0) = 0;
LAB_105d3c768:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d3c778; end: 105d3c85b; -[SCPreviewFeatureCTLensAiModeImpl _showToastForIncompatibleModeIfNecessary] */

void FUN_105d3c778(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_3 + 0x130);
  func_0x00010bf07d20();
  if (lVar1 == 1) {
    lVar1 = *(long *)(param_3 + 0x130);
    func_0x00010c0ff440();
    if (lVar1 == 1) {
      uVar2 = *(undefined8 *)(param_3 + 0x48);
      func_0x00010c273f60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x000105d48278();
      _objc_retainAutoreleasedReturnValue();
      param_3 = param_3 + 0x10;
      _objc_loadWeakRetained(param_3);
      func_0x00010c23d0a0();
      func_0x00010c23a8a0(param_2 * 0.5 + -80.0,uVar3,param_4,uVar4,9,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(uVar4);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 105d3c85c; end: 105d3c943; -[SCPreviewFeatureCTLensAiModeImpl _onReportButtonTapped] */

void FUN_105d3c85c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c240640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cfd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126bd648;
  _objc_alloc(PTR_PTR_1126bd648);
  lVar6 = param_1;
  func_0x00010bf4d280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0338e0(puVar5,param_2,lVar6,uVar4,param_1);
  _objc_release(lVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x158),param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105d3c944; end: 105d3c9ef; -[SCPreviewFeatureCTLensAiModeImpl _cropTranscodedImage:] */

void FUN_105d3c944(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0xd0);
  _objc_retain(param_5);
  func_0x00010c23d0a0(uVar1);
  dVar2 = param_2;
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0xd0));
  param_2 = param_2 / param_1;
  func_0x00010c23d0a0(param_5);
  param_1 = param_1 * param_2;
  func_0x00010c23d0a0(param_5);
  dVar2 = dVar2 - param_1;
  dVar3 = dVar2 * 0.5;
  func_0x00010c23d0a0(param_5);
  uVar1 = param_5;
  func_0x00010bf5c7a0(0,dVar3,dVar2,param_1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d3c9f0; end: 105d3cb27; -[SCPreviewFeatureCTLensAiModeImpl _handleAsyncTaskStatusEvents] */

void FUN_105d3c9f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010befed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d3cb28; end: 105d3cc3f;  */

void FUN_105d3cb28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_2;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf95e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      _objc_retain();
      lVar4 = param_1;
      func_0x00010bdea940(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd05e0(param_1);
      _objc_release(param_1);
      _objc_release(lVar4);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3cc40; end: 105d3cd6b; -[SCPreviewFeatureCTLensAiModeImpl _observeAppBackgroundingToCancelGeneration] */

void FUN_105d3cc40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  func_0x00010bf75dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d3cd6c; end: 105d3cd97;  */

void FUN_105d3cd6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d3cd98; end: 105d3cdcb; -[SCPreviewFeatureCTLensAiModeImpl _handleAppDidEnterBackground] */

void FUN_105d3cd98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be40c40();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelEditing_112554390);
    return;
  }
  return;
}



/* Entry: 105d3cdcc; end: 105d3cdff; -[SCPreviewFeatureCTLensAiModeImpl _isGenerationInProgress] */

bool FUN_105d3cdcc(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x168);
    func_0x00010c115a60(lVar1);
    return lVar1 == 1;
  }
  return false;
}



/* Entry: 105d3ce00; end: 105d3d043; -[SCPreviewFeatureCTLensAiModeImpl _createAiModeEventFromAsyncTaskEvent:] */

void FUN_105d3ce00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0998a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f3900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,uVar5,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c0e00e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e29118);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c067fc0();
  _objc_release(puVar8);
  puVar8 = puVar6;
  func_0x00010c0e00e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e29138);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c4360;
  _objc_alloc(PTR_PTR_1126c4360);
  uVar1 = param_3;
  func_0x00010c252d60(param_3);
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c28f340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010c086560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a4a0(puVar10,param_2,uVar1,uVar4,uVar11,puVar7,puVar9,puVar8);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105d3d044; end: 105d3d08f; -[SCPreviewFeatureCTLensAiModeImpl _resetStatePublisher] */

void FUN_105d3d044(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    func_0x00010bf436e0();
  }
  puVar1 = PTR_PTR_1126b7e38;
  func_0x00010c131720(PTR_PTR_1126b7e38,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  *(undefined **)(param_1 + 0x170) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d3d090; end: 105d3d0d7; -[SCPreviewFeatureCTLensAiModeImpl generativeContentReportDidCompleteWithCancelled:] */

void FUN_105d3d090(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x158);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x158));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105d3d0d8; end: 105d3d25b; -[SCPreviewFeatureCTLensAiModeImpl _fetchHeaderImage] */

void FUN_105d3d0d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  func_0x00010c13e600(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d3d25c; end: 105d3d327;  */

void FUN_105d3d25c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfcaaa0();
    if (lVar2 == 0) {
      lVar2 = param_2;
      func_0x00010c13e900(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar2);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc_init(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3d328; end: 105d3d4f3; -[SCPreviewFeatureCTLensAiModeImpl _showDisclaimer] */

void FUN_105d3d328(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x108) == 0) {
    puVar1 = PTR_PTR_1126c4368;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x108);
    *(undefined **)(param_1 + 0x108) = puVar1;
    _objc_release(uVar6);
    func_0x00010c161980(*(undefined8 *)(param_1 + 0x108));
    puVar1 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    uVar6 = *(undefined8 *)(param_1 + 0x100);
    *(undefined **)(param_1 + 0x100) = puVar1;
    _objc_release(uVar6);
    func_0x00010c219e20(*(undefined8 *)(param_1 + 0x100));
    func_0x00010c167420(*(undefined8 *)(param_1 + 0x100));
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c27ed00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cfd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_1);
    func_0x00010be11900(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = auStack_50;
    _objc_copyWeak(puVar5,auStack_48);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_1);
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 105d3d4f4; end: 105d3d567;  */

void FUN_105d3d4f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1a7840(*(undefined8 *)(param_1 + 0x108));
    func_0x00010c10c720(0x3fe3333333333333,*(undefined8 *)(param_1 + 0x100));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3d568; end: 105d3d5af; -[SCPreviewFeatureCTLensAiModeImpl handleAcceptAction] */

void FUN_105d3d568(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9d20();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 105d3d5b0; end: 105d3d5bb; -[SCPreviewFeatureCTLensAiModeImpl handleCancelAction] */

void FUN_105d3d5b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 105d3d5bc; end: 105d3d607; -[SCPreviewFeatureCTLensAiModeImpl tray:positionDidChange:] */

void FUN_105d3d5bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 == 2) {
    lVar1 = param_1;
    func_0x00010be3fac0();
    if ((int)lVar1 != 0) {
      func_0x00010be25880(param_1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105d3d608; end: 105d3d61f; -[SCPreviewFeatureCTLensAiModeImpl tray:heightForPosition:] */

undefined8
FUN_105d3d608(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  if (param_5 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010c29d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x108),PTR_s_viewHeight_112684e40);
    return param_1;
  }
  return 0;
}



/* Entry: 105d3d620; end: 105d3d77f; -[SCPreviewFeatureCTLensAiModeImpl _logAiGenerationAttemptEvent] */

void FUN_105d3d620(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c06b300();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126c4370;
  _objc_opt_new(PTR_PTR_1126c4370);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (*(ulong *)(param_1 + 0x180) < 4) {
    func_0x00010c1e6520(puVar2,param_2,
                        *(undefined8 *)(&UNK_10ddd0598 + *(ulong *)(param_1 + 0x180) * 8));
  }
  func_0x00010c206e60(puVar2,param_2,3);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c080120();
  func_0x00010c226e20(puVar2,param_2,lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c206c40(puVar2,param_2,3);
  uVar8 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d3d780; end: 105d3d787; -[SCPreviewFeatureCTLensAiModeImpl _isUserEligibleToLaunchAIMode] */

undefined8 FUN_105d3d780(void)

{
  return 1;
}



/* Entry: 105d3d788; end: 105d3d807; -[SCPreviewFeatureCTLensAiModeImpl _isUserEligibleToStartGeneration] */

long FUN_105d3d788(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x00010c095e80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c076660();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be05a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__doesUserHaveFreemiumGenerations_11255f038)
    ;
    return param_1;
  }
  return 1;
}



/* Entry: 105d3d808; end: 105d3d90f; -[SCPreviewFeatureCTLensAiModeImpl _doesUserHaveFreemiumGenerationsAvailable] */

undefined8 FUN_105d3d808(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  func_0x00010c094fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c095e40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  uVar7 = 0;
  if ((lVar1 != 0) && (lVar4 != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x1b8);
    func_0x00010c095d20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bfc5d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
    uVar7 = uVar6;
    func_0x00010c0736c0(uVar6);
    _objc_release(uVar6);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  return uVar7;
}



/* Entry: 105d3d910; end: 105d3dc2b; -[SCPreviewFeatureCTLensAiModeImpl _presentLensPlusSubscribePage] */

void FUN_105d3d910(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010befed60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        func_0x00010be0c060(param_1);
      }
      else {
        lVar3 = *(long *)(param_1 + 0x1b8);
        func_0x00010c095d20();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010bfc5d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar3);
        if (lVar4 == 0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          lVar5 = *(long *)(param_1 + 0x1a8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            puVar13 = (undefined *)0x0;
            lVar3 = 0;
          }
          else {
            lVar3 = lVar5;
            func_0x00010c243400(lVar5);
            func_0x0001008cc2b4();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR_PTR_1126bd498;
            lVar6 = lVar5;
            func_0x00010c096d20(lVar5);
            func_0x00010bf1cec0(puVar13,param_2,lVar6);
            func_0x00010bb000e4();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar12 = PTR_PTR_1126c42f0;
          _objc_alloc(PTR_PTR_1126c42f0);
          lVar6 = lVar4;
          func_0x00010bfd6d60(lVar4);
          lVar7 = lVar4;
          func_0x00010bfceb20(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bffd0a0(puVar12,param_2,0,0,0,lVar6,lVar7,lVar3,puVar13);
          _objc_release(lVar7);
          _objc_release(lVar5);
          _objc_release(puVar13);
          _objc_release(lVar3);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c240640(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar14;
        func_0x00010c27ed00();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0cfd00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar14);
        _objc_release(uVar8);
        puVar13 = PTR_PTR_1126b1da8;
        _objc_alloc(PTR_PTR_1126b1da8);
        lVar5 = lVar2;
        func_0x00010c094540(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04abe0(puVar13,param_2,0x77,0,0x3a,lVar5,0x25,puVar12);
        _objc_release(lVar5);
        uVar14 = *(undefined8 *)(param_1 + 0x38);
        puVar11 = PTR_PTR_1126b5af8;
        func_0x00010c095b40(PTR_PTR_1126b5af8,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf23e60(uVar14,param_2,uVar10,puVar13,param_1,4,puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,uVar14);
        _objc_release(uVar14);
        _objc_release(puVar13);
        _objc_release(uVar10);
        _objc_release(lVar4);
        _objc_release(puVar12);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 105d3dc2c; end: 105d3dc73; -[SCPreviewFeatureCTLensAiModeImpl plusSubscribeDidDismiss] */

void FUN_105d3dc2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105d3dc74; end: 105d3dd13; -[SCPreviewFeatureCTLensAiModeImpl setToolbarItemViewModel:] */

void FUN_105d3dc74(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 0x1f8));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x1f8);
    *(ulong *)(param_1 + 0x1f8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d3dd14; end: 105d3ddcf; -[SCPreviewFeatureCTLensAiModeImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105d3ddb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d3ddb4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105d3dd14(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if ((*(long *)(param_1 + 0xa0) == 0) || (uVar1 = param_1, func_0x00010c072ba0(), (uVar1 & 1) == 0)
     ) {
    puVar2 = (undefined *)0x0;
  }
  else {
    FUN_105d482c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010be61000();
    puVar2 = PTR_PTR_1126c3cc0;
    _objc_alloc(PTR_PTR_1126c3cc0);
    if ((uVar1 & 1) == 0) {
      func_0x00010c020360();
    }
    else {
      func_0x00010c039d00();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar2);
  return;
}



/* Entry: 105d3ddd0; end: 105d3ddf7; -[SCPreviewFeatureCTLensAiModeImpl toolbarItemViewModelObservable] */

void FUN_105d3ddd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d3ddf8; end: 105d3ddff; -[SCPreviewFeatureCTLensAiModeImpl gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_105d3ddf8(void)

{
  return 0;
}



/* Entry: 105d3de00; end: 105d3de0f; -[SCPreviewFeatureCTLensAiModeImpl gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

bool FUN_105d3de00(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + 0x178);
}


