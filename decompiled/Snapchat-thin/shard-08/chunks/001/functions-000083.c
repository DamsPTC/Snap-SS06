/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d29238; end: 105d29243; -[SCPreviewFeatureAutoCaptionsImpl setMultiSnapDelegate:] */

void FUN_105d29238(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 105d29244; end: 105d2924b; -[SCPreviewFeatureAutoCaptionsImpl toolbarItemViewModel] */

undefined8 FUN_105d29244(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 105d2924c; end: 105d2938b; -[SCPreviewFeatureAutoCaptionsImpl .cxx_destruct] */

void FUN_105d2924c(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d2938c; end: 105d29523; -[SCPreviewFeatureAutoCaptionsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2938c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112734ccc;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4220;
  _objc_alloc(PTR_PTR_1126c4220);
  func_0x00010bff5ba0();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112734cec);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105d29524; end: 105d2975f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d29524(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
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
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e820();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar3 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar19 = PTR_PTR_1126c4218;
      _objc_alloc();
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112734cf0);
      uVar17 = *(undefined8 *)(param_1 + 0x20);
      lVar18 = (long)_DAT_112734cd0;
      _objc_retain();
      lVar18 = lVar3 + lVar18;
      _objc_loadWeakRetained();
      lVar5 = lVar18;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3 + _DAT_112734cd0;
      _objc_loadWeakRetained();
      lVar7 = lVar6;
      func_0x00010c29a700();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3 + _DAT_112734cd4;
      _objc_loadWeakRetained(lVar8);
      lVar9 = lVar3 + _DAT_112734cd8;
      _objc_loadWeakRetained();
      lVar10 = lVar9;
      func_0x00010c0dc640();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3 + _DAT_112734cdc;
      _objc_loadWeakRetained();
      lVar12 = lVar3 + _DAT_112734ce0;
      _objc_loadWeakRetained();
      lVar13 = lVar3 + _DAT_112734ce4;
      _objc_loadWeakRetained();
      lVar14 = lVar13;
      func_0x00010c2a0940();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar3 + _DAT_112734ce8;
      _objc_loadWeakRetained();
      lVar16 = lVar15;
      func_0x00010c29b9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff5c40(puVar19,param_2,uVar4,uVar17,lVar5,lVar7,lVar8,lVar10,lVar11,lVar12,lVar14
                          ,lVar16);
      _objc_release(uVar4);
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
      _objc_release(lVar18);
    }
    _objc_release(lVar3);
  }
  else {
    puVar19 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 105d29760; end: 105d297ff; -[SCPreviewFeatureAutoCaptionsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d29760(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734cf0,0);
  _objc_storeStrong(param_1 + _DAT_112734cec,0);
  _objc_destroyWeak(param_1 + _DAT_112734ce8);
  _objc_destroyWeak(param_1 + _DAT_112734ce4);
  _objc_destroyWeak(param_1 + _DAT_112734ce0);
  _objc_destroyWeak(param_1 + _DAT_112734cdc);
  _objc_destroyWeak(param_1 + _DAT_112734cd8);
  _objc_destroyWeak(param_1 + _DAT_112734cd4);
  _objc_destroyWeak(param_1 + _DAT_112734cd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734ccc);
  return;
}



/* Entry: 105d29800; end: 105d298ab; -[SCPreviewFeatureAutoCaptionsServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d29800(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734cf4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734cfc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf11400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d298ac; end: 105d298ef; -[SCPreviewFeatureAutoCaptionsServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d298ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734cfc);
  _objc_destroyWeak(param_1 + _DAT_112734cf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734cf4);
  return;
}



/* Entry: 105d298f0; end: 105d2999b; -[SCPreviewFeatureAutoCaptionsToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d298f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734d00;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734d08;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf11400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d2999c; end: 105d299df; -[SCPreviewFeatureAutoCaptionsToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2999c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734d08);
  _objc_destroyWeak(param_1 + _DAT_112734d04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734d00);
  return;
}



/* Entry: 105d299e0; end: 105d29a0f;  */

void FUN_105d299e0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e28df8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e28df8,
                      &PTR____CFConstantStringClassReference_110e28e18,0);
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



/* Entry: 105d29a10; end: 105d29b63; -[SCAutoCreativeFilterTooltipView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105d29a10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ecf60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_112734d0c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010bee5fe0(puVar1);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_112734d10;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010be5b160(puVar1);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    func_0x00010c21e900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105d29b64; end: 105d29c9b; -[SCAutoCreativeFilterTooltipView configureWithTooltipMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d29b64(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6950;
  _objc_alloc();
  dVar6 = *(double *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar6,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112734d14;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  dVar5 = 13.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2133e0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c21a1c0(uVar2,param_2,1);
  if (param_3 == 0) {
    func_0x000108edeb88();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  }
  func_0x00010becd240(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  lVar3 = (long)_DAT_112734d18;
  func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar4));
  *(double *)(param_1 + lVar3) = dVar5;
  ((double *)(param_1 + lVar3))[1] = dVar6;
  lVar4 = (long)_DAT_112734d1c;
  *(double *)(param_1 + lVar4) = dVar5 + 20.0;
  ((double *)(param_1 + lVar4))[1] = dVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d29c9c; end: 105d29d47; -[SCAutoCreativeFilterTooltipView startAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d29c9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2559e0();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112734d10));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112734d0c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112734d14));
  *(undefined8 *)(param_1 + _DAT_112734d20) = 0;
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112734d24;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bfb0060(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdca8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateArrowViews_1125503d8);
  return;
}



/* Entry: 105d29d48; end: 105d29d87; -[SCAutoCreativeFilterTooltipView stopAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d29d48(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112734d24;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAnimations_112580708);
  return;
}



/* Entry: 105d29d88; end: 105d29dcf; -[SCAutoCreativeFilterTooltipView _animateBounceViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d29d88(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + _DAT_112734d20) + 1;
  *(ulong *)(param_1 + _DAT_112734d20) = uVar1;
  if (3 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c2559f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopAnimations_1126730a0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdca9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112734d18),((undefined8 *)(param_1 + _DAT_112734d18))[1]
             ,*(undefined8 *)(param_1 + _DAT_112734d1c),
             ((undefined8 *)(param_1 + _DAT_112734d1c))[1],param_1,
             PTR_s__animateBounceView_startCenter_e_112550408,
             *(undefined8 *)(param_1 + _DAT_112734d14));
  return;
}



/* Entry: 105d29dd0; end: 105d29e13; -[SCAutoCreativeFilterTooltipView _animateArrowViews] */

/* WARNING: Possible PIC construction at 0x000105d29df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d29df8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d29dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdca8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s__animateArrowView_delay__1125503d0,
             *(undefined8 *)(param_1 + _DAT_112734d0c));
  return;
}



/* Entry: 105d29e14; end: 105d29e93; -[SCAutoCreativeFilterTooltipView _removeAnimations] */

/* WARNING: Possible PIC construction at 0x000105d29e6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d29e70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d29e14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_112734d14) != 0) {
    func_0x00010c103b20();
  }
  if (*(long *)(param_1 + _DAT_112734d0c) != 0) {
    func_0x00010c103b20();
  }
  lVar2 = (long)_DAT_112734d10;
  uVar1 = 0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c103b20();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 105d29e94; end: 105d29ecb; -[SCAutoCreativeFilterTooltipView _upperTeachingArrowViewFrame] */

undefined8 FUN_105d29e94(void)

{
  func_0x00010bf20c00();
  _CGRectGetHeight();
  return 0x4028000000000000;
}



/* Entry: 105d29ecc; end: 105d29eff; -[SCAutoCreativeFilterTooltipView _lowerTeachingArrowViewFrame] */

undefined8 FUN_105d29ecc(void)

{
  func_0x00010bf20c00();
  _CGRectGetHeight();
  return 0x4028000000000000;
}



/* Entry: 105d29f00; end: 105d29f6b; -[SCAutoCreativeFilterTooltipView _tooltipBalloonViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105d29f00(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112734d14;
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  return 0x4028000000000000;
}



/* Entry: 105d29f6c; end: 105d2a1df; -[SCAutoCreativeFilterTooltipView _animateBounceView:startCenter:endCenter:] */

void FUN_105d29f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  if (param_7 != 0) {
    puVar1 = PTR_PTR_1126c4228;
    func_0x00010bf04100(PTR_PTR_1126c4228,param_6,&PTR____CFConstantStringClassReference_110ee4258);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar1,param_6,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1,param_6,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc0c0(0x3e800000,0x3dcccccd,0x3c23d70a,0x3f7d70a4,
                        PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1,param_6,puVar2);
    _objc_release(puVar2);
    func_0x00010c192d40(0x3ff0000000000000,puVar1);
    func_0x00010c1ea580(puVar1,param_6,0);
    func_0x00010c103a40(param_7,param_6,puVar1,&PTR____CFConstantStringClassReference_110daf598);
    puVar2 = PTR_PTR_1126c4230;
    func_0x00010bf04100(PTR_PTR_1126c4230,param_6,&PTR____CFConstantStringClassReference_110ee4258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193240(0x4077c00000000000);
    func_0x00010c193200(0x4034000000000000,puVar2);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar2,param_6,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar2,param_6,puVar3);
    _objc_release(puVar3);
    func_0x00010c1ea580(puVar2,param_6,0);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105d2a1e0;
    puStack_78 = &UNK_1108e6420;
    _objc_retain(param_7);
    lStack_70 = param_7;
    puStack_68 = puVar2;
    _objc_retain(puVar2);
    func_0x00010c17fb40(puVar1,param_6,&puStack_90);
    _objc_release(puStack_68);
    _objc_release(lStack_70);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 105d2a1e0; end: 105d2a1fb;  */

void FUN_105d2a1e0(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c103a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_pop_addAnimation_forKey__11261e8b0,
               *(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110e28e58);
    return;
  }
  return;
}



/* Entry: 105d2a1fc; end: 105d2a4ff; -[SCAutoCreativeFilterTooltipView _animateArrowView:delay:] */

void FUN_105d2a1fc(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
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
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126c4228;
    func_0x00010bf04100(PTR_PTR_1126c4228,param_3,&PTR____CFConstantStringClassReference_110ee42b8);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = 0.9;
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(0x3feccccccccccccd,0x3feccccccccccccd,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    dVar5 = 0.7;
    func_0x00010c192d40(0x3fe6666666666666,puVar1);
    _CACurrentMediaTime();
    func_0x00010c16fd40(param_1 + dVar5,puVar1);
    func_0x00010c1ea580(puVar1,param_3,0);
    func_0x00010c1eabe0(puVar1);
    func_0x00010c103a40(param_4,param_3,puVar1,&PTR____CFConstantStringClassReference_110e28e78);
    puVar3 = PTR_PTR_1126c4228;
    func_0x00010bf04100(PTR_PTR_1126c4228,param_3,&PTR____CFConstantStringClassReference_110ee42b8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar3,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(0x3feccccccccccccd,0x3feccccccccccccd,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar3,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    _CACurrentMediaTime();
    func_0x00010c16fd40(param_1 + dVar4 + 0.7,puVar3);
    func_0x00010c1ea580(puVar3,param_3,0);
    func_0x00010c1eabe0(puVar3);
    func_0x00010c103a40(param_4,param_3,puVar3,&PTR____CFConstantStringClassReference_110e28e98);
    func_0x00010c27a460(&uStack_a0,param_4);
    func_0x00010c1677c0(0,param_4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_105d2a500;
    puStack_e0 = &UNK_1108700e8;
    _objc_retain(param_4);
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    lStack_d8 = param_4;
    func_0x00010bf02ee0(0x3ff4cccccccccccd,param_1,puVar2,param_3,8,&puStack_f8,0);
    _objc_release(lStack_d8);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105d2a500; end: 105d2a647;  */

void FUN_105d2a500(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105d2a648;
  puStack_70 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_68 = uVar3;
  func_0x00010bef95a0(0,0x3fe0000000000000,puVar2,param_2,&puStack_88);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105d2a654;
  puStack_98 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_90 = uVar3;
  func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,puVar2,param_2,&puStack_b0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105d2a660;
  puStack_f0 = &UNK_1108700e8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_d8 = *(undefined8 *)(param_1 + 0x30);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  uStack_c8 = *(undefined8 *)(param_1 + 0x40);
  uStack_d0 = *(undefined8 *)(param_1 + 0x38);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  uStack_c0 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = uVar3;
  func_0x00010bef95a0(0,0x3ff0000000000000,puVar2,param_2,&puStack_108);
  _objc_release(uStack_e8);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  return;
}



/* Entry: 105d2a648; end: 105d2a65f;  */

void FUN_105d2a648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d2a660; end: 105d2a6c7;  */

void FUN_105d2a660(long param_1,undefined8 param_2)

{
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  _CGAffineTransformTranslate(&uStack_50,0x4036000000000000,0,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 105d2a6c8; end: 105d2a727; -[SCAutoCreativeFilterTooltipView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2a6c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734d24,0);
  _objc_storeStrong(param_1 + _DAT_112734d10,0);
  _objc_storeStrong(param_1 + _DAT_112734d0c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734d14,0);
  return;
}



/* Entry: 105d2a728; end: 105d2a7f3; -[SCPreviewFeatureAutoCreativeTooltipManager initWithAutoCreativeUIManager:userPreferences:commonLoggingParamsBuilder:] */

undefined1 *
FUN_105d2a728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ecf68;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d2a7f4; end: 105d2a7fb; -[SCPreviewFeatureAutoCreativeTooltipManager responderChainPriority] */

undefined8 FUN_105d2a7f4(void)

{
  return 0x7fffffff;
}



/* Entry: 105d2a7fc; end: 105d2a937; -[SCPreviewFeatureAutoCreativeTooltipManager shouldSelectAutoCreativeFilter:] */

undefined8 FUN_105d2a7fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010c273d60();
  _objc_retainAutoreleasedReturnValue();
  if (((lVar7 != 0) && (*(long *)(param_1 + 0x18) == 0)) && ((*(byte *)(param_1 + 0x28) & 1) == 0))
  {
    lVar1 = param_3;
    func_0x00010bfadea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51a40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf32760(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010beb67a0(param_1,param_2,lVar1,lVar3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar7);
    if ((int)lVar6 == 0) goto LAB_105d2a910;
    _objc_retain(param_3);
    lVar7 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
  }
  _objc_release(lVar7);
LAB_105d2a910:
  _objc_release(param_3);
  return 0;
}



/* Entry: 105d2a938; end: 105d2a9cf; -[SCPreviewFeatureAutoCreativeTooltipManager autoCreativeFilterBecameReady:] */

void FUN_105d2a938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfadea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010bf11580(*(undefined8 *)(param_1 + 8),param_2,param_1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d2a9d0; end: 105d2ab37; -[SCPreviewFeatureAutoCreativeTooltipManager autoCreativeUIDelegate:didDrawUIForCreativeFilter:] */

void FUN_105d2a9d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = *(undefined **)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar3 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar2);
    puVar2 = puVar5;
    if (((ulong)puVar3 & 1) != 0) goto LAB_105d2aa4c;
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_release(puVar5);
LAB_105d2aa4c:
  puVar5 = puVar2;
  func_0x00010c0d3c80(puVar2);
  uVar4 = param_4;
  func_0x00010bfadea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
  puVar3 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfadea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8d20(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c2bcf40(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d2ab38; end: 105d2ab5f; -[SCPreviewFeatureAutoCreativeTooltipManager selectedFilter] */

void FUN_105d2ab38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d2ab60; end: 105d2ab63; -[SCPreviewFeatureAutoCreativeTooltipManager startImageClassification:] */

void FUN_105d2ab60(void)

{
  return;
}



/* Entry: 105d2ab64; end: 105d2ab6b; -[SCPreviewFeatureAutoCreativeTooltipManager iOSMediaFiltersApplicable] */

undefined8 FUN_105d2ab64(void)

{
  return 0;
}



/* Entry: 105d2ab6c; end: 105d2ab6f; -[SCPreviewFeatureAutoCreativeTooltipManager blockAutoCreative] */

void FUN_105d2ab6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__preventOrDismissAutoCreativeFil_11257d898);
  return;
}



/* Entry: 105d2ab70; end: 105d2ab77; -[SCPreviewFeatureAutoCreativeTooltipManager configureWithView:] */

void FUN_105d2ab70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf47d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_configureWithView__1125af8f0);
  return;
}



/* Entry: 105d2ab78; end: 105d2ab7b; -[SCPreviewFeatureAutoCreativeTooltipManager didTapOnToolbarItem] */

void FUN_105d2ab78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__preventOrDismissAutoCreativeFil_11257d898);
  return;
}



/* Entry: 105d2ab7c; end: 105d2ab7f; -[SCPreviewFeatureAutoCreativeTooltipManager didTapSendButton] */

void FUN_105d2ab7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__preventOrDismissAutoCreativeFil_11257d898);
  return;
}



/* Entry: 105d2ab80; end: 105d2ab83; -[SCPreviewFeatureAutoCreativeTooltipManager didBeginGesture:] */

void FUN_105d2ab80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__preventOrDismissAutoCreativeFil_11257d898);
  return;
}



