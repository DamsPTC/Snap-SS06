/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b730888; end: 10b7308a3; -[SCLens isFavorite] */

bool FUN_10b730888(long param_1)

{
  func_0x00010c27dd80();
  return param_1 == 0xf;
}



/* Entry: 10b7308a4; end: 10b7308bb; -[SCLens featureType] */

ulong FUN_10b7308a4(ulong param_1)

{
  func_0x00010c07de20();
  return param_1 & 0xffffffff;
}



/* Entry: 10b7308bc; end: 10b73094b; +[SCLens lensIdsStringFromLensArray:] */

void FUN_10b7308bc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  if ((param_3 == (undefined **)0x0) ||
     (ppuVar1 = param_3, func_0x00010bf529e0(), ppuVar1 == (undefined **)0x0)) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = param_3;
    func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_110d5aa90);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b73094c; end: 10b730953;  */

void FUN_10b73094c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10b730954; end: 10b730eaf; -[SCLens lensByApplyingUITestStubOverrides:] */

void FUN_10b730954(undefined *param_1,undefined8 param_2,undefined *param_3)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    _objc_retain(param_1);
    goto LAB_10b730e84;
  }
  puVar1 = PTR_PTR_1126b0820;
  func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010c2bbd20(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf32760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf32760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa300(puVar1,param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = param_3;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
LAB_10b730a80:
    _objc_release(puVar2);
  }
  else {
    puVar3 = param_1;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = param_3;
      func_0x00010c0d53e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b44a0(puVar1,param_2,puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_10b730a80;
    }
  }
  puVar2 = param_3;
  func_0x00010bf29280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf29280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9d00(puVar1,param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(puVar2);
  if (puVar2 == (undefined *)0x0) {
LAB_10b730e1c:
    _objc_retain(param_1);
    puVar3 = param_1;
  }
  else {
    puVar3 = puVar2;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x00010c11fa40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      _objc_release(puVar3);
      if (puVar5 == (undefined *)0x0) goto LAB_10b730e1c;
    }
    else {
      _objc_release(puVar3);
    }
    puVar4 = puVar2;
    if (param_1 != (undefined *)0x0) {
      puVar4 = param_1;
    }
    _objc_retain(puVar4);
    puVar3 = puVar2;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c08fa60();
    puVar5 = puVar4;
    if (puVar6 != (undefined *)0x0) {
      puVar5 = puVar2;
    }
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c08fa60();
    puVar6 = puVar4;
    if (puVar7 != (undefined *)0x0) {
      puVar6 = puVar2;
    }
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bb898;
    _objc_alloc();
    puVar7 = puVar4;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c11ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c23e500();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bf93c40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010bef5fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010c086040();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010c119580();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010bf17380();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar4;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar4;
    func_0x00010c0fcb00();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar4;
    func_0x00010bf5ac40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bff1ec0(puVar3,param_2,puVar7,puVar8,puVar9,puVar10,puVar11,puVar5,puVar6,puVar12,
                        puVar13,puVar14,puVar15,puVar16,puVar17,puVar18,puVar19,puVar20);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_1);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c2bbf60(puVar1,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  param_1 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_10b730e84:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b730eb0; end: 10b730f17; -[SCLens isConnectedLens] */

undefined8 FUN_10b730eb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0xb;
  func_0x00010b732d28(0xb);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b730f18; end: 10b731057; -[SCLens isConnectedVideoLens] */

uint FUN_10b730f18(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar6;
  uint uVar7;
  long lVar5;
  
  lVar3 = param_1;
  func_0x00010bf07540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 1) {
    lVar4 = param_1;
    func_0x00010bf07540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf4b900();
    uVar2 = (uint)lVar5;
    _objc_release(lVar4);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf07540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 2) {
    lVar4 = param_1;
    func_0x00010bf07540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf4b900();
    if ((int)lVar5 == 0) {
      uVar7 = 0;
    }
    else {
      lVar5 = param_1;
      func_0x00010bf07540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf4b900();
      uVar7 = (uint)lVar6;
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
  }
  else {
    uVar7 = 0;
  }
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c080040(param_1);
  func_0x00010c06f040();
  uVar1 = 0;
  if ((int)param_1 != 0) {
    uVar1 = (uint)lVar3 | uVar2 | uVar7;
  }
  return uVar1 & 1;
}



/* Entry: 10b731058; end: 10b73109f; -[SCLens isSpectaclesRT] */

undefined8 FUN_10b731058(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf07540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7310a0; end: 10b73110b; -[SCLens requiresRemoteService] */

undefined8 FUN_10b7310a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xc;
  func_0x00010b732d28(0xc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c092760(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10b73110c; end: 10b731123; -[SCLens requiresLensCoreTracking] */

uint FUN_10b73110c(uint param_1)

{
  func_0x00010c083a60();
  return param_1 ^ 1;
}



/* Entry: 10b731124; end: 10b73118b; -[SCLens supportsDepth] */

undefined8 FUN_10b731124(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 6;
  func_0x00010b732d28(6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b73118c; end: 10b7311f3; -[SCLens isVoiceMLLens] */

undefined8 FUN_10b73118c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x12;
  func_0x00010b732d28(0x12);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7311f4; end: 10b73125b; -[SCLens isShoppingLens] */

undefined8 FUN_10b7311f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0xe;
  func_0x00010b732d28(0xe);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b73125c; end: 10b7312c3; -[SCLens isPostCaptureDynamicLens] */

undefined8 FUN_10b73125c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x27;
  func_0x00010b732d28(0x27);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7312c4; end: 10b73132b; -[SCLens isPostCaptureRequiresTouchSupportLens] */

undefined8 FUN_10b7312c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x57;
  func_0x00010b732d28(0x57);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b73132c; end: 10b731393; -[SCLens isPostCaptureAnimatedLens] */

undefined8 FUN_10b73132c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x28;
  func_0x00010b732d28(0x28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731394; end: 10b731437; -[SCLens isWorldLensInPostCapture] */

undefined8 FUN_10b731394(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf07540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c092760(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 5;
    func_0x00010b732d28(5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf4b900(param_1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10b731438; end: 10b73149f; -[SCLens isWatermarkLens] */

undefined8 FUN_10b731438(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x26;
  func_0x00010b732d28(0x26);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7314a0; end: 10b731507; -[SCLens isGenerativeAiLens] */

undefined8 FUN_10b7314a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x29;
  func_0x00010b732d28(0x29);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731508; end: 10b73156f; -[SCLens usesDualCamera] */

undefined8 FUN_10b731508(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x51;
  func_0x00010b732d28(0x51);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731570; end: 10b7315d7; -[SCLens overridesCaptureButton] */

undefined8 FUN_10b731570(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x2a;
  func_0x00010b732d28(0x2a);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7315d8; end: 10b73163f; -[SCLens usesPickerTextureProvider] */

undefined8 FUN_10b7315d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x2b;
  func_0x00010b732d28(0x2b);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731640; end: 10b7316a7; -[SCLens usesLeaderboardModule] */

undefined8 FUN_10b731640(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x4d;
  func_0x00010b732d28(0x4d);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7316a8; end: 10b73170f; -[SCLens usesImageQnA] */

undefined8 FUN_10b7316a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x4e;
  func_0x00010b732d28(0x4e);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731710; end: 10b731777; -[SCLens requiresBitmoji] */

undefined8 FUN_10b731710(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 2;
  func_0x00010b732d28(2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731778; end: 10b7317df; -[SCLens requiresFriendmoji] */

undefined8 FUN_10b731778(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 3;
  func_0x00010b732d28(3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7317e0; end: 10b7318e3; -[SCLens canAppearInLensCarousel] */

bool FUN_10b7317e0(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,PTR_PTR_1133c92f8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf07540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c069880();
  _objc_release(lVar3);
  if ((int)lVar4 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf07540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0d3c80();
    _objc_release(param_1);
    func_0x00010c0ce860(lVar3,param_2,puVar2);
    lVar4 = lVar3;
    func_0x00010bf529e0(lVar3);
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 10b7318e4; end: 10b73194b; -[SCLens supportsCloudStorage] */

undefined8 FUN_10b7318e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x1c;
  func_0x00010b732d28(0x1c);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b73194c; end: 10b7319b3; -[SCLens isWebLens] */

undefined8 FUN_10b73194c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x5b;
  func_0x00010b732d28(0x5b);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7319b4; end: 10b731a0f; -[SCLens publicApiUserDataAccessLevel] */

uint FUN_10b7319b4(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c06f040();
  if (((((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010c294b60(), (uVar2 & 1) == 0)) &&
      (uVar2 = param_1, func_0x00010c263540(), (uVar2 & 1) == 0)) &&
     (uVar2 = param_1, func_0x00010c294aa0(), (uVar2 & 1) == 0)) {
    func_0x00010c081a80(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10b731a10; end: 10b731a77; -[SCLens requiresMySelfie] */

undefined8 FUN_10b731a10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x53;
  func_0x00010b732d28(0x53);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731a78; end: 10b731adf; -[SCLens twoPersonsAILens] */

undefined8 FUN_10b731a78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x54;
  func_0x00010b732d28(0x54);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731ae0; end: 10b731b47; -[SCLens usesContentReadiness] */

undefined8 FUN_10b731ae0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x55;
  func_0x00010b732d28(0x55);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731b48; end: 10b731baf; -[SCLens requiresGeodata] */

undefined8 FUN_10b731b48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x56;
  func_0x00010b732d28(0x56);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731bb0; end: 10b731be7; -[SCLens requiresPostCaptureContinuousRendering] */

ulong FUN_10b731bb0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07a7e0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c074550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isGenerativeAiLens_1125fab60);
  return param_1;
}



/* Entry: 10b731be8; end: 10b731c4f; -[SCLens offscreenSyncModeEnabled] */

undefined8 FUN_10b731be8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x5c;
  func_0x00010b732d28(0x5c);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731c50; end: 10b731c93; -[SCLens needsDisclaimer] */

ulong FUN_10b731c50(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07b7a0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c2949e0(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c081a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isTurnByTurnPromptLens_1125fe0b0);
    return param_1;
  }
  return 1;
}



/* Entry: 10b731c94; end: 10b731cfb; -[SCLens usesInLensCapture] */

undefined8 FUN_10b731c94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x60;
  func_0x00010b732d28(0x60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b731cfc; end: 10b731d2b; -[SCLens shouldShowStudioDebugUI] */

void FUN_10b731cfc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c080040();
  if ((int)uVar1 != 0) {
    func_0x00010bec9080(param_1);
  }
  return;
}



/* Entry: 10b731d2c; end: 10b731d97; -[SCLens _suppressesStudioDebugUI] */

undefined8 FUN_10b731d2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x6a;
  func_0x00010b732d28(0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c092760(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10b731d98; end: 10b731e3b; -[SCLens lensExplorerCategoryId] */

void FUN_10b731d98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c093a40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c318f8();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf33480(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b731e3c; end: 10b731edf; -[SCLens lensSourcePageSessionId] */

void FUN_10b731e3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c093a40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c318f8();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010c153d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b731ee0; end: 10b731f7b; -[SCLens pickedLensSource] */

long FUN_10b731ee0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c093a40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c318f8();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010c0fb900(lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 10b731f7c; end: 10b731ff3; -[SCLens isFetchable] */

bool FUN_10b731f7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3 != 0;
}



/* Entry: 10b731ff4; end: 10b732043; -[SCLens isGeoLens] */

bool FUN_10b731ff4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c27dd80();
  if ((lVar2 == 2) || (lVar2 = param_1, func_0x00010c27dd80(), lVar2 == 4)) {
    bVar1 = true;
  }
  else {
    func_0x00010c27dd80(param_1);
    bVar1 = param_1 == 0xe;
  }
  return bVar1;
}



/* Entry: 10b732044; end: 10b73211f; -[SCLens isPublicPromptLens] */

long FUN_10b732044(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x00010c129ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c129dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar4 = lVar1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b0250;
    _objc_alloc(PTR_PTR_1126b0250);
    puVar3 = PTR_PTR_1126b0258;
    func_0x00010c11a840(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bfe5f20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf4b900(lVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 10b732120; end: 10b7321fb; -[SCLens isTurnByTurnPromptLens] */

long FUN_10b732120(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x00010c129ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c129dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar4 = lVar1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b0250;
    _objc_alloc(PTR_PTR_1126b0250);
    puVar3 = PTR_PTR_1126b0258;
    func_0x00010c27d460(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bfe5f20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf4b900(lVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 10b7321fc; end: 10b7322d7; -[SCLens isTurnBasedV2Lens] */

long FUN_10b7321fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x00010c129ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c129dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar4 = lVar1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b0250;
    _objc_alloc(PTR_PTR_1126b0250);
    puVar3 = PTR_PTR_1126b0258;
    func_0x00010c27d3c0(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bfe5f20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf4b900(lVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 10b7322d8; end: 10b7326eb; -[SCLens usesThirdPartyRemoteApis] */

bool FUN_10b7322d8(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  lVar2 = param_1;
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xc;
  func_0x00010b732d28(0xc);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf4b900(lVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
  if ((int)lVar4 == 0) {
    bVar1 = false;
  }
  else {
    puVar5 = PTR_PTR_1126b0250;
    _objc_alloc();
    puVar6 = PTR_PTR_1126b0258;
    func_0x00010c0974a0(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar5,param_2,puVar6);
    puVar7 = puVar5;
    func_0x00010bfe5f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126b0250;
    _objc_alloc();
    puVar6 = PTR_PTR_1126b0258;
    func_0x00010c11a5a0(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar5,param_2,puVar6);
    puVar8 = puVar5;
    func_0x00010bfe5f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126b0250;
    _objc_alloc();
    puVar6 = PTR_PTR_1126b0258;
    func_0x00010c11a2c0(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar5,param_2,puVar6);
    puVar9 = puVar5;
    func_0x00010bfe5f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126b0250;
    _objc_alloc();
    puVar6 = PTR_PTR_1126b0258;
    func_0x00010c11a440(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar5,param_2,puVar6);
    puVar10 = puVar5;
    func_0x00010bfe5f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126b0250;
    _objc_alloc();
    puVar6 = PTR_PTR_1126b0258;
    func_0x00010bf8ae80(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar5,param_2,puVar6);
    puVar11 = puVar5;
    func_0x00010bfe5f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126b0250;
    _objc_alloc();
    puVar6 = PTR_PTR_1126b0258;
    func_0x00010befec00(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar5,param_2,puVar6);
    puVar12 = puVar5;
    func_0x00010bfe5f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126b0250;
    _objc_alloc();
    puVar6 = PTR_PTR_1126b0258;
    func_0x00010c105d80(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar5,param_2,puVar6);
    puVar13 = puVar5;
    func_0x00010bfe5f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126b0250;
    _objc_alloc();
    puVar6 = PTR_PTR_1126b0258;
    func_0x00010c23e580(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar5,param_2,puVar6);
    puVar14 = puVar5;
    func_0x00010bfe5f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    func_0x00010c129ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c129dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e03a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    lVar2 = lVar4;
    func_0x00010bf529e0(lVar4);
    bVar1 = lVar2 != 0;
    _objc_release(lVar4);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  return bVar1;
}



/* Entry: 10b7326ec; end: 10b7327a7;  */

uint FUN_10b7326ec(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0720c0();
  if (((((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
      (uVar1 = param_2, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
     (((uVar1 = param_2, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
       (uVar1 = param_2, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
      ((uVar1 = param_2, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
       (uVar1 = param_2, func_0x00010c0720c0(), (uVar1 & 1) == 0)))))) {
    uVar1 = param_2;
    func_0x00010c0720c0(param_2);
    uVar2 = (uint)uVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10b7327a8; end: 10b7329d3; +[SCLens placeholderUnlockedLensWithLensId:iconUrl:] */

void FUN_10b7327a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b0820;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad7e0(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c2bbd20(puVar2,param_2,0xe);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2880(puVar2,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af940(puVar2,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7480(puVar2,param_2,0xffffffffffffffff);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puStack_68 = PTR_PTR_1133c9290;
  puStack_60 = PTR_PTR_1133c9298;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9d00(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puStack_70 = PTR_PTR_1133c92a0;
  uVar8 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a8660(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = puStack_68;
    uVar9 = (ulong)puStack_70 & 0xff;
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(puVar2);
    _objc_retain(param_6);
    func_0x00010c0fdac0(param_3,param_2,puVar5,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0820;
    func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bb850;
    _objc_alloc(PTR_PTR_1126bb850);
    func_0x00010c0235c0();
    _objc_release(param_6);
    func_0x00010c2b4480(puVar4,param_2,param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aab00(puVar4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b2840(puVar4,param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b1600(puVar4,param_2,uVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (((param_7 != 0) || (param_8 != 0)) || (puVar2 != (undefined *)0x0)) {
      puVar3 = PTR_PTR_1126bb898;
      _objc_alloc(PTR_PTR_1126bb898);
      lVar6 = param_7;
      func_0x00010c08fa60();
      lVar1 = 0;
      if (lVar6 != 0) {
        lVar1 = param_7;
      }
      lVar7 = param_8;
      func_0x00010c08fa60();
      lVar6 = 0;
      if (lVar7 != 0) {
        lVar6 = param_8;
      }
      func_0x00010bff1ec0(puVar3,param_2,0,0,PTR____kCFBooleanFalse_11034ab60,0,0,lVar1,lVar6,0,0,0,
                          0,0,0,0,0,0);
      func_0x00010c2bbf60(puVar4,param_2,puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    puVar3 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7329d4; end: 10b732bfb; +[SCLens placeholderUnlockedLensWithLensId:iconUrl:lensName:creatorName:rankingId:rankingData:isSnapchatPlusExclusive:lensExtensions:] */

void FUN_10b7329d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined1 param_9
                  ,undefined4 param_10,long param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_6);
  func_0x00010c0fdac0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0820;
  func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bb850;
  _objc_alloc(PTR_PTR_1126bb850);
  func_0x00010c0235c0();
  _objc_release(param_6);
  func_0x00010c2b4480(puVar2,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aab00(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2840(puVar2,param_2,param_11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1600(puVar2,param_2,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (((param_7 != 0) || (param_8 != 0)) || (param_11 != 0)) {
    puVar4 = PTR_PTR_1126bb898;
    _objc_alloc(PTR_PTR_1126bb898);
    lVar5 = param_7;
    func_0x00010c08fa60();
    lVar1 = 0;
    if (lVar5 != 0) {
      lVar1 = param_7;
    }
    lVar6 = param_8;
    func_0x00010c08fa60();
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = param_8;
    }
    func_0x00010bff1ec0(puVar4,param_2,0,0,PTR____kCFBooleanFalse_11034ab60,0,0,lVar1,lVar5,0,0,0,0,
                        0,0,0,0,0);
    func_0x00010c2bbf60(puVar2,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b732bfc; end: 10b732c53; -[SCLens isNewUserWelcomeLensWithLensUser:] */

bool FUN_10b732bfc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  
  func_0x00010c089300();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c27dd80(param_1);
    bVar1 = param_1 == 4;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b732c54; end: 10b732c57; -[SCLens shouldPrefetchForInactiveLensUserWithLensUser:] */

void FUN_10b732c54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isNewUserWelcomeLensWithLensUser_1125fbcb0);
  return;
}



/* Entry: 10b732c58; end: 10b732cdf; -[SCLensResourceContainer defaultResource] */

void FUN_10b732c58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bf5fe00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b732ce0; end: 10b732cfb;  */

uint FUN_10b732ce0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c072920(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 10b732cfc; end: 10b732d13; +[SCLensCameraPositionHelpers carouselCameraPositionFromLensCameraPosition:] */

undefined1 FUN_10b732cfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 1) {
    uVar1 = param_3 == 0;
  }
  return uVar1;
}



/* Entry: 10b732d14; end: 10b732d4f; +[SCLensCameraPositionHelpers managedCaptureDevicePositionFromLensCameraPosition:] */

long FUN_10b732d14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = -(ulong)(param_3 != 0);
  if (param_3 == 1) {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 10b732d50; end: 10b732e07; +[SCLensPositionHelpers originalLensIndexWithLenses:] */

undefined8 FUN_10b732d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bf97e80(param_3);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b732e08; end: 10b732e53;  */

void FUN_10b732e08(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010c06c2e0();
  if (param_2 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 10b732e54; end: 10b732f27; +[SCLensPositionHelpers lensesOrderInfoFromActiveLensesOrder:] */

void FUN_10b732e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c8ce0;
  _objc_retain(param_3);
  func_0x00010c0ed640(puVar1,param_2,param_3);
  puVar1 = PTR_s_lensId_112602b60;
  _NSStringFromSelector(PTR_s_lensId_112602b60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c296f80(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_3;
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_110d5b0a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126e06b8;
  _objc_alloc(PTR_PTR_1126e06b8);
  func_0x00010bff0ce0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b732f28; end: 10b732f9b;  */

void FUN_10b732f28(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010c0915a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if (((uVar2 & 1) == 0) || (uVar2 = param_2, func_0x00010c08fa60(), uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b732f9c; end: 10b733073; +[SCLensPositionHelpers allLensesWithActiveLensIdsOrder:originalLensIndex:] */

void FUN_10b732f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b733074;
  puStack_48 = &UNK_110915be8;
  puStack_40 = puVar2;
  uStack_38 = param_4;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_40);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b733074; end: 10b7330d3;  */

void FUN_10b733074(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e457b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b7330d4; end: 10b7331ab; +[SCLensPositionHelpers allLensCollectionIds:originalLensIndex:] */

void FUN_10b7330d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b7331ac;
  puStack_48 = &UNK_110915be8;
  puStack_40 = puVar2;
  uStack_38 = param_4;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_40);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7331ac; end: 10b733277;  */

void FUN_10b7331ac(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c071ae0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010c067fc0();
    _objc_release(puVar2);
    if ((long)uVar3 < 1) goto LAB_10b73325c;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar1);
  }
  _objc_release(puVar2);
LAB_10b73325c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b733278; end: 10b73332b; -[SCLensesOrderInfo initWithActiveLensIdsOrder:lensCollectionIds:originalLensIndex:] */

undefined1 *
FUN_10b733278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a390;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73332c; end: 10b73334f; -[SCLensesOrderInfo copyWithZone:] */

undefined8 FUN_10b73332c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b733350; end: 10b7333c7; -[SCLensesOrderInfo hash] */

undefined8 * FUN_10b733350(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b733458:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b733464;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b733464;
        }
        goto LAB_10b733458;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b733464:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b7333c8; end: 10b73347f; -[SCLensesOrderInfo isEqual:] */

long FUN_10b7333c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b733458:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b733464;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b733464;
        }
        goto LAB_10b733458;
      }
    }
    lVar3 = 0;
  }
LAB_10b733464:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b733480; end: 10b733487; -[SCLensesOrderInfo activeLensIdsOrder] */

undefined8 FUN_10b733480(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b733488; end: 10b73348f; -[SCLensesOrderInfo lensCollectionIds] */

undefined8 FUN_10b733488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b733490; end: 10b733497; -[SCLensesOrderInfo originalLensIndex] */

undefined8 FUN_10b733490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b733498; end: 10b7334c7; -[SCLensesOrderInfo .cxx_destruct] */

void FUN_10b733498(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7334c8; end: 10b73357f; -[SCLensScheduleNamespace isEqual:] */

undefined8 FUN_10b7334c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar4 = 1;
    goto LAB_10b733568;
  }
  if (param_3 != 0) {
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_3);
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c0720c0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 8);
        if ((lVar3 != *(long *)(param_3 + 8)) && (func_0x00010c0720c0(), (int)lVar3 == 0))
        goto LAB_10b73355c;
        uVar4 = 1;
      }
      else {
LAB_10b73355c:
        uVar4 = 0;
      }
      _objc_release(param_3);
      goto LAB_10b733568;
    }
  }
  uVar4 = 0;
LAB_10b733568:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b733580; end: 10b7335f3; -[SCLensScheduleNamespace hash] */

undefined8 * FUN_10b733580(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 8);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined8 *)puVar3[1];
}



/* Entry: 10b7335f4; end: 10b7335fb; -[SCLensScheduleNamespaceRequestFeatureInfoPluginScope plugInRegistry] */

undefined8 FUN_10b7335f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7335fc; end: 10b733607; -[SCLensScheduleNamespaceRequestFeatureInfoPluginScope .cxx_destruct] */

void FUN_10b7335fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b733608; end: 10b73360f; -[SCLensScheduleNamespaceServices scheduleNetworkUpdateProvider] */

undefined8 FUN_10b733608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b733610; end: 10b73363f; -[SCLensScheduleNamespaceServices .cxx_destruct] */

void FUN_10b733610(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b733640; end: 10b733697; +[SCLensScheduleNamespaceRequestFeatureInfo cameosWithEnabled:] */

void FUN_10b733640(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7d70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b733698; end: 10b733703; +[SCLensScheduleNamespaceRequestFeatureInfo predictedContextRequestFeatureInfoWithClassifications:] */

void FUN_10b733698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7d70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b733704; end: 10b7337e7; +[SCLensScheduleNamespaceRequestFeatureInfo sponsoredLensRequestInfoWithAdRequest:lastLowSensitivityResponseTime:purposeTypesArray:snapScore:enableSponsoredLens:] */

void FUN_10b733704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7d70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  puVar2[0x38] = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7337e8; end: 10b73380b; -[SCLensScheduleNamespaceRequestFeatureInfo copyWithZone:] */

undefined8 FUN_10b7337e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73380c; end: 10b7338af; -[SCLensScheduleNamespaceRequestFeatureInfo hash] */

void FUN_10b73380c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = (ulong)*(byte *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_11270a3b0;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7338b0; end: 10b7338f3; -[SCLensScheduleNamespaceRequestFeatureInfo internalInit] */

void FUN_10b7338b0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a3b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7338f4; end: 10b733a0b; -[SCLensScheduleNamespaceRequestFeatureInfo isEqual:] */

long FUN_10b7338f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7339e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7339f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(char *)(param_1 + 0x38) == *(char *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 != *(long *)(param_3 + 0x40)) {
              func_0x00010c071ae0();
              goto LAB_10b7339f0;
            }
            goto LAB_10b7339e4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7339f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b733a0c; end: 10b733acb; -[SCLensScheduleNamespaceRequestFeatureInfo matchCameos:sponsoredLensRequestInfo:predictedContextRequestFeatureInfo:] */

void FUN_10b733a0c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x40));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined1 *)(param_1 + 0x38));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b733acc; end: 10b733b13; -[SCLensScheduleNamespaceRequestFeatureInfo .cxx_destruct] */

void FUN_10b733acc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b733b14; end: 10b733b37; -[SCLensScheduleNamespaceData copyWithZone:] */

undefined8 FUN_10b733b14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b733b38; end: 10b733c17; -[SCLensScheduleNamespaceData hash] */

undefined8 * FUN_10b733b38(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b733d70:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b733d7c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x48);
                      if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x50);
                        if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                          if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                            func_0x00010c071ae0();
                            goto LAB_10b733d7c;
                          }
                          goto LAB_10b733d70;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b733d7c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b733c18; end: 10b733d97; -[SCLensScheduleNamespaceData isEqual:] */

long FUN_10b733c18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b733d70:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b733d7c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x58);
                          if (lVar3 != *(long *)(param_3 + 0x58)) {
                            func_0x00010c071ae0();
                            goto LAB_10b733d7c;
                          }
                          goto LAB_10b733d70;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b733d7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b733d98; end: 10b733d9f; -[SCLensScheduleNamespaceData activeLensesMap] */

undefined8 FUN_10b733d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b733da0; end: 10b733da7; -[SCLensScheduleNamespaceData ttl] */

undefined8 FUN_10b733da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b733da8; end: 10b733daf; -[SCLensScheduleNamespaceData lastUpdateDate] */

undefined8 FUN_10b733da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b733db0; end: 10b733db7; -[SCLensScheduleNamespaceData noFillLensMetadata] */

undefined8 FUN_10b733db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b733db8; end: 10b733dbf; -[SCLensScheduleNamespaceData encryptedUserTrackData] */

undefined8 FUN_10b733db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b733dc0; end: 10b733dc7; -[SCLensScheduleNamespaceData lastMixerRequestId] */

undefined8 FUN_10b733dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b733dc8; end: 10b733dcf; -[SCLensScheduleNamespaceData fetchLocationMetadata] */

undefined8 FUN_10b733dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b733dd0; end: 10b733dd7; -[SCLensScheduleNamespaceData mixerRequestMetadata] */

undefined8 FUN_10b733dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


