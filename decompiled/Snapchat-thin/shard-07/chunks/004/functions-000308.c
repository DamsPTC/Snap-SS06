/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10559c4d0; end: 10559c5a3; -[CTPItemViewEmoji updateWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559c4d0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112725df4;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    uVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ba858;
    _objc_opt_class(PTR_PTR_1126ba858);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_112725df8);
    *(ulong *)(param_1 + _DAT_112725df8) = uVar1;
    _objc_release(uVar2);
    func_0x00010c1cbd40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10559c5a4; end: 10559c76b; -[CTPItemViewEmoji drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559c5a4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126e9120;
  lStack_88 = param_5;
  _objc_msgSendSuper2(&lStack_88,PTR_s_drawRect__1125271c8);
  lVar1 = *(long *)(param_5 + _DAT_112725df8);
  func_0x00010c27fc80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010bf20c00(param_5);
    dVar6 = param_3;
    if (param_4 <= param_3) {
      dVar6 = param_4;
    }
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    dVar7 = param_3;
    dVar9 = param_4;
    func_0x00010c266f40(dVar6);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSStringDrawingContext_1126bb2c8;
    _objc_opt_new(PTR__OBJC_CLASS___NSStringDrawingContext_1126bb2c8);
    func_0x00010c1c83a0(0x3fe0000000000000);
    func_0x00010bf20ba0(param_3,param_4,lVar1);
    dVar6 = param_3;
    func_0x00010bf20ba0(param_3,param_4,lVar1);
    dVar8 = dVar7;
    if (dVar7 <= param_3) {
      dVar8 = param_3;
    }
    dVar10 = dVar9;
    if (dVar9 <= param_4) {
      dVar10 = param_4;
    }
    func_0x00010bf89d20((param_3 - dVar7) * 0.5 - dVar6,(param_4 - dVar9) * 0.5,dVar8,dVar10,lVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10559c76c; end: 10559c76f; -[CTPItemViewEmoji willDisplay] */

void FUN_10559c76c(void)

{
  return;
}



/* Entry: 10559c770; end: 10559c773; -[CTPItemViewEmoji didEndDisplay] */

void FUN_10559c770(void)

{
  return;
}



/* Entry: 10559c774; end: 10559c89f; -[CTPItemViewEmoji imageView] */

void FUN_10559c774(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bf20c00();
  bVar1 = false;
  if ((param_3 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_4) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = param_4 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar1) {
    param_3 = 200.0;
    param_4 = 200.0;
    func_0x00010c1739e0(0,0,0x4069000000000000,0x4069000000000000,param_5);
  }
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010bf20c00(param_5);
  func_0x00010c0469e0(param_3,param_4,puVar2);
  puVar3 = puVar2;
  func_0x00010bfe91c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c182220();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10559c8a0; end: 10559c8af; -[CTPItemViewEmoji item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10559c8a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725df4);
}



/* Entry: 10559c8b0; end: 10559c8bf; -[CTPItemViewEmoji itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10559c8b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725dfc);
}



/* Entry: 10559c8c0; end: 10559c8cf; -[CTPItemViewEmoji loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10559c8c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112725df0);
}



/* Entry: 10559c8d0; end: 10559c8df; -[CTPItemViewEmoji setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559c8d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112725df0) = param_3;
  return;
}



/* Entry: 10559c8e0; end: 10559c92f; -[CTPItemViewEmoji .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10559c8e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112725dfc,0);
  _objc_storeStrong(param_1 + _DAT_112725df4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725df8,0);
  return;
}



/* Entry: 10559c930; end: 10559c9ef; -[CTPItemRendererGfycat initWithSimpleContentFetcher:circumstanceEngine:] */

undefined1 *
FUN_10559c930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9128;
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10559c9f0; end: 10559ca37; -[CTPItemRendererGfycat dealloc] */

void FUN_10559c9f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_1126e9128;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10559ca38; end: 10559ca63; -[CTPItemRendererGfycat _assetCacheTTLInMinutes] */

long FUN_10559ca38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110dec7f8,0x10e0,0);
  return (long)(int)uVar1;
}



/* Entry: 10559ca64; end: 10559ca6b; -[CTPItemRendererGfycat ctItemEntityCase] */

undefined8 FUN_10559ca64(void)

{
  return 0xd;
}



/* Entry: 10559ca6c; end: 10559ca77; -[CTPItemRendererGfycat viewReuseIdentifier] */

void FUN_10559ca6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb260,PTR_s_reuseIdentifier_11262d988);
  return;
}



/* Entry: 10559ca78; end: 10559cb5f; -[CTPItemRendererGfycat viewForItem:presentationModelProvider:] */

