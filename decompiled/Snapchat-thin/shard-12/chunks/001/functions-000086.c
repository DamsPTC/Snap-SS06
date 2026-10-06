/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d37238; end: 108d3723b; -[SCBitmojiUnlinkingView tableView:heightForFooterInSection:] */

undefined8 FUN_108d37238(void)

{
  return 0x404c000000000000;
}



/* Entry: 108d3723c; end: 108d37283; -[SCBitmojiUnlinkingView tableView:viewForFooterInSection:] */

void FUN_108d3723c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf6e0e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ef6218);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108d37284; end: 108d372af; -[SCBitmojiUnlinkingView didTapUnlinkBitmojiForView:] */

void FUN_108d37284(undefined8 param_1)

{
  func_0x000108d37840();
  func_0x00010bf78ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d372b0; end: 108d372eb; -[SCBitmojiUnlinkingView setAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d372b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000108d37838();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b510);
  *(undefined8 *)(param_1 + _DAT_11277b510) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedf970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelfie_112595800);
  return;
}



/* Entry: 108d372ec; end: 108d37353; -[SCBitmojiUnlinkingView _avatarImageDidLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d372ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b500;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x000108d37838();
  func_0x00010c1a7f60(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2));
  func_0x000108d377d4();
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b504),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 108d37354; end: 108d3748b; -[SCBitmojiUnlinkingView _fetchImageForCell:image2x:image3x:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d37354(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000108d37838();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277b4f8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d377bc();
  func_0x000108d37820();
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar2,param_2,param_1,6);
  func_0x000108d378bc();
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d3748c;
  puStack_50 = &UNK_11084d858;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf88c20(uVar3,param_2,puVar1,puVar2,auStack_68);
  func_0x000108d377bc();
  func_0x000108d37820();
  func_0x000108d377dc();
  func_0x000108d37810();
  func_0x000108d3788c();
  func_0x000108d377d4();
  return;
}



/* Entry: 108d3748c; end: 108d3750b;  */

void FUN_108d3748c(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  
  func_0x000108d37828();
  func_0x000108d378bc();
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108d3750c;
  puStack_38 = &UNK_110841f80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000108d37818();
  uStack_30 = uVar1;
  _objc_retain();
  func_0x000107c312cc("APPSTORE",auStack_50);
  func_0x000108d3788c();
  _objc_release(uStack_30);
  func_0x000108d377d4();
  return;
}



/* Entry: 108d3750c; end: 108d37597;  */

void FUN_108d3750c(long param_1,undefined8 param_2)

{
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d378b0();
  func_0x00010c14d100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe90c0(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  func_0x000108d377bc();
  func_0x000108d37810();
  func_0x000108d377dc();
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108d37598; end: 108d376df; -[SCBitmojiUnlinkingView _updateSelfie] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d37598(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277b500));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11277b504));
  ppuVar2 = *(undefined ***)(param_1 + _DAT_11277b4f4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd70d8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  func_0x000108d37818();
  func_0x000108d377bc();
  func_0x000108d377dc();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277b4f0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277b510);
  func_0x000108d378bc();
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d376e0;
  puStack_48 = &UNK_110846320;
  _objc_copyWeak(auStack_40,auStack_38);
  FUN_108d3221c(uVar4,uVar3,ppuVar1,0,auStack_60);
  _objc_destroyWeak(auStack_40);
  func_0x000108d37810();
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108d376e0; end: 108d37713;  */

void FUN_108d376e0(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000108d37828();
  lVar1 = unaff_x20 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdd1d40();
  func_0x000108d377d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d37714; end: 108d37727; -[SCBitmojiUnlinkingView delegate] */

void FUN_108d37714(void)

{
  func_0x000108d37840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d37728; end: 108d3773b; -[SCBitmojiUnlinkingView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d37728(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b50c,param_3);
  return;
}



/* Entry: 108d3773c; end: 108d377af; -[SCBitmojiUnlinkingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3773c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b50c);
  FUN_108d377b0((long)_DAT_11277b510);
  FUN_108d377b0((long)_DAT_11277b4fc);
  FUN_108d377b0((long)_DAT_11277b504);
  FUN_108d377b0((long)_DAT_11277b4f8);
  FUN_108d377b0((long)_DAT_11277b4f4);
  FUN_108d377b0((long)_DAT_11277b4f0);
  FUN_108d377b0((long)_DAT_11277b500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b508,0);
  return;
}



/* Entry: 108d377b0; end: 108d378c7;  */

void FUN_108d377b0(long param_1)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(unaff_x19 + param_1,0);
  return;
}



/* Entry: 108d378c8; end: 108d378e3; +[SCOnDemandResource bitmojiLinkingGraphicWithConfigProvider:] */

void FUN_108d378c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aebd8,PTR_s_scaleSensitiveWithUrl2x_url3x__112631308,
             &PTR____CFConstantStringClassReference_110ef6298,
             &PTR____CFConstantStringClassReference_110ef62b8);
  return;
}



