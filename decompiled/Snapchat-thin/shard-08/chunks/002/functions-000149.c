/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e95624; end: 105e956df;  */

void FUN_105e95624(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105e956e0;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105e956e0; end: 105e95797;  */

void FUN_105e956e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108f0db0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0c0800(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105e95798; end: 105e9579f;  */

void FUN_105e95798(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_image_1125d7478);
  return;
}



/* Entry: 105e957a0; end: 105e957fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e957a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112738b70) != 0) {
      func_0x00010c1a9f00();
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e957fc; end: 105e959e3; -[SCImpalaProfileImageView loadBitmojiWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e957fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112738b74) = 1;
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b5938;
  _objc_alloc(PTR_PTR_1126b5938);
  uVar5 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  uVar4 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c050fa0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112738b58);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfa5420(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105e959e4; end: 105e95a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e959e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112738b70) != 0) {
      func_0x00010c1a9f00();
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e95a40; end: 105e95bc3; -[SCImpalaProfileImageView _imageFetchingRequestForPetImageURL:] */

void FUN_105e95a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33760(puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  puVar4 = PTR_PTR_1126b85a0;
  puVar3 = puVar2;
  func_0x00010bf220e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3,param_3,param_2,0x16);
  _objc_release(param_2);
  puVar5 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(param_1,*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar5,param_3,puVar4,puVar3);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e95bc4; end: 105e95bff; -[SCImpalaProfileImageView didTapShareProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e95bc4(long param_1)

{
  param_1 = param_1 + _DAT_112738b50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e95c00; end: 105e95c3b; -[SCImpalaProfileImageView didTapReportProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e95c00(long param_1)

{
  param_1 = param_1 + _DAT_112738b50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e95c3c; end: 105e95d9f; -[SCImpalaProfileImageView animateActionSheetVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e95c3c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_70 [48];
  
  lVar3 = (long)_DAT_112738b50;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c230b60();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  _CGAffineTransformMakeScale(auStack_70,0x3fe0000000000000,0x3fe0000000000000);
  if ((param_3 & 1) != 0) {
    func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_112738b64));
  }
  func_0x00010bf03460(0x3fd999999999999a,0,0x3fe8000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 105e95da0; end: 105e95e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e95da0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar2 = 0;
  }
  lVar1 = (long)_DAT_112738b64;
  func_0x00010c1677c0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_28 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,&uStack_50);
  return;
}



/* Entry: 105e95e10; end: 105e95e13;  */

void FUN_105e95e10(void)

{
  return;
}



/* Entry: 105e95e14; end: 105e95f93; -[SCImpalaProfileImageView touchMovedFrom:to:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e95e14(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = param_4;
  func_0x00010bf20c00();
  if (0.0 < dVar5) {
    param_1 = param_1 - param_3;
    param_2 = param_2 - param_4;
    dVar8 = SQRT(param_2 * param_2 + param_1 * param_1);
    func_0x00010bf20c00(param_5);
    dVar5 = 1.0 - dVar8 / dVar5;
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    dVar7 = 1.0;
    if (dVar5 <= 1.0) {
      dVar7 = dVar5;
    }
    func_0x00010c1677c0(dVar7,*(undefined8 *)(param_5 + _DAT_112738b68));
    pdVar1 = (double *)(param_5 + _DAT_112738b60);
    dVar5 = pdVar1[2];
    dVar8 = dVar5 - dVar8;
    dVar7 = *(double *)(param_5 + _DAT_112738b48 + 0x10) * 1.5;
    if (dVar8 <= dVar7) {
      dVar8 = dVar7;
    }
    if (dVar8 <= dVar5) {
      dVar5 = dVar8;
    }
    dVar8 = *pdVar1;
    dVar6 = pdVar1[1];
    lVar4 = (long)_DAT_112738b70;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
    lVar3 = (long)_DAT_112738b6c;
    func_0x00010c19f0e0(dVar8 - param_1,dVar6 - param_2,dVar5,dVar5,*(undefined8 *)(param_5 + lVar3)
                       );
    uVar2 = *(undefined8 *)(param_5 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar7 * 0.5);
    _objc_release(uVar2);
    func_0x00010c19f0e0(dVar8 - param_1,dVar6 - param_2,dVar5,dVar5,*(undefined8 *)(param_5 + lVar4)
                       );
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar7 * 0.5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105e95f94; end: 105e9609f; -[SCImpalaProfileImageView animateVisibility:completion:] */

void FUN_105e95f94(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar2 = 0x1c;
  if (param_3 == 0) {
    lVar2 = 4;
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(&DAT_112738b44 + lVar2));
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  uStack_38 = puVar1[3];
  uStack_40 = puVar1[2];
  uStack_58 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uStack_58 = 0;
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105e960a0;
  puStack_68 = &UNK_110866380;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e961c0;
  puStack_90 = &UNK_110842508;
  uStack_88 = param_4;
  lStack_60 = param_1;
  _objc_retain(param_4);
  func_0x00010bf03460(0x3fd999999999999a,0,0x3feb333333333333,0,puVar3,param_2,0x20000,&puStack_80,
                      &puStack_a8);
  _objc_release(uStack_88);
  _objc_release(param_4);
  return;
}



/* Entry: 105e960a0; end: 105e961bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e960a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  func_0x00010c1677c0(*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112738b68));
  lVar2 = (long)_DAT_112738b6c;
  func_0x00010c1677c0(*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  dVar4 = *(double *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar4 * 0.5);
  _objc_release(uVar1);
  lVar3 = (long)_DAT_112738b70;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  dVar4 = *(double *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar4 * 0.5);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  if (((*(byte *)(lVar2 + _DAT_112738b74) & 1) != 0) ||
     (*(char *)(lVar2 + _DAT_112738b5c) == '\x01')) {
    func_0x00010c1677c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar2 + lVar3));
    lVar2 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 105e961c0; end: 105e961cb;  */

void FUN_105e961c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105e961c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e961cc; end: 105e96267; -[SCImpalaProfileImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e961cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112738b64,0);
  _objc_storeStrong(param_1 + _DAT_112738b58,0);
  _objc_storeStrong(param_1 + _DAT_112738b54,0);
  _objc_destroyWeak(param_1 + _DAT_112738b50);
  _objc_storeStrong(param_1 + _DAT_112738b44,0);
  _objc_storeStrong(param_1 + _DAT_112738b68,0);
  _objc_storeStrong(param_1 + _DAT_112738b6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738b70,0);
  return;
}



/* Entry: 105e96268; end: 105e96297;  */

void FUN_105e96268(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2e998;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2e998,
                      &PTR____CFConstantStringClassReference_110e2e9b8,0);
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



/* Entry: 105e96298; end: 105e96373; -[SCSendToBusinessProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e96298(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_112738b78;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(0x113824988,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar3 = (long)_DAT_112738b7c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150a00();
  _objc_release(lVar1);
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7de50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPublicProfileOnboarding_11257d130);
    return;
  }
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c150a00();
  _objc_release(lVar3);
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be7dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPublicAttributionOnboard_11257d0f8)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentSpotlightOnboarding_11257d428);
  return;
}



/* Entry: 105e96374; end: 105e9659b; -[SCSendToBusinessProfileEntryPoint _presentPublicProfileOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e96374(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar1 = param_1 + _DAT_112738b80;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar7 = (long)_DAT_112738b84;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c5640;
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112738b88);
  lVar1 = param_1 + _DAT_112738b8c;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112738b78;
  _objc_loadWeakRetained(lVar10);
  lVar6 = lVar10;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048340(puVar4,param_2,lVar2,uVar9,lVar5,lVar3,lVar6);
  lVar8 = (long)_DAT_112738b90;
  uVar9 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar4;
  _objc_release(uVar9);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar10 = (long)_DAT_112738b7c;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar6 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar10);
  lVar1 = lVar10;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  func_0x00010c15d3e0(*(undefined8 *)(param_1 + lVar8),param_2,lVar5,lVar6,lVar7,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105e9659c; end: 105e967c7; -[SCSendToBusinessProfileEntryPoint _presentPublicAttributionOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9659c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126c5648;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112738b84;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112738b8c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112738b78;
  _objc_loadWeakRetained(lVar5);
  lVar12 = lVar5;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112738b80;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112738b94;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c580(puVar1,param_2,lVar2,lVar4,lVar12,lVar7,lVar9,
                      *(undefined8 *)(param_1 + _DAT_112738b88));
  lVar11 = (long)_DAT_112738b98;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  lVar12 = (long)_DAT_112738b7c;
  lVar2 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010bf0eb20();
  lVar5 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar5);
  lVar4 = lVar5;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar12;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010bfa0400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c6e0(uVar10,param_2,lVar6,lVar8,lVar4,lVar12);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105e967c8; end: 105e96a27; -[SCSendToBusinessProfileEntryPoint _presentSpotlightOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e967c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126c5650;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112738b84;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112738b8c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112738b78;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112738b80;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112738b94;
  _objc_loadWeakRetained(lVar9);
  lVar12 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c5a0(puVar1,param_2,lVar2,lVar4,lVar6,lVar8,lVar12,
                      *(undefined8 *)(param_1 + _DAT_112738b88));
  lVar11 = (long)_DAT_112738b9c;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  lVar12 = (long)_DAT_112738b7c;
  lVar2 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar2);
  lVar9 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c073920();
  lVar5 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf2e0a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar12;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010bfa0400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c6c0(uVar10,param_2,lVar9,lVar4,lVar6,lVar8,lVar12);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105e96a28; end: 105e96acf; -[SCSendToBusinessProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e96a28(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112738b88,0);
  _objc_destroyWeak(param_1 + _DAT_112738b78);
  _objc_destroyWeak(param_1 + _DAT_112738b8c);
  _objc_destroyWeak(param_1 + _DAT_112738b84);
  _objc_destroyWeak(param_1 + _DAT_112738b94);
  _objc_destroyWeak(param_1 + _DAT_112738b80);
  _objc_destroyWeak(param_1 + _DAT_112738b7c);
  _objc_storeStrong(param_1 + _DAT_112738b9c,0);
  _objc_storeStrong(param_1 + _DAT_112738b98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738b90,0);
  return;
}



/* Entry: 105e96ad0; end: 105e96c1b; -[SCPublicProfileAttributionNuxViewController initWithDelegate:valdiRuntimeProvider:userId:avatarId:webBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e96ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ed9b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112738ba0),param_3);
    lVar3 = (long)_DAT_112738ba4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738ba8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738bac;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112738bb0) = 0x10000000000000;
    lVar3 = (long)_DAT_112738bb4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e96c1c; end: 105e9706f; -[SCPublicProfileAttributionNuxViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e96c1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126ed9b0;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c5658;
  _objc_alloc();
  func_0x00010c05ac00();
  func_0x00010c16da00(puVar1);
  puVar2 = PTR_PTR_1126c5660;
  _objc_opt_new();
  _objc_initWeak(auStack_a8,param_1);
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1d2320(puVar2);
  lVar3 = param_1;
  func_0x00010beb15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224e20(puVar2);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126c5668;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112738ba4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar19 = (long)_DAT_112738bb8;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar4;
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar19);
  uStack_90 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar19);
  uStack_88 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar18);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be038c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e97070; end: 105e9709b;  */

void FUN_105e97070(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be038c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9709c; end: 105e970ef; -[SCPublicProfileAttributionNuxViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9709c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed9b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738bbc);
  *(undefined8 *)(param_1 + _DAT_112738bbc) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 105e970f0; end: 105e97187; -[SCPublicProfileAttributionNuxViewController presentTrayInContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e970f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0a08;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c055600();
  lVar3 = (long)_DAT_112738bbc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219e20(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c219c20(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c10c720(0x3fee666666666666,*(undefined8 *)(param_1 + lVar3),param_2,param_3,1,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e97188; end: 105e97203; -[SCPublicProfileAttributionNuxViewController _dismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e97188(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738bbc);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e97204;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105e97204; end: 105e9720f;  */

void FUN_105e97204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 105e97210; end: 105e9725b; -[SCPublicProfileAttributionNuxViewController _onTrayDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e97210(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738bbc);
  *(undefined8 *)(param_1 + _DAT_112738bbc) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112738ba0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c11a6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9725c; end: 105e9730f; -[SCPublicProfileAttributionNuxViewController _setupWebLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9725c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar3 = PTR_PTR_1126afe88;
  _objc_alloc(PTR_PTR_1126afe88);
  func_0x00010c062da0();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e97310; end: 105e9740b; -[SCPublicProfileAttributionNuxViewController _calculateTrayHeightIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105e97310(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *(double *)(param_1 + _DAT_112738bb0);
  dVar5 = ABS(dVar7 + -2.2250738585072014e-308);
  dVar6 = ABS(dVar7 + 2.2250738585072014e-308) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar6))) {
    bVar1 = dVar5 < dVar6;
  }
  if (bVar1) {
    lVar3 = (long)_DAT_112738bb8;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c295200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1560();
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar7 = 1.79769313486232e+308;
    func_0x00010c23d5a0(uVar4);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    dVar7 = dVar7 + dVar6;
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  return dVar7;
}



/* Entry: 105e9740c; end: 105e9741b; -[SCPublicProfileAttributionNuxViewController tray:positionDidChange:] */

void FUN_105e9740c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be6c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onTrayDismissed_1125789f0);
    return;
  }
  return;
}



/* Entry: 105e9741c; end: 105e9742f; -[SCPublicProfileAttributionNuxViewController tray:heightForPosition:] */

undefined8
FUN_105e9741c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  if (param_5 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__calculateTrayHeightIfNeeded_112553c08);
    return param_1;
  }
  return 0;
}



/* Entry: 105e97430; end: 105e97487; -[SCPublicProfileAttributionNuxViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e97430(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112738bb4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e97488; end: 105e97513; -[SCPublicProfileAttributionNuxViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e97488(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112738bb4,0);
  _objc_destroyWeak(param_1 + _DAT_112738ba0);
  _objc_storeStrong(param_1 + _DAT_112738bb8,0);
  _objc_storeStrong(param_1 + _DAT_112738bbc,0);
  _objc_storeStrong(param_1 + _DAT_112738bac,0);
  _objc_storeStrong(param_1 + _DAT_112738ba8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738ba4,0);
  return;
}



/* Entry: 105e97514; end: 105e97667; -[SCPublicProfileAttributionNuxWorkflow initWithUserInfoServices:valdiRuntimeProvider:featureSettingsService:snapProProfilesProvider:circumstanceEngine:webBrowsingScopeExposer:] */

undefined1 *
FUN_105e97514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed9b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e97668; end: 105e977eb; -[SCPublicProfileAttributionNuxWorkflow presentInUIContainer:source:completion:fallbackCompletion:] */

void FUN_105e97668(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010beb4da0();
  if ((uVar1 & 1) == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
  else {
    uVar1 = param_1;
    func_0x00010be34640();
    if ((param_4 == 0) || ((int)uVar1 != 0)) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5,0);
      }
    }
    else {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = param_3;
      _objc_release(uVar2);
      lVar3 = param_5;
      _objc_retainBlock();
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar3;
      _objc_release(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf1ad00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar5);
      puVar7 = PTR_PTR_1126c5670;
      _objc_alloc(PTR_PTR_1126c5670);
      func_0x00010c00b340();
      func_0x00010c10ea60();
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e977ec; end: 105e9784f; -[SCPublicProfileAttributionNuxWorkflow _shouldPresentAttributionNux] */

undefined8 FUN_105e977ec(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc4a0();
  if ((int)uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    func_0x00010be450e0();
    _objc_release(uVar1);
    if ((param_1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 105e97850; end: 105e9788f; -[SCPublicProfileAttributionNuxWorkflow _hasSeenSpotlightMapAttributionNux] */

undefined8 FUN_105e97850(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157e80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105e97890; end: 105e97933; -[SCPublicProfileAttributionNuxWorkflow _isUserOver18] */

bool FUN_105e97890(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf1a840(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010befe800(lVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  return 0x11 < lVar2;
}



/* Entry: 105e97934; end: 105e9798f; -[SCPublicProfileAttributionNuxWorkflow publicProfileAttributionNuxShouldDismiss] */

void FUN_105e97934(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa700();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e97980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,1);
    return;
  }
  return;
}



/* Entry: 105e97990; end: 105e97a07; -[SCPublicProfileAttributionNuxWorkflow .cxx_destruct] */

void FUN_105e97990(long param_1)

{
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



/* Entry: 105e97a08; end: 105e97b67; -[SCPublicProfileSpotlightNuxViewController initWithDelegate:valdiRuntimeProvider:userId:avatarId:isFriendsOnlyProfile:webBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e97a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ed9c0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112738be0),param_3);
    lVar3 = (long)_DAT_112738be4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738be8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738bec;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112738bf0) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112738bf4) = 0x10000000000000;
    lVar3 = (long)_DAT_112738bf8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e97b68; end: 105e97ff3; -[SCPublicProfileSpotlightNuxViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e97b68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126ed9c0;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c5678;
  _objc_alloc();
  func_0x00010c05ac00();
  func_0x00010c16da00(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1340(puVar1);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126c5680;
  _objc_opt_new();
  _objc_initWeak(auStack_a8,param_1);
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1d2320(puVar3);
  lVar4 = param_1;
  func_0x00010beb15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224e20(puVar3);
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126c5688;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112738be4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar19 = (long)_DAT_112738c00;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar2;
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar19);
  uStack_90 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar19);
  uStack_88 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar18);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (puVar1[_DAT_112738bf0] == '\x01') {
      puVar1[_DAT_112738bfc] = 1;
    }
    func_0x00010be038c0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e97ff4; end: 105e9804b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e97ff4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112738bf0) == '\x01') {
      *(undefined1 *)(param_1 + _DAT_112738bfc) = 1;
    }
    func_0x00010be038c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9804c; end: 105e9809f; -[SCPublicProfileSpotlightNuxViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9804c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed9c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738c04);
  *(undefined8 *)(param_1 + _DAT_112738c04) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 105e980a0; end: 105e9814f; -[SCPublicProfileSpotlightNuxViewController presentTrayInContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e980a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0a08;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c055600();
  lVar3 = (long)_DAT_112738c04;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219e20(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c219c20(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = 0x3fed70a3d70a3d71;
  if (*(char *)(param_1 + _DAT_112738bf0) == '\0') {
    uVar2 = 0x3fe0000000000000;
  }
  func_0x00010c10c720(uVar2,*(undefined8 *)(param_1 + lVar3),param_2,param_3,1,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e98150; end: 105e981cb; -[SCPublicProfileSpotlightNuxViewController _dismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e98150(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738c04);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e981cc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105e981cc; end: 105e981d7;  */

void FUN_105e981cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 105e981d8; end: 105e98233; -[SCPublicProfileSpotlightNuxViewController _onTrayDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e981d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738c04);
  *(undefined8 *)(param_1 + _DAT_112738c04) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112738be0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c11a7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e98234; end: 105e982e7; -[SCPublicProfileSpotlightNuxViewController _setupWebLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e98234(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar3 = PTR_PTR_1126afe88;
  _objc_alloc(PTR_PTR_1126afe88);
  func_0x00010c062da0();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e982e8; end: 105e98437; -[SCPublicProfileSpotlightNuxViewController _calculateTrayHeightIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105e982e8(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar6 = (long)_DAT_112738bf4;
  dVar7 = *(double *)(param_1 + lVar6);
  dVar8 = ABS(dVar7 + -2.2250738585072014e-308);
  dVar9 = 2.2250738585072014e-308;
  dVar10 = ABS(dVar7 + 2.2250738585072014e-308) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar10))) {
    bVar1 = dVar8 < dVar10;
  }
  if (bVar1) {
    if (*(char *)(param_1 + _DAT_112738bf0) == '\x01') {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      *(double *)(param_1 + lVar6) = dVar7 * 0.92;
    }
    else {
      lVar4 = (long)_DAT_112738c00;
      puVar2 = *(undefined **)(param_1 + lVar4);
      func_0x00010c295200(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a1560();
      uVar5 = *(undefined8 *)(param_1 + lVar4);
      lVar4 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar7 = 1.79769313486232e+308;
      func_0x00010c23d5a0(uVar5);
      lVar3 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c148fc0();
      *(double *)(param_1 + lVar6) = dVar7 + dVar9;
      _objc_release(lVar3);
      _objc_release(lVar4);
    }
    _objc_release(puVar2);
    dVar7 = *(double *)(param_1 + lVar6);
  }
  return dVar7;
}



/* Entry: 105e98438; end: 105e98447; -[SCPublicProfileSpotlightNuxViewController tray:positionDidChange:] */

void FUN_105e98438(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be6c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onTrayDismissed_1125789f0);
    return;
  }
  return;
}



/* Entry: 105e98448; end: 105e9845b; -[SCPublicProfileSpotlightNuxViewController tray:heightForPosition:] */

undefined8
FUN_105e98448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  if (param_5 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__calculateTrayHeightIfNeeded_112553c08);
    return param_1;
  }
  return 0;
}



/* Entry: 105e9845c; end: 105e984b3; -[SCPublicProfileSpotlightNuxViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9845c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112738bf8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e984b4; end: 105e9853f; -[SCPublicProfileSpotlightNuxViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e984b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112738bf8,0);
  _objc_destroyWeak(param_1 + _DAT_112738be0);
  _objc_storeStrong(param_1 + _DAT_112738c00,0);
  _objc_storeStrong(param_1 + _DAT_112738c04,0);
  _objc_storeStrong(param_1 + _DAT_112738bec,0);
  _objc_storeStrong(param_1 + _DAT_112738be8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738be4,0);
  return;
}



/* Entry: 105e98540; end: 105e98693; -[SCPublicProfileSpotlightNuxWorkflow initWithUserInfoServices:valdiRuntimeProvider:featureSettingsService:snapProUserProfileIdProvider:circumstanceEngine:webBrowsingScopeExposer:] */

undefined1 *
FUN_105e98540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed9c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e98694; end: 105e98887; -[SCPublicProfileSpotlightNuxWorkflow presentInUIContainer:isFriendsOnlyProfile:completion:cancelCompletion:fallbackCompletion:] */

void FUN_105e98694(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_1;
  func_0x00010beb4f80();
  if ((uVar2 & 1) == 0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
  }
  else {
    uVar2 = param_1;
    func_0x00010be40a20();
    if ((int)uVar2 == 0) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c157c00();
      iVar1 = (int)uVar4;
      _objc_release(uVar3);
    }
    uVar2 = param_1;
    func_0x00010be34660();
    if (((uVar2 & 1) == 0) && (iVar1 == 0)) {
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = param_3;
      _objc_release(uVar4);
      lVar5 = param_5;
      _objc_retainBlock();
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar5;
      _objc_release(uVar4);
      uVar4 = param_6;
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      _objc_release(uVar3);
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf1ad00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar7);
      puVar8 = PTR_PTR_1126c5690;
      _objc_alloc(PTR_PTR_1126c5690);
      func_0x00010c00b320();
      func_0x00010c10ea60();
      _objc_release(puVar8);
      _objc_release(uVar3);
      _objc_release(uVar6);
    }
    else if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e98888; end: 105e988c7; -[SCPublicProfileSpotlightNuxWorkflow _shouldPresentSpotlightNux] */

undefined8 FUN_105e98888(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c239b40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105e988c8; end: 105e98907; -[SCPublicProfileSpotlightNuxWorkflow _hasSeenSpotlightNux] */

undefined8 FUN_105e988c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157ea0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105e98908; end: 105e98947; -[SCPublicProfileSpotlightNuxWorkflow _isFriendsOnlyProfile] */

undefined8 FUN_105e98908(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073920();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105e98948; end: 105e989fb; -[SCPublicProfileSpotlightNuxWorkflow publicProfileSpotlightNuxDidDismissWithAccepted:] */

void FUN_105e98948(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be40a20();
  if (((param_3 & 1) == 0) && ((int)lVar2 != 0)) {
    if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e9897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
      return;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa740();
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010be40a20();
    if ((int)lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fa3c0();
      _objc_release(uVar1);
    }
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e989ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x10))(lVar2,1);
      return;
    }
  }
  return;
}



/* Entry: 105e989fc; end: 105e98a7f; -[SCPublicProfileSpotlightNuxWorkflow .cxx_destruct] */

void FUN_105e989fc(long param_1)

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



/* Entry: 105e98a80; end: 105e98ba3; -[SCSendToBusinessProfileFlowProvider initWithSnapProProfilesProvider:webBrowsingScopeExposer:valdiRuntimeProvider:bitmojiAvatarIdProvider:featureSettingsService:] */

undefined1 *
FUN_105e98a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ed9d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e98ba4; end: 105e98d27; -[SCSendToBusinessProfileFlowProvider sendToPublicProfileStoryIfAbleForPublicProfileId:userId:uiContainer:onComplete:] */

void FUN_105e98ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfd3260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e98d28; end: 105e98d7f;  */

void FUN_105e98d28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e98d80; end: 105e98f3f; -[SCSendToBusinessProfileFlowProvider _sendToPublicProfileStoryIfAble:publicProfileId:userId:uiContainer:onComplete:] */

void FUN_105e98d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26e7a0();
  _objc_release(uVar1);
  if (((int)uVar2 == 1) && (uVar1 = param_1, func_0x00010beb4ea0(), (int)uVar1 != 0)) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105e98f40;
    puStack_88 = &UNK_11084cbf0;
    uStack_80 = param_1;
    _objc_retain(param_6);
    uStack_78 = param_6;
    _objc_retain(param_5);
    uStack_70 = param_5;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_7);
    lStack_68 = param_7;
    func_0x0001000d76cc("APPSTORE",&puStack_a0);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
  }
  else if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e98f40; end: 105e98fff;  */

void FUN_105e98f40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010be7ea60(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105e99000; end: 105e9904f;  */

void FUN_105e99000(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea6960();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e99040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 105e99050; end: 105e9913b; -[SCSendToBusinessProfileFlowProvider _presentStandardProfileNuxInContainer:userId:onComplete:] */

void FUN_105e99050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c5698;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0601a0(puVar1,param_2,uVar4,param_4,uVar3,*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c10ea80(*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e9913c; end: 105e9917b; -[SCSendToBusinessProfileFlowProvider _shouldPresentNuxForProfileId:] */

uint FUN_105e9913c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157c40();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105e9917c; end: 105e991b3; -[SCSendToBusinessProfileFlowProvider _setPublicStoryNuxSeen] */

void FUN_105e9917c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e991b4; end: 105e991d3; -[SCSendToBusinessProfileFlowProvider webBrowserDidDismiss:] */

void FUN_105e991b4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105e991d4; end: 105e99233; -[SCSendToBusinessProfileFlowProvider .cxx_destruct] */

void FUN_105e991d4(long param_1)

{
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



/* Entry: 105e99234; end: 105e9934f; -[SCSendToPublicProfileTrayViewController initWithValdiRuntimeProvider:userId:avatarId:webBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e99234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ed9d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112738c44;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738c48;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738c4c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738c50;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e99350; end: 105e993a3; -[SCSendToPublicProfileTrayViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e99350(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed9d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738c54);
  *(undefined8 *)(param_1 + _DAT_112738c54) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 105e993a4; end: 105e997f7; -[SCSendToPublicProfileTrayViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e993a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126ed9d8;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c56a0;
  _objc_alloc();
  func_0x00010c05ac00();
  func_0x00010c16da00(puVar1);
  puVar2 = PTR_PTR_1126c56a8;
  _objc_opt_new();
  _objc_initWeak(auStack_a8,param_1);
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1d2320(puVar2);
  lVar3 = param_1;
  func_0x00010beb15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224e20(puVar2);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126c56b0;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112738c44);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar19 = (long)_DAT_112738c58;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar4;
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar19);
  uStack_90 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar19);
  uStack_88 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar18);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be038c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e997f8; end: 105e99823;  */

void FUN_105e997f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be038c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e99824; end: 105e998e3; -[SCSendToPublicProfileTrayViewController presentTrayInContainer:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e99824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + _DAT_112738c5c) = 0x10000000000000;
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112738c60);
  *(undefined8 *)(param_1 + _DAT_112738c60) = param_4;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  lVar3 = (long)_DAT_112738c54;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219e20(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c219c20(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c10c720(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar3),param_2,param_3,1,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e998e4; end: 105e9995f; -[SCSendToPublicProfileTrayViewController _dismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e998e4(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738c54);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e99960;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105e99960; end: 105e9996b;  */

void FUN_105e99960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 105e9996c; end: 105e999b3; -[SCSendToPublicProfileTrayViewController _onTrayDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e9996c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112738c60;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105e999b4; end: 105e99a67; -[SCSendToPublicProfileTrayViewController _setupWebLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e999b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar3 = PTR_PTR_1126afe88;
  _objc_alloc(PTR_PTR_1126afe88);
  func_0x00010c062da0();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e99a68; end: 105e99b63; -[SCSendToPublicProfileTrayViewController _calculateTrayHeightIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105e99a68(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *(double *)(param_1 + _DAT_112738c5c);
  dVar5 = ABS(dVar7 + -2.2250738585072014e-308);
  dVar6 = ABS(dVar7 + 2.2250738585072014e-308) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar6))) {
    bVar1 = dVar5 < dVar6;
  }
  if (bVar1) {
    lVar3 = (long)_DAT_112738c58;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c295200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1560();
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar7 = 1.79769313486232e+308;
    func_0x00010c23d5a0(uVar4);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    dVar7 = dVar7 + dVar6;
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  return dVar7;
}



/* Entry: 105e99b64; end: 105e99b73; -[SCSendToPublicProfileTrayViewController tray:positionDidChange:] */

void FUN_105e99b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be6c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onTrayDismissed_1125789f0);
    return;
  }
  return;
}



/* Entry: 105e99b74; end: 105e99b87; -[SCSendToPublicProfileTrayViewController tray:heightForPosition:] */

undefined8
FUN_105e99b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  if (param_5 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__calculateTrayHeightIfNeeded_112553c08);
    return param_1;
  }
  return 0;
}



/* Entry: 105e99b88; end: 105e99bdf; -[SCSendToPublicProfileTrayViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e99b88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112738c50;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e99be0; end: 105e99c6f; -[SCSendToPublicProfileTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e99be0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112738c50,0);
  _objc_storeStrong(param_1 + _DAT_112738c60,0);
  _objc_storeStrong(param_1 + _DAT_112738c58,0);
  _objc_storeStrong(param_1 + _DAT_112738c54,0);
  _objc_storeStrong(param_1 + _DAT_112738c4c,0);
  _objc_storeStrong(param_1 + _DAT_112738c48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738c44,0);
  return;
}



/* Entry: 105e99c70; end: 105e99daf; -[SCPublicProfileManagementPageLaunchHandler initWithPublicProfileManagementScopeExposer:snapProServices:navigationDelegate:deckServices:] */

undefined1 *
FUN_105e99c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ed9e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x48) = 0x20;
    puVar2 = PTR_PTR_1126c56b8;
    _objc_opt_class();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c56b8;
    _objc_opt_class();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x4c) = 10;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_5);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e99db0; end: 105e99f7f; -[SCPublicProfileManagementPageLaunchHandler launchWithPayload:completion:] */

void FUN_105e99db0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c56b8;
  _objc_opt_class(PTR_PTR_1126c56b8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010c116a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be21ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0643a0();
    func_0x000105e9b118();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf6a640(param_3);
    func_0x000105e9b15c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf684e0();
    uVar5 = param_3;
    func_0x00010bf68600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    uVar6 = param_3;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c23f9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c0ffd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010be48160(param_1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e99f80; end: 105e9a4ff; -[SCPublicProfileManagementPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_105e99f80(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar14 = param_3;
  func_0x00010c116d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = param_3;
  func_0x00010c116d60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar14;
  func_0x00010c1167c0();
  _objc_release(lVar14);
  if ((int)lVar3 == 1) {
    lVar14 = param_3;
    func_0x00010c116d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar14;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be21ba0(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar14);
    if (lVar4 != 0) {
      _objc_retain(lVar4);
      _objc_release(lVar2);
      lVar2 = lVar4;
    }
    _objc_release(lVar4);
  }
  lVar14 = lVar2;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar14;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar14);
  lVar14 = lVar2;
  if (lVar4 == 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    func_0x00010c1168c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar6;
    func_0x00010bf25020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar15);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar2 = param_3;
  func_0x00010c0dbb80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = (undefined *)0x0;
  if (lVar4 != 0) {
    lVar2 = param_3;
    func_0x00010c0dbb80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11c420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dad058;
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110db6d38;
    lVar2 = lVar14;
    lStack_98 = lVar3;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110e2e9f8;
    lVar15 = param_3;
    lStack_90 = lVar4;
    func_0x00010c116d60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110db6cf8;
    lVar6 = param_3;
    lStack_88 = lVar5;
    func_0x00010c116d60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bef1560();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e2ea18;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_80 = lVar7;
    lStack_78 = lVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_98,&ppuStack_c0,5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar15);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar8 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    func_0x00010c030320();
    _objc_release(puVar9);
    _objc_release(lVar3);
  }
  lVar2 = param_3;
  func_0x00010c116d60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0643a0();
  FUN_105e9b0f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c116d60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf6a640();
  func_0x000105e9b138();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c116d60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010bf684e0();
  iVar1 = (int)lVar15;
  if (1 < iVar1 - 2U) {
    if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
      lVar15 = 0;
    }
    else {
      lVar15 = 1;
    }
  }
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf68600();
  lVar6 = param_3;
  func_0x00010c116d60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf9f6c0();
  lVar10 = param_3;
  func_0x00010c116d60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0d6680();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be48160(param_1,param_2,lVar14,puVar8,lVar3,lVar4,lVar15,lVar5,(char)lVar7);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar8);
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (*(long *)(param_3 + 0x18) != 0) {
      func_0x00010bf6f440(*(long *)(param_3 + 0x18),param_2,0);
      uVar13 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_3 + 0x18) = 0;
      _objc_release(uVar13);
    }
    uVar13 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_3 + 8) = 0;
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = 0;
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_3 + 0x40) = 0;
    _objc_release(uVar13);
    lVar14 = *(long *)(param_3 + 0x28);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar14 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_3 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    return;
  }
  return;
}



