/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fe4b8c; end: 108fe4b9b; -[SCSearchMountableCollectionViewCell mountableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe4b8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f524);
}



/* Entry: 108fe4b9c; end: 108fe4baf; -[SCSearchMountableCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f524,0);
  return;
}



/* Entry: 108fe4bb0; end: 108fe4d3b; -[SCSearchLoadingView initWithSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108fe4bb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ffc08;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    lVar4 = (long)_DAT_11277f528;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 108fe4d3c; end: 108fe4dd3; -[SCSearchLoadingView setHidden:animated:] */

void FUN_108fe4d3c(undefined8 param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  if (param_4 != 0) {
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_108fe4dd4;
    puStack_28 = &UNK_110845ce0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x108fe4de8;
    puStack_58 = &UNK_110857498;
    uStack_50 = param_1;
    uStack_48 = param_3;
    uStack_20 = param_1;
    uStack_18 = param_3;
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40,
                        &puStack_70);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 108fe4dd4; end: 108fe4df3;  */

void FUN_108fe4dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(*(byte *)(param_1 + 0x28) ^ 1),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108fe4df4; end: 108fe4e57; -[SCSearchLoadingView setHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((int)param_3 == 0) {
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11277f528));
  }
  else {
    func_0x00010c2558c0();
  }
  puStack_28 = PTR_PTR_1126ffc08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 108fe4e58; end: 108fe4e6b; -[SCSearchLoadingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe4e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f528,0);
  return;
}



/* Entry: 108fe4e6c; end: 108fe4ebf;  */

undefined8 FUN_108fe4e6c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730608 != -1) {
    func_0x000107c27d9c(0x113730608,&PTR___NSConcreteGlobalBlock_110ad2260);
  }
  uVar1 = uRam0000000113730600;
  _objc_retain(uRam0000000113730600);
  return uVar1;
}



/* Entry: 108fe4ec0; end: 108fe4efb;  */

void FUN_108fe4ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110f16878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730600;
  puRam0000000113730600 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe4efc; end: 108fe501f; -[SCSearchRoundedCornerImageView initWithCornerRadius:rectCorner:cornerColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fe4efc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ffc10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithCornerRadius_rectCorner__1125df188);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277f52c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c066fa0(puVar1);
    puVar2 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277f530;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fe5020; end: 108fe51a3; -[SCSearchRoundedCornerImageView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe5020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  ulong uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ffc10;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_layoutSubviews_112600e60);
  uVar2 = param_5;
  func_0x00010bf20c00();
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11277f534);
  _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    lVar5 = (long)_DAT_11277f538;
    dVar6 = *(double *)(param_5 + lVar5);
    if (dVar6 != 0.0) {
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010c1244e0(param_5);
      func_0x00010bf525a0(param_5);
      dVar7 = dVar6;
      func_0x00010bf525a0(param_5);
      func_0x00010bf199e0(param_1,param_2,param_3,param_4,dVar6,dVar7,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdd00(*(undefined8 *)(param_5 + lVar5));
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc1040();
      uVar4 = *(undefined8 *)(param_5 + (long)_DAT_11277f530);
      func_0x00010c22a660(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820();
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
  }
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,
                      *(undefined8 *)(param_5 + (long)_DAT_11277f52c));
  return;
}



/* Entry: 108fe51a4; end: 108fe521b; -[SCSearchRoundedCornerImageView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe51a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277f53c;
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277f52c),param_2,
                        *(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe521c; end: 108fe5327; -[SCSearchRoundedCornerImageView setBorderWidth:borderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe521c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11277f538;
  if (param_1 == *(double *)(param_2 + lVar5)) {
    uVar2 = *(ulong *)(param_2 + _DAT_11277f530);
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25dbc0();
    uVar4 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bdc0fe0();
    _CGColorEqualToColor(uVar3,uVar4);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_108fe530c;
  }
  _objc_retainAutorelease(param_4);
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_2 + _DAT_11277f530);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar4);
  *(double *)(param_2 + lVar5) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_11277f534);
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  *puVar1 = uVar4;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  func_0x00010c1cbe20(param_2);
LAB_108fe530c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fe5328; end: 108fe5337; -[SCSearchRoundedCornerImageView image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe5328(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f53c);
}



/* Entry: 108fe5338; end: 108fe5347; -[SCSearchRoundedCornerImageView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe5338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f52c);
}



/* Entry: 108fe5348; end: 108fe5397; -[SCSearchRoundedCornerImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe5348(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f52c,0);
  _objc_storeStrong(param_1 + _DAT_11277f53c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f530,0);
  return;
}



/* Entry: 108fe5398; end: 108fe542f; -[SCSearchClearButton initWithFrame:highlightTint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108fe5398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_7);
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  if (param_5 != 0) {
    lVar2 = (long)_DAT_11277f544;
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_5 + lVar2);
    *(undefined8 *)(param_5 + lVar2) = param_7;
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  return param_5;
}



/* Entry: 108fe5430; end: 108fe552f; -[SCSearchClearButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fe5430(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffc18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar5 = (long)_DAT_11277f548;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f54c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f54c) = puVar3;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fe5530; end: 108fe560b; -[SCSearchClearButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe5530(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ffc18;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  lVar1 = (long)_DAT_11277f548;
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  func_0x00010c17a6a0(param_1,uVar2,*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  lVar1 = (long)_DAT_11277f54c;
  func_0x00010c17a6a0(param_1,uVar2,*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf345e0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c17a6a0(*(undefined8 *)(param_2 + _DAT_11277f550));
  return;
}



/* Entry: 108fe560c; end: 108fe561b; -[SCSearchClearButton sizeThatFits:] */

void FUN_108fe560c(void)

{
  return;
}



/* Entry: 108fe561c; end: 108fe5653; -[SCSearchClearButton pointInside:withEvent:] */

