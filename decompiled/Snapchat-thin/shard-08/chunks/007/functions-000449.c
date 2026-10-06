/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10645d0ac; end: 10645d0e7; -[SCBitmojiOutfitChangeNotificationPresenter _dismissNotificationView] */

void FUN_10645d0ac(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010645d0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10645d0e8; end: 10645d1af; -[SCBitmojiOutfitChangeNotificationPresenter _logShareOutfitTap] */

void FUN_10645d0e8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfc2c80(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10645d1b0; end: 10645d1f7;  */

void FUN_10645d1b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16fc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10645d1f8; end: 10645d27f; -[SCBitmojiOutfitChangeNotificationPresenter _finishLoggingShareOutfitTapWithAvatarData:] */

void FUN_10645d1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be46620(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0af660(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x78));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10645d280; end: 10645d33b; -[SCBitmojiOutfitChangeNotificationPresenter _jsonStringFromAvatarData:] */

void FUN_10645d280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdfc140();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  func_0x00010bf64b60(puVar1,param_2,param_1,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  puVar3 = puVar2;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10645d33c; end: 10645d457; -[SCBitmojiOutfitChangeNotificationPresenter _dictionaryFromAvatarData:] */

void FUN_10645d33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0ec460(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10645d3e8;
  puStack_40 = &UNK_11084dad8;
  puStack_38 = puVar1;
  func_0x00010bf97cc0(uVar2,param_2,&puStack_58);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645d458; end: 10645d49f; -[SCBitmojiOutfitChangeNotificationPresenter bitmojiOutfitSharingScopeDidDismiss:] */

void FUN_10645d458(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10645d4a0; end: 10645d4a3; -[SCBitmojiOutfitChangeNotificationPresenter presentingViewControllerForBitmojiOutfitSharing] */

void FUN_10645d4a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becd7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__topViewController_112590f98);
  return;
}



/* Entry: 10645d4a4; end: 10645d4cb; -[SCBitmojiOutfitChangeNotificationPresenter debugInfo] */

void FUN_10645d4a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10645d4cc; end: 10645d57f; -[SCBitmojiOutfitChangeNotificationPresenter .cxx_destruct] */

void FUN_10645d4cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10645d580; end: 10645d79f; -[SCBitmojiOutfitChangeNotificationWithPreviewView initWithActionHandler:outfitPreviewImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10645d580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f13a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747d2c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112747d2c) = uVar5;
    _objc_release(uVar4);
    func_0x00010c219b60(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f800000);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x402c000000000000);
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(uVar5,uVar4);
    _objc_release(puVar2);
    func_0x00010be3bca0(puVar1);
    func_0x00010beacc80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10645d7a0; end: 10645e257; -[SCBitmojiOutfitChangeNotificationWithPreviewView _initializeSubviewsWithOutfitPreviewImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645d7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
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
  long lStack_90;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar9 = (long)_DAT_112747d30;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar9));
  _objc_release(param_3);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar10 = (long)_DAT_112747d34;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar7);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar8 = (long)_DAT_112747d38;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar8));
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar7);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar8));
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  lStack_128 = lVar8;
  func_0x00010c219b60(uVar7);
  FUN_10645e3ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar7);
  lStack_118 = lVar10;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar8 = (long)_DAT_112747d3c;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar8));
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar7);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar8));
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  lStack_130 = lVar8;
  func_0x00010c219b60(uVar7);
  func_0x00010645e404();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar7);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112747d40;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar7);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bb80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar3;
  _objc_release(puVar1);
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar10));
  func_0x00010befbb60(param_1);
  puStack_150 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  uStack_138 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar8;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar9);
  puStack_148 = (undefined *)uVar7;
  uStack_b0 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  uStack_158 = uVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar9);
  uStack_a8 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar9);
  uStack_a0 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_150);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar8);
  _objc_release(uStack_158);
  _objc_release(puStack_148);
  _objc_release(lStack_140);
  _objc_release(uStack_138);
  lVar8 = lStack_118;
  puStack_148 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_1 + lStack_118);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  uStack_138 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = uVar7;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar8);
  uStack_c8 = uVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar8);
  uStack_c0 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar14;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_148);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lStack_140);
  _objc_release(uStack_138);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar10);
  uStack_d8 = uVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(lVar8);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(uVar12);
  lVar9 = lStack_128;
  puStack_178 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lStack_128);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lStack_118;
  uVar7 = *(undefined8 *)(param_1 + lStack_118);
  uStack_138 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar9);
  puStack_148 = (undefined *)uVar11;
  uStack_110 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  puStack_150 = (undefined *)uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar9);
  uStack_160 = uVar12;
  uStack_108 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  uStack_168 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_170 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lStack_130;
  uVar12 = *(undefined8 *)(param_1 + lStack_130);
  uStack_180 = uVar11;
  uStack_100 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  uStack_188 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_190 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar8);
  uStack_198 = uVar12;
  uStack_f8 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  uStack_f0 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  uStack_e8 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_178);
  _objc_release(puVar1);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(lStack_140);
  _objc_release(uStack_138);
  puVar1 = puStack_120;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_10645e258;
  puStack_1d8 = PTR_PTR_1126f13a0;
  puStack_1e0 = puVar1;
  uStack_1d0 = uVar12;
  uStack_1c8 = uVar5;
  uStack_1c0 = uVar11;
  uStack_1b8 = uVar6;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_1e0,PTR_s_layoutSubviews_112600e60);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(puVar1);
  func_0x00010bf199c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(puVar1);
  _objc_release(puVar3);
  return;
}



