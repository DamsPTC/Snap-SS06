/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067f14f4; end: 1067f1593; -[SCShareNotificationImageInfoActionDialog .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f14f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750da0,0);
  _objc_storeStrong(param_1 + _DAT_112750dbc,0);
  _objc_storeStrong(param_1 + _DAT_112750db8,0);
  _objc_storeStrong(param_1 + _DAT_112750dc8,0);
  _objc_storeStrong(param_1 + _DAT_112750db4,0);
  _objc_storeStrong(param_1 + _DAT_112750dc4,0);
  _objc_storeStrong(param_1 + _DAT_112750dc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750db0,0);
  return;
}



/* Entry: 1067f1594; end: 1067f16a7; +[SCShareNotificationImageInfoPresenter createPresenterWithNotificationPool:resourceDownloader:blizzardLogger:bitmojiAvatarScopeExposer:screenshotSharingConfiguration:copyLinkBlock:circumstanceEngine:offPlatformShareFeatureProvider:] */

void FUN_1067f1594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce3f8;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0300e0();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f16a8; end: 1067f1afb; -[SCShareNotificationImageInfoPresenter initWithNotificationPool:resourceDownloader:blizzardLogger:bitmojiAvatarScopeExposer:screenshotSharingConfiguration:copyLinkBlock:circumstanceEngine:offPlatformShareFeatureProvider:] */

undefined8 *
FUN_1067f16a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_80 = PTR_PTR_1126f3530;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = param_7;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_7;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar5;
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_initWeak(auStack_90,puVar1);
    puVar5 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_7;
    func_0x00010c26d960();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar4 = lVar3;
    func_0x00010c23b7c0();
    if (lVar4 == 0) {
      lVar4 = lVar3;
      func_0x00010c117060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar2 = 1;
      if (lVar4 == 0) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 3;
    }
    _objc_release(lVar3);
    puVar1[8] = uVar2;
    _objc_release(lVar3);
    puVar6 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar6;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47500();
    _objc_release(uVar2);
    lVar3 = param_7;
    func_0x00010c26d960();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c23b7c0();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      func_0x00010be0cba0(puVar1);
    }
    _objc_release(param_7);
    _objc_release(puVar5);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 1067f1afc; end: 1067f1bc3;  */