void FUN_108fe561c(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108fe5654; end: 108fe576b; -[SCSearchClearButton setButtonMode:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe5654(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if (param_3 != *(long *)(param_1 + _DAT_11277f540)) {
    *(long *)(param_1 + _DAT_11277f540) = param_3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108fe576c;
    puStack_60 = &UNK_110842e18;
    lStack_58 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_78);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x108fe57a4;
    puStack_88 = &UNK_110842e18;
    ppuVar3 = &puStack_a0;
    lStack_80 = param_1;
    _objc_retainBlock();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (param_4 == 0) {
      puStack_c8 = puVar1;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_108fe5854;
      puStack_b0 = &UNK_110849530;
      _objc_retain(ppuVar3);
      ppuStack_a8 = ppuVar3;
      func_0x00010c0f9680(puVar2,param_2,&puStack_c8);
      _objc_release(ppuStack_a8);
    }
    else {
      (*(code *)ppuVar3[2])(ppuVar3);
    }
    _objc_release(ppuVar3);
  }
  return;
}



/* Entry: 108fe576c; end: 108fe5853;  */

void FUN_108fe576c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe3480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe5854; end: 108fe585f;  */

void FUN_108fe5854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108fe585c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108fe5860; end: 108fe5867; -[SCSearchClearButton setButtonMode:] */

void FUN_108fe5860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c174950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setButtonMode_animated__11263ac70,param_3,0);
  return;
}



/* Entry: 108fe5868; end: 108fe5923; -[SCSearchClearButton setHighlightTint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe5868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277f544);
  *(undefined8 *)(param_1 + _DAT_11277f544) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110f168b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfe3480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108fe5924; end: 108fe5a6f; -[SCSearchClearButton setHighlighted:] */

void FUN_108fe5924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_1;
  func_0x00010c074da0();
  if ((int)param_3 != (int)uVar1) {
    puStack_48 = PTR_PTR_1126ffc18;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_setHighlighted__112647c38,param_3);
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar1 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf25800(param_1);
    uVar3 = param_1;
    func_0x00010c074da0();
    if ((int)uVar3 == 0) {
      uVar2 = 0x3ff0000000000000;
      uVar4 = 0x3fe0000000000000;
      uVar3 = 0;
    }
    else {
      uVar4 = 0x3fc3333333333333;
      func_0x00010bdcb3c0(0x3ff570a3d70a3d71,0x3fc3333333333333,0,param_1);
      uVar2 = 0x3ff3333333333333;
      uVar3 = uVar4;
    }
    func_0x00010bdcb3c0(uVar2,uVar4,uVar3,param_1);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 108fe5a70; end: 108fe5aa7;  */