/* Entry: 108d378e4; end: 108d37b1b; -[SCBitmojiSelfieCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108d378e4(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fe6d0;
  puVar1 = &uStack_60;
  uStack_60 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    func_0x000108d38c18();
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_11277b514;
    func_0x000108d38c28();
    func_0x000108d38ca8(*(undefined8 *)((long)puVar1 + lVar3));
    func_0x000108d38d68();
    func_0x000108d38c94();
    param_1 = param_1 * 0.5;
    func_0x00010bf19960(param_1,param_1,param_1,0,0x401921fb54442d18,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d38c74();
    func_0x00010bdc1040();
    func_0x000108d38d7c();
    func_0x000108d38c18();
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d38d70();
    func_0x000108d38c20();
    func_0x000108d38c18();
    func_0x000108d38c88();
    func_0x000108d38bf8();
    lVar3 = (long)_DAT_11277b518;
    func_0x000108d38c28();
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d38c74();
    func_0x00010bdc0fe0();
    func_0x00010c08c0e0(*(undefined8 *)((long)puVar1 + lVar3));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    func_0x000108d38c50();
    func_0x000108d38c18();
    func_0x00010c08c0e0(*(undefined8 *)((long)puVar1 + lVar3));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    func_0x000108d38c18();
    func_0x00010c08c0e0(*(undefined8 *)((long)puVar1 + lVar3));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1);
    func_0x000108d38c18();
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    func_0x000108d38c18();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    func_0x000108d38d20();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 108d37b1c; end: 108d37b87;  */

