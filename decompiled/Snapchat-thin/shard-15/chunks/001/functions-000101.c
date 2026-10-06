/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b86f4d0; end: 10b86f583; -[SIGCollectionViewSectionHeader setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86f4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_5 + _DAT_112795240) != param_7) {
    *(long *)(param_5 + _DAT_112795240) = param_7;
    lVar1 = param_5;
    func_0x00010bf8d060();
    lVar3 = (long)_DAT_11279523c;
    uVar2 = *(undefined8 *)(param_5 + lVar3);
    func_0x00010c248200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10b86a780(param_7,10,lVar1,uVar2);
    uVar4 = param_2;
    if (0xfffffffffffffffd < param_7 - 8U || lVar1 != 1) {
      uVar4 = param_4;
      param_4 = param_2;
    }
    func_0x00010c181fe0(param_1,param_4,param_3,uVar4,*(undefined8 *)(param_5 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10b86f584; end: 10b86f593; -[SIGCollectionViewSectionHeader specOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86f584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279523c),PTR_s_specOverride_11266faa8);
  return;
}



/* Entry: 10b86f594; end: 10b86f5a3; -[SIGCollectionViewSectionHeader setSpecOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86f594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2074b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279523c),PTR_s_setSpecOverride__11265f750);
  return;
}



/* Entry: 10b86f5a4; end: 10b86f607; -[SIGCollectionViewSectionHeader didMoveToSuperview] */

void FUN_10b86f5a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b6c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToSuperview_1125bb968);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x3ff0000000000000);
  _objc_release(param_1);
  return;
}



/* Entry: 10b86f608; end: 10b86f617; -[SIGCollectionViewSectionHeader underlyingHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86f608(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279523c);
}



/* Entry: 10b86f618; end: 10b86f627; -[SIGCollectionViewSectionHeader style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86f618(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795240);
}



/* Entry: 10b86f628; end: 10b86f63b; -[SIGCollectionViewSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86f628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279523c,0);
  return;
}



/* Entry: 10b86f63c; end: 10b86f653; +[SIGSectionHeader heightWithSubtitle:] */

undefined8 FUN_10b86f63c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x4045000000000000;
  if (param_3 == 0) {
    uVar1 = 0x4037000000000000;
  }
  return uVar1;
}



/* Entry: 10b86f654; end: 10b86f68f; +[SIGSectionHeader heightWithSubtitle:hasButton:] */

double FUN_10b86f654(double param_1)

{
  byte in_w3;
  double dVar1;
  
  func_0x00010bfe09e0(PTR_PTR_1126b78f0);
  dVar1 = 28.0;
  if ((in_w3 & param_1 < 28.0) == 0) {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Entry: 10b86f690; end: 10b86f737; +[SIGSectionHeader isMultilineSubtitleWithSubtitle:constrainedToWidth:] */

bool FUN_10b86f690(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  dVar2 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar2,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c165e00(puVar1,param_3,1);
  func_0x00010c21ad00(puVar1,param_3,0x17);
  func_0x00010c212f20(puVar1,param_3,param_4);
  _objc_release(param_4);
  func_0x00010c0699c0(puVar1);
  _objc_release(puVar1);
  return param_1 < dVar2;
}



/* Entry: 10b86f738; end: 10b86f777; +[SIGSectionHeader heightWithSubtitle:constrainedToWidth:] */

undefined8 FUN_10b86f738(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b78f0;
    func_0x00010c0781a0();
    uVar2 = 0x404d000000000000;
    if ((int)puVar1 == 0) {
      uVar2 = 0x4045000000000000;
    }
    return uVar2;
  }
  return 0x4037000000000000;
}



/* Entry: 10b86f778; end: 10b86f7b3; +[SIGSectionHeader heightWithSubtitle:hasButton:constrainedToWidth:] */

double FUN_10b86f778(double param_1)

{
  byte in_w3;
  double dVar1;
  
  func_0x00010bfe0a00(PTR_PTR_1126b78f0);
  dVar1 = 28.0;
  if ((in_w3 & param_1 < 28.0) == 0) {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Entry: 10b86f7b4; end: 10b86f8eb; -[SIGSectionHeader initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b86f7b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270b6d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795244) = 0xc6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795248) = 0xbf;
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    func_0x00010c165e00(puVar2);
    func_0x00010c21ad00(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279524c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279524c) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795250) = 0x4030000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795254) = 0x4030000000000000;
    func_0x00010bdc4dc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b86f8ec; end: 10b86f94b; -[SIGSectionHeader intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b86f8ec(undefined8 param_1,double param_2,long param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  
  func_0x00010c0699c0(*(undefined8 *)(param_3 + _DAT_11279524c));
  if (*(long *)(param_3 + _DAT_112795258) != 0) {
    dVar2 = param_2;
    func_0x00010c0699c0();
    param_2 = param_2 + dVar2 + 2.0;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* Entry: 10b86f94c; end: 10b86f95b; -[SIGSectionHeader title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86f94c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279524c),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b86f95c; end: 10b86fa3b; -[SIGSectionHeader setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86f95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11279524c;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,param_3);
    lVar5 = (long)_DAT_11279525c;
    lVar3 = *(long *)(param_1 + lVar5);
    if (lVar3 != 0) {
      func_0x00010bdc27a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010bdc27e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6),param_2,uVar4);
        _objc_release(uVar4);
      }
      else {
        func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6),param_2,lVar3);
      }
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b86fa3c; end: 10b86faa3; -[SIGSectionHeader setTitleTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86fa3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11279524c),param_2,puVar1);
  _objc_release(puVar1);
  *(undefined8 *)(param_1 + _DAT_112795244) = param_3;
  return;
}



/* Entry: 10b86faa4; end: 10b86fab3; -[SIGSectionHeader subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86faa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795258),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b86fab4; end: 10b86fb27; -[SIGSectionHeader setBadgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86fab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112795260;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    func_0x00010bdc4dc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b86fb28; end: 10b86fb87; -[SIGSectionHeader setSpecOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86fb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11279525c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b86fb88; end: 10b86fd57; -[SIGSectionHeader setSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86fb88(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112795258;
  ppuVar2 = *(undefined ***)(param_1 + lVar8);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  func_0x00010c071ae0(ppuVar3,param_2,ppuVar1);
  _objc_release(ppuVar2);
  if (((ulong)ppuVar3 & 1) == 0) {
    if (param_3 == (undefined **)0x0) {
      func_0x00010bdf8320(param_1);
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar8));
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined8 *)(param_1 + lVar8) = 0;
      _objc_release(uVar7);
      func_0x00010bdc4dc0(param_1);
      func_0x00010c069fa0(param_1);
    }
    else {
      lVar4 = *(long *)(param_1 + lVar8);
      if (lVar4 == 0) {
        puVar5 = PTR_PTR_1126aea58;
        _objc_alloc();
        func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        func_0x00010c219b60();
        func_0x00010c165e00(puVar5,param_2,1);
        func_0x00010c21ad00(puVar5,param_2,0x17);
        puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                            *(undefined8 *)(param_1 + _DAT_112795248));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(puVar5,param_2,puVar6);
        _objc_release(puVar6);
        func_0x00010c1bdb00(puVar5,param_2,4);
        func_0x00010c1cfce0(puVar5,param_2,2);
        uVar7 = *(undefined8 *)(param_1 + lVar8);
        *(undefined **)(param_1 + lVar8) = puVar5;
        _objc_retain(puVar5);
        _objc_release(uVar7);
        func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
        _objc_release(puVar5);
        func_0x00010bdc4dc0(param_1);
        func_0x00010c069fa0(param_1);
        lVar4 = *(long *)(param_1 + lVar8);
      }
      func_0x00010c212f20(lVar4,param_2,param_3);
      lVar4 = *(long *)(param_1 + _DAT_11279525c);
      if (lVar4 != 0) {
        func_0x00010bdc27c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)(param_1 + lVar8),param_2,lVar4);
        _objc_release(lVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b86fd58; end: 10b86fdcf; -[SIGSectionHeader setSubtitleTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86fd58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + _DAT_112795248) = param_3;
  lVar2 = (long)_DAT_112795258;
  if (*(long *)(param_1 + lVar2) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b86fdd0; end: 10b86fea7; -[SIGSectionHeader setTrailingAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86fdd0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112795264;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010bdf8320(param_1);
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c219b60(param_3,param_2,0);
    func_0x00010c181f00(0x447a0000,param_3,param_2,0);
    func_0x00010c181cc0(0x447a0000,param_3,param_2,0);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    if (param_3 == 0) {
      *(undefined1 *)(param_1 + _DAT_112795268) = 0;
    }
    else {
      func_0x00010befbb60(param_1,param_2,param_3);
    }
    func_0x00010bdc4dc0(param_1);
    func_0x00010c069fa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b86fea8; end: 10b86ff77; -[SIGSectionHeader setContentInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86fea8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  ushort uVar4;
  
  pdVar1 = (double *)(param_5 + _DAT_11279526c);
  uVar4 = NEON_uminv(CONCAT26(-(ushort)(pdVar1[3] == param_4),
                              CONCAT24(-(ushort)(pdVar1[2] == param_3),
                                       CONCAT22(-(ushort)(pdVar1[1] == param_2),
                                                -(ushort)(*pdVar1 == param_1)))),2);
  if ((uVar4 & 1) == 0) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
    lVar2 = param_5;
    func_0x00010bf8d060();
    if (lVar2 == 1) {
      dVar3 = pdVar1[3];
      if (dVar3 == 0.0) {
        dVar3 = 16.0;
      }
      *(double *)(param_5 + _DAT_112795250) = dVar3;
      dVar3 = pdVar1[1];
    }
    else {
      dVar3 = pdVar1[1];
      if (dVar3 == 0.0) {
        dVar3 = 16.0;
      }
      *(double *)(param_5 + _DAT_112795250) = dVar3;
      dVar3 = pdVar1[3];
    }
    if (dVar3 == 0.0) {
      dVar3 = 16.0;
    }
    *(double *)(param_5 + _DAT_112795254) = dVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__activateNewConstraints_11254ed10);
    return;
  }
  return;
}



/* Entry: 10b86ff78; end: 10b87004f; -[SIGSectionHeader setActionAccessoryWithText:target:selector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86ff78(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010c2194c0(param_1,param_2,0);
  }
  else {
    puVar1 = PTR_PTR_1126e1890;
    _objc_alloc(PTR_PTR_1126e1890);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c216240();
    func_0x00010c23d620(puVar1);
    if (param_4 != 0) {
      func_0x00010befbd60(puVar1,param_2,param_4,param_5,0x40);
    }
    *(undefined1 *)(param_1 + _DAT_112795268) = 1;
    func_0x00010c2194c0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b870050; end: 10b870197; -[SIGSectionHeader setButtonAccessoryWithText:icon:accessibilityId:target:selector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b870050(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_4 == 0) {
    func_0x00010c2194c0(param_2,param_3,0);
  }
  else {
    puVar1 = PTR_PTR_1126e1898;
    _objc_alloc(PTR_PTR_1126e1898);
    if (*(long *)(param_2 + _DAT_11279525c) == 0) {
      param_1 = 0x403c000000000000;
    }
    else {
      func_0x00010bdc2720();
    }
    func_0x00010c0145e0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,puVar1);
    func_0x00010c216240();
    func_0x00010c1a9f00(puVar1,param_3,param_5);
    func_0x00010c160fc0(puVar1,param_3,param_6);
    func_0x00010c23d620(puVar1);
    if (param_7 != 0) {
      func_0x00010befbd60(puVar1,param_3,param_7,param_8,0x40);
    }
    *(undefined1 *)(param_2 + _DAT_112795268) = 1;
    func_0x00010c2194c0(param_2,param_3,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b870198; end: 10b8701a7; -[SIGSectionHeader setButtonAccessoryWithText:icon:target:selector:] */