/* Entry: 105d2ab84; end: 105d2ab9b; -[SCPreviewFeatureAutoCreativeTooltipManager didTapPreviewContainerView:] */

undefined8 FUN_105d2ab84(void)

{
  func_0x00010be7fbe0();
  return 1;
}



/* Entry: 105d2ab9c; end: 105d2abeb; -[SCPreviewFeatureAutoCreativeTooltipManager _preventOrDismissAutoCreativeFilter] */

void FUN_105d2ab9c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_autoCreativeManagerDismissUI__1125a1f10);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf115a0(*(undefined8 *)(param_1 + 8));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 105d2abec; end: 105d2aea3; -[SCPreviewFeatureAutoCreativeTooltipManager _shouldShowTooltipForFilterId:cooldownPeriod:carouselGroup:] */

long FUN_105d2abec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
joined_r0x000105d2ac98:
  if (uVar3 == 0) {
    _objc_release(uVar1);
    lVar9 = param_5;
    func_0x00010c0720c0(param_5);
LAB_105d2ae3c:
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return lVar9;
    }
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x20,0);
    _objc_storeStrong(param_3 + 0x18,0);
    _objc_storeStrong(param_3 + 0x10,0);
    param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
    return param_3;
  }
  uVar8 = 0;
LAB_105d2acb8:
  if (lRam0000000000000000 != lVar9) {
    _objc_enumerationMutation(uVar1);
  }
  uVar10 = *(ulong *)(uVar8 * 8);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar5 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar4);
  if (((uVar5 & 1) == 0) || (uVar5 = uVar10, func_0x00010c083d00(), (uVar5 & 1) == 0)) {
    func_0x00010c12d3e0(uVar2);
    uVar5 = uVar2;
    func_0x00010bf51e00(uVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    uVar5 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar4);
    if ((uVar5 & 1) == 0) goto LAB_105d2add4;
    uVar5 = uVar10;
    func_0x00010c083d00();
    if (((int)uVar5 != 0) && (uVar5 = uVar10, func_0x00010c083d00(), (int)uVar5 != 0)) {
      func_0x00010c083d00(uVar10);
    }
    uVar5 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    if (((uVar6 & 1) != 0) && (uVar6 = uVar5, func_0x00010c0720c0(), (int)uVar6 != 0)) {
      func_0x00010c2827c0(param_4);
      func_0x00010c083d20();
      if ((int)uVar10 == 0) goto LAB_105d2adcc;
      _objc_release(uVar5);
      _objc_release(uVar1);
      lVar9 = 0;
      goto LAB_105d2ae3c;
    }
  }
LAB_105d2adcc:
  _objc_release(uVar5);
LAB_105d2add4:
  uVar8 = uVar8 + 1;
  if (uVar3 == uVar8) goto code_r0x000105d2ade0;
  goto LAB_105d2acb8;
code_r0x000105d2ade0:
  uVar3 = uVar1;
  func_0x00010bf52a60();
  goto joined_r0x000105d2ac98;
}



/* Entry: 105d2aea4; end: 105d2aeeb; -[SCPreviewFeatureAutoCreativeTooltipManager .cxx_destruct] */

void FUN_105d2aea4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d2aeec; end: 105d2b097; -[SCPreviewFeatureAutoCreativeTooltipServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2aeec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126c4238;
  _objc_alloc_init();
  _objc_initWeak(auStack_48,param_1);
  lVar2 = param_1 + _DAT_112734d3c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c22f300();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126ae720;
  uStack_50 = (undefined1)lVar5;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c4248;
  _objc_alloc(PTR_PTR_1126c4248);
  func_0x00010bff5c60();
  uVar8 = 0;
  if (param_1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_112734d50);
  }
  _objc_retain(uVar8);
  func_0x00010bf9d660(uVar8);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 105d2b098; end: 105d2b21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2b098(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puVar9 = PTR_PTR_1126c4240;
    _objc_alloc(PTR_PTR_1126c4240);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar1 + _DAT_112734d48;
      _objc_loadWeakRetained(lVar8);
    }
    lVar2 = lVar8;
    func_0x00010c1067a0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = param_1 + _DAT_112734d4c;
      _objc_loadWeakRetained(lVar10);
    }
    lVar4 = lVar10;
    func_0x00010c0b3920(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5c80(puVar9,param_2,uVar7,lVar3,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105d2b21c; end: 105d2b287; -[SCPreviewFeatureAutoCreativeTooltipServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2b21c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734d50,0);
  _objc_destroyWeak(param_1 + _DAT_112734d4c);
  _objc_destroyWeak(param_1 + _DAT_112734d3c);
  _objc_destroyWeak(param_1 + _DAT_112734d48);
  _objc_destroyWeak(param_1 + _DAT_112734d44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734d40);
  return;
}



/* Entry: 105d2b288; end: 105d2b333; -[SCPreviewFeatureAutoCreativeTooltipServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2b288(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734d54;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734d5c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf115c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d2b334; end: 105d2b377; -[SCPreviewFeatureAutoCreativeTooltipServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2b334(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734d5c);
  _objc_destroyWeak(param_1 + _DAT_112734d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734d54);
  return;
}



/* Entry: 105d2b378; end: 105d2b493; -[SCPreviewFeatureAutoCreativeTooltipUI autoCreativeManager:drawUIForCreativeFilter:] */

void FUN_105d2b378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c4250;
    _objc_alloc();
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf20c00();
    func_0x00010c013de0();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = param_4;
    func_0x00010c273d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47c80(uVar5,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar4);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010befbb60();
    _objc_release(lVar1);
    func_0x00010c24ddc0(*(undefined8 *)(param_1 + 0x10));
    func_0x00010bf115e0(param_3,param_2,param_1,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d2b494; end: 105d2b49b; -[SCPreviewFeatureAutoCreativeTooltipUI autoCreativeManagerDismissUI:] */

void FUN_105d2b494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2559f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_stopAnimations_1126730a0);
  return;
}



