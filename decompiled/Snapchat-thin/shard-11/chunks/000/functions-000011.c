/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108032840; end: 108032847; -[SCPreviewSnapSenderServices snapSenderFactory] */

undefined8 FUN_108032840(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108032848; end: 108032853; -[SCPreviewSnapSenderServices .cxx_destruct] */

void FUN_108032848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108032854; end: 10803296b; -[SCSelectedStoriesModel initWithAddToStoryEnabled:fanPassSelected:fanPassBusinessId:businessProfilesSelected:customStoriesSelected:ourStorySelected:] */

undefined1 *
FUN_108032854(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fc2c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10803296c; end: 108032973; -[SCSelectedStoriesModel addToStoryEnabled] */

undefined1 FUN_10803296c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108032974; end: 10803297b; -[SCSelectedStoriesModel fanPassSelected] */

undefined1 FUN_108032974(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10803297c; end: 108032983; -[SCSelectedStoriesModel fanPassBusinessId] */

undefined8 FUN_10803297c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108032984; end: 10803298b; -[SCSelectedStoriesModel businessProfilesSelected] */

undefined8 FUN_108032984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10803298c; end: 108032993; -[SCSelectedStoriesModel customStoriesSelected] */

undefined8 FUN_10803298c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108032994; end: 10803299b; -[SCSelectedStoriesModel ourStorySelected] */

undefined8 FUN_108032994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10803299c; end: 1080329e3; -[SCSelectedStoriesModel .cxx_destruct] */

void FUN_10803299c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1080329e4; end: 108032aff; -[SCStoriesBusinessStoryNUXViewController initWithValdiRuntimeProvider:userId:avatarId:webBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1080329e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126fc2d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127736dc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127736e0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127736e4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127736e8;
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



/* Entry: 108032b00; end: 108032f53; -[SCStoriesBusinessStoryNUXViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108032b00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
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
  puStack_98 = PTR_PTR_1126fc2d0;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c56a0;
  _objc_alloc();
  func_0x00010c05ac00();
  puStack_e0 = puVar1;
  func_0x00010c16da00(puVar1);
  puVar1 = PTR_PTR_1126c56a8;
  _objc_opt_new();
  puStack_d8 = puVar1;
  _objc_initWeak(auStack_a8,param_1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_108032f54;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1d2320(puStack_d8);
  lVar2 = param_1;
  func_0x00010beb15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224e20(puStack_d8);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c56b0;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127736dc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar10 = (long)_DAT_1127736ec;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_f0 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uStack_f0;
  lStack_f8 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_100 = uVar4;
  uStack_90 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_110 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uStack_110;
  lStack_118 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  uStack_88 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  uStack_80 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_120);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lStack_118);
  _objc_release(lStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_100);
  _objc_release(lStack_f8);
  _objc_release(lStack_e8);
  _objc_release(uStack_f0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puStack_d8);
  puVar1 = puStack_e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  puVar8 = puVar1;
  __Unwind_Resume(puVar1);
  pcStack_128 = FUN_108032f54;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_108032fe4;
  puStack_150 = &UNK_1108434b0;
  uStack_140 = uVar5;
  puStack_138 = puVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_148,puVar8 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_168);
  _objc_destroyWeak(auStack_148);
  return;
}



/* Entry: 108032f54; end: 108032fe3;  */

void FUN_108032f54(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108032fe4;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108032fe4; end: 10803300f;  */

void FUN_108032fe4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be038c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108033010; end: 1080330cf; -[SCStoriesBusinessStoryNUXViewController presentTrayInContainer:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108033010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + _DAT_1127736f0) = 0x10000000000000;
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127736f4);
  *(undefined8 *)(param_1 + _DAT_1127736f4) = param_4;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  lVar3 = (long)_DAT_1127736f8;
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



/* Entry: 1080330d0; end: 1080330e3; -[SCStoriesBusinessStoryNUXViewController _dismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080330d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127736f8),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 1080330e4; end: 10803312b; -[SCStoriesBusinessStoryNUXViewController _onTrayDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080330e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127736f4;
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



/* Entry: 10803312c; end: 1080331df; -[SCStoriesBusinessStoryNUXViewController _setupWebLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803312c(void)

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



/* Entry: 1080331e0; end: 1080332db; -[SCStoriesBusinessStoryNUXViewController _calculateTrayHeightIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1080331e0(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *(double *)(param_1 + _DAT_1127736f0);
  dVar5 = ABS(dVar7 + -2.2250738585072014e-308);
  dVar6 = ABS(dVar7 + 2.2250738585072014e-308) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar6))) {
    bVar1 = dVar5 < dVar6;
  }
  if (bVar1) {
    lVar3 = (long)_DAT_1127736ec;
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



/* Entry: 1080332dc; end: 1080332eb; -[SCStoriesBusinessStoryNUXViewController tray:positionDidChange:] */

void FUN_1080332dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be6c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onTrayDismissed_1125789f0);
    return;
  }
  return;
}



/* Entry: 1080332ec; end: 1080332ff; -[SCStoriesBusinessStoryNUXViewController tray:heightForPosition:] */

undefined8
FUN_1080332ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 108033300; end: 108033357; -[SCStoriesBusinessStoryNUXViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108033300(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127736e8;
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



/* Entry: 108033358; end: 1080333e7; -[SCStoriesBusinessStoryNUXViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108033358(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127736e8,0);
  _objc_storeStrong(param_1 + _DAT_1127736f4,0);
  _objc_storeStrong(param_1 + _DAT_1127736ec,0);
  _objc_storeStrong(param_1 + _DAT_1127736f8,0);
  _objc_storeStrong(param_1 + _DAT_1127736e4,0);
  _objc_storeStrong(param_1 + _DAT_1127736e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127736dc,0);
  return;
}



/* Entry: 1080333e8; end: 10803341f; -[SCStoriesOnboardingHelper initWithCustomStoriesOnboardingPresenter:mediaSupportsSpotlightSection:circumstanceEngine:featureSettingsService:viewController:webBrowsingScopeExposer:storyPrivacySettingManager:ourStoriesOnboardingManager:ourStoriesAttributionManager:previewTooltipsProvider:quickPostTooltipService:sendToOnboardingScopeExposer:] */

void FUN_1080333e8(void)

{
  func_0x00010c007f80();
  return;
}



/* Entry: 108033420; end: 1080337d3; -[SCStoriesOnboardingHelper initWithCustomStoriesOnboardingPresenter:mediaSupportsSpotlightSection:circumstanceEngine:featureSettingsService:viewController:webBrowsingScopeExposer:webBrowsingScopeServices:storyPrivacySettingManager:ourStoriesOnboardingManager:ourStoriesAttributionManager:previewTooltipsProvider:quickPostTooltipService:sendToOnboardingScopeExposer:sendToOnboardingScopeServices:] */

undefined8 *
FUN_108033420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
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
  puStack_68 = PTR_PTR_1126fc2d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar3 = puVar1[8];
    puVar1[8] = param_13;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[2];
    puVar1[2] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bdb40);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 1,param_7);
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    func_0x00010c1e1580(puVar1[4]);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_16);
    _objc_retain(param_6);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_6;
    _objc_release(uVar2);
  }
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1080337d4; end: 1080337e3;  */