void FUN_10b870198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c174750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setButtonAccessoryWithText_icon__11263abf0,param_3,param_4,0,param_5,
             param_6);
  return;
}



/* Entry: 10b8701a8; end: 10b87022f; -[SIGSectionHeader setButtonAccessoryWithText:icon:block:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8701a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795270);
  *(undefined8 *)(param_1 + _DAT_112795270) = param_5;
  _objc_release(uVar1);
  func_0x00010c174760(param_1,param_2,param_3,param_4,param_1,PTR_s__runActionBlock_112548838);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b870230; end: 10b8702d7; -[SIGSectionHeader setButtonAccessoryWithText:icon:accessibilityId:block:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b870230(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795270);
  *(undefined8 *)(param_1 + _DAT_112795270) = param_6;
  _objc_release(uVar1);
  func_0x00010c174740(param_1,param_2,param_3,param_4,param_5,param_1,
                      PTR_s__runActionBlock_112548838);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8702d8; end: 10b8702f3; -[SIGSectionHeader _runActionBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8702d8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112795270) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8702ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112795270) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b8702f4; end: 10b870367; -[SIGSectionHeader _deactivateExistingConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8702f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112795274;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar3));
  lVar2 = (long)_DAT_112795278;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11279527c);
  *(undefined8 *)(param_1 + _DAT_11279527c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b870368; end: 10b87041f; -[SIGSectionHeader _activateNewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b870368(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bdf8320();
  lVar1 = param_1;
  func_0x00010be86aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112795274);
  *(long *)(param_1 + _DAT_112795274) = lVar1;
  _objc_retain();
  _objc_release(uVar3);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,lVar1);
  lVar2 = param_1;
  func_0x00010be86ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112795278);
  *(long *)(param_1 + _DAT_112795278) = lVar2;
  _objc_retain();
  _objc_release(uVar3);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b870420; end: 10b8707bf; -[SIGSectionHeader _rebuildLabelConstraintsForDynamicType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b870420(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined **ppuVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 auStack_328 [3];
  undefined8 auStack_310 [3];
  long lStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  double dStack_210;
  double dStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar20 = (long)_DAT_11279524c;
  uVar2 = *(undefined8 *)(param_3 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c08de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493c0(*(undefined8 *)(param_3 + _DAT_112795250),uVar2,param_4,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar20);
  uStack_78 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf493a0(uVar3,param_4,lVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar17;
  func_0x00010befa160(puVar17,param_4,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(lVar22);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar2);
  lVar22 = (long)_DAT_112795258;
  lVar4 = *(long *)(param_3 + lVar22);
  if (lVar4 == 0) {
    ppuVar7 = *(undefined ***)(param_3 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar7;
    func_0x00010bf493a0(ppuVar7,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + lVar20);
    lStack_a0 = lVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar5;
    func_0x00010bf493a0(lVar4,param_4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + lVar22);
    lStack_90 = lVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf493c0(0x4000000000000000,uVar2,param_4,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + lVar22);
    uStack_88 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bf493a0(uVar6,param_4,lVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&lStack_90,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puStack_98,param_4,puVar17);
    _objc_release(puVar17);
    _objc_release(uVar11);
    _objc_release(lVar20);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(uStack_a8);
    _objc_release(lStack_a0);
    ppuVar7 = *(undefined ***)(param_3 + lVar22);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar7;
    func_0x00010bf493c0(-*(double *)(param_3 + _DAT_112795254),ppuVar7,param_4,lVar4);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar4;
  }
  puVar17 = puStack_98;
  func_0x00010befa120(puStack_98,param_4,ppuVar23);
  _objc_release(ppuVar23);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_10b8707c0;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    ppuVar9 = ppuVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = &DAT_112795254;
    ppuVar23 = (undefined **)(long)_DAT_112795254;
    dVar26 = *(double *)((long)ppuVar7 + (long)ppuVar23);
    ppuVar15 = ppuVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112795264;
    ppuVar8 = *(undefined ***)((long)ppuVar7 + lVar4);
    if (ppuVar8 == (undefined **)0x0) {
      dVar25 = *(double *)((long)ppuVar7 + (long)ppuVar23);
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      ppuVar9 = *(undefined ***)((long)ppuVar7 + lVar4);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      dVar25 = 8.0;
      dVar26 = 8.0;
      ppuVar15 = ppuVar9;
      ppuVar9 = ppuVar8;
    }
    ppuVar8 = (undefined **)(long)_DAT_112795260;
    ppuVar10 = *(undefined ***)((long)ppuVar7 + (long)ppuVar8);
    ppuStack_170 = ppuVar9;
    if (ppuVar10 != (undefined **)0x0) {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      dVar26 = 8.0;
      ppuStack_170 = ppuVar10;
    }
    ppuVar9 = (undefined **)(long)_DAT_11279524c;
    uVar11 = *(undefined8 *)((long)ppuVar7 + (long)ppuVar9);
    ppuStack_168 = ppuVar15;
    func_0x00010c2793a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010bf493c0(-dVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar17,param_4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar11);
    lVar22 = *(long *)((long)ppuVar7 + (long)ppuVar8);
    if (lVar22 != 0) {
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_188 = lVar22;
      func_0x00010bf493c0(-dVar25);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)ppuVar7 + (long)ppuVar8);
      lStack_190 = lVar22;
      lStack_148 = lVar22;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)ppuVar7 + (long)ppuVar9);
      uStack_198 = uVar11;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_1a0 = uVar5;
      func_0x00010bf493a0(uVar11,param_4,uVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = *(undefined ***)((long)ppuVar7 + (long)ppuVar8);
      ppuStack_178 = ppuVar23;
      uStack_140 = uVar11;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_180 = ppuVar9;
      func_0x00010c0699c0(*(undefined8 *)((long)ppuVar7 + (long)ppuVar8));
      ppuVar15 = ppuVar10;
      func_0x00010bf49420(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = *(undefined **)((long)ppuVar7 + (long)ppuVar8);
      ppuStack_138 = ppuVar15;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0(*(undefined8 *)((long)ppuVar7 + (long)ppuVar8));
      puVar14 = puVar12;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_130 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&lStack_148,4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      func_0x00010befa160(puVar17,param_4,puVar13);
      _objc_release(puVar13);
      _objc_release(puVar14);
      _objc_release(puVar12);
      _objc_release(ppuVar15);
      ppuVar9 = ppuStack_180;
      _objc_release(ppuVar10);
      ppuVar23 = ppuStack_178;
      _objc_release(uVar11);
      _objc_release(uStack_1a0);
      _objc_release(uStack_198);
      _objc_release(lStack_190);
      _objc_release(lStack_188);
    }
    ppuVar10 = *(undefined ***)((long)ppuVar7 + lVar4);
    puVar14 = puVar17;
    if (ppuVar10 != (undefined **)0x0) {
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar7;
      ppuStack_178 = ppuVar10;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_180 = ppuVar15;
      func_0x00010bf493c0(-*(double *)((long)ppuVar7 + (long)ppuVar23),ppuVar10,param_4,ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = *(undefined **)((long)ppuVar7 + lVar4);
      ppuStack_160 = ppuVar10;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0(*(undefined8 *)((long)ppuVar7 + lVar4));
      puVar12 = puVar14;
      func_0x00010bf49420(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = *(undefined ***)((long)ppuVar7 + lVar4);
      puStack_158 = puVar12;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = *(undefined ***)((long)ppuVar7 + (long)ppuVar9);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar15;
      func_0x00010bf493a0(ppuVar15,param_4,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_150 = ppuVar23;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&ppuStack_160,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar17,param_4,ppuVar9);
      _objc_release(ppuVar9);
      _objc_release(ppuVar23);
      _objc_release(ppuVar7);
      _objc_release(ppuVar15);
      _objc_release(puVar12);
      _objc_release(puVar14);
      _objc_release(ppuVar10);
      _objc_release(ppuStack_180);
      _objc_release(ppuStack_178);
      ppuVar8 = ppuVar10;
    }
    _objc_release(ppuStack_168);
    ppuVar10 = ppuStack_170;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      ppuStack_1e0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      pcStack_1a8 = FUN_10b870c34;
      lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      dStack_210 = dVar26;
      dStack_208 = dVar25;
      ppuStack_200 = ppuVar9;
      ppuStack_1f8 = ppuVar23;
      puStack_1f0 = puVar14;
      lStack_1e8 = lVar4;
      puStack_1d8 = puVar17;
      ppuStack_1d0 = ppuVar7;
      ppuStack_1c8 = ppuVar8;
      ppuStack_1c0 = ppuVar15;
      puStack_1b8 = puVar12;
      ppuStack_1b0 = &puStack_c0;
      _objc_opt_new();
      ppuVar23 = *(undefined ***)((long)ppuVar10 + (long)_DAT_112795264);
      if (ppuVar23 == (undefined **)0x0) {
        ppuVar23 = ppuVar10;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar10;
        ppuStack_260 = ppuVar23;
        func_0x00010bf8d060();
        if (ppuVar7 == (undefined **)0x1) {
          dVar25 = *(double *)((long)ppuVar10 + (long)_DAT_11279526c + 8);
        }
        else {
          dVar25 = *(double *)((long)ppuVar10 + (long)_DAT_11279526c + 0x18);
        }
        dVar25 = -dVar25;
      }
      else {
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        dVar25 = 0.0;
        ppuStack_260 = ppuVar23;
      }
      lVar22 = (long)_DAT_11279524c;
      uVar2 = *(undefined8 *)((long)ppuVar10 + lVar22);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bf493c0(dVar25);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)ppuVar10 + lVar22);
      uStack_228 = uVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar10;
      func_0x00010c274200(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar3;
      func_0x00010bf493a0(uVar3,param_4,ppuVar23);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_220 = uVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_228,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar13,param_4,puVar14);
      _objc_release(puVar14);
      _objc_release(uVar11);
      _objc_release(ppuVar23);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar2);
      ppuVar23 = ppuVar10;
      func_0x00010bf8d060();
      uVar5 = *(undefined8 *)((long)ppuVar10 + lVar22);
      func_0x00010c08de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar10;
      func_0x00010c08de00(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined *)((long)ppuVar10 + (long)_DAT_11279526c);
      lVar4 = 0x18;
      if (ppuVar23 != (undefined **)0x1) {
        lVar4 = 8;
      }
      dVar24 = *(double *)(puVar12 + lVar4);
      uVar11 = uVar5;
      func_0x00010bf493c0(dVar24,uVar5,param_4,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar13,param_4,uVar11);
      _objc_release(uVar11);
      _objc_release(ppuVar7);
      _objc_release(uVar5);
      lVar20 = (long)_DAT_112795258;
      lVar4 = *(long *)((long)ppuVar10 + lVar20);
      puVar16 = *(undefined **)((long)ppuVar10 + lVar22);
      lStack_270 = lVar22;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        ppuVar23 = ppuVar10;
        func_0x00010bf1ff80(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar23 = *(undefined ***)((long)ppuVar10 + lVar20);
        func_0x00010c274200(ppuVar23);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar18 = puVar16;
      func_0x00010bf493a0(puVar16,param_4,ppuVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar13,param_4,puVar18);
      _objc_release(puVar18);
      _objc_release(ppuVar23);
      _objc_release(puVar16);
      puVar21 = (undefined *)(long)_DAT_112795260;
      puVar17 = *(undefined **)((long)ppuVar10 + (long)puVar21);
      puVar19 = puVar13;
      if (puVar17 != (undefined *)0x0) {
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar23 = ppuVar10;
        puStack_278 = puVar17;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lStack_270;
        ppuStack_280 = ppuVar23;
        func_0x00010c0699c0(*(undefined8 *)((long)ppuVar10 + lStack_270));
        param_2 = 0x4020000000000000;
        func_0x00010bf493c0(dVar24 + 8.0,puVar17,param_4,ppuVar23);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = *(undefined **)((long)ppuVar10 + (long)puVar21);
        puStack_240 = puVar17;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar16;
        dVar24 = dVar25;
        func_0x00010bf493c0(dVar25);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = *(undefined **)((long)ppuVar10 + (long)puVar21);
        puStack_268 = puVar12;
        puStack_238 = puVar18;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = *(long *)((long)ppuVar10 + lVar4);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar14;
        func_0x00010bf493a0(puVar14,param_4,lVar22);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_230 = puVar19;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_240,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar13,param_4,puVar21);
        _objc_release(puVar21);
        _objc_release(puVar19);
        _objc_release(lVar22);
        _objc_release(puVar14);
        puVar12 = puStack_268;
        _objc_release(puVar18);
        _objc_release(puVar16);
        _objc_release(puVar17);
        _objc_release(ppuStack_280);
        _objc_release(puStack_278);
        puVar18 = puVar17;
      }
      puStack_268 = puVar13;
      if (*(long *)((long)ppuVar10 + lVar20) != 0) {
        ppuVar23 = ppuVar10;
        func_0x00010bf8d060();
        uVar5 = *(undefined8 *)((long)ppuVar10 + lVar20);
        func_0x00010c08de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar10;
        func_0x00010c08de00(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = 0x18;
        if (ppuVar23 != (undefined **)0x1) {
          lVar4 = 8;
        }
        uVar11 = uVar5;
        func_0x00010bf493c0(*(undefined8 *)(puVar12 + lVar4),uVar5,param_4,ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puStack_268;
        func_0x00010befa120(puStack_268,param_4,uVar11);
        _objc_release(uVar11);
        _objc_release(ppuVar7);
        _objc_release(uVar5);
        puVar16 = *(undefined **)((long)ppuVar10 + lVar20);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        dVar24 = dVar25;
        puStack_278 = puVar16;
        func_0x00010bf493c0(dVar25);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = *(undefined **)((long)ppuVar10 + lVar20);
        puStack_258 = puVar16;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = *(long *)((long)ppuVar10 + lStack_270);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar18;
        func_0x00010bf493a0(puVar18,param_4,lVar22);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = *(undefined **)((long)ppuVar10 + lVar20);
        puStack_250 = puVar21;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar19;
        func_0x00010bf493a0(puVar19,param_4,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_248 = puVar12;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_258,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar13,param_4,puVar14);
        _objc_release(puVar14);
        _objc_release(puVar12);
        _objc_release(ppuVar10);
        _objc_release(puVar19);
        _objc_release(puVar21);
        _objc_release(lVar22);
        _objc_release(puVar18);
        _objc_release(puVar16);
        _objc_release(puStack_278);
      }
      ppuVar23 = ppuStack_260;
      _objc_release();
      puVar17 = puStack_268;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
        ___stack_chk_fail();
        pcStack_288 = FUN_10b871244;
        lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar4 = (long)_DAT_112795264;
        puVar17 = PTR____NSArray0__struct_11034ab48;
        dStack_2f0 = dVar26;
        dStack_2e8 = dVar25;
        lStack_2e0 = lVar22;
        puStack_2d8 = puVar14;
        puStack_2d0 = puVar12;
        lStack_2c8 = lVar20;
        puStack_2c0 = puVar18;
        puStack_2b8 = puVar13;
        puStack_2b0 = puVar16;
        ppuStack_2a8 = ppuVar10;
        puStack_2a0 = puVar19;
        puStack_298 = puVar21;
        pppuStack_290 = &ppuStack_1b0;
        if (*(long *)((long)ppuVar23 + lVar4) != 0) {
          if (*(long *)((long)ppuVar23 + (long)_DAT_11279525c) == 0) {
            dVar24 = 0.0;
          }
          else {
            func_0x00010bdc2800();
          }
          ppuVar7 = ppuVar23;
          func_0x00010bf8d060();
          ppuVar8 = *(undefined ***)((long)ppuVar23 + lVar4);
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar23;
          func_0x00010bf1ff80(ppuVar23);
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar8;
          func_0x00010bf493c0(-dVar24,ppuVar8,param_4,ppuVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = auStack_310;
          if (ppuVar7 != (undefined **)0x1) {
            puVar1 = auStack_328;
          }
          lVar22 = 8;
          if (ppuVar7 != (undefined **)0x1) {
            lVar22 = 0x18;
          }
          *puVar1 = ppuVar15;
          uVar2 = *(undefined8 *)((long)ppuVar23 + lVar4);
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar23;
          func_0x00010c2793a0(ppuVar23);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010bf493c0(-*(double *)((long)ppuVar23 + lVar22 + _DAT_11279526c),uVar2,param_4,
                              ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar1[1] = uVar5;
          uVar3 = *(undefined8 *)((long)ppuVar23 + lVar4);
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0699c0(*(undefined8 *)((long)ppuVar23 + lVar4));
          uVar11 = uVar3;
          func_0x00010bf49420(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar1[2] = uVar11;
          puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,puVar1,3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          _objc_release(uVar3);
          _objc_release(uVar5);
          _objc_release(ppuVar7);
          _objc_release(uVar2);
          _objc_release(ppuVar15);
          _objc_release(ppuVar9);
          _objc_release();
          ppuVar23 = ppuVar8;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
          ___stack_chk_fail();
          return (undefined *)(ulong)*(byte *)((long)ppuVar23 + (long)_DAT_112795268);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return puVar17;
}



/* Entry: 10b8707c0; end: 10b870c33; -[SIGSectionHeader _rebuildPrimaryRowConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10b8707c0(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined **ppuVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 auStack_278 [3];
  undefined8 auStack_260 [3];
  long lStack_248;
  double dStack_240;
  double dStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  double dStack_160;
  double dStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar3 = param_3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &DAT_112795254;
  ppuVar21 = (undefined **)(long)_DAT_112795254;
  dVar24 = *(double *)((long)param_3 + (long)ppuVar21);
  ppuVar11 = param_3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112795264;
  ppuVar2 = *(undefined ***)((long)param_3 + lVar19);
  if (ppuVar2 == (undefined **)0x0) {
    dVar23 = *(double *)((long)param_3 + (long)ppuVar21);
  }
  else {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = *(undefined ***)((long)param_3 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    dVar23 = 8.0;
    dVar24 = 8.0;
    ppuVar11 = ppuVar3;
    ppuVar3 = ppuVar2;
  }
  ppuVar2 = (undefined **)(long)_DAT_112795260;
  ppuVar4 = *(undefined ***)((long)param_3 + (long)ppuVar2);
  ppuStack_c0 = ppuVar3;
  if (ppuVar4 != (undefined **)0x0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    dVar24 = 8.0;
    ppuStack_c0 = ppuVar4;
  }
  ppuVar3 = (undefined **)(long)_DAT_11279524c;
  uVar5 = *(undefined8 *)((long)param_3 + (long)ppuVar3);
  ppuStack_b8 = ppuVar11;
  func_0x00010c2793a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(-dVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar15,param_4,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar5);
  lVar6 = *(long *)((long)param_3 + (long)ppuVar2);
  if (lVar6 != 0) {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar6;
    func_0x00010bf493c0(-dVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)param_3 + (long)ppuVar2);
    lStack_e0 = lVar6;
    lStack_98 = lVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)param_3 + (long)ppuVar3);
    uStack_e8 = uVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar7;
    func_0x00010bf493a0(uVar5,param_4,uVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = *(undefined ***)((long)param_3 + (long)ppuVar2);
    ppuStack_c8 = ppuVar21;
    uStack_90 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = ppuVar3;
    func_0x00010c0699c0(*(undefined8 *)((long)param_3 + (long)ppuVar2));
    ppuVar11 = ppuVar4;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined **)((long)param_3 + (long)ppuVar2);
    ppuStack_88 = ppuVar11;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(*(undefined8 *)((long)param_3 + (long)ppuVar2));
    puVar10 = puVar8;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&lStack_98,4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    func_0x00010befa160(puVar15,param_4,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(ppuVar11);
    ppuVar3 = ppuStack_d0;
    _objc_release(ppuVar4);
    ppuVar21 = ppuStack_c8;
    _objc_release(uVar5);
    _objc_release(uStack_f0);
    _objc_release(uStack_e8);
    _objc_release(lStack_e0);
    _objc_release(lStack_d8);
  }
  ppuVar4 = *(undefined ***)((long)param_3 + lVar19);
  puVar10 = puVar15;
  if (ppuVar4 != (undefined **)0x0) {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_3;
    ppuStack_c8 = ppuVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = ppuVar11;
    func_0x00010bf493c0(-*(double *)((long)param_3 + (long)ppuVar21),ppuVar4,param_4,ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined **)((long)param_3 + lVar19);
    ppuStack_b0 = ppuVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(*(undefined8 *)((long)param_3 + lVar19));
    puVar8 = puVar10;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = *(undefined ***)((long)param_3 + lVar19);
    puStack_a8 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = *(undefined ***)((long)param_3 + (long)ppuVar3);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar11;
    func_0x00010bf493a0(ppuVar11,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_a0 = ppuVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&ppuStack_b0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar15,param_4,ppuVar3);
    _objc_release(ppuVar3);
    _objc_release(ppuVar21);
    _objc_release(param_3);
    _objc_release(ppuVar11);
    _objc_release(puVar8);
    _objc_release(puVar10);
    _objc_release(ppuVar4);
    _objc_release(ppuStack_d0);
    _objc_release(ppuStack_c8);
    ppuVar2 = ppuVar4;
  }
  _objc_release(ppuStack_b8);
  ppuVar4 = ppuStack_c0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    ppuStack_130 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    pcStack_f8 = FUN_10b870c34;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    dStack_160 = dVar24;
    dStack_158 = dVar23;
    ppuStack_150 = ppuVar3;
    ppuStack_148 = ppuVar21;
    puStack_140 = puVar10;
    lStack_138 = lVar19;
    puStack_128 = puVar15;
    ppuStack_120 = param_3;
    ppuStack_118 = ppuVar2;
    ppuStack_110 = ppuVar11;
    puStack_108 = puVar8;
    puStack_100 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    ppuVar21 = *(undefined ***)((long)ppuVar4 + (long)_DAT_112795264);
    if (ppuVar21 == (undefined **)0x0) {
      ppuVar21 = ppuVar4;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar4;
      ppuStack_1b0 = ppuVar21;
      func_0x00010bf8d060();
      if (ppuVar3 == (undefined **)0x1) {
        dVar23 = *(double *)((long)ppuVar4 + (long)_DAT_11279526c + 8);
      }
      else {
        dVar23 = *(double *)((long)ppuVar4 + (long)_DAT_11279526c + 0x18);
      }
      dVar23 = -dVar23;
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      dVar23 = 0.0;
      ppuStack_1b0 = ppuVar21;
    }
    lVar6 = (long)_DAT_11279524c;
    uVar12 = *(undefined8 *)((long)ppuVar4 + lVar6);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar12;
    func_0x00010bf493c0(dVar23);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)ppuVar4 + lVar6);
    uStack_178 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar4;
    func_0x00010c274200(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar13;
    func_0x00010bf493a0(uVar13,param_4,ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_170 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_178,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar9,param_4,puVar10);
    _objc_release(puVar10);
    _objc_release(uVar5);
    _objc_release(ppuVar21);
    _objc_release(uVar13);
    _objc_release(uVar7);
    _objc_release(uVar12);
    ppuVar21 = ppuVar4;
    func_0x00010bf8d060();
    uVar7 = *(undefined8 *)((long)ppuVar4 + lVar6);
    func_0x00010c08de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c08de00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)((long)ppuVar4 + (long)_DAT_11279526c);
    lVar19 = 0x18;
    if (ppuVar21 != (undefined **)0x1) {
      lVar19 = 8;
    }
    dVar22 = *(double *)(puVar8 + lVar19);
    uVar5 = uVar7;
    func_0x00010bf493c0(dVar22,uVar7,param_4,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar9,param_4,uVar5);
    _objc_release(uVar5);
    _objc_release(ppuVar3);
    _objc_release(uVar7);
    lVar20 = (long)_DAT_112795258;
    lVar19 = *(long *)((long)ppuVar4 + lVar20);
    puVar14 = *(undefined **)((long)ppuVar4 + lVar6);
    lStack_1c0 = lVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar19 == 0) {
      ppuVar21 = ppuVar4;
      func_0x00010bf1ff80(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar21 = *(undefined ***)((long)ppuVar4 + lVar20);
      func_0x00010c274200(ppuVar21);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar16 = puVar14;
    func_0x00010bf493a0(puVar14,param_4,ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar9,param_4,puVar16);
    _objc_release(puVar16);
    _objc_release(ppuVar21);
    _objc_release(puVar14);
    puVar18 = (undefined *)(long)_DAT_112795260;
    puVar15 = *(undefined **)((long)ppuVar4 + (long)puVar18);
    puVar17 = puVar9;
    if (puVar15 != (undefined *)0x0) {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar4;
      puStack_1c8 = puVar15;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lStack_1c0;
      ppuStack_1d0 = ppuVar21;
      func_0x00010c0699c0(*(undefined8 *)((long)ppuVar4 + lStack_1c0));
      param_2 = 0x4020000000000000;
      func_0x00010bf493c0(dVar22 + 8.0,puVar15,param_4,ppuVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = *(undefined **)((long)ppuVar4 + (long)puVar18);
      puStack_190 = puVar15;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      dVar22 = dVar23;
      func_0x00010bf493c0(dVar23);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = *(undefined **)((long)ppuVar4 + (long)puVar18);
      puStack_1b8 = puVar8;
      puStack_188 = puVar16;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)((long)ppuVar4 + lVar19);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar10;
      func_0x00010bf493a0(puVar10,param_4,lVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_180 = puVar17;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_190,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar9,param_4,puVar18);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(lVar6);
      _objc_release(puVar10);
      puVar8 = puStack_1b8;
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar15);
      _objc_release(ppuStack_1d0);
      _objc_release(puStack_1c8);
      puVar16 = puVar15;
    }
    puStack_1b8 = puVar9;
    if (*(long *)((long)ppuVar4 + lVar20) != 0) {
      ppuVar21 = ppuVar4;
      func_0x00010bf8d060();
      uVar7 = *(undefined8 *)((long)ppuVar4 + lVar20);
      func_0x00010c08de00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar4;
      func_0x00010c08de00(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = 0x18;
      if (ppuVar21 != (undefined **)0x1) {
        lVar19 = 8;
      }
      uVar5 = uVar7;
      func_0x00010bf493c0(*(undefined8 *)(puVar8 + lVar19),uVar7,param_4,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puStack_1b8;
      func_0x00010befa120(puStack_1b8,param_4,uVar5);
      _objc_release(uVar5);
      _objc_release(ppuVar3);
      _objc_release(uVar7);
      puVar14 = *(undefined **)((long)ppuVar4 + lVar20);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      dVar22 = dVar23;
      puStack_1c8 = puVar14;
      func_0x00010bf493c0(dVar23);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = *(undefined **)((long)ppuVar4 + lVar20);
      puStack_1a8 = puVar14;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)((long)ppuVar4 + lStack_1c0);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bf493a0(puVar16,param_4,lVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = *(undefined **)((long)ppuVar4 + lVar20);
      puStack_1a0 = puVar18;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar17;
      func_0x00010bf493a0(puVar17,param_4,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_198 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_1a8,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar9,param_4,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(ppuVar4);
      _objc_release(puVar17);
      _objc_release(puVar18);
      _objc_release(lVar6);
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puStack_1c8);
    }
    ppuVar21 = ppuStack_1b0;
    _objc_release();
    puVar15 = puStack_1b8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
      ___stack_chk_fail();
      pcStack_1d8 = FUN_10b871244;
      lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = (long)_DAT_112795264;
      puVar15 = PTR____NSArray0__struct_11034ab48;
      dStack_240 = dVar24;
      dStack_238 = dVar23;
      lStack_230 = lVar6;
      puStack_228 = puVar10;
      puStack_220 = puVar8;
      lStack_218 = lVar20;
      puStack_210 = puVar16;
      puStack_208 = puVar9;
      puStack_200 = puVar14;
      ppuStack_1f8 = ppuVar4;
      puStack_1f0 = puVar17;
      puStack_1e8 = puVar18;
      ppuStack_1e0 = &puStack_100;
      if (*(long *)((long)ppuVar21 + lVar19) != 0) {
        if (*(long *)((long)ppuVar21 + (long)_DAT_11279525c) == 0) {
          dVar22 = 0.0;
        }
        else {
          func_0x00010bdc2800();
        }
        ppuVar3 = ppuVar21;
        func_0x00010bf8d060();
        ppuVar4 = *(undefined ***)((long)ppuVar21 + lVar19);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar21;
        func_0x00010bf1ff80(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar4;
        func_0x00010bf493c0(-dVar22,ppuVar4,param_4,ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = auStack_260;
        if (ppuVar3 != (undefined **)0x1) {
          puVar1 = auStack_278;
        }
        lVar6 = 8;
        if (ppuVar3 != (undefined **)0x1) {
          lVar6 = 0x18;
        }
        *puVar1 = ppuVar2;
        uVar12 = *(undefined8 *)((long)ppuVar21 + lVar19);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar21;
        func_0x00010c2793a0(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar12;
        func_0x00010bf493c0(-*(double *)((long)ppuVar21 + lVar6 + _DAT_11279526c),uVar12,param_4,
                            ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar1[1] = uVar7;
        uVar13 = *(undefined8 *)((long)ppuVar21 + lVar19);
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0699c0(*(undefined8 *)((long)ppuVar21 + lVar19));
        uVar5 = uVar13;
        func_0x00010bf49420(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar1[2] = uVar5;
        puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,puVar1,3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar13);
        _objc_release(uVar7);
        _objc_release(ppuVar3);
        _objc_release(uVar12);
        _objc_release(ppuVar2);
        _objc_release(ppuVar11);
        _objc_release();
        ppuVar21 = ppuVar4;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
        ___stack_chk_fail();
        return (undefined *)(ulong)*(byte *)((long)ppuVar21 + (long)_DAT_112795268);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return puVar15;
}



/* Entry: 10b870c34; end: 10b871243; -[SIGSectionHeader _rebuildLabelConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b870c34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  long alStack_188 [3];
  long alStack_170 [3];
  long lStack_158;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_c0 = *(long *)(param_3 + _DAT_112795264);
  if (lStack_c0 == 0) {
    lStack_c0 = param_3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_3;
    func_0x00010bf8d060();
    if (lVar15 == 1) {
      dVar20 = *(double *)(param_3 + _DAT_11279526c + 8);
    }
    else {
      dVar20 = *(double *)(param_3 + _DAT_11279526c + 0x18);
    }
    dVar20 = -dVar20;
  }
  else {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    dVar20 = 0.0;
  }
  lVar18 = (long)_DAT_11279524c;
  uVar3 = *(undefined8 *)(param_3 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf493c0(dVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar18);
  uStack_88 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010c274200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_4,lVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(lVar15);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  lVar17 = param_3;
  func_0x00010bf8d060();
  uVar7 = *(undefined8 *)(param_3 + lVar18);
  func_0x00010c08de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_3;
  func_0x00010c08de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11279526c;
  lVar15 = 0x18;
  if (lVar17 != 1) {
    lVar15 = 8;
  }
  dVar19 = *(double *)(param_3 + lVar14 + lVar15);
  uVar5 = uVar7;
  func_0x00010bf493c0(dVar19,uVar7,param_4,lVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_4,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar16);
  _objc_release(uVar7);
  lVar17 = (long)_DAT_112795258;
  lVar15 = *(long *)(param_3 + lVar17);
  uVar7 = *(undefined8 *)(param_3 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 == 0) {
    lVar15 = param_3;
    func_0x00010bf1ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar15 = *(long *)(param_3 + lVar17);
    func_0x00010c274200(lVar15);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = uVar7;
  func_0x00010bf493a0(uVar7,param_4,lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_4,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar15);
  _objc_release(uVar7);
  lVar16 = (long)_DAT_112795260;
  lVar15 = *(long *)(param_3 + lVar16);
  if (lVar15 != 0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar18));
    param_2 = 0x4020000000000000;
    lVar8 = lVar15;
    func_0x00010bf493c0(dVar19 + 8.0,lVar15,param_4,lVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + lVar16);
    lStack_a0 = lVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    dVar19 = dVar20;
    func_0x00010bf493c0(dVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + lVar16);
    uStack_98 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf493a0(uVar4,param_4,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&lStack_a0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_4,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(lVar8);
    _objc_release(lVar13);
    _objc_release(lVar15);
  }
  if (*(long *)(param_3 + lVar17) != 0) {
    lVar16 = param_3;
    func_0x00010bf8d060();
    uVar7 = *(undefined8 *)(param_3 + lVar17);
    func_0x00010c08de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3;
    func_0x00010c08de00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = 0x18;
    if (lVar16 != 1) {
      lVar15 = 8;
    }
    uVar5 = uVar7;
    func_0x00010bf493c0(*(undefined8 *)(param_3 + lVar14 + lVar15),uVar7,param_4,lVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_4,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar13);
    _objc_release(uVar7);
    uVar4 = *(undefined8 *)(param_3 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf493c0(dVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + lVar17);
    uStack_b8 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010bf493a0(uVar9,param_4,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_3 + lVar17);
    uStack_b0 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010bf493a0(uVar11,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_b8,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_4,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar4);
    dVar19 = dVar20;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = (long)_DAT_112795264;
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (*(long *)(lStack_c0 + lVar15) != 0) {
      if (*(long *)(lStack_c0 + _DAT_11279525c) == 0) {
        dVar19 = 0.0;
      }
      else {
        func_0x00010bdc2800();
      }
      lVar17 = lStack_c0;
      func_0x00010bf8d060();
      lVar18 = *(long *)(lStack_c0 + lVar15);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lStack_c0;
      func_0x00010bf1ff80(lStack_c0);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar18;
      func_0x00010bf493c0(-dVar19,lVar18,param_4,lVar16);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = alStack_170;
      if (lVar17 != 1) {
        plVar1 = alStack_188;
      }
      lVar13 = 8;
      if (lVar17 != 1) {
        lVar13 = 0x18;
      }
      *plVar1 = lVar14;
      lVar12 = *(long *)(lStack_c0 + lVar15);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lStack_c0;
      func_0x00010c2793a0(lStack_c0);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar12;
      func_0x00010bf493c0(-*(double *)(lStack_c0 + _DAT_11279526c + lVar13),lVar12,param_4,lVar17);
      _objc_retainAutoreleasedReturnValue();
      plVar1[1] = lVar8;
      lVar13 = *(long *)(lStack_c0 + lVar15);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0(*(undefined8 *)(lStack_c0 + lVar15));
      lVar15 = lVar13;
      func_0x00010bf49420(param_2);
      _objc_retainAutoreleasedReturnValue();
      plVar1[2] = lVar15;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,plVar1,3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      _objc_release(lVar13);
      _objc_release(lVar8);
      _objc_release(lVar17);
      _objc_release(lVar12);
      _objc_release(lVar14);
      _objc_release(lVar16);
      _objc_release();
      lStack_c0 = lVar18;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
      ___stack_chk_fail();
      return (undefined *)(ulong)*(byte *)(lStack_c0 + _DAT_112795268);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 10b871244; end: 10b87145b; -[SIGSectionHeader _rebuildTrailingAccessoryViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b871244(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long alStack_a8 [3];
  long alStack_90 [3];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112795264;
  puVar9 = PTR____NSArray0__struct_11034ab48;
  if (*(long *)(param_3 + lVar10) != 0) {
    if (*(long *)(param_3 + _DAT_11279525c) == 0) {
      param_1 = 0.0;
    }
    else {
      func_0x00010bdc2800();
    }
    lVar2 = param_3;
    func_0x00010bf8d060();
    lVar3 = *(long *)(param_3 + lVar10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf1ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493c0(-param_1,lVar3,param_4,lVar4);
    _objc_retainAutoreleasedReturnValue();
    plVar1 = alStack_90;
    if (lVar2 != 1) {
      plVar1 = alStack_a8;
    }
    lVar8 = 8;
    if (lVar2 != 1) {
      lVar8 = 0x18;
    }
    *plVar1 = lVar5;
    lVar6 = *(long *)(param_3 + lVar10);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2793a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf493c0(-*(double *)(param_3 + _DAT_11279526c + lVar8),lVar6,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    plVar1[1] = lVar7;
    lVar8 = *(long *)(param_3 + lVar10);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar10));
    lVar10 = lVar8;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    plVar1[2] = lVar10;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,plVar1,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release();
    param_3 = lVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    return (undefined *)(ulong)*(byte *)(param_3 + _DAT_112795268);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 10b87145c; end: 10b87146b; -[SIGSectionHeader trailingAccessoryViewHasButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b87145c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795268);
}



/* Entry: 10b87146c; end: 10b87147b; -[SIGSectionHeader setTrailingAccessoryViewHasButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87146c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795268) = param_3;
  return;
}



/* Entry: 10b87147c; end: 10b87148b; -[SIGSectionHeader titleTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b87147c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795244);
}



/* Entry: 10b87148c; end: 10b87149b; -[SIGSectionHeader subtitleTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b87148c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795248);
}



/* Entry: 10b87149c; end: 10b8714b3; -[SIGSectionHeader contentInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b87149c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279526c);
}



/* Entry: 10b8714b4; end: 10b8714c3; -[SIGSectionHeader badgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8714b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795260);
}



/* Entry: 10b8714c4; end: 10b8714d3; -[SIGSectionHeader specOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8714c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279525c);
}



/* Entry: 10b8714d4; end: 10b8714e3; -[SIGSectionHeader trailingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8714d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795264);
}



/* Entry: 10b8714e4; end: 10b871593; -[SIGSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8714e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795264,0);
  _objc_storeStrong(param_1 + _DAT_11279525c,0);
  _objc_storeStrong(param_1 + _DAT_112795270,0);
  _objc_storeStrong(param_1 + _DAT_11279527c,0);
  _objc_storeStrong(param_1 + _DAT_112795278,0);
  _objc_storeStrong(param_1 + _DAT_112795274,0);
  _objc_storeStrong(param_1 + _DAT_112795260,0);
  _objc_storeStrong(param_1 + _DAT_112795258,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279524c,0);
  return;
}



/* Entry: 10b871594; end: 10b871af3; -[SIGSectionHeaderAction initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b871594(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = PTR_PTR_11270b6d8;
  puVar29 = &uStack_e0;
  uStack_e0 = param_1;
  _objc_msgSendSuper2(puVar29,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar29 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar31 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar34 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar31,uVar32,uVar33,uVar34);
    func_0x00010c219b60();
    func_0x00010c21ad00(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    func_0x00010c165e00(puVar1);
    uVar30 = *(undefined8 *)((long)puVar29 + (long)_DAT_112795280);
    *(undefined **)((long)puVar29 + (long)_DAT_112795280) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar30);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar31,uVar32,uVar33,uVar34);
    func_0x00010c219b60();
    puVar2 = puVar3;
    func_0x00010c182220(puVar3);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c155dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    uVar30 = *(undefined8 *)((long)puVar29 + (long)_DAT_112795284);
    *(undefined **)((long)puVar29 + (long)_DAT_112795284) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar30);
    func_0x00010befbb60(puVar29);
    func_0x00010befbb60(puVar29);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar29;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    puStack_d0 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493c0(0x8000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    puStack_c8 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar29;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    puStack_c0 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar29;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    puStack_b8 = puVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar3;
    puStack_b0 = puVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar29;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar3;
    puStack_a8 = puVar21;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar29;
    func_0x00010c274200(puVar29);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar3;
    puStack_a0 = puVar24;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar29;
    func_0x00010bf1ff80(puVar29);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar27;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
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
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    func_0x00010c0699c0(*(undefined8 *)(puVar2 + _DAT_112795280));
    puVar29 = *(undefined8 **)(puVar2 + _DAT_112795284);
    func_0x00010c0699c0(puVar29);
    return puVar29;
  }
  return puVar29;
}



/* Entry: 10b871af4; end: 10b871b5b; -[SIGSectionHeaderAction intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b871af4(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112795280));
  dVar1 = param_1;
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112795284));
  return param_1 + dVar1 + 0.0;
}



/* Entry: 10b871b5c; end: 10b871bb7; -[SIGSectionHeaderAction sizeToFit] */