/* Entry: 105d2b49c; end: 105d2b4a7; -[SCPreviewFeatureAutoCreativeTooltipUI configureWithView:] */

void FUN_105d2b49c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 105d2b4a8; end: 105d2b4d3; -[SCPreviewFeatureAutoCreativeTooltipUI .cxx_destruct] */

void FUN_105d2b4a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d2b4d4; end: 105d2bcdf; -[SCPreviewFeatureBatchCaptureImpl initWithAutoCaptions:previewScopeServices:caption:circumstanceEngine:commonLoggingParamsBuilder:configuration:drawing:ephemeralMediaFactory:featureSettingsService:galleryStorySaver:genericAssetsRegistry:imageProcessCommandProvider:legacyCameraActiveVideoPath:overlayFormatServices:previewCameraSourceOverlayService:previewTooltipsServices:snapCrop:snapVideoFilterFactory:snapVideoFilterCoordinator:stickerContainer:filterMetadataProvider:videoFilterStateController:timer:userInfoServices:userSession:userTagging:viewportController:videoPlayback:videoThumbnailGenerator:videoTrackingServices:webAttachment:stickerInjector:ctpItemViewService:previewLoggingServices:previewABProvider:snapEditorTweaks:] */

undefined8 *
FUN_105d2b4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain();
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain();
  puStack_70 = PTR_PTR_1126ecf70;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_6);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_17;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_8);
    uVar2 = param_18;
    func_0x00010c274120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_18);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[8];
    puVar1[8] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[9];
    puVar1[9] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[6];
    puVar1[6] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[7];
    puVar1[7] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_38;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = param_13;
    func_0x00010bfc0e40(param_13);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105d2bce0; end: 105d2bd97;  */

void FUN_105d2bce0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c06d080();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5fa80();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x170);
      func_0x00010c0d2420(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf73220();
      _objc_release(uVar3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d2bd98; end: 105d2bf6b; -[SCPreviewFeatureBatchCaptureImpl snapEditor:updateLoggingWithBuilder:] */

undefined8 FUN_105d2bd98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bf16ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c4258;
    _objc_opt_new(PTR_PTR_1126c4258);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      puVar7 = puVar3;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lVar8 * 8);
        func_0x00010bf42a40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar7;
        func_0x00010717b5b8(puVar7,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(uVar5);
        lVar8 = lVar8 + 1;
        puVar7 = puVar3;
      } while (lVar2 != lVar8);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x000107176780(puVar3,param_4);
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_4;
  }
  ___stack_chk_fail();
  return 0x7fffffff;
}



/* Entry: 105d2bf6c; end: 105d2bf73; -[SCPreviewFeatureBatchCaptureImpl responderChainPriority] */

undefined8 FUN_105d2bf6c(void)

{
  return 0x7fffffff;
}



/* Entry: 105d2bf74; end: 105d2c057; -[SCPreviewFeatureBatchCaptureImpl setupBatchCaptureWithPlayerHandler:] */

void FUN_105d2bf74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x20,param_3);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010befa300(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105d2c058; end: 105d2c15b;  */

void FUN_105d2c058(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c06d080();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      puVar3 = PTR_PTR_1126c4260;
      _objc_alloc(PTR_PTR_1126c4260);
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar4 = lVar1;
      func_0x00010bf167e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c001c60(puVar3,param_2,lVar4,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar4);
      _objc_release(lVar1);
      puVar5 = puVar3;
      func_0x00010c29bf00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d4a0();
      _objc_release(puVar5);
      func_0x00010c18b5e0(puVar3,param_2,param_1);
      func_0x00010be868a0(param_1,param_2,puVar3);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d2c15c; end: 105d2c373; -[SCPreviewFeatureBatchCaptureImpl batchCaptureFirstFrameRenderedForFrameSourceAtIndex:] */

void FUN_105d2c15c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    puVar14 = &uStack_a0;
    uVar1 = *(ulong *)(param_1 + 0x168);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (param_3 < uVar3) {
      func_0x00010bfa4dc0(*(undefined8 *)(param_1 + 0x168),param_2,param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x170);
      func_0x00010c0d2420(uVar4,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c09df80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfd68c0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((int)uVar7 == 0) {
        lVar8 = *(long *)(param_1 + 0x168);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf529e0();
        _objc_release(lVar9);
        _objc_release(lVar8);
        puVar11 = *(undefined1 **)(param_1 + 0x168);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar11);
        if (((param_3 == 0) && (lVar10 == 1)) &&
           (puVar12 = puVar13, func_0x00010c083320(), (int)puVar12 != 0)) {
          puVar12 = puVar13;
          func_0x00010bf8c620();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar12;
          func_0x00010bf529e0();
          if (puVar13 == (undefined1 *)0x0) {
            uStack_68 = 0;
            uStack_70 = 0;
            uStack_58 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            func_0x00010c09e0e0(&uStack_80,puVar13);
          }
          uStack_98 = uStack_60;
          uStack_a0 = uStack_68;
          uStack_90 = uStack_58;
          func_0x000108cde484();
          _objc_release(puVar12);
          if ((undefined8 *)puVar11 != puVar14) {
            func_0x00010bee2160(param_1,param_2,0,0);
          }
        }
        _objc_release(puVar13);
      }
      else {
        func_0x00010bed6760(param_1);
      }
      _objc_release(uVar4);
    }
  }
  return;
}



/* Entry: 105d2c374; end: 105d2c4a7; -[SCPreviewFeatureBatchCaptureImpl _updateThumbnailsForSegmentAtIndex:snapIndex:] */

