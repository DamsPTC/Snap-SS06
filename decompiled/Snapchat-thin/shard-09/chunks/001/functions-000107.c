/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069fc860; end: 1069fc873; -[SCGalleryStoryCell _maskImage:] */

void FUN_1069fc860(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110e675b8);
  return;
}



/* Entry: 1069fc874; end: 1069fc907; -[SCGalleryStoryCell _subtitleIcon] */

void FUN_1069fc874(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf977c0();
  _objc_release(uVar2);
  _objc_release(param_1);
  uVar1 = (int)uVar3 - 1;
  if ((uVar1 < 10) && ((0x207U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,(&PTR_PTR_110952f78)[uVar1]);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069fc908; end: 1069fc973; -[SCGalleryStoryCell _shouldShowSubtitleIcon] */

uint FUN_1069fc908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf977c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (uint)((uint)uVar2 < 0xb) & 0x40eU >> (ulong)((uint)uVar2 & 0x1f);
}



/* Entry: 1069fc974; end: 1069fcb03; -[SCGalleryStoryCell _subtitleString:] */

void FUN_1069fc974(undefined **param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  if ((param_3 == 0) || (ppuVar1 = param_1, func_0x00010c158e00(), (int)ppuVar1 != 0)) {
    ppuVar1 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    if (ppuVar4 != (undefined **)0x0) goto LAB_1069fc9f8;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf529e0();
    _objc_release(ppuVar1);
    _objc_release(param_1);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar2 == (undefined **)0x1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e271f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e271f8,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1069fca3c;
    }
    param_1 = &PTR____CFConstantStringClassReference_110e27218;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e27218,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_1069fc9f8:
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010b5f6c38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  _objc_release(param_1);
LAB_1069fca3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1069fcb04; end: 1069fcc9f; -[SCGalleryStoryCell _roundCornerCell:indexPath:] */

void FUN_1069fcb04(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar5 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf529e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar3 = param_4;
  func_0x00010c0840e0();
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c15b1c0(param_1);
  func_0x00010c292b00(puVar4,param_2,param_1);
  uVar5 = 1;
  if (puVar4 == (undefined *)0x1) {
    uVar5 = 2;
  }
  if (lVar3 != 0) {
    uVar5 = 0;
  }
  if ((lVar3 == 3) || (((long)uVar2 < 4 && (lVar3 == uVar2 - 1)))) {
    uVar6 = uVar2 & 3;
    if (-1 < (long)-uVar2) {
      uVar6 = -(-uVar2 & 3);
    }
    lVar1 = -4;
    if (0 < (long)uVar6) {
      lVar1 = -uVar6;
    }
    if (puVar4 != (undefined *)0x1) {
      uVar5 = uVar5 | 2;
      if (lVar3 != lVar1 + uVar2) goto LAB_1069fcc54;
LAB_1069fcc50:
      uVar5 = uVar5 | 4;
      goto LAB_1069fcc54;
    }
    uVar5 = uVar5 | 1;
    if (lVar3 != lVar1 + uVar2) goto LAB_1069fcc54;
  }
  else {
    uVar6 = uVar2 & 3;
    if (-1 < (long)-uVar2) {
      uVar6 = -(-uVar2 & 3);
    }
    lVar1 = -4;
    if (0 < (long)uVar6) {
      lVar1 = -uVar6;
    }
    if (lVar3 != lVar1 + uVar2) goto LAB_1069fcc54;
    if (puVar4 != (undefined *)0x1) goto LAB_1069fcc50;
  }
  uVar5 = uVar5 | 8;
LAB_1069fcc54:
  if ((lVar3 == uVar2 + ~uVar6) || (uVar6 = uVar5, lVar3 == uVar2 - 1)) {
    uVar6 = uVar5 | 8;
    if (puVar4 == (undefined *)0x1) {
      uVar6 = uVar5 | 4;
    }
  }
  func_0x00010c141e20(param_3,param_2,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069fcca0; end: 1069fcca7; +[SCGalleryStoryCell _snapsPerRow] */

undefined8 FUN_1069fcca0(void)

{
  return 4;
}



/* Entry: 1069fcca8; end: 1069fcd37; +[SCGalleryStoryCell _cellSize] */

undefined1  [16] FUN_1069fcca8(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  func_0x00010bebdaa0();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  dVar2 = (param_1 + -36.0 + (double)(param_2 + -1) * -2.0) / (double)param_2;
  auVar3._0_8_ = (long)dVar2;
  auVar3._8_8_ = (long)((dVar2 * 16.0) / 9.0);
  return auVar3;
}



/* Entry: 1069fcd38; end: 1069fce43; -[SCGalleryStorySnapCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1069fcd38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4310;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x000106e3f464();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_112755b30;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    dVar7 = 2.0;
    func_0x00010c2172c0(0x4000000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    func_0x00010c1ee020(dVar7 + -2.0,*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069fce44; end: 1069fcf73; -[SCGalleryStorySnapCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fce44(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f4310;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_prepareForReuse_112620008);
  lVar3 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar3);
  lVar3 = (long)_DAT_112755b34;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112755b30));
  lVar4 = (long)_DAT_112755b38;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0);
  _objc_release(lVar2);
  _objc_release(lVar3);
  func_0x00010c1a7f60(param_1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112755b3c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 1069fcf74; end: 1069fd093; -[SCGalleryStorySnapCell setViewModel:selectMode:encryptedContentManager:cachingMediaManager:memoriesEntrySyncStatusGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fcf74(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_s_setViewModel_selectMode_encrypte_112666410;
  puStack_58 = PTR_PTR_1126f4310;
  lStack_60 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_60,puVar1,param_3,param_4,param_5,param_6,param_7);
  func_0x00010beb10e0(param_1);
  lVar2 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar3 == 0) || (lVar2 = lVar3, func_0x00010b5fa760(), (int)lVar2 == 0)) {
    func_0x000106e3f464();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_106e3f450();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112755b30));
  _objc_release(lVar2);
  _objc_release(lVar3);
  return;
}



/* Entry: 1069fd094; end: 1069fd097; -[SCGalleryStorySnapCell sourceViewForOpera] */

void FUN_1069fd094(void)

{
  return;
}



/* Entry: 1069fd098; end: 1069fd1bb; -[SCGalleryStorySnapCell updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fd098(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_70 [48];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f4310;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_updateUI_1126807d8);
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010b5fa088();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 - 2U < 0xb) {
    _CGAffineTransformMakeScale(auStack_70,0x3ff3333333333333,0x3ff3333333333333);
    lVar1 = param_1;
    func_0x00010bfe90c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c266680(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2666e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074c20();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112755b30));
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1069fd1bc; end: 1069fd2d7; -[SCGalleryStorySnapCell roundCorner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fd1bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_3 != 0) {
    lVar6 = (long)_DAT_112755b34;
    lVar1 = *(long *)(param_1 + lVar6);
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar2;
      _objc_release(uVar5);
      lVar1 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar6));
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar1 = *(long *)(param_1 + lVar6);
    }
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(lVar1);
    func_0x00010bf199e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1069fd2d8; end: 1069fd533; -[SCGalleryStorySnapCell _favoriteIconLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fd2d8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bfa0fe0();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_a0 = uVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uVar2;
  func_0x00010bf493c0(0x4018000000000000,uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_b0 = uVar1;
  uStack_88 = uVar1;
  func_0x00010bfa0fe0();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493c0(0x4018000000000000,uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  uStack_80 = uVar4;
  func_0x00010bfa0fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = uVar7;
  func_0x00010bfa0fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar10;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  uVar1 = uStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_c0);
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_1069fd534;
  uVar2 = uVar1;
  uStack_100 = uVar9;
  uStack_f8 = param_1;
  uStack_f0 = uVar7;
  uStack_e8 = uVar6;
  uStack_e0 = uVar5;
  uStack_d8 = uVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010b5fa088();
  if (uVar4 < 0xd && (1L << (uVar4 & 0x3f) & 0x1566U) != 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112755b38;
    if (*(long *)(uVar1 + lVar12) == 0) {
      puVar10 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar11 = *(undefined8 *)(uVar1 + lVar12);
      *(undefined **)(uVar1 + lVar12) = puVar10;
      _objc_release(uVar11);
      puVar10 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(uVar1 + lVar12),param_2,puVar10);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(uVar1 + lVar12),param_2,puVar10);
      _objc_release(puVar10);
      uVar11 = *(undefined8 *)(uVar1 + lVar12);
      func_0x00010c08c0e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe7a0(0,0x3ff0000000000000);
      _objc_release(uVar11);
      uVar11 = *(undefined8 *)(uVar1 + lVar12);
      func_0x00010c08c0e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe840(0x4000000000000000);
      _objc_release(uVar11);
      puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar11 = *(undefined8 *)(uVar1 + lVar12);
      func_0x00010c08c0e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(uVar11);
      _objc_release(puVar10);
      uVar11 = *(undefined8 *)(uVar1 + lVar12);
      func_0x00010c08c0e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0x3f19999a);
      _objc_release(uVar11);
      uVar2 = uVar1;
      func_0x00010bf4b2a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar2);
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_1069fd7b8;
      puStack_110 = &UNK_1108471b0;
      uStack_108 = uVar1;
      func_0x00010c0bbfc0(*(undefined8 *)(uVar1 + lVar12),param_2,&puStack_128);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar2 = uVar1;
    func_0x00010c29d560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c299de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(uVar1 + lVar12),param_2,uVar3);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069fd534; end: 1069fd7b7; -[SCGalleryStorySnapCell _setupVideoThumbnailLabelIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fd534(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b5fa088();
  if (uVar3 < 0xd && (1L << (uVar3 & 0x3f) & 0x1566U) != 0) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar6 = (long)_DAT_112755b38;
    if (*(long *)(param_1 + lVar6) == 0) {
      puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar4;
      _objc_release(uVar5);
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
      _objc_release(puVar4);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe7a0(0,0x3ff0000000000000);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe840(0x4000000000000000);
      _objc_release(uVar5);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(uVar5);
      _objc_release(puVar4);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0x3f19999a);
      _objc_release(uVar5);
      uVar1 = param_1;
      func_0x00010bf4b2a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar1);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1069fd7b8;
      puStack_50 = &UNK_1108471b0;
      uStack_48 = param_1;
      func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6),param_2,&puStack_68);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar1 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c299de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069fd7b8; end: 1069fd96f;  */

void FUN_1069fd7b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069fd970; end: 1069fda0b; -[SCGalleryStorySnapCell syncStatusGenerator:didUpdateStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fd970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010b5fa088();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 - 2U < 0xb) {
    uVar4 = param_3;
    func_0x00010c07dfe0(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112755b30),param_2,uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069fda0c; end: 1069fda6b; -[SCGalleryStorySnapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fda0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755b3c,0);
  _objc_storeStrong(param_1 + _DAT_112755b38,0);
  _objc_storeStrong(param_1 + _DAT_112755b30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755b34,0);
  return;
}



/* Entry: 1069fda6c; end: 1069fdeaf; -[SCMemoriesStoriesTabSubscreenStoryCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1069fda6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  long lVar13;
  long lStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f4318;
  puVar11 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar11,PTR_s_initWithFrame__1125e2948);
  lVar7 = 0;
  if (puVar11 != (undefined8 *)0x0) {
    puVar1 = puVar11;
    func_0x00010c260ee0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar1);
    puVar1 = puVar11;
    func_0x00010c260f40(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar1);
    puVar1 = puVar11;
    func_0x00010c260f20(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010bfe9900(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf493c0(0x402e000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f720(puVar11);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar11;
    func_0x00010c260f40(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar1);
    puVar1 = puVar11;
    func_0x00010bfe90c0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar1);
    puVar6 = PTR_PTR_1126cfb38;
    _objc_alloc();
    func_0x00010c0145c0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),0x4057800000000000);
    lVar13 = (long)_DAT_112755b40;
    uVar12 = *(undefined8 *)((long)puVar11 + lVar13);
    *(undefined **)((long)puVar11 + lVar13) = puVar6;
    _objc_release(uVar12);
    puVar1 = puVar11;
    func_0x00010bfe9900(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar11 + lVar13));
    puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar7 = *(long *)((long)puVar11 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar11;
    lStack_a8 = lVar7;
    func_0x00010bfe9900();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_88 = lVar7;
    uVar12 = *(undefined8 *)((long)puVar11 + lVar13);
    lStack_b8 = lVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar11;
    uStack_c8 = uVar12;
    func_0x00010bfe9900();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar12;
    uVar8 = *(undefined8 *)((long)puVar11 + lVar13);
    uStack_e0 = uVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar11;
    func_0x00010bfe9900();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x20;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar12;
    uVar9 = *(undefined8 *)((long)puVar11 + lVar13);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010bfe9900(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_d8);
    _objc_release(puVar6);
    _objc_release(uVar10);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(uVar12);
    _objc_release(puVar1);
    _objc_release(unaff_x20);
    _objc_release(uVar8);
    _objc_release(uStack_e0);
    _objc_release(puStack_d0);
    _objc_release(puStack_c0);
    _objc_release(uStack_c8);
    _objc_release(lStack_b8);
    _objc_release(puStack_b0);
    _objc_release(puStack_a0);
    lVar7 = lStack_a8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar11;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_1069fdeb0;
  puStack_108 = PTR_PTR_1126f4318;
  lStack_110 = lVar7;
  puStack_100 = unaff_x20;
  puStack_f8 = puVar11;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_110,PTR_s_prepareForReuse_112620008);
  func_0x00010bec2fe0(lVar7);
  lVar13 = lVar7;
  func_0x00010c260f20(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar13);
  lVar13 = lVar7;
  func_0x00010c271420(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar13);
  puVar11 = *(undefined8 **)(lVar7 + _DAT_112755b44);
  if (puVar11 != (undefined8 *)0x0) {
    func_0x00010c069f60();
  }
  return puVar11;
}



/* Entry: 1069fdeb0; end: 1069fdf57; -[SCMemoriesStoriesTabSubscreenStoryCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fdeb0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4318;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bec2fe0(param_1);
  lVar1 = param_1;
  func_0x00010c260f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar1);
  if (*(long *)(param_1 + _DAT_112755b44) != 0) {
    func_0x00010c069f60();
  }
  return;
}



/* Entry: 1069fdf58; end: 1069fdf63; +[SCMemoriesStoriesTabSubscreenStoryCell cellHeightForViewModel:] */

undefined8 FUN_1069fdf58(void)

{
  return 0x405cc00000000000;
}



/* Entry: 1069fdf64; end: 1069fdf6f; +[SCMemoriesStoriesTabSubscreenStoryCell actionMenuHeightForPage:] */

undefined8 FUN_1069fdf64(void)

{
  return 0x405cc00000000000;
}



/* Entry: 1069fdf70; end: 1069fe0cb; -[SCMemoriesStoriesTabSubscreenStoryCell setViewModel:offset:selectMode:disableMode:snapThumbnailGenerator:editDataMutator:encryptedContentManager:cachingMediaManager:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fdf70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar3 = (long)_DAT_112755b48;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  func_0x00010c18e9e0(param_1,param_2,param_5);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c25fbe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c25fbc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c260f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010bee2020(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755b4c);
  *(undefined8 *)(param_1 + _DAT_112755b4c) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  func_0x00010bec2fe0(param_1,param_2,1);
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c27dd80();
  _objc_release(param_6);
  if (lVar2 - 1U < 2) {
    func_0x00010c21acc0(param_1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069fe0cc; end: 1069fe123; -[SCMemoriesStoriesTabSubscreenStoryCell _updateThumbnailBadgeIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fe0cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112755b44;
  if (*(long *)(param_1 + lVar2) == 0) {
    func_0x00010bdf4aa0(param_1);
  }
  func_0x00010c27dd80(*(undefined8 *)(param_1 + _DAT_112755b48));
  lVar1 = param_1;
  func_0x00010bdd26a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c138d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_resetImageForIconType__11262bd60,lVar1);
  return;
}



/* Entry: 1069fe124; end: 1069fe457; -[SCMemoriesStoriesTabSubscreenStoryCell _createThumbnailBadgeIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1069fe124(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755b48);
  func_0x00010c27dd80(uVar2);
  func_0x00010bdd26a0(param_1,param_2,uVar2);
  puVar3 = PTR_PTR_1126cfb40;
  _objc_alloc();
  func_0x00010c022660(0x4038000000000000);
  lVar16 = (long)_DAT_112755b44;
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar3;
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bfe9900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfe9900();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  uStack_88 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bfe9900(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(uVar5);
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = (undefined *)0x2;
  if (puVar15 == (undefined *)0x2) {
    puVar3 = (undefined *)0x3;
  }
  puVar1 = (undefined *)0x0;
  if (puVar15 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  return puVar1;
}



/* Entry: 1069fe458; end: 1069fe46f; -[SCMemoriesStoriesTabSubscreenStoryCell _badgeIconTypeFromStoryCellViewModelType:] */

undefined8 FUN_1069fe458(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 2;
  if (param_3 == 2) {
    uVar1 = 3;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1069fe470; end: 1069fe4b7; -[SCMemoriesStoriesTabSubscreenStoryCell dealloc] */

void FUN_1069fe470(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec2fe0(param_1,param_2,1);
  puStack_28 = PTR_PTR_1126f4318;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069fe4b8; end: 1069fe4bb; -[SCMemoriesStoriesTabSubscreenStoryCell setSelected:selectOverlayImage:snapIds:] */

void FUN_1069fe4b8(void)

{
  return;
}



/* Entry: 1069fe4bc; end: 1069fe4db; -[SCMemoriesStoriesTabSubscreenStoryCell interactionMode] */

undefined8 FUN_1069fe4bc(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf803c0();
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1069fe4dc; end: 1069fe4df; -[SCMemoriesStoriesTabSubscreenStoryCell setSelectMode:] */

void FUN_1069fe4dc(void)

{
  return;
}



/* Entry: 1069fe4e0; end: 1069fe4e7; -[SCMemoriesStoriesTabSubscreenStoryCell canSelectAtPoint:] */

undefined8 FUN_1069fe4e0(void)

{
  return 1;
}



/* Entry: 1069fe4e8; end: 1069fe4eb; -[SCMemoriesStoriesTabSubscreenStoryCell startGeneratingUpdates] */

void FUN_1069fe4e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startGeneratingUpdatesForCollec_11258d9c8);
  return;
}



/* Entry: 1069fe4ec; end: 1069fe4f3; -[SCMemoriesStoriesTabSubscreenStoryCell stopGeneratingUpdates] */

void FUN_1069fe4ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec2ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopGeneratingUpdatesForCollect_11258e5a0,0)
  ;
  return;
}



/* Entry: 1069fe4f4; end: 1069fe5ff; -[SCMemoriesStoriesTabSubscreenStoryCell _startGeneratingUpdatesForCollectionCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fe4f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112755b48);
  func_0x00010c25fc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (3 < uVar2) {
    uVar2 = 4;
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069fe600;
  puStack_50 = &UNK_110952fc8;
  uVar3 = 0;
  lStack_48 = param_1;
  func_0x00010bd86bb4(0,uVar2,&puStack_68);
  puVar4 = PTR_PTR_1126cfb48;
  _objc_alloc(PTR_PTR_1126cfb48);
  uVar5 = uVar3;
  func_0x00010bf51e00(uVar3);
  func_0x00010c04a0e0(puVar4);
  _objc_release(uVar5);
  func_0x00010c222840(*(undefined8 *)(param_1 + _DAT_112755b40));
  _objc_release(puVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 1069fe600; end: 1069fe65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fe600(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112755b48);
  func_0x00010c25fc20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1069fe65c; end: 1069fe66b; -[SCMemoriesStoriesTabSubscreenStoryCell _stopGeneratingUpdatesForCollectionCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fe65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755b40),PTR_s_reset__11262ba20);
  return;
}



/* Entry: 1069fe66c; end: 1069fe67b; -[SCMemoriesStoriesTabSubscreenStoryCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069fe66c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112755b48);
}



/* Entry: 1069fe67c; end: 1069fe68b; -[SCMemoriesStoriesTabSubscreenStoryCell collectionCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069fe67c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112755b40);
}



/* Entry: 1069fe68c; end: 1069fe6eb; -[SCMemoriesStoriesTabSubscreenStoryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069fe68c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755b40,0);
  _objc_storeStrong(param_1 + _DAT_112755b48,0);
  _objc_storeStrong(param_1 + _DAT_112755b44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755b4c,0);
  return;
}



/* Entry: 1069fe6ec; end: 1069fe947; -[SCGalleryStoriesTabDataSource initWithFeatureSettingsService:memoriesDataSource:inlineSearchDataSource:memoriesExperimentService:favoriteSnapsStoryDataCoordinator:consolidatedAutoSavedStoriesDataCoordinator:circumstanceEngine:memoriesMonetizationServices:] */

undefined1 *
FUN_1069fe6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f4320;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cfb50;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf91bc0();
    *(char *)((long)puVar1 + 0x70) = (char)uVar2;
    _objc_release(uVar4);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x18));
    puVar5 = (undefined1 *)((long)puVar1 + 0x28);
    _objc_loadWeakRetained(puVar5);
    func_0x00010befbf20();
    _objc_release(puVar5);
    puVar5 = (undefined1 *)((long)puVar1 + 0x30);
    _objc_loadWeakRetained(puVar5);
    func_0x00010befbf20();
    _objc_release(puVar5);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069fe948; end: 1069fe94f; -[SCGalleryStoriesTabDataSource isSearching] */

void FUN_1069fe948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isSearching_1125fcf60);
  return;
}



/* Entry: 1069fe950; end: 1069fea43; -[SCGalleryStoriesTabDataSource collapseAllViewModels:] */

void FUN_1069fe950(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c1d7e80(*(undefined8 *)(lStack_108 + lVar7 * 8),param_2,0);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010c0f0be0(puVar4);
  uVar5 = *(undefined8 *)(param_3 + 0x50);
  puVar2 = (undefined1 *)puVar4;
  func_0x00010bf97060(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar3 = puVar2;
  func_0x00010bf97200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7e80();
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069fea44; end: 1069feae7; -[SCGalleryStoriesTabDataSource didUpdateExpandStateForViewModel:] */

void FUN_1069fea44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c0f0be0(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = param_3;
  func_0x00010bf97060(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7e80();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069feae8; end: 1069fefdb; -[SCGalleryStoriesTabDataSource _viewModelWithEntry:previousViewModel:] */

/* WARNING: Possible PIC construction at 0x0001069fed94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001069fee38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069fed98) */
/* WARNING: Removing unreachable block (ram,0x0001069fef0c) */
/* WARNING: Removing unreachable block (ram,0x0001069fede8) */
/* WARNING: Removing unreachable block (ram,0x0001069fee04) */
/* WARNING: Removing unreachable block (ram,0x0001069fee34) */
/* WARNING: Removing unreachable block (ram,0x0001069fee3c) */
/* WARNING: Removing unreachable block (ram,0x0001069feeb8) */
/* WARNING: Removing unreachable block (ram,0x0001069feec0) */

void FUN_1069feae8(ulong param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bfa7340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfa73e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar9 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  lVar5 = param_3;
  func_0x00010c245800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = lVar2;
  if (lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    param_2 = lVar2;
    func_0x00010b5fca54();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      _objc_release(lVar6);
      puVar10 = PTR_PTR_1126cfb68;
      _objc_alloc(PTR_PTR_1126cfb68);
      func_0x00010c0f0be0(param_4);
      func_0x00010bffd300(puVar10);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(lVar6);
      _objc_release(puVar1);
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
        return;
      }
      ___stack_chk_fail();
code_r0x00010c241220:
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
      return;
    }
    lVar13 = 0;
    lVar11 = param_2;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      param_2 = *(long *)(lVar13 * 8);
      uVar7 = param_1;
      func_0x00010bdcd5e0();
      if ((uVar7 & 1) == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c2572e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x00010c07e5c0();
        _objc_release(uVar9);
        _objc_release(uVar8);
        if ((int)uVar3 != 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c234580();
          _objc_release(uVar9);
        }
        lVar2 = *(long *)(param_1 + 0x78);
        func_0x00010c2572e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c11eb40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          func_0x00010c27f660(PTR_PTR_1126cfb58);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(lVar6);
        }
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar2);
        _objc_alloc(PTR_PTR_1126cfb60);
        goto code_r0x00010c241220;
      }
      lVar13 = lVar13 + 1;
    } while (lVar5 != lVar13);
    lVar5 = lVar6;
    func_0x00010bf52a60();
    param_2 = lVar11;
  } while( true );
}