void FUN_10b871b5c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0699c0();
  func_0x00010bfb68e0(param_2);
  func_0x00010bfb68e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b871bb8; end: 10b871bc7; -[SIGSectionHeaderAction title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b871bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795280),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b871bc8; end: 10b871c4b; -[SIGSectionHeaderAction setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b871bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112795280;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c069fa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b871c4c; end: 10b871c8b; -[SIGSectionHeaderAction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b871c4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795284,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795280,0);
  return;
}



/* Entry: 10b871c8c; end: 10b871dfb; -[SIGSectionHeaderButton initWithFrame:height:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b871c8c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double in_d4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270b6e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(in_d4 * 0.5);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    func_0x00010c21ad00(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar4);
    func_0x00010c165e00(puVar3);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112795288);
    *(undefined **)((long)puVar1 + (long)_DAT_112795288) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar5);
    *(double *)((long)puVar1 + (long)_DAT_11279528c) = in_d4;
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    func_0x00010beaab80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b871dfc; end: 10b871e67; -[SIGSectionHeaderButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b871dfc(double param_1,long param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112795288));
  if (*(long *)(param_2 + _DAT_112795290) != 0) {
    dVar1 = param_1;
    func_0x00010c0699c0();
    param_1 = param_1 + dVar1 + 4.0;
  }
  auVar2._0_8_ = param_1 + 24.0;
  auVar2._8_8_ = *(undefined8 *)(param_2 + _DAT_11279528c);
  return auVar2;
}



/* Entry: 10b871e68; end: 10b871ec3; -[SIGSectionHeaderButton sizeToFit] */