void FUN_105d2c374(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_3 < 0x7fffffffffffffff) {
    uVar1 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar3);
    func_0x00010bdd2d00(param_1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 105d2c4a8; end: 105d2c5ff;  */

void FUN_105d2c4a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x105d2c56c;
    puStack_50 = &UNK_110848ba8;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = lVar1;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    _objc_retain(param_2);
    uStack_38 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105d2c600; end: 105d2ce2b; -[SCPreviewFeatureBatchCaptureImpl _batchCaptureEditedThumbnailsAtSegmentIndex:snapIndex:completion:] */

void FUN_105d2c600(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  double *pdVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  double dVar16;
  undefined8 uVar17;
  double *pdVar18;
  double dVar19;
  double dVar20;
  undefined *puStack_258;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  double *pdStack_178;
  double dStack_170;
  double *pdStack_168;
  undefined8 uStack_160;
  double dStack_158;
  double *pdStack_150;
  undefined8 uStack_148;
  double dStack_140;
  double *pdStack_138;
  undefined8 uStack_130;
  double dStack_120;
  double *pdStack_118;
  undefined8 uStack_110;
  double dStack_100;
  double *pdStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  double *pdStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c0d2420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105d2ce2c;
  puStack_b0 = &UNK_1108e64c0;
  _objc_retain(uVar2);
  uStack_a8 = uVar2;
  lStack_a0 = param_1;
  _objc_retain(uVar3);
  uStack_98 = uVar3;
  _objc_retain(param_5);
  ppuVar4 = &puStack_c8;
  uStack_90 = param_5;
  _objc_retainBlock();
  puVar5 = *(undefined **)(param_1 + 0x168);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar7;
  func_0x00010c083320();
  puVar6 = PTR_PTR_1126c4270;
  if ((int)puVar5 == 0) {
    _objc_retain(puVar7);
    _objc_opt_class(puVar6);
    puVar5 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar6);
    puStack_258 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puStack_258 = (undefined *)0x0;
    }
    _objc_retain(puStack_258);
    _objc_release(puVar7);
    _objc_initWeak(&dStack_100,param_1);
    _objc_initWeak(&dStack_170,puStack_258);
    puVar6 = puStack_258;
    func_0x00010c26db40(puStack_258);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_220,&dStack_100);
    _objc_copyWeak(auStack_218,&dStack_170);
    _objc_retain(uVar1);
    ppuVar8 = ppuVar4;
    uStack_210 = param_4;
    _objc_retain(ppuVar4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar6);
    _objc_release(ppuVar8);
    _objc_release(puVar6);
    _objc_release(ppuVar4);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_218);
    _objc_destroyWeak(auStack_220);
    _objc_destroyWeak(&dStack_170);
    _objc_destroyWeak(&dStack_100);
  }
  else {
    puVar6 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained();
    puStack_258 = puVar6;
    func_0x00010bf5fa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    if (puStack_258 == (undefined *)0x0) {
      puVar5 = puVar7;
      func_0x00010bf0b7e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0b9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puStack_258 = puVar6;
    }
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      dStack_e8 = 0.0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      pdStack_e0 = (double *)0x0;
      pdStack_f8 = (double *)0x0;
      dStack_100 = 0.0;
    }
    else {
      func_0x00010c09e0e0(&dStack_100,puVar7);
    }
    pdStack_168 = pdStack_e0;
    dStack_170 = dStack_e8;
    uStack_160 = uStack_d8;
    pdVar9 = &dStack_170;
    func_0x000108cde484();
    pdStack_118 = pdStack_f8;
    dStack_120 = dStack_100;
    uStack_110 = uStack_f0;
    dVar20 = dStack_100;
    if (0 < (long)pdVar9) {
      pdVar18 = (double *)0x0;
      do {
        pdStack_138 = pdStack_e0;
        dStack_140 = dStack_e8;
        uStack_130 = uStack_d8;
        _CMTimeMultiplyByRatio(&dStack_170,&dStack_140,pdVar18,pdVar9);
        pdStack_138 = pdStack_118;
        dStack_140 = dStack_120;
        uStack_130 = uStack_110;
        _CMTimeAdd(&dStack_120,&dStack_140,&dStack_170);
        pdStack_168 = pdStack_118;
        dStack_170 = dStack_120;
        uStack_160 = uStack_110;
        puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        dVar20 = dStack_120;
        func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x00010befa120(puVar5);
        _objc_release(puVar10);
        pdVar18 = (double *)((long)pdVar18 + 1);
      } while (pdVar9 != pdVar18);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126c4268;
    func_0x00010aefb480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010aefb4f8();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010aefb580(puVar10,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971c0(dVar20 * 35.0,dVar20 * 62.0,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010aefb608(puVar10,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    pdStack_168 = pdStack_f8;
    dStack_170 = dStack_100;
    dStack_158 = dStack_e8;
    uStack_160 = uStack_f0;
    uStack_148 = uStack_d8;
    pdStack_150 = pdStack_e0;
    puVar12 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010aefb5c4(puVar10,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar10;
    func_0x00010aefb690(puVar10,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184490);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010aefb4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bfc05a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar14;
    _objc_release(uVar17);
    _objc_release();
    _dispatch_group_create();
    lVar13 = *(long *)(param_1 + 0x68);
    func_0x00010bf529e0();
    if (lVar13 != 0) {
      dVar19 = 0.0;
      do {
        dStack_170 = 0.0;
        uStack_160 = 0x2020000000;
        uVar14 = *(undefined8 *)(param_1 + 0x68);
        pdStack_168 = &dStack_170;
        dStack_158 = dVar19;
        func_0x00010c0dfd40(uVar14);
        _objc_retainAutoreleasedReturnValue();
        _dispatch_group_enter(puVar12);
        puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a0 = 0xc2000000;
        pcStack_198 = FUN_105d2d3c0;
        puStack_190 = &UNK_1108e64f0;
        _objc_retain(puVar5);
        puVar15 = puVar12;
        puStack_188 = puVar5;
        pdStack_178 = &dStack_170;
        _objc_retain(puVar12);
        puStack_180 = puVar12;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar14);
        _objc_release(puVar15);
        _objc_release(puStack_180);
        _objc_release(puStack_188);
        _objc_release(uVar14);
        __Block_object_dispose(&dStack_170,8);
        dVar19 = (double)((long)dVar19 + 1);
        dVar16 = *(double *)(param_1 + 0x68);
        func_0x00010bf529e0();
      } while ((ulong)dVar19 < (ulong)dVar16);
    }
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_105d2d400;
    puStack_1f0 = &UNK_1108e6550;
    _objc_retain(uVar1);
    uStack_1e8 = uVar1;
    lStack_1e0 = param_1;
    uStack_1c0 = param_4;
    dStack_1b8 = dVar20 * 35.0;
    dStack_1b0 = dVar20 * 62.0;
    _objc_retain(ppuVar4);
    puStack_1d8 = puVar5;
    puStack_1d0 = puVar6;
    ppuStack_1c8 = ppuVar4;
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    func_0x000100bc0718(puVar12,PTR___dispatch_main_q_11034be20,&puStack_208);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1d8);
    _objc_release(ppuStack_1c8);
    _objc_release(uStack_1e8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(uVar11);
  }
  _objc_release(puStack_258);
  _objc_release(puVar7);
  _objc_release(ppuVar4);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 105d2ce2c; end: 105d2d347;  */

void FUN_105d2ce2c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c2a0420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27e680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar6 = PTR_PTR_1126b26d8;
    func_0x00010bf978e0(PTR_PTR_1126b26d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar6);
  }
  lVar3 = lVar4;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = lVar4;
    func_0x00010c0b8600(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(lVar3);
  }
  puVar6 = puVar5;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    lVar3 = 0;
  }
  else {
    puVar6 = PTR_PTR_1126b26e0;
    func_0x00010c29b780(PTR_PTR_1126b26e0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x58);
    func_0x00010bf41e60();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    _objc_release(puVar6);
  }
  lVar7 = lVar3;
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    func_0x00010befa160(puVar1);
  }
  lVar7 = param_5;
  if (param_4 != 0) {
    puVar6 = PTR_PTR_1126c4200;
    _objc_alloc(PTR_PTR_1126c4200);
    func_0x00010c0169c0();
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(puVar6);
  }
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bf529e0();
  puVar6 = PTR_PTR_1126b26f0;
  if (lVar9 != 0) {
    func_0x00010c29aae0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf41e00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  if (lVar8 == 0) {
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    func_0x00010bf27a60(&uStack_b0,lVar8);
  }
  uVar10 = 0;
  _CGAffineTransformIsIdentity();
  puVar6 = puVar1;
  if (((uVar10 & 1) == 0) && (puVar11 = puVar1, func_0x00010bf529e0(), puVar11 == (undefined *)0x0))
  {
    puVar11 = PTR_PTR_1126b26c8;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  puVar1 = puVar6;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    lVar13 = param_2;
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_2);
  }
  else {
    puVar1 = PTR_PTR_1126bf4c8;
    _objc_alloc(PTR_PTR_1126bf4c8);
    puVar11 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c03c6e0(puVar1);
    _objc_release(uVar14);
    _objc_release(puVar11);
    func_0x00010c21dc00(puVar1);
    _objc_retain(param_2);
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar14);
    func_0x00010c142ae0(puVar1);
    _objc_release(uVar14);
    _objc_release(param_2);
    _objc_release(puVar1);
  }
  _objc_release(lVar8);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(lVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,lVar13);
  return;
}



/* Entry: 105d2d348; end: 105d2d357;  */

void FUN_105d2d348(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,param_2)
  ;
  return;
}



/* Entry: 105d2d358; end: 105d2d3bf;  */

void FUN_105d2d358(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar3 = param_2;
  if (lVar1 != lVar2) {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d2d3c0; end: 105d2d3ff;  */

void FUN_105d2d3c0(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 105d2d400; end: 105d2d507;  */

void FUN_105d2d400(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105d2d508;
  puStack_60 = &UNK_1108e6520;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar5;
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar6;
  _objc_retain(uVar5);
  uStack_50 = uVar5;
  func_0x00010c0ef520(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),uVar1,param_2,
                      uVar4,1,1,uVar3,0,&puStack_78);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  return;
}



/* Entry: 105d2d508; end: 105d2d523;  */

void FUN_105d2d508(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105d2d520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),param_2,param_3);
  return;
}



/* Entry: 105d2d524; end: 105d2d6eb;  */

void FUN_105d2d524(double param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3 + 0x30;
    _objc_loadWeakRetained();
    lVar4 = param_4;
    if (lVar1 != 0) {
      lVar2 = param_3 + 0x38;
      _objc_loadWeakRetained();
      if (lVar2 != 0) {
        func_0x00010c23d0a0(param_4);
        dVar9 = param_1;
        func_0x00010c14e120(param_4);
        lVar3 = lVar2;
        func_0x00010bf4e7a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          lVar3 = lVar2;
          func_0x00010bf4e7a0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c14e6c0(param_1 * dVar9,param_2 * dVar9,0x3ff0000000000000);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_4);
          _objc_release(lVar3);
        }
        uVar8 = *(undefined8 *)(param_3 + 0x20);
        uVar5 = *(undefined8 *)(lVar1 + 0xa0);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0d2180();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_3 + 0x28);
        _objc_retain(uVar7);
        _objc_retain(lVar4);
        func_0x00010c0ef520(param_1 * dVar9,param_2 * dVar9,uVar8);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(lVar4);
        _objc_release(uVar7);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 105d2d6ec; end: 105d2d823;  */