void FUN_1080337d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf623f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_customStoryMembersScopeLauncher_1125b62a0);
  return;
}



/* Entry: 1080337e4; end: 1080338f7; -[SCStoriesOnboardingHelper showPrivateStoryPreselectionOnboarding] */

void FUN_1080337e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22f9e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = auStack_38;
    _objc_initWeak(puVar3,param_1);
    func_0x000108065044();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010806505c();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010be04780(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1080338f8; end: 10803394b;  */

void FUN_1080338f8(long param_1,int param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa2c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10803394c; end: 108033b4f; -[SCStoriesOnboardingHelper showOnboardingForMyStoriesWithCompletion:] */

void FUN_10803394c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb5f20();
  if ((uVar1 & 1) == 0) {
    param_2 = 1;
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  else {
    func_0x00010be38800(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25aac0();
    _objc_release(uVar2);
    uVar1 = param_1;
    func_0x00010be1ec00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aed70;
    uVar3 = uVar1;
    func_0x000108edeaf8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar6 = puVar5;
    func_0x000108ede660();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    lVar8 = param_1 + 8;
    _objc_loadWeakRetained();
    func_0x00010c10eda0();
    _objc_release(lVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x40);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190780();
  _objc_release(uVar2);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108033b50; end: 108033baf;  */

void FUN_108033b50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190780();
  _objc_release(uVar1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108033bb0; end: 108033dcb; -[SCStoriesOnboardingHelper showOnboardingForOurStoriesWithCompletion:] */

void FUN_108033bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar6);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    _objc_initWeak(auStack_68,param_1);
    lVar3 = param_1 + 0x70;
    _objc_loadWeakRetained();
    if ((lVar3 == 0) || (lVar6 == 0)) {
      func_0x00010c237620(param_1);
    }
    else {
      puVar4 = PTR_PTR_1126c4f30;
      _objc_alloc();
      func_0x00010c044f20();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_108033dcc;
      puStack_80 = &UNK_110858070;
      _objc_retain();
      puStack_78 = puVar4;
      _objc_retain(param_3);
      uStack_70 = param_3;
      _objc_retain(puVar4);
      _objc_copyWeak(auStack_a0,auStack_68);
      _objc_retain(param_3);
      lVar5 = lVar3;
      func_0x00010bf22580(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24fbe0(puVar4);
      _objc_release(lVar5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_a0);
      _objc_release(puVar4);
      _objc_release(uStack_70);
      _objc_release(puStack_78);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 108033dcc; end: 108033e47;  */

void FUN_108033dcc(long param_1)

{
  long lVar1;
  
  func_0x00010bfafa00(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108033dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108033e48; end: 10803402b; -[SCStoriesOnboardingHelper showFallbackOnboardingForOurStoriesWithCompletion:] */

void FUN_108033e48(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07e980();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c079660();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bfdbba0();
  _objc_release(uVar5);
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10803402c;
  puStack_80 = &UNK_110848708;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  ppuVar6 = &puStack_98;
  lStack_78 = param_3;
  _objc_retainBlock();
  if ((uVar2 & 1) == 0) {
    _objc_retain(ppuVar6);
    _objc_retain(param_3);
    func_0x00010be04ba0(param_1);
    _objc_release(param_3);
    _objc_release(ppuVar6);
  }
  else if (((uint)uVar4 & ((uint)uVar3 ^ 1)) == 0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  else {
    (*(code *)ppuVar6[2])(ppuVar6);
  }
  _objc_release(ppuVar6);
  _objc_release(lStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 10803402c; end: 1080340b3;  */

void FUN_10803402c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1080340b4;
  puStack_30 = &UNK_110842508;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010be04b80(lVar1,param_2,&puStack_48);
  _objc_release(lVar1);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1080340b4; end: 1080340f3;  */

void FUN_1080340b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080340c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 1080340f4; end: 108034313; -[SCStoriesOnboardingHelper _displayIntroSendWithTitle:message:completion:] */

void FUN_1080340f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aed70;
  _objc_retain(param_4);
  uVar6 = param_3;
  _objc_retain(param_3);
  func_0x000108edeaf8();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108ede780();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(uVar6);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar6);
  return;
}



/* Entry: 108034314; end: 10803438b;  */

void FUN_108034314(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10803438c; end: 1080343a3;  */

void FUN_10803438c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010803439c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1080343a4; end: 10803441b;  */

void FUN_1080343a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10803441c; end: 108034433;  */

void FUN_10803441c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010803442c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 108034434; end: 10803452b; -[SCStoriesOnboardingHelper _displayOurStoryIntroWithCompletion:] */

void FUN_108034434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f580b4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f58054();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10803452c;
  puStack_58 = &UNK_110858070;
  uStack_50 = uVar1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010be04780(param_1,param_2,uVar2,uVar3,&puStack_70);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10803452c; end: 108034577;  */

void FUN_10803452c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    func_0x00010c204d20(*(undefined8 *)(param_1 + 0x20),param_2,1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108034568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 108034578; end: 1080346b3; -[SCStoriesOnboardingHelper _displayOurStoryAttributionWithCompletion:] */

void FUN_108034578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x000108f580b4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uVar1;
  func_0x000108f58024();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x000108f5803c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1080346b4;
  puStack_58 = &UNK_110858070;
  uStack_50 = uVar4;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar4);
  func_0x00010be04780(param_1,param_2,puVar3,uVar2,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1080346b4; end: 1080346ff;  */

void FUN_1080346b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    func_0x00010c1fa5e0(*(undefined8 *)(param_1 + 0x20),param_2,1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080346f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 108034700; end: 108034887; -[SCStoriesOnboardingHelper showOnboardingForSpotlightStoriesWithCompletion:] */

void FUN_108034700(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f640();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  if ((uVar2 & 1) == 0) {
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010be04e60(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010be04e40(param_1);
    _objc_release(param_3);
    _objc_release(param_3);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108034888; end: 1080349a7;  */

void FUN_108034888(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208de0();
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      func_0x00010be04e40(lVar1);
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    _objc_release(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001080349a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1080349a8; end: 1080349e7;  */

void FUN_1080349a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080349b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1080349e8; end: 108034ddf; -[SCStoriesOnboardingHelper _displaySpotlightSubmissionIntroV2WithCompletion:] */

void FUN_1080349e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108edeaf8();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108ede780();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x000108faa9c8();
  if ((uVar4 & 1) == 0) {
    func_0x000108f58534();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f5854c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000108f5851c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000108f58564();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x000108f5857c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000108f58594();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &PTR____CFConstantStringClassReference_110e2b838;
  func_0x000108e044b0(&PTR____CFConstantStringClassReference_110e2b838,
                      &PTR____CFConstantStringClassReference_110ecfc18,0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefea0();
  _objc_release(puVar13);
  _objc_release(ppuVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  puVar6 = puVar5;
  FUN_108065d38(puVar5,uVar17,param_1,0xe);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bddc0(puVar5);
  _objc_release(puVar6);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar14 = *(ulong *)(param_1 + 0x28);
  func_0x000108f4823c();
  if ((uVar14 & 1) == 0) {
    lVar15 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    while (lVar15 != 0) {
      lVar16 = lVar1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar15 = lVar16;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar1 = lVar16;
    }
  }
  func_0x00010c10eda0(lVar1);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  uVar19 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar19);
  func_0x00010bf84b00(uVar17);
  _objc_release(uVar19);
  return;
}



/* Entry: 108034de0; end: 108034e57;  */

void FUN_108034de0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108034e58; end: 108034e6f;  */

void FUN_108034e58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108034e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108034e70; end: 108034ee7;  */

void FUN_108034e70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108034ee8; end: 108034eff;  */

void FUN_108034ee8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108034ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 108034f00; end: 10803512f; -[SCStoriesOnboardingHelper _displaySpotlightOnboardingIntroWithCancelBlock:acceptBlock:] */

void FUN_108034f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar5);
  puVar1 = PTR_PTR_1126b1c10;
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  _objc_initWeak(auStack_68,param_1);
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained();
  if ((lVar2 == 0) || (lVar5 == 0)) {
    func_0x00010be04e20(param_1);
  }
  else {
    puVar3 = PTR_PTR_1126c4f30;
    _objc_alloc();
    func_0x00010c044f20();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108035130;
    puStack_80 = &UNK_110858070;
    _objc_retain();
    puStack_78 = puVar3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(puVar3);
    _objc_copyWeak(auStack_a0,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    lVar4 = lVar2;
    func_0x00010bf227c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fbe0(puVar3);
    _objc_release(lVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a0);
    _objc_release(puVar3);
    _objc_release(uStack_70);
    _objc_release(puStack_78);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108035130; end: 1080351a7;  */

void FUN_108035130(long param_1)

{
  func_0x00010bfafa00(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010803515c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1080351a8; end: 108035343; -[SCStoriesOnboardingHelper _displaySpotlightFallbackAttributionIntroWithCancelBlock:acceptBlock:] */

void FUN_1080351a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079660();
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfdbbe0();
  _objc_release(uVar3);
  if (((int)uVar2 == 0) || ((uVar4 & 1) != 0)) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    func_0x000108f58684();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108f5869c();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010be04780(param_1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108035344; end: 10803538f;  */

void FUN_108035344(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0x28;
  }
  else {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be5d860();
    _objc_release(lVar1);
    lVar1 = 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010803538c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + lVar1) + 0x10))();
  return;
}



/* Entry: 108035390; end: 1080353c7; -[SCStoriesOnboardingHelper _markSpotlightAttributionWarningAsSeen] */

void FUN_108035390(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080353c8; end: 1080354fb; -[SCStoriesOnboardingHelper showOnboardingForCustomStoriesWithCustomStory:completion:] */

void FUN_1080353c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if ((lVar1 == 6) || (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 10)) {
    func_0x00010bebb9a0(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1080354fc;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1080354fc; end: 10803552f;  */

void FUN_1080354fc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb9280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108035530; end: 10803561b; -[SCStoriesOnboardingHelper _showTrustAndSafetyPromptForSharedStoryWithMetadata:completion:] */

void FUN_108035530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  pcStack_58 = FUN_10803561c;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10803561c; end: 108035727;  */

void FUN_10803561c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108035728;
  puStack_60 = &UNK_110849530;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x108035738;
  puStack_88 = &UNK_110849530;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar4;
  _objc_retain(uVar5);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x108035748;
  puStack_b0 = &UNK_110849530;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar5;
  _objc_retain(uVar4);
  uStack_a8 = uVar4;
  func_0x00010c23aa00(uVar3,param_2,&puStack_78,&puStack_a0,&puStack_c8,
                      *(undefined8 *)(lVar2 + 0x30),lVar2);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(lVar2);
  return;
}



/* Entry: 108035728; end: 108035757;  */

void FUN_108035728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108035734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 108035758; end: 108035867; -[SCStoriesOnboardingHelper _showFirstTimePostingCustomStoryAlertIfNecessaryWithCustomStory:completion:] */

void FUN_108035758(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  (**(code **)(param_4 + 0x10))(param_4,1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c237860(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108035868; end: 108035897;  */

void FUN_108035868(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
                    /* WARNING: Could not recover jumptable at 0x00010beb9cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showMembersListForCustomStory__11258c0d8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108035898; end: 1080358a7;  */

void FUN_108035898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080358a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1080358a8; end: 1080359c3; -[SCStoriesOnboardingHelper _showMembersListForCustomStory:] */

void FUN_1080358a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if (((((lVar1 == 1) || (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 2)) ||
       (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 10)) ||
      (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 6)) && (*(long *)(param_1 + 0x18) != 0)) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2,param_2,lVar1,1);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_3;
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23f20(uVar3,param_2,puVar2,lVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,uVar3,param_1);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080359c4; end: 108035a2b; -[SCStoriesOnboardingHelper _incrementSavedStoryEducationCount] */

void FUN_1080359c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14bb80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108035a2c; end: 108035a6f; -[SCStoriesOnboardingHelper _shouldShowEducationDialog] */

bool FUN_108035a2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c14bb80();
  _objc_release(lVar1);
  return lVar2 < 1;
}



/* Entry: 108035a70; end: 108035a9f; -[SCStoriesOnboardingHelper _getEducationDialogTextWithIsStoryPrivacySettingEveryone:] */

void FUN_108035a70(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    func_0x000108edef48();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108edef30();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108035aa0; end: 108035aa7; -[SCStoriesOnboardingHelper didDismissCustomStoryMembers] */

void FUN_108035aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 108035aa8; end: 108035aef; -[SCStoriesOnboardingHelper webBrowserDidDismiss:] */

void FUN_108035aa8(long param_1)

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



/* Entry: 108035af0; end: 108035caf; -[SCStoriesOnboardingHelper showOnboardingForBusinessStoriesWithValdiRuntimeProvider:userId:avatarId:uiContainer:completion:] */

void FUN_108035af0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010beb4dc0();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_7 + 0x10))(param_7,1);
  }
  else {
    puVar2 = PTR_PTR_1126d8e88;
    _objc_alloc();
    func_0x00010c0601a0();
    _objc_initWeak(auStack_58,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108035cb0;
    puStack_80 = &UNK_110857fd0;
    _objc_retain(puVar2);
    puStack_78 = puVar2;
    _objc_retain(param_6);
    uStack_70 = param_6;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_7);
    lStack_68 = param_7;
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    (**(code **)(param_7 + 0x10))(param_7,0);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_release(uStack_70);
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108035cb0; end: 108035d5f;  */

void FUN_108035cb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010c10ea80(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108035d60; end: 108035d9f;  */

void FUN_108035d60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea6960();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000108035d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 108035da0; end: 108035ddf; -[SCStoriesOnboardingHelper _shouldPresentBusinessOnboardingNUX] */

uint FUN_108035da0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157c40();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 108035de0; end: 108035e17; -[SCStoriesOnboardingHelper _setPublicStoryNuxSeen] */

void FUN_108035de0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108035e18; end: 108035edb; -[SCStoriesOnboardingHelper .cxx_destruct] */

void FUN_108035e18(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108035edc; end: 108035f2b; -[SCStoriesTrayCell initWithStyle:reuseIdentifier:] */

undefined1 * FUN_108035edc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc2e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108035f2c; end: 1080367b7; -[SCStoriesTrayCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108035f2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar13 = (long)_DAT_11277373c;
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar10);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar13));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar17 = (long)_DAT_112773740;
  uVar10 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar10);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e1ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  lVar14 = (long)_DAT_112773744;
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  puStack_118 = puVar1;
  _objc_alloc();
  uStack_98 = *(undefined8 *)(param_1 + lVar13);
  uStack_90 = *(undefined8 *)(param_1 + lVar14);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  lVar12 = (long)_DAT_112773748;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_release(uVar10);
  _objc_release(puVar3);
  func_0x00010c207380(0x4020000000000000,*(undefined8 *)(param_1 + lVar12));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  uStack_a8 = *(undefined8 *)(param_1 + lVar12);
  uStack_a0 = *(undefined8 *)(param_1 + lVar17);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  lVar16 = (long)_DAT_11277374c;
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar10);
  _objc_release(puVar2);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar11 = (long)_DAT_112773750;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar15 = (long)_DAT_112773754;
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08c0e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4032000000000000);
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
  func_0x00010c181f00(0x443b8000,*(undefined8 *)(param_1 + lVar13));
  func_0x00010c181cc0(0x443b8000,*(undefined8 *)(param_1 + lVar13));
  puVar1 = puStack_118;
  func_0x00010c181f00(0x437a0000,puStack_118);
  func_0x00010c181cc0(0x437a0000,puVar1);
  puStack_188 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = uVar10;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_128 = uVar10;
  uStack_110 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_130 = uVar4;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  uStack_138 = uVar4;
  uStack_108 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  uStack_140 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar12;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_150 = uVar10;
  uStack_100 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = uVar4;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_160 = uVar4;
  uStack_f8 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = uVar10;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_170 = uVar10;
  uStack_f0 = uVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  uStack_178 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_180 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  uStack_190 = uVar4;
  uStack_e8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  uStack_198 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a0 = uVar10;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_1a8 = uVar5;
  uStack_e0 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  uStack_1b0 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b8 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  uStack_1c0 = uVar4;
  uStack_d8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  uStack_1c8 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d0 = lVar12;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_1d8 = uVar10;
  uStack_d0 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  uStack_1e0 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_1e8 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_1f0 = uVar4;
  uStack_c8 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_c0 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  uStack_b8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b0 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_188);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(lVar12);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(lStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  _objc_release(uStack_150);
  _objc_release(lStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_130);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  func_0x00010c1fbac0(param_1);
  puVar1 = puStack_118;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_1080367b8;
  puStack_218 = PTR_PTR_1126fc2e0;
  puStack_220 = puVar1;
  uStack_210 = uVar6;
  lStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_220,PTR_s_prepareForReuse_112620008);
  func_0x00010bf2dba0(*(undefined8 *)(puVar1 + _DAT_112773758));
  func_0x00010c1862c0(puVar1);
  return;
}



/* Entry: 1080367b8; end: 108036813; -[SCStoriesTrayCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080367b8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc2e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_112773758));
  func_0x00010c1862c0(param_1);
  return;
}



/* Entry: 108036814; end: 10803709b; -[SCStoriesTrayCell setupWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108036814(long param_1,undefined *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar12 = (long)_DAT_11277375c;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  *(ulong *)(param_1 + lVar12) = param_3;
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11277373c;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar12));
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c11e760();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((uVar3 & 1) == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23bb00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c25e800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  lVar12 = (long)_DAT_112773740;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar12));
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c25e800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar12));
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c11e760();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((uVar3 & 1) == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23bb00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar5);
  func_0x00010c238c20(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112773744));
  uVar3 = param_3;
  func_0x00010c25b720();
  puVar5 = puVar4;
  if ((long)uVar3 < 4) {
    if ((long)uVar3 < 2) {
      if (uVar3 == 0) {
        _objc_initWeak(auStack_80,param_1);
        uVar3 = param_3;
        func_0x00010c11e760();
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        if ((int)uVar3 == 0) {
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c23bb00();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = 0;
        func_0x000108ffef38(0,puVar4,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        lVar12 = (long)_DAT_112773750;
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar12));
        lVar7 = param_1 + _DAT_112773760;
        _objc_loadWeakRetained();
        param_2 = auStack_80;
        _objc_copyWeak(auStack_b0);
        lVar8 = lVar7;
        func_0x00010bfa5540();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + _DAT_112773758);
        *(long *)(param_1 + _DAT_112773758) = lVar8;
        _objc_release(uVar13);
        _objc_release(lVar7);
        _objc_destroyWeak(auStack_b0);
        _objc_release(uVar2);
        _objc_destroyWeak(auStack_80);
        goto LAB_108036ecc;
      }
      if (uVar3 == 1) {
        uVar3 = param_3;
        func_0x00010c11e760();
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        if ((uVar3 & 1) == 0) {
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c23bb00();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c14c560();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = 0;
        param_2 = puVar4;
        func_0x000108ffef38(0,puVar4,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        lVar12 = (long)_DAT_112773750;
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar12));
        uVar3 = param_3;
        func_0x00010bf24fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 != 0) {
          _objc_initWeak(auStack_80,param_1);
          lVar7 = param_1 + _DAT_112773760;
          _objc_loadWeakRetained(lVar7);
          uVar3 = param_3;
          func_0x00010bf24fc0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0xc2000000;
          pcStack_98 = FUN_10803709c;
          puStack_90 = &UNK_110856cc0;
          param_2 = auStack_80;
          _objc_copyWeak(auStack_88);
          func_0x00010bfa7960(lVar7);
          _objc_release(uVar3);
          _objc_release(lVar7);
          _objc_destroyWeak(auStack_88);
          _objc_destroyWeak(auStack_80);
        }
        _objc_release(uVar2);
        goto LAB_108036ecc;
      }
      goto LAB_108036c88;
    }
    if (uVar3 == 2) {
      lVar7 = param_1;
      func_0x00010be36ae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = (long)_DAT_112773750;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar12));
      _objc_release(lVar7);
    }
    else {
      if (uVar3 != 3) goto LAB_108036c88;
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = (long)_DAT_112773750;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar12));
      _objc_release(puVar6);
      uVar3 = param_3;
      func_0x00010c11e760();
      iVar1 = (int)uVar3;
joined_r0x000108036b78:
      if (iVar1 == 0) goto LAB_108036ecc;
    }
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  else {
    if ((long)uVar3 < 6) {
      if (uVar3 == 4) {
LAB_108036b34:
        puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = (long)_DAT_112773750;
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar12));
        _objc_release(puVar6);
        uVar3 = param_3;
        func_0x00010c11e760();
        iVar1 = (int)uVar3;
        goto joined_r0x000108036b78;
      }
      if (uVar3 == 5) {
LAB_108036b88:
        puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = (long)_DAT_112773750;
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar12));
        _objc_release(puVar6);
        uVar3 = param_3;
        func_0x00010c11e760();
        iVar1 = (int)uVar3;
        goto joined_r0x000108036b78;
      }
    }
    else {
      if (uVar3 == 6) goto LAB_108036b34;
      if (uVar3 == 7) {
        uVar3 = param_3;
        func_0x00010bfa0900();
        if ((int)uVar3 != 0) {
          puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = (long)_DAT_112773750;
          func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar12));
          _objc_release(puVar4);
          goto LAB_108036ecc;
        }
        goto LAB_108036b88;
      }
    }
LAB_108036c88:
    lVar12 = (long)_DAT_112773750;
  }
LAB_108036ecc:
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar12));
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c11e760();
  uVar2 = 0x402e000000000000;
  if ((int)uVar3 == 0) {
    uVar2 = 0x4020000000000000;
  }
  lVar9 = lVar8;
  func_0x00010bf493c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  lStack_78 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c11e760();
  uVar13 = 0xc02e000000000000;
  if ((int)uVar3 == 0) {
    uVar13 = 0xc020000000000000;
  }
  uVar10 = uVar2;
  func_0x00010bf493c0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar6;
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar9 + 0x20);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(param_2);
  _objc_retain(puVar11);
  lVar12 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (lVar12 != 0) {
    lVar7 = lVar12;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar11);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(lVar7);
    _objc_release(lVar7);
    _objc_release(param_2);
    _objc_release(puVar11);
  }
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(param_2);
  return;
}



/* Entry: 10803709c; end: 10803717f;  */

void FUN_10803709c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_release(param_3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108037180; end: 10803724b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108037180(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x28) != 0)) {
    lVar2 = (long)_DAT_112773750;
    func_0x00010c1a9f00(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar2));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar2);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10803724c; end: 108037467; -[SCStoriesTrayCell setSelected:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803724c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_70 = PTR_PTR_1126fc2e0;
  lStack_78 = param_1;
  _objc_msgSendSuper2(&lStack_78,PTR_s_setSelected_animated__11265c5a0);
  if (param_3 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112773754;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
  }
  else {
    lVar5 = param_1;
    func_0x00010bf5ca60();
    if ((int)lVar5 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c23bb80(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_112773754;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar5));
      _objc_release(puVar4);
      goto LAB_1080373e8;
    }
    puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c0469e0(0x4038000000000000,0x4038000000000000);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc0000000;
    pcStack_58 = FUN_1080375f8;
    puStack_50 = &UNK_1108ec8b0;
    uStack_40 = 0x402c000000000000;
    uStack_48 = 0x4038000000000000;
    uStack_38 = 0x4014000000000000;
    puVar2 = puVar4;
    func_0x00010bfe91c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar5 = (long)_DAT_112773754;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
  }
  func_0x00010c216160(uVar3);
LAB_1080373e8:
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11277375c);
  func_0x00010c11e760();
  if (iVar1 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11277373c;
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar4);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5));
  }
  return;
}



/* Entry: 108037468; end: 1080374e7; -[SCStoriesTrayCell _iconTriangleRightFillImage] */

void FUN_108037468(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4053000000000000,0x4053000000000000,0x4031000000000000,0x4031000000000000,
                      0x4031000000000000,0x4031000000000000,puVar2,param_2,0x217,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080374e8; end: 108037507; -[SCStoriesTrayCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080374e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112773760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108037508; end: 10803751b; -[SCStoriesTrayCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108037508(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112773760,param_3);
  return;
}



/* Entry: 10803751c; end: 10803752b; -[SCStoriesTrayCell crossPostEligible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10803751c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112773738);
}



/* Entry: 10803752c; end: 10803753b; -[SCStoriesTrayCell setCrossPostEligible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803752c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112773738) = param_3;
  return;
}



/* Entry: 10803753c; end: 1080375f7; -[SCStoriesTrayCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803753c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112773760);
  _objc_storeStrong(param_1 + _DAT_112773758,0);
  _objc_storeStrong(param_1 + _DAT_11277375c,0);
  _objc_storeStrong(param_1 + _DAT_112773748,0);
  _objc_storeStrong(param_1 + _DAT_11277374c,0);
  _objc_storeStrong(param_1 + _DAT_112773744,0);
  _objc_storeStrong(param_1 + _DAT_112773754,0);
  _objc_storeStrong(param_1 + _DAT_112773750,0);
  _objc_storeStrong(param_1 + _DAT_112773740,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277373c,0);
  return;
}



/* Entry: 1080375f8; end: 1080376f7;  */

void FUN_1080375f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_2);
  func_0x00010c23ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010bdc1000(param_2);
  _objc_release(param_2);
  _CGContextFillEllipseInRect
            (0,0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),uVar2);
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28),
                      PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfe97c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080376f8; end: 108037823; -[SCStoriesTrayCellViewModel initWithStoryType:displayName:subText:storyID:showOfficialBadge:businessLogoURL:quickPostTrayRefreshEnabled:fanPassBadgeIconEnabled:] */

undefined1 *
FUN_1080376f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fc2e8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0x39) = param_9._1_1_;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108037824; end: 10803782b; -[SCStoriesTrayCellViewModel storyType] */

undefined8 FUN_108037824(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10803782c; end: 108037833; -[SCStoriesTrayCellViewModel displayName] */

undefined8 FUN_10803782c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108037834; end: 10803783b; -[SCStoriesTrayCellViewModel subText] */

undefined8 FUN_108037834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10803783c; end: 108037843; -[SCStoriesTrayCellViewModel storyID] */

undefined8 FUN_10803783c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108037844; end: 10803784b; -[SCStoriesTrayCellViewModel showOfficialBadge] */

undefined1 FUN_108037844(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 10803784c; end: 108037853; -[SCStoriesTrayCellViewModel businessLogoURL] */

undefined8 FUN_10803784c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108037854; end: 10803785b; -[SCStoriesTrayCellViewModel quickPostTrayRefreshEnabled] */

undefined1 FUN_108037854(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 10803785c; end: 108037863; -[SCStoriesTrayCellViewModel fanPassBadgeIconEnabled] */

undefined1 FUN_10803785c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}