void FUN_10b871e68(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0699c0();
  func_0x00010bfb68e0(param_2);
  func_0x00010bfb68e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b871ec4; end: 10b871ed3; -[SIGSectionHeaderButton title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b871ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795288),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b871ed4; end: 10b871f5f; -[SIGSectionHeaderButton setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b871ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112795288;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c069fa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b871f60; end: 10b871f6f; -[SIGSectionHeaderButton image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b871f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795290),PTR_s_image_1125d7478);
  return;
}



/* Entry: 10b871f70; end: 10b872053; -[SIGSectionHeaderButton setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b871f70(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112795290;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
    if (param_3 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      func_0x00010c219b60();
      func_0x00010c182220(puVar3,param_2,4);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar3;
      _objc_retain(puVar3);
      _objc_release(uVar4);
      func_0x00010befbb60(param_1,param_2,puVar3);
      _objc_release(puVar3);
    }
    func_0x00010beaab80(param_1);
    func_0x00010c069fa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b872054; end: 10b8725e7; -[SIGSectionHeaderButton _setupAutolayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b872054(long param_1)

{
  long lVar1;
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
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(param_1 + _DAT_112795290);
  _objc_retain(lVar21);
  lVar22 = *(long *)(param_1 + _DAT_112795288);
  _objc_retain(lVar22);
  lVar23 = (long)_DAT_112795294;
  lVar19 = *(long *)(param_1 + lVar23);
  _objc_retain(lVar19);
  if (lVar19 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar14 = param_1;
  uStack_f8 = param_1;
  uStack_110 = param_1;
  if (lVar21 == 0) {
    lVar13 = lVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar13;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = lVar16;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = lVar22;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uStack_f0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = lVar22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uStack_108;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar13 = lVar21;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar13;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = lVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = lVar16;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = lVar21;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uStack_f0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = lVar21;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uStack_108;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar22;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
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
    lVar19 = lVar1;
  }
  _objc_release(lVar19);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar17;
  _objc_retain(puVar17);
  _objc_release(uVar20);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar17);
  _objc_release(lVar22);
  _objc_release(lVar21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar21 + _DAT_112795294,0);
  _objc_storeStrong(lVar21 + _DAT_112795290,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar21 + _DAT_112795288,0);
  return;
}



/* Entry: 10b8725e8; end: 10b872637; -[SIGSectionHeaderButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8725e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795294,0);
  _objc_storeStrong(param_1 + _DAT_112795290,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795288,0);
  return;
}



/* Entry: 10b872638; end: 10b8726db; -[SIGTableViewSectionHeader setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b872638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_5 + _DAT_112795298) != param_7) {
    *(long *)(param_5 + _DAT_112795298) = param_7;
    lVar1 = param_5;
    func_0x00010bf8d060();
    lVar2 = param_5;
    func_0x00010c248200(param_5);
    _objc_retainAutoreleasedReturnValue();
    FUN_10b86a780(param_7,10,lVar1,lVar2);
    uVar3 = param_2;
    if (0xfffffffffffffffd < param_7 - 8U || lVar1 != 1) {
      uVar3 = param_4;
      param_4 = param_2;
    }
    func_0x00010c181fe0(param_1,param_4,param_3,uVar3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b8726dc; end: 10b87273f; -[SIGTableViewSectionHeader didMoveToSuperview] */

