/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109148258; end: 109148287; -[SCSponsoredSlug setFont:] */

void FUN_109148258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109148288; end: 10914828f; -[SCSponsoredSlug fontSize] */

undefined8 FUN_109148288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109148290; end: 109148297; -[SCSponsoredSlug textColor] */

undefined8 FUN_109148290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109148298; end: 10914829f; -[SCSponsoredSlug dropshadowColor] */

undefined8 FUN_109148298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091482a0; end: 1091482a7; -[SCSponsoredSlug dropshadowOffset] */

undefined1  [16] FUN_1091482a0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x70);
}



/* Entry: 1091482a8; end: 1091482af; -[SCSponsoredSlug text] */

undefined8 FUN_1091482a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091482b0; end: 1091482b7; -[SCSponsoredSlug longformText] */

undefined8 FUN_1091482b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091482b8; end: 1091482bf; -[SCSponsoredSlug timeBeforeFadeout] */

undefined8 FUN_1091482b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091482c0; end: 1091482c7; -[SCSponsoredSlug longformTimeBeforeFadeout] */

undefined8 FUN_1091482c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091482c8; end: 1091482cf; -[SCSponsoredSlug hmargin] */

undefined8 FUN_1091482c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091482d0; end: 1091482d7; -[SCSponsoredSlug vmargin] */

undefined8 FUN_1091482d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1091482d8; end: 1091482df; -[SCSponsoredSlug position] */

undefined8 FUN_1091482d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1091482e0; end: 1091482e7; -[SCSponsoredSlug sponsoredText] */

undefined8 FUN_1091482e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1091482e8; end: 1091482ef; -[SCSponsoredSlug sponsoredChannelText] */

undefined8 FUN_1091482e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1091482f0; end: 10914838b; -[SCSponsoredSlug .cxx_destruct] */

