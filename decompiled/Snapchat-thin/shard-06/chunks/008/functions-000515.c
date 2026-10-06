/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ddce6c; end: 104ddcef7; -[SCCommerceProductGalleryImageCell _resetShimmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddce6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127132cc;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  lVar2 = (long)_DAT_1127132dc;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127132d4);
  *(undefined8 *)(param_1 + _DAT_1127132d4) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127132d8;
  uVar1 = 0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf2dba0();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ddcef8; end: 104ddcfeb; -[SCCommerceProductGalleryImageCell _loadImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddcef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c23ba80(puVar1,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127132cc;
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  lVar3 = (long)_DAT_1127132dc;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127132d4);
  *(undefined8 *)(param_1 + _DAT_1127132d4) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127132d8);
  *(undefined8 *)(param_1 + _DAT_1127132d8) = 0;
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_1127132e0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf779a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ddcfec; end: 104ddd0e3; -[SCCommerceProductGalleryImageCell _showImageError:forURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddcfec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127132cc;
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x84);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf14aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  lVar4 = (long)_DAT_1127132dc;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar4),param_2,0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127132d4);
  *(undefined8 *)(param_1 + _DAT_1127132d4) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127132d8);
  *(undefined8 *)(param_1 + _DAT_1127132d8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104ddd0e4; end: 104ddd103; -[SCCommerceProductGalleryImageCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd0e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127132e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ddd104; end: 104ddd117; -[SCCommerceProductGalleryImageCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd104(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127132e0,param_3);
  return;
}



/* Entry: 104ddd118; end: 104ddd127; -[SCCommerceProductGalleryImageCell imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ddd118(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127132cc);
}



/* Entry: 104ddd128; end: 104ddd167; -[SCCommerceProductGalleryImageCell setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127132cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ddd168; end: 104ddd177; -[SCCommerceProductGalleryImageCell shimmeringView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ddd168(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127132dc);
}



/* Entry: 104ddd178; end: 104ddd1b7; -[SCCommerceProductGalleryImageCell setShimmeringView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127132dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ddd1b8; end: 104ddd1c7; -[SCCommerceProductGalleryImageCell imageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ddd1b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127132d4);
}



/* Entry: 104ddd1c8; end: 104ddd207; -[SCCommerceProductGalleryImageCell setImageProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127132d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ddd208; end: 104ddd217; -[SCCommerceProductGalleryImageCell imageCancelable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ddd208(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127132d8);
}



/* Entry: 104ddd218; end: 104ddd257; -[SCCommerceProductGalleryImageCell setImageCancelable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127132d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ddd258; end: 104ddd267; -[SCCommerceProductGalleryImageCell imageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ddd258(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127132d0);
}



/* Entry: 104ddd268; end: 104ddd273; -[SCCommerceProductGalleryImageCell setImageURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd268(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104ddd274; end: 104ddd2ef; -[SCCommerceProductGalleryImageCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd274(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127132d0,0);
  _objc_storeStrong(param_1 + _DAT_1127132d8,0);
  _objc_storeStrong(param_1 + _DAT_1127132d4,0);
  _objc_storeStrong(param_1 + _DAT_1127132dc,0);
  _objc_storeStrong(param_1 + _DAT_1127132cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127132e0);
  return;
}



/* Entry: 104ddd2f0; end: 104ddd357; +[SCCommerceProductHeaderCell sizeForWidth:] */

undefined1  [16] FUN_104ddd2f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(uVar1);
  _objc_release(param_2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 104ddd358; end: 104ddd3a7; -[SCCommerceProductHeaderCell initWithFrame:] */

undefined1 * FUN_104ddd358(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e43b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ddd3a8; end: 104ddd44b; -[SCCommerceProductHeaderCell populateWithTitle:] */

void FUN_104ddd3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4520();
  _objc_release(uVar1);
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ddd44c; end: 104ddd8ef; -[SCCommerceProductHeaderCell _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104ddd44c(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0888;
  _objc_alloc(PTR_PTR_1126b0888);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2163e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  lStack_88 = lVar6;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf493a0(lVar8,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  lStack_80 = lVar11;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar13;
  func_0x00010bf49500(lVar13,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  lStack_78 = lVar16;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar18;
  func_0x00010bf493a0(lVar18,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar22);
  _objc_release(puVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
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
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + _DAT_1127132e4);
}



/* Entry: 104ddd8f0; end: 104ddd8ff; -[SCCommerceProductHeaderCell titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ddd8f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127132e4);
}



/* Entry: 104ddd900; end: 104ddd93f; -[SCCommerceProductHeaderCell setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127132e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ddd940; end: 104ddd953; -[SCCommerceProductHeaderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127132e4,0);
  return;
}



/* Entry: 104ddd954; end: 104ddd95b; +[SCCommerceProductScrollingGalleryCell sizeForWidth:] */

void FUN_104ddd954(void)

{
  return;
}



/* Entry: 104ddd95c; end: 104dddc83; -[SCCommerceProductScrollingGalleryCell populateWithModel:heroAssetHelper:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddd95c(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    puVar2 = param_3;
    func_0x00010bfe9060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      lVar8 = (long)_DAT_1127132e8;
      puVar3 = param_3;
      func_0x00010c071ae0();
      _objc_release(puVar2);
      if (((ulong)puVar3 & 1) != 0) goto LAB_104dddc30;
      if (*(long *)(param_1 + lVar8) == 0) {
        bVar1 = false;
      }
      else {
        puVar2 = param_3;
        func_0x00010bfe9060();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfecde0();
        bVar1 = puVar3 != (undefined *)0x0;
        _objc_release(puVar2);
      }
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = param_3;
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126b08c0;
      _objc_alloc(PTR_PTR_1126b08c0);
      func_0x00010bf4cbe0(*(undefined8 *)(param_1 + lVar8));
      func_0x00010c003880(0,0,0,0,0,puVar2);
      lVar6 = (long)_DAT_1127132ec;
      uVar7 = *(undefined8 *)(param_1 + lVar6);
      _objc_retain(uVar7);
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bfe9060();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bf4b900();
      _objc_release(uVar5);
      if (((int)uVar4 == 0) || (uVar4 = uVar7, bVar1)) {
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010bfe9060();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_retain(uVar4);
        uVar5 = *(undefined8 *)(param_1 + lVar6);
        *(undefined8 *)(param_1 + lVar6) = uVar4;
        _objc_release(uVar5);
      }
      puVar3 = PTR_PTR_1126b08c8;
      _objc_alloc(PTR_PTR_1126b08c8);
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bfe9060(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01de20(0x3ff0000000000000,0,puVar3);
      _objc_release(uVar5);
      func_0x00010beab760(param_1);
      func_0x00010beb0d60(param_1);
      func_0x00010c27cda0(param_3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127132f0));
      _objc_initWeak(auStack_68,param_1);
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127132f4);
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010c1d3960(uVar5);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar3);
      _objc_release(uVar4);
    }
    _objc_release(puVar2);
  }
LAB_104dddc30:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104dddc84; end: 104dddcaf;  */

void FUN_104dddc84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcf100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dddcb0; end: 104ddddbb; -[SCCommerceProductScrollingGalleryCell _cleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dddcb0(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
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
  
  puVar21 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar22 = auStack_c8;
  lVar29 = lVar27;
  func_0x00010bf52a60();
  if (lVar29 != 0) {
    lVar25 = *plStack_100;
    do {
      lVar26 = 0;
      do {
        if (*plStack_100 != lVar25) {
          _objc_enumerationMutation(lVar27);
        }
        func_0x00010c12c960(*(undefined8 *)(lStack_108 + lVar26 * 8));
        lVar26 = lVar26 + 1;
      } while (lVar29 != lVar26);
      puVar22 = auStack_c8;
      lVar29 = lVar27;
      puVar21 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar29 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar22);
  _objc_retain(puVar21);
  func_0x00010bddf3e0(lVar27);
  puVar1 = PTR_PTR_1126b08d0;
  _objc_alloc();
  func_0x00010bffcc60();
  _objc_release(puVar22);
  _objc_release(puVar21);
  lVar28 = (long)_DAT_1127132f8;
  uVar2 = *(undefined8 *)(lVar27 + lVar28);
  *(undefined **)(lVar27 + lVar28) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(lVar27 + lVar28));
  lVar29 = lVar27;
  func_0x00010bf4dce0(lVar27);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  ppuVar3 = *(undefined ***)(lVar27 + lVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar27;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar29;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar27 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar27;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar26;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar27 + lVar28);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar27;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar27 + lVar28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar12;
  func_0x00010beef8c0(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(uVar10);
  _objc_release(uVar24);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(lVar6);
  _objc_release(lVar26);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(lVar25);
  _objc_release(lVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  if (puVar1 != (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar27 = (long)_DAT_1127132f0;
    uVar2 = *(undefined8 *)((long)ppuVar3 + lVar27);
    *(undefined **)((long)ppuVar3 + lVar27) = puVar13;
    _objc_release(uVar2);
    puVar13 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = (long)_DAT_1127132f4;
    uVar2 = *(undefined8 *)((long)ppuVar3 + lVar29);
    *(undefined **)((long)ppuVar3 + lVar29) = puVar13;
    _objc_release(uVar2);
    uVar24 = *(undefined8 *)((long)ppuVar3 + lVar29);
    func_0x000104df38fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar24);
    _objc_release(uVar2);
    ppuVar4 = ppuVar3;
    func_0x00010bf4dce0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar4);
    func_0x00010befbb60(*(undefined8 *)((long)ppuVar3 + lVar27));
    func_0x00010c219b60(*(undefined8 *)((long)ppuVar3 + lVar27));
    puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)ppuVar3 + lVar27);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)ppuVar3 + lVar29);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)ppuVar3 + lVar27);
    uStack_280 = uVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)ppuVar3 + lVar29);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)ppuVar3 + lVar27);
    uStack_278 = uVar24;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf4dce0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar4;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar16;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)ppuVar3 + lVar27);
    uStack_270 = uVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar3;
    func_0x00010bf4dce0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar19;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar18;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_268 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar5);
    _objc_release(ppuVar20);
    _objc_release(ppuVar19);
    _objc_release(uVar18);
    _objc_release(uVar11);
    _objc_release(ppuVar17);
    _objc_release(ppuVar4);
    _objc_release(uVar16);
    _objc_release(uVar24);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_release(uVar7);
    func_0x00010c219b60(*(undefined8 *)((long)ppuVar3 + lVar29));
    func_0x00010c16e480(*(undefined8 *)((long)ppuVar3 + lVar29));
    _objc_initWeak(auStack_288,ppuVar3);
    puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2a8 = 0xc2000000;
    pcStack_2a0 = FUN_104dde4c8;
    puStack_298 = &UNK_110846320;
    ppuVar3 = &puStack_2b0;
    param_2 = auStack_288;
    _objc_copyWeak(auStack_290,param_2);
    func_0x00010bfe55a0(puVar1);
    _objc_destroyWeak(auStack_290);
    _objc_destroyWeak(auStack_288);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar3 + 4);
  _objc_destroyWeak(auStack_288);
  __Unwind_Resume(puVar1);
  _objc_retain(param_2);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bee48a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ddddbc; end: 104dde0db; -[SCCommerceProductScrollingGalleryCell _setupCarouselWithConfig:heroAssetHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddddbc(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bddf3e0(param_1);
  puVar1 = PTR_PTR_1126b08d0;
  _objc_alloc();
  func_0x00010bffcc60();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar25 = (long)_DAT_1127132f8;
  uVar2 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25));
  lVar24 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar24);
  puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  ppuVar3 = *(undefined ***)(param_1 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar13;
  func_0x00010beef8c0(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(lVar25);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar23);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(lVar26);
  _objc_release(lVar24);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  if (puVar1 != (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar24 = (long)_DAT_1127132f0;
    uVar2 = *(undefined8 *)((long)ppuVar3 + lVar24);
    *(undefined **)((long)ppuVar3 + lVar24) = puVar14;
    _objc_release(uVar2);
    puVar14 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = (long)_DAT_1127132f4;
    uVar2 = *(undefined8 *)((long)ppuVar3 + lVar26);
    *(undefined **)((long)ppuVar3 + lVar26) = puVar14;
    _objc_release(uVar2);
    uVar23 = *(undefined8 *)((long)ppuVar3 + lVar26);
    func_0x000104df38fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar23);
    _objc_release(uVar2);
    ppuVar4 = ppuVar3;
    func_0x00010bf4dce0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar4);
    func_0x00010befbb60(*(undefined8 *)((long)ppuVar3 + lVar24));
    func_0x00010c219b60(*(undefined8 *)((long)ppuVar3 + lVar24));
    puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)((long)ppuVar3 + lVar24);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar3 + lVar26);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)ppuVar3 + lVar24);
    uStack_170 = uVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)ppuVar3 + lVar26);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)ppuVar3 + lVar24);
    uStack_168 = uVar23;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf4dce0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar4;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)ppuVar3 + lVar24);
    uStack_160 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar3;
    func_0x00010bf4dce0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar20;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar19;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_158 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar5);
    _objc_release(ppuVar21);
    _objc_release(ppuVar20);
    _objc_release(uVar19);
    _objc_release(uVar12);
    _objc_release(ppuVar18);
    _objc_release(ppuVar4);
    _objc_release(uVar17);
    _objc_release(uVar23);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar2);
    _objc_release(uVar11);
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)ppuVar3 + lVar26));
    func_0x00010c16e480(*(undefined8 *)((long)ppuVar3 + lVar26));
    _objc_initWeak(auStack_178,ppuVar3);
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_104dde4c8;
    puStack_188 = &UNK_110846320;
    ppuVar3 = &puStack_1a0;
    param_2 = auStack_178;
    _objc_copyWeak(auStack_180,param_2);
    func_0x00010bfe55a0(puVar1);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar3 + 4);
  _objc_destroyWeak(auStack_178);
  __Unwind_Resume(puVar1);
  _objc_retain(param_2);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bee48a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104dde0dc; end: 104dde4c7; -[SCCommerceProductScrollingGalleryCell _setupTryOnButtonWithIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dde0dc(undefined **param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar17 = (long)_DAT_1127132f0;
    uVar15 = *(undefined8 *)((long)param_1 + lVar17);
    *(undefined **)((long)param_1 + lVar17) = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_1127132f4;
    uVar15 = *(undefined8 *)((long)param_1 + lVar18);
    *(undefined **)((long)param_1 + lVar18) = puVar1;
    _objc_release(uVar15);
    uVar16 = *(undefined8 *)((long)param_1 + lVar18);
    func_0x000104df38fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar16);
    _objc_release(uVar15);
    ppuVar2 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar2);
    func_0x00010befbb60(*(undefined8 *)((long)param_1 + lVar17));
    func_0x00010c219b60(*(undefined8 *)((long)param_1 + lVar17));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)param_1 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)param_1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)param_1 + lVar17);
    uStack_a0 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)param_1 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)param_1 + lVar17);
    uStack_98 = uVar16;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)param_1 + lVar17);
    uStack_90 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf493c0(0xc040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar2);
    _objc_release(uVar7);
    _objc_release(uVar16);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)param_1 + lVar18));
    func_0x00010c16e480(*(undefined8 *)((long)param_1 + lVar18));
    _objc_initWeak(auStack_a8,param_1);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_104dde4c8;
    puStack_b8 = &UNK_110846320;
    param_1 = &puStack_d0;
    param_2 = auStack_a8;
    _objc_copyWeak(auStack_b0,param_2);
    func_0x00010bfe55a0(param_3);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 4);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(param_3);
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bee48a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dde4c8; end: 104dde50f;  */