void FUN_10b8726dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b6e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToSuperview_1125bb968);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x3ff0000000000000);
  _objc_release(param_1);
  return;
}



/* Entry: 10b872740; end: 10b87274f; -[SIGTableViewSectionHeader style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b872740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795298);
}



/* Entry: 10b872750; end: 10b87275b; -[SIGTabBarScrollViewCoordinator initWithTabs:scrollView:] */

void FUN_10b872750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0503f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTabs_scrollView_selected_1125f1b00,param_3,param_4,0,0);
  return;
}



/* Entry: 10b87275c; end: 10b872857; -[SIGTabBarScrollViewCoordinator initWithTabs:scrollView:selectedIndex:animatingToIndex:] */

undefined1 *
FUN_10b87275c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270b6f0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(ulong *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(ulong *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010bf529e0();
    if (uVar2 <= param_6) {
      lVar3 = *(long *)((long)puVar1 + 8);
      func_0x00010bf529e0();
      *(long *)((long)puVar1 + 0x18) = lVar3 + -1;
      lVar3 = *(long *)((long)puVar1 + 8);
      func_0x00010bf529e0();
      *(long *)((long)puVar1 + 0x20) = lVar3 + -1;
    }
    func_0x00010be87de0(puVar1);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b872858; end: 10b87288f; -[SIGTabBarScrollViewCoordinator setDelegate:] */

void FUN_10b872858(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_storeWeak(param_2 + 0x38,param_4);
  func_0x00010be87de0(param_2);
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 10b872890; end: 10b872973; -[SIGTabBarScrollViewCoordinator _rectForPageAtIndex:] */

double FUN_10b872890(double param_1,undefined8 param_2,double param_3,long param_4,
                    undefined8 param_5,ulong param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_4 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_4 + 0x38;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) != 0) {
      param_4 = param_4 + 0x38;
      _objc_loadWeakRetained(param_4);
      func_0x00010c124540();
      _objc_release(param_4);
      return param_1;
    }
  }
  func_0x00010bf20c00(*(undefined8 *)(param_4 + 0x10));
  func_0x00010bf20c00(*(undefined8 *)(param_4 + 0x10));
  return param_3 * (double)param_6;
}