/* Entry: 1069fefdc; end: 1069fefe3;  */

void FUN_1069fefdc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1069fefe4; end: 1069ff117; -[SCGalleryStoriesTabDataSource _appendToMultiSnapViewModelIfNeeded:snap:] */

byte FUN_1069fefe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0d21e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    bVar3 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf97e80(param_3);
    bVar3 = *(byte *)(puStack_58 + 3);
    _objc_release(param_3);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar3 & 1;
}



/* Entry: 1069ff118; end: 1069ff47b;  */

void FUN_1069ff118(long param_1,long param_2,undefined8 param_3,undefined1 *param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_4;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d21e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d21e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((int)lVar5 != 0) {
    lVar2 = param_2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    dVar13 = 0.0;
    _objc_retain(lVar3);
    lVar5 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar5 == 0) {
      dVar14 = 0.0;
    }
    else {
      dVar14 = 0.0;
      do {
        lVar11 = 0;
        do {
          fVar12 = SUB84(dVar13,0);
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          func_0x00010bf8b160(*(undefined8 *)(lVar11 * 8));
          dVar13 = (double)fVar12;
          dVar14 = dVar14 + dVar13;
          lVar11 = lVar11 + 1;
        } while (lVar5 != lVar11);
        lVar5 = lVar3;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar3);
    lVar2 = param_2;
    func_0x00010c07fb80();
    if ((int)lVar2 != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c234580();
      _objc_release(uVar4);
    }
    puVar6 = PTR_PTR_1126cfb60;
    _objc_alloc();
    lVar2 = param_2;
    func_0x00010bf7eca0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    func_0x00010c113000(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06ece0(param_2);
    func_0x00010c06d000();
    puVar7 = PTR_PTR_1126b6600;
    func_0x00010bfb6060(dVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074da0();
    func_0x00010c07fb80();
    lVar8 = param_2;
    func_0x00010c11eb20();
    _objc_retainAutoreleasedReturnValue();
    param_5 = lVar5;
    func_0x00010c00c720();
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(lVar11);
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar9 = puVar6;
    func_0x00010c130f40(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    *param_4 = 1;
    _objc_release(puVar6);
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    _objc_retain(param_5);
    iVar1 = (int)*(undefined8 *)(param_2 + 0x18);
    func_0x00010c07d540();
    if (iVar1 == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain(puVar9);
      _objc_retain(param_5);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(param_5);
      _objc_release(puVar9);
    }
    else {
      func_0x00010bedf0e0(param_2);
    }
    _objc_release(param_5);
    _objc_release(puVar9);
    return;
  }
  return;
}



/* Entry: 1069ff47c; end: 1069ff5af; -[SCGalleryStoriesTabDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_1069ff47c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c07d540();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1069ff550;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  else {
    func_0x00010bedf0e0(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1069ff5b0; end: 1069ff5e7; -[SCGalleryStoriesTabDataSource _updateSearchResults] */

void FUN_1069ff5b0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c07d540();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c289890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_updateSearchResults_112680048);
    return;
  }
  return;
}