void FUN_10559ca78(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1[0x18] = 0;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f38738,2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030a60(param_1,param_2,puVar3,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be4de00();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10559cb60; end: 10559cc2f; -[CTPItemRendererGfycat attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

void FUN_10559cb60(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126bb260;
    _objc_opt_class(PTR_PTR_1126bb260);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      _objc_retain(param_3);
      func_0x00010c28c860(param_3);
      func_0x00010be4de00(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      goto LAB_10559cc04;
    }
  }
  param_1 = 0;
LAB_10559cc04:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10559cc30; end: 10559ce9f; -[CTPItemRendererGfycat _loadMediaForGfycatItem:itemView:presentationModelProvider:] */

void FUN_10559cc30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    uVar5 = 0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10559cea0;
    uStack_70 = 0x10559ceb0;
    uStack_68 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x2020000000;
    uStack_98 = 0;
    _objc_initWeak(auStack_b8,param_1);
    _objc_initWeak(auStack_c0,param_3);
    _objc_initWeak(auStack_c8,param_4);
    lVar2 = param_5;
    func_0x00010c10f520(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_b8);
    _objc_copyWeak(auStack_d8,auStack_c0);
    _objc_copyWeak(auStack_d0,auStack_c8);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    *(undefined1 *)(puStack_a8 + 3) = 1;
    puVar1 = puStack_88;
    uVar5 = puStack_88[5];
    _objc_retain(uVar5);
    uVar4 = puVar1[5];
    puVar1[5] = 0;
    _objc_release(uVar4);
    func_0x00010bef7e00(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    __Block_object_dispose(&uStack_b0,8);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10559cea0; end: 10559ceb7;  */

void FUN_10559cea0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10559ceb8; end: 10559cf83;  */

void FUN_10559ceb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar5;
  func_0x00010be4dec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(lVar3);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(long *)(lVar5 + 0x28) = lVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10559cf84; end: 10559d02b;  */

void FUN_10559cf84(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 10559d02c; end: 10559d537; -[CTPItemRendererGfycat _loadMediaWithPresentationModel:item:itemView:] */

void FUN_10559d02c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = param_4;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bb2d0;
  _objc_opt_class(PTR_PTR_1126bb2d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
  }
  else {
    uVar2 = param_4;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    uVar4 = uVar2;
    func_0x00010c0c45e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_10559cea0;
    uStack_88 = 0x10559ceb0;
    uStack_80 = 0;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10559d53c;
    puStack_c0 = &UNK_110899928;
    puStack_a0 = &uStack_a8;
    _objc_retain(param_3);
    uStack_b8 = param_3;
    puStack_b0 = &uStack_a8;
    func_0x00010c0c1100(uVar4);
    if (puStack_a0[5] == 0) {
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(puVar1);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126bb1c8;
      _objc_alloc(PTR_PTR_1126bb1c8);
      func_0x00010c030a60();
    }
    else {
      puVar6 = PTR_PTR_1126b17d8;
      _objc_alloc(PTR_PTR_1126b17d8);
      func_0x00010bdcf7e0(param_1);
      func_0x00010c003a80(puVar6);
      func_0x00010c1c5440();
      _objc_initWeak(auStack_e0,param_1);
      lVar7 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = puVar3;
      uStack_108 = 0xc2000000;
      uStack_100 = 0x10559d5d4;
      puStack_f8 = &UNK_110899878;
      _objc_copyWeak(auStack_e8,auStack_e0);
      _objc_retain(puVar5);
      lVar8 = lVar7;
      puStack_f0 = puVar5;
      func_0x00010c13e600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      if (lVar8 == 0) {
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(puVar1);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126bb1c8;
        _objc_alloc(PTR_PTR_1126bb1c8);
        func_0x00010c030a60();
      }
      else {
        puVar3 = puVar5;
        func_0x00010bfbc3e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_118,auStack_e0);
        _objc_retain(param_4);
        _objc_retain(param_5);
        _objc_retain(param_3);
        puVar9 = puVar1;
        _objc_retain(puVar1);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(puVar3);
        _objc_release(puVar9);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126bb1c8;
        _objc_alloc(PTR_PTR_1126bb1c8);
        func_0x00010c030a60();
        _objc_release(puVar1);
        _objc_release(param_3);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_118);
      }
      _objc_release(puStack_f0);
      _objc_destroyWeak(auStack_e8);
      _objc_destroyWeak(auStack_e0);
      _objc_release(puVar6);
      _objc_release(lVar8);
    }
    _objc_release(uStack_b8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10559d538; end: 10559d53b;  */

void FUN_10559d538(void)

{
  return;
}



/* Entry: 10559d53c; end: 10559d68b;  */

void FUN_10559d53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe8ba0();
  if ((lVar1 - 1U < 2) || (lVar1 == 0)) {
    puVar2 = PTR_PTR_1126b08b0;
    func_0x00010bf4cd80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined **)(lVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10559d68c; end: 10559d767; -[CTPItemRendererGfycat _handleContentCompletionWithResult:imagePromise:] */

void FUN_10559d68c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b2720;
    func_0x00010c14d040(PTR_PTR_1126b2720,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      lVar2 = param_3;
      func_0x00010bfc79a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c09c1e0();
      *(bool *)(param_1 + 0x18) = lVar3 == 1;
      _objc_release(lVar2);
    }
  }
  func_0x00010bf43d60(param_4,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10559d768; end: 10559d93b; -[CTPItemRendererGfycat _gfycatMediaLoadedForItem:itemView:presentationModel:subject:image:] */

void FUN_10559d768(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_7 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_6,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010bf436e0(param_6);
  }
  else {
    if (param_4 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126bb260;
      _objc_alloc(PTR_PTR_1126bb260);
      func_0x00010c01c560();
    }
    else {
      puVar1 = param_4;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != param_3) goto LAB_10559d900;
      func_0x00010c28c860(param_4,param_2,param_3,param_7);
      _objc_retain(param_4);
      puVar1 = param_4;
    }
    lVar2 = param_5;
    func_0x00010bfe8ba0();
    if (lVar2 == 0) {
      puVar3 = puVar1;
      func_0x00010c08c0e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4008000000000000);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c08c0e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar3);
    }
    func_0x00010c1be9a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x18));
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_6,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010bf436e0(param_6);
    _objc_release(puVar1);
  }
LAB_10559d900:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10559d93c; end: 10559d977; -[CTPItemRendererGfycat .cxx_destruct] */

void FUN_10559d93c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10559d978; end: 10559da0b; -[CTPItemRendererGiphy initWithContentDelivery:] */

undefined1 * FUN_10559d978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9130;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x14) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10559da0c; end: 10559da13; -[CTPItemRendererGiphy ctItemEntityCase] */