void FUN_108d37b1c(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  func_0x00010bf8c100(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38dd4();
  (*extraout_x8)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d38cc4();
  func_0x000108d38c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d37b88; end: 108d37bbb; -[SCBitmojiSelfieCollectionViewCell traitCollectionDidChange:] */

void FUN_108d37b88(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000108d38dc0();
  _objc_msgSendSuper2(auStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c2846c0();
  return;
}



/* Entry: 108d37bbc; end: 108d37c8b; -[SCBitmojiSelfieCollectionViewCell silhouetteView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d37bbc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b51c;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    func_0x000108d38c7c();
    func_0x000108d38bf8();
    func_0x000108d38c38();
    func_0x000108d38d60(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c08c0e0(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    func_0x000108d38c20();
    func_0x00010c289f00(param_1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11277b518),param_2,
                        *(undefined8 *)(param_1 + lVar2));
    func_0x000108d38d20(*(undefined8 *)(param_1 + lVar2));
    func_0x000108d38d04(FUN_108d37c8c,0xc2000000);
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar2);
  }
  func_0x000108d38d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108d37c8c; end: 108d37e23;  */

void FUN_108d37c8c(void)

{
  long lVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  double dVar2;
  
  func_0x000108d38cf4();
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38c60();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  dVar2 = 0.75;
  (**(code **)(lVar1 + 0x10))(0x3fe8000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x000108d38d34();
  func_0x000108d38c58();
  func_0x000108d38c50();
  func_0x000108d38c20();
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(*(undefined8 *)(unaff_x19 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38c60();
  (*extraout_x8_00)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d38c58();
  func_0x000108d38c50();
  func_0x000108d38c20();
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38c18();
  func_0x00010bf985e0(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38dac();
  (*extraout_x8_01)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(*(undefined8 *)(unaff_x19 + 0x20));
  _CGRectGetHeight();
  (**(code **)(lVar1 + 0x10))(dVar2 * 0.15000000596046448,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d38d34();
  func_0x000108d38c58();
  func_0x000108d38c50();
  func_0x000108d38c18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 108d37e24; end: 108d37f03; -[SCBitmojiSelfieCollectionViewCell avatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d37e24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277b520;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bf20c00();
    _CGRectGetHeight();
    func_0x000108d38c7c();
    func_0x000108d38bf8();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    func_0x000108d38c48(uVar1);
    func_0x000108d38d60(*(undefined8 *)(param_1 + lVar3));
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11277b518),param_2,
                        *(undefined8 *)(param_1 + lVar3));
    func_0x000108d38d20(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + lVar3);
  }
  func_0x000108d38d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108d37f04; end: 108d380ab;  */

void FUN_108d37f04(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108d38cf4();
  lVar3 = unaff_x20;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(0x3feb333340000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar3);
  func_0x000108d38d34();
  func_0x000108d38c58();
  func_0x000108d38c50();
  func_0x000108d38c20();
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(*(undefined8 *)(unaff_x19 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38c60();
  (*extraout_x8)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d38c58();
  func_0x000108d38c50();
  func_0x000108d38c20();
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38c18();
  func_0x00010bf985e0(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38dac();
  (*extraout_x8_00)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(unaff_x19 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d38d34();
  func_0x000108d38c58();
  func_0x000108d38c50();
  func_0x000108d38c18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 108d380ac; end: 108d382f7; -[SCBitmojiSelfieCollectionViewCell selectedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d380ac(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar4 = (long)_DAT_11277b524;
  lVar3 = *(long *)(param_2 + lVar4);
  if (lVar3 == 0) {
    func_0x000108d38c88();
    func_0x000108d38bf8();
    func_0x000108d38c38();
    func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar4),param_3,
                        &PTR____CFConstantStringClassReference_110ef6478);
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    func_0x000108d38c18();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108d382f8;
    puStack_60 = &UNK_1108471b0;
    lStack_58 = param_2;
    func_0x00010c0bbfc0(*(undefined8 *)(param_2 + lVar4),param_3,&puStack_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    func_0x000108d38c18();
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_11277b528;
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    *(undefined **)(param_2 + lVar3) = puVar1;
    func_0x000108d38c48(uVar2);
    func_0x000108d38ca8(*(undefined8 *)(param_2 + lVar3));
    func_0x00010c19bc00(*(undefined8 *)(param_2 + lVar3),param_3,0);
    func_0x00010c1bdb40(*(undefined8 *)(param_2 + lVar3),param_3,
                        *(undefined8 *)PTR__kCALineCapRound_110346d40);
    func_0x00010c1bdd00(0x4000000000000000,*(undefined8 *)(param_2 + lVar3));
    param_1 = param_1 * 0.5;
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19960(param_1,param_1,param_1,0,0x401921fb54442d18,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d38c74();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_2 + lVar3),param_3,puVar1);
    func_0x000108d38c18();
    func_0x00010c08c0e0(*(undefined8 *)(param_2 + lVar4));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    func_0x000108d38c18();
    func_0x00010bf38900(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d38d3c();
    func_0x00010befbb60();
    func_0x000108d38c20();
    func_0x00010bf38900(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x000108d38c18();
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300();
    func_0x000108d38c18();
    func_0x000108d38d68();
    lVar3 = *(long *)(param_2 + lVar4);
  }
  func_0x000108d38d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108d382f8; end: 108d38363;  */

void FUN_108d382f8(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  func_0x00010bf8c100(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38dd4();
  (*extraout_x8)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d38cc4();
  func_0x000108d38c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d38364; end: 108d3845b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38364(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d38c58();
  func_0x000108d38c50();
  func_0x000108d38c20();
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38cc4();
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d38c20();
  func_0x000108d38cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d3845c; end: 108d3862f; -[SCBitmojiSelfieCollectionViewCell checkmarkView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3845c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277b52c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    func_0x000108d38c88();
    func_0x000108d38ce0();
    func_0x000108d38c38();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c780(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    func_0x000108d38c18();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1f5ec0(0x402c000000000000,uVar2);
    func_0x000108d38c7c();
    func_0x000108d38ce0();
    func_0x000108d38d60();
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    func_0x000108d38d20();
    func_0x000108d38d04(FUN_108d38630,0xc2000000);
    func_0x00010c0bbfc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ef62d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d38d3c();
    func_0x00010c1a9f00();
    func_0x000108d38c20();
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_11277b530;
    func_0x000108d38c28();
    func_0x00010c19f0e0(0,0,0x403c000000000000,0x403c000000000000,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar3),param_2,0);
    func_0x000108d38c94();
    func_0x00010c1bdd00(0x4000000000000000,*(undefined8 *)(param_1 + lVar3));
    func_0x00010bf19960(0x402c000000000000,0x402c000000000000,0x402c000000000000,0,
                        0x401921fb54442d18,PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x000108d38d7c();
    func_0x000108d38c20();
    func_0x00010c08c0e0(*(undefined8 *)(param_1 + lVar4));
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d38d70();
    func_0x000108d38c20();
    func_0x000108d38c18();
    lVar3 = *(long *)(param_1 + lVar4);
  }
  func_0x000108d38d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108d38630; end: 108d38697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38630(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d38c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d38698; end: 108d386fb; -[SCBitmojiSelfieCollectionViewCell setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38698(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_30 [16];
  
  func_0x000108d38dc0();
  _objc_msgSendSuper2(auStack_30,PTR_s_setSelected__11265c598);
  if (param_3 == 0) {
    func_0x000108d38d4c((long)_DAT_11277b524);
  }
  else {
    func_0x00010c15a460();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d38d58();
    func_0x000108d38c18();
  }
  func_0x000108d38d68();
  return;
}



/* Entry: 108d386fc; end: 108d387a7; -[SCBitmojiSelfieCollectionViewCell setAvatarImage:selfieId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d386fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000108d38cbc();
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b534);
  *(undefined8 *)(param_1 + _DAT_11277b534) = param_4;
  func_0x000108d38c48(uVar1);
  func_0x000108d38d4c((long)_DAT_11277b51c);
  func_0x00010bf132a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38d58();
  func_0x000108d38c18();
  func_0x00010bf132a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  func_0x000108d38c20();
  func_0x000108d38c18();
  func_0x00010bf132a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d387a8; end: 108d387f3; -[SCBitmojiSelfieCollectionViewCell showSilhouetteView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d387a8(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277b520),param_2,1);
  func_0x00010c23c680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d387f4; end: 108d38817; -[SCBitmojiSelfieCollectionViewCell updateColors] */

void FUN_108d387f4(undefined8 param_1)

{
  func_0x00010c289a40();
                    /* WARNING: Could not recover jumptable at 0x00010c289f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateSilhouetteViewColor_1126801e8);
  return;
}



/* Entry: 108d38818; end: 108d388ef; -[SCBitmojiSelfieCollectionViewCell updateSelectedColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38818(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c07d660();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((int)lVar1 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1c7a0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000108d38c74();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + _DAT_11277b514),param_2,puVar2);
  func_0x000108d38c18();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c780(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38c74();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_1 + _DAT_11277b528),param_2,puVar2);
  func_0x000108d38c18();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38c74();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_1 + _DAT_11277b530),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d388f0; end: 108d3898b; -[SCBitmojiSelfieCollectionViewCell updateSilhouetteViewColor] */

void FUN_108d388f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0x21;
  _dispatch_get_global_queue(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38d20();
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108d3898c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c27d8c(uVar1,auStack_50);
  func_0x000108d38cc4();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108d3898c; end: 108d38a63;  */

void FUN_108d3898c(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  FUN_108ffeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38d3c();
  func_0x00010c2bb380();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d38c20();
  func_0x000108d38c18();
  func_0x000108d38d20();
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d38a64;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  puStack_40 = puVar1;
  _objc_retain(puVar1);
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,auStack_60);
  _objc_release(puStack_40);
  func_0x000108d38c50();
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108d38a64; end: 108d38aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38a64(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11277b51c),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d38aa8; end: 108d38ab7; -[SCBitmojiSelfieCollectionViewCell selfieId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d38aa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b534);
}



/* Entry: 108d38ab8; end: 108d38ac3; -[SCBitmojiSelfieCollectionViewCell setSelfieId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38ab8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d38ac4; end: 108d38aef; -[SCBitmojiSelfieCollectionViewCell setSelectedView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38ac4(void)

{
  func_0x000108d38da0();
  func_0x000108d38cbc();
  func_0x000108d38d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d38af0; end: 108d38b1b; -[SCBitmojiSelfieCollectionViewCell setCheckmarkView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38af0(void)

{
  func_0x000108d38da0();
  func_0x000108d38cbc();
  func_0x000108d38d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d38b1c; end: 108d38b47; -[SCBitmojiSelfieCollectionViewCell setSilhouetteView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38b1c(void)

{
  func_0x000108d38da0();
  func_0x000108d38cbc();
  func_0x000108d38d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d38b48; end: 108d38b73; -[SCBitmojiSelfieCollectionViewCell setAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38b48(void)

{
  func_0x000108d38da0();
  func_0x000108d38cbc();
  func_0x000108d38d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d38b74; end: 108d38beb; -[SCBitmojiSelfieCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d38b74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b520,0);
  func_0x000108d38c0c((long)_DAT_11277b51c);
  func_0x000108d38c0c((long)_DAT_11277b52c);
  func_0x000108d38c0c((long)_DAT_11277b524);
  func_0x000108d38c0c((long)_DAT_11277b534);
  func_0x000108d38c0c((long)_DAT_11277b530);
  func_0x000108d38c0c((long)_DAT_11277b528);
  func_0x000108d38c0c((long)_DAT_11277b518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b514,0);
  return;
}



/* Entry: 108d38bec; end: 108d38de7;  */

void FUN_108d38bec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d38de8; end: 108d3906b; -[SCBitmojiSelfieDoneButton initWithFrame:] */

undefined1 * FUN_108d38de8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fe6d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf1c780(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d39438();
    func_0x000108d39414();
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    func_0x000108d39414();
    func_0x00010c181ee0(puVar1);
    func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    func_0x000108d3941c();
    func_0x000108d39414();
    func_0x00010c17d4c0(puVar1);
    func_0x00010c2163a0(0,0x4034000000000000,0,0x4034000000000000,puVar1);
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    func_0x000108d39414();
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    func_0x000108d39414();
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4018000000000000);
    func_0x000108d39414();
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f800000);
    func_0x000108d39414();
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x3fc999999999999a;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar2);
    func_0x000108d3941c();
    func_0x000108d39414();
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    func_0x000108d39414();
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(uVar3);
    func_0x000108d3941c();
    func_0x000108d39414();
    func_0x00010bf20c00(puVar1);
    _CGRectGetMidY();
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d39448();
    func_0x000108d39414();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d3906c; end: 108d39263; -[SCBitmojiSelfieDoneButton indicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3906c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar5 = (long)_DAT_11277b538;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffb60(puVar1,param_2,puVar2,1);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x000108d3941c();
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x108d39160;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108d39264; end: 108d392d7; -[SCBitmojiSelfieDoneButton setHighlighted:] */

void FUN_108d39264(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe6d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38);
  if (param_3 == 0) {
    func_0x00010bf1c780(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1c760();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000108d39438();
  func_0x000108d39414();
  return;
}



/* Entry: 108d392d8; end: 108d3935b; -[SCBitmojiSelfieDoneButton showIndicator:] */

void FUN_108d392d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d39424();
    func_0x00010bfed500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
  }
  else {
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d39424();
    func_0x00010bfed500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
  }
  func_0x000108d39414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d3935c; end: 108d393c7; -[SCBitmojiSelfieDoneButton updateConstraints] */

void FUN_108d3935c(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x00010bf20c00();
  _CGRectGetMidY();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d39448();
  func_0x000108d39414();
  puStack_38 = PTR_PTR_1126fe6d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_updateConstraints_11267ec30);
  return;
}



/* Entry: 108d393c8; end: 108d393ff; -[SCBitmojiSelfieDoneButton setIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d393c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b538;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d39400; end: 108d3945f; -[SCBitmojiSelfieDoneButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d39400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b538,0);
  return;
}



/* Entry: 108d39460; end: 108d39797; -[SCBitmojiSelfiePickerCollectionHeader initWithFrame:] */

undefined8 * FUN_108d39460(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 *unaff_x21;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126fe6e0;
  puVar2 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    func_0x00010c165e20(puVar3);
    func_0x00010c1c83a0(0x3fe6666666666666,puVar3);
    func_0x00010c1cfce0(puVar3);
    func_0x00010c213040(puVar3);
    func_0x00010c21ad00(puVar3);
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    FUN_108d39798();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef62f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar3);
    FUN_108d39798();
    func_0x00010c160fc0(puVar3);
    func_0x00010befbb60(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493c0(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    puStack_88 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493c0(0xc038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    puStack_80 = puVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf34860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    puStack_78 = unaff_x21;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf348e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    FUN_108d39798();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x21);
  return unaff_x21;
}



/* Entry: 108d39798; end: 108d397eb;  */

void FUN_108d39798(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d397ec; end: 108d39907; -[SCBitmojiFriendmojiHintScope initWithUIContainer:targetView:boundingView:boundingInset:delegate:] */

undefined1 *
FUN_108d397ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fe6e8;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_10);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108d39908; end: 108d3990f; -[SCBitmojiFriendmojiHintScope uiContainer] */

undefined8 FUN_108d39908(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d39910; end: 108d39917; -[SCBitmojiFriendmojiHintScope targetView] */

undefined8 FUN_108d39910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d39918; end: 108d3991f; -[SCBitmojiFriendmojiHintScope boundingView] */

undefined8 FUN_108d39918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108d39920; end: 108d3992b; -[SCBitmojiFriendmojiHintScope boundingInset] */

undefined8 FUN_108d39920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108d3992c; end: 108d39943; -[SCBitmojiFriendmojiHintScope delegate] */

void FUN_108d3992c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d39944; end: 108d39987; -[SCBitmojiFriendmojiHintScope .cxx_destruct] */

void FUN_108d39944(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d39988; end: 108d39acb; -[SCBitmojiFriendmojiPickerScope initWithUIContainer:bitmojiUsers:targetView:boundingView:boundingInset:delegate:] */

undefined1 *
FUN_108d39988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fe6f0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_11);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108d39acc; end: 108d39ad3; -[SCBitmojiFriendmojiPickerScope uiContainer] */

undefined8 FUN_108d39acc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d39ad4; end: 108d39adb; -[SCBitmojiFriendmojiPickerScope bitmojiUsers] */

undefined8 FUN_108d39ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d39adc; end: 108d39ae3; -[SCBitmojiFriendmojiPickerScope targetView] */

undefined8 FUN_108d39adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108d39ae4; end: 108d39aeb; -[SCBitmojiFriendmojiPickerScope boundingView] */

undefined8 FUN_108d39ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108d39aec; end: 108d39af7; -[SCBitmojiFriendmojiPickerScope boundingInset] */

undefined8 FUN_108d39aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108d39af8; end: 108d39b0f; -[SCBitmojiFriendmojiPickerScope delegate] */

void FUN_108d39af8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d39b10; end: 108d39b5f; -[SCBitmojiFriendmojiPickerScope .cxx_destruct] */

void FUN_108d39b10(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d39b60; end: 108d39c8f;  */

void FUN_108d39b60(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1338);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bfb1920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067ec0();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126dbd40;
  _objc_opt_new(PTR_PTR_1126dbd40);
  uVar4 = uVar1;
  func_0x00010c0b4ca0(uVar1);
  func_0x00010c1a99c0(puVar6,param_2,uVar4);
  uVar4 = uVar2;
  func_0x00010c067ec0(uVar2);
  func_0x00010c220e20(puVar6,param_2,uVar4);
  if ((uVar5 & 0xfffffffa) == 0) {
    func_0x00010c20eaa0(puVar6,param_2,uVar5);
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108d39c90; end: 108d39ce3;  */

bool FUN_108d39c90(long param_1)

{
  bool bVar1;
  long lVar2;
  
  FUN_108d39b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfe5ea0();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c25dfa0(param_1);
    bVar1 = (int)lVar2 != 0;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 108d39ce4; end: 108d39d3f; -[SCPlayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d39ce4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fe6f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)((long)puVar1 + (long)_DAT_11277b568);
    uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *puVar1 = uVar2;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar1[5] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    puVar1[4] = uVar2;
  }
  return;
}



/* Entry: 108d39d40; end: 108d39d4b; +[SCPlayerView layerClass] */

void FUN_108d39d40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  return;
}



/* Entry: 108d39d4c; end: 108d39d4f; -[SCPlayerView playerLayer] */

void FUN_108d39d4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 108d39d50; end: 108d39d93; -[SCPlayerView player] */

void FUN_108d39d50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d39d94; end: 108d39de3; -[SCPlayerView setPlayer:] */

void FUN_108d39d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c100c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dda40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d39de4; end: 108d39e13; -[SCPlayerView imageOverlayLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d39de4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b56c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d39e14; end: 108d39ef3; -[SCPlayerView setImageOnOverlayLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d39e14(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277b56c;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c12c940();
  }
  if (param_3 == 0) {
    lVar3 = *(long *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c182ca0(*(undefined8 *)(param_1 + lVar4),param_2,
                        *(undefined8 *)PTR__kCAGravityResizeAspect_110346d28);
    lVar3 = param_3;
    func_0x00010bfe8380(param_3);
    func_0x00010bed97a0(param_1,param_2,lVar3);
    lVar3 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc1020();
    func_0x00010c182c80(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    lVar3 = param_1;
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d39ef4; end: 108d3a06b; -[SCPlayerView _updateImageOrientation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d39ef4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = (long)_DAT_11277b56c;
  if (*(long *)(param_1 + lVar1) == 0) {
    return;
  }
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,1);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  if (param_3 < 4) {
    if (param_3 == 1) {
      uVar2 = 0x400921fb54442d18;
    }
    else if (param_3 == 2) {
      uVar2 = 0xbff921fb54442d18;
    }
    else {
      if (param_3 != 3) goto LAB_108d3a034;
      uVar2 = 0x3ff921fb54442d18;
    }
    _CGAffineTransformMakeRotation(&uStack_60,uVar2);
    goto LAB_108d3a034;
  }
  if (param_3 < 6) {
    if (param_3 == 4) {
      _CGAffineTransformMakeScale(&uStack_60,0xbff0000000000000,0x3ff0000000000000);
      goto LAB_108d3a034;
    }
    if (param_3 != 5) goto LAB_108d3a034;
    uVar2 = 0x400921fb54442d18;
  }
  else if (param_3 == 6) {
    uVar2 = 0xbff921fb54442d18;
  }
  else {
    if (param_3 != 7) goto LAB_108d3a034;
    uVar2 = 0x3ff921fb54442d18;
  }
  _CGAffineTransformMakeRotation(&uStack_60,uVar2);
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_98 = uStack_38;
  uStack_a0 = uStack_40;
  _CGAffineTransformScale(&uStack_90,0xbff0000000000000,0x3ff0000000000000,&uStack_c0);
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
LAB_108d3a034:
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c166440(*(undefined8 *)(param_1 + lVar1),param_2,&uStack_90);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  return;
}



/* Entry: 108d3a06c; end: 108d3a173; -[SCPlayerView setPlaceholderImageLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3a06c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277b570;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == param_3) {
    lVar1 = *(long *)(param_1 + _DAT_11277b574);
    _objc_release();
    if (lVar1 == 0) goto LAB_108d3a160;
  }
  else {
    _objc_release();
  }
  if (*(long *)(param_1 + _DAT_11277b56c) == 0) {
    lVar1 = (long)_DAT_11277b574;
    if (*(long *)(param_1 + lVar1) != 0) {
      func_0x00010c12c940();
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0;
      _objc_release(uVar2);
    }
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x00010c12c960();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar2);
    }
    if (param_3 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_opt_new();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar3;
      _objc_release(uVar2);
      func_0x00010c066fa0(param_1,param_2,*(undefined8 *)(param_1 + lVar4),0);
      func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
    }
    func_0x00010c08cdc0(param_1);
  }
LAB_108d3a160:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d3a174; end: 108d3a1a3; -[SCPlayerView hasPlaceholderImageLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108d3a174(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277b574) != 0) {
    return true;
  }
  return *(long *)(param_1 + _DAT_11277b570) != 0;
}



/* Entry: 108d3a1a4; end: 108d3a317; -[SCPlayerView setPlayerPixelBufferToPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d3a1a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + _DAT_11277b56c) != 0) {
    return 1;
  }
  uVar1 = 2;
  func_0x000107c31924(2,0x10,0,0);
  if ((int)uVar1 != 0) {
    lVar5 = (long)_DAT_11277b574;
    if (*(long *)(param_1 + lVar5) != 0) {
      func_0x00010c12c940();
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release(uVar1);
    }
    lVar4 = (long)_DAT_11277b570;
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar1);
    }
    lVar4 = param_1;
    func_0x00010c100c60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf51f00();
    _objc_release(lVar4);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar3;
      _objc_release(uVar1);
      func_0x00010c182ca0(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c166440(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c182c80(*(undefined8 *)(param_1 + lVar5));
      _CVPixelBufferRelease(lVar2);
      lVar5 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066f40();
      _objc_release(lVar5);
      func_0x00010c08cdc0(param_1);
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Entry: 108d3a318; end: 108d3a337; -[SCPlayerView setPlaceholderPixelBufferTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3a318(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277b568);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 108d3a338; end: 108d3a46b; -[SCPlayerView setOuterBackgroundColor:forMediaAspectRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3a338(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277b578;
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  _objc_retain(param_4);
  func_0x00010c12c940(uVar2);
  lVar3 = (long)_DAT_11277b57c;
  func_0x00010c12c940(*(undefined8 *)(param_2 + lVar3));
  puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = param_4;
  _objc_retainAutorelease(param_4);
  func_0x00010bdc0fe0();
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar4),param_3,uVar2);
  puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = param_4;
  _objc_retainAutorelease(param_4);
  func_0x00010bdc0fe0();
  _objc_release(param_4);
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar3),param_3,uVar2);
  *(undefined8 *)(param_2 + _DAT_11277b580) = param_1;
  lVar3 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(lVar3);
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d3a46c; end: 108d3a73b; -[SCPlayerView layoutSubviews] */

/* WARNING: Possible PIC construction at 0x000108d3a510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d3a54c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d3a648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d3a688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d3a6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d3a714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d3a6d8) */
/* WARNING: Removing unreachable block (ram,0x000108d3a68c) */
/* WARNING: Removing unreachable block (ram,0x000108d3a64c) */
/* WARNING: Removing unreachable block (ram,0x000108d3a550) */
/* WARNING: Removing unreachable block (ram,0x000108d3a514) */
/* WARNING: Removing unreachable block (ram,0x000108d3a718) */
/* WARNING: Removing unreachable block (ram,0x000108d3a570) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3a46c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  
  func_0x00010bf20c00();
  func_0x00010bf20c00(param_5);
  lVar2 = param_5;
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c29a3e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == *(long *)PTR__AVLayerVideoGravityResizeAspect_110348048) {
    dVar8 = param_3 / param_4;
    lVar4 = (long)_DAT_11277b580;
    dVar5 = *(double *)(param_5 + lVar4);
    dVar6 = ABS(dVar8 - dVar5);
    dVar5 = ABS(dVar8 + dVar5) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
      bVar1 = dVar6 < dVar5;
    }
    if ((bVar1) || (dVar8 == 0.0)) goto LAB_108d3a4d4;
    _objc_release();
    _objc_release(lVar2);
    if ((ulong)ABS(dVar8) < 0x7ff0000000000000) {
      dVar5 = *(double *)(param_5 + lVar4);
      uVar3 = *(undefined8 *)(param_5 + _DAT_11277b578);
      if (dVar8 <= dVar5) {
        param_4 = (param_4 - param_3 / dVar5) * 0.5;
        uVar7 = 0;
        uVar9 = 0;
      }
      else {
        param_3 = (param_3 - param_4 * dVar5) * 0.5;
        uVar7 = 0;
        uVar9 = 0;
      }
      goto code_r0x00010c19f0e0;
    }
  }
  else {
LAB_108d3a4d4:
    _objc_release();
    _objc_release(lVar2);
  }
  uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  param_3 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  param_4 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  uVar3 = *(undefined8 *)(param_5 + _DAT_11277b578);
code_r0x00010c19f0e0:
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar7,uVar9,param_3,param_4,uVar3,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108d3a73c; end: 108d3a743; -[SCPlayerView playerModelCanChange] */

undefined8 FUN_108d3a73c(void)

{
  return 0;
}



/* Entry: 108d3a744; end: 108d3a793; -[SCPlayerView setVideoGravity:] */

void FUN_108d3a744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c100c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2218a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d3a794; end: 108d3a7a3; -[SCPlayerView videoGravity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3a794(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11277b584,1);
  return;
}



/* Entry: 108d3a7a4; end: 108d3a89f; -[SCPlayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3a7a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b584,0);
  _objc_storeStrong(param_1 + _DAT_11277b570,0);
  _objc_storeStrong(param_1 + _DAT_11277b574,0);
  _objc_storeStrong(param_1 + _DAT_11277b56c,0);
  _objc_storeStrong(param_1 + _DAT_11277b57c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b578,0);
  return;
}



/* Entry: 108d3a8a0; end: 108d3a8ab;  */

bool FUN_108d3a8a0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108d3a8ac; end: 108d3a927; +[SCCognacCanvasStickerAsset descriptor] */

undefined * FUN_108d3a8ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc1320,
                        &PTR____CFConstantStringClassReference_110ef65b8,&PTR_DAT_1132974b8,
                        &PTR_DAT_1132974d0,7,0x30,0x1c);
    func_0x00010c2289e0();
    puRam000000011372e580 = puVar1;
  }
  return puRam000000011372e580;
}



/* Entry: 108d3a928; end: 108d3a967; -[SCMemoriesPreviewVideoImportStrategy init] */

void FUN_108d3a928(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fe700;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 1;
  }
  return;
}



/* Entry: 108d3a968; end: 108d3a96f; -[SCMemoriesPreviewVideoImportStrategy retryAVAssetImportMaxAttempts] */

undefined8 FUN_108d3a968(void)

{
  return 5;
}



/* Entry: 108d3a970; end: 108d3a99f; -[SCMemoriesPreviewVideoImportStrategy initialExportSessionPreset] */

void FUN_108d3a970(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__AVAssetExportPreset1920x1080_110347e98;
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d3a9a0; end: 108d3aa2b; -[SCMemoriesPreviewVideoImportStrategy exportSessionPresetForFailedExportWithPreset:failureCount:] */

void FUN_108d3a9a0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c13f2c0();
  if (param_4 < lVar1) {
    lVar1 = param_1;
    func_0x00010c13f2c0();
    puVar2 = (undefined8 *)PTR__AVAssetExportPreset1920x1080_110347e98;
    if ((lVar1 / 2 <= (long)param_4) &&
       (func_0x00010c13f2c0(), puVar2 = (undefined8 *)PTR__AVAssetExportPreset1280x720_110347e90,
       param_1 + -1 <= (long)param_4)) {
      puVar2 = (undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8;
    }
    uVar3 = *puVar2;
    _objc_retain(uVar3);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108d3aa2c; end: 108d3aa33; -[SCMemoriesPreviewVideoImportStrategy outputFilePath] */

undefined8 FUN_108d3aa2c(void)

{
  return 0;
}



/* Entry: 108d3aa34; end: 108d3aa3b; -[SCMemoriesPreviewVideoImportStrategy allowDownloadFromiCloud] */

undefined8 FUN_108d3aa34(void)

{
  return 1;
}



/* Entry: 108d3aa3c; end: 108d3aa43; -[SCMemoriesPreviewVideoImportStrategy requestUnmodifiedOriginal] */

undefined8 FUN_108d3aa3c(void)

{
  return 0;
}



/* Entry: 108d3aa44; end: 108d3aa4b; -[SCMemoriesPreviewVideoImportStrategy rotateLandscapeVideoToPortraitOrientationRight] */

undefined1 FUN_108d3aa44(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108d3aa4c; end: 108d3aa53; -[SCMemoriesPreviewVideoImportStrategy setRotateLandscapeVideoToPortraitOrientationRight:] */

void FUN_108d3aa4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108d3aa54; end: 108d3adc7; -[SCGalleryOneSaveOptionView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108d3aa54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fe708;
  puVar1 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11277b58c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11277b590;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fa999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11277b594;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11277b598;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 108d3adc8; end: 108d3aee7;  */

void FUN_108d3adc8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