/* Entry: 10b872974; end: 10b872a2b; -[SIGTabBarScrollViewCoordinator selectPageAtIndex:animated:] */

void FUN_10b872974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_5 + 8);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be87de0(param_5,param_6,param_7);
  func_0x00010c1fade0(uVar1,param_6,1,param_8);
  func_0x00010c1521c0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x10),param_6,
                      param_8);
  *(undefined8 *)(param_5 + 0x20) = param_7;
  if ((param_8 & 1) == 0) {
    func_0x00010be64e40(param_5,param_6,param_7,*(undefined8 *)(param_5 + 0x18));
    *(undefined8 *)(param_5 + 0x18) = param_7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b872a2c; end: 10b872a6f; -[SIGTabBarScrollViewCoordinator tabSelected:] */

void FUN_10b872a2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfecde0();
  func_0x00010be87de0(param_1,param_2,uVar1);
  func_0x00010c1521c0(*(undefined8 *)(param_1 + 0x10),param_2,1);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10b872a70; end: 10b872ae7; -[SIGTabBarScrollViewCoordinator scrollViewWillBeginDragging:] */

void FUN_10b872a70(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if ((*(long *)(param_2 + 0x28) != 0) && (uVar1 = param_4, func_0x00010c070400(), (int)uVar1 != 0))
  {
    func_0x00010bf4cdc0(param_4);
    param_1 = param_1 - *(double *)(param_2 + 0x30);
    func_0x00010bde3460(param_2,param_3,param_1 != 0.0);
  }
  func_0x00010bf4cdc0(param_4);
  *(double *)(param_2 + 0x30) = param_1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b872ae8; end: 10b872b2b; -[SIGTabBarScrollViewCoordinator scrollViewDidEndDecelerating:] */

void FUN_10b872ae8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(long *)(param_2 + 0x28) != 0) {
    func_0x00010bf4cdc0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bde3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s__completeTransitionWithResult__1125566b8,
               param_1 - *(double *)(param_2 + 0x30) != 0.0);
    return;
  }
  return;
}



/* Entry: 10b872b2c; end: 10b872cb3; -[SIGTabBarScrollViewCoordinator scrollViewDidScroll:] */