void FUN_105d2d6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_3c0 [48];
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 auStack_1e0 [256];
  long lStack_e0;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_5 + 0x28);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  dVar25 = *(double *)PTR__kCMTimeZero_110348670;
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puVar19 = param_6;
  uVar18 = param_7;
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  uVar20 = (uint)uVar18;
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar7;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf529e0();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = *(undefined **)(puVar1 + 0x170);
    func_0x00010c0d2420();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      lVar4 = *(long *)(puVar1 + 0xb0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar4;
      func_0x00010c279080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar13 = lVar21;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      if (lVar13 == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        do {
          lVar22 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(lVar21);
            }
            puVar2 = PTR_PTR_1126ba960;
            uVar23 = *(ulong *)(lVar22 * 8);
            _objc_retain(uVar23);
            _objc_opt_class(puVar2);
            uVar5 = uVar23;
            _objc_opt_isKindOfClass(uVar23,puVar2);
            uVar12 = uVar23;
            if ((uVar5 & 1) == 0) {
              uVar12 = 0;
            }
            _objc_retain(uVar12);
            _objc_release(uVar23);
            if (uVar12 != 0) {
              func_0x00010bf7e500(puVar3);
              uVar24 = 1;
            }
            _objc_release(uVar12);
            lVar22 = lVar22 + 1;
          } while (lVar13 != lVar22);
          lVar13 = lVar21;
          func_0x00010bf52a60();
        } while (lVar13 != 0);
      }
      _objc_release(lVar21);
      dVar25 = 0.0;
      lVar21 = *(long *)(puVar1 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar21;
      func_0x00010c278d20();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar4;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar21);
      puVar19 = auStack_1e0;
      lVar4 = lVar13;
      func_0x00010bf52a60();
      lVar21 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar22 = 0;
        do {
          if (lRam0000000000000000 != lVar21) {
            _objc_enumerationMutation(lVar13);
          }
          puVar2 = PTR_PTR_1126c4278;
          uVar23 = *(ulong *)(lVar22 * 8);
          _objc_retain(uVar23);
          _objc_opt_class(puVar2);
          uVar5 = uVar23;
          _objc_opt_isKindOfClass(uVar23,puVar2);
          uVar12 = uVar23;
          if ((uVar5 & 1) == 0) {
            uVar12 = 0;
          }
          _objc_retain(uVar12);
          _objc_release(uVar23);
          uVar5 = uVar12;
          func_0x00010bf2fba0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar2 = PTR_PTR_1126c4178;
          _objc_opt_class(PTR_PTR_1126c4178);
          uVar23 = uVar5;
          _objc_opt_isKindOfClass(uVar5,puVar2);
          uVar12 = uVar5;
          if ((uVar23 & 1) == 0) {
            uVar12 = 0;
          }
          _objc_retain(uVar12);
          _objc_release(uVar5);
          if (uVar12 != 0) {
            func_0x00010bf73780(puVar3);
            uVar24 = 1;
          }
          _objc_release(uVar12);
          lVar22 = lVar22 + 1;
        } while (lVar4 != lVar22);
        puVar19 = auStack_1e0;
        lVar4 = lVar13;
        func_0x00010bf52a60();
      }
      _objc_release(lVar13);
      puVar2 = puVar1 + 0x160;
      _objc_loadWeakRetained();
      puVar6 = puVar2;
      func_0x00010bfa19e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ba960;
      _objc_opt_class(PTR_PTR_1126ba960);
      puVar7 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar2);
      puVar2 = PTR_DAT_1126a51c0;
      if (((ulong)puVar7 & 1) == 0) {
        _objc_retain(puVar6);
        puVar7 = puVar6;
        func_0x00010010fab4(puVar6,puVar2);
        _objc_release(puVar6);
        if (((int)puVar7 != 0) && (puVar6 != (undefined *)0x0)) {
          func_0x00010bf736c0(puVar3);
        }
      }
      else {
        func_0x00010bf736e0(puVar3);
      }
      if ((uVar20 & uVar24) == 1) {
        func_0x00010c240620(puVar1);
      }
      puVar8 = puVar1;
      func_0x00010bf16b60();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010c083320();
      puVar2 = PTR_PTR_1126c4270;
      if (((ulong)puVar7 & 1) == 0) {
        _objc_retain(puVar8);
        _objc_opt_class(puVar2);
        puVar7 = puVar8;
        _objc_opt_isKindOfClass(puVar8,puVar2);
        puVar2 = puVar8;
        if (((ulong)puVar7 & 1) == 0) {
          puVar2 = (undefined *)0x0;
        }
        _objc_retain(puVar2);
        _objc_release(puVar8);
        lVar21 = *(long *)(puVar1 + 0xb0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar21;
        func_0x00010bf037a0();
        if (lVar4 == 0) {
          uVar9 = *(undefined8 *)(puVar1 + 0x40);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar9;
          func_0x00010c06c1e0();
          if ((int)uVar18 == 0) {
            uVar18 = *(undefined8 *)(puVar1 + 0x40);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c06c200();
            func_0x00010c1a5860(puVar2);
            _objc_release(uVar18);
          }
          else {
            func_0x00010c1a5860(puVar2);
          }
          _objc_release(uVar9);
        }
        else {
          func_0x00010c1a5860(puVar2);
        }
        _objc_release(lVar21);
        _objc_release(puVar2);
      }
      uVar9 = *(undefined8 *)(puVar1 + 8);
      func_0x00010c08f640(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2876e0();
      _objc_release(uVar18);
      _objc_release(uVar9);
      puVar10 = *(undefined **)(puVar1 + 0x128);
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar10;
      func_0x00010bf51e00();
      puVar2 = puVar3;
      func_0x00010c09df80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c17f520();
      _objc_release(puVar11);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
    _objc_release();
    puVar6 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return;
  }
  ___stack_chk_fail();
  uVar23 = *(ulong *)(puVar3 + 0x170);
  func_0x00010c0d2420();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar23;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  lVar4 = 0;
  if ((puVar6 != (undefined *)0x7fffffffffffffff) && (puVar19 != (undefined1 *)0x7fffffffffffffff))
  {
    lVar13 = *(long *)(puVar3 + 0x170);
    func_0x00010c0d2420();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar13;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar21;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar21);
    _objc_release(lVar13);
    if (lVar4 != 0) {
      func_0x00010bf16ae0(puVar3);
    }
  }
  uVar12 = uVar5;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar12 == 0) {
    lVar21 = lVar4;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar21 == 0) goto LAB_105d2e2c0;
  }
  else {
    _objc_release();
  }
  uVar12 = uVar5;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar12 == 0) {
    puVar1 = puVar3 + 0x160;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010bfa1a60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf52160();
    func_0x00010c186260(uVar5);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c186260(uVar5);
  }
  _objc_release(uVar12);
  puVar1 = puVar3 + 0x160;
  _objc_loadWeakRetained(puVar1);
  puVar2 = puVar1;
  func_0x00010bfa1a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c80();
  func_0x000100841590();
  dVar28 = dVar25;
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar14 = *(undefined8 *)(puVar3 + 0x30);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar14;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  uVar12 = uVar5;
  dVar26 = dVar28;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ade0();
  dVar27 = dVar25;
  _CGRectGetWidth(dVar25,param_2,param_3,param_4);
  dVar28 = dVar28 + dVar27 * dVar26;
  uVar15 = *(undefined8 *)(puVar3 + 0x30);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar15;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  uVar16 = uVar5;
  dVar26 = dVar27;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ae20();
  _CGRectGetHeight(dVar25,param_2,param_3,param_4);
  puVar1 = puVar3 + 0x160;
  _objc_loadWeakRetained(puVar1);
  puVar2 = puVar1;
  func_0x00010bfa1ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar28,dVar27 + dVar25 * dVar26);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar16);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar18);
  _objc_release(uVar14);
  uVar12 = uVar5;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar16 = uVar5;
  dVar25 = dVar28;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _CGAffineTransformMakeScale(&uStack_390,dVar28,dVar25);
  uVar17 = uVar5;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141a80();
  _CGAffineTransformMakeRotation(auStack_3c0);
  _CGAffineTransformConcat(&uStack_358,&uStack_390,auStack_3c0);
  puVar1 = puVar3 + 0x160;
  _objc_loadWeakRetained(puVar1);
  puVar2 = puVar1;
  func_0x00010bfa1ac0();
  _objc_retainAutoreleasedReturnValue();
  uStack_388 = uStack_350;
  uStack_390 = uStack_358;
  uStack_378 = uStack_340;
  uStack_380 = uStack_348;
  uStack_368 = uStack_330;
  uStack_370 = uStack_338;
  func_0x00010c219960();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar12);
  uVar18 = *(undefined8 *)(puVar3 + 0x30);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar12 == 0) {
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
  }
  else {
    func_0x00010bf27a60(&uStack_390,uVar12);
  }
  func_0x00010c2235a0(uVar18);
  _objc_release(uVar12);
  _objc_release(uVar18);
  uVar9 = *(undefined8 *)(puVar3 + 0xa8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar9;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c680(uVar18);
  _objc_release(uVar12);
  _objc_release(uVar18);
  _objc_release(uVar9);
LAB_105d2e2c0:
  uVar12 = uVar5;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar4;
  func_0x00010c2553e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010c071b60();
  _objc_release(lVar21);
  _objc_release(uVar12);
  if ((uVar16 & 1) == 0) {
    uVar18 = *(undefined8 *)(puVar3 + 0xb0);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c2553e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bda0(uVar18);
    _objc_release(uVar12);
    _objc_release(uVar18);
  }
  uVar12 = uVar5;
  func_0x00010c2553e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar12);
  uVar12 = uVar5;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar4;
  func_0x00010bf308c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010c071b60();
  _objc_release(lVar21);
  _objc_release(uVar12);
  if ((uVar16 & 1) == 0) {
    uVar18 = *(undefined8 *)(puVar3 + 0x98);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf308c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178d00(uVar18);
    _objc_release(uVar12);
    _objc_release(uVar18);
  }
  uVar12 = uVar5;
  func_0x00010bf308c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar12);
  uVar18 = *(undefined8 *)(puVar3 + 0x48);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bfaee40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar4;
  func_0x00010bfaee40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130e20(uVar18);
  _objc_release(lVar21);
  _objc_release(uVar12);
  _objc_release(uVar18);
  func_0x00010bed8140(puVar3);
  uVar12 = uVar5;
  func_0x00010bfaee40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04980();
  _objc_release(uVar12);
  uVar12 = uVar5;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar4;
  func_0x00010bf8a020(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010c071b60();
  _objc_release(lVar21);
  _objc_release(uVar12);
  if ((uVar16 & 1) == 0) {
    uVar18 = *(undefined8 *)(puVar3 + 0xa0);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf8a020(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130de0(uVar18);
    _objc_release(uVar12);
    _objc_release(uVar18);
    puVar1 = puVar3 + 0x18;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c084f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar12 = uVar5;
    func_0x00010bf8a020(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c21b4c0(puVar7);
    _objc_release(uVar12);
    _objc_release(puVar7);
  }
  uVar12 = uVar5;
  func_0x00010bf8a020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar12);
  puVar1 = puVar3 + 0x160;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bfa1aa0();
  _objc_release(puVar1);
  uVar18 = *(undefined8 *)(puVar3 + 200);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf0d660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ca40(uVar18);
  _objc_release(uVar12);
  _objc_release(uVar18);
  uVar18 = *(undefined8 *)(puVar3 + 0x60);
  uVar12 = uVar5;
  func_0x00010bfc0e60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2ac0(uVar18);
  _objc_release(uVar12);
  func_0x00010bfd68c0(uVar5);
  func_0x00010bebb9c0(puVar3);
  _objc_release(lVar4);
  _objc_release(uVar5);
  _objc_release(uVar23);
  return;
}



/* Entry: 105d2d824; end: 105d2ddef; -[SCPreviewFeatureBatchCaptureImpl batchCaptureSaveCurrentOverlayItemsToSourceAtIndex:multiSnapIndex:shouldUpdateThumbnails:] */

void FUN_105d2d824(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7,undefined1 *param_8,uint param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_350 [48];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_5;
  lVar3 = param_7;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf529e0();
  _objc_release();
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(param_5 + 0x170);
    func_0x00010c0d2420();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      lVar3 = *(long *)(param_5 + 0xb0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c279080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar9 = lVar6;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      if (lVar9 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        do {
          lVar14 = 0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(lVar6);
            }
            puVar4 = PTR_PTR_1126ba960;
            uVar15 = *(ulong *)(lVar14 * 8);
            _objc_retain(uVar15);
            _objc_opt_class(puVar4);
            uVar5 = uVar15;
            _objc_opt_isKindOfClass(uVar15,puVar4);
            uVar1 = uVar15;
            if ((uVar5 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar15);
            if (uVar1 != 0) {
              func_0x00010bf7e500(uVar2);
              uVar16 = 1;
            }
            _objc_release(uVar1);
            lVar14 = lVar14 + 1;
          } while (lVar9 != lVar14);
          lVar9 = lVar6;
          func_0x00010bf52a60();
        } while (lVar9 != 0);
      }
      _objc_release(lVar6);
      param_1 = 0.0;
      lVar6 = *(long *)(param_5 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c278d20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar6);
      param_8 = auStack_170;
      lVar3 = lVar9;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar9);
          }
          puVar4 = PTR_PTR_1126c4278;
          uVar15 = *(ulong *)(lVar14 * 8);
          _objc_retain(uVar15);
          _objc_opt_class(puVar4);
          uVar5 = uVar15;
          _objc_opt_isKindOfClass(uVar15,puVar4);
          uVar1 = uVar15;
          if ((uVar5 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar15);
          uVar5 = uVar1;
          func_0x00010bf2fba0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          puVar4 = PTR_PTR_1126c4178;
          _objc_opt_class(PTR_PTR_1126c4178);
          uVar15 = uVar5;
          _objc_opt_isKindOfClass(uVar5,puVar4);
          uVar1 = uVar5;
          if ((uVar15 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar5);
          if (uVar1 != 0) {
            func_0x00010bf73780(uVar2);
            uVar16 = 1;
          }
          _objc_release(uVar1);
          lVar14 = lVar14 + 1;
        } while (lVar3 != lVar14);
        param_8 = auStack_170;
        lVar3 = lVar9;
        func_0x00010bf52a60();
      }
      _objc_release(lVar9);
      uVar1 = param_5 + 0x160;
      _objc_loadWeakRetained();
      uVar5 = uVar1;
      func_0x00010bfa19e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126ba960;
      _objc_opt_class(PTR_PTR_1126ba960);
      uVar1 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar4);
      puVar4 = PTR_DAT_1126a51c0;
      if ((uVar1 & 1) == 0) {
        _objc_retain(uVar5);
        uVar1 = uVar5;
        func_0x00010010fab4(uVar5,puVar4);
        _objc_release(uVar5);
        if (((int)uVar1 != 0) && (uVar5 != 0)) {
          func_0x00010bf736c0(uVar2);
        }
      }
      else {
        func_0x00010bf736e0(uVar2);
      }
      if ((param_9 & uVar16) == 1) {
        func_0x00010c240620(param_5);
      }
      uVar1 = param_5;
      func_0x00010bf16b60();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar1;
      func_0x00010c083320();
      puVar4 = PTR_PTR_1126c4270;
      if ((uVar15 & 1) == 0) {
        _objc_retain(uVar1);
        _objc_opt_class(puVar4);
        uVar7 = uVar1;
        _objc_opt_isKindOfClass(uVar1,puVar4);
        uVar15 = uVar1;
        if ((uVar7 & 1) == 0) {
          uVar15 = 0;
        }
        _objc_retain(uVar15);
        _objc_release(uVar1);
        lVar6 = *(long *)(param_5 + 0xb0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010bf037a0();
        if (lVar3 == 0) {
          uVar8 = *(undefined8 *)(param_5 + 0x40);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar8;
          func_0x00010c06c1e0();
          if ((int)uVar13 == 0) {
            uVar13 = *(undefined8 *)(param_5 + 0x40);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c06c200();
            func_0x00010c1a5860(uVar15);
            _objc_release(uVar13);
          }
          else {
            func_0x00010c1a5860(uVar15);
          }
          _objc_release(uVar8);
        }
        else {
          func_0x00010c1a5860(uVar15);
        }
        _objc_release(lVar6);
        _objc_release(uVar15);
      }
      uVar8 = *(undefined8 *)(param_5 + 8);
      func_0x00010c08f640(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2876e0();
      _objc_release(uVar13);
      _objc_release(uVar8);
      lVar6 = *(long *)(param_5 + 0x128);
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010bf51e00();
      uVar15 = uVar2;
      func_0x00010c09df80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      param_7 = lVar3;
      func_0x00010c17f520();
      _objc_release(uVar7);
      _objc_release(uVar15);
      _objc_release(lVar3);
      _objc_release(lVar6);
      _objc_release(uVar1);
      _objc_release(uVar5);
    }
    _objc_release();
    lVar3 = param_7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(ulong *)(uVar2 + 0x170);
  func_0x00010c0d2420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar15;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar6 = 0;
  if ((lVar3 != 0x7fffffffffffffff) && (param_8 != (undefined1 *)0x7fffffffffffffff)) {
    lVar9 = *(long *)(uVar2 + 0x170);
    func_0x00010c0d2420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar9);
    if (lVar6 != 0) {
      func_0x00010bf16ae0(uVar2);
    }
  }
  uVar1 = uVar5;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    lVar3 = lVar6;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_105d2e2c0;
  }
  else {
    _objc_release();
  }
  uVar1 = uVar5;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    lVar3 = uVar2 + 0x160;
    _objc_loadWeakRetained(lVar3);
    lVar9 = lVar3;
    func_0x00010bfa1a60();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar9;
    func_0x00010bf52160();
    func_0x00010c186260(uVar5);
    _objc_release(lVar14);
    _objc_release(lVar9);
    _objc_release(lVar3);
  }
  else {
    func_0x00010c186260(uVar5);
  }
  _objc_release(uVar1);
  lVar3 = uVar2 + 0x160;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010bfa1a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c80();
  func_0x000100841590();
  dVar19 = param_1;
  _objc_release(lVar9);
  _objc_release(lVar3);
  uVar10 = *(undefined8 *)(uVar2 + 0x30);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  uVar1 = uVar5;
  dVar17 = dVar19;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ade0();
  dVar18 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar19 = dVar19 + dVar18 * dVar17;
  uVar11 = *(undefined8 *)(uVar2 + 0x30);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  uVar7 = uVar5;
  dVar17 = dVar18;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ae20();
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar3 = uVar2 + 0x160;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010bfa1ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar19,dVar18 + param_1 * dVar17);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar13);
  _objc_release(uVar10);
  uVar1 = uVar5;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar7 = uVar5;
  dVar17 = dVar19;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _CGAffineTransformMakeScale(&uStack_320,dVar19,dVar17);
  uVar12 = uVar5;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141a80();
  _CGAffineTransformMakeRotation(auStack_350);
  _CGAffineTransformConcat(&uStack_2e8,&uStack_320,auStack_350);
  lVar3 = uVar2 + 0x160;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010bfa1ac0();
  _objc_retainAutoreleasedReturnValue();
  uStack_318 = uStack_2e0;
  uStack_320 = uStack_2e8;
  uStack_308 = uStack_2d0;
  uStack_310 = uStack_2d8;
  uStack_2f8 = uStack_2c0;
  uStack_300 = uStack_2c8;
  func_0x00010c219960();
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar13 = *(undefined8 *)(uVar2 + 0x30);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
  }
  else {
    func_0x00010bf27a60(&uStack_320,uVar1);
  }
  func_0x00010c2235a0(uVar13);
  _objc_release(uVar1);
  _objc_release(uVar13);
  uVar8 = *(undefined8 *)(uVar2 + 0xa8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf5c9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c680(uVar13);
  _objc_release(uVar1);
  _objc_release(uVar13);
  _objc_release(uVar8);
LAB_105d2e2c0:
  uVar1 = uVar5;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c2553e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c071b60();
  _objc_release(lVar3);
  _objc_release(uVar1);
  if ((uVar7 & 1) == 0) {
    uVar13 = *(undefined8 *)(uVar2 + 0xb0);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c2553e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bda0(uVar13);
    _objc_release(uVar1);
    _objc_release(uVar13);
  }
  uVar1 = uVar5;
  func_0x00010c2553e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf308c0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c071b60();
  _objc_release(lVar3);
  _objc_release(uVar1);
  if ((uVar7 & 1) == 0) {
    uVar13 = *(undefined8 *)(uVar2 + 0x98);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf308c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178d00(uVar13);
    _objc_release(uVar1);
    _objc_release(uVar13);
  }
  uVar1 = uVar5;
  func_0x00010bf308c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar1);
  uVar13 = *(undefined8 *)(uVar2 + 0x48);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfaee40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bfaee40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130e20(uVar13);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(uVar13);
  func_0x00010bed8140(uVar2);
  uVar1 = uVar5;
  func_0x00010bfaee40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04980();
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf8a020(lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c071b60();
  _objc_release(lVar3);
  _objc_release(uVar1);
  if ((uVar7 & 1) == 0) {
    uVar13 = *(undefined8 *)(uVar2 + 0xa0);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf8a020(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130de0(uVar13);
    _objc_release(uVar1);
    _objc_release(uVar13);
    lVar3 = uVar2 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar9 = lVar3;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar9;
    func_0x00010c084f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar3);
    uVar1 = uVar5;
    func_0x00010bf8a020(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c21b4c0(lVar14);
    _objc_release(uVar1);
    _objc_release(lVar14);
  }
  uVar1 = uVar5;
  func_0x00010bf8a020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar1);
  lVar3 = uVar2 + 0x160;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfa1aa0();
  _objc_release(lVar3);
  uVar13 = *(undefined8 *)(uVar2 + 200);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf0d660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ca40(uVar13);
  _objc_release(uVar1);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(uVar2 + 0x60);
  uVar1 = uVar5;
  func_0x00010bfc0e60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2ac0(uVar13);
  _objc_release(uVar1);
  func_0x00010bfd68c0(uVar5);
  func_0x00010bebb9c0(uVar2);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar15);
  return;
}