/* Entry: 105e9a500; end: 105e9a587; -[SCPublicProfileManagementPageLaunchHandler impalaProfileDidComplete] */

void FUN_105e9a500(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bf6f440(*(long *)(param_1 + 0x18),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e9a588; end: 105e9a5f3; -[SCPublicProfileManagementPageLaunchHandler impalaProfileNeedsRemoval] */

void FUN_105e9a588(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e9a5f4;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 105e9a5f4; end: 105e9a5fb;  */

void FUN_105e9a5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfea070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_impalaProfileDidComplete_1125d81e0);
  return;
}



/* Entry: 105e9a5fc; end: 105e9a89b; -[SCPublicProfileManagementPageLaunchHandler _launchPublicProfileManagementPageWithProfileData:notification:routeName:defaultTab:deeplinkAction:deeplinkHandlingId:fadeInPresentation:deeplinkAdId:deeplinkSnapId:deeplinkSnapContentType:deeplinkPlaybackParams:] */

void FUN_105e9a5fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  lVar2 = param_1;
  func_0x00010bdecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2;
  _objc_release(uVar3);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e9a89c;
  puStack_90 = &UNK_110849680;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0311a0();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b0f38;
  _objc_alloc(PTR_PTR_1126b0f38);
  func_0x00010c0581c0();
  func_0x00010c18ac60();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e9a89c; end: 105e9a92b;  */

void FUN_105e9a89c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e9a92c; end: 105e9aae7; -[SCPublicProfileManagementPageLaunchHandler _getProfileWithId:] */

void FUN_105e9a92c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  uVar10 = 0;
  if (lVar1 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        uVar10 = *(ulong *)(lStack_128 + lVar12 * 8);
        uVar3 = uVar10;
        func_0x00010bf25000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        puVar8 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf25020();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105e9aa98;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = lVar2;
      puVar8 = &uStack_130;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
    uVar10 = 0;
  }
LAB_105e9aa98:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_retain(puVar8);
  _objc_alloc_init(puVar6);
  puVar7 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc();
  func_0x00010c0402e0();
  uVar9 = *(undefined8 *)(param_3 + 8);
  *(undefined **)(param_3 + 8) = puVar7;
  _objc_release(uVar9);
  func_0x00010c11c520(*(undefined8 *)(param_3 + 8),param_2,puVar8,0);
  _objc_release(puVar8);
  func_0x00010c1c8b80(*(undefined8 *)(param_3 + 8),param_2,0);
  func_0x00010c10ed60(*(undefined8 *)(param_3 + 0x10),param_2,*(undefined8 *)(param_3 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105e9aae8; end: 105e9ab7f; -[SCPublicProfileManagementPageLaunchHandler _attachUIContainerHelperWithViewController:] */

void FUN_105e9aae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc();
  func_0x00010c0402e0();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar3);
  func_0x00010c11c520(*(undefined8 *)(param_1 + 8),param_2,param_3,0);
  _objc_release(param_3);
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010c10ed60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