void FUN_1067f1afc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ce400;
  _objc_alloc(PTR_PTR_1126ce400);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22b040(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf688a0(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22b1e0(uVar6);
  func_0x00010c057c00(puVar2,param_2,uVar3,uVar4,uVar5,uVar6,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),lVar1,*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067f1bc4; end: 1067f1cd7;  */

void FUN_1067f1bc4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ce408;
  _objc_alloc(PTR_PTR_1126ce408);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c260dc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e53578;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53578,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26d960(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23b7c0();
  func_0x00010bf5d500(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf5d320();
  func_0x00010c0633e0(puVar1);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f1cd8; end: 1067f1e83; -[SCShareNotificationImageInfoPresenter _exposeBitmojiAvatarScope] */

void FUN_1067f1cd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c26d960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010c26d960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if ((lVar4 == 0) || (lVar4 = lVar2, func_0x00010c08fa60(), lVar4 == 0)) {
    puVar5 = PTR_PTR_1126ce410;
    func_0x00010c0fdb40(PTR_PTR_1126ce410,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126ce410;
    func_0x00010c244500(PTR_PTR_1126ce410,param_2,uVar1,lVar3,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfcb2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126c2ec0;
  _objc_alloc(PTR_PTR_1126c2ec0);
  func_0x00010c004820();
  puVar9 = PTR_PTR_1126ce418;
  _objc_alloc(PTR_PTR_1126ce418);
  func_0x00010c050a40();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067f1e84; end: 1067f1e8b; -[SCShareNotificationImageInfoPresenter containerView] */

void FUN_1067f1e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1067f1e8c; end: 1067f2443; -[SCShareNotificationImageInfoPresenter presentNotificationOverView:completion:] */

void FUN_1067f1e8c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1067f2444;
  puStack_b0 = &UNK_110849530;
  _objc_retain(param_5);
  ppuVar3 = &puStack_c8;
  uStack_a8 = param_5;
  _objc_retainBlock();
  ppuVar4 = ppuVar3;
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(param_2 + 0x60);
  *(undefined ***)(param_2 + 0x60) = ppuVar4;
  _objc_release(uVar15);
  if (param_4 == 0) {
    (*(code *)ppuVar3[2])();
  }
  else {
    _objc_initWeak(auStack_d0,param_2);
    puStack_f8 = puVar6;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_1067f2458;
    puStack_e0 = &UNK_110846320;
    _objc_copyWeak(auStack_d8,auStack_d0);
    func_0x00010be10320(param_2);
    if (*(long *)(param_2 + 0x40) == 1) {
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c26d960(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar5;
      func_0x00010c117060();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_100,auStack_d0);
      func_0x00010be13400(param_2);
      _objc_release(uVar15);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_100);
    }
    uVar15 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar15);
    _objc_release(puVar6);
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4c20();
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_4);
    _objc_release(uVar15);
    func_0x00010c1d4c20(param_4);
    func_0x00010c14da40(PTR__OBJC_CLASS___UIScreen_1126aea10);
    *(double *)(param_2 + 0x58) = param_1 + 16.0;
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    func_0x00010c274200(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010bf493c0(*(undefined8 *)(param_2 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = uVar5;
    _objc_release(uVar16);
    _objc_release(lVar8);
    _objc_release(uVar15);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    func_0x00010c274200(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = uVar5;
    _objc_release(uVar16);
    _objc_release(lVar8);
    _objc_release(uVar15);
    _objc_release(uVar7);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined **)(param_2 + 8);
    uStack_a0 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_4;
    func_0x00010c2793a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar11;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + 8);
    puStack_98 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010bf49420(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = *(undefined8 *)(param_2 + 0x50);
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar14);
    _objc_release(uVar16);
    _objc_release(uVar7);
    _objc_release(uVar13);
    _objc_release(puVar6);
    _objc_release(lVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar5);
    _objc_release(lVar8);
    _objc_release(uVar15);
    _objc_release(uVar9);
    iVar2 = (int)*(undefined8 *)(param_2 + 0x38);
    func_0x000108faa978();
    if (iVar2 != 0) {
      func_0x00010bdc8860(param_2);
    }
    func_0x00010be0bae0(param_2);
    func_0x00010be0baa0(param_2);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_d0);
  }
  _objc_release(ppuVar3);
  _objc_release(uStack_a8);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar6 + 0x20);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_d0);
  __Unwind_Resume();
  if (*(long *)(param_4 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067f2450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1067f2444; end: 1067f2457;  */

void FUN_1067f2444(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067f2450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1067f2458; end: 1067f249f;  */

void FUN_1067f2458(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067f24a0; end: 1067f253b;  */

void FUN_1067f24a0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf47500();
      _objc_release(uVar2);
      func_0x00010be0cba0(lVar1);
    }
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea6900();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067f253c; end: 1067f2597; -[SCShareNotificationImageInfoPresenter _setProfileImageFutureWithThumbnailImage:] */

void FUN_1067f253c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4180();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067f2598; end: 1067f26f7; -[SCShareNotificationImageInfoPresenter _fetchProfileImageWithURLString:completion:] */

void FUN_1067f2598(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    puVar2 = PTR_PTR_1126aebd8;
    func_0x00010c14e320(PTR_PTR_1126aebd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar4);
    _objc_retain(param_4);
    func_0x00010bf88c20(uVar3);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067f26f8; end: 1067f2793;  */

void FUN_1067f26f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1067f2794;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1067f2794; end: 1067f27a3;  */

void FUN_1067f2794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067f27a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1067f27a4; end: 1067f27ff; -[SCShareNotificationImageInfoPresenter _setButtonImageFutureWithButtomImage:] */

void FUN_1067f27a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174900();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067f2800; end: 1067f2933; -[SCShareNotificationImageInfoPresenter _fetchButtonIconWithCompletion:] */

void FUN_1067f2800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8,param_2,&PTR____CFConstantStringClassReference_110e605d8,
                      &PTR____CFConstantStringClassReference_110e605f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3,param_2,param_1,0x26);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067f2934;
  puStack_50 = &UNK_11085b810;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf88c20(uVar2,param_2,puVar1,puVar3,&puStack_68);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1067f2934; end: 1067f29cf;  */

void FUN_1067f2934(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1067f29d0;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1067f29d0; end: 1067f29df;  */

void FUN_1067f29d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067f29dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1067f29e0; end: 1067f2a97; -[SCShareNotificationImageInfoPresenter _executeDisplayAnimationWithView:] */

void FUN_1067f29e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c08cdc0(param_3);
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x50),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x48),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1067f2a98;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fd3333333333333,puVar1,param_2,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067f2a98; end: 1067f2a9f;  */

void FUN_1067f2a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1067f2aa0; end: 1067f2b8b; -[SCShareNotificationImageInfoPresenter _executeDismissAnimationAfterDelay] */

void FUN_1067f2aa0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1067f2b60;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retainBlock(uVar1);
  func_0x000100c749e0(0x40a00000,"APPSTORE",uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1067f2b8c; end: 1067f2c03; -[SCShareNotificationImageInfoPresenter _addSwipeToDismissGestureRecognizer] */

void FUN_1067f2b8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010c050900();
  func_0x00010c1c8320();
  func_0x00010c1c3c20(puVar1,param_2,1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067f2c04; end: 1067f2dc7; -[SCShareNotificationImageInfoPresenter _handlePanGestureRecognizer:] */

void FUN_1067f2c04(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_5);
  if ((*(byte *)(param_3 + 0x70) & 1) == 0) {
    lVar2 = param_5;
    func_0x00010c252440();
    if (lVar2 - 3U < 2) {
      lVar2 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(param_5,param_4,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      dVar5 = *(double *)(param_3 + 0x58);
      func_0x00010bf49220(*(undefined8 *)(param_3 + 0x48));
      bVar1 = true;
      if ((dVar5 - param_1 <= 30.0) && (bVar1 = false, !NAN(param_2))) {
        bVar1 = param_2 < -100.0;
      }
      if (bVar1) {
        func_0x00010bdda780(param_3);
        func_0x00010be0ba80(param_3);
      }
      else {
        func_0x00010be94180(param_3);
      }
    }
    else if (lVar2 == 2) {
      lVar2 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5,param_4,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010bf49220(*(undefined8 *)(param_3 + 0x48));
      param_1 = param_2 + param_1;
      func_0x00010becf660(param_1,param_3);
      uVar4 = *(undefined8 *)(param_3 + 0x48);
      dVar5 = param_1;
      func_0x00010bf49220(uVar4);
      func_0x00010c181140(dVar5 + param_1 * param_2,uVar4);
      lVar2 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219ba0(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_5,param_4,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else if (lVar2 == 1) {
      func_0x00010bdda780(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1067f2dc8; end: 1067f2de3; -[SCShareNotificationImageInfoPresenter _translationMultiplierForPositionY:] */

double FUN_1067f2dc8(double param_1,long param_2)

{
  double dVar1;
  
  param_1 = param_1 - *(double *)(param_2 + 0x58);
  dVar1 = 1.0;
  if (1.0 <= param_1) {
    dVar1 = param_1;
  }
  return 1.0 / dVar1;
}



/* Entry: 1067f2de4; end: 1067f2ee3; -[SCShareNotificationImageInfoPresenter _resetToShownState] */

void FUN_1067f2de4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010c181140(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x48));
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1067f2ee4;
  puStack_48 = &UNK_110842e18;
  uStack_40 = uVar2;
  _objc_copyWeak(auStack_68,auStack_38);
  func_0x00010bf03420(0x3fd3333333333333,puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 1067f2ee4; end: 1067f2f63;  */

void FUN_1067f2ee4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067f2f64; end: 1067f2f9f; -[SCShareNotificationImageInfoPresenter _cancelDismissBlock] */

void FUN_1067f2f64(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1067f2fa0; end: 1067f3033; -[SCShareNotificationImageInfoPresenter dismissPresenter] */

void FUN_1067f2fa0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067f3014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x60) + 0x10))();
    return;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    return;
  }
  func_0x00010bdda780(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeDismissAnimation_112560840);
  return;
}



/* Entry: 1067f3034; end: 1067f3157; -[SCShareNotificationImageInfoPresenter _executeDismissAnimation] */

void FUN_1067f3034(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x48),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x50),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar2);
  _objc_retainBlock();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1067f310c;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1067f3158;
  puStack_58 = &UNK_110842508;
  uStack_50 = uVar1;
  uStack_28 = uVar2;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                      &puStack_70);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1067f3158; end: 1067f3163;  */

void FUN_1067f3158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067f3160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1067f3164; end: 1067f318b; -[SCShareNotificationImageInfoPresenter debugInfo] */

void FUN_1067f3164(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067f318c; end: 1067f328f; -[SCShareNotificationImageInfoPresenter .cxx_destruct] */

void FUN_1067f318c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067f3290; end: 1067f338b; -[SCShareNotificationServicesEntryPoint _shareNotificationServiceWithNotificationPool:resourceDownloader:blizzardLogger:bitmojiAvatarScopeExposer:circumstanceEngine:offPlatformShareFeatureProvider:shareUpsellPresenterScopeServices:] */

void FUN_1067f3290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce428;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0300c0();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f338c; end: 1067f341f; -[SCShareNotificationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067f338c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750e24,0);
  _objc_storeStrong(param_1 + _DAT_112750e14,0);
  _objc_destroyWeak(param_1 + _DAT_112750e20);
  _objc_destroyWeak(param_1 + _DAT_112750e18);
  _objc_destroyWeak(param_1 + _DAT_112750e1c);
  _objc_destroyWeak(param_1 + _DAT_112750e10);
  _objc_destroyWeak(param_1 + _DAT_112750e0c);
  _objc_destroyWeak(param_1 + _DAT_112750e08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750e28);
  return;
}



/* Entry: 1067f3420; end: 1067f3463;  */

void FUN_1067f3420(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e60638;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e60638,
                      &PTR____CFConstantStringClassReference_110e60658,0);
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



/* Entry: 1067f3464; end: 1067f34f7;  */

void FUN_1067f3464(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1067f34f8;
  puStack_30 = &UNK_1108eb590;
  uStack_28 = param_1;
  _objc_retain(param_1);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f34f8; end: 1067f361b;  */

void FUN_1067f34f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15d600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf44740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067f361c; end: 1067f367f; -[SCPreferences shortcutsInteractionTimestampData] */

void FUN_1067f361c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e60678);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067f3680; end: 1067f368b; -[SCPreferences setShortcutsInteractionTimestampData:] */

void FUN_1067f3680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e60678);
  return;
}



/* Entry: 1067f368c; end: 1067f385b; -[SCShortcutPluginRanker initWithShortcutsInteractionFetcher:sendToExperimentConfiguration:myAIFFShortcutSlotOneEnabled:] */

undefined1 *
FUN_1067f368c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = &uStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_d8 = PTR_PTR_1126f3538;
  uStack_e0 = param_1;
  _objc_msgSendSuper2(&uStack_e0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110e20db8;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110e20eb8;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110e135d8;
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e20e78;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110dbbaf8;
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110e20ed8;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110dbb718;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e20e38;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110e20dd8;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dbb6d8;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e20e58;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e20e98;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e20ef8;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e20e18;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e81a98;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110de8358;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e1cd58;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    puVar3 = puVar4;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    FUN_1067f3464();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar6);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  func_0x00010c246ca0(puVar3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar3;
}



/* Entry: 1067f385c; end: 1067f38bb; -[SCShortcutPluginRanker rankPlugins:forSource:] */

void FUN_1067f385c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1067f38bc;
  puStack_20 = &UNK_110940880;
  uStack_18 = param_1;
  func_0x00010c246ca0(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067f38bc; end: 1067f3967;  */

bool FUN_1067f38bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_3);
  func_0x00010c22d640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0(uVar3);
  _objc_release(param_2);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = param_3;
  func_0x00010c22d640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfecde0(uVar2);
  _objc_release(uVar1);
  return uVar2 < uVar3;
}



/* Entry: 1067f3968; end: 1067f3a83; -[SCShortcutPluginRanker rankShortcutsByInteraction:forSource:] */

void FUN_1067f3968(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22d8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_4 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    uStack_48 = (char)uVar1;
  }
  else {
    uStack_48 = 0;
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1067f3a84;
  puStack_68 = &UNK_1109408b0;
  uStack_60 = uVar2;
  lStack_58 = param_1;
  lStack_50 = param_4;
  _objc_retain(uVar2);
  uVar1 = param_3;
  func_0x00010c246ca0(param_3,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_60);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067f3a84; end: 1067f3d07;  */

ulong FUN_1067f3a84(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar8 = param_2;
  func_0x00010c22d540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c22d640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = param_3;
  func_0x00010c22d540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c22d640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c0720c0();
  if ((uVar8 & 1) != 0) {
LAB_1067f3b60:
    uVar8 = 0xffffffffffffffff;
    goto LAB_1067f3bf0;
  }
  uVar8 = uVar2;
  func_0x00010c0720c0();
  if ((uVar8 & 1) != 0) {
LAB_1067f3b78:
    uVar8 = 1;
    goto LAB_1067f3bf0;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar8 = uVar1;
    func_0x00010c0720c0();
    if ((uVar8 & 1) != 0) goto LAB_1067f3b60;
    uVar8 = uVar2;
    func_0x00010c0720c0();
    if ((uVar8 & 1) != 0) goto LAB_1067f3b78;
  }
  _objc_retain(&PTR____CFConstantStringClassReference_110e20e98);
  uVar8 = uVar1;
  func_0x00010c0720c0();
  if ((uVar8 & 1) == 0) {
    uVar8 = uVar2;
    func_0x00010c0720c0();
    if ((uVar8 & 1) == 0) {
      if ((lVar3 != 0) && (uVar4 == 0)) goto LAB_1067f3bcc;
      if ((lVar3 == 0) && (uVar4 != 0)) goto LAB_1067f3be4;
      if ((lVar3 == 0) || (uVar4 == 0)) {
        uVar8 = *(ulong *)(param_1 + 0x28);
        if (*(long *)(param_1 + 0x30) == 0) {
          uVar7 = *(undefined8 *)(uVar8 + 0x20);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bea09c0(uVar8);
          _objc_release(uVar7);
        }
        else {
          uVar8 = *(ulong *)(uVar8 + 8);
          _objc_retain(uVar8);
          uVar5 = uVar8;
          func_0x00010bfecde0();
          uVar6 = uVar8;
          func_0x00010bfecde0();
          _objc_release(uVar8);
          if ((uVar5 != 0) && (uVar6 == 0)) goto LAB_1067f3bcc;
          if ((uVar5 == 0) && (uVar6 != 0)) goto LAB_1067f3be4;
          uVar8 = 0;
          if ((uVar5 != 0) && (uVar6 != 0)) {
            uVar8 = (ulong)(uVar6 < uVar5);
          }
        }
      }
      else {
        uVar8 = uVar4;
        func_0x00010bf433a0(uVar4);
      }
    }
    else {
LAB_1067f3be4:
      uVar8 = 1;
    }
  }
  else {
LAB_1067f3bcc:
    uVar8 = 0xffffffffffffffff;
  }
  _objc_release(&PTR____CFConstantStringClassReference_110e20e98);
LAB_1067f3bf0:
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar8;
}



/* Entry: 1067f3d08; end: 1067f3da7; -[SCShortcutPluginRanker rankShortcuts:withOrder:forSource:] */

void FUN_1067f3d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1067f3da8;
  puStack_48 = &UNK_1109408e0;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c246ca0(param_3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1067f3da8; end: 1067f3dbb;  */

void FUN_1067f3da8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea09d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendToCompareShortcut_withShort_112585c18,
             param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1067f3dbc; end: 1067f3f2f; -[SCShortcutPluginRanker _sendToCompareShortcut:withShortcut:withOrder:] */

long FUN_1067f3dbc(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  ulong param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = param_3;
  func_0x00010c22d540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c082600();
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c22d540(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x00010c22d640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e60698;
  }
  _objc_release(ppuVar1);
  ppuVar1 = param_4;
  func_0x00010c22d540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c082600();
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar4 = param_4;
    func_0x00010c22d540(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c22d640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e60698;
  }
  _objc_release(ppuVar1);
  uVar5 = param_5;
  func_0x00010bfecde0(param_5,param_2,ppuVar2);
  uVar6 = param_5;
  func_0x00010bfecde0(param_5,param_2,ppuVar3);
  uVar8 = (uint)(uVar6 == 0x7fffffffffffffff);
  if (uVar5 < uVar6) {
    uVar8 = 1;
  }
  lVar7 = -(ulong)uVar8;
  if (uVar6 < uVar5 || uVar5 == 0x7fffffffffffffff) {
    lVar7 = 1;
  }
  _objc_release(param_5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar7;
}



/* Entry: 1067f3f30; end: 1067f3f83; -[SCShortcutPluginRanker .cxx_destruct] */

void FUN_1067f3f30(long param_1)

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



/* Entry: 1067f3f84; end: 1067f4223; -[SCShortcutsDataFetcherImpl initWithSendToListsDataFetcher:circumstanceEngine:sendToExperimentConfiguration:shortcutsDataPluginsFuture:performerProvider:shortcutsInteractionMutator:pluginRanker:myAISendToRankingVariant:] */

undefined8 *
FUN_1067f3f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f3540;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    puVar1[9] = param_10;
    puVar3 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1067f4224;
    puStack_90 = &UNK_1108429c8;
    _objc_retain(param_4);
    uStack_88 = param_4;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_b0,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b8,auStack_b0);
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    uVar2 = param_5;
    FUN_1067f3464();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067f4224; end: 1067f42ab;  */

void FUN_1067f4224(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc77b8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1067f42ac; end: 1067f43d7; -[SCShortcutsDataFetcherImpl shortcutsForSource:] */

void FUN_1067f42ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25ffe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067f43d8; end: 1067f4423;  */

void FUN_1067f43d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb23a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067f4424; end: 1067f454f; -[SCShortcutsDataFetcherImpl shortcutResultsForSource:] */

void FUN_1067f4424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25ffe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067f4550; end: 1067f459b;  */

void FUN_1067f4550(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb23a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067f459c; end: 1067f46ef; -[SCShortcutsDataFetcherImpl shortcutRecipientsForShortcutId:source:] */

void FUN_1067f459c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25ffe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067f46f0; end: 1067f473b;  */

void FUN_1067f46f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb22e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067f473c; end: 1067f4813; -[SCShortcutsDataFetcherImpl pausePluginUpdatesForSource:] */

void FUN_1067f473c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1067f4814; end: 1067f4847;  */

void FUN_1067f4814(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067f4848; end: 1067f491f; -[SCShortcutsDataFetcherImpl resumePluginUpdatesForSource:] */

void FUN_1067f4848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1067f4920; end: 1067f4953;  */

void FUN_1067f4920(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067f4954; end: 1067f495f; -[SCShortcutsDataFetcherImpl shortcutWasDeselected:source:] */

void FUN_1067f4954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be979b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__routeSelectionToPluginForShortc_112583808,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_110940930);
  return;
}



/* Entry: 1067f4960; end: 1067f49b7;  */

void FUN_1067f4960(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5630);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c22d5a0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067f49b8; end: 1067f49c3; -[SCShortcutsDataFetcherImpl shortcutWasSelected:source:] */

void FUN_1067f49b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be979b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__routeSelectionToPluginForShortc_112583808,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_110940950);
  return;
}



/* Entry: 1067f49c4; end: 1067f4a1b;  */

void FUN_1067f49c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5630);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c22d5c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067f4a1c; end: 1067f4a1f; -[SCShortcutsDataFetcherImpl registeredPluginsForSource:] */

void FUN_1067f4a1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb22d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shortcutPluginsForSource__11258a258);
  return;
}



/* Entry: 1067f4a20; end: 1067f4a5f; -[SCShortcutsDataFetcherImpl _pausePluginObservableUpdatesWithSource:] */

void FUN_1067f4a20(undefined8 param_1)

{
  func_0x00010beb22c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff60();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067f4a60; end: 1067f4b4f;  */

void FUN_1067f4a60(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010c0f6140(*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010beb22c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff60();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067f4b50; end: 1067f4b8f; -[SCShortcutsDataFetcherImpl _resumePluginObservableUpdatesWithSource:] */

void FUN_1067f4b50(undefined8 param_1)

{
  func_0x00010beb22c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff60();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067f4b90; end: 1067f4c7f;  */

void FUN_1067f4b90(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_168 [8];
  undefined1 *puStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar4 = auStack_c8;
  uVar5 = 0x10;
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        func_0x00010c13da60(*(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar4 = auStack_c8;
      uVar5 = 0x10;
      lVar1 = param_2;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_158,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_168,auStack_158);
  puStack_160 = puVar4;
  _objc_retain(puVar3);
  _objc_retain(uVar5);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_158);
  _objc_release(uVar5);
  _objc_release(puVar3);
  return;
}



/* Entry: 1067f4c80; end: 1067f4daf; -[SCShortcutsDataFetcherImpl _routeSelectionToPluginForShortcutId:source:action:] */

void FUN_1067f4c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1067f4db0; end: 1067f4e83;  */

void FUN_1067f4db0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010beb22c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1067f4e84;
    puStack_48 = &UNK_110858190;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = uVar4;
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x00010c25ff60(lVar2,param_2,&puStack_60);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1067f4e84; end: 1067f4fd3;  */

void FUN_1067f4e84(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_2);
  puVar7 = auStack_e8;
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar2 = uVar8;
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = *(undefined8 **)(param_1 + 0x20);
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar8);
          goto LAB_1067f4f88;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar7 = auStack_e8;
      lVar1 = param_2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_1067f4f88:
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    lVar1 = param_2;
    func_0x00010bdf7640(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010be75540(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_1067f51cc;
    puStack_1a8 = &UNK_1109409b0;
    _objc_retain(puVar6);
    lVar10 = lVar1;
    puStack_1a0 = (undefined1 *)puVar6;
    puStack_198 = puVar7;
    func_0x00010bf41860(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010beb3c40();
    lVar5 = lVar10;
    if ((int)lVar4 == 0) {
      _objc_retain(lVar10);
    }
    else {
      _objc_initWeak(auStack_1c8,param_2);
      _objc_copyWeak(auStack_1d0,auStack_1c8);
      func_0x00010c0b8600(lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_1d0);
      _objc_destroyWeak(auStack_1c8);
    }
    _objc_retain(puVar6);
    lVar4 = lVar5;
    func_0x00010c0b8600(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar10);
    _objc_release(puStack_1a0);
    _objc_release(puVar6);
    _objc_release(lVar9);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return;
  }
  return;
}



/* Entry: 1067f4fd4; end: 1067f51cb; -[SCShortcutsDataFetcherImpl _shortcutRecipientsForShortcutId:source:] */

void FUN_1067f4fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf7640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be75540(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1067f51cc;
  puStack_78 = &UNK_1109409b0;
  _objc_retain(param_3);
  uVar3 = uVar1;
  uStack_70 = param_3;
  uStack_68 = param_4;
  func_0x00010bf41860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010beb3c40();
  uVar5 = uVar3;
  if ((int)uVar4 == 0) {
    _objc_retain(uVar3);
  }
  else {
    _objc_initWeak(auStack_98,param_1);
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010c0b8600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  _objc_retain(param_3);
  uVar4 = uVar5;
  func_0x00010c0b8600(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1067f51cc; end: 1067f537f;  */

void FUN_1067f51cc(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_2;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  puVar1 = param_2;
  if (puVar2 == (undefined *)0x0) {
    lVar3 = param_3;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      func_0x00010bf51e00(param_2);
    }
    else {
      puVar1 = PTR_PTR_1126ce430;
      _objc_alloc(PTR_PTR_1126ce430);
      func_0x00010c045f00();
    }
  }
  else {
    _objc_retain(param_2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f5380; end: 1067f53a7;  */

void FUN_1067f5380(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1067f53a8; end: 1067f53b3; -[SCShortcutsDataFetcherImpl _shouldFilterRecipientsForSource:] */

bool FUN_1067f53a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 1067f53b4; end: 1067f53d3; -[SCShortcutsDataFetcherImpl _filterTeamSnapchatWithRecipients:] */

void FUN_1067f53b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110940a60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067f53d4; end: 1067f5497;  */

undefined1 FUN_1067f53d4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010c0c0000(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1067f5498; end: 1067f54d7;  */

void FUN_1067f5498(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,&PTR____CFConstantStringClassReference_110e12b38);
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (byte)param_2 ^ 1;
  return;
}



/* Entry: 1067f54d8; end: 1067f565f; -[SCShortcutsDataFetcherImpl _customAndNonPluginShortcutRecipientsObservableForShortcutId:source:] */

void FUN_1067f54d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09a240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uVar6 = uVar5;
  func_0x00010c0b8600(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1067f5660; end: 1067f579f;  */

void FUN_1067f5660(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1067f57a0;
    uStack_40 = 0x1067f57b0;
    uStack_38 = 0;
    func_0x00010c0bf0a0(param_2);
    puVar1 = PTR_PTR_1126ce430;
    _objc_alloc(PTR_PTR_1126ce430);
    func_0x00010c045f00();
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f57a0; end: 1067f57d3;  */

void FUN_1067f57a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1067f57d4; end: 1067f5817;  */

void FUN_1067f57d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beb2320(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067f5818; end: 1067f5923; -[SCShortcutsDataFetcherImpl _pluginShortcutRecipientsObservableForShortcutId:source:] */

void FUN_1067f5818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb22c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uVar2 = uVar1;
  uStack_40 = param_4;
  func_0x00010bfb2660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067f5924; end: 1067f5aeb;  */

void FUN_1067f5924(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1067f5aec;
    puStack_70 = &UNK_11090a328;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    puVar2 = param_2;
    uStack_68 = uVar6;
    func_0x0001006372a4(param_2,&puStack_88);
    puVar3 = puVar2;
    func_0x000100504554();
    puVar5 = puVar3;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = puVar3;
      func_0x00010bfb1920(puVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      puVar5 = puVar4;
      func_0x00010c0b8600(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067f5aec; end: 1067f5b33;  */

undefined8 FUN_1067f5aec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c22d640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1067f5b34; end: 1067f5b3f;  */

void FUN_1067f5b34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c122f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_recipientsForSource__112626600,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1067f5b40; end: 1067f5b67;  */

void FUN_1067f5b40(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1067f5b68; end: 1067f5d73; -[SCShortcutsDataFetcherImpl _shortcutsForSource:shouldReturnRecipientCount:] */

void FUN_1067f5b68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010bdf7600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  if ((param_3 == 1) || ((param_3 != 2 && ((int)uVar2 != 0)))) {
    lVar5 = param_1;
    func_0x00010be75560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  else {
    lVar6 = param_1;
    func_0x00010be75560(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_58,param_1);
  lStack_60 = param_3;
  _objc_copyWeak(auStack_68,auStack_58);
  lVar5 = lVar1;
  func_0x00010bf41860(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1067f5d74; end: 1067f5d9b;  */

void FUN_1067f5d74(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1067f5d9c; end: 1067f5eaf;  */

void FUN_1067f5d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_110940b90);
  uVar3 = param_2;
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_110940bb0);
  _objc_release(param_2);
  lVar5 = *(long *)(param_1 + 0x28);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  if (lVar5 == 0) {
    func_0x00010bea0e60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bebe1c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_1);
  lVar5 = lVar4;
  func_0x00010bf51e00(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1067f5eb0; end: 1067f5f93;  */

uint FUN_1067f5eb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c22d540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c082600();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1067f5f94; end: 1067f5f9b;  */

void FUN_1067f5f94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shortcut_112668f78);
  return;
}



/* Entry: 1067f5f9c; end: 1067f60bb; -[SCShortcutsDataFetcherImpl _sortShortcutsWithPluginShortcuts:nonPluginContextualShortcuts:customShortcuts:source:] */

void FUN_1067f5f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010befa160();
  _objc_release(param_3);
  func_0x00010befa160(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010befa160(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((param_6 == 1) || ((param_6 != 2 && ((int)uVar3 != 0)))) {
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x00010c11f660(puVar4,param_2,puVar1,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
  }
  else {
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067f60bc; end: 1067f632f; -[SCShortcutsDataFetcherImpl _sendToSortShortcutsWithPluginShortcuts:nonPluginContextualShortcuts:customShortcuts:source:] */

void FUN_1067f60bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  if (*(long *)(param_1 + 0x48) - 1U < 2) {
    lVar2 = param_3;
    func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110940c60);
    lVar7 = param_3;
    func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110940c80);
    _objc_release(param_3);
    lVar3 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    if (*(long *)(param_1 + 0x48) == 1) {
      if (lVar3 != 0) {
        func_0x00010befa120(puVar1);
      }
      func_0x00010befa160(puVar1);
    }
    else {
      func_0x00010befa160(puVar1);
      if (lVar3 != 0) {
        func_0x00010befa120(puVar1);
      }
    }
    func_0x00010befa160(puVar1);
    _objc_release(lVar3);
    param_3 = lVar2;
  }
  else {
    func_0x00010befa160(puVar1);
    func_0x00010befa160(puVar1);
  }
  _objc_release(param_3);
  func_0x00010befa160(puVar1);
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  puVar8 = puVar1;
  if ((param_6 == 1) || ((param_6 != 2 && ((int)uVar5 != 0)))) {
    puVar6 = *(undefined **)(param_1 + 0x20);
    func_0x00010c11f660(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010c0d3c80();
    _objc_release(puVar6);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = lVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        puVar6 = *(undefined **)(param_1 + 0x20);
        func_0x00010c11f640(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c0d3c80();
        _objc_release(puVar1);
        _objc_release(puVar6);
      }
    }
    _objc_release(lVar7);
    _objc_retain(puVar8);
    puVar1 = puVar8;
  }
  _objc_release(puVar8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067f6330; end: 1067f63b7;  */

bool FUN_1067f6330(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c22d540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c27dd80();
  _objc_release(param_2);
  return lVar1 != 0xd;
}



/* Entry: 1067f63b8; end: 1067f6497; -[SCShortcutsDataFetcherImpl _shortcutPluginsForSource:] */

void FUN_1067f63b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126ae6b8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc420(puVar3,param_2,uVar1,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067f6498; end: 1067f658b;  */

void FUN_1067f6498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1067f57a0;
  uStack_30 = 0x1067f57b0;
  puStack_28 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067f658c; end: 1067f6607;  */

void FUN_1067f658c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1067f6608;
  puStack_30 = &UNK_110940ca0;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001006372a4(param_2,&puStack_48);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