/* Entry: 1069ff5e8; end: 1069ffb33; -[SCGalleryStoriesTabDataSource _updateEntries:failedEntries:] */

ulong FUN_1069ff5e8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_80 = puVar3;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar3);
  func_0x00010befa160(puVar3);
  puVar4 = puVar3;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  uStack_118 = (undefined1)*(undefined8 *)(param_1 + 8);
  func_0x00010bfe2200();
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc0000000;
  pcStack_128 = FUN_1069ffb34;
  puStack_120 = &UNK_110953048;
  puVar4 = puVar6;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar7 = *(long *)(param_1 + 0x68);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar7;
  func_0x00010bf529e0();
  if (lVar18 != 0) {
    func_0x00010befa160(puVar6);
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  _objc_retain(puVar4);
  puVar9 = puVar4;
  func_0x00010bf52a60();
  if (puVar9 != (undefined *)0x0) {
    lVar18 = *plStack_170;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (*plStack_170 != lVar18) {
          _objc_enumerationMutation(puVar4);
        }
        uVar19 = *(undefined8 *)(lStack_178 + (long)puVar21 * 8);
        uVar20 = *(undefined8 *)(param_1 + 0x50);
        uVar17 = uVar19;
        func_0x00010bf97200(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20(uVar20);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        lVar14 = param_1;
        func_0x00010bee9a60();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar14;
        func_0x00010bf343c0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010bf529e0();
        _objc_release(lVar10);
        if (lVar11 != 0) {
          func_0x00010befa120(puVar6);
          func_0x00010bf97200(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(uVar19);
        }
        _objc_release(lVar14);
        _objc_release(uVar20);
        puVar21 = puVar21 + 1;
      } while (puVar9 != puVar21);
      puVar9 = puVar4;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar9 = puVar8;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar9;
  _objc_release(uVar17);
  puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_110 = puVar9;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(puVar9);
  func_0x00010c246bc0(puVar6);
  uVar13 = *(ulong *)(param_1 + 0x18);
  func_0x00010c07d540();
  if ((uVar13 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bfd6fe0();
    if (iVar2 != 0) {
      lVar14 = *(long *)(param_1 + 0x68);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar14;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar18 != 0) {
        func_0x00010c066b00(puVar6);
      }
      _objc_release(lVar18);
      _objc_release(lVar14);
    }
  }
  _objc_initWeak(auStack_188,param_1);
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_1069ffc08;
  puStack_1a8 = &UNK_110848218;
  _objc_copyWeak(auStack_190,auStack_188);
  _objc_retain(param_3);
  uStack_1a0 = param_3;
  _objc_retain(puVar6);
  ppuVar16 = &puStack_1c0;
  puStack_198 = puVar6;
  func_0x000100162d98("APPSTORE");
  _objc_release(puStack_198);
  _objc_release(uStack_1a0);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(ppuVar16);
  bVar1 = *(byte *)(param_3 + 0x20);
  _objc_retain(ppuVar16);
  ppuVar15 = ppuVar16;
  func_0x00010c07b240();
  if ((((ulong)ppuVar15 & 1) == 0) &&
     (ppuVar15 = ppuVar16, func_0x00010c080ca0(), ((ulong)ppuVar15 & 1) == 0)) {
    ppuVar15 = ppuVar16;
    func_0x00010bfbdda0();
    iVar2 = (int)ppuVar15;
    func_0x00010b5face4();
    if (iVar2 != 0) {
      ppuVar15 = ppuVar16;
      func_0x00010b5f6bec();
      if ((int)ppuVar15 == 0) {
        uVar13 = 1;
        goto LAB_1069ffbcc;
      }
      ppuVar15 = ppuVar16;
      func_0x00010bf977c0();
      if ((1 < (int)ppuVar15 - 1U) &&
         (ppuVar15 = ppuVar16, func_0x00010bf977c0(), (int)ppuVar15 != 3)) {
        ppuVar15 = ppuVar16;
        func_0x00010bf977c0();
        if (2 < (int)ppuVar15 - 1U) {
          ppuVar15 = ppuVar16;
          func_0x00010b5fab34(ppuVar16);
          uVar13 = (ulong)((uint)ppuVar15 & (uint)bVar1 ^ 1);
          goto LAB_1069ffbcc;
        }
      }
    }
  }
  uVar13 = 0;
LAB_1069ffbcc:
  _objc_release(ppuVar16);
  _objc_release(ppuVar16);
  return uVar13;
}



/* Entry: 1069ffb34; end: 1069ffc07;  */

uint FUN_1069ffb34(long param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  bVar1 = *(byte *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c07b240();
  if (((uVar3 & 1) == 0) && (uVar3 = param_2, func_0x00010c080ca0(), (uVar3 & 1) == 0)) {
    uVar3 = param_2;
    func_0x00010bfbdda0();
    iVar2 = (int)uVar3;
    func_0x00010b5face4();
    if (iVar2 != 0) {
      uVar3 = param_2;
      func_0x00010b5f6bec();
      if ((int)uVar3 == 0) {
        uVar4 = 1;
        goto LAB_1069ffbcc;
      }
      uVar3 = param_2;
      func_0x00010bf977c0();
      if ((1 < (int)uVar3 - 1U) && (uVar3 = param_2, func_0x00010bf977c0(), (int)uVar3 != 3)) {
        uVar3 = param_2;
        func_0x00010bf977c0();
        if (2 < (int)uVar3 - 1U) {
          uVar3 = param_2;
          func_0x00010b5fab34(param_2);
          uVar4 = (uint)uVar3 & (uint)bVar1 ^ 1;
          goto LAB_1069ffbcc;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1069ffbcc:
  _objc_release(param_2);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1069ffc08; end: 1069ffc87;  */

void FUN_1069ffc08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2858c0(*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = lVar1 + 0x80;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    func_0x00010c258d60(lVar2,param_2,lVar1,uVar3,*(undefined8 *)(lVar1 + 0x40));
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069ffc88; end: 1069ffd33; -[SCGalleryStoriesTabDataSource memoriesInlineSearchDataSource:didChangeSearchResults:] */

void FUN_1069ffc88(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x00010c07d540();
  if (param_3 == 0) {
    func_0x00010c121e00(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1069ffd34;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_4);
    uStack_40 = param_4;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1069ffd34; end: 1069ffe97;  */

void FUN_1069ffd34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x22;
  long lVar9;
  long lVar10;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  uVar6 = 0x10;
  lVar2 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_120,auStack_d8);
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        func_0x00010c0c1c20(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      uVar6 = 0x10;
      lVar2 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_120,auStack_d8);
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  puVar4 = puVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x00010bed77a0(uVar7,param_2,puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1069ffe98;
  uStack_150 = unaff_x22;
  puStack_148 = puVar4;
  uStack_140 = uVar7;
  puStack_138 = puVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(uVar3);
  uVar7 = *(undefined8 *)(puVar5 + 0x38);
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1069fff30;
  puStack_170 = &UNK_11084d5f8;
  uStack_168 = uVar3;
  puStack_160 = puVar5;
  uStack_158 = uVar6;
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar7,param_2,&puStack_188);
  _objc_release(uStack_168);
  _objc_release(uVar3);
  return;
}



/* Entry: 1069ffe98; end: 1069fff2f; -[SCGalleryStoriesTabDataSource memoriesFavoriteSnapsStoryDataCoordinator:didUpdateDataModels:isLoadingInitialDataModel:] */

void FUN_1069ffe98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069fff30;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_4;
  lStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1069fff30; end: 106a0006b;  */

void FUN_1069fff30(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x20);
  }
  _objc_retain(ppuVar1);
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(param_1 + 0x20) == 0)) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110e67698;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67698,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  lVar5 = 1;
  ppuVar2 = ppuVar1;
  FUN_106a0006c(ppuVar1,1,0,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68));
  _objc_release(puVar10);
  ppuVar6 = *(undefined ***)(*(long *)(param_1 + 0x28) + 0x58);
  ppuVar7 = *(undefined ***)(*(long *)(param_1 + 0x28) + 0x60);
  func_0x00010bed77a0();
  _objc_release(ppuVar2);
  _objc_release(ppuVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar7);
  if (ppuVar1 == (undefined **)0x0) {
    puVar10 = (undefined *)0x0;
    goto LAB_106a00238;
  }
  ppuVar9 = ppuVar1;
  func_0x00010bf529e0();
  if ((undefined **)0x3 < ppuVar9) {
    ppuVar9 = (undefined **)0x4;
  }
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x106a006b0;
  puStack_c0 = &UNK_110952fc8;
  _objc_retain(ppuVar1);
  ppuVar2 = (undefined **)0x0;
  ppuStack_b8 = ppuVar1;
  func_0x00010bd86bb4(0,ppuVar9,&puStack_d8);
  if (lVar5 == 2) {
    ppuVar11 = ppuVar1;
    FUN_106d0e444();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar11;
    func_0x000108dfd8e4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar11;
    func_0x00010b5fab34();
    if (((ulong)ppuVar3 & 1) == 0) {
      _objc_retain(ppuVar6);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar6;
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar3 = ppuVar1;
        FUN_106d0e4d0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar3 == (undefined **)0x0) {
          _objc_retain(ppuVar11);
          ppuVar9 = ppuVar11;
          func_0x00010bf977c0();
          if ((int)ppuVar9 - 1U < 2) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110e2b818;
LAB_106a002dc:
            func_0x00010bcbeaa8(ppuVar9,0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            ppuVar9 = ppuVar11;
            func_0x00010bf977c0();
            if ((int)ppuVar9 == 3) {
              ppuVar9 = &PTR____CFConstantStringClassReference_110dc75f8;
              goto LAB_106a002dc;
            }
            func_0x000108dfd8e4();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(ppuVar11);
        }
        else {
          _objc_retain(ppuVar3);
          ppuVar9 = ppuVar3;
        }
        _objc_release(ppuVar3);
      }
    }
  }
  else {
    ppuVar9 = ppuVar2;
    func_0x000108dfd884();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)0x0;
  }
  ppuVar3 = ppuVar1;
  func_0x00010bf529e0(ppuVar1);
  FUN_106d0e680();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar5 == 1) && (ppuVar7 != (undefined **)0x0)) {
    _objc_retain(ppuVar7);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar7;
  }
  puVar10 = PTR_PTR_1126cfb68;
  _objc_alloc(PTR_PTR_1126cfb68);
  ppuVar4 = ppuVar2;
  func_0x00010bf51e00(ppuVar2);
  func_0x00010c04ef20(puVar10);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar9);
  _objc_release(ppuVar11);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_b8);