void FUN_104dde4c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee48a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dde510; end: 104dde5f7; -[SCCommerceProductScrollingGalleryCell _updateWithIconImage:] */

void FUN_104dde510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104dde5c4;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104dde5f8; end: 104dde6a3; -[SCCommerceProductScrollingGalleryCell _setTryOnButtonImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dde5f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127132f4;
  func_0x00010c1a9fc0(*(undefined8 *)(param_3 + lVar4),param_4,param_5,0);
  func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar4));
  lVar4 = (long)_DAT_1127132f0;
  func_0x00010c19f0e0(0,0,param_1,param_2,*(undefined8 *)(param_3 + lVar4));
  puVar1 = PTR_PTR_1126b08d8;
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010085b3c8(0x4020000000000000,0x3ff0000000000000,0,0x4014000000000000,puVar1,uVar3,puVar2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104dde6a4; end: 104dde6d7; -[SCCommerceProductScrollingGalleryCell _arTryOnButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dde6a4(long param_1)

{
  param_1 = param_1 + _DAT_1127132fc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dde6d8; end: 104dde7d7; -[SCCommerceProductScrollingGalleryCell carouselDidChangeUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dde6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127132e8;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bfe9060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127132ec;
  lVar2 = lVar1;
  func_0x00010bfecde0();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010bfe9060();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(lVar4);
  if (lVar2 == 0x7fffffffffffffff || lVar1 == 0x7fffffffffffffff) {
    return;
  }
  param_1 = param_1 + _DAT_1127132fc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dde7d8; end: 104dde837; -[SCCommerceProductScrollingGalleryCell carouselDidLoadImage:forIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dde7d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127132fc;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf77960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dde838; end: 104dde857; -[SCCommerceProductScrollingGalleryCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dde838(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127132fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dde858; end: 104dde86b; -[SCCommerceProductScrollingGalleryCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dde858(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127132fc,param_3);
  return;
}



/* Entry: 104dde86c; end: 104dde8e7; -[SCCommerceProductScrollingGalleryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dde86c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127132fc);
  _objc_storeStrong(param_1 + _DAT_1127132ec,0);
  _objc_storeStrong(param_1 + _DAT_1127132f0,0);
  _objc_storeStrong(param_1 + _DAT_1127132f4,0);
  _objc_storeStrong(param_1 + _DAT_1127132e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127132f8,0);
  return;
}



/* Entry: 104dde8e8; end: 104ddeb03; +[SCCommerceProductTitleCell sizeForWidth:viewModel:] */

undefined1  [16] FUN_104dde8e8(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfa11a0();
  dVar6 = param_1 + -44.0;
  if (lVar1 != 0) {
    dVar6 = param_1 + -44.0 + -32.0;
  }
  dVar6 = dVar6 + -32.0;
  lVar1 = param_4;
  func_0x00010c2711a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 3.4028234663852886e+38;
  func_0x00010c14dd20(lVar1,param_3,lVar3,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar4 = dVar6 + dVar6;
  if (dVar5 <= dVar6 + dVar6) {
    dVar4 = dVar5;
  }
  dVar6 = dVar4 + 5.0;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  dVar6 = dVar6 + dVar4;
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bdd57a0(param_2,param_3,param_4);
  _objc_release(param_4);
  if ((int)param_2 != 0) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    dVar6 = dVar6 + dVar4;
    _objc_release(lVar1);
    _objc_release(param_4);
    dVar4 = 3.0;
    dVar6 = dVar6 + 3.0;
  }
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(lVar1);
  _objc_release(param_4);
  auVar7._8_8_ = dVar6 + dVar4 + 6.0;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 104ddeb04; end: 104ddebef; +[SCCommerceProductTitleCell _brandNameIsValidForViewModel:] */

uint FUN_104ddeb04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf20f80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf20f80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0cab20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c0720c0(lVar3,param_2,lVar5);
    uVar7 = (uint)lVar6 ^ 1;
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 104ddebf0; end: 104ddec3f; -[SCCommerceProductTitleCell initWithFrame:] */

undefined1 * FUN_104ddebf0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e43c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ddec40; end: 104ddf0ef; -[SCCommerceProductTitleCell populateWithViewModel:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddec40(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_112713300;
  uVar3 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar7));
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = param_3;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c25ccc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112713304;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8),param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c07eea0(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112713308),param_2,(uint)uVar3 ^ 1);
    uVar3 = param_3;
    func_0x00010c07eea0(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,uVar3);
    iVar2 = (int)*(undefined8 *)(param_1 + lVar7);
    func_0x00010c07eea0();
    if (iVar2 == 0) {
      lVar7 = *(long *)(param_1 + lVar7);
      func_0x00010c25ccc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 == 0) {
        uVar4 = 0xc6;
      }
      else {
        uVar4 = 0x90;
      }
    }
    else {
      uVar4 = 0xbf;
    }
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11271330c;
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c087500(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar4);
    _objc_release(puVar5);
    func_0x00010c07eea0();
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c087500(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ad00();
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112713310;
    if (param_3 == 0) {
      func_0x00010c1b4520(*(undefined8 *)(param_1 + lVar7),param_2,1);
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c087500(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar4);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112713314),param_2,1);
      lVar7 = (long)_DAT_112713318;
      func_0x00010c1b4520(*(undefined8 *)(param_1 + lVar7),param_2,1);
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c087500(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar4);
      func_0x00010c1b4520(*(undefined8 *)(param_1 + lVar8),param_2,1);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c087500(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar4);
    }
    else {
      func_0x00010c1b4520(*(undefined8 *)(param_1 + lVar7),param_2,0);
      uVar3 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c087500(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar7 = param_1;
      _objc_opt_class();
      func_0x00010bdd57a0();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      bVar1 = (int)lVar7 == 0;
      if (bVar1) {
        uVar4 = *(undefined8 *)(param_1 + _DAT_112713314);
      }
      else {
        func_0x000104df3914();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010bf20f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5,param_2,lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = (long)_DAT_112713314;
        uVar4 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c087500(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar4);
        _objc_release(puVar5);
        _objc_release(uVar3);
        _objc_release(lVar7);
        uVar4 = *(undefined8 *)(param_1 + lVar9);
      }
      func_0x00010c1a7f60(uVar4,param_2,bVar1);
      lVar7 = (long)_DAT_112713318;
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c1b4520(uVar4,param_2,0);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000104df392c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0cab20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c087500(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
      func_0x00010c1b4520(*(undefined8 *)(param_1 + lVar8),param_2,0);
      uVar3 = param_3;
      func_0x00010c112a80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c087500(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271331c),param_2,0);
      uVar3 = param_3;
      func_0x00010bfa11a0(param_3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112713320),param_2,uVar3 == 0);
      func_0x00010bed9680(param_1,param_2,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ddf0f0; end: 104ddfd0f; -[SCCommerceProductTitleCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddf0f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0888;
  _objc_alloc();
  uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar12 = (long)_DAT_112713310;
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar8);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b0888;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar13 = (long)_DAT_112713314;
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar8);
  _objc_release(puVar1);
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar8);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar13),param_2,1);
  puVar1 = PTR_PTR_1126b0888;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar16 = (long)_DAT_112713318;
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar8);
  _objc_release(puVar1);
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar9 = (long)_DAT_112713324;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar9),param_2,1);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar9),param_2,1);
  func_0x00010c207380(0x4008000000000000,*(undefined8 *)(param_1 + lVar9));
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x437a0000);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x437a0000);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x437a0000);
  _objc_release(uVar8);
  puVar1 = PTR_PTR_1126b0888;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar14 = (long)_DAT_11271330c;
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x00010c07eea0();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar8);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar11 = (long)_DAT_112713308;
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar11),param_2,0x16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar11),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000104df37c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar17 = (long)_DAT_112713304;
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar17),param_2,0x14);
  func_0x00010c21ad20(*(undefined8 *)(param_1 + lVar17),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar17),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar10 = (long)_DAT_112713328;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10),param_2,0);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar10),param_2,0);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar10),param_2,4);
  func_0x00010c207380(0x4028000000000000,*(undefined8 *)(param_1 + lVar10));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar10),param_2,*(undefined8 *)(param_1 + lVar14));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar10),param_2,*(undefined8 *)(param_1 + lVar17));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar10),param_2,*(undefined8 *)(param_1 + lVar11));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar9),param_2,*(undefined8 *)(param_1 + lVar12));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar9),param_2,*(undefined8 *)(param_1 + lVar10));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar9),param_2,*(undefined8 *)(param_1 + lVar13));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar9),param_2,*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR_PTR_1126b06c8;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar17 = (long)_DAT_11271331c;
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar17),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar17),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar17),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar17),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar17),param_2,puVar1);
  func_0x00010c1a8540(*(undefined8 *)(param_1 + lVar17),param_2,1);
  puVar2 = PTR_PTR_1126b06c8;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar18 = (long)_DAT_112713320;
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar2;
  _objc_release(uVar8);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar18),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar18),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar18),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar18),param_2,1);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar18),param_2,puVar3);
  func_0x00010c1a8540(*(undefined8 *)(param_1 + lVar18),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar18),param_2,
                      &PTR____CFConstantStringClassReference_110db3d18);
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar15 = (long)_DAT_11271332c;
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar2;
  _objc_release(uVar8);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar15),param_2,0);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar15),param_2,1);
  func_0x00010c207380(0x4028000000000000,*(undefined8 *)(param_1 + lVar15));
  lVar10 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar21 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar15);
  uStack_b8 = uVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar22;
  func_0x00010bf493c0(0x4036000000000000,uVar22,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_b0 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf493c0(0xc036000000000000,uVar4,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(lVar13);
  _objc_release(lVar14);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(uVar22);
  _objc_release(uVar20);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar21);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar15),param_2,*(undefined8 *)(param_1 + lVar9));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar15),param_2,*(undefined8 *)(param_1 + lVar17));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar15),param_2,*(undefined8 *)(param_1 + lVar18));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar22 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar22;
  func_0x00010bf49420(0x403a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  uStack_d8 = uVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_d0 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010bf49420(0x403a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  uStack_c8 = uVar21;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar6;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar20);
  _objc_release(uVar6);
  _objc_release(uVar21);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(uVar22);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + _DAT_112713330;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c22c600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ddfd10; end: 104ddfd43; -[SCCommerceProductTitleCell _sharingIconPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddfd10(long param_1)

{
  param_1 = param_1 + _DAT_112713330;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22c600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ddfd44; end: 104ddfd9f; -[SCCommerceProductTitleCell _favoritesHeartButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddfd44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_112713330;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + _DAT_112713300);
  func_0x00010bfa11a0(lVar2);
  func_0x00010bfa13e0(lVar1,param_2,lVar2 == 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ddfda0; end: 104ddfe83; -[SCCommerceProductTitleCell _updateIconsWithIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddfda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271331c;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = *(ulong *)(param_1 + lVar4);
    func_0x00010c074c20();
    if ((uVar3 & 1) == 0) {
      func_0x00010c1a97a0(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
      func_0x00010c103dc0(*(undefined8 *)(param_1 + lVar4),param_2,2);
    }
  }
  else {
    _objc_release();
  }
  lVar4 = (long)_DAT_112713320;
  func_0x00010c1a97a0(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  lVar1 = *(long *)(param_1 + _DAT_112713300);
  func_0x00010bfa11a0();
  uVar3 = lVar1 - 1;
  if (uVar3 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10dd8b860 + uVar3 * 8);
    puVar5 = (&PTR_PTR_1108506b8)[uVar3];
  }
  else {
    uVar2 = 0;
    puVar5 = (undefined *)0x0;
  }
  func_0x00010c103dc0(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar4),param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ddfe84; end: 104ddfea3; -[SCCommerceProductTitleCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddfe84(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112713330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ddfea4; end: 104ddfeb7; -[SCCommerceProductTitleCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddfea4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112713330,param_3);
  return;
}



/* Entry: 104ddfeb8; end: 104ddffa3; -[SCCommerceProductTitleCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddfeb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713330);
  _objc_storeStrong(param_1 + _DAT_112713320,0);
  _objc_storeStrong(param_1 + _DAT_11271331c,0);
  _objc_storeStrong(param_1 + _DAT_112713328,0);
  _objc_storeStrong(param_1 + _DAT_112713324,0);
  _objc_storeStrong(param_1 + _DAT_11271332c,0);
  _objc_storeStrong(param_1 + _DAT_112713304,0);
  _objc_storeStrong(param_1 + _DAT_112713308,0);
  _objc_storeStrong(param_1 + _DAT_11271330c,0);
  _objc_storeStrong(param_1 + _DAT_112713318,0);
  _objc_storeStrong(param_1 + _DAT_112713314,0);
  _objc_storeStrong(param_1 + _DAT_112713310,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713300,0);
  return;
}



/* Entry: 104ddffa4; end: 104ddffaf; +[SCCommerceShopOnStoreCell sizeForWidth:] */

void FUN_104ddffa4(void)

{
  return;
}



/* Entry: 104ddffb0; end: 104de000f; -[SCCommerceShopOnStoreCell initWithFrame:] */

undefined1 * FUN_104ddffb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e43c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104de0010; end: 104de0137; -[SCCommerceShopOnStoreCell populateWithViewModel:compositeImageFetcher:iconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de0010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713334);
  *(undefined8 *)(param_1 + _DAT_112713334) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c257a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112713338),param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = (long)_DAT_11271333c;
  func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
  _objc_release(param_4);
  uVar2 = param_3;
  func_0x00010c2577e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000106d772a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805a0(*(undefined8 *)(param_1 + lVar3),param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112713340;
  func_0x00010c1a97a0(*(undefined8 *)(param_1 + lVar3),param_2,param_5);
  _objc_release(param_5);
  func_0x00010c103dc0(*(undefined8 *)(param_1 + lVar3),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104de0138; end: 104de0cb7; -[SCCommerceShopOnStoreCell _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de0138(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar14 = (long)_DAT_112713344;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar14),param_2,puVar2);
  _objc_release(puVar2);
  lVar18 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_c0 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  uStack_b8 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  uStack_b0 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf49420(0x3fd51eb860000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(lVar16);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar17);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar15);
  _objc_release(lVar18);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar14 = (long)_DAT_112713348;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar14),param_2,puVar2);
  _objc_release(puVar2);
  lVar18 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_e0 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  uStack_d8 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  uStack_d0 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf49420(0x3fd51eb860000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(lVar16);
  _objc_release(lVar17);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar15);
  _objc_release(lVar18);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b0608;
  _objc_opt_new();
  lVar15 = (long)_DAT_11271333c;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar2;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08c0e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  uStack_f0 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar17 = (long)_DAT_112713338;
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar17),param_2,0x16);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar17),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar17),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar16 = (long)_DAT_11271334c;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar2;
  _objc_release(uVar13);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar16),param_2,3);
  func_0x00010c207380(0x4028000000000000,*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  lVar18 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  puVar2 = PTR_PTR_1126b06c8;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar18 = (long)_DAT_112713340;
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  _CGAffineTransformMakeRotation(&uStack_150,0x4012d97c7f3321d2);
  uStack_178 = uStack_148;
  uStack_180 = uStack_150;
  uStack_168 = uStack_138;
  uStack_170 = uStack_140;
  uStack_158 = uStack_128;
  uStack_160 = uStack_130;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar18),param_2,&uStack_180);
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf49420(0x4037000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  uStack_100 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_100,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar10);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar15));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar17));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar18));
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_120 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  uStack_118 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493c0(0x4036000000000000,uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  uStack_110 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493c0(0xc036000000000000,uVar9,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_120,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(lVar14);
  _objc_release(lVar16);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(lVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar17);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar15);
  _objc_release(lVar18);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1 + _DAT_112713350;
  _objc_loadWeakRetained(puVar2);
  uVar13 = *(undefined8 *)(puVar1 + _DAT_112713334);
  func_0x00010c257800(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22cb60(puVar2,param_2,uVar13);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104de0cb8; end: 104de0d23; -[SCCommerceShopOnStoreCell _cellTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de0cb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_112713350;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713334);
  func_0x00010c257800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22cb60(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104de0d24; end: 104de0d43; -[SCCommerceShopOnStoreCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de0d24(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112713350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104de0d44; end: 104de0d57; -[SCCommerceShopOnStoreCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de0d44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112713350,param_3);
  return;
}



/* Entry: 104de0d58; end: 104de0df3; -[SCCommerceShopOnStoreCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de0d58(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713350);
  _objc_storeStrong(param_1 + _DAT_112713348,0);
  _objc_storeStrong(param_1 + _DAT_112713344,0);
  _objc_storeStrong(param_1 + _DAT_11271334c,0);
  _objc_storeStrong(param_1 + _DAT_11271333c,0);
  _objc_storeStrong(param_1 + _DAT_112713340,0);
  _objc_storeStrong(param_1 + _DAT_112713338,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713334,0);
  return;
}



/* Entry: 104de0df4; end: 104de0dff; +[SCCommerceVariantSelectorCell sizeForWidth:] */

void FUN_104de0df4(void)

{
  return;
}



/* Entry: 104de0e00; end: 104de0e5f; -[SCCommerceVariantSelectorCell initWithFrame:] */

undefined1 * FUN_104de0e00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e43d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104de0e60; end: 104de0f5b; -[SCCommerceVariantSelectorCell populateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de0e60(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_112713354;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104de0f5c;
    puStack_50 = &UNK_110850398;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x104de107c;
    puStack_80 = &UNK_110841f80;
    lStack_78 = param_1;
    lStack_48 = param_1;
    _objc_retain(param_3);
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104de1130;
    puStack_a8 = &UNK_110842e18;
    lStack_a0 = param_1;
    lStack_70 = param_3;
    func_0x00010c0c1640(param_3,param_2,&puStack_68,&puStack_98,&puStack_c0);
    _objc_release(lStack_70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104de0f5c; end: 104de112f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de0f5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112713358;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  _objc_retain(param_2);
  func_0x00010c087500(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_2);
  _objc_release(lVar2);
  lVar1 = param_3;
  if (param_3 == 0) {
    func_0x000104df38cc();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
  }
  lVar2 = (long)_DAT_11271335c;
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  if (param_3 == 0) {
    _objc_release(lVar1);
  }
  func_0x00010c1b4520(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713360));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713364));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104de1130; end: 104de119f;  */

/* WARNING: Possible PIC construction at 0x000104de1158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104de1180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104de115c) */
/* WARNING: Removing unreachable block (ram,0x000104de1184) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de1130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713358),
             PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 104de11a0; end: 104de15ef; -[SCCommerceVariantSelectorCell _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de11a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_112713368;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_11271336c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_112713360;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000104df38e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126b0888;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_112713358;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c087500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c087500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_11271335c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,0x15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_112713364;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  func_0x00010bee3600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104de15f0; end: 104de1fe7; -[SCCommerceVariantSelectorCell _updateViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de15f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
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
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11271336c;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  puStack_118 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  uStack_130 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  lStack_140 = uVar2;
  uStack_a0 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  lStack_150 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  lStack_120 = lVar10;
  uStack_98 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  uStack_90 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x3fd51eb860000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_118);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar12);
  _objc_release(lStack_148);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(lStack_138);
  _objc_release(lStack_128);
  _objc_release(uStack_130);
  lVar10 = (long)_DAT_112713368;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  uStack_130 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  lStack_140 = uVar2;
  uStack_c0 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  lStack_150 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  uStack_b8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  uStack_b0 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x3fd51eb860000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_118);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_158);
  _objc_release(lStack_148);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(lStack_138);
  _objc_release(lStack_128);
  _objc_release(uStack_130);
  lVar11 = (long)_DAT_112713364;
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  lStack_128 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_130 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  lStack_138 = uVar7;
  uStack_e0 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  lStack_148 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_d8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_d0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lStack_120);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_118);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(lStack_148);
  _objc_release(lStack_138);
  _objc_release(uStack_130);
  _objc_release(lStack_128);
  lVar12 = (long)_DAT_112713358;
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  lStack_120 = uVar7;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_f0 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_118;
  func_0x00010befa160(puStack_118);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lStack_120);
  lVar12 = (long)_DAT_112713360;
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  lStack_120 = uVar7;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_100 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lStack_120);
  lVar12 = (long)_DAT_11271335c;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf493c0(0xc036000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_110 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_118;
  func_0x00010befa160(puStack_118);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(uVar3);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_104de1fe8;
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_104de20e4;
  uStack_190 = 0x104de20f4;
  uStack_188 = 0;
  lStack_180 = param_1;
  lStack_178 = lVar5;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010c0c1640(*(undefined8 *)(puVar1 + _DAT_112713354));
  if (puStack_1a8[5] != 0) {
    puVar1 = puVar1 + _DAT_112713370;
    _objc_loadWeakRetained(puVar1);
    func_0x00010c2977c0();
    _objc_release(puVar1);
  }
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  return;
}



/* Entry: 104de1fe8; end: 104de20e3; -[SCCommerceVariantSelectorCell _selectorCellPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de1fe8(long param_1,undefined8 param_2)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104de20e4;
  uStack_30 = 0x104de20f4;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104de20fc;
  puStack_60 = &UNK_11084aef8;
  puStack_48 = puStack_58;
  func_0x00010c0c1640(*(undefined8 *)(param_1 + _DAT_112713354),param_2,&puStack_78,0,0);
  if (puStack_48[5] != 0) {
    param_1 = param_1 + _DAT_112713370;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2977c0();
    _objc_release(param_1);
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  return;
}



/* Entry: 104de20e4; end: 104de20fb;  */

void FUN_104de20e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104de20fc; end: 104de2133;  */

void FUN_104de20fc(long param_1,undefined8 param_2)

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



/* Entry: 104de2134; end: 104de2153; -[SCCommerceVariantSelectorCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de2134(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112713370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104de2154; end: 104de2167; -[SCCommerceVariantSelectorCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de2154(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112713370,param_3);
  return;
}



/* Entry: 104de2168; end: 104de2203; -[SCCommerceVariantSelectorCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de2168(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713370);
  _objc_storeStrong(param_1 + _DAT_112713364,0);
  _objc_storeStrong(param_1 + _DAT_11271336c,0);
  _objc_storeStrong(param_1 + _DAT_112713368,0);
  _objc_storeStrong(param_1 + _DAT_112713360,0);
  _objc_storeStrong(param_1 + _DAT_11271335c,0);
  _objc_storeStrong(param_1 + _DAT_112713358,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713354,0);
  return;
}



/* Entry: 104de2204; end: 104de2317;  */

void FUN_104de2204(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104de2318;
  uStack_30 = 0x104de2328;
  uStack_28 = 0;
  func_0x00010c0be720(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104de2318; end: 104de232f;  */

void FUN_104de2318(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104de2330; end: 104de23d7;  */

void FUN_104de2330(long param_1,undefined8 param_2)

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



/* Entry: 104de23d8; end: 104de24d3;  */

undefined8 FUN_104de23d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0x29;
  func_0x00010c0be720(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104de24d4; end: 104de250f;  */

void FUN_104de24d4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x2e;
  return;
}



/* Entry: 104de2510; end: 104de25f3;  */

void FUN_104de2510(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104de2318;
  uStack_30 = 0x104de2328;
  uStack_28 = 0;
  func_0x00010c0be720(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104de25f4; end: 104de262b;  */

void FUN_104de25f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104de262c; end: 104de276f; -[SCCommerceItemWidgetPaginationProvider initWithShowcaseFetcher:itemWidget:multiMerchantEnabled:pdpEntrySource:commerceOrigin:configProvider:] */

undefined1 *
FUN_104de262c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e43d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c202320(puVar1);
    func_0x00010c1b6400(puVar1);
    func_0x00010c1c9580(puVar1);
    func_0x00010c1d9f60(puVar1);
    func_0x00010c17f220(puVar1);
    func_0x00010c1808a0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    func_0x00010c225600(puVar1);
    _objc_release(puVar2);
    func_0x00010c1a64a0(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104de2770; end: 104de2967; -[SCCommerceItemWidgetPaginationProvider loadNextPageWithCompletion:] */

void FUN_104de2770(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bfeb7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010c084e60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c2a4ee0();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_104de2968;
      puStack_60 = &UNK_110850738;
      lStack_58 = param_1;
      func_0x00010c0be7c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_initWeak(auStack_80,param_1);
      lVar1 = param_1;
      func_0x00010c23afc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bfeb7e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c0f6da0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2740(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_80);
      _objc_retain(param_3);
      func_0x00010bfcc3c0(lVar1);
      _objc_release(param_1);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104de2968; end: 104de2973;  */

void FUN_104de2968(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1abad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setInProgressItemQueryContext__1126488d8,param_2)
  ;
  return;
}



/* Entry: 104de2974; end: 104de29ff;  */

void FUN_104de2974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16f60();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104de2a00; end: 104de2b5b; -[SCCommerceItemWidgetPaginationProvider _finishLoadingNextPageWithRecommendedProducts:paginationCursor:error:completion:] */

void FUN_104de2a00(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + 0x18);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = param_3;
  func_0x00010c1163e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010be5cca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar4);
  *(bool *)(param_1 + 8) = param_4 != 0 && lVar1 != lVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar4);
  _objc_release(param_4);
  (**(code **)(param_6 + 0x10))(param_6,param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104de2b5c; end: 104de2ddf; -[SCCommerceItemWidgetPaginationProvider _mapModels:] */

void FUN_104de2b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined8 *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  if (*(char *)(param_1 + 9) == '\x01') {
    uStack_48 = 2;
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104de2de0;
    puStack_70 = &UNK_110842b58;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x104de2df0;
    puStack_98 = &UNK_110847658;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x104de2e00;
    puStack_c0 = &UNK_110842b58;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x104de2e10;
    puStack_e8 = &UNK_110842b58;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x104de2e24;
    puStack_110 = &UNK_110847658;
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    uStack_140 = 0x104de2e38;
    puStack_138 = &UNK_110847658;
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    uStack_168 = 0x104de2e48;
    puStack_160 = &UNK_110850068;
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    uStack_190 = 0x104de2e58;
    puStack_188 = &UNK_110847658;
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    uStack_1b8 = 0x104de2e68;
    puStack_1b0 = &UNK_110850098;
    puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e8 = 0xc2000000;
    uStack_1e0 = 0x104de2e78;
    puStack_1d8 = &UNK_110847658;
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    uStack_208 = 0x104de2e88;
    puStack_200 = &UNK_1108431e0;
    puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_238 = 0xc2000000;
    uStack_230 = 0x104de2e98;
    puStack_228 = &UNK_110847658;
    puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_260 = 0xc2000000;
    uStack_258 = 0x104de2ea8;
    puStack_250 = &UNK_110847658;
    puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_288 = 0xc2000000;
    uStack_280 = 0x104de2eb8;
    puStack_278 = &UNK_110847658;
    puStack_270 = puStack_58;
    puStack_248 = puStack_58;
    puStack_220 = puStack_58;
    puStack_1f8 = puStack_58;
    puStack_1d0 = puStack_58;
    puStack_1a8 = puStack_58;
    puStack_180 = puStack_58;
    puStack_158 = puStack_58;
    puStack_130 = puStack_58;
    puStack_108 = puStack_58;
    puStack_e0 = puStack_58;
    puStack_b8 = puStack_58;
    puStack_90 = puStack_58;
    puStack_68 = puStack_58;
    func_0x00010c0be8a0(*(undefined8 *)(param_1 + 0x38));
  }
  uStack_2b8 = 0xc2000000;
  pcStack_2b0 = FUN_104de2ec8;
  puStack_2a8 = &UNK_110850798;
  puStack_298 = &uStack_60;
  uVar1 = param_3;
  lStack_2a0 = param_1;
  func_0x000100504554(param_3,&puStack_2c0);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104de2de0; end: 104de2ec7;  */

void FUN_104de2de0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 104de2ec8; end: 104de31c3;  */

void FUN_104de2ec8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar1 = param_2;
  func_0x00010bfe9920(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  if (lVar9 == 1) {
    lVar9 = param_2;
    func_0x00010c0cab00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar9);
    if (lVar4 != 0) {
      lVar9 = param_2;
      func_0x000106d77ef4(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uStack_70 = 0;
      lVar1 = lVar9;
      goto LAB_104de306c;
    }
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  }
  if (lVar9 == 2) {
    lVar9 = param_2;
    func_0x00010c0cab00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar9);
    if (lVar4 != 0) {
      lVar9 = param_2;
      func_0x00010c2711a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uStack_70 = param_2;
      func_0x000106d77ef4();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar9;
      goto LAB_104de306c;
    }
  }
  uStack_70 = 0;
LAB_104de306c:
  puVar5 = PTR_PTR_1126b02c0;
  _objc_alloc();
  lVar9 = param_2;
  func_0x00010c115e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c257800(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x000106d77d28();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x000106d77d8c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106d77df0();
  lVar7 = param_2;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6e20();
  lVar8 = param_2;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a760();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(uStack_70);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104de31c4; end: 104de31cb; -[SCCommerceItemWidgetPaginationProvider hasMorePages] */

undefined1 FUN_104de31c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104de31cc; end: 104de31d3; -[SCCommerceItemWidgetPaginationProvider setHasMorePages:] */

void FUN_104de31cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104de31d4; end: 104de31db; -[SCCommerceItemWidgetPaginationProvider itemWidget] */

undefined8 FUN_104de31d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104de31dc; end: 104de320b; -[SCCommerceItemWidgetPaginationProvider setItemWidget:] */

void FUN_104de31dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104de320c; end: 104de3213; -[SCCommerceItemWidgetPaginationProvider widgetProducts] */

undefined8 FUN_104de320c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104de3214; end: 104de3243; -[SCCommerceItemWidgetPaginationProvider setWidgetProducts:] */

void FUN_104de3214(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104de3244; end: 104de324b; -[SCCommerceItemWidgetPaginationProvider showcaseFetcher] */

undefined8 FUN_104de3244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104de324c; end: 104de327b; -[SCCommerceItemWidgetPaginationProvider setShowcaseFetcher:] */

void FUN_104de324c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104de327c; end: 104de3283; -[SCCommerceItemWidgetPaginationProvider multiMerchantEnabled] */

undefined1 FUN_104de327c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104de3284; end: 104de328b; -[SCCommerceItemWidgetPaginationProvider setMultiMerchantEnabled:] */

void FUN_104de3284(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 104de328c; end: 104de3293; -[SCCommerceItemWidgetPaginationProvider pdpEntrySource] */

undefined8 FUN_104de328c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104de3294; end: 104de32c3; -[SCCommerceItemWidgetPaginationProvider setPdpEntrySource:] */

void FUN_104de3294(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104de32c4; end: 104de32cb; -[SCCommerceItemWidgetPaginationProvider paginationCursor] */

undefined8 FUN_104de32c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104de32cc; end: 104de32fb; -[SCCommerceItemWidgetPaginationProvider setPaginationCursor:] */

void FUN_104de32cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104de32fc; end: 104de3303; -[SCCommerceItemWidgetPaginationProvider commerceOrigin] */

undefined8 FUN_104de32fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