undefined8 FUN_10559da0c(void)

{
  return 5;
}



/* Entry: 10559da14; end: 10559da1f; -[CTPItemRendererGiphy viewReuseIdentifier] */

void FUN_10559da14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb260,PTR_s_reuseIdentifier_11262d988);
  return;
}



/* Entry: 10559da20; end: 10559db53; -[CTPItemRendererGiphy viewForItem:presentationModelProvider:] */

void FUN_10559da20(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x14);
  param_1[0x10] = 0;
  _os_unfair_lock_unlock(param_1 + 0x14);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f38738,2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030a60(param_1,param_2,puVar3,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be4de20(param_1,param_2,param_3,0,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10559db54; end: 10559dc33; -[CTPItemRendererGiphy attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

void FUN_10559db54(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x10) = 0;
  _os_unfair_lock_unlock(param_1 + 0x14);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126bb260;
    _objc_opt_class(PTR_PTR_1126bb260);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_3);
      func_0x00010c28c860(param_3);
      func_0x00010be4de20(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      goto LAB_10559dc08;
    }
  }
  param_1 = 0;
LAB_10559dc08:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10559dc34; end: 10559dea3; -[CTPItemRendererGiphy _loadMediaForGiphyItem:itemView:presenationModelProvider:] */

void FUN_10559dc34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    uVar5 = 0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10559dea4;
    uStack_70 = 0x10559deb4;
    uStack_68 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x2020000000;
    uStack_98 = 0;
    _objc_initWeak(auStack_b8,param_1);
    _objc_initWeak(auStack_c0,param_3);
    _objc_initWeak(auStack_c8,param_4);
    lVar2 = param_5;
    func_0x00010c10f520(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_b8);
    _objc_copyWeak(auStack_d8,auStack_c0);
    _objc_copyWeak(auStack_d0,auStack_c8);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    *(undefined1 *)(puStack_a8 + 3) = 1;
    puVar1 = puStack_88;
    uVar5 = puStack_88[5];
    _objc_retain(uVar5);
    uVar4 = puVar1[5];
    puVar1[5] = 0;
    _objc_release(uVar4);
    func_0x00010bef7e00(*(undefined8 *)(param_1 + 0x18));
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    __Block_object_dispose(&uStack_b0,8);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10559dea4; end: 10559debb;  */

void FUN_10559dea4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10559debc; end: 10559dfbf;  */

void FUN_10559debc(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bb2d8;
  _objc_opt_class(PTR_PTR_1126bb2d8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar8 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar8;
  func_0x00010be4dec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(lVar6);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(long *)(lVar8 + 0x28) = lVar6;
    _objc_release(uVar7);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10559dfc0; end: 10559e33b; -[CTPItemRendererGiphy _loadMediaWithPresentationModel:item:itemView:] */

void FUN_10559dfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = param_4;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ba880;
  _objc_opt_class(PTR_PTR_1126ba880);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar1);
    _objc_release(puVar3);
    func_0x00010bf436e0(puVar1);
    puVar3 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
  }
  else {
    uVar2 = param_4;
    func_0x00010bf96da0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae560;
    _objc_alloc_init(PTR_PTR_1126ae560);
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_10559dea4;
    uStack_88 = 0x10559deb4;
    uStack_80 = 0;
    uVar4 = uVar2;
    puStack_a0 = &uStack_a8;
    func_0x00010c0c45e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10559e33c;
    puStack_c0 = &UNK_110869400;
    _objc_retain(param_3);
    uStack_b8 = param_3;
    puStack_b0 = &uStack_a8;
    func_0x00010c0c1100(uVar4);
    _objc_release(uVar4);
    lVar6 = puStack_a0[5];
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_1;
      func_0x00010be4d9a0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_initWeak(auStack_e0,param_1);
    puVar3 = puVar5;
    func_0x00010bfbc3e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_e0);
    _objc_retain(param_5);
    _objc_retain(param_4);
    puVar7 = puVar1;
    _objc_retain(puVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
    _objc_release(uStack_b8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar5);
    _objc_release(uVar8);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10559e33c; end: 10559e3c3;  */

void FUN_10559e33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe8ba0();
  uVar3 = param_3;
  if ((lVar1 - 1U < 2) || (uVar3 = param_2, lVar1 == 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10559e3c4; end: 10559e3c7;  */

void FUN_10559e3c4(void)

{
  return;
}



/* Entry: 10559e3c8; end: 10559e53b;  */

void FUN_10559e3c8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(puVar4);
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        puVar4 = PTR_PTR_1126bb260;
        _objc_alloc(PTR_PTR_1126bb260);
        func_0x00010c01c560();
      }
      else {
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(param_1 + 0x28);
        _objc_release();
        if (lVar2 != lVar5) goto LAB_10559e510;
        func_0x00010c28c860(*(undefined8 *)(param_1 + 0x20));
        puVar4 = *(undefined **)(param_1 + 0x20);
        _objc_retain(puVar4);
      }
      _os_unfair_lock_lock(lVar1 + 0x14);
      func_0x00010c1be9a0(puVar4);
      _os_unfair_lock_unlock(lVar1 + 0x14);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(puVar3);
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar4);
    }
  }