LAB_106a00238:
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106a0006c; end: 106a00313;  */

void FUN_106a0006c(undefined **param_1,long param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 == (undefined **)0x0) {
    puVar5 = (undefined *)0x0;
    goto LAB_106a00238;
  }
  ppuVar1 = param_1;
  func_0x00010bf529e0();
  if ((undefined **)0x3 < ppuVar1) {
    ppuVar1 = (undefined **)0x4;
  }
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106a006b0;
  puStack_70 = &UNK_110952fc8;
  _objc_retain(param_1);
  ppuVar2 = (undefined **)0x0;
  ppuStack_68 = param_1;
  func_0x00010bd86bb4(0,ppuVar1,&puStack_88);
  if (param_2 == 2) {
    ppuVar6 = param_1;
    FUN_106d0e444();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar6;
    func_0x000108dfd8e4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010b5fab34();
    if (((ulong)ppuVar3 & 1) == 0) {
      _objc_retain(param_3);
      _objc_release(ppuVar1);
      ppuVar1 = param_3;
      if (param_3 == (undefined **)0x0) {
        ppuVar3 = param_1;
        FUN_106d0e4d0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar3 == (undefined **)0x0) {
          _objc_retain(ppuVar6);
          ppuVar1 = ppuVar6;
          func_0x00010bf977c0();
          if ((int)ppuVar1 - 1U < 2) {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e2b818;
LAB_106a002dc:
            func_0x00010bcbeaa8(ppuVar1,0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            ppuVar1 = ppuVar6;
            func_0x00010bf977c0();
            if ((int)ppuVar1 == 3) {
              ppuVar1 = &PTR____CFConstantStringClassReference_110dc75f8;
              goto LAB_106a002dc;
            }
            func_0x000108dfd8e4();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(ppuVar6);
        }
        else {
          _objc_retain(ppuVar3);
          ppuVar1 = ppuVar3;
        }
        _objc_release(ppuVar3);
      }
    }
  }
  else {
    ppuVar1 = ppuVar2;
    func_0x000108dfd884();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)0x0;
  }
  ppuVar3 = param_1;
  func_0x00010bf529e0(param_1);
  FUN_106d0e680();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 == 1) && (param_4 != (undefined **)0x0)) {
    _objc_retain(param_4);
    _objc_release(ppuVar3);
    ppuVar3 = param_4;
  }
  puVar5 = PTR_PTR_1126cfb68;
  _objc_alloc(PTR_PTR_1126cfb68);
  ppuVar4 = ppuVar2;
  func_0x00010bf51e00(ppuVar2);
  func_0x00010c04ef20(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_68);
