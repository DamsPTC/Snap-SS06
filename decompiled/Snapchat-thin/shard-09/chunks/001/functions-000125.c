/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a4d388; end: 106a4d3a7; +[SCCContextOperaChromeHeaderRendererViewModel valdiMarshallableObjectDescriptor] */

void FUN_106a4d388(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109580e8;
  param_1[1] = &PTR_DAT_110958118;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a4d3a8; end: 106a4d3d3;  */

void FUN_106a4d3a8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106a4d3d4; end: 106a4d487;  */

void FUN_106a4d3d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010c1248a0(param_3);
    lVar3 = param_3;
    func_0x00010bfce1c0(param_3);
    lVar4 = param_3;
    func_0x00010bf1e520(param_3);
    dVar5 = (double)(int)lVar4;
    dVar6 = dVar5 / 255.0;
    func_0x00010bf01b40(param_3);
    _objc_release(param_3);
    func_0x00010bf41620((double)(int)lVar2 / 255.0,(double)(int)lVar3 / 255.0,dVar6,
                        (double)SUB84(dVar5,0),puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4d488; end: 106a4d51b; -[SCContextFadedScrollView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4d488(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f46b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c2877c0(param_1);
  if (*(char *)(param_1 + _DAT_112756580) == '\x01') {
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010bf20c00(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112756584));
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  return;
}



/* Entry: 106a4d51c; end: 106a4d76f; -[SCContextFadedScrollView setFadeAmount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4d51c(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *unaff_x19;
  undefined *unaff_x20;
  long lVar8;
  long lVar9;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112756588;
  puVar1 = param_2;
  puStack_a8 = unaff_x19;
  if (*(double *)(param_2 + lVar8) != param_1) {
    puStack_a8 = param_2;
    if (param_1 == 0.0) {
      unaff_x20 = param_2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(unaff_x20);
      puVar1 = *(undefined **)(param_2 + _DAT_112756584);
      *(undefined8 *)(param_2 + _DAT_112756584) = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
      goto LAB_106a4d76c;
    }
    lVar9 = (long)_DAT_112756584;
    if (*(long *)(param_2 + lVar9) == 0) {
      puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + lVar9);
      *(undefined **)(param_2 + lVar9) = puVar2;
      _objc_release(uVar7);
      func_0x00010c209760(0,0x3fe0000000000000,*(undefined8 *)(param_2 + lVar9));
      func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000,*(undefined8 *)(param_2 + lVar9));
      unaff_x20 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = unaff_x20;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_88 = puVar2;
      func_0x00010bf41680(0,0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_80 = puVar2;
      func_0x00010bf41680(0,0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_78 = puVar2;
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60(*(undefined8 *)(param_2 + lVar9));
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(unaff_x20);
    }
    *(double *)(param_2 + lVar8) = param_1;
    func_0x00010c2877c0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_106a4d76c:
  ___stack_chk_fail();
  pcStack_98 = FUN_106a4d770;
  puStack_b8 = PTR_PTR_1126f46b0;
  puStack_c0 = puVar1;
  puStack_b0 = unaff_x20;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_setContentSize__11263e410);
  func_0x00010c2877c0(puVar1);
  return;
}



/* Entry: 106a4d770; end: 106a4d7b7; -[SCContextFadedScrollView setContentSize:] */

void FUN_106a4d770(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f46b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setContentSize__11263e410);
  func_0x00010c2877c0(param_1);
  return;
}



/* Entry: 106a4d7b8; end: 106a4da27; -[SCContextFadedScrollView updateMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106a4d7b8(double param_1,undefined8 param_2,double param_3,undefined *param_4,
                    undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  func_0x00010bf20c00();
  dVar9 = param_1;
  if (0.0 < param_3) {
    puVar4 = param_4;
    func_0x00010bf4d5e0();
    lVar8 = (long)_DAT_112756588;
    dVar9 = *(double *)(param_4 + lVar8);
    lVar7 = (long)_DAT_112756580;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (0.0 < dVar9) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1) && !NAN(param_3)) {
        bVar1 = param_1 < param_3;
        bVar2 = param_1 == param_3;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      if (param_4[lVar7] == '\x01') {
        param_4[lVar7] = 0;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_4;
        func_0x00010c1c2c00();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(param_4);
          return dVar9;
        }
        goto LAB_106a4da24;
      }
    }
    else {
      param_4[lVar7] = 1;
      lVar7 = (long)_DAT_112756584;
      puVar4 = param_4;
      func_0x00010c08c0e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(puVar4);
      puVar4 = param_4;
      func_0x00010bf4cdc0();
      dVar11 = *(double *)(param_4 + lVar8);
      dVar12 = 1.0;
      if (dVar9 / dVar11 <= 1.0) {
        dVar12 = dVar9 / dVar11;
      }
      if (dVar12 <= 0.0) {
        dVar12 = 0.0;
      }
      dVar12 = dVar11 * dVar12;
      dVar10 = ((param_1 - param_3) - dVar9) / dVar11;
      dVar9 = 1.0;
      if (dVar10 <= 1.0) {
        dVar9 = dVar10;
      }
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      dVar11 = dVar11 * dVar9;
      lVar8 = (long)_DAT_112756590;
      if ((dVar12 != *(double *)(param_4 + _DAT_11275658c)) ||
         (dVar9 = *(double *)(param_4 + lVar8), dVar11 != dVar9)) {
        *(double *)(param_4 + _DAT_11275658c) = dVar12;
        *(double *)(param_4 + lVar8) = dVar11;
        func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
        func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_5,1);
        ppuStack_88 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184c00;
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(dVar12 / param_3);
        _objc_retainAutoreleasedReturnValue();
        dVar9 = 1.0 - dVar11 / param_3;
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_80 = puVar4;
        func_0x00010c0df720(dVar9);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_70 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184c10;
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_78 = puVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&ppuStack_88,4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bff00(*(undefined8 *)(param_4 + lVar7),param_5,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___CATransaction_1126b5718;
        func_0x00010bf42760();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar9;
  }
LAB_106a4da24:
  ___stack_chk_fail();
  return *(double *)(puVar4 + _DAT_112756588);
}



/* Entry: 106a4da28; end: 106a4da37; -[SCContextFadedScrollView fadeAmount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a4da28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112756588);
}



/* Entry: 106a4da38; end: 106a4da4b; -[SCContextFadedScrollView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4da38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112756584,0);
  return;
}



/* Entry: 106a4da4c; end: 106a4dacb; -[SCContextHitTestView initWithHitTestInsets:] */

undefined1 *
FUN_106a4da4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f46b8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1a8c40(param_1,param_2,param_3,param_4,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a4dacc; end: 106a4db4f; -[SCContextHitTestView pointInside:withEvent:] */

void FUN_106a4dacc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = param_1;
  dVar3 = param_2;
  func_0x00010bf20c00();
  dVar2 = dVar1;
  dVar4 = dVar3;
  dVar5 = param_3;
  dVar6 = param_4;
  func_0x00010bfe3a80(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar1 + dVar4,dVar3 + dVar2,param_3 - (dVar4 + dVar6),param_4 - (dVar2 + dVar5),param_1
             ,param_2);
  return;
}



/* Entry: 106a4db50; end: 106a4dc77; -[SCContextHitTestView shouldBlockSwipe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106a4db50(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
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
  func_0x00010bfc1c00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        if (*(ulong *)(lStack_108 + lVar4 * 8) == param_3) {
          uVar2 = param_3;
          func_0x00010bf7f0e0(param_3);
          uVar2 = (ulong)(uVar2 == 8);
          goto LAB_106a4dc30;
        }
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    uVar2 = 0;
  }
LAB_106a4dc30:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar2;
  }
  ___stack_chk_fail();
  return param_3;
}



/* Entry: 106a4dc78; end: 106a4dc8f; -[SCContextHitTestView hitTestInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a4dc78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112756594);
}



/* Entry: 106a4dc90; end: 106a4dca7; -[SCContextHitTestView setHitTestInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4dc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112756594);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 106a4dca8; end: 106a4de93; -[SCContextImageSourceView initWithImageDownloader:imagePerformer:targetsService:circumstanceEngine:musicTrackAssetLoader:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106a4dca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f46c0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithOptions__1125ea260,0x1f);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b48f0;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_11275659c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1aa200(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1bec20(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    lVar4 = (long)_DAT_1127565a0;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127565a4;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + (long)_DAT_1127565a8) = (char)uVar3;
    lVar4 = (long)_DAT_1127565ac;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127565b0;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    func_0x00010c17d4c0(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a4de94; end: 106a4df27; -[SCContextImageSourceView configureWithSource:completion:] */

void FUN_106a4de94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a4df28;
  puStack_40 = &UNK_110859a38;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c09c200(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106a4df28; end: 106a4dfc3;  */

void FUN_106a4df28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106a4dfc4;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 106a4dfc4; end: 106a4dfdf;  */

void FUN_106a4dfc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a4dfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 106a4dfe0; end: 106a4e15b; -[SCContextImageSourceView loadSource:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4dfe0(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112756598;
  *(undefined1 *)(param_1 + lVar3) = 0;
  uVar2 = param_3;
  func_0x00010bfdcda0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c20eaa0(param_1);
  }
  else {
    uVar2 = param_3;
    func_0x00010c25dfa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eaa0(param_1);
    _objc_release(uVar2);
  }
  func_0x00010be8e7c0(param_1);
  uVar2 = param_3;
  func_0x00010c24cb80();
  iVar1 = (int)uVar2;
  uVar2 = param_3;
  if (iVar1 == 3) {
    *(undefined1 *)(param_1 + lVar3) = 1;
    func_0x00010bf93ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09bc20(param_1);
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + lVar3) = 1;
    func_0x00010c129b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c040(param_1);
  }
  else {
    if (iVar1 != 1) {
      (**(code **)(param_4 + 0x10))(param_4,0);
      goto LAB_106a4e13c;
    }
    func_0x00010c09d760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09b880(param_1);
  }
  _objc_release(uVar2);
LAB_106a4e13c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4e15c; end: 106a4e373; -[SCContextImageSourceView loadCameosSource:renderingMode:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4e15c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649e0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60();
  _objc_release(puVar2);
  func_0x00010c1ec620(puVar1);
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    puVar3 = PTR_PTR_1126cfec8;
    _objc_alloc(PTR_PTR_1126cfec8);
    func_0x00010bffa780();
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127565a0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = param_4;
    _objc_retain(param_5);
    func_0x00010bfc3100(0x4059000000000000,0x4059000000000000,uVar4);
    _objc_release(uVar4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106a4e374; end: 106a4e44f;  */

void FUN_106a4e374(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106a4e450;
  puStack_58 = &UNK_1108484f8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106a4e450; end: 106a4e4fb;  */

void FUN_106a4e450(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_106a4e4fc;
  puStack_40 = &UNK_110958128;
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c09bc60(lVar1,param_2,puVar2,&puStack_58,*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106a4e4fc; end: 106a4e507;  */

void FUN_106a4e4fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_imageWithRenderingMode__1125d7f90,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106a4e508; end: 106a4e6b3; -[SCContextImageSourceView loadLocalSource:renderingMode:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4e508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e684d8;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106a4e6b4;
  puStack_88 = &UNK_110958148;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_a0;
  uStack_80 = param_5;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127565a4);
  _objc_copyWeak(auStack_b0,auStack_68);
  _objc_retain(param_3);
  uStack_a8 = param_4;
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106a4e6b4; end: 106a4e78f;  */

void FUN_106a4e6b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106a4e790;
  puStack_58 = &UNK_1108484f8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106a4e790; end: 106a4e867;  */

void FUN_106a4e790(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c09bc60(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106a4e868; end: 106a4e8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4e868(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (*(char *)(param_1 + _DAT_1127565a8) != '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfe9720(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a4e8f0; end: 106a4eaf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4e8f0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_106a4e968;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c0720c0();
      if (iVar1 == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c0720c0();
        if (iVar1 == 0) {
          puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe8260(PTR__OBJC_CLASS___UIImage_1126aea68);
          _objc_retainAutoreleasedReturnValue();
          if ((*(byte *)(lVar2 + _DAT_1127565a8) & 1) == 0) {
            puVar4 = puVar3;
            func_0x00010bfe9720(puVar3);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106a4e9dc;
          }
        }
        else {
          puVar4 = PTR_PTR_1126b0c40;
          func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010bfe9720();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
        }
      }
      else {
        puVar3 = PTR_PTR_1126b0c40;
        func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar3 = PTR_PTR_1126b0c40;
      func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
      _objc_retainAutoreleasedReturnValue();
      if ((*(byte *)(lVar2 + _DAT_1127565a8) & 1) == 0) {
        puVar4 = puVar3;
        func_0x00010bfe9720(puVar3);
        _objc_retainAutoreleasedReturnValue();
LAB_106a4e9dc:
        _objc_release(puVar3);
        puVar3 = puVar4;
      }
    }
  }
  else {
    puVar3 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar3);
  _objc_release(puVar3);
LAB_106a4e968:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a4eaf4; end: 106a4ecc7; -[SCContextImageSourceView loadRemoteSource:renderingMode:completion:] */

void FUN_106a4eaf4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    puVar2 = puVar1;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) {
      puVar2 = puVar1;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 == 0) {
        puVar2 = PTR_PTR_1126b4860;
        func_0x00010c0fde60(PTR_PTR_1126b4860);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09bc60(param_1);
      }
      else {
        func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110e68498);
        puVar2 = param_3;
        func_0x00010c260c00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be4cb40(param_1);
      }
    }
    else {
      puVar2 = puVar1;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09afc0(param_1);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106a4ecc8; end: 106a4ecd3;  */

void FUN_106a4ecc8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_imageWithRenderingMode__1125d7f90,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106a4ecd4; end: 106a4ef23; -[SCContextImageSourceView loadMusicEncryptedMedia:renderingMode:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4ecd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = param_3;
  func_0x00010bf4db80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_1127565ac;
  if (*(long *)(param_1 + lVar5) == 0 || puVar2 == (undefined *)0x0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106a4ef24;
    puStack_98 = &UNK_110958148;
    _objc_copyWeak(auStack_88,auStack_78);
    uStack_80 = param_4;
    _objc_retain(param_5);
    ppuVar3 = &puStack_b0;
    lStack_90 = param_5;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + lVar5);
    uVar1 = param_3;
    func_0x00010bf92c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf92c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ad00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    _objc_retain(param_5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_release(ppuVar3);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106a4ef24; end: 106a4f01b;  */

void FUN_106a4ef24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  func_0x00010c23d0a0(param_2);
  uVar1 = param_2;
  func_0x00010bf5c8c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106a4f01c;
  puStack_58 = &UNK_1108484f8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106a4f01c; end: 106a4f0f3;  */

void FUN_106a4f01c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c09bc60(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106a4f0f4; end: 106a4f17b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4f0f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (*(char *)(param_1 + _DAT_1127565a8) != '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfe9720(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a4f17c; end: 106a4f19b;  */

void FUN_106a4f17c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (param_2 != 0) {
    lVar1 = 0x20;
    param_3 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000106a4f198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + lVar1) + 0x10))(*(long *)(param_1 + lVar1),param_3);
  return;
}



/* Entry: 106a4f19c; end: 106a4f2b3; -[SCContextImageSourceView loadNetworkImage:imageProcessingBlock:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4f19c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275659c);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010c1cc220(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a4f2b4; end: 106a4f30f;  */

void FUN_106a4f2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c069fa0();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4f310; end: 106a4f387; -[SCContextImageSourceView _renderingModeForSource:] */

undefined8 FUN_106a4f310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c270ee0();
  iVar1 = (int)uVar3;
  if (iVar1 != -0x4524111) {
    if (iVar1 == 2) {
      uVar3 = 1;
      goto LAB_106a4f370;
    }
    if (iVar1 != 0) {
      uVar3 = 2;
      goto LAB_106a4f370;
    }
  }
  uVar2 = param_3;
  func_0x00010c24cb80();
  uVar3 = 1;
  if ((int)uVar2 == 1) {
    uVar3 = 2;
  }
LAB_106a4f370:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106a4f388; end: 106a4f6bf; -[SCContextImageSourceView _loadCTItemInstanceString:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4f388(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_1127565b0;
  if (*(long *)(param_1 + lVar12) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,puVar2);
    goto LAB_106a4f660;
  }
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc();
  func_0x00010bff6b20();
  puStack_78 = (undefined *)0x0;
  puVar4 = PTR_PTR_1126b0cc0;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_78;
  _objc_retain(puStack_78);
  if (puVar1 == (undefined *)0x0) {
    if ((puVar3 == (undefined *)0x0) || (puVar4 == (undefined *)0x0)) {
      pcVar10 = *(code **)(param_4 + 0x10);
      puVar7 = puVar2;
      goto LAB_106a4f644;
    }
    _objc_initWeak(auStack_80,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106a4f6c0;
    puStack_98 = &UNK_110851440;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_4);
    ppuVar5 = &puStack_b0;
    lStack_90 = param_4;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c29ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar6);
    uVar6 = uVar8;
    func_0x00010c0e0460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_retain(param_4);
    uVar6 = uVar9;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + _DAT_1127565b4);
    *(undefined8 *)(param_1 + _DAT_1127565b4) = uVar6;
    _objc_release(uVar11);
    _objc_release(param_4);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(ppuVar5);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  else {
    pcVar10 = *(code **)(param_4 + 0x10);
    puVar7 = puVar1;
LAB_106a4f644:
    (*pcVar10)(param_4,puVar7);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
LAB_106a4f660:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a4f6c0; end: 106a4f793;  */

void FUN_106a4f6c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106a4f794;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106a4f794; end: 106a4f803;  */

void FUN_106a4f794(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09bc60(lVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110958208,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a4f804; end: 106a4f8c3;  */

void FUN_106a4f804(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106a4f8c4; end: 106a4f927;  */

void FUN_106a4f8c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfe90c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a4f928; end: 106a4f933;  */

void FUN_106a4f928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a4f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106a4f934; end: 106a4f943; -[SCContextImageSourceView applyForegroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4f934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275659c),PTR_s_setTintColor__112663280);
  return;
}



/* Entry: 106a4f944; end: 106a4f973; -[SCContextImageSourceView viewForShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4f944(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275659c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a4f974; end: 106a4f983; -[SCContextImageSourceView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4f974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275659c),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 106a4f984; end: 106a4f993; -[SCContextImageSourceView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4f984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275659c),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 106a4f994; end: 106a4f9a3; -[SCContextImageSourceView isRemoteSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106a4f994(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112756598);
}



/* Entry: 106a4f9a4; end: 106a4fa23; -[SCContextImageSourceView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4f9a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127565b4,0);
  _objc_storeStrong(param_1 + _DAT_1127565b0,0);
  _objc_storeStrong(param_1 + _DAT_1127565ac,0);
  _objc_storeStrong(param_1 + _DAT_11275659c,0);
  _objc_storeStrong(param_1 + _DAT_1127565a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127565a4,0);
  return;
}



/* Entry: 106a4fa24; end: 106a4fbe7; -[SCContextImageView initWithImageDownloader:imagePerformer:targetsService:circumstanceEngine:musicTrackAssetLoader:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106a4fa24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126f46c8;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    ((undefined8 *)((long)puVar1 + (long)_DAT_1127565c0))[1] = 0xbff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127565c0) = 0xbff0000000000000;
    ((undefined8 *)((long)puVar1 + (long)_DAT_1127565c4))[1] = 0xbff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127565c4) = 0xbff0000000000000;
    func_0x00010c181cc0(0x443b8000,puVar1);
    func_0x00010c181f00(0x443b8000,puVar1);
    puVar2 = PTR_PTR_1126cfed0;
    _objc_alloc();
    func_0x00010c01c820();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127565c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127565c8) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126cfed0;
    _objc_alloc();
    func_0x00010c01c820();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127565cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127565cc) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a4fbe8; end: 106a4fd2f; -[SCContextImageView configureWithImage:] */

void FUN_106a4fbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010028941c();
  func_0x00010c209ca0(param_1);
  uVar2 = param_3;
  func_0x00010c0fda60();
  if ((int)uVar2 == 0) {
    uVar1 = 0x3dcccccd;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0fda60();
    uVar1 = 0;
    if ((int)uVar2 < 1) {
      uVar1 = 0x3dcccccd;
    }
  }
  func_0x00010c201260(param_1);
  func_0x00010c1a9f00(param_1);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a4fd30;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x000100c749e0(uVar1,"APPSTORE",&puStack_78);
  func_0x00010c069fa0(param_1);
  func_0x00010c1cbe20(param_1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106a4fd30; end: 106a4fdab;  */

void FUN_106a4fd30(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    if (((int)uVar3 != 0) && (uVar2 = uVar1, func_0x00010bfdaa00(), (uVar2 & 1) == 0)) {
      func_0x00010c201260(uVar1,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a4fdac; end: 106a4ff2b; -[SCContextImageView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4fdac(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  lVar4 = (long)_DAT_1127565d0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar2;
  _objc_release(uVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010bfda4a0();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127565c8);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0fd720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47b20(uVar3);
    _objc_release(uVar2);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010bfd4360();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127565cc);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf0af00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf47b20(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a4ff2c; end: 106a4ff87;  */

void FUN_106a4ff2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfe6ae0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a4ff88; end: 106a5003b; -[SCContextImageView image:loadedWithError:] */

void FUN_106a4ff88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    return;
  }
  if (param_4 != 0) {
    func_0x00010c1a67e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c201270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldShowPlaceholder__11265dec0,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c27ab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_transitionToAsset_11267c4e8);
  return;
}



/* Entry: 106a5003c; end: 106a5009f; -[SCContextImageView setShouldShowPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a5003c(long param_1,undefined8 param_2,uint param_3)

{
  *(char *)(param_1 + _DAT_1127565d4) = (char)param_3;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127565c8),param_2,param_3 ^ 1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127565cc));
  func_0x00010c069fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106a500a0; end: 106a50293; -[SCContextImageView transitionToAsset] */

/* WARNING: Possible PIC construction at 0x000106a50148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a5014c) */

void FUN_106a500a0(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = param_1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fda60();
  dVar4 = (double)(int)uVar3;
  dVar6 = dVar4 / 1000.0;
  _objc_release(uVar2);
  func_0x00010c251da0(param_1);
  dVar5 = dVar4;
  func_0x00010028941c();
  dVar5 = dVar5 - dVar4;
  if (((0.0 < dVar6) && (0.0 < dVar4)) && (0.0 < dVar6 - dVar5)) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106a50294;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000100c749e0((float)(dVar6 - dVar5),"APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
  bVar1 = false;
  if ((dVar6 <= 0.0) && (bVar1 = false, !NAN(dVar5))) {
    bVar1 = dVar5 < 0.5;
  }
  if (bVar1) {
    func_0x00010c1a67e0(param_1);
  }
  else {
    func_0x00010c069fa0(param_1);
    func_0x00010c1cbe20(param_1);
    func_0x00010c1a67e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c201270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldShowPlaceholder__11265dec0,0);
  return;
}



/* Entry: 106a50294; end: 106a502c7;  */

void FUN_106a50294(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c27ab00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a502c8; end: 106a50357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a502c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = (long)_DAT_1127565c8;
  func_0x00010bf08ac0(*(long *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  lVar1 = (long)_DAT_1127565cc;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,&uStack_60);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  return;
}



/* Entry: 106a50358; end: 106a5039f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50358(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    lVar1 = (long)_DAT_1127565c8;
    func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),
               PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 106a503a0; end: 106a50463; -[SCContextImageView applyTransitionTransformToView:] */

void FUN_106a503a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27a660();
  _objc_release(param_1);
  if ((int)uVar1 == 3) {
    _CGAffineTransformMakeScale(&uStack_c0,0x3fe0000000000000,0x3fe0000000000000);
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
  }
  else {
    if ((int)uVar1 != 2) goto LAB_106a50448;
    _CGAffineTransformMakeScale(&uStack_60,0xbff0000000000000,0x3feb333333333333);
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
  }
  func_0x00010c219960(param_3,param_2,&uStack_90);
LAB_106a50448:
  _objc_release(param_3);
  return;
}



/* Entry: 106a50464; end: 106a504b7; -[SCContextImageView transitionDuration] */

undefined8 FUN_106a50464(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27a660();
  _objc_release(param_1);
  lVar1 = 8;
  if (((uint)uVar2 & 0xfffffffe) != 2) {
    lVar1 = 0;
  }
  return *(undefined8 *)(&UNK_10dde3ad0 + lVar1);
}



/* Entry: 106a504b8; end: 106a5057f; -[SCContextImageView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106a504b8(undefined8 param_1,double param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puVar6;
  
  lVar3 = param_3;
  func_0x00010bf2dae0();
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0c2a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_maxPreferredDimensions_11260e498);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = param_1;
    return auVar11;
  }
  puVar6 = (undefined8 *)(param_3 + _DAT_1127565c8);
  iVar2 = (int)*puVar6;
  func_0x00010c074c20();
  if (iVar2 != 0) {
    puVar6 = (undefined8 *)(param_3 + _DAT_1127565cc);
  }
  uVar5 = *puVar6;
  _objc_retain(uVar5);
  uVar4 = uVar5;
  func_0x00010c07c300();
  lVar3 = 4;
  if ((int)uVar4 == 0) {
    lVar3 = 0;
  }
  dVar8 = *(double *)(param_3 + *(int *)(&DAT_1127565c0 + lVar3));
  dVar9 = ((double *)(param_3 + *(int *)(&DAT_1127565c0 + lVar3)))[1];
  dVar7 = -1.0;
  bVar1 = false;
  if ((dVar8 == -1.0) && (bVar1 = false, !NAN(dVar9))) {
    bVar1 = dVar9 == -1.0;
  }
  if (bVar1) {
    func_0x00010c0699c0(uVar5);
    dVar8 = dVar7;
    dVar9 = param_2;
  }
  _objc_release(uVar5);
  auVar10._8_8_ = dVar9;
  auVar10._0_8_ = dVar8;
  return auVar10;
}



/* Entry: 106a50580; end: 106a505e3; -[SCContextImageView canUseMaxPreferredDimensions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106a50580(long param_1)

{
  if (*(char *)(param_1 + _DAT_1127565d8) == '\x01') {
    return (((double *)(param_1 + _DAT_1127565c0))[1] != -1.0 ||
           *(double *)(param_1 + _DAT_1127565c0) != -1.0) &&
           (((double *)(param_1 + _DAT_1127565c4))[1] != -1.0 ||
           *(double *)(param_1 + _DAT_1127565c4) != -1.0);
  }
  return false;
}



/* Entry: 106a505e4; end: 106a50607; -[SCContextImageView maxPreferredDimensions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a505e4(void)

{
  return;
}



/* Entry: 106a50608; end: 106a506a7; -[SCContextImageView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f46c8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c08d0c0(param_5);
  func_0x00010c08d0c0(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 106a506a8; end: 106a50767; -[SCContextImageView layoutSourceView:inBounds:] */

void FUN_106a506a8(long param_1,long param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_7);
  uVar3 = param_7;
  func_0x00010c07c300();
  lVar1 = 4;
  if ((int)uVar3 == 0) {
    lVar1 = 0;
  }
  dVar5 = *(double *)(param_5 + *(int *)(&DAT_1127565c0 + lVar1));
  dVar4 = ((double *)(param_5 + *(int *)(&DAT_1127565c0 + lVar1)))[1];
  bVar2 = false;
  if ((dVar5 == -1.0) && (bVar2 = false, !NAN(dVar4))) {
    bVar2 = dVar4 == -1.0;
  }
  if (!bVar2) {
    param_1 = (long)((param_3 - dVar5) * 0.5);
    param_2 = (long)((param_4 - dVar4) * 0.5);
    param_4 = dVar4;
    param_3 = dVar5;
  }
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106a50768; end: 106a50793; -[SCContextImageView setPreferredLocalSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50768(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if ((*(double *)PTR__CGSizeZero_110347620 == param_1) &&
     (bVar1 = false, !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)) && !NAN(param_2))) {
    bVar1 = *(double *)(PTR__CGSizeZero_110347620 + 8) == param_2;
  }
  if (!bVar1) {
    lVar2 = (long)_DAT_1127565c0;
    *(double *)(param_3 + lVar2) = param_1;
    ((double *)(param_3 + lVar2))[1] = param_2;
  }
  return;
}



/* Entry: 106a50794; end: 106a507bf; -[SCContextImageView setPreferredRemoteSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50794(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if ((*(double *)PTR__CGSizeZero_110347620 == param_1) &&
     (bVar1 = false, !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)) && !NAN(param_2))) {
    bVar1 = *(double *)(PTR__CGSizeZero_110347620 + 8) == param_2;
  }
  if (!bVar1) {
    lVar2 = (long)_DAT_1127565c4;
    *(double *)(param_3 + lVar2) = param_1;
    ((double *)(param_3 + lVar2))[1] = param_2;
  }
  return;
}



/* Entry: 106a507c0; end: 106a507d3; -[SCContextImageView preferredLocalSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106a507c0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_1127565c0);
}



/* Entry: 106a507d4; end: 106a507e7; -[SCContextImageView preferredRemoteSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106a507d4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_1127565c4);
}



/* Entry: 106a507e8; end: 106a507f7; -[SCContextImageView useMaxPreferredDimensions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106a507e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127565d8);
}



/* Entry: 106a507f8; end: 106a50807; -[SCContextImageView setUseMaxPreferredDimensions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a507f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127565d8) = param_3;
  return;
}



/* Entry: 106a50808; end: 106a50817; -[SCContextImageView startedAssetLoadAt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a50808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127565b8);
}



/* Entry: 106a50818; end: 106a50827; -[SCContextImageView setStartedAssetLoadAt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50818(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127565b8) = param_1;
  return;
}



/* Entry: 106a50828; end: 106a50837; -[SCContextImageView shouldShowPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106a50828(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127565d4);
}



/* Entry: 106a50838; end: 106a50847; -[SCContextImageView hasProcessedOnAssetLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106a50838(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127565bc);
}



/* Entry: 106a50848; end: 106a50857; -[SCContextImageView setHasProcessedOnAssetLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50848(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127565bc) = param_3;
  return;
}



/* Entry: 106a50858; end: 106a50867; -[SCContextImageView image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a50858(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127565d0);
}



/* Entry: 106a50868; end: 106a508b7; -[SCContextImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50868(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127565d0,0);
  _objc_storeStrong(param_1 + _DAT_1127565cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127565c8,0);
  return;
}



/* Entry: 106a508b8; end: 106a5098b; -[SCContextLabel init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106a508b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f46d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithOptions__1125ea260,0x1f);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127565dc) = 0x402e000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127565e0) = 0;
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar4 = (long)_DAT_1127565e4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18afe0(puVar1);
    _objc_release(puVar2);
    func_0x00010bed8380(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a5098c; end: 106a50b67; -[SCContextLabel configureWithLocalizedText:] */

void FUN_106a5098c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010c2970a0();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  iVar1 = (int)ppuVar2;
  ppuVar3 = param_3;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e54298;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e54298,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 == 2) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110dcb038;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcb038,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c132260();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106a50ab0;
      }
LAB_106a50b24:
      ppuVar2 = param_3;
      func_0x00010bfa0560(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106a50b34:
    func_0x00010c212f20(param_1);
  }
  else {
    if (iVar1 == 3) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e68598;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e68598,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fe840();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c245520();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 4) {
        if (iVar1 != 6) goto LAB_106a50b24;
        FUN_10723c7d8();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106a50b34;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110dcb018;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcb018,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132280();
      _objc_retainAutoreleasedReturnValue();
LAB_106a50ab0:
      ppuVar4 = ppuVar3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_1);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a50b68; end: 106a50b87; -[SCContextLabel setPointSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50b68(double param_1,long param_2)

{
  if (*(double *)(param_2 + _DAT_1127565dc) != param_1) {
    *(double *)(param_2 + _DAT_1127565dc) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bed8390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateFont_112593a88);
    return;
  }
  return;
}



/* Entry: 106a50b88; end: 106a50ba7; -[SCContextLabel setFontStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50b88(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_1127565e0) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_1127565e0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed8390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFont_112593a88);
  return;
}



/* Entry: 106a50ba8; end: 106a50c3f; -[SCContextLabel _updateFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50ba8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (*(long *)(param_1 + _DAT_1127565e0) == 1) {
    func_0x00010c0c7340(*(undefined8 *)(param_1 + _DAT_1127565dc),PTR__OBJC_CLASS___UIFont_1126aec38
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + _DAT_1127565e0) == 2) {
    func_0x00010bf1ecc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(*(undefined8 *)(param_1 + _DAT_1127565e4));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 106a50c40; end: 106a50c4f; -[SCContextLabel applyForegroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127565e4),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 106a50c50; end: 106a50c5f; -[SCContextLabel numberOfLines] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0def30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127565e4),PTR_s_numberOfLines_1126155e0);
  return;
}



/* Entry: 106a50c60; end: 106a50c8f; -[SCContextLabel setNumberOfLines:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50c60(long param_1)

{
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + _DAT_1127565e4));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 106a50c90; end: 106a50c9f; -[SCContextLabel textColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127565e4),PTR_s_textColor_112678870);
  return;
}



/* Entry: 106a50ca0; end: 106a50caf; -[SCContextLabel setTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127565e4),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 106a50cb0; end: 106a50cbf; -[SCContextLabel textAlignment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127565e4),PTR_s_textAlignment_112678810);
  return;
}



/* Entry: 106a50cc0; end: 106a50cef; -[SCContextLabel setTextAlignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50cc0(long param_1)

{
  func_0x00010c213040(*(undefined8 *)(param_1 + _DAT_1127565e4));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 106a50cf0; end: 106a50cff; -[SCContextLabel text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127565e4),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106a50d00; end: 106a50d2f; -[SCContextLabel setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50d00(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127565e4));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 106a50d30; end: 106a50d3f; -[SCContextLabel attributeText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127565e4),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 106a50d40; end: 106a50d6f; -[SCContextLabel setAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50d40(long param_1)

{
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_1127565e4));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 106a50d70; end: 106a50d7f; -[SCContextLabel sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127565e4),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 106a50d80; end: 106a50d8f; -[SCContextLabel intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a50d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127565e4),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 106a50d90; end: 106a50d9f; -[SCContextLabel fontStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a50d90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127565e0);
}