LAB_10559e510:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10559e53c; end: 10559e793; -[CTPItemRendererGiphy _loadImageWithPromise:urlString:] */

void FUN_10559e53c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    func_0x00010bf43ca0(param_3);
    _objc_release(puVar5);
    uVar6 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    puVar1 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    puVar2 = PTR_PTR_1126b1058;
    _objc_alloc();
    func_0x00010c01b360();
    puVar3 = PTR_PTR_1126b1050;
    _objc_alloc(PTR_PTR_1126b1050);
    func_0x00010c05a200();
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_70,auStack_68);
    uVar6 = uVar4;
    func_0x00010c1267e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_70);
    _objc_release(param_3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10559e794; end: 10559e853;  */

void FUN_10559e794(long param_1,undefined8 param_2,ulong param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  if ((param_3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f38738,3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar2 = PTR_PTR_1126b2720;
    func_0x00010c14d040(PTR_PTR_1126b2720,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      _os_unfair_lock_lock(lVar1 + 0x14);
      *(undefined1 *)(lVar1 + 0x10) = param_4;
      _os_unfair_lock_unlock(lVar1 + 0x14);
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10559e854; end: 10559e883; -[CTPItemRendererGiphy .cxx_destruct] */

void FUN_10559e854(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10559e884; end: 10559ebdb; -[CTPItemRendererInfo initWithSnapchattersDataFetcher:currentUserId:photoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:downloader:simpleContentFetcher:urlPreviewProvider:contentDelivery:valdiRuntimeProvider:musicTrackAssetLoader:temporaryFileWriter:creativeToolsABProvider:fetchLimit:infoStickerViewProviderFactory:] */

undefined8 *
FUN_10559e884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_70 = PTR_PTR_1126e9138;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba958;
    _objc_alloc();
    func_0x00010c035d20();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bb2e0;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_18;
    _objc_release(uVar2);
  }
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



/* Entry: 10559ebdc; end: 10559ebe3; -[CTPItemRendererInfo ctItemEntityCase] */

undefined8 FUN_10559ebdc(void)

{
  return 9;
}



/* Entry: 10559ebe4; end: 10559ebef; -[CTPItemRendererInfo viewReuseIdentifier] */

undefined ** FUN_10559ebe4(void)

{
  return &PTR____CFConstantStringClassReference_110dec838;
}



/* Entry: 10559ebf0; end: 10559ebf7; -[CTPItemRendererInfo viewForItem:presentationModelProvider:] */

undefined8 FUN_10559ebf0(void)

{
  return 0;
}



/* Entry: 10559ebf8; end: 10559ebff; -[CTPItemRendererInfo attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

undefined8 FUN_10559ebf8(void)

{
  return 0;
}



/* Entry: 10559ec00; end: 10559ed7b; -[CTPItemRendererInfo viewForItemInstance:presentationModelProviderType:] */

void FUN_10559ec00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f38738,2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
  }
  else {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10559ed7c;
    puStack_50 = &UNK_110849f28;
    puStack_48 = puVar1;
    _objc_retain();
    func_0x00010be460e0(param_1,param_2,param_3,param_4,&puStack_68);
    puVar2 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
    puVar3 = puStack_48;
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10559ed7c; end: 10559eda7;  */

void FUN_10559ed7c(long param_1,undefined8 param_2)

{
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10559eda8; end: 10559f49f; -[CTPItemRendererInfo _itemViewFromItemInstance:presentationModelProviderType:completion:] */

void FUN_10559eda8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfedf40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bb328;
  switch(uVar4 & 0xffffffff) {
  case 0:
    uVar2 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cc820();
    _objc_release(uVar2);
    if ((int)uVar3 == 0xb) {
      FUN_1055a1580(param_3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_5)
      ;
      goto code_r0x00010559f424;
    }
    uVar2 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cc820();
    _objc_release(uVar2);
    if ((int)uVar3 != 0xd) goto LAB_10559f458;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    puVar6 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108eb95b0(param_3,uVar9,puVar8,param_5);
    goto code_r0x00010559f40c;
  case 1:
    puVar6 = PTR_PTR_1126bb2f0;
    break;
  case 2:
    puVar6 = PTR_PTR_1126bb2f8;
    break;
  case 3:
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = PTR_PTR_1126bab38;
    func_0x00010c22b6a0(PTR_PTR_1126bab38);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e723ac(param_3,uVar9,puVar6,param_5);
    goto code_r0x00010559f420;
  case 4:
    puVar6 = PTR_PTR_1126bb300;
    break;
  case 5:
    puVar6 = PTR_PTR_1126bb308;
    break;
  case 6:
    puVar6 = PTR_PTR_1126bb310;
    break;
  case 7:
    puVar7 = PTR_PTR_1126bb318;
    _objc_alloc();
    func_0x00010c020240();
    puVar1 = PTR_PTR_1126bb238;
    puVar6 = puVar7;
    func_0x00010bf43b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(puVar7);
    func_0x00010bec7060(puVar1);
    _objc_release(puVar6);
    _objc_release(param_5);
    puVar6 = puVar7;
    goto LAB_10559f418;
  case 8:
    puVar7 = PTR_PTR_1126bb320;
    _objc_alloc();
    func_0x00010c020180();
    puVar1 = PTR_PTR_1126bb238;
    puVar6 = puVar7;
    func_0x00010bf43b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(puVar7);
    func_0x00010bec7060(puVar1);
    _objc_release(puVar6);
    _objc_release(param_5);
    puVar6 = puVar7;
    goto LAB_10559f418;
  case 9:
    puVar6 = PTR_PTR_1126b5c90;
    break;
  case 10:
    lVar5 = param_1;
    func_0x00010bdde5a0();
    puVar1 = PTR_PTR_1126ba938;
    if ((int)lVar5 == 0) goto code_r0x00010559f424;
    puVar6 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17880(puVar1);
    goto code_r0x00010559f40c;
  case 0xb:
    puVar6 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar6);
    func_0x00010bf57280(puVar1);
    goto code_r0x00010559f420;
  case 0xc:
    puVar6 = PTR_PTR_1126bb330;
    _objc_alloc(PTR_PTR_1126bb330);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0201c0(puVar6);
    _objc_release(uVar9);
    goto code_r0x00010559f208;
  case 0xd:
    puVar6 = PTR_PTR_1126ae568;
    _objc_opt_new(PTR_PTR_1126ae568);
    puVar7 = PTR_PTR_1126bb338;
    _objc_alloc();
    func_0x00010c0201a0();
    puVar1 = PTR_PTR_1126bb238;
    _objc_retain(param_5);
    _objc_retain(puVar7);
    func_0x00010bec7060(puVar1);
    _objc_release(param_5);
    _objc_release(puVar7);
    _objc_release(puVar7);
    goto code_r0x00010559f420;
  case 0xe:
    lVar5 = param_1;
    func_0x00010bdde5a0();
    puVar1 = PTR_PTR_1126bb340;
    if ((int)lVar5 == 0) goto code_r0x00010559f424;
    puVar6 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294e00(puVar1);
    goto code_r0x00010559f40c;
  case 0xf:
    lVar5 = param_1;
    func_0x00010bdde5a0();
    puVar1 = PTR_PTR_1126bb348;
    if ((int)lVar5 == 0) goto code_r0x00010559f424;
    puVar6 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0a80(puVar1);
    goto code_r0x00010559f40c;
  case 0x10:
    puVar6 = PTR_PTR_1126bb2e8;
    break;
  case 0x11:
  case 0x13:
    lVar5 = param_1;
    func_0x00010bdde5a0();
    if (((int)lVar5 == 0) || (lVar5 = param_1, func_0x00010bdddcc0(), (int)lVar5 == 0))
    goto code_r0x00010559f424;
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    puVar6 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ce40(uVar9);
    goto code_r0x00010559f40c;
  case 0x12:
    lVar5 = param_1;
    func_0x00010bdde5a0();
    puVar1 = PTR_PTR_1126bb350;
    if ((int)lVar5 == 0) goto code_r0x00010559f424;
    puVar6 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fdf80(puVar1);
code_r0x00010559f40c:
    _objc_release(puVar8);
    goto LAB_10559f418;
  default:
LAB_10559f458:
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10559f220;
  }
  _objc_alloc(puVar6);
  func_0x00010c020180();
code_r0x00010559f208:
  puVar7 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
LAB_10559f220:
  (**(code **)(param_5 + 0x10))(param_5,puVar7);
LAB_10559f418:
  _objc_release(puVar7);
code_r0x00010559f420:
  _objc_release(puVar6);
code_r0x00010559f424:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10559f4a0; end: 10559f60f;  */

void FUN_10559f4a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10559f52c;
  puStack_38 = &UNK_11084aaa8;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x00010c28bc60(uVar2,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 10559f610; end: 10559f77f; +[CTPItemRendererInfo _subscribeOnceOnComplete:do:] */

void FUN_10559f610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10559f780;
  uStack_60 = 0x10559f790;
  uStack_58 = 0;
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c25ff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puStack_78[5];
  puStack_78[5] = uVar1;
  _objc_release(uVar2);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    func_0x00010bf86d40(puStack_78[5]);
    uVar1 = puStack_78[5];
    puStack_78[5] = 0;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10559f780; end: 10559f797;  */

void FUN_10559f780(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10559f798; end: 10559f7ff;  */

void FUN_10559f798(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0) {
    func_0x00010bf86d40();
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10559f800; end: 10559f8bf; -[CTPItemRendererInfo _checkValdiRuntimeProviderWithCompletion:] */

bool FUN_10559f800(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return param_1 != 0;
}



/* Entry: 10559f8c0; end: 10559f973; -[CTPItemRendererInfo _checkInfoStickerViewProviderFactoryWithCompletion:] */

bool FUN_10559f8c0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
    _objc_retain(param_3);
    func_0x00010bf99240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar2);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  return lVar3 != 0;
}



/* Entry: 10559f974; end: 10559fa17; -[CTPItemRendererInfo .cxx_destruct] */

void FUN_10559f974(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10559fa18; end: 10559fadb; -[CTPItemRendererSnapSticker initWithContentDelivery:circumstanceEngine:] */

undefined1 *
FUN_10559fa18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9140;
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
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10559fadc; end: 10559fcc7; -[CTPItemRendererSnapSticker legacyURLForSticker:] */

void FUN_10559fadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110dec858,
                      &PTR____CFConstantStringClassReference_110dec878,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010bf9e140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_2,uVar3);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44780(puVar2,param_2,puVar4,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c0f5800(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25ce00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c0f5800(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf9e140(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25ce00(puVar4,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010bdc2b80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar2);
      goto LAB_10559fca0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_10559fca0:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10559fcc8; end: 10559fccf; -[CTPItemRendererSnapSticker ctItemEntityCase] */

undefined8 FUN_10559fcc8(void)

{
  return 1;
}



/* Entry: 10559fcd0; end: 10559fcdb; -[CTPItemRendererSnapSticker viewReuseIdentifier] */

void FUN_10559fcd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb260,PTR_s_reuseIdentifier_11262d988);
  return;
}



/* Entry: 10559fcdc; end: 10559fe0f; -[CTPItemRendererSnapSticker viewForItem:presentationModelProvider:] */

void FUN_10559fcdc(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x1c);
  param_1[0x18] = 0;
  _os_unfair_lock_unlock(param_1 + 0x1c);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f38738,2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030a60(param_1,param_2,puVar3,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be4de60(param_1,param_2,param_3,0,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10559fe10; end: 10559feef; -[CTPItemRendererSnapSticker attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

void FUN_10559fe10(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x18) = 0;
  _os_unfair_lock_unlock(param_1 + 0x1c);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126bb260;
    _objc_opt_class(PTR_PTR_1126bb260);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_3);
      func_0x00010c28c860(param_3);
      func_0x00010be4de60(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      goto LAB_10559fec4;
    }
  }
  param_1 = 0;
LAB_10559fec4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10559fef0; end: 1055a015f; -[CTPItemRendererSnapSticker _loadMediaForSnapStickerItem:itemView:presenationModelProvider:] */

void FUN_10559fef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    uVar5 = 0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_1055a0160;
    uStack_70 = 0x1055a0170;
    uStack_68 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x2020000000;
    uStack_98 = 0;
    _objc_initWeak(auStack_b8,param_1);
    _objc_initWeak(auStack_c0,param_3);
    _objc_initWeak(auStack_c8,param_4);
    lVar2 = param_5;
    func_0x00010c10f520(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_b8);
    _objc_copyWeak(auStack_d8,auStack_c0);
    _objc_copyWeak(auStack_d0,auStack_c8);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    *(undefined1 *)(puStack_a8 + 3) = 1;
    puVar1 = puStack_88;
    uVar5 = puStack_88[5];
    _objc_retain(uVar5);
    uVar4 = puVar1[5];
    puVar1[5] = 0;
    _objc_release(uVar4);
    func_0x00010bef7e00(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    __Block_object_dispose(&uStack_b0,8);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1055a0160; end: 1055a0177;  */

void FUN_1055a0160(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055a0178; end: 1055a027b;  */

void FUN_1055a0178(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bb2d8;
  _objc_opt_class(PTR_PTR_1126bb2d8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar8 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar8;
  func_0x00010be4dec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(lVar6);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(long *)(lVar8 + 0x28) = lVar6;
    _objc_release(uVar7);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055a027c; end: 1055a065b; -[CTPItemRendererSnapSticker _loadMediaWithPresentationModel:item:itemView:] */

void FUN_1055a027c(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = param_4;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126babc8;
  _objc_opt_class(PTR_PTR_1126babc8);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar8);
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    puVar8 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar1);
    _objc_release(puVar8);
    func_0x00010bf436e0(puVar1);
    puVar8 = (undefined *)0x0;
    goto LAB_1055a05d8;
  }
  uVar2 = param_4;
  func_0x00010bf96da0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1055a0160;
  uStack_88 = 0x1055a0170;
  uStack_80 = 0;
  uVar3 = uVar2;
  puStack_a0 = &uStack_a8;
  func_0x00010c0c45e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1055a065c;
  puStack_c0 = &UNK_110869400;
  _objc_retain(param_3);
  uStack_b8 = param_3;
  puStack_b0 = &uStack_a8;
  func_0x00010c0c1100(uVar3);
  _objc_release(uVar3);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if ((int)puVar8 == 0) {
LAB_1055a04a0:
    puVar5 = param_1;
    func_0x00010be4d9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_e0,param_1);
    puVar8 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_e0);
    _objc_retain(param_5);
    _objc_retain(param_4);
    puVar6 = puVar1;
    _objc_retain(puVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
  }
  else {
    puVar8 = param_1;
    func_0x00010c08f7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puStack_a0[5];
    puStack_a0[5] = puVar8;
    _objc_release(uVar7);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if ((int)puVar8 == 0) goto LAB_1055a04a0;
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar4);
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar5);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar4);
  _objc_release(uVar2);
LAB_1055a05d8:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1055a065c; end: 1055a06e3;  */

void FUN_1055a065c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe8ba0();
  uVar3 = param_3;
  if ((lVar1 - 1U < 2) || (uVar3 = param_2, lVar1 == 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055a06e4; end: 1055a06e7;  */

void FUN_1055a06e4(void)

{
  return;
}



/* Entry: 1055a06e8; end: 1055a083f;  */

void FUN_1055a06e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(puVar4);
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        puVar4 = PTR_PTR_1126bb260;
        _objc_alloc(PTR_PTR_1126bb260);
        func_0x00010c01c560();
      }
      else {
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(param_1 + 0x28);
        _objc_release();
        if (lVar2 != lVar5) goto LAB_1055a0820;
        func_0x00010c28c860(*(undefined8 *)(param_1 + 0x20));
        puVar4 = *(undefined **)(param_1 + 0x20);
        _objc_retain(puVar4);
      }
      _os_unfair_lock_lock(lVar1 + 0x1c);
      func_0x00010c1be9a0(puVar4);
      _os_unfair_lock_unlock(lVar1 + 0x1c);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(puVar3);
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar4);
    }
  }
LAB_1055a0820:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055a0840; end: 1055a0a97; -[CTPItemRendererSnapSticker _loadImageWithPromise:urlString:] */

void FUN_1055a0840(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    func_0x00010bf43ca0(param_3);
    _objc_release(puVar5);
    uVar6 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    puVar1 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    puVar2 = PTR_PTR_1126b1058;
    _objc_alloc();
    func_0x00010c01b360();
    puVar3 = PTR_PTR_1126b1050;
    _objc_alloc(PTR_PTR_1126b1050);
    func_0x00010c05a200();
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uVar6 = uVar4;
    func_0x00010c1267e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1055a0a98; end: 1055a0b17;  */

void FUN_1055a0a98(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b2720;
  func_0x00010c14d040(PTR_PTR_1126b2720,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    _os_unfair_lock_lock(lVar2 + 0x1c);
    *(undefined1 *)(lVar2 + 0x18) = param_4;
    _os_unfair_lock_unlock(lVar2 + 0x1c);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055a0b18; end: 1055a0b53; -[CTPItemRendererSnapSticker .cxx_destruct] */

void FUN_1055a0b18(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055a0b54; end: 1055a0c03; -[CTPItemViewCancelableRequest initWithObservable:cancelable:] */

undefined1 *
FUN_1055a0b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9148;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    func_0x00010c126c80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055a0c04; end: 1055a0ccb; -[CTPItemViewCancelableRequest registerOnComplete] */

void FUN_1055a0c04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1055a0ccc; end: 1055a0cfb;  */

void FUN_1055a0ccc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c17f9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055a0cfc; end: 1055a0d0f; -[CTPItemViewCancelableRequest cancel] */

void FUN_1055a0cfc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1055a0d10; end: 1055a0d17; -[CTPItemViewCancelableRequest observable] */

undefined8 FUN_1055a0d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1055a0d18; end: 1055a0d1f; -[CTPItemViewCancelableRequest complete] */

undefined1 FUN_1055a0d18(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1055a0d20; end: 1055a0d27; -[CTPItemViewCancelableRequest setComplete:] */

void FUN_1055a0d20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1055a0d28; end: 1055a0d63; -[CTPItemViewCancelableRequest .cxx_destruct] */

void FUN_1055a0d28(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055a0d64; end: 1055a11cf; -[SCWebAttachmentContentLoader fetchWebAttachmentContentWithUrl:urlPreviewProvider:completionQueue:completion:] */

void FUN_1055a0d64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1055a11d0;
  uStack_88 = 0x1055a11e0;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1055a11d0;
  uStack_b8 = 0x1055a11e0;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_1055a11d0;
  uStack_e8 = 0x1055a11e0;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_1055a11d0;
  uStack_118 = 0x1055a11e0;
  uStack_110 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_1055a11d0;
  uStack_148 = 0x1055a11e0;
  uStack_140 = 0;
  _dispatch_group_create();
  _objc_initWeak(auStack_170,param_1);
  _dispatch_group_enter(uVar7);
  uVar6 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bfa9620(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_1055a11e8;
  puStack_1a0 = &UNK_1108999f8;
  _objc_copyWeak(auStack_178,auStack_170);
  puStack_190 = &uStack_168;
  puStack_188 = &uStack_a8;
  puStack_180 = &uStack_d8;
  _objc_retain(uVar7);
  uVar5 = uVar4;
  uStack_198 = uVar7;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _dispatch_group_enter(uVar7);
  uVar6 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1f8 = puVar1;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_1055a134c;
  puStack_1e0 = &UNK_110899a28;
  puStack_1c8 = &uStack_138;
  puStack_1c0 = &uStack_108;
  _objc_retain(param_3);
  uStack_1d8 = param_3;
  _objc_retain(uVar7);
  puStack_220 = puVar1;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_1055a1410;
  puStack_208 = &UNK_110849810;
  uStack_1d0 = uVar7;
  _objc_retain(uVar7);
  uStack_200 = uVar7;
  func_0x000108e72b4c(param_3,uVar6,&puStack_1f8,&puStack_220);
  _objc_release(uVar6);
  puStack_270 = puVar1;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_1055a1418;
  puStack_258 = &UNK_110899a58;
  puStack_240 = &uStack_a8;
  puStack_230 = &uStack_d8;
  uStack_250 = param_3;
  uStack_248 = param_6;
  puStack_238 = &uStack_108;
  puStack_228 = &uStack_138;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x000100bc0718(uVar7,param_5,&puStack_270);
  _objc_release(uStack_248);
  _objc_release(uStack_250);
  _objc_release(uStack_200);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_198);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_170);
  _objc_release(uVar7);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1055a11d0; end: 1055a11e7;  */

void FUN_1055a11d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055a11e8; end: 1055a1313;  */

void FUN_1055a11e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0c0800(param_2);
    func_0x00010bf86d80(*(undefined8 *)(lVar1 + 8));
    uVar2 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    _objc_release(uVar2);
    uVar3 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if ((uVar3 != 0) && (func_0x00010c07efa0(), (uVar3 & 1) == 0)) {
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar2;
      _objc_release(uVar4);
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar2;
      _objc_release(uVar4);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055a1314; end: 1055a134b;  */

void FUN_1055a1314(long param_1,undefined8 param_2)

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



/* Entry: 1055a134c; end: 1055a140f;  */

void FUN_1055a134c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar3 = param_3;
  func_0x00010c08fa60();
  lVar2 = param_3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar1);
  if (lVar3 == 0) {
    _objc_release(lVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055a1410; end: 1055a1417;  */

void FUN_1055a1410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1055a1418; end: 1055a14ff;  */

void FUN_1055a1418(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010c08fa60();
  lVar5 = 0x38;
  if (lVar1 != 0) {
    lVar5 = 0x30;
  }
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + lVar5) + 8) + 0x28);
  _objc_retain(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108e73198(uVar2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108e73298();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))
              (lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1055a1500; end: 1055a1573;  */

void FUN_1055a1500(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 1055a1574; end: 1055a157f; -[SCWebAttachmentContentLoader .cxx_destruct] */

void FUN_1055a1574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055a1580; end: 1055a17cb;  */

void FUN_1055a1580(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf0d340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar3);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x00010c04e820();
    _objc_retain(param_4);
    func_0x00010bfab660(param_2);
    _objc_release(param_4);
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1055a17cc; end: 1055a17f7; +[SCGrapheneCtPlatformSyncMetric syncRequestCount] */

void FUN_1055a17cc(void)

{
  _objc_alloc(PTR_PTR_1126baca8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a17f8; end: 1055a1823; +[SCGrapheneCtPlatformSyncMetric syncResponseCount] */

void FUN_1055a17f8(void)

{
  _objc_alloc(PTR_PTR_1126baca8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a1824; end: 1055a184f; +[SCGrapheneCtPlatformSyncMetric networkResponseLatency] */

void FUN_1055a1824(void)

{
  _objc_alloc(PTR_PTR_1126baca8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a1850; end: 1055a187b; +[SCGrapheneCtPlatformSyncMetric cacheHitCount] */

void FUN_1055a1850(void)

{
  _objc_alloc(PTR_PTR_1126baca8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a187c; end: 1055a18a7; +[SCGrapheneCtPlatformSyncMetric cacheMissCount] */

void FUN_1055a187c(void)

{
  _objc_alloc(PTR_PTR_1126baca8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a18a8; end: 1055a18d3; +[SCGrapheneCtPlatformSyncMetric emptyItemsResult] */

void FUN_1055a18a8(void)

{
  _objc_alloc(PTR_PTR_1126baca8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a18d4; end: 1055a18ff; +[SCGrapheneCtPlatformSyncMetric errorItemsResult] */

void FUN_1055a18d4(void)

{
  _objc_alloc(PTR_PTR_1126baca8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a1900; end: 1055a192b; +[SCGrapheneCtPlatformSyncMetric imageLoadLatency] */

void FUN_1055a1900(void)

{
  _objc_alloc(PTR_PTR_1126baca8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a192c; end: 1055a1957; +[SCGrapheneCtPlatformSyncMetric imageLoadCounter] */

void FUN_1055a192c(void)

{
  _objc_alloc(PTR_PTR_1126baca8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