LAB_106a00238:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a00314; end: 106a003f7; -[SCGalleryStoriesTabDataSource memoriesConsolidatedAutoSavedStoriesDataCoordinator:didUpdateMyStoryDataModels:customStoryDataModelsMap:customStoryTitleMap:] */

void FUN_106a00314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106a003f8;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  lStack_48 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106a003f8; end: 106a00527;  */

void FUN_106a003f8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    FUN_106a0006c(uVar4,2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(puVar2);
  func_0x00010bf97ce0(uVar4);
  puVar5 = puVar2;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68));
    _objc_release(puVar5);
  }
  func_0x00010bed77a0();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a00528; end: 106a005d7;  */

void FUN_106a00528(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_106a0006c(param_3,2,uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a005d8; end: 106a005ef; -[SCGalleryStoriesTabDataSource delegate] */

void FUN_106a005d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a005f0; end: 106a005fb; -[SCGalleryStoriesTabDataSource setDelegate:] */

void FUN_106a005f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 106a005fc; end: 106a006fb; -[SCGalleryStoriesTabDataSource .cxx_destruct] */

void FUN_106a005fc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a006fc; end: 106a00b4f; -[SCGalleryStoriesTabV2Controller initWithTabType:containerViewController:memoriesScopeDelegate:delegate:storiesTabService:currentPageTracker:] */

undefined8 *
FUN_106a006fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_70 = PTR_PTR_1126f4328;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_storeWeak(puVar1 + 2,param_5);
    _objc_storeWeak(puVar1 + 0x15,param_6);
    puVar1[0x16] = param_3;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar21);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar21);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    _objc_retain(param_7);
    uVar21 = puVar1[0x12];
    puVar1[0x12] = param_7;
    _objc_release(uVar21);
    _objc_retain(param_8);
    uVar21 = puVar1[0x13];
    puVar1[0x13] = param_8;
    _objc_release(uVar21);
    puVar2 = PTR_PTR_1126c3950;
    _objc_alloc();
    uVar3 = puVar1[0x12];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x12];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c8e80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[0x12];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0c8be0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0653c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[0x12];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puVar1[0x12];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bfa1120();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = puVar1[0x12];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf49180();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = puVar1[0x12];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = puVar1[0x12];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c0c8fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011ea0();
    uVar22 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar22);
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
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar21);
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar1[0x10]);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106a00b50; end: 106a00e07; -[SCGalleryStoriesTabV2Controller _keyboardWillShow:] */