void FUN_108fe5a70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe3480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe5aa8; end: 108fe5d77; -[SCSearchClearButton highlightedImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe5aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  
  lVar9 = (long)_DAT_11277f550;
  lVar6 = *(long *)(param_5 + lVar9);
  if (lVar6 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                        &PTR____CFConstantStringClassReference_110f168b8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11277f544;
    lVar8 = *(long *)(param_5 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    if (lVar8 == 0) {
      func_0x00010c01bf60(puVar2,param_6,puVar1);
      puVar7 = *(undefined **)(param_5 + lVar9);
      *(undefined **)(param_5 + lVar9) = puVar2;
    }
    else {
      puVar7 = puVar1;
      func_0x00010c14d100(puVar1,param_6,*(undefined8 *)(param_5 + lVar6));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60(puVar2,param_6,puVar7);
      uVar5 = *(undefined8 *)(param_5 + lVar9);
      *(undefined **)(param_5 + lVar9) = puVar2;
      _objc_release(uVar5);
    }
    _objc_release(puVar7);
    func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_11277f548),param_6,
                        *(undefined8 *)(param_5 + lVar9));
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                        &PTR____CFConstantStringClassReference_110f16898);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    func_0x00010c1400a0(param_3,param_4,puVar2,param_6,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar10 = (long)_DAT_11277f554;
    uVar5 = *(undefined8 *)(param_5 + lVar10);
    *(undefined **)(param_5 + lVar10) = puVar7;
    _objc_release(uVar5);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    _CGRectGetMidX();
    uVar5 = param_3;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    _CGRectGetMidY();
    func_0x00010c17a6a0(param_3,uVar5,*(undefined8 *)(param_5 + lVar10));
    func_0x00010c1c2ca0(*(undefined8 *)(param_5 + lVar9),param_6,*(undefined8 *)(param_5 + lVar10));
    dVar11 = 0.0;
    func_0x00010c1739e0(0,0,0x3e80000000000000,0x3e80000000000000,*(undefined8 *)(param_5 + lVar9));
    func_0x00010bf20c00(param_5);
    _CGRectGetMidX();
    dVar12 = dVar11;
    func_0x00010bf20c00(param_5);
    _CGRectGetMidY();
    func_0x00010c17a6a0(dVar11,dVar12,*(undefined8 *)(param_5 + lVar9));
    lVar6 = param_5;
    func_0x00010bfe3480(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    lVar3 = param_5;
    func_0x00010bfe3480(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar13 = 0;
    func_0x00010c1739e0(0,0,dVar11 * 3.0,dVar12 * 3.0,*(undefined8 *)(param_5 + lVar10));
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar6);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    _CGRectGetMidX();
    uVar5 = uVar13;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    _CGRectGetMidY();
    func_0x00010c17a6a0(uVar13,uVar5,*(undefined8 *)(param_5 + lVar10));
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar6 = *(long *)(param_5 + lVar9);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 108fe5d78; end: 108fe5e5b; -[SCSearchClearButton _animateView:toScale:withDuration:delay:showingClearButton:completion:] */

void FUN_108fe5d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108fe5e5c;
  puStack_88 = &UNK_11091a8c8;
  uStack_80 = param_4;
  uStack_78 = param_6;
  uStack_70 = param_1;
  uStack_68 = param_7;
  _objc_retain(param_6);
  func_0x00010bf03460(param_2,param_3,0x3ff0000000000000,0x3fb999999999999a,puVar1,param_5,2,
                      &puStack_a0,param_8);
  _objc_release(uStack_78);
  _objc_release(param_6);
  return;
}



/* Entry: 108fe5e5c; end: 108fe615b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe5e5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar6 = (long)_DAT_11277f550;
  uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar6);
  if (*(char *)(param_3 + 0x38) == '\x01') {
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c23d0a0(uVar1);
    uVar8 = 0;
    func_0x00010c1739e0(0,0,param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar6));
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x20));
    _CGRectGetMidX();
    uVar5 = uVar8;
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x20));
    _CGRectGetMidY();
    func_0x00010c17a6a0(uVar8,uVar5,*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar6));
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfe34a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfe34a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    lVar7 = (long)_DAT_11277f554;
    func_0x00010c1739e0(0,0,uVar8,uVar5,*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar7));
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar9 = 0;
    func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_11277f54c));
    _objc_release(uVar1);
  }
  else {
    dVar10 = 0.0;
    func_0x00010c1739e0(0,0,0x3e80000000000000,0x3e80000000000000,uVar1);
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x20));
    _CGRectGetMidX();
    dVar11 = dVar10;
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x20));
    _CGRectGetMidY();
    func_0x00010c17a6a0(dVar10,dVar11,*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar6));
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfe3480(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfe3480(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    lVar7 = (long)_DAT_11277f554;
    func_0x00010c1739e0(0,0,dVar10 * 3.0,dVar11 * 3.0,
                        *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar7));
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar9 = 0x3ff0000000000000;
    func_0x00010c1677c0(0x3ff0000000000000,
                        *(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_11277f54c));
  }
  func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar6));
  _CGRectGetMidX();
  uVar1 = uVar9;
  func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar6));
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar9,uVar1,*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar7));
  _CGAffineTransformMakeScale
            (&uStack_a0,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x30));
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  func_0x00010c219960(*(undefined8 *)(param_3 + 0x28),param_4,&uStack_d0);
  func_0x00010c1cbe20(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c08cdc0(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 108fe615c; end: 108fe616b; -[SCSearchClearButton buttonMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe615c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f540);
}



/* Entry: 108fe616c; end: 108fe617b; -[SCSearchClearButton highlightTint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe616c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f544);
}



/* Entry: 108fe617c; end: 108fe618b; -[SCSearchClearButton containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe617c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f548);
}



/* Entry: 108fe618c; end: 108fe61cb; -[SCSearchClearButton setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe618c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f548;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe61cc; end: 108fe61db; -[SCSearchClearButton imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe61cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f54c);
}



/* Entry: 108fe61dc; end: 108fe621b; -[SCSearchClearButton setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe61dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f54c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe621c; end: 108fe625b; -[SCSearchClearButton setHighlightedImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe621c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f550;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe625c; end: 108fe626b; -[SCSearchClearButton highlightedImageViewMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe625c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f554);
}



/* Entry: 108fe626c; end: 108fe62ab; -[SCSearchClearButton setHighlightedImageViewMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe626c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f554;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe62ac; end: 108fe631b; -[SCSearchClearButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe62ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f554,0);
  _objc_storeStrong(param_1 + _DAT_11277f550,0);
  _objc_storeStrong(param_1 + _DAT_11277f54c,0);
  _objc_storeStrong(param_1 + _DAT_11277f548,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f544,0);
  return;
}



/* Entry: 108fe631c; end: 108fe64ef; -[SCSearchView initWithPlaceholderText:style:keyboardAppearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108fe631c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ffc20;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277f56c) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277f570) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277f574) = 0x3ff0000000000000;
    uVar5 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f578);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277f578) = uVar5;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277f57c) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277f580) = 1;
    func_0x00010bf6a260(puVar1);
    lVar6 = (long)_DAT_11277f584;
    *(double *)((long)puVar1 + lVar6) = param_1;
    if (param_1 < 1.0) {
      puVar2 = (undefined1 *)puVar1;
      func_0x00010be5c180();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f588);
      *(undefined1 **)((long)puVar1 + (long)_DAT_11277f588) = puVar2;
      _objc_release(uVar5);
      func_0x00010befbb60(puVar1);
      param_1 = *(double *)((long)puVar1 + lVar6);
    }
    if (0.0 < param_1) {
      puVar2 = (undefined1 *)puVar1;
      func_0x00010be5c1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f58c);
      *(undefined1 **)((long)puVar1 + (long)_DAT_11277f58c) = puVar2;
      _objc_release(uVar5);
      func_0x00010befbb60(puVar1);
    }
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277f590;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c231660();
    if (((ulong)puVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      puVar2 = (undefined1 *)puVar1;
      func_0x00010c26bc20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar5);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108fe64f0; end: 108fe64fb; -[SCSearchView initWithPlaceholderText:] */

void FUN_108fe64f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0368d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPlaceholderText_style_ke_1125eb430,param_3,0,2);
  return;
}



/* Entry: 108fe64fc; end: 108fe651f; -[SCSearchView _searchButtonOriginX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe64fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4041000000000000;
  if (*(char *)(param_1 + _DAT_11277f594) == '\0') {
    uVar1 = 0x401c000000000000;
  }
  return uVar1;
}



/* Entry: 108fe6520; end: 108fe65f3; -[SCSearchView _makeSearchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe6520(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dcdd8;
  _objc_alloc_init(PTR_PTR_1126dcdd8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277f56c);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  FUN_108fe65f4(uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar1);
  func_0x00010c1677c0(1.0 - *(double *)(param_1 + _DAT_11277f584),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108fe65f4; end: 108fe66af;  */