/* Entry: 105d2ddf0; end: 105d2e6cb; -[SCPreviewFeatureBatchCaptureImpl batchCaptureDidPlayFromSourceAtIndex:multiSnapIndex:toSourceAtIndex:multiSnapIndex:] */

void FUN_105d2ddf0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_140 [48];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  uVar1 = *(ulong *)(param_5 + 0x170);
  func_0x00010c0d2420(uVar1,param_6,param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar13 = 0;
  if ((param_7 != 0x7fffffffffffffff) && (param_8 != 0x7fffffffffffffff)) {
    lVar4 = *(long *)(param_5 + 0x170);
    func_0x00010c0d2420();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar13 != 0) {
      func_0x00010bf16ae0(param_5);
    }
  }
  uVar2 = uVar3;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    lVar5 = lVar13;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) goto LAB_105d2e2c0;
  }
  else {
    _objc_release();
  }
  uVar2 = uVar3;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    lVar5 = param_5 + 0x160;
    _objc_loadWeakRetained(lVar5);
    lVar4 = lVar5;
    func_0x00010bfa1a60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf52160();
    func_0x00010c186260(uVar3);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  else {
    func_0x00010c186260(uVar3);
  }
  _objc_release(uVar2);
  lVar5 = param_5 + 0x160;
  _objc_loadWeakRetained(lVar5);
  lVar4 = lVar5;
  func_0x00010bfa1a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c80();
  func_0x000100841590();
  dVar16 = param_1;
  _objc_release(lVar4);
  _objc_release(lVar5);
  uVar7 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  uVar2 = uVar3;
  dVar14 = dVar16;
  func_0x00010bf5c9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ade0();
  dVar15 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar16 = dVar16 + dVar15 * dVar14;
  uVar8 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  uVar9 = uVar3;
  dVar14 = dVar15;
  func_0x00010bf5c9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ae20();
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar5 = param_5 + 0x160;
  _objc_loadWeakRetained(lVar5);
  lVar4 = lVar5;
  func_0x00010bfa1ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar16,dVar15 + param_1 * dVar14);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar7);
  uVar2 = uVar3;
  func_0x00010bf5c9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  uVar9 = uVar3;
  dVar14 = dVar16;
  func_0x00010bf5c9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _CGAffineTransformMakeScale(&uStack_110,dVar16,dVar14);
  uVar10 = uVar3;
  func_0x00010bf5c9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141a80();
  _CGAffineTransformMakeRotation(auStack_140);
  _CGAffineTransformConcat(&uStack_d8,&uStack_110,auStack_140);
  lVar5 = param_5 + 0x160;
  _objc_loadWeakRetained(lVar5);
  lVar4 = lVar5;
  func_0x00010bfa1ac0();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_d0;
  uStack_110 = uStack_d8;
  uStack_f8 = uStack_c0;
  uStack_100 = uStack_c8;
  uStack_e8 = uStack_b0;
  uStack_f0 = uStack_b8;
  func_0x00010c219960();
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  uVar11 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bf27a60(&uStack_110,uVar2);
  }
  func_0x00010c2235a0(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar11);
  uVar12 = *(undefined8 *)(param_5 + 0xa8);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf5c9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c680(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar12);