void FUN_106a00b50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined1 auStack_98 [8];
  
  _objc_retain(param_7);
  lVar2 = param_5 + 0x60;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = param_7;
    func_0x00010c292820(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    dVar7 = param_1;
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar4);
    uVar8 = *(undefined8 *)(param_5 + 0xb8);
    uVar12 = *(undefined8 *)(param_5 + 0xc0);
    uVar15 = *(undefined8 *)(param_5 + 0xd0);
    func_0x00010bde7cc0(uVar8,uVar12,*(undefined8 *)(param_5 + 200),param_5);
    dVar9 = param_1;
    uVar4 = param_2;
    uVar14 = param_3;
    uVar16 = param_4;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar10 = dVar9;
    func_0x000107e857e4();
    lVar2 = param_5 + 0x60;
    dVar17 = dVar9 - dVar10;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5 + 0x60;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bfb68e0();
    func_0x00010bf51460(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _CGRectGetMaxY(dVar17,uVar4,uVar14,uVar16);
    dVar11 = dVar17;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
    _CGRectGetHeight();
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar13 = -12.0;
    dVar17 = dVar17 - ((dVar11 - param_1) + -12.0);
    func_0x00010bf4cdc0(*(undefined8 *)(param_5 + 0x20));
    if (dVar17 < dVar13) {
      func_0x00010bf4cdc0(*(undefined8 *)(param_5 + 0x20));
      dVar17 = dVar13;
    }
    _objc_initWeak(auStack_98,param_5);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_copyWeak(auStack_c8,auStack_98);
    uStack_c0 = uVar8;
    uStack_b8 = uVar12;
    dStack_b0 = dVar9 - dVar10;
    uStack_a8 = uVar15;
    dStack_a0 = dVar17;
    func_0x00010bf03400(dVar7,puVar1);
    _objc_storeWeak(param_5 + 0x60,0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_98);
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 106a00e08; end: 106a00e57;  */

void FUN_106a00e08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c181f80(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(lVar1 + 0x20));
    func_0x00010c1822e0(0,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(lVar1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a00e58; end: 106a00fab; -[SCGalleryStoriesTabV2Controller _keyboardWillHide:] */

void FUN_106a00e58(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c292820(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  func_0x00010bde7cc0(param_2);
  _objc_initWeak(auStack_68,param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_90,auStack_68);
  uStack_88 = uVar3;
  uStack_80 = uVar4;
  uStack_78 = uVar5;
  uStack_70 = uVar6;
  func_0x00010bf03400(param_1,puVar1);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106a00fac; end: 106a00feb;  */

void FUN_106a00fac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c181f80(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(lVar1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a00fec; end: 106a01053; -[SCGalleryStoriesTabV2Controller scrollBarTopOffset] */

undefined8 FUN_106a00fec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar1 = uVar2;
  func_0x00010bf408e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40360(param_3,param_4,uVar2,uVar1,0);
  _objc_release(uVar1);
  return param_2;
}



/* Entry: 106a01054; end: 106a0105b; -[SCGalleryStoriesTabV2Controller isPrivate] */

undefined8 FUN_106a01054(void)

{
  return 0;
}



/* Entry: 106a0105c; end: 106a01063; -[SCGalleryStoriesTabV2Controller shouldDisplay] */

undefined8 FUN_106a0105c(void)

{
  return 1;
}



/* Entry: 106a01064; end: 106a010c3; -[SCGalleryStoriesTabV2Controller setLoading:] */

void FUN_106a01064(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + 0xa2) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xa2) = (char)param_3;
  func_0x00010bde7cc0(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
  func_0x00010c181f80(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a010c4; end: 106a010df; -[SCGalleryStoriesTabV2Controller setVisible:] */

void FUN_106a010c4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0xa0) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xa0) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_reloadData_112627cf8)
  ;
  return;
}



/* Entry: 106a010e0; end: 106a010ff; -[SCGalleryStoriesTabV2Controller allItems] */

void FUN_106a010e0(long param_1)

{
  func_0x000100504554(*(undefined8 *)(param_1 + 0x88),&PTR___NSConcreteGlobalBlock_1109530b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a01100; end: 106a01107;  */

void FUN_106a01100(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_entry_1125c35c0);
  return;
}



/* Entry: 106a01108; end: 106a012ab; -[SCGalleryStoriesTabV2Controller galleryItemIdToSnapsMap] */

undefined * FUN_106a01108(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        func_0x00010bf00920();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar4 == 0) || (lVar3 = lVar7, func_0x00010bf529e0(), lVar3 == 0)) {
          func_0x00010bf529e0(lVar7);
        }
        else {
          func_0x00010c1d0640(puVar1,param_2,lVar7,lVar4);
        }
        _objc_release(lVar7);
        _objc_release(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 106a012ac; end: 106a012b3; -[SCGalleryStoriesTabV2Controller galleryItemIdToPHAssetsMap] */

undefined8 FUN_106a012ac(void)

{
  return 0;
}



/* Entry: 106a012b4; end: 106a012bb; -[SCGalleryStoriesTabV2Controller itemIdsToExclude] */

undefined8 FUN_106a012b4(void)

{
  return 0;
}



/* Entry: 106a012bc; end: 106a012c3; -[SCGalleryStoriesTabV2Controller prefersAllItemsAreNotIterated] */

undefined8 FUN_106a012bc(void)

{
  return 0;
}



/* Entry: 106a012c4; end: 106a012ff; -[SCGalleryStoriesTabV2Controller allItemsCount] */

undefined8 FUN_106a012c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf00280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106a01300; end: 106a0130f; -[SCGalleryStoriesTabV2Controller isViewLoaded] */

bool FUN_106a01300(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 106a01310; end: 106a01353; -[SCGalleryStoriesTabV2Controller _contentInsetsWithInsets:] */

double FUN_106a01310(double param_1)

{
  func_0x000107e857e4();
  return param_1 + 2.0 + 2.0;
}



/* Entry: 106a01354; end: 106a0191f; -[SCGalleryStoriesTabV2Controller loadViewIfNeeded] */

void FUN_106a01354(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c0834c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    func_0x00010c013de0();
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar16);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x18));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init();
    func_0x00010c1c8300(0x4000000000000000);
    func_0x00010c1c82c0(0x4000000000000000,puVar1);
    func_0x00010c1f93e0(0,0,0x4000000000000000,0,puVar1);
    puVar2 = PTR_PTR_1126c3958;
    _objc_alloc();
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c014040();
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar16);
    func_0x00010c1acea0(0x4000000000000000,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1b6de0(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    func_0x00010c1f7e20(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c2025c0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c2026e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c167a20(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bde7cc0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_1);
    func_0x00010c181f80(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x20));
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class(PTR_PTR_1126c3960);
    puVar2 = PTR_PTR_1126c3960;
    _objc_opt_class(PTR_PTR_1126c3960);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(uVar16);
    _objc_release(puVar2);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class(PTR_PTR_1126cfb70);
    puVar2 = PTR_PTR_1126cfb70;
    _objc_opt_class(PTR_PTR_1126cfb70);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(uVar16);
    _objc_release(puVar2);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class(PTR_PTR_1126cfb78);
    puVar2 = PTR_PTR_1126cfb78;
    _objc_opt_class(PTR_PTR_1126cfb78);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(uVar16);
    _objc_release(puVar2);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class(PTR_PTR_1126cfb80);
    func_0x00010c126060(uVar16);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c08de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf1ff80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c2793a0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR_PTR_1126cfb88;
    _objc_alloc();
    func_0x00010c016d60();
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar16);
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x28));
    puVar2 = PTR_PTR_1126c3bb0;
    _objc_alloc();
    func_0x00010bfff900();
    uVar16 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar16);
    func_0x00010c2115c0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010bef9040(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c1facc0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1b42a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bed76c0(param_1);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf94810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x18),PTR_s_endEditing__1125c2ba8,1);
  return;
}