void FUN_10b872b2c(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  _objc_retain(param_6);
  uVar2 = param_6;
  func_0x00010c070ea0();
  if ((int)uVar2 == 0) goto LAB_10b872c9c;
  func_0x00010bf4cdc0(param_6);
  param_1 = param_1 - *(double *)(param_4 + 0x30);
  lVar1 = *(long *)(param_4 + 8);
  func_0x00010bf529e0();
  if (*(long *)(param_4 + 0x28) == 0) {
LAB_10b872bbc:
    if (0.0 <= param_1) {
      if (0.0 < param_1) {
        if (*(long *)(param_4 + 0x18) == lVar1 + -1) goto LAB_10b872c9c;
        lVar1 = *(long *)(param_4 + 0x18) + 1;
        goto LAB_10b872bec;
      }
      lVar1 = *(long *)(param_4 + 0x20);
    }
    else {
      if (*(long *)(param_4 + 0x18) == 0) goto LAB_10b872c9c;
      lVar1 = *(long *)(param_4 + 0x18) + -1;
LAB_10b872bec:
      *(long *)(param_4 + 0x20) = lVar1;
    }
    uVar2 = *(undefined8 *)(param_4 + 8);
    func_0x00010c0dfd40(uVar2,param_5,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_4 + 8);
    func_0x00010c0dfd40(uVar3,param_5,*(undefined8 *)(param_4 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126e18a0;
    func_0x00010bf04260(PTR_PTR_1126e18a0,param_5,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + 0x28);
    *(undefined **)(param_4 + 0x28) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else if (*(ulong *)(param_4 + 0x18) < *(ulong *)(param_4 + 0x20)) {
    if (param_1 <= 0.0) {
LAB_10b872ba4:
      func_0x00010bf2dba0();
      uVar2 = *(undefined8 *)(param_4 + 0x28);
      *(undefined8 *)(param_4 + 0x28) = 0;
      _objc_release(uVar2);
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_10b872bbc;
    }
  }
  else if ((*(ulong *)(param_4 + 0x20) < *(ulong *)(param_4 + 0x18)) && (0.0 <= param_1))
  goto LAB_10b872ba4;
  func_0x00010be87de0(param_4,param_5,*(undefined8 *)(param_4 + 0x18));
  dVar6 = param_3;
  func_0x00010be87de0(param_4,param_5,*(undefined8 *)(param_4 + 0x20));
  func_0x00010c283680(ABS(param_1) / (param_3 * 0.5 + dVar6 * 0.5),*(undefined8 *)(param_4 + 0x28));
LAB_10b872c9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10b872cb4; end: 10b872d53; -[SIGTabBarScrollViewCoordinator scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_10b872cb4(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  double *param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_5);
  dVar4 = *param_6 - *(double *)(param_3 + 0x30);
  bVar3 = false;
  if ((param_1 == *(double *)PTR__CGPointZero_110347540) &&
     (bVar3 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGPointZero_110347540 + 8)))) {
    bVar3 = param_2 == *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  if (bVar3) {
    func_0x00010bde3460(param_3,param_4,dVar4 != 0.0);
  }
  lVar1 = 0x20;
  if (dVar4 == 0.0) {
    lVar1 = 0x18;
  }
  lVar2 = 0x18;
  if (dVar4 == 0.0) {
    lVar2 = 0x20;
  }
  *(undefined8 *)(param_3 + lVar2) = *(undefined8 *)(param_3 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b872d54; end: 10b872d7f; -[SIGTabBarScrollViewCoordinator scrollViewDidEndScrollingAnimation:] */

void FUN_10b872d54(long param_1,undefined8 param_2)

{
  func_0x00010be64e40(param_1,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  return;
}



/* Entry: 10b872d80; end: 10b872edf; -[SIGTabBarScrollViewCoordinator _completeTransitionWithResult:] */

void FUN_10b872d80(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010bf43720(*(undefined8 *)(param_2 + 0x28));
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  _objc_release(uVar1);
  lVar3 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar5 = param_2 + 0x38;
    _objc_loadWeakRetained();
    uVar4 = uVar5;
    _objc_opt_respondsToSelector();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_2 + 0x38;
      _objc_loadWeakRetained();
      uVar2 = uVar4;
      _objc_opt_respondsToSelector();
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(lVar3);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    else {
      _objc_release(uVar5);
      _objc_release(lVar3);
    }
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar5 = 0;
      do {
        func_0x00010be87de0(param_2);
        if (param_1 == *(double *)(param_2 + 0x30)) {
          if (uVar5 == 0x7fffffffffffffff) {
            return;
          }
          func_0x00010bf4cdc0(*(undefined8 *)(param_2 + 0x10));
          if (param_1 == *(double *)(param_2 + 0x30)) {
            return;
          }
          func_0x00010bf4cdc0(*(undefined8 *)(param_2 + 0x10));
          uVar4 = uVar5 - 1;
          if (*(double *)(param_2 + 0x30) < param_1) {
            uVar4 = uVar5 + 1;
          }
          uVar2 = uVar5;
          if (param_4 != 0) {
            uVar2 = uVar4;
            uVar4 = uVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x00010be64e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_2,PTR_s__notifyPageAppearedAtIndex_disap_112576d30,uVar2,uVar4);
          return;
        }
        uVar5 = uVar5 + 1;
        uVar4 = *(ulong *)(param_2 + 8);
        func_0x00010bf529e0();
      } while (uVar5 < uVar4);
    }
  }
  return;
}



/* Entry: 10b872ee0; end: 10b872fb3; -[SIGTabBarScrollViewCoordinator _notifyPageAppearedAtIndex:disappearedPageIndex:] */

void FUN_10b872ee0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3 != param_4) {
    uVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c0f0f00();
      _objc_release(lVar3);
    }
    uVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0f0fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10b872fb4; end: 10b872fcb; -[SIGTabBarScrollViewCoordinator delegate] */

void FUN_10b872fb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b872fcc; end: 10b872fd3; -[SIGTabBarScrollViewCoordinator selectedIndex] */

undefined8 FUN_10b872fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b872fd4; end: 10b872fdb; -[SIGTabBarScrollViewCoordinator animatingToIndex] */

undefined8 FUN_10b872fd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b872fdc; end: 10b87301f; -[SIGTabBarScrollViewCoordinator .cxx_destruct] */

void FUN_10b872fdc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b873020; end: 10b87308b; -[SIGTabBarSelectionView setTheme:] */

/* WARNING: Possible PIC construction at 0x00010b873078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b87307c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b873020(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  *(long *)(param_1 + _DAT_1127952b8) = param_3;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBackgroundColor__112639330,puVar1);
  return;
}



/* Entry: 10b87308c; end: 10b87309f; -[SIGTabBarSelectionView intrinsicContentSize] */

undefined1  [16] FUN_10b87308c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4000000000000000;
  return auVar1;
}



/* Entry: 10b8730a0; end: 10b8732cb; -[SIGTabBarSelectionView selectTab:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b8730a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c219b60(param_1,param_2,0);
  lVar11 = (long)_DAT_1127952bc;
  if (*(long *)(param_1 + lVar11) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar11);
    *(undefined8 *)(param_1 + lVar11) = 0;
    _objc_release(uVar1);
  }
  lVar2 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_80 = lVar3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c1408a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf493a0(lVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  lStack_78 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar9 = lVar7;
  func_0x00010bf493a0(lVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(lVar2);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar10);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar10;
  _objc_release(uVar1);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d140();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + _DAT_1127952b8);
}



/* Entry: 10b8732cc; end: 10b8732db; -[SIGTabBarSelectionView theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8732cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127952b8);
}



/* Entry: 10b8732dc; end: 10b873403; -[SIGTabBarView setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8732dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_1127952e0;
  *(undefined8 *)(param_1 + lVar5) = param_3;
  lVar4 = *(long *)(param_1 + _DAT_1127952d8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c213a60(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar2 = *(long *)(param_1 + lVar5);
  lVar1 = *(long *)(param_1 + _DAT_1127952cc);
  func_0x00010c213a60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar1 + _DAT_1127952dc) == lVar2) {
    return;
  }
  *(long *)(lVar1 + _DAT_1127952dc) = lVar2;
  *(undefined8 *)(lVar1 + _DAT_1127952e4) = 0xbff0000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b873404; end: 10b873433; -[SIGTabBarView setSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b873404(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_1127952dc) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_1127952dc) = param_3;
  *(undefined8 *)(param_1 + _DAT_1127952e4) = 0xbff0000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b873434; end: 10b87345f; -[SIGTabBarView setSelectionViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b873434(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_1127952ec) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127952ec) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127952cc),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 10b873460; end: 10b8734d7; -[SIGTabBarView setText:forTabBarItemAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b873460(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127952d8;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c0dfd40(uVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211300();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8734d8; end: 10b873697; -[SIGTabBarView SIGTabBarViewItemViewDidBecomeSelected:viaUserInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8734d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = *(long *)(param_1 + _DAT_1127952d8);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar9 = *(ulong *)(lVar6 * 8);
      uVar3 = uVar9;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0840e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) {
        func_0x00010c0840e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fadc0();
        _objc_release(uVar9);
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127952f0);
  *(undefined8 *)(param_1 + _DAT_1127952f0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar8);
  func_0x00010be9d6c0(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c069fa0();
                    /* WARNING: Could not recover jumptable at 0x00010c122070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_recalculateLayout_112626238);
  return;
}



/* Entry: 10b873698; end: 10b8736bb; -[SIGTabBarView SIGTabBarViewItemViewDidUpdateBounds:] */

void FUN_10b873698(undefined8 param_1)

{
  func_0x00010c069fa0();
                    /* WARNING: Could not recover jumptable at 0x00010c122070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_recalculateLayout_112626238);
  return;
}



/* Entry: 10b8736bc; end: 10b8738cb; -[SIGTabBarView _select:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8736bc(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain(param_7);
  func_0x00010c08cdc0(param_5);
  uVar2 = *(undefined8 *)(param_5 + _DAT_1127952cc);
  _objc_retain(uVar2);
  func_0x00010bf20c00(param_7);
  lVar3 = (long)_DAT_1127952c8;
  func_0x00010bf51460(param_7,param_6,*(undefined8 *)(param_5 + lVar3));
  _CGRectInset();
  dVar5 = param_4;
  if (*(char *)(param_5 + _DAT_1127952e8) == '\x01') {
    dVar4 = param_3 * 0.5;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
    param_1 = (param_1 + dVar4) - param_3 * 0.5;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
    param_2 = (param_2 + param_4 * 0.5) - dVar5 * 0.5;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  }
  func_0x00010c1521c0(param_1,param_2,param_3,dVar5,*(undefined8 *)(param_5 + lVar3),param_6,param_8
                     );
  if ((int)param_8 == 0) {
    func_0x00010c1590a0(uVar2,param_6,param_7);
  }
  else {
    func_0x00010bf345e0(param_7);
    dVar5 = param_1;
    func_0x00010bf345e0(uVar2);
    param_1 = param_1 - dVar5;
    dVar5 = -param_1;
    if (0.0 <= param_1) {
      dVar5 = param_1;
    }
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10b8738cc;
    puStack_90 = &UNK_110848ba8;
    _objc_retain(uVar2);
    uStack_88 = uVar2;
    _objc_retain(param_7);
    uStack_80 = param_7;
    lStack_78 = param_5;
    func_0x00010bf03400((dVar5 / param_3) * 0.3,puVar1,param_6,&puStack_a8);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
  }
  _objc_release(uVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 10b8738cc; end: 10b87393f;  */

void FUN_10b8738cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1590a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b873940; end: 10b873a63; -[SIGTabBarView _layoutTabsOfTotalWidth:equallyWithSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b873940(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  func_0x00010c181140(*(undefined8 *)(param_3 + _DAT_1127952d4));
  lVar7 = (long)_DAT_1127952d8;
  uVar1 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + _DAT_1127952d0);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0(uVar5,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  lVar4 = param_3;
  func_0x00010bde6820(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar5 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010bf529e0(uVar5);
  func_0x00010bf0a0e0(puVar6,param_4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa160(puVar6,param_4,lVar4);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b873a64; end: 10b873c8f; -[SIGTabBarView _layoutTabsForScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b873a64(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  
  lVar10 = (long)_DAT_1127952d8;
  uVar1 = *(undefined8 *)(param_3 + lVar10);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127952c8;
  uVar2 = *(undefined8 *)(param_3 + lVar9);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf493c0(0x4030000000000000,uVar7,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  func_0x00010be97660(param_3);
  lVar4 = param_3;
  func_0x00010bde6820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + lVar10);
  func_0x00010c089820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar9);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf493c0(0xc030000000000000,uVar7,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar7 = uVar5;
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + lVar9);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(param_3);
  dVar11 = param_2;
  func_0x00010c0699c0(uVar5);
  uVar2 = uVar7;
  func_0x00010bf493c0(-(param_2 - dVar11),uVar7,param_4,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar7 = *(undefined8 *)(param_3 + lVar10);
  func_0x00010bf529e0(uVar7);
  func_0x00010bf0a0e0(puVar8,param_4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa120(puVar8,param_4,uVar1);
  func_0x00010befa120(puVar8,param_4,uVar2);
  func_0x00010befa160(puVar8,param_4,lVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b873c90; end: 10b873f57; -[SIGTabBarView _recalculateTabLayoutsScrollSpanTabAndCentered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b873c90(double param_1,double param_2,double param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_1127952d8;
  lVar1 = *(long *)(param_4 + lVar12);
  func_0x00010bf529e0();
  lVar9 = 0;
  if ((lVar1 != 0) && (lVar9 = param_4, func_0x00010bfb68e0(), 0.0 < param_3)) {
    lVar1 = param_4;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c1069c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = (long)_DAT_1127952c4;
    uVar2 = *(ulong *)(param_4 + lVar1);
    func_0x00010c0720c0(uVar2,param_5,lVar9);
    lVar13 = (long)_DAT_1127952e4;
    dVar16 = *(double *)(param_4 + lVar13);
    func_0x00010bfb68e0(param_4);
    if ((dVar16 != param_3) || ((uVar2 & 1) == 0)) {
      func_0x00010bfb68e0(param_4);
      *(double *)(param_4 + lVar13) = param_3;
      _objc_retain(lVar9);
      uVar3 = *(undefined8 *)(param_4 + lVar1);
      *(long *)(param_4 + lVar1) = lVar9;
      _objc_release(uVar3);
      lVar1 = (long)_DAT_1127952f4;
      if (*(long *)(param_4 + lVar1) != 0) {
        func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      }
      func_0x00010be607c0(param_4);
      dVar16 = param_1;
      func_0x00010be97660(param_4);
      dVar17 = 0.0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lVar11 = *(long *)(param_4 + lVar12);
      _objc_retain(lVar11);
      lVar13 = lVar11;
      func_0x00010bf52a60(lVar11,param_5,&uStack_150,auStack_108,0x10);
      if (lVar13 == 0) {
        dVar18 = 0.0;
      }
      else {
        lVar14 = *plStack_140;
        dVar18 = 0.0;
        do {
          lVar15 = 0;
          do {
            if (*plStack_140 != lVar14) {
              _objc_enumerationMutation(lVar11);
            }
            func_0x00010c0699c0(*(undefined8 *)(lStack_148 + lVar15 * 8));
            dVar18 = dVar18 + dVar17;
            lVar15 = lVar15 + 1;
          } while (lVar13 != lVar15);
          lVar13 = lVar11;
          func_0x00010bf52a60(lVar11,param_5,&uStack_150,auStack_108,0x10);
        } while (lVar13 != 0);
      }
      _objc_release(lVar11);
      dVar17 = (param_3 - dVar18) + -32.0;
      uVar2 = *(ulong *)(param_4 + lVar12);
      func_0x00010bf529e0();
      if (1 < uVar2) {
        lVar13 = *(long *)(param_4 + lVar12);
        func_0x00010bf529e0();
        dVar17 = dVar17 / (double)(lVar13 - 1);
      }
      lVar12 = *(long *)(param_4 + lVar12);
      func_0x00010bf529e0(lVar12);
      param_2 = 32.0;
      if (param_1 <= dVar17) {
        func_0x00010be01d20(dVar18 + dVar16 * (double)(lVar12 - 1) + 32.0,param_4);
        param_1 = dVar17;
      }
      else {
        func_0x00010be08fc0();
        param_1 = dVar16;
      }
      lVar12 = param_4;
      func_0x00010be498c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_4 + lVar1);
      *(long *)(param_4 + lVar1) = lVar12;
      _objc_release(uVar3);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,
                          *(undefined8 *)(param_4 + lVar1));
      if (*(long *)(param_4 + _DAT_1127952f0) != 0) {
        func_0x00010bdc2880(param_4,param_5,*(long *)(param_4 + _DAT_1127952f0),0);
      }
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_1127952d8;
  uVar4 = *(undefined8 *)(lVar9 + lVar11);
  func_0x00010bfb1920(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_1127952c8;
  uVar5 = *(undefined8 *)(lVar9 + lVar13);
  func_0x00010c08de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3,param_5,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  lVar1 = lVar9;
  func_0x00010bde6820(0,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bde6800(param_1,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar9 + lVar11);
  func_0x00010c089820(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar9 + lVar13);
  func_0x00010c2793a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0(uVar3,param_5,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar7;
  func_0x00010bf1ff80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar9 + lVar13);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(lVar9);
  dVar16 = param_2;
  func_0x00010c0699c0(uVar7);
  uVar5 = uVar3;
  func_0x00010bf493c0(-(param_2 - dVar16),uVar3,param_5,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar3);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar9 = *(long *)(lVar9 + lVar11);
  func_0x00010bf529e0(lVar9);
  func_0x00010bf0a0e0(puVar10,param_5,lVar9 << 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa120(puVar10,param_5,uVar4);
  func_0x00010befa120(puVar10,param_5,uVar5);
  func_0x00010befa160(puVar10,param_5,lVar1);
  func_0x00010befa160(puVar10,param_5,lVar12);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b873f58; end: 10b8741a7; -[SIGTabBarView _layoutTabsWithSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b873f58(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  
  lVar11 = (long)_DAT_1127952d8;
  uVar1 = *(undefined8 *)(param_3 + lVar11);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127952c8;
  uVar3 = *(undefined8 *)(param_3 + lVar10);
  func_0x00010c08de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = param_3;
  func_0x00010bde6820(0,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bde6800(param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + lVar11);
  func_0x00010c089820(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar10);
  func_0x00010c2793a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf493a0(uVar2,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar7;
  func_0x00010bf1ff80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + lVar10);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(param_3);
  dVar12 = param_2;
  func_0x00010c0699c0(uVar7);
  uVar3 = uVar2;
  func_0x00010bf493c0(-(param_2 - dVar12),uVar2,param_4,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar2);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar10 = *(long *)(param_3 + lVar11);
  func_0x00010bf529e0(lVar10);
  func_0x00010bf0a0e0(puVar9,param_4,lVar10 << 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa120(puVar9,param_4,uVar1);
  func_0x00010befa120(puVar9,param_4,uVar3);
  func_0x00010befa160(puVar9,param_4,lVar5);
  func_0x00010befa160(puVar9,param_4,lVar6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b8741a8; end: 10b8741f3; -[SIGTabBarView _enableScrollingWithWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8741a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  func_0x00010bf20c00();
  lVar1 = (long)_DAT_1127952c8;
  func_0x00010c1827c0(param_1,param_4,*(undefined8 *)(param_5 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + lVar1),PTR_s_setScrollEnabled__11265b8f0,1);
  return;
}



/* Entry: 10b8741f4; end: 10b87425f; -[SIGTabBarView _disableScrollingIfNeededWithWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8741f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127952c8;
  iVar1 = (int)*(undefined8 *)(param_5 + lVar2);
  func_0x00010c07d3e0();
  if (iVar1 != 0) {
    func_0x00010bf20c00(param_5);
    func_0x00010c1827c0(param_1,param_4,*(undefined8 *)(param_5 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_5 + lVar2),PTR_s_setScrollEnabled__11265b8f0,0);
    return;
  }
  return;
}



/* Entry: 10b874260; end: 10b874437; -[SIGTabBarView _constraintsToSpaceTabs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b874260(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_1127952d8;
  lVar1 = *(long *)(param_2 + lVar10);
  func_0x00010bf529e0(lVar1);
  func_0x00010bf0a0e0(puVar2,param_3,lVar1 + -1);
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar10 = *(long *)(param_2 + lVar10);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60(lVar10,param_3,&uStack_140,auStack_100,0x10);
  if (lVar1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    lVar14 = *plStack_130;
    do {
      lVar15 = 0;
      lVar13 = lVar12;
      do {
        if (*plStack_130 != lVar14) {
          _objc_enumerationMutation(lVar10);
        }
        lVar12 = *(long *)(lStack_138 + lVar15 * 8);
        if (lVar13 != 0) {
          lVar3 = lVar12;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar13;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          dVar16 = param_1;
          func_0x00010bf493c0(param_1,lVar3,param_3,lVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(lVar3);
          func_0x00010befa120(puVar2,param_3,lVar5);
          _objc_release(lVar5);
        }
        _objc_retain(lVar12);
        _objc_release(lVar13);
        lVar15 = lVar15 + 1;
        lVar13 = lVar12;
      } while (lVar1 != lVar15);
      lVar1 = lVar10;
      func_0x00010bf52a60(lVar10,param_3,&uStack_140,auStack_100,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar14 = (long)_DAT_1127952d8;
    uVar6 = *(undefined8 *)(lVar12 + lVar14);
    func_0x00010bf529e0(uVar6);
    func_0x00010bf0a0e0(puVar2,param_3,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(lVar12 + lVar14);
    func_0x00010bf529e0();
    lVar10 = *(long *)(lVar12 + lVar14);
    if (lVar1 == 1) {
      func_0x00010c0dfd40(lVar10,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar10;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar12 + _DAT_1127952c8);
      func_0x00010c2a5060(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar1;
      func_0x00010bf493a0(lVar1,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(lVar1);
      _objc_release(lVar10);
      func_0x00010befa120(puVar2,param_3,lVar12);
      _objc_release(lVar12);
    }
    else {
      func_0x00010bf529e0();
      if (lVar10 != 0) {
        uVar11 = 0;
        dVar17 = 0.5;
        do {
          uVar6 = *(undefined8 *)(lVar12 + lVar14);
          func_0x00010c0dfd40(uVar6,param_3,uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0699c0();
          dVar17 = dVar16 + dVar17;
          if (uVar11 == 0) {
LAB_10b874580:
            dVar17 = (dVar17 - dVar16 * 0.5) + 16.0;
          }
          else {
            lVar1 = *(long *)(lVar12 + lVar14);
            func_0x00010bf529e0();
            if (uVar11 == lVar1 - 1U) goto LAB_10b874580;
          }
          uVar7 = uVar6;
          func_0x00010c2a5060(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf49420(dVar17);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          func_0x00010befa120(puVar2,param_3,uVar8);
          _objc_release(uVar8);
          _objc_release(uVar6);
          uVar11 = uVar11 + 1;
          uVar9 = *(ulong *)(lVar12 + lVar14);
          func_0x00010bf529e0();
        } while (uVar11 < uVar9);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b874438; end: 10b87460b; -[SIGTabBarView _constraintsToSelectionWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b874438(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar9 = (long)_DAT_1127952d8;
  uVar1 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010bf529e0(uVar1);
  func_0x00010bf0a0e0(puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_2 + lVar9);
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_2 + lVar9);
  if (lVar3 == 1) {
    func_0x00010c0dfd40(lVar4,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + _DAT_1127952c8);
    func_0x00010c2a5060(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010bf493a0(lVar3,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(lVar3);
    _objc_release(lVar4);
    func_0x00010befa120(puVar2,param_3,lVar9);
    _objc_release(lVar9);
  }
  else {
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      uVar8 = 0;
      dVar10 = 0.5;
      do {
        uVar1 = *(undefined8 *)(param_2 + lVar9);
        func_0x00010c0dfd40(uVar1,param_3,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0699c0();
        dVar10 = param_1 + dVar10;
        if (uVar8 == 0) {
LAB_10b874580:
          dVar10 = (dVar10 - param_1 * 0.5) + 16.0;
        }
        else {
          lVar3 = *(long *)(param_2 + lVar9);
          func_0x00010bf529e0();
          if (uVar8 == lVar3 - 1U) goto LAB_10b874580;
        }
        uVar5 = uVar1;
        func_0x00010c2a5060(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf49420(dVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010befa120(puVar2,param_3,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar1);
        uVar8 = uVar8 + 1;
        uVar7 = *(ulong *)(param_2 + lVar9);
        func_0x00010bf529e0();
      } while (uVar8 < uVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