LAB_105d2e2c0:
  uVar2 = uVar3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010c2553e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c071b60();
  _objc_release(lVar5);
  _objc_release(uVar2);
  if ((uVar9 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_5 + 0xb0);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2553e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bda0(uVar11);
    _objc_release(uVar2);
    _objc_release(uVar11);
  }
  uVar2 = uVar3;
  func_0x00010c2553e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010bf308c0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c071b60();
  _objc_release(lVar5);
  _objc_release(uVar2);
  if ((uVar9 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_5 + 0x98);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf308c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178d00(uVar11);
    _objc_release(uVar2);
    _objc_release(uVar11);
  }
  uVar2 = uVar3;
  func_0x00010bf308c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar2);
  uVar11 = *(undefined8 *)(param_5 + 0x48);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfaee40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010bfaee40(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130e20(uVar11);
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(uVar11);
  func_0x00010bed8140(param_5);
  uVar2 = uVar3;
  func_0x00010bfaee40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04980();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010bf8a020(lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c071b60();
  _objc_release(lVar5);
  _objc_release(uVar2);
  if ((uVar9 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_5 + 0xa0);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf8a020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130de0(uVar11);
    _objc_release(uVar2);
    _objc_release(uVar11);
    lVar5 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar5);
    lVar4 = lVar5;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c084f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar5);
    uVar2 = uVar3;
    func_0x00010bf8a020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c21b4c0(lVar6);
    _objc_release(uVar2);
    _objc_release(lVar6);
  }
  uVar2 = uVar3;
  func_0x00010bf8a020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar2);
  lVar5 = param_5 + 0x160;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bfa1aa0();
  _objc_release(lVar5);
  uVar11 = *(undefined8 *)(param_5 + 200);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf0d660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ca40(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_5 + 0x60);
  uVar2 = uVar3;
  func_0x00010bfc0e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2ac0(uVar11);
  _objc_release(uVar2);
  func_0x00010bfd68c0(uVar3);
  func_0x00010bebb9c0(param_5);
  _objc_release(lVar13);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d2e6cc; end: 105d2e84b; -[SCPreviewFeatureBatchCaptureImpl batchCaptureUpdateImageSegmentDuration:] */

void FUN_105d2e6cc(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  if ((*(long *)(param_1 + 0x168) != 0) && (uVar1 = param_1, func_0x00010be3fdc0(), (int)uVar1 != 0)
     ) {
    func_0x00010bf8c7e0(*(undefined8 *)(param_1 + 0x168));
    uVar2 = param_1;
    func_0x00010bf16b60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c4270;
    _objc_opt_class(PTR_PTR_1126c4270);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      uVar4 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_80,uVar2);
      uVar4 = uStack_78 & 0xffffffff;
    }
    _CMTimeMakeWithSeconds(auStack_68,(double)param_3,uVar4);
    func_0x00010c192d40(uVar1);
    lVar5 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2899c0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    if (uVar1 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_80,uVar2);
    }
    func_0x00010bf16960(lVar5);
    _objc_release(lVar5);
    func_0x00010c158280(*(undefined8 *)(param_1 + 0x168));
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 105d2e84c; end: 105d2e8eb; -[SCPreviewFeatureBatchCaptureImpl setVideoSegmentInfiniteDuration:] */

void FUN_105d2e84c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if ((*(long *)(param_1 + 0x168) != 0) && (uVar1 = param_1, func_0x00010be3fdc0(), (int)uVar1 != 0)
     ) {
    func_0x00010be07020();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c4280;
    _objc_opt_class(PTR_PTR_1126c4280);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar1 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    if (uVar1 != 0) {
      func_0x00010c1b1de0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105d2e8ec; end: 105d2e977; -[SCPreviewFeatureBatchCaptureImpl batchCaptureSegmentAtIndex:] */

void FUN_105d2e8ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (param_3 < uVar1) {
    func_0x00010bdd2d60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d2e978; end: 105d2e9c3; -[SCPreviewFeatureBatchCaptureImpl isEditingVideoSegment] */

void FUN_105d2e978(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be3fdc0();
  if ((int)uVar1 != 0) {
    func_0x00010be07020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083320();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105d2e9c4; end: 105d2e9c7; -[SCPreviewFeatureBatchCaptureImpl saveBatchCaptureSegmentsToCameraRollWithCompletion:] */

void FUN_105d2e9c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exportBatchCaptureSegmentsWithCo_1125c4d80);
  return;
}



/* Entry: 105d2e9c8; end: 105d2ebd7; -[SCPreviewFeatureBatchCaptureImpl exportBatchCaptureSegmentsWithCompletion:] */

void FUN_105d2e9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3b460();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  *(long *)(param_1 + 0x120) = lVar1;
  _objc_release(uVar4);
  func_0x00010c16f6a0(*(undefined8 *)(param_1 + 0x120));
  uVar5 = *(undefined8 *)(param_1 + 0x120);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbf4c0(uVar5);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08f640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109380();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c290680(uVar4);
  puVar2 = PTR_PTR_1126c4288;
  func_0x00010b68eef4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar2[0x1b] = 1;
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  puVar3 = puVar2;
  func_0x00010b68f1bc(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109dc0(param_1);
  func_0x00010c21d9a0(*(undefined8 *)(param_1 + 0x120));
  func_0x00010c1f5d00(*(undefined8 *)(param_1 + 0x120));
  func_0x00010c1a8660(*(undefined8 *)(param_1 + 0x120));
  func_0x00010c24df60(*(undefined8 *)(param_1 + 0x120));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105d2ebd8; end: 105d2ee0b;  */

void FUN_105d2ebd8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_3 == 0) {
      uVar3 = *(ulong *)(lVar2 + 0x108);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x000108e00d3c();
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) {
        lVar5 = lVar2;
        func_0x00010bf16da0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar5;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        iVar1 = (int)*(undefined8 *)(lVar2 + 0x178);
        func_0x00010c07d220();
        if (iVar1 == 0) {
          lVar5 = lVar12;
          func_0x00010c1585e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1583c0(*(undefined8 *)(lVar2 + 0x178));
          lVar15 = lVar5;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          func_0x00010c1f5b00(lVar15);
          func_0x00010c282500(lVar12);
          func_0x00010c1f5b00(lVar12);
        }
        else {
          func_0x00010c1f5b00(lVar12);
          lVar15 = lVar12;
          func_0x00010c1585e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar15;
          func_0x00010bf52a60();
          lVar8 = lRam0000000000000000;
          while (lVar5 != 0) {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar8) {
                _objc_enumerationMutation(lVar15);
              }
              func_0x00010c1f5b00(*(undefined8 *)(lVar14 * 8));
              lVar14 = lVar14 + 1;
            } while (lVar5 != lVar14);
            lVar5 = lVar15;
            func_0x00010bf52a60();
          }
        }
        _objc_release(lVar15);
        _objc_release(lVar12);
      }
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
    uVar6 = *(undefined8 *)(lVar2 + 0x120);
    *(undefined8 *)(lVar2 + 0x120) = 0;
    _objc_release(uVar6);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar2);
      }
      uVar3 = *(ulong *)(lVar15 * 8);
      uVar4 = uVar3;
      func_0x00010c083320();
      if ((uVar4 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_3 + 0xf8);
        func_0x00010bf1cf00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_3 + 0x128);
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfb6cc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb6cc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0acba0(uVar6);
        _objc_release(uVar3);
        _objc_release(uVar4);
        _objc_release(uVar7);
        _objc_release(uVar6);
      }
      lVar15 = lVar15 + 1;
    } while (lVar11 != lVar15);
    lVar11 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = lVar2 + 0x10;
  _objc_loadWeakRetained();
  lVar5 = lVar11;
  func_0x00010c06d080();
  _objc_release(lVar11);
  if ((int)lVar5 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126c4290;
    _objc_alloc();
    lVar11 = lVar2 + 0x10;
    _objc_loadWeakRetained();
    lVar8 = lVar11;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0xd8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2 + 0x10;
    _objc_loadWeakRetained(lVar5);
    lVar14 = lVar5;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2 + 0x10;
    _objc_loadWeakRetained(lVar12);
    lVar9 = lVar12;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar2 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010bff7420(puVar13);
    _objc_release(lVar15);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar12);
    _objc_release(lVar14);
    _objc_release(lVar5);
    _objc_release(uVar6);
    _objc_release(lVar8);
    _objc_release(lVar11);
    lVar2 = lVar2 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c07e620();
    func_0x00010c1b13a0(puVar13);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105d2ee0c; end: 105d2efaf; -[SCPreviewFeatureBatchCaptureImpl _logPreviewImageMediaExport] */