void FUN_1091482f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10914838c; end: 10914884b; -[SCSponsoredSlugInteractiveView initWithSlug:tappablePadding:isLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10914838c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  _objc_retain(param_3);
  puStack_a8 = PTR_PTR_112700818;
  uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_b0;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(uVar12,uVar13,uVar14,uVar15,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
    func_0x00010c0bbfc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(puVar3);
    func_0x00010c17d4c0(puVar2);
    func_0x00010befbb60(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar11 = (long)_DAT_112782004;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined ***)((long)puVar1 + lVar11) = param_3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112782008) = 0x3fe0000000000000;
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
    lVar11 = (long)_DAT_11278200c;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar3;
    _objc_release(uVar12);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar3);
    ppuVar5 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    ppuVar7 = ppuVar5;
    if (ppuVar6 == (undefined **)0x0) {
      func_0x00010be54e60(puVar1);
      ppuVar7 = &PTR____CFConstantStringClassReference_110e44778;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e44778,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010c04e820();
    puVar8 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
    func_0x00010c1bdc00(0x3feccccccccccccd);
    func_0x00010c08fa60(ppuVar7);
    func_0x00010bef6f20(puVar3);
    func_0x00010c16b720(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010befbb60(puVar2);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar11);
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(uVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)((long)puVar1 + lVar11));
    puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar11 = (long)_DAT_112782010;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar9;
    _objc_release(uVar12);
    _objc_release(puVar10);
    func_0x00010befbb60(puVar2);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar11);
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(uVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(ppuVar7);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10914884c; end: 109148917;  */

void FUN_10914884c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109148918; end: 109148cdf;  */

void FUN_109148918(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x443b8000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(-*(double *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x443b8000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x443b8000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(-*(double *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x443b8000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
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



/* Entry: 109148ce0; end: 1091492cf;  */

void FUN_109148ce0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091492d0; end: 109149397; -[SCSponsoredSlugInteractiveView _logInvalidSponsoredSlugMetric:] */

void FUN_1091492d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c24a660(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 109149398; end: 1091493a7; -[SCSponsoredSlugInteractiveView slug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109149398(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782004);
}



/* Entry: 1091493a8; end: 1091493b7; -[SCSponsoredSlugInteractiveView fadeoutDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091493a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782008);
}



/* Entry: 1091493b8; end: 1091493c7; -[SCSponsoredSlugInteractiveView label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091493b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278200c);
}



/* Entry: 1091493c8; end: 109149407; -[SCSponsoredSlugInteractiveView setLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091493c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278200c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109149408; end: 109149417; -[SCSponsoredSlugInteractiveView icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109149408(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782010);
}



/* Entry: 109149418; end: 109149457; -[SCSponsoredSlugInteractiveView setIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109149418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782010;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109149458; end: 1091494a7; -[SCSponsoredSlugInteractiveView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109149458(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782010,0);
  _objc_storeStrong(param_1 + _DAT_11278200c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782004,0);
  return;
}



/* Entry: 1091494a8; end: 10914954b; -[SCStoryAdProgressBarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1091494a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112782014);
    *(undefined **)((long)puVar1 + (long)_DAT_112782014) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10914954c; end: 109149573; +[SCStoryAdProgressBarView unviewedSegmentColor] */

void FUN_10914954c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe570a3d70a3d71,0x3fe6147ae147ae14,0x3fe6b851eb851eb8,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 109149574; end: 1091497b3; -[SCStoryAdProgressBarView configureWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109149574(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112782018;
  uVar7 = *(ulong *)(param_1 + lVar8);
  _objc_retain(param_3);
  _objc_retain(uVar7);
  if (param_3 == uVar7) {
    _objc_release(uVar7);
    _objc_release(param_3);
  }
  else {
    if (uVar7 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar7);
      _objc_release(uVar7);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_109149784;
    }
    func_0x00010c26ac40(param_1);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = param_3;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar8);
    func_0x00010c276c00();
    if (0 < lVar3) {
      lVar3 = 0;
      uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      do {
        puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x00010c013de0(uVar2,uVar9,uVar10,uVar11);
        puVar5 = puVar4;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(0x3ff0000000000000);
        _objc_release(puVar5);
        lVar6 = *(long *)(param_1 + lVar8);
        func_0x00010bf600e0();
        if (lVar6 < lVar3) {
          puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf41620(0x3fe570a3d70a3d71,0x3fe6147ae147ae14,0x3fe6b851eb851eb8,
                              0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(puVar4,param_2,puVar5);
          _objc_release(puVar5);
          func_0x00010c1677c0(0x3fe70a3d70a3d70a,puVar4);
        }
        else {
          uVar7 = param_3;
          func_0x00010bf15b00(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(puVar4,param_2,uVar7);
          _objc_release(uVar7);
        }
        func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112782014),param_2,puVar4);
        func_0x00010befbb60(param_1,param_2,puVar4);
        _objc_release(puVar4);
        lVar3 = lVar3 + 1;
        lVar6 = *(long *)(param_1 + lVar8);
        func_0x00010c276c00();
      } while (lVar3 < lVar6);
    }
    func_0x00010c1cbe20(param_1);
  }
LAB_109149784:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091497b4; end: 1091498d3; -[SCStoryAdProgressBarView teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091497b4(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  long lStack_228;
  undefined *puStack_220;
  long lStack_198;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112782014;
  lVar3 = *(long *)(param_4 + lVar5);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010c12adc0(*(undefined8 *)(param_4 + lVar5));
  lVar1 = *(long *)(param_4 + _DAT_112782018);
  *(undefined8 *)(param_4 + _DAT_112782018) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = PTR_PTR_112700820;
  lStack_228 = lVar1;
  _objc_msgSendSuper2(&lStack_228,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(lVar1);
  lVar4 = (long)_DAT_112782018;
  lVar3 = *(long *)(lVar1 + lVar4);
  func_0x00010c276c00(lVar3);
  lVar5 = *(long *)(lVar1 + lVar4);
  func_0x00010c276c00(lVar5);
  lVar7 = *(long *)(lVar1 + _DAT_112782014);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (lVar2 != 0) {
    dVar9 = 12.0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar7);
        }
        uVar6 = *(undefined8 *)(lVar8 * 8);
        dVar9 = dVar9 + 4.0;
        func_0x00010bf20c00(lVar1);
        func_0x00010c19f0e0(dVar9,0,(param_3 + -32.0 + (double)(lVar3 + -1) * -4.0) / (double)lVar5,
                            uVar6);
        func_0x00010bfb68e0(uVar6);
        _CGRectGetMaxX();
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar7 + _DAT_112782018,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar7 + _DAT_112782014,0);
  return;
}



/* Entry: 1091498d4; end: 109149a87; -[SCStoryAdProgressBarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091498d4(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  long lStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_112700820;
  lStack_108 = param_4;
  _objc_msgSendSuper2(&lStack_108,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  lVar5 = (long)_DAT_112782018;
  lVar1 = *(long *)(param_4 + lVar5);
  func_0x00010c276c00(lVar1);
  lVar2 = *(long *)(param_4 + lVar5);
  func_0x00010c276c00(lVar2);
  lVar4 = *(long *)(param_4 + _DAT_112782014);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (lVar3 != 0) {
    dVar8 = 12.0;
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        uVar6 = *(undefined8 *)(lVar7 * 8);
        dVar8 = dVar8 + 4.0;
        func_0x00010bf20c00(param_4);
        func_0x00010c19f0e0(dVar8,0,(param_3 + -32.0 + (double)(lVar1 + -1) * -4.0) / (double)lVar2,
                            uVar6);
        func_0x00010bfb68e0(uVar6);
        _CGRectGetMaxX();
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar4 + _DAT_112782018,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4 + _DAT_112782014,0);
  return;
}



/* Entry: 109149a88; end: 109149ac7; -[SCStoryAdProgressBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109149a88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782018,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782014,0);
  return;
}



/* Entry: 109149ac8; end: 109149bc3; -[SCOperaAppStarRatingView initWithStarWidth:starOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109149ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112700828;
  uStack_60 = param_3;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278201c) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112782020) = param_2;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar4 = (long)_DAT_112782024;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    iVar5 = 5;
    do {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c182220();
      func_0x00010befa120(*(undefined8 *)((long)puVar1 + lVar4));
      func_0x00010befbb60(puVar1);
      _objc_release(puVar2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    func_0x00010c1cbe20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109149bc4; end: 109149c8b; -[SCOperaAppStarRatingView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109149bc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112700828;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar5 = (long)_DAT_112782024;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c0dfd20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      dVar6 = *(double *)(param_1 + _DAT_11278201c);
      func_0x00010c19f0e0((*(double *)(param_1 + _DAT_112782020) + dVar6) *
                          (double)(uVar4 & 0xffffffff),0,dVar6,dVar6);
      _objc_release(uVar2);
      uVar4 = uVar4 + 1;
      uVar3 = *(ulong *)(param_1 + lVar5);
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
  return;
}



/* Entry: 109149c8c; end: 109149cb3; -[SCOperaAppStarRatingView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_109149c8c(long param_1)

{
  return *(double *)(param_1 + _DAT_112782020) * 4.0 + *(double *)(param_1 + _DAT_11278201c) * 5.0;
}



/* Entry: 109149cb4; end: 109149d0b; -[SCOperaAppStarRatingView setAppRatingStarCount:tintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109149cb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  *(undefined8 *)(param_2 + _DAT_112782028) = param_1;
  uVar1 = *(undefined8 *)(param_2 + _DAT_11278202c);
  *(undefined8 *)(param_2 + _DAT_11278202c) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be760f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__populateStars_11257b1d8);
  return;
}



/* Entry: 109149d0c; end: 109149e7f; -[SCOperaAppStarRatingView _populateStars] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109149d0c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_112782024;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar8 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dfd20(uVar3,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      ppuVar1 = &PTR____CFConstantStringClassReference_110f24898;
      if (*(double *)(param_1 + _DAT_112782028) <= (double)(uVar8 & 0xffffffff)) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f248b8;
      }
      if ((double)((int)uVar8 + 1) <= *(double *)(param_1 + _DAT_112782028)) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f24878;
      }
      puVar4 = PTR_PTR_1126dd7e0;
      _objc_opt_class(PTR_PTR_1126dd7e0);
      func_0x00010bf249e0(puVar5,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8240(puVar6,param_2,ppuVar1,puVar5,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar6;
      if (*(long *)(param_1 + _DAT_11278202c) != 0) {
        func_0x00010c216160(uVar3);
        func_0x00010bfe9720(puVar6,param_2,2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      func_0x00010c1a9f00(uVar3,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar3);
      uVar7 = *(ulong *)(param_1 + lVar9);
      func_0x00010bf529e0();
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  return;
}



/* Entry: 109149e80; end: 109149fb7; -[SCOperaAppStarRatingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109149e80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782024,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278202c,0);
  return;
}



/* Entry: 109149fb8; end: 10914a043; -[SCStoryAdProgressBarViewModel initWithTotalSnapCount:currentSnapIndex:barColor:] */

undefined1 *
FUN_109149fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10914a044; end: 10914a067; -[SCStoryAdProgressBarViewModel copyWithZone:] */

undefined8 FUN_10914a044(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10914a068; end: 10914a0cf; -[SCStoryAdProgressBarViewModel hash] */

undefined8 * FUN_10914a068(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10914a164;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10914a164;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071c60();
      goto LAB_10914a164;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10914a164:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10914a0d0; end: 10914a17f; -[SCStoryAdProgressBarViewModel isEqual:] */

long FUN_10914a0d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10914a164;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10914a164;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071c60();
      goto LAB_10914a164;
    }
  }
  lVar3 = 1;
LAB_10914a164:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10914a180; end: 10914a187; -[SCStoryAdProgressBarViewModel totalSnapCount] */

undefined8 FUN_10914a180(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10914a188; end: 10914a18f; -[SCStoryAdProgressBarViewModel currentSnapIndex] */

undefined8 FUN_10914a188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10914a190; end: 10914a197; -[SCStoryAdProgressBarViewModel barColor] */

undefined8 FUN_10914a190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10914a198; end: 10914a1a3; -[SCStoryAdProgressBarViewModel .cxx_destruct] */

void FUN_10914a198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10914a1a4; end: 10914a1cf; +[SCGrapheneAdMetric requestFailedSubmitInfo] */

void FUN_10914a1a4(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a1d0; end: 10914a1fb; +[SCGrapheneAdMetric requestSize] */

void FUN_10914a1d0(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a1fc; end: 10914a227; +[SCGrapheneAdMetric idfaStatus] */

void FUN_10914a1fc(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a228; end: 10914a253; +[SCGrapheneAdMetric adTrackInfo] */

void FUN_10914a228(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a254; end: 10914a27f; +[SCGrapheneAdMetric adMediaCacheHit] */

void FUN_10914a254(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a280; end: 10914a2ab; +[SCGrapheneAdMetric adMediaDownload] */

void FUN_10914a280(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a2ac; end: 10914a2d7; +[SCGrapheneAdMetric adMediaLoadStatus] */

void FUN_10914a2ac(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a2d8; end: 10914a303; +[SCGrapheneAdMetric adMediaPayload] */

void FUN_10914a2d8(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a304; end: 10914a32f; +[SCGrapheneAdMetric adMediaFetchMethod] */

void FUN_10914a304(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a330; end: 10914a35b; +[SCGrapheneAdMetric targetingRequestStatus] */

void FUN_10914a330(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a35c; end: 10914a387; +[SCGrapheneAdMetric adPreferenceRequestStatus] */

void FUN_10914a35c(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a388; end: 10914a3b3; +[SCGrapheneAdMetric getBatteryDataLatency] */

void FUN_10914a388(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a3b4; end: 10914a3df; +[SCGrapheneAdMetric getDiskDataLatency] */

void FUN_10914a3b4(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a3e0; end: 10914a40b; +[SCGrapheneAdMetric initRefineLatencyMs] */

void FUN_10914a3e0(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a40c; end: 10914a437; +[SCGrapheneAdMetric initRefineStatus] */

void FUN_10914a40c(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a438; end: 10914a463; +[SCGrapheneAdMetric serveRefineLatencyMs] */

void FUN_10914a438(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a464; end: 10914a48f; +[SCGrapheneAdMetric serveRefineStatus] */

void FUN_10914a464(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a490; end: 10914a4bb; +[SCGrapheneAdMetric trackRefineLatencyMs] */

void FUN_10914a490(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a4bc; end: 10914a4e7; +[SCGrapheneAdMetric trackRefineStatus] */

void FUN_10914a4bc(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a4e8; end: 10914a513; +[SCGrapheneAdMetric pixelRefineLatencyMs] */

void FUN_10914a4e8(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a514; end: 10914a53f; +[SCGrapheneAdMetric pixelRefineStatus] */

void FUN_10914a514(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a540; end: 10914a56b; +[SCGrapheneAdMetric serveTriggerType] */

void FUN_10914a540(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a56c; end: 10914a597; +[SCGrapheneAdMetric trackRefineSize] */

void FUN_10914a56c(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a598; end: 10914a5c3; +[SCGrapheneAdMetric reinitFromWrongRegion] */

void FUN_10914a598(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a5c4; end: 10914a5ef; +[SCGrapheneAdMetric adRequestGateEudEmpty] */

void FUN_10914a5c4(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a5f0; end: 10914a61b; +[SCGrapheneAdMetric adRequestGateNoInit] */

void FUN_10914a5f0(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a61c; end: 10914a647; +[SCGrapheneAdMetric adRequestGateInitStale] */

void FUN_10914a61c(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a648; end: 10914a673; +[SCGrapheneAdMetric trackResponseError] */

void FUN_10914a648(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a674; end: 10914a69f; +[SCGrapheneAdMetric lateTrackSkip] */

void FUN_10914a674(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a6a0; end: 10914a6cb; +[SCGrapheneAdMetric lateTrackServeDelay] */

void FUN_10914a6a0(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a6cc; end: 10914a6f7; +[SCGrapheneAdMetric serveSerializeLatencyMs] */

void FUN_10914a6cc(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a6f8; end: 10914a723; +[SCGrapheneAdMetric serveSerializeStatus] */

void FUN_10914a6f8(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a724; end: 10914a74f; +[SCGrapheneAdMetric responseParsingLatencyMillis] */

void FUN_10914a724(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a750; end: 10914a77b; +[SCGrapheneAdMetric responseInfo] */

void FUN_10914a750(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a77c; end: 10914a7a7; +[SCGrapheneAdMetric responseSize] */

void FUN_10914a77c(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a7a8; end: 10914a7d3; +[SCGrapheneAdMetric skippableAdInfo] */

void FUN_10914a7a8(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a7d4; end: 10914a7ff; +[SCGrapheneAdMetric dataInvalid] */

void FUN_10914a7d4(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a800; end: 10914a82b; +[SCGrapheneAdMetric pixelCookieAvailability] */

void FUN_10914a800(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a82c; end: 10914a857; +[SCGrapheneAdMetric pixelPassSridStatus] */

void FUN_10914a82c(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a858; end: 10914a883; +[SCGrapheneAdMetric pixelPassSridLatency] */

void FUN_10914a858(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a884; end: 10914a8af; +[SCGrapheneAdMetric pixelSridSyncLatency] */

void FUN_10914a884(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a8b0; end: 10914a8db; +[SCGrapheneAdMetric pixelSridSyncStatus] */

void FUN_10914a8b0(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a8dc; end: 10914a907; +[SCGrapheneAdMetric pixelSridEmptyPixelId] */

void FUN_10914a8dc(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a908; end: 10914a933; +[SCGrapheneAdMetric pixelSridOnCookieId] */

void FUN_10914a908(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a934; end: 10914a95f; +[SCGrapheneAdMetric pixelGetSridLatency] */

void FUN_10914a934(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a960; end: 10914a98b; +[SCGrapheneAdMetric pixelHijackLatency] */

void FUN_10914a960(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a98c; end: 10914a9b7; +[SCGrapheneAdMetric pixelHijackStatus] */

void FUN_10914a98c(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a9b8; end: 10914a9e3; +[SCGrapheneAdMetric adInsertSuccess] */

void FUN_10914a9b8(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914a9e4; end: 10914aa0f; +[SCGrapheneAdMetric adInsertError] */

void FUN_10914a9e4(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914aa10; end: 10914aa3b; +[SCGrapheneAdMetric lastInsertedAdViewStatus] */

void FUN_10914aa10(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914aa3c; end: 10914aa67; +[SCGrapheneAdMetric cachedAd] */

void FUN_10914aa3c(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914aa68; end: 10914aa93; +[SCGrapheneAdMetric insertionRuleSource] */

void FUN_10914aa68(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10914aa94; end: 10914aabf; +[SCGrapheneAdMetric initialAdLoadingScreen] */

void FUN_10914aa94(void)

{
  _objc_alloc(PTR_PTR_1126b8d98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