void FUN_108fe65f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  _objc_retain(param_2);
  if (param_1 < 2) {
    if (param_1 == 0) {
      _objc_retain(param_2);
      unaff_x20 = param_2;
      goto LAB_108fe6694;
    }
    if (param_1 != 1) goto LAB_108fe6694;
  }
  else if ((param_1 != 3) && (param_1 != 2)) goto LAB_108fe6694;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  unaff_x20 = param_2;
  func_0x00010c14d100(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_108fe6694:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 108fe66b0; end: 108fe673f; -[SCSearchView _layoutSearchButtonWithOriginX:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe66b0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_11277f588;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf20c00();
  func_0x00010c23d5a0(param_3,param_4,uVar1);
  dVar3 = param_3;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar3 + param_4 * -0.5 + 1.0,param_3,param_4,*(undefined8 *)(param_5 + lVar2),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108fe6740; end: 108fe6827; -[SCSearchView _makeSearchButtonStroked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe6740(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dcdd8;
  _objc_alloc_init(PTR_PTR_1126dcdd8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277f56c);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  FUN_108fe65f4(uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar1);
  func_0x00010c1677c0(*(undefined8 *)(param_1 + _DAT_11277f584),puVar1);
  func_0x00010c160fc0(puVar1);
  func_0x00010c1af000(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108fe6828; end: 108fe68b7; -[SCSearchView _layoutSearchButtonStrokedWithOriginX:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe6828(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_11277f58c;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf20c00();
  func_0x00010c23d5a0(param_3,param_4,uVar1);
  dVar3 = param_3;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar3 + param_4 * -0.5 + 1.0,param_3,param_4,*(undefined8 *)(param_5 + lVar2),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108fe68b8; end: 108fe6987; -[SCSearchView setSearchButtonPercentStroked:] */

/* WARNING: Possible PIC construction at 0x000108fe6958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fe695c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe68b8(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f584;
  if (*(double *)(param_2 + lVar1) != param_1) {
    *(double *)(param_2 + lVar1) = param_1;
    if ((param_1 < 1.0) && (*(long *)(param_2 + _DAT_11277f588) == 0)) {
      func_0x00010c153520(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      param_1 = *(double *)(param_2 + lVar1);
    }
    if ((0.0 < param_1) && (*(long *)(param_2 + _DAT_11277f58c) == 0)) {
      func_0x00010c153580(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      param_1 = *(double *)(param_2 + lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (1.0 - param_1,*(undefined8 *)(param_2 + _DAT_11277f588),PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 108fe6988; end: 108fe6dff; -[SCSearchView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe6988(double param_1,undefined8 param_2,double param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulong uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ffc20;
  uStack_90 = param_4;
  _objc_msgSendSuper2(&uStack_90,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_4;
  func_0x00010c233300();
  dVar10 = param_1;
  if ((int)uVar1 != 0) {
    func_0x00010bf20c00(param_4);
    _CGRectGetMidY();
    uVar1 = param_4;
    func_0x00010bf13860(param_4);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = 17.0;
    func_0x00010c17a6a0(0x4031000000000000,param_1);
    _objc_release(uVar1);
  }
  func_0x00010be9c520(param_4);
  lVar8 = (long)_DAT_11277f588;
  if (*(long *)(param_4 + lVar8) != 0) {
    func_0x00010be49680(dVar10,param_4);
  }
  lVar7 = (long)_DAT_11277f58c;
  if (*(long *)(param_4 + lVar7) != 0) {
    func_0x00010be49660(dVar10,param_4);
  }
  if ((*(long *)(param_4 + lVar8) == 0) && (*(long *)(param_4 + lVar7) == 0)) {
    param_3 = *(double *)PTR__CGSizeZero_110347620;
  }
  else {
    func_0x00010bfb68e0();
  }
  lVar9 = (long)_DAT_11277f598;
  lVar7 = *(long *)(param_4 + lVar9);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    dVar14 = dVar10 + 6.0;
    param_3 = dVar14 + param_3;
  }
  else {
    dVar10 = dVar10 + param_3;
    dVar13 = dVar10 + 8.0;
    func_0x00010bf20c00(param_4);
    _CGRectGetMinY();
    dVar14 = dVar10;
    func_0x00010bf20c00(param_4);
    _CGRectGetHeight();
    dVar10 = dVar10 + (dVar14 + -30.0) * 0.5;
    lVar7 = (long)_DAT_11277f59c;
    func_0x00010c19f0e0(dVar13,dVar10,0x3ff8000000000000,0x403e000000000000,
                        *(undefined8 *)(param_4 + lVar7));
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar7));
    _CGRectGetMaxX();
    dVar14 = dVar13 + 8.0;
    func_0x00010bf20c00(param_4);
    _CGRectGetMinY();
    uVar2 = *(undefined8 *)(param_4 + lVar9);
    dVar11 = dVar13;
    func_0x00010bfe6ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar12 = dVar10;
    func_0x00010bf20c00(param_4);
    _CGRectGetHeight();
    dVar10 = (dVar11 - dVar10) * 0.5;
    dVar13 = dVar13 + dVar10;
    uVar3 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar4 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010bfe6ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar1 = param_4;
    func_0x00010c153a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar14,dVar13,dVar10,dVar12);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar9));
    _CGRectGetMaxX();
    param_3 = dVar14 + 6.0;
  }
  puVar5 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00();
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  dVar14 = dVar14 - param_3;
  dVar10 = dVar14 + -16.0;
  if (puVar5 != (undefined *)0x1) {
    dVar10 = dVar14;
  }
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
  uVar1 = param_4;
  func_0x00010c26bc80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x3ff0000000000000;
  func_0x00010c19f0e0(param_3,0x3ff0000000000000,dVar10,dVar14);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf80ae0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_4;
    func_0x00010c26bc80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c26bc80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010b8166f8(uVar1);
    lVar7 = (long)_DAT_11277f5a0;
    func_0x00010c19f0e0(*(undefined8 *)(param_4 + lVar7));
    _objc_release(uVar6);
    _objc_release(uVar1);
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar7));
    _CGRectGetWidth();
    dVar10 = param_3;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar7));
    _CGRectGetHeight();
    param_3 = param_3 - dVar10;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar7));
    _CGRectGetHeight();
    dVar14 = dVar10;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar7));
    _CGRectGetHeight();
    uVar2 = 0;
    func_0x00010b8166f8(param_3,0,dVar10,dVar14,*(undefined8 *)(param_4 + lVar7));
    func_0x00010c19f0e0(*(undefined8 *)(param_4 + (long)_DAT_11277f5a4));
  }
  uVar1 = param_4;
  func_0x00010c271420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + (long)_DAT_11277f5a0));
  _CGRectGetMinX();
  dVar11 = param_3;
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
  dVar12 = param_3;
  _CGRectGetHeight(param_3,uVar2,dVar10,dVar14);
  func_0x00010c19f0e0(param_3,(double)(long)((dVar11 - dVar12) * 0.5) + 0.5,dVar10,dVar14,
                      *(undefined8 *)(param_4 + (long)_DAT_11277f5a8));
  lVar7 = (long)_DAT_11277f5ac;
  if (*(long *)(param_4 + lVar7) != 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar8));
    func_0x00010b6908b0();
    func_0x00010c17a6a0(*(undefined8 *)(param_4 + lVar7));
  }
  return;
}



/* Entry: 108fe6e00; end: 108fe6e37; -[SCSearchView pointInside:withEvent:] */

void FUN_108fe6e00(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108fe6e38; end: 108fe6f3b; -[SCSearchView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108fe6e38(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  if (*(long *)(param_5 + _DAT_11277f588) == 0) {
    if (*(long *)(param_5 + _DAT_11277f58c) == 0) {
      dVar4 = *(double *)PTR__CGRectZero_110347608;
      param_2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      param_3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      param_4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      goto LAB_108fe6e8c;
    }
  }
  func_0x00010bf20c00();
  dVar4 = param_1;
LAB_108fe6e8c:
  lVar3 = (long)_DAT_11277f5a0;
  lVar1 = *(long *)(param_5 + lVar3);
  func_0x00010bf0e160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    _CGRectGetWidth(dVar4,param_2,param_3,param_4);
    param_1 = dVar4 + 14.0;
  }
  else {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
    _CGRectGetWidth();
    _CGRectGetMaxX(dVar4,param_2,param_3,param_4);
    param_1 = param_1 + dVar4;
  }
  auVar5._8_8_ = 0x4046000000000000;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108fe6f3c; end: 108fe7033; -[SCSearchView selectAllText] */

void FUN_108fe6f3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf193c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf94e60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c26c600(uVar1,param_2,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb600();
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe7034; end: 108fe70f7; -[SCSearchView performSearchButtonHighlightAnimation] */

void FUN_108fe7034(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010c153520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8860();
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108fe70c0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x000107c312d4(0x3e4ccccd,"APPSTORE",&puStack_48);
  return;
}



/* Entry: 108fe70f8; end: 108fe71fb; -[SCSearchView _updateClearButtonModeWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe70f8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11277f57c) == 0) {
    bVar4 = 1;
  }
  else {
    lVar5 = param_3;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      bVar4 = *(byte *)(param_1 + _DAT_11277f580) ^ 1;
    }
    else {
      bVar4 = 0;
    }
  }
  lVar5 = (long)_DAT_11277f5b0;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,bVar4 & 1);
  lVar6 = (long)_DAT_11277f5b4;
  if (*(long *)(param_1 + lVar6) != 0) {
    lVar2 = param_1;
    func_0x00010bf3ab00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c074c20();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,(uint)lVar3 ^ 1);
    _objc_release(lVar2);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c074c20();
  if (iVar1 == 0) {
    lVar6 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c174940(*(undefined8 *)(param_1 + lVar5),param_2,lVar6 != 0,1);
  }
  else {
    func_0x00010c174920(*(undefined8 *)(param_1 + lVar5),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe71fc; end: 108fe7283; -[SCSearchView searchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe71fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f588;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be5c180();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    func_0x00010c066fe0(param_1,param_2,*(undefined8 *)(param_1 + lVar3),
                        *(undefined8 *)(param_1 + _DAT_11277f58c));
    func_0x00010be9c520(param_1);
    func_0x00010be49680(param_1);
    lVar2 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108fe7284; end: 108fe730b; -[SCSearchView searchButtonStroked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7284(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f58c;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be5c1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    func_0x00010c066f80(param_1,param_2,*(undefined8 *)(param_1 + lVar3),
                        *(undefined8 *)(param_1 + _DAT_11277f588));
    func_0x00010be9c520(param_1);
    func_0x00010be49660(param_1);
    lVar2 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108fe730c; end: 108fe735b; -[SCSearchView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe730c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f5a0);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108fe735c; end: 108fe736b; -[SCSearchView textFieldAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe735c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf01b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5a0),PTR_s_alpha_11259e078);
  return;
}



/* Entry: 108fe736c; end: 108fe73fb; -[SCSearchView _textFieldColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe736c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11277f56c);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108fe73f4;
    }
    if (lVar2 != 1) goto LAB_108fe73f4;
    uVar1 = 0x83;
  }
  else if (lVar2 == 2) {
    uVar1 = 0x7b;
  }
  else {
    if (lVar2 != 3) goto LAB_108fe73f4;
    uVar1 = 0x80;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_108fe73f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fe73fc; end: 108fe748b; -[SCSearchView _textFieldTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe73fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11277f56c);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108fe7484;
    }
    if (lVar2 != 1) goto LAB_108fe7484;
    uVar1 = 0x83;
  }
  else if (lVar2 == 2) {
    uVar1 = 0x88;
  }
  else {
    if (lVar2 != 3) goto LAB_108fe7484;
    uVar1 = 0x80;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_108fe7484:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fe748c; end: 108fe7537; -[SCSearchView setTextFieldFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe748c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277f5b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277f5a0;
  if ((*(long *)(param_1 + lVar2) != 0) && (*(long *)(param_1 + lVar3) != 0)) {
    func_0x00010c19e480();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    lVar2 = param_1;
    func_0x00010becb520(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_108fe7538(*(undefined8 *)(param_1 + _DAT_11277f574),uVar1,lVar2,
                  *(undefined8 *)(param_1 + _DAT_11277f578));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe7538; end: 108fe7693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7538(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_2);
    func_0x00010bf414e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    lVar5 = param_2;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    _objc_release(param_4);
    func_0x00010c16b680(param_2);
    _objc_release(param_2);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(lVar5);
    _objc_release();
    param_2 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_11277f5a0;
  lVar3 = *(long *)(param_2 + lVar5);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126dcde0;
    _objc_alloc();
    lVar6 = (long)_DAT_11277f590;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
    func_0x00010c013de0();
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar1;
    _objc_release(uVar4);
    lVar3 = param_2;
    func_0x00010becb5a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_2 + lVar5));
    _objc_release(lVar3);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar5));
    func_0x00010c1f5e40(*(undefined8 *)(param_2 + lVar5));
    func_0x00010c16d0a0(*(undefined8 *)(param_2 + lVar5));
    func_0x00010c16d0c0(*(undefined8 *)(param_2 + lVar5));
    func_0x00010c207da0(*(undefined8 *)(param_2 + lVar5));
    func_0x00010c1edbe0(*(undefined8 *)(param_2 + lVar5));
    if (*(long *)(param_2 + _DAT_11277f5b8) == 0) {
      puVar1 = PTR_PTR_1126d3f50;
      func_0x00010bfb4200(PTR_PTR_1126d3f50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_2 + lVar5));
      _objc_release(puVar1);
    }
    else {
      func_0x00010c19e480(*(undefined8 *)(param_2 + lVar5));
    }
    lVar3 = param_2;
    func_0x00010becb520(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_2 + lVar5));
    _objc_release(lVar3);
    func_0x00010c1ee2c0(*(undefined8 *)(param_2 + lVar5));
    func_0x00010bed54c0(param_2);
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11277f5b0));
    puVar1 = PTR_PTR_1126c2e38;
    func_0x00010bdc2b00();
    if (puVar1 == (undefined *)0x1) {
      func_0x00010c213040(*(undefined8 *)(param_2 + lVar5));
    }
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    lVar3 = param_2;
    func_0x00010becb520(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + _DAT_11277f574);
    FUN_108fe7538(uVar7,uVar4,lVar3,*(undefined8 *)(param_2 + _DAT_11277f578));
    _objc_release(lVar3);
    func_0x00010c1b6da0(*(undefined8 *)(param_2 + lVar5));
    func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6));
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010b816670();
    func_0x00010c013de0(0,0,0,uVar7,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c1ad180(*(undefined8 *)(param_2 + lVar5));
    _objc_release(puVar1);
    lVar3 = *(long *)(param_2 + lVar5);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108fe7694; end: 108fe7927; -[SCSearchView textField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7694(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = (long)_DAT_11277f5a0;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126dcde0;
    _objc_alloc();
    lVar6 = (long)_DAT_11277f590;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010becb5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar5));
    _objc_release(lVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1f5e40(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c16d0c0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c207da0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1edbe0(*(undefined8 *)(param_1 + lVar5));
    if (*(long *)(param_1 + _DAT_11277f5b8) == 0) {
      puVar1 = PTR_PTR_1126d3f50;
      func_0x00010bfb4200(PTR_PTR_1126d3f50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5));
      _objc_release(puVar1);
    }
    else {
      func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5));
    }
    lVar4 = param_1;
    func_0x00010becb520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
    _objc_release(lVar4);
    func_0x00010c1ee2c0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bed54c0(param_1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277f5b0));
    puVar1 = PTR_PTR_1126c2e38;
    func_0x00010bdc2b00();
    if (puVar1 == (undefined *)0x1) {
      func_0x00010c213040(*(undefined8 *)(param_1 + lVar5));
    }
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    lVar4 = param_1;
    func_0x00010becb520(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11277f574);
    FUN_108fe7538(uVar7,uVar3,lVar4,*(undefined8 *)(param_1 + _DAT_11277f578));
    _objc_release(lVar4);
    func_0x00010c1b6da0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6));
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010b816670();
    func_0x00010c013de0(0,0,0,uVar7,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c1ad180(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108fe7928; end: 108fe7a07; -[SCSearchView titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7928(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277f5a8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126d3f50;
    func_0x00010bfb4200(PTR_PTR_1126d3f50,param_2,0x15,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fd6666666666666,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108fe7a08; end: 108fe7ac3; -[SCSearchView searchButtonShadowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7a08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277f5ac;
  lVar3 = *(long *)(param_1 + lVar5);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f56c);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110f16958);
    _objc_retainAutoreleasedReturnValue();
    FUN_108fe65f4(uVar4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar2);
    _objc_release(uVar4);
    lVar3 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108fe7ac4; end: 108fe7b7f; -[SCSearchView clearButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7ac4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277f5b0;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f56c);
    FUN_108fe7b80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c3e48;
    _objc_alloc();
    func_0x00010c014620(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar5));
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                        PTR_s_clearButtonTapped__11253ef38,0x40);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108fe7b80; end: 108fe7bbb;  */

void FUN_108fe7b80(ulong param_1,undefined8 param_2)

{
  if ((param_1 & 0xfffffffffffffffe) == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fe7bbc; end: 108fe7d33; -[SCSearchView backButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7bbc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  lVar5 = (long)_DAT_11277f5bc;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b6138;
    _objc_alloc();
    dVar6 = 0.0;
    dVar7 = 0.0;
    func_0x00010c013de0(0,0,0x4041000000000000,0x4046000000000000);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277f56c);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    FUN_108fe65f4(uVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe6ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1aa420((34.0 - dVar6) * 0.5,(44.0 - dVar7) * 0.5,*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar2);
    _objc_release(uVar3);
    func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108fe7d34; end: 108fe7e53; -[SCSearchView textFieldRightViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7d34(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  lVar5 = (long)_DAT_11277f5a4;
  lVar4 = *(long *)(param_2 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar1;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277f5a0;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar4));
    _CGRectGetWidth();
    dVar6 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar4));
    _CGRectGetHeight();
    param_1 = param_1 - dVar6;
    lVar4 = param_2;
    func_0x00010c26bc20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    lVar2 = param_2;
    dVar7 = dVar6;
    func_0x00010c26bc20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    func_0x00010c19f0e0(param_1,0,dVar6,dVar7,*(undefined8 *)(param_2 + lVar5));
    _objc_release(lVar2);
    _objc_release(lVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + lVar5),param_3,puVar1);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_2 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108fe7e54; end: 108fe7e63; -[SCSearchView searchInputAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7e54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5a0),PTR_s_inputAccessoryView_1125f6fa8);
  return;
}



/* Entry: 108fe7e64; end: 108fe7f73; -[SCSearchView _placeholderAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7e64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3f50;
  func_0x00010bfb4200(PTR_PTR_1126d3f50,param_2,0x15,2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  puStack_48 = puVar1;
  func_0x00010becb520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fd740(param_1);
  uVar2 = uVar7;
  func_0x00010bf414e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = uVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  ppuVar4 = ppuVar6;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(puVar1 + _DAT_11277f578);
  *(undefined ***)(puVar1 + _DAT_11277f578) = ppuVar4;
  _objc_release(uVar7);
  if (ppuVar6 == (undefined **)0x0) {
    func_0x00010c16b680(*(undefined8 *)(puVar1 + _DAT_11277f5a0),param_2,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar5 = puVar1;
    func_0x00010be74320(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar3,param_2,ppuVar6,puVar5);
    func_0x00010c16b680(*(undefined8 *)(puVar1 + _DAT_11277f5a0),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 108fe7f74; end: 108fe803f; -[SCSearchView setPlaceholderText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe7f74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277f578);
  *(long *)(param_1 + _DAT_11277f578) = lVar1;
  _objc_release(uVar3);
  if (param_3 == 0) {
    func_0x00010c16b680(*(undefined8 *)(param_1 + _DAT_11277f5a0),param_2,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    lVar1 = param_1;
    func_0x00010be74320(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar2,param_2,param_3,lVar1);
    func_0x00010c16b680(*(undefined8 *)(param_1 + _DAT_11277f5a0),param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe8040; end: 108fe824b; -[SCSearchView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8040(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11277f56c;
  if (*(long *)(param_1 + lVar4) == param_3) {
    return;
  }
  *(long *)(param_1 + lVar4) = param_3;
  FUN_108fe7b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf3ab00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8800();
  _objc_release(lVar1);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010becb5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010becb520(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar5);
  FUN_108fe7538(*(undefined8 *)(param_1 + _DAT_11277f574),*(undefined8 *)(param_1 + _DAT_11277f5a0),
                lVar1,*(undefined8 *)(param_1 + _DAT_11277f578));
  lVar5 = (long)_DAT_11277f5ac;
  if (*(long *)(param_1 + lVar5) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    FUN_108fe65f4(uVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  lVar5 = (long)_DAT_11277f5bc;
  if (*(long *)(param_1 + lVar5) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    FUN_108fe65f4(uVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fe824c; end: 108fe833f; -[SCSearchView setPlaceholderAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe824c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  
  *(undefined8 *)(param_2 + _DAT_11277f574) = param_1;
  lVar7 = (long)_DAT_11277f5a0;
  lVar2 = *(long *)(param_2 + lVar7);
  func_0x00010bf0e160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(param_2 + lVar7);
    lVar3 = param_2;
    func_0x00010becb520(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = *(undefined ***)(param_2 + lVar7);
    func_0x00010bf0e160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e607f8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5;
    }
    func_0x00010c0fd740(param_2);
    FUN_108fe7538(uVar6,lVar3,ppuVar1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 108fe8340; end: 108fe841f; -[SCSearchView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277f5a0;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  lVar4 = (long)_DAT_11277f5c0;
  uVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c08fa60(uVar1);
    func_0x00010c154740(lVar4);
    _objc_release(lVar4);
  }
  func_0x00010bed54c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe8420; end: 108fe8477; -[SCSearchView setTextWithoutUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f5a0);
  _objc_retain(param_3);
  func_0x00010c212f20(uVar1,param_2,param_3);
  func_0x00010bed54c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe8478; end: 108fe8667; -[SCSearchView setAutocompleteText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8478(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277f5c4);
  *(long *)(param_1 + _DAT_11277f5c4) = lVar1;
  _objc_release(uVar6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010c1a7f60();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + _DAT_11277f5a0);
    func_0x00010c26b700(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf11ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0b5ac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c11f420();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    if (lVar5 == 0x7fffffffffffffff) {
      func_0x00010c271420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
    }
    else {
      func_0x00010bf11ee0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c260c00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c25ce40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c271420(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    func_0x00010c271420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d620();
    _objc_release(param_1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe8668; end: 108fe87db; -[SCSearchView setTextFieldAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8668(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  puVar5 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar8 = (long)_DAT_11277f5a0;
  lVar1 = *(long *)(param_2 + lVar8);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        lVar6 = *(long *)(lStack_138 + lVar10 * 8);
        lVar2 = *(long *)(param_2 + lVar8);
        func_0x00010c140de0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == lVar2) {
          _objc_release(lVar2);
        }
        else {
          lVar3 = *(long *)(param_2 + lVar8);
          func_0x00010c08eb00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          if (lVar6 != lVar3) {
            func_0x00010c1677c0(param_1,lVar6);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar1;
      puVar5 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  lVar7 = (long)_DAT_11277f5b4;
  if ((undefined8 *)*(undefined1 **)(lVar1 + lVar7) != puVar5) {
    if (*(undefined1 **)(lVar1 + lVar7) != (undefined1 *)0x0) {
      func_0x00010c12c960();
    }
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)(lVar1 + lVar7);
    *(undefined8 **)(lVar1 + lVar7) = puVar5;
    _objc_release(uVar4);
    lVar8 = lVar1;
    func_0x00010c26be00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(puVar5);
    _objc_release(lVar8);
    lVar8 = (long)_DAT_11277f5a4;
    func_0x00010befbb60(*(undefined8 *)(lVar1 + lVar8),param_3,*(undefined8 *)(lVar1 + lVar7));
    lVar7 = (long)_DAT_11277f5a0;
    func_0x00010c1ee2a0(*(undefined8 *)(lVar1 + lVar7),param_3,*(undefined8 *)(lVar1 + lVar8));
    func_0x00010c1ee2c0(*(undefined8 *)(lVar1 + lVar7),param_3,3);
    uVar4 = *(undefined8 *)(lVar1 + lVar7);
    func_0x00010c26b700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed54c0(lVar1,param_3,uVar4);
    _objc_release(uVar4);
    func_0x00010c1cbe20(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108fe87dc; end: 108fe88d3; -[SCSearchView setRightView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe87dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277f5b4;
  if (*(long *)(param_1 + lVar2) != param_3) {
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c960();
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    lVar3 = param_1;
    func_0x00010c26be00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(param_3);
    _objc_release(lVar3);
    lVar3 = (long)_DAT_11277f5a4;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3),param_2,*(undefined8 *)(param_1 + lVar2));
    lVar2 = (long)_DAT_11277f5a0;
    func_0x00010c1ee2a0(*(undefined8 *)(param_1 + lVar2),param_2,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1ee2c0(*(undefined8 *)(param_1 + lVar2),param_2,3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed54c0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe88d4; end: 108fe891f; -[SCSearchView setTextFieldRightViewAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe88d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277f5a0);
  func_0x00010c140de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe8920; end: 108fe89ef; -[SCSearchView setTextFieldClearButtonViewMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8920(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + _DAT_11277f57c) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11277f57c) = param_3;
  lVar1 = param_1;
  func_0x00010c26be00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf3ab00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = (long)_DAT_11277f5a0;
  func_0x00010c1ee2a0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1ee2c0(*(undefined8 *)(param_1 + lVar1));
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed54c0(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108fe89f0; end: 108fe8a5f; -[SCSearchView setShouldShowBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe89f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_11277f594) = param_3;
  lVar1 = param_1;
  func_0x00010c233300();
  if ((int)lVar1 == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277f5bc));
  }
  else {
    lVar1 = param_1;
    func_0x00010bf13860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108fe8a60; end: 108fe8a6f; -[SCSearchView searchIconAccessoryImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f598),PTR_s_image_1125d7478);
  return;
}



/* Entry: 108fe8a70; end: 108fe8c57; -[SCSearchView setSearchIconAccessoryImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8a70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277f598;
  lVar1 = *(long *)(param_1 + lVar7);
  if ((param_3 != 0) && (lVar1 == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar2;
    _objc_release(uVar6);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar7),param_2,4);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199e0(0,0,0x3ff8000000000000,0x403e000000000000,0x3fe8000000000000,
                        0x3fe8000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_2,
                        0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    _objc_retainAutorelease(puVar2);
    func_0x00010bdc1040();
    puVar4 = puVar3;
    func_0x00010c22a660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = puVar3;
    func_0x00010c22a660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c22a660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3ecccccd);
    _objc_release(puVar4);
    func_0x00010c17d4c0(puVar3,param_2,0);
    _objc_release(puVar2);
    lVar1 = (long)_DAT_11277f59c;
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = puVar3;
    _objc_release(uVar6);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar1));
    lVar1 = *(long *)(param_1 + lVar7);
  }
  func_0x00010c1a9f00(lVar1,param_2,param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277f59c),param_2,param_3 == 0);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe8c58; end: 108fe8c67; -[SCSearchView setKeyboardType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5a0),PTR_s_setKeyboardType__11264b5d8);
  return;
}



/* Entry: 108fe8c68; end: 108fe8c77; -[SCSearchView setKeyboardAppearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5a0),PTR_s_setKeyboardAppearance__11264b590);
  return;
}



/* Entry: 108fe8c78; end: 108fe8cdf; -[SCSearchView setSearchInputAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8c78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277f5a0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c065660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010c1ad180(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fe8ce0; end: 108fe8d43; -[SCSearchView setShowCloseButtonWhenEmpty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8ce0(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + _DAT_11277f580) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11277f580) = (char)param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f5a0);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed54c0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe8d44; end: 108fe8d53; -[SCSearchView search:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5a0),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 108fe8d54; end: 108fe8e47; -[SCSearchView clearButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe8d54(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd3e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c212f20(param_1);
    uVar1 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed54c0(param_1);
    _objc_release(uVar1);
    func_0x00010bf179a0(*(undefined8 *)(param_1 + (long)_DAT_11277f5a0));
  }
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108fe8e48; end: 108fe8ec7; -[SCSearchView backTapped:] */

void FUN_108fe8e48(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108fe8ec8; end: 108fe8f3f; -[SCSearchView textFieldDidBeginEditing:] */

void FUN_108fe8ec8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1547c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c158710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_selectAllText_112633be0);
  return;
}



/* Entry: 108fe8f40; end: 108fe8fcb; -[SCSearchView textFieldShouldBeginEditing:] */

ulong FUN_108fe8f40(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c0f8e20();
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c154820();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 108fe8fcc; end: 108fe904b; -[SCSearchView textFieldDidEndEditing:] */

void FUN_108fe8fcc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1547e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108fe904c; end: 108fe9113; -[SCSearchView textFieldShouldReturn:] */

ulong FUN_108fe904c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c154860();
    _objc_release(param_1);
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_108fe90f8;
    func_0x00010c13a0e0(param_3);
  }
  uVar2 = 1;
LAB_108fe90f8:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108fe9114; end: 108fe9297; -[SCSearchView textField:shouldChangeCharactersInRange:replacementString:] */

undefined8
FUN_108fe9114(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_5 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c154840();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar4 = 0;
        goto LAB_108fe9264;
      }
    }
  }
  uVar4 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154740();
    _objc_release(uVar1);
  }
  func_0x00010bed54c0(param_1);
  _objc_release(uVar3);
  uVar4 = 1;
LAB_108fe9264:
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108fe9298; end: 108fe931b; -[SCSearchView textFieldShouldDeleteCharacter:] */

ulong FUN_108fe9298(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c154840();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 108fe931c; end: 108fe9333; -[SCSearchView setEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe931c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11277f5a0),PTR_s_becomeFirstResponder_1125a3810);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5a0),PTR_s_resignFirstResponder_11262c258);
  return;
}