void FUN_105d2ee0c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lVar2);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar17 * 8);
        uVar4 = uVar13;
        func_0x00010c083320();
        if ((uVar4 & 1) == 0) {
          uVar5 = *(undefined8 *)(param_1 + 0xf8);
          func_0x00010bf1cf00();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 0x128);
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar13;
          func_0x00010bfb6cc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = &PTR____CFConstantStringClassReference_110e28ed8;
          if (uVar4 != 0) {
            ppuVar1 = (undefined **)0x0;
          }
          func_0x00010bfb6cc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0acba0(uVar5,param_2,uVar6,ppuVar1,uVar13 != 0);
          _objc_release(uVar13);
          _objc_release(uVar4);
          _objc_release(uVar6);
          _objc_release(uVar5);
        }
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar2 + 0x10;
  _objc_loadWeakRetained();
  lVar16 = lVar3;
  func_0x00010c06d080();
  _objc_release(lVar3);
  if ((int)lVar16 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126c4290;
    _objc_alloc();
    lVar3 = lVar2 + 0x10;
    _objc_loadWeakRetained();
    lVar7 = lVar3;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    uVar5 = *(undefined8 *)(lVar2 + 0xd8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + 0xe0);
    lVar16 = lVar2 + 0x10;
    _objc_loadWeakRetained(lVar16);
    lVar8 = lVar16;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar2 + 0x10;
    _objc_loadWeakRetained(lVar17);
    lVar9 = lVar17;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(lVar2 + 0x110);
    lVar11 = lVar2 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010bff7420(puVar15,param_2,lVar7,uVar6,uVar5,uVar12,lVar8,lVar10,uVar14,lVar11);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar17);
    _objc_release(lVar8);
    _objc_release(lVar16);
    _objc_release(uVar5);
    _objc_release(lVar7);
    _objc_release(lVar3);
    lVar2 = lVar2 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c07e620();
    func_0x00010c1b13a0(puVar15,param_2,lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105d2efb0; end: 105d2f157; -[SCPreviewFeatureBatchCaptureImpl _initializeEphemeralMediaListForSaving] */

void FUN_105d2efb0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06d080();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126c4290;
    _objc_alloc();
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0xe0);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x110);
    lVar9 = param_1 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010bff7420(puVar13,param_2,lVar3,uVar10,uVar4,uVar11,lVar5,lVar8,uVar12,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c07e620();
    func_0x00010c1b13a0(puVar13,param_2,lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105d2f158; end: 105d2f22f; -[SCPreviewFeatureBatchCaptureImpl finalizeSavingConfiguration] */

void FUN_105d2f158(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf16da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8c7e0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c4298;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010bf16da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7400(puVar3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar2 == 0x7fffffffffffffff) {
    func_0x00010c1b4160(puVar3,param_2,1);
  }
  else {
    func_0x00010c1b4160(puVar3,param_2,0);
    func_0x00010c1faa80(puVar3,param_2,lVar2);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x178);
  *(undefined **)(param_1 + 0x178) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105d2f230; end: 105d2f25f; -[SCPreviewFeatureBatchCaptureImpl deselectSelectedSegmentIfAny] */

void FUN_105d2f230(undefined8 param_1)

{
  func_0x00010bf16da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d2f260; end: 105d2f2c7; -[SCPreviewFeatureBatchCaptureImpl galleryConfigurationForSegment:] */

void FUN_105d2f260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c280560(param_3);
  func_0x00010c0df780(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d2f2c8; end: 105d2f33f; -[SCPreviewFeatureBatchCaptureImpl setGalleryConfiguration:forSegment:] */

void FUN_105d2f2c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  func_0x00010c280560(param_4);
  func_0x00010c0df780(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d2f340; end: 105d2f37f; -[SCPreviewFeatureBatchCaptureImpl configureWithView:] */

void FUN_105d2f340(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x18,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d2f380; end: 105d2fad7; -[SCPreviewFeatureBatchCaptureImpl _realSetupBatchCaptureWithController:] */

void FUN_105d2f380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_7);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + 0x168);
  *(undefined8 *)(param_5 + 0x168) = param_7;
  _objc_release(uVar1);
  lVar2 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c16f7a0();
  _objc_release(lVar2);
  lVar2 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf16da0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180a40();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126c42a0;
  lVar2 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2525e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (puVar7 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126c42a8;
    _objc_alloc();
    lVar2 = param_5 + 0x10;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6e9a0(param_5);
    uVar1 = *(undefined8 *)(param_5 + 0xc0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_5 + 0x140);
    func_0x00010c26a1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010bff7440(param_1,param_2,puVar6);
    _objc_release(lVar3);
    _objc_release(uVar12);
    _objc_release(uVar1);
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar8 = PTR_PTR_1126c42a0;
    _objc_alloc(PTR_PTR_1126c42a0);
    func_0x00010bff7460();
    lVar2 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1ba0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c1ac080(puVar7);
  }
  puVar6 = PTR_PTR_1126c42a0;
  lVar2 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2525e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_5 + 0x170);
  *(undefined **)(param_5 + 0x170) = puVar8;
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_5 + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3100(*(undefined8 *)(param_5 + 0x170));
  func_0x00010c1c38a0(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9760();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9760();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9760();
  _objc_release(uVar1);
  lVar2 = param_5 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x170);
    lVar2 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73360(uVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_5 + 0x160;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef76c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = param_5;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar9 == 1) {
    uVar4 = param_5;
    func_0x00010bdd2d60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar9;
    func_0x00010c083320();
    puVar6 = PTR_PTR_1126c4280;
    if ((int)uVar4 == 0) {
      _objc_release(uVar9);
    }
    else {
      _objc_retain(uVar9);
      _objc_opt_class(puVar6);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar6);
      uVar4 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar9);
      uVar10 = uVar4;
      func_0x00010c078120();
      _objc_release(uVar4);
      _objc_release(uVar9);
      if ((int)uVar10 != 0) goto LAB_105d2f8cc;
    }
    uVar4 = param_5;
    func_0x00010bf16da0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
LAB_105d2f8cc:
    lVar2 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf16dc0();
    uVar4 = param_5;
    func_0x00010bf16da0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(lVar2);
    uVar4 = param_5 + 0x18;
    _objc_loadWeakRetained(uVar4);
    uVar9 = uVar4;
    func_0x00010bfe5d60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_5;
    func_0x00010bf16da0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(uVar9);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar11);
    _objc_release(uVar10);
  }
  _objc_release(uVar9);
  _objc_release(uVar4);
  func_0x00010bedee20(param_5);
  uVar12 = *(undefined8 *)(param_5 + 0xa0);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar12;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ca20(uVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(uVar12);
  func_0x00010bf11800(*(undefined8 *)(param_5 + 0x168));
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105d2fad8; end: 105d2fb03; -[SCPreviewFeatureBatchCaptureImpl finishTouchControl:] */

void FUN_105d2fad8(long param_1)

{
  func_0x00010bf76f60(*(undefined8 *)(param_1 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010c240630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_snapEditStateChangeShouldUpdateT_11266dbb0,1)
  ;
  return;
}



/* Entry: 105d2fb04; end: 105d2fb0b; -[SCPreviewFeatureBatchCaptureImpl finishRewindingWithTrackableView:] */

void FUN_105d2fb04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x168),PTR_s_revealThumbnails_11262d9c0);
  return;
}



/* Entry: 105d2fb0c; end: 105d2fbef; -[SCPreviewFeatureBatchCaptureImpl snapEditStateChangeShouldUpdateThumbnails:] */

void FUN_105d2fb0c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(long *)(param_1 + 0x170) != 0) && (lVar1 = param_1, func_0x00010be3fdc0(), (int)lVar1 != 0)
     ) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be07020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5b00();
    uVar3 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010bf46560(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5b00();
    _objc_release(uVar3);
    if (param_3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x168);
      func_0x00010bf8c7e0(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x168);
      func_0x00010bf8c820(uVar4);
      func_0x00010bee2160(param_1,param_2,uVar3,uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105d2fbf0; end: 105d2fc17; -[SCPreviewFeatureBatchCaptureImpl previewThumbnailsController] */

void FUN_105d2fbf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d2fc18; end: 105d2ff6f; -[SCPreviewFeatureBatchCaptureImpl preparePreviewEphemeralMediaList:destinationInfo:] */

void FUN_105d2fc18(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c4290;
  _objc_opt_class(PTR_PTR_1126c4290);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar4 = param_2 + 0x160;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bfa19c0();
  _objc_release(lVar4);
  func_0x00010c219700(uVar1);
  func_0x00010bfbf080(uVar1);
  func_0x00010be57300(param_2);
  func_0x00010c21d9a0(uVar1);
  uVar3 = param_2;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar1;
  func_0x00010c243b40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf529e0();
  _objc_release(uVar13);
  if (uVar14 != 0) {
    uVar13 = 0;
    uVar14 = 0;
    do {
      uVar5 = uVar1;
      func_0x00010c243b40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c158380();
      uVar13 = uVar13 - (uVar5 != 0);
      uVar5 = uVar3;
      func_0x00010bf529e0();
      if (uVar13 < uVar5) {
        uVar5 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c0ef960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar7 != 0) {
          uVar7 = uVar5;
          func_0x00010c0ef960(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d75e0(uVar6);
          _objc_release(uVar7);
          uVar7 = uVar5;
          func_0x00010c0ef960(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          _UIImagePNGRepresentation();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d76a0(uVar6);
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        uVar13 = uVar13 + 1;
        _objc_release(uVar5);
      }
      _objc_release(uVar6);
      uVar14 = uVar14 + 1;
      uVar5 = uVar1;
      func_0x00010c243b40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
    } while (uVar14 < uVar6);
  }
  func_0x00010c222080(param_1,uVar1);
  func_0x00010c1d6440(uVar1);
  func_0x00010c2142c0(uVar1);
  func_0x00010c1f5d00(uVar1);
  lVar4 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar4);
  lVar9 = lVar4;
  func_0x00010bfb6c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f340(uVar1);
  _objc_release(lVar9);
  _objc_release(lVar4);
  uVar10 = *(undefined8 *)(param_2 + 0x168);
  func_0x00010bf46560(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46b60(uVar1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  uVar13 = uVar1;
  func_0x00010c243b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d2ff70; end: 105d2ffa3;  */

void FUN_105d2ff70(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bef6760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d2ffa4; end: 105d30073; -[SCPreviewFeatureBatchCaptureImpl batchCaptureCollectionViewController:didUpdateSegmentStatesAtIndexPath:] */

void FUN_105d2ffa4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + 0x170) != 0) && (*(long *)(param_1 + 0x168) == param_3)) {
    lVar1 = param_1 + 0x160;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa1a40();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be07040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed8140(param_1,param_2,lVar1);
    if (param_4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_1;
      func_0x00010be3fdc0(param_1);
    }
    func_0x00010becca00(param_1,param_2,lVar2);
    func_0x00010beccf20(param_1);
    func_0x00010bedee20(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d30074; end: 105d3016b; -[SCPreviewFeatureBatchCaptureImpl batchCaptureCollectionViewController:didSplitTrimOrDeleteSegmentAtIndexPath:shouldUpdateThumbnails:] */

void FUN_105d30074(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + 0x170) != 0) && (*(long *)(param_1 + 0x168) == param_3)) {
    func_0x00010c240620(param_1,param_2,param_5);
    lVar1 = param_1;
    func_0x00010bdd2d60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      lVar2 = param_1;
      func_0x00010bdd2d60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c083320();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar4 != 0) {
        func_0x00010beccf20(param_1);
      }
    }
    else {
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d3016c; end: 105d3049b; -[SCPreviewFeatureBatchCaptureImpl batchCaptureCollectionViewController:didPressDeleteForSegmentAtIndexPath:deleteBlock:] */

/* WARNING: Possible PIC construction at 0x000105d30440: Changing call to branch */

void FUN_105d3016c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(long *)(param_1 + 0x170) != 0) && (*(long *)(param_1 + 0x168) == param_3)) {
    uVar2 = *(ulong *)(param_1 + 0xd0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c233c40();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126af180;
    if ((uVar3 & 1) == 0) {
      func_0x00010c1554e0(param_4);
      func_0x00010be68ae0(param_1);
      (**(code **)(param_5 + 0x10))(param_5);
      goto code_r0x00010bdfd1a0;
    }
    func_0x000108edea80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar5 = puVar4;
    func_0x00010c160fc0(puVar4);
    puVar6 = PTR_PTR_1126af180;
    func_0x000108edea50();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar7 = puVar6;
    func_0x00010c160fc0(puVar6);
    puVar5 = PTR_PTR_1126af180;
    func_0x000108edea38();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x000108edea68();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c1554e0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010be68ae0(uVar1);
  (**(code **)(*(long *)(param_3 + 0x30) + 0x10))();
  param_1 = *(long *)(param_3 + 0x20);
  param_4 = *(undefined8 *)(param_3 + 0x28);
code_r0x00010bdfd1a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdfd1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__didDeleteSegmentAtIndexPath__11255ce08,param_4);
  return;
}



/* Entry: 105d3049c; end: 105d3053f;  */

void FUN_105d3049c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1554e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be68ae0(uVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdfd1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didDeleteSegmentAtIndexPath__11255ce08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105d30540; end: 105d3054f;  */

void FUN_105d30540(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}