/* Entry: 106a01920; end: 106a0192b; -[SCGalleryStoriesTabV2Controller _handleTap:] */

void FUN_106a01920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endEditing__1125c2ba8,1);
  return;
}



/* Entry: 106a0192c; end: 106a01953; -[SCGalleryStoriesTabV2Controller view] */

void FUN_106a0192c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a01954; end: 106a0197b; -[SCGalleryStoriesTabV2Controller collectionView] */

void FUN_106a01954(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a0197c; end: 106a01983; -[SCGalleryStoriesTabV2Controller itemsInRect:] */

void FUN_106a0197c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0851b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_itemsInRect__1125fee78);
  return;
}



/* Entry: 106a01984; end: 106a01a1f; -[SCGalleryStoriesTabV2Controller indexPathForId:itemLevelIdentifier:] */

void FUN_106a01984(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf00280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010b5fd798();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 != 0x7fffffffffffffff) {
    func_0x00010bdc9ea0(param_1);
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a01a20; end: 106a01a63; -[SCGalleryStoriesTabV2Controller setScrollContentInset:] */

void FUN_106a01a20(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  ushort uVar1;
  
  uVar1 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_5 + 0xd0) == param_4),
                              CONCAT24(-(ushort)(*(double *)(param_5 + 200) == param_3),
                                       CONCAT22(-(ushort)(*(double *)(param_5 + 0xc0) == param_2),
                                                -(ushort)(*(double *)(param_5 + 0xb8) == param_1))))
                     ,2);
  if ((uVar1 & 1) == 0) {
    *(double *)(param_5 + 0xb8) = param_1;
    *(double *)(param_5 + 0xc0) = param_2;
    *(double *)(param_5 + 200) = param_3;
    *(double *)(param_5 + 0xd0) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bee4c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updateWithScrollContentInset_112596ca8);
    return;
  }
  return;
}