/* Entry: 10645e258; end: 10645e2fb; -[SCBitmojiOutfitChangeNotificationWithPreviewView layoutSubviews] */

void FUN_10645e258(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f13a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  func_0x00010bf199c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10645e2fc; end: 10645e34f; -[SCBitmojiOutfitChangeNotificationWithPreviewView _setupGestureRecognizer] */

void FUN_10645e2fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c21e900(param_1,param_2,1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10645e350; end: 10645e36b; -[SCBitmojiOutfitChangeNotificationWithPreviewView _handleNotificationViewTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645e350(long param_1)

{
  if (*(long *)(param_1 + _DAT_112747d2c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010645e364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112747d2c) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10645e36c; end: 10645e3eb; -[SCBitmojiOutfitChangeNotificationWithPreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645e36c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747d40,0);
  _objc_storeStrong(param_1 + _DAT_112747d30,0);
  _objc_storeStrong(param_1 + _DAT_112747d2c,0);
  _objc_storeStrong(param_1 + _DAT_112747d34,0);
  _objc_storeStrong(param_1 + _DAT_112747d3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747d38,0);
  return;
}



/* Entry: 10645e3ec; end: 10645e41b;  */

void FUN_10645e3ec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4ff98;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e4ff98,
                      &PTR____CFConstantStringClassReference_110e4ffb8,0);
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



/* Entry: 10645e41c; end: 10645e61b; -[SCBloopsStorySharingServiceProvider provide] */

void FUN_10645e41c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10645e61c;
  puStack_78 = &UNK_110923030;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_b8 = puVar4;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10645e664;
  puStack_a0 = &UNK_1109230a0;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126caa58;
  _objc_alloc(PTR_PTR_1126caa58);
  func_0x00010bff8f40();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10645e61c; end: 10645e65b;  */

void FUN_10645e61c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10645e65c; end: 10645e663;  */

undefined8 FUN_10645e65c(void)

{
  return 0;
}



/* Entry: 10645e664; end: 10645e6e3;  */

void FUN_10645e664(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10645e6e4; end: 10645e79f; -[SCBloopsStorySharingServiceProvider _createStoryShareSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645e6e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126caa60;
  _objc_alloc(PTR_PTR_1126caa60);
  lVar2 = param_1 + _DAT_112747d44;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112747d48;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf9e360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051a80(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645e7a0; end: 10645e7bb; -[SCBloopsStorySharingServiceProvider _createStoryShareMediaConverter] */

void FUN_10645e7a0(void)

{
  _objc_opt_new(PTR_PTR_1126caa68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10645e7bc; end: 10645e837; -[SCBloopsStorySharingServiceProvider _createStoryConversationResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645e7bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126caa70;
  _objc_alloc(PTR_PTR_1126caa70);
  param_1 = param_1 + _DAT_112747d4c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0421a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645e838; end: 10645e887; -[SCBloopsStorySharingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645e838(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112747d4c);
  _objc_destroyWeak(param_1 + _DAT_112747d48);
  _objc_destroyWeak(param_1 + _DAT_112747d44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112747d50);
  return;
}



/* Entry: 10645e888; end: 10645e9cb; -[SCBloopsStoryShareChatMedia initWithImage:videoData:] */

undefined1 * FUN_10645e888(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f13a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156d80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156d80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(long *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar4);
    if (param_3 == 0) {
      if (param_4 == 0) {
        uVar4 = 0xffffffffffffffff;
      }
      else {
        uVar4 = 1;
        *(undefined8 *)((long)puVar1 + 8) = 1;
      }
      *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    }
    else {
      *(undefined8 *)((long)puVar1 + 8) = 0;
      *(undefined8 *)((long)puVar1 + 0x30) = 0;
      *(undefined8 *)((long)puVar1 + 0x48) = 0;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10645e9cc; end: 10645ea1b; +[SCBloopsStoryShareChatMedia withImage:] */

void FUN_10645e9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126caa78;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01c500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645ea1c; end: 10645ea6b; +[SCBloopsStoryShareChatMedia withVideoData:] */

void FUN_10645ea1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126caa78;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01c500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645ea6c; end: 10645eafb; -[SCBloopsStoryShareChatMedia prepareDataToUploadForMediaId:completionHandler:] */

void FUN_10645ea6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 1) {
    func_0x00010be79820(param_1);
  }
  else if (lVar1 == 0) {
    func_0x00010be78680(param_1);
  }
  else if (lVar1 == -1) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10645eafc; end: 10645eb03; -[SCBloopsStoryShareChatMedia isZipped] */

undefined8 FUN_10645eafc(void)

{
  return 0;
}



/* Entry: 10645eb04; end: 10645eb0b; -[SCBloopsStoryShareChatMedia snapAttachmentUrl] */

undefined8 FUN_10645eb04(void)

{
  return 0;
}



/* Entry: 10645eb0c; end: 10645eb13; -[SCBloopsStoryShareChatMedia venueId] */

undefined8 FUN_10645eb0c(void)

{
  return 0;
}



/* Entry: 10645eb14; end: 10645eb1b; -[SCBloopsStoryShareChatMedia isInfiniteDuration] */

undefined8 FUN_10645eb14(void)

{
  return 0;
}



/* Entry: 10645eb1c; end: 10645eb23; -[SCBloopsStoryShareChatMedia isRotationLocked] */

undefined8 FUN_10645eb1c(void)

{
  return 1;
}



/* Entry: 10645eb24; end: 10645eb2b; -[SCBloopsStoryShareChatMedia snapMetadata] */

undefined8 FUN_10645eb24(void)

{
  return 0;
}



/* Entry: 10645eb2c; end: 10645eb33; -[SCBloopsStoryShareChatMedia mediaOrigins] */

undefined8 FUN_10645eb2c(void)

{
  return 0;
}



/* Entry: 10645eb34; end: 10645ebf7; -[SCBloopsStoryShareChatMedia _prepareImageDataForUpload:] */

void FUN_10645eb34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10645ebf8;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = uVar2;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10645ebf8; end: 10645ecab;  */

void FUN_10645ebf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _UIImageJPEGRepresentation(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10645ecac;
  puStack_48 = &UNK_1108465d0;
  auVar3 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x20),*(undefined1 (*) [16])(param_1 + 0x20),8,
                    1);
  uStack_38 = auVar3._8_8_;
  uStack_40 = auVar3._0_8_;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  _objc_retain(uVar1);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 10645ecac; end: 10645ed17;  */

void FUN_10645ecac(double param_1,double param_2,long param_3)

{
  double dVar1;
  
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x28));
  dVar1 = param_1;
  func_0x00010c14e120(*(undefined8 *)(param_3 + 0x28));
  param_1 = param_1 * dVar1;
  func_0x00010c2256c0(param_1,*(undefined8 *)(param_3 + 0x20));
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c14e120(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c1a7d00(param_2 * param_1,*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010645ed14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
            (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 10645ed18; end: 10645eddb; -[SCBloopsStoryShareChatMedia _prepareVideoDataForUpload:] */

void FUN_10645ed18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10645eddc;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = uVar2;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10645eddc; end: 10645efab;  */

void FUN_10645eddc(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc();
  func_0x00010c0082a0();
  puVar2 = puVar1;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c0d5d20(puVar3);
  if (puVar3 == (undefined *)0x0) {
    dVar5 = 0.0;
    dVar6 = 0.0;
    dVar7 = 0.0;
    dStack_58 = 0.0;
  }
  else {
    func_0x00010c106f40(&dStack_70,puVar3);
    dVar5 = dStack_70;
    dVar6 = dStack_68;
    dVar7 = dStack_60;
  }
  dVar5 = dVar7 * param_2 + dVar5 * param_1;
  dVar6 = dStack_58 * param_2 + dVar6 * param_1;
  if (puVar1 == (undefined *)0x0) {
    dStack_70 = 0.0;
    dStack_68 = 0.0;
    dStack_60 = 0.0;
  }
  else {
    func_0x00010bf8b160(&dStack_70,puVar1);
  }
  _CMTimeGetSeconds(&dStack_70);
  if ((dVar5 == 0.0) || (dVar6 == 0.0)) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10645efac;
    puStack_80 = &UNK_110849530;
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar4);
    uStack_78 = uVar4;
    func_0x000100162d98("APPSTORE",&puStack_98);
    uVar4 = uStack_78;
  }
  else {
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_d8 = FUN_10645efbc;
    puStack_d0 = &UNK_110923100;
    uStack_c8 = *(undefined8 *)(param_3 + 0x28);
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    dStack_b0 = ABS(dVar5);
    dStack_a8 = ABS(dVar6);
    uStack_e0 = 0xc2000000;
    dStack_a0 = param_1;
    _objc_retain(uVar4);
    uStack_c0 = *(undefined8 *)(param_3 + 0x20);
    uStack_b8 = uVar4;
    func_0x000100162d98("APPSTORE",&puStack_e8);
    uVar4 = uStack_b8;
  }
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 10645efac; end: 10645efbb;  */

void FUN_10645efac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010645efb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10645efbc; end: 10645f003;  */

void FUN_10645efbc(long param_1)

{
  func_0x00010c2256c0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1a7d00(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20));
  func_0x00010c192d40(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010645f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10645f004; end: 10645f00b; -[SCBloopsStoryShareChatMedia chatKey] */

undefined8 FUN_10645f004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10645f00c; end: 10645f03b; -[SCBloopsStoryShareChatMedia setChatKey:] */

void FUN_10645f00c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10645f03c; end: 10645f043; -[SCBloopsStoryShareChatMedia chatIV] */

undefined8 FUN_10645f03c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10645f044; end: 10645f073; -[SCBloopsStoryShareChatMedia setChatIV:] */

void FUN_10645f044(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10645f074; end: 10645f07b; -[SCBloopsStoryShareChatMedia mediaContentType] */

undefined8 FUN_10645f074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10645f07c; end: 10645f083; -[SCBloopsStoryShareChatMedia setMediaContentType:] */

void FUN_10645f07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10645f084; end: 10645f08b; -[SCBloopsStoryShareChatMedia width] */

undefined8 FUN_10645f084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10645f08c; end: 10645f093; -[SCBloopsStoryShareChatMedia setWidth:] */

void FUN_10645f08c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 10645f094; end: 10645f09b; -[SCBloopsStoryShareChatMedia height] */

undefined8 FUN_10645f094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10645f09c; end: 10645f0a3; -[SCBloopsStoryShareChatMedia setHeight:] */

void FUN_10645f09c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 10645f0a4; end: 10645f0ab; -[SCBloopsStoryShareChatMedia duration] */

undefined8 FUN_10645f0a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10645f0ac; end: 10645f0b3; -[SCBloopsStoryShareChatMedia setDuration:] */

void FUN_10645f0ac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 10645f0b4; end: 10645f0fb; -[SCBloopsStoryShareChatMedia .cxx_destruct] */

void FUN_10645f0b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10645f0fc; end: 10645f16f; -[SCBloopsStoryShareConversationResolver initWithScopedConversationParser:] */

undefined1 * FUN_10645f0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f13b0;
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



/* Entry: 10645f170; end: 10645f433; -[SCBloopsStoryShareConversationResolver resolveRecipientsConversations:completion:] */

void FUN_10645f170(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010bf52a60();
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    lVar13 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lStack_128 + lVar9 * 8);
        lVar2 = lVar11;
        func_0x00010bfcf060();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf529e0();
        _objc_release(lVar2);
        puVar4 = PTR_PTR_1126b01c0;
        if (lVar3 == 0) {
          lVar12 = lVar12 + 1;
          func_0x00010c122b80(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c294260(puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar2 = lVar11;
          func_0x00010bfcf060();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf529e0();
          lVar12 = lVar3 + lVar12;
          _objc_release(lVar2);
          puVar4 = PTR_PTR_1126b01c0;
          func_0x00010c122b80(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfcf680(puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        _objc_release(lVar11);
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar10 = param_3;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_10645f434;
  puStack_148 = &UNK_110923130;
  uVar7 = param_4;
  uStack_140 = param_4;
  lStack_138 = lVar12;
  _objc_retain();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &puStack_160;
  func_0x00010c297260(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_140);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    if (ppuVar8 == (undefined **)0x0) {
      uVar6 = param_2;
      func_0x00010bf026a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x0001086063f4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = uVar7;
      func_0x00010860511c(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(param_3 + 0x20);
      uVar5 = param_2;
      func_0x00010bf50b20(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar10 + 0x10))(lVar10,uVar5,uVar6,0);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar7);
    }
    else {
      (**(code **)(*(long *)(param_3 + 0x20) + 0x10))
                (*(long *)(param_3 + 0x20),PTR____NSArray0__struct_11034ab48,0,ppuVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10645f434; end: 10645f52f;  */

void FUN_10645f434(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x00010bf026a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010860511c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    uVar3 = param_2;
    func_0x00010bf50b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar3,uVar1,0);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10645f530; end: 10645f53b; -[SCBloopsStoryShareConversationResolver .cxx_destruct] */

void FUN_10645f530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10645f53c; end: 10645f5e3; -[SCBloopsStoryShareMediaImpl initWithImage:] */

undefined1 * FUN_10645f53c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f13b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126caa78;
    func_0x00010c2afa20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    FUN_1067ae6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10645f5e4; end: 10645f68b; -[SCBloopsStoryShareMediaImpl initWithVideo:] */

undefined1 * FUN_10645f5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f13b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126caa78;
    func_0x00010c2bc6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    FUN_1067ae6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10645f68c; end: 10645f693; -[SCBloopsStoryShareMediaImpl media] */

undefined8 FUN_10645f68c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10645f694; end: 10645f69b; -[SCBloopsStoryShareMediaImpl mediaMetadata] */

undefined8 FUN_10645f694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10645f69c; end: 10645f6cb; -[SCBloopsStoryShareMediaImpl .cxx_destruct] */

void FUN_10645f69c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10645f6cc; end: 10645f717; -[SCBloopsStoryShareMediaConverter mediaWithImage:] */

void FUN_10645f6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126caa80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01bf60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645f718; end: 10645f763; -[SCBloopsStoryShareMediaConverter mediaWithVideo:] */

void FUN_10645f718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126caa80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060b00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645f764; end: 10645f807; -[SCBloopsStoryShareSender initWithTextSender:externalMediaPreparer:] */

undefined1 *
FUN_10645f764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f13c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10645f808; end: 10645fd8f; -[SCBloopsStoryShareSender sendBloopsStoryShare:completionQueue:completionHandler:] */

void FUN_10645f808(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
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
  long lVar19;
  undefined *puVar20;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010befd440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf50b20();
  _objc_retainAutoreleasedReturnValue();
  if (((param_3 != 0) && (lVar4 = lVar3, func_0x00010bf529e0(), lVar4 != 0)) && (lVar2 != 0)) {
    lVar4 = param_3;
    func_0x00010c111780();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar5 = param_3;
      func_0x00010c111760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_3;
        func_0x00010c111760(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010c111780(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar2;
        func_0x00010c294d60(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10a360(uVar6);
        _objc_release(lVar7);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(uVar6);
      }
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar9 = PTR_PTR_1126c6da0;
    _objc_retain(lVar2);
    _objc_opt_new();
    lVar4 = param_3;
    func_0x00010bf454e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000108f520ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1805c0(puVar9);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      puVar10 = PTR_PTR_1126bc778;
      _objc_opt_new(PTR_PTR_1126bc778);
      lVar4 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar10);
      _objc_release(lVar5);
      _objc_release(lVar4);
      func_0x00010c204680(puVar9);
      _objc_release(puVar10);
    }
    puVar10 = PTR_PTR_1126caa88;
    _objc_opt_new();
    func_0x00010c20caa0();
    lVar4 = param_3;
    func_0x00010c111780();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar20 = (undefined *)0x0;
      puVar11 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puVar20 = PTR_PTR_1126caa90;
      _objc_opt_new();
      lVar5 = lVar4;
      func_0x000107d6b30c(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4020(puVar20);
      _objc_release(lVar5);
      lVar5 = lVar4;
      func_0x000107d6ad3c();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    func_0x00010c1e18a0(puVar10);
    func_0x00010bf1e220(param_3);
    func_0x00010c1e8880(puVar10);
    puVar12 = PTR_PTR_1126be930;
    _objc_opt_new(PTR_PTR_1126be930);
    func_0x00010c172920();
    puVar13 = PTR_PTR_1126ba668;
    _objc_opt_new(PTR_PTR_1126ba668);
    func_0x00010c1fea60();
    puVar14 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar15 = puVar14;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar16 = puVar13;
    func_0x00010bf63640(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf21f60(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60(puVar14);
    puVar18 = puVar14;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar4);
    _objc_release(puVar11);
    _objc_release(puVar20);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(param_3);
    func_0x00010c15c260(uVar8);
    _objc_release(puVar18);
    _objc_release(uVar8);
    _objc_release(uVar6);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 10645fd90; end: 10645fdbf; -[SCBloopsStoryShareSender .cxx_destruct] */

void FUN_10645fd90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10645fdc0; end: 106460847; -[SCBloopsContextInfoCardView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10645fdc0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined8 uVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined8 *puVar58;
  undefined8 uVar59;
  long lVar60;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR_PTR_1126f13c8;
  puVar58 = &uStack_120;
  uStack_120 = param_1;
  _objc_msgSendSuper2(puVar58,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar58 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar58);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar58);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar60 = (long)_DAT_112747d8c;
    uVar59 = *(undefined8 *)((long)puVar58 + lVar60);
    *(undefined **)((long)puVar58 + lVar60) = puVar2;
    _objc_release(uVar59);
    func_0x00010c219b60(*(undefined8 *)((long)puVar58 + lVar60));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e4fff8;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e4fff8,
                        &PTR____CFConstantStringClassReference_110dc98b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar3);
    _objc_release(ppuVar4);
    func_0x00010c21ad00(puVar3);
    func_0x00010c165e20(puVar3);
    func_0x00010befbb60(puVar1);
    puVar5 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar5);
    _objc_release(puVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e50018;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e50018,
                        &PTR____CFConstantStringClassReference_110dc98b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar5);
    _objc_release(ppuVar4);
    func_0x00010c21ad00(puVar5);
    func_0x00010c165e20(puVar5);
    func_0x00010befbb60(puVar1);
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bdc2640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    func_0x00010befbd60(puVar7);
    func_0x00010befbb60(puVar1);
    uVar59 = *(undefined8 *)((long)puVar58 + (long)_DAT_112747d90);
    *(undefined **)((long)puVar58 + (long)_DAT_112747d90) = puVar7;
    _objc_retain(puVar7);
    _objc_release(uVar59);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar58;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    puStack_110 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar58;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    puStack_108 = puVar13;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar58;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    puStack_100 = puVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar58;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar19;
    uVar20 = *(undefined8 *)((long)puVar58 + lVar60);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uVar20;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar59;
    uVar22 = *(undefined8 *)((long)puVar58 + lVar60);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar24;
    uVar25 = *(undefined8 *)((long)puVar58 + lVar60);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    func_0x00010bf49420(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar26;
    uVar27 = *(undefined8 *)((long)puVar58 + lVar60);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar27;
    func_0x00010bf49420(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar7;
    uStack_d8 = uVar28;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar29;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar7;
    puStack_d0 = puVar30;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar31;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar7;
    puStack_c8 = puVar32;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar33;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar36 = puVar7;
    puStack_c0 = puVar35;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar38 = puVar36;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar39 = puVar3;
    puStack_b8 = puVar38;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = *(undefined8 *)((long)puVar58 + lVar60);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar39;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar42 = puVar3;
    puStack_b0 = puVar41;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar43 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar44 = puVar42;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar45 = puVar3;
    puStack_a8 = puVar44;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar46 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar47 = puVar45;
    func_0x00010bf493c0(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar48 = puVar5;
    puStack_a0 = puVar47;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar49 = *(undefined8 *)((long)puVar58 + lVar60);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar50 = puVar48;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar51 = puVar5;
    puStack_98 = puVar50;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar52 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar53 = puVar51;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar54 = puVar5;
    puStack_90 = puVar53;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar55 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar56 = puVar54;
    func_0x00010bf493c0(0xc02a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar57 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar56;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar57);
    _objc_release(puVar56);
    _objc_release(puVar55);
    _objc_release(puVar54);
    _objc_release(puVar53);
    _objc_release(puVar52);
    _objc_release(puVar51);
    _objc_release(puVar50);
    _objc_release(uVar49);
    _objc_release(puVar48);
    _objc_release(puVar47);
    _objc_release(puVar46);
    _objc_release(puVar45);
    _objc_release(puVar44);
    _objc_release(puVar43);
    _objc_release(puVar42);
    _objc_release(puVar41);
    _objc_release(uVar40);
    _objc_release(puVar39);
    _objc_release(puVar38);
    _objc_release(puVar37);
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(puVar23);
    _objc_release(uVar22);
    _objc_release(uVar59);
    _objc_release(puVar21);
    _objc_release(uVar20);
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
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar58;
  }
  ___stack_chk_fail();
  puVar58 = *(undefined8 **)(puVar1 + _DAT_112747d8c);
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar58,PTR_s_setImage__1126481e8);
  return puVar58;
}



/* Entry: 106460848; end: 106460857; -[SCBloopsContextInfoCardView setSelfieImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106460848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112747d8c),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 106460858; end: 106460867; -[SCBloopsContextInfoCardView setInfoButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106460858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112747d90),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 106460868; end: 10646089f; -[SCBloopsContextInfoCardView _handleInfoTap] */

void FUN_106460868(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064608a0; end: 1064608bf; -[SCBloopsContextInfoCardView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064608a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112747d94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064608c0; end: 1064608d3; -[SCBloopsContextInfoCardView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064608c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112747d94,param_3);
  return;
}



/* Entry: 1064608d4; end: 10646091f; -[SCBloopsContextInfoCardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064608d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112747d94);
  _objc_storeStrong(param_1 + _DAT_112747d90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747d8c,0);
  return;
}



/* Entry: 106460920; end: 106460a33; -[SCBloopsContextInfoCardViewController initWithTargetsService:webBrowserPresenter:infoCardUrlString:viewLocation:infoButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106460920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_58 = PTR_PTR_1126f13d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112747d98;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112747d9c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112747da0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112747da4) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112747da8) = param_7;
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106460a34; end: 106460aa7; -[SCBloopsContextInfoCardViewController loadView] */

void FUN_106460a34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126caa98;
  _objc_alloc(PTR_PTR_1126caa98);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106460aa8; end: 106460b1b; -[SCBloopsContextInfoCardViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106460aa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f13d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac340();
  _objc_release(uVar1);
  func_0x00010be4cc40(param_1);
  return;
}



/* Entry: 106460b1c; end: 106460b43; -[SCBloopsContextInfoCardViewController bloopsContextInfoCardViewDidTapInfoButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106460b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112747d9c),
             PTR_s_presentWebBrowserOnViewControlle_1126215e0,param_1,
             *(undefined8 *)(param_1 + _DAT_112747da0),*(undefined8 *)(param_1 + _DAT_112747da4),0);
  return;
}



/* Entry: 106460b44; end: 106460c53; -[SCBloopsContextInfoCardViewController _loadCameosSelfie] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106460b44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x19,
                      &PTR____CFConstantStringClassReference_110e50058);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112747d98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e14e0(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 106460c54; end: 106460d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106460c54(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112747d98);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    func_0x00010bfc3120(0x4062000000000000,0x4062000000000000,uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106460d9c; end: 106460e0f;  */

void FUN_106460d9c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbca0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106460e10; end: 106460e5f; -[SCBloopsContextInfoCardViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106460e10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747da0,0);
  _objc_storeStrong(param_1 + _DAT_112747d9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747d98,0);
  return;
}



/* Entry: 106460e60; end: 106460f63; -[SCBloopsContextInfoCardViewControllerFactoryImpl initWithTargetsService:webBrowsingScopeExposer:infoCardUrlString:userTrackedLogger:infoButtonHidden:] */

undefined1 *
FUN_106460e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126f13d8;
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
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106460f64; end: 106460fdb; -[SCBloopsContextInfoCardViewControllerFactoryImpl createBloopsContextInfoCardViewControllerWithViewLocation:] */

void FUN_106460f64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126caaa0;
  _objc_alloc(PTR_PTR_1126caaa0);
  func_0x00010c062d80();
  puVar2 = PTR_PTR_1126caaa8;
  _objc_alloc(PTR_PTR_1126caaa8);
  func_0x00010c050d80();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106460fdc; end: 106461063; -[SCBloopsContextInfoCardViewControllerFactoryImpl .cxx_destruct] */

void FUN_106460fdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106461064; end: 10646120f; -[SCBloopsContextServiceProvider _createInfoCardVCFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106461064(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = param_1;
  FUN_106461210();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108c2bd70();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar6 = param_1;
  FUN_106461210(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(lVar6);
  puVar4 = PTR_PTR_1126caab8;
  _objc_alloc(PTR_PTR_1126caab8);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112747dc4;
    _objc_loadWeakRetained(lVar6);
  }
  lVar1 = lVar6;
  func_0x00010c26a520(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar7 = 0;
    param_1 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112747dd0);
    _objc_retain(uVar7);
    param_1 = param_1 + _DAT_112747dcc;
    _objc_loadWeakRetained(param_1);
  }
  lVar5 = param_1;
  func_0x00010c293fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c050da0(puVar4,param_2,lVar1,uVar7,lVar2,lVar5,lVar3);
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106461210; end: 106461233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106461210(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112747dc8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106461234; end: 106461293; -[SCBloopsContextServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106461234(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112747dd0,0);
  _objc_destroyWeak(param_1 + _DAT_112747dcc);
  _objc_destroyWeak(param_1 + _DAT_112747dc8);
  _objc_destroyWeak(param_1 + _DAT_112747dc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112747dc0);
  return;
}



/* Entry: 106461294; end: 106461337; -[SCBloopsContextWebBrowserPresenter initWithWebBrowsingScopeExposer:userTrackedLogger:] */

undefined1 *
FUN_106461294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f13e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106461338; end: 1064613a3; -[SCBloopsContextWebBrowserPresenter presentWebBrowserOnViewController:urlString:viewLocation:webOpenType:] */

void FUN_106461338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_4);
  func_0x00010be7f560(param_1,param_2,param_3,param_4);
  func_0x00010be5a8e0(param_1,param_2,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064613a4; end: 1064613eb; -[SCBloopsContextWebBrowserPresenter webBrowserDidDismiss:] */

void FUN_1064613a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1064613ec; end: 1064615bf; -[SCBloopsContextWebBrowserPresenter _presentWebBrowserOnViewController:urlString:] */

void FUN_1064613ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  func_0x00010bdc3460(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  puVar3 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1064615c0;
  puStack_60 = &UNK_110842308;
  puVar5 = puVar1;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3,param_2,&puStack_78,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b5a68;
  _objc_alloc(PTR_PTR_1126b5a68);
  func_0x00010c000e00();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 1064615c0; end: 1064615d7;  */

void FUN_1064615c0(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1064615d8; end: 106461687; -[SCBloopsContextWebBrowserPresenter _logWebOpen:viewLocation:webOpenType:] */

void FUN_1064615d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd4fe0(param_1,param_2,param_4);
  puVar2 = PTR_PTR_1126caac0;
  _objc_opt_new(PTR_PTR_1126caac0);
  func_0x00010c21d420();
  _objc_release(param_3);
  func_0x00010c1728e0(puVar2,param_2,lVar1);
  func_0x00010c172a40(puVar2,param_2,param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106461688; end: 10646173b; -[SCBloopsContextWebBrowserPresenter _bloopsSpotlightSourceTypeFromViewLocation:] */

undefined8 FUN_106461688(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (param_3 < 0x4a) {
    if (param_3 < 0x46) {
      if (param_3 == 7) {
        return 0xd;
      }
      if (param_3 == 0x14) {
        return 0xb;
      }
    }
    else {
      if (param_3 == 0x46) {
        return 10;
      }
      if (param_3 == 0x49) {
        return 8;
      }
    }
  }
  else {
    uVar1 = param_3 - 0x56;
    if (uVar1 < 0x10) {
      if ((1L << (uVar1 & 0x3f) & 0x8a02U) != 0) {
        return 0xb;
      }
      if ((1L << (uVar1 & 0x3f) & 0x1010U) != 0) {
        return 8;
      }
      if (uVar1 == 0) {
        return 0xc;
      }
    }
    if (param_3 == 0x54) {
      return 0xd;
    }
    if (param_3 == 0x4a) {
      return 9;
    }
  }
  return 0;
}



/* Entry: 10646173c; end: 10646176b; -[SCBloopsContextWebBrowserPresenter .cxx_destruct] */

void FUN_10646173c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10646176c; end: 106461777; +[SCCGenAIMySelfieOnboardingPrivacyPolicyPopupPresent modulePath] */

undefined ** FUN_10646176c(void)

{
  return &PTR____CFConstantStringClassReference_110e50078;
}