/* Entry: 106a01a64; end: 106a01a9f; -[SCGalleryStoriesTabV2Controller scrollContentOffset] */

double FUN_106a01a64(double param_1,double param_2,long param_3)

{
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010bf4c7c0(*(undefined8 *)(param_3 + 0x20));
  return param_2 + param_1;
}



/* Entry: 106a01aa0; end: 106a01aa3; -[SCGalleryStoriesTabV2Controller scrollToTop] */

void FUN_106a01aa0(void)

{
  return;
}



/* Entry: 106a01aa4; end: 106a01aeb; -[SCGalleryStoriesTabV2Controller contentHeight] */

undefined8 FUN_106a01aa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf407a0();
  _objc_release(uVar1);
  return param_2;
}



/* Entry: 106a01aec; end: 106a01af7; -[SCGalleryStoriesTabV2Controller setScrollContentOffset:] */

void FUN_106a01aec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setScrollContentOffset_animated__11265b8b8,0,0);
  return;
}



/* Entry: 106a01af8; end: 106a01bbf; -[SCGalleryStoriesTabV2Controller setScrollContentOffset:animated:completion:] */

void FUN_106a01af8(double param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_5);
  dVar3 = -2.0;
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + 0x20));
  if (dVar3 == param_1 + 0.0 + -2.0) {
    if (param_5 == 0) goto LAB_106a01ba8;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf4cdc0(uVar2);
    func_0x00010c182300(uVar2);
    if (param_5 == 0) goto LAB_106a01ba8;
    if (param_4 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x58);
      lVar1 = param_5;
      _objc_retainBlock(param_5);
      func_0x00010befa120(uVar2);
      _objc_release(lVar1);
      goto LAB_106a01ba8;
    }
  }
  func_0x000100162d98("APPSTORE",param_5);
LAB_106a01ba8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a01bc0; end: 106a01beb; -[SCGalleryStoriesTabV2Controller scrollContentDistanceToTop] */

double FUN_106a01bc0(undefined8 param_1,double param_2,long param_3)

{
  double dVar1;
  
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x20));
  dVar1 = 0.0;
  if (0.0 <= -2.0 - param_2) {
    dVar1 = -2.0 - param_2;
  }
  return dVar1;
}



/* Entry: 106a01bec; end: 106a01c37; -[SCGalleryStoriesTabV2Controller setSelectMode:] */

void FUN_106a01bec(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0xa3) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xa3) = (char)param_3;
  func_0x00010c1facc0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1b42a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_reloadData_112627cf8)
  ;
  return;
}



/* Entry: 106a01c38; end: 106a01da7; -[SCGalleryStoriesTabV2Controller setFocused:] */

void FUN_106a01c38(long param_1,undefined8 param_2,uint param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1;
  if (*(byte *)(param_1 + 0xa1) != param_3) {
    *(char *)(param_1 + 0xa1) = (char)param_3;
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_e8;
    lVar5 = lVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar4);
        }
        puVar3 = PTR_DAT_1126a56c8;
        lVar8 = *(long *)(lVar9 * 8);
        _objc_retain(lVar8);
        lVar6 = lVar8;
        func_0x00010010fab4(lVar8,puVar3);
        lVar1 = lVar8;
        if ((int)lVar6 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar8);
        if (lVar1 != 0) {
          if (*(char *)(param_1 + 0xa1) == '\x01') {
            func_0x00010c24eda0();
          }
          else {
            func_0x00010c256060(lVar8);
          }
        }
        _objc_release(lVar1);
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      param_4 = auStack_e8;
      lVar5 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  puVar7 = param_4;
  func_0x00010bfbd100();
  if (puVar7 == (undefined1 *)0x1) {
    func_0x00010bf35200(*(undefined8 *)(lVar4 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a01da8; end: 106a01dff; -[SCGalleryStoriesTabV2Controller changeSelected:forGalleryItem:] */

void FUN_106a01da8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfbd100();
  if (lVar1 == 1) {
    func_0x00010bf35200(*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a01e00; end: 106a01e07; -[SCGalleryStoriesTabV2Controller changeSelected:forGallerySnapItem:] */

void FUN_106a01e00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf35230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_changeSelected_snapItem__1125aae30);
  return;
}



/* Entry: 106a01e08; end: 106a01e13; -[SCGalleryStoriesTabV2Controller changeSelected:forItems:snapItems:] */

void FUN_106a01e08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf171b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_batchSelect_items_snapItems_anno_1125a3610);
  return;
}


