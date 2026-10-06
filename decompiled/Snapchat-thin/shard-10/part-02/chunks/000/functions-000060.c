/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ad4bc8; end: 107ad4c47; -[SCDiscoverSharePreviewFilterDataProviderCreatorDefaultServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad4bc8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112769e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112769e4c);
  return;
}



/* Entry: 107ad4c48; end: 107ad4cbb; -[SCDiscoverFeedSendToComponentsCreatorImpl initWithPreviewSnapSenderFactory:] */

undefined1 * FUN_107ad4c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9b08;
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



/* Entry: 107ad4cbc; end: 107ad4d4b; -[SCDiscoverFeedSendToComponentsCreatorImpl previewSnapSenderWithUserSession:] */

void FUN_107ad4cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b4468;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05ce40();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c243220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107ad4d4c; end: 107ad4d57; -[SCDiscoverFeedSendToComponentsCreatorImpl .cxx_destruct] */

void FUN_107ad4d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ad4d58; end: 107ad504f; -[SCGalleryOperaDismissalPreviewAnimator animateTransition:] */

void FUN_107ad4d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((uVar4 & 1) == 0) {
    func_0x00010c27ac00(param_7);
    func_0x00010bf43bc0(param_7);
  }
  else {
    uVar4 = uVar2;
    func_0x00010c275140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar3 = PTR_DAT_1126a4f48;
    _objc_retain(uVar6);
    uVar4 = uVar6;
    func_0x00010010fab4(uVar6,puVar3);
    _objc_release(uVar6);
    if ((int)uVar4 == 0 || uVar6 == 0) {
      func_0x00010c27ac00();
      func_0x00010bf43bc0(param_7);
    }
    else {
      uVar4 = param_7;
      func_0x00010bf4b2a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      uVar5 = uVar2;
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar5);
      uVar5 = uVar2;
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c29bf00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c29bf00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0;
      func_0x00010c1677c0(0);
      _objc_release(uVar5);
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010c27a940(param_5);
      _objc_retain(uVar6);
      _objc_retain(uVar1);
      _objc_retain(param_7);
      func_0x00010bf03420(uVar8,puVar3);
      _objc_release(param_7);
      _objc_release(uVar1);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  return;
}



/* Entry: 107ad5050; end: 107ad50af;  */

void FUN_107ad5050(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad50b0; end: 107ad50bb;  */

void FUN_107ad50b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeTransition__1125ae898,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107ad50bc; end: 107ad50f7; -[SCGalleryOperaDismissalPreviewAnimator completeTransition:] */

void FUN_107ad50bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27ac00(param_3);
  func_0x00010bf43bc0(param_3,param_2,(uint)uVar1 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ad50f8; end: 107ad5103; -[SCGalleryOperaDismissalPreviewAnimator transitionDuration:] */

undefined8 FUN_107ad50f8(void)

{
  return 0x3fd3333333333333;
}



/* Entry: 107ad5104; end: 107ad569b; -[SCOperaShareableMediaView initWithShareableMedias:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ad5104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_298;
  undefined *puStack_290;
  long lStack_208;
  undefined4 uStack_184;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_7;
  _objc_retain(param_7);
  puStack_108 = PTR_PTR_1126f9b10;
  puVar2 = &uStack_110;
  uStack_110 = param_5;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar13 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4008000000000000);
    _objc_release(puVar13);
    puVar13 = puVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar13);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_7);
    puVar13 = &uStack_150;
    puVar4 = param_7;
    func_0x00010bf52a60();
    if (puVar4 != (undefined8 *)0x0) {
      uStack_184 = 0;
      bVar1 = false;
      uVar15 = *(undefined8 *)PTR__CGSizeZero_110347620;
      uVar16 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      lVar10 = *plStack_140;
      do {
        puVar13 = (undefined8 *)0x0;
        do {
          if (*plStack_140 != lVar10) {
            _objc_enumerationMutation(param_7);
          }
          lVar14 = *(long *)(lStack_148 + (long)puVar13 * 8);
          lVar5 = lVar14;
          func_0x00010bfe6ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 != 0) {
            puVar11 = PTR__OBJC_CLASS___CALayer_1126b1750;
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            if (bVar1) {
              param_3 = 0x3ff0000000000000;
              param_4 = 0x3ff0000000000000;
              lVar5 = 0;
              param_2 = uVar16;
              func_0x00010854478c(uVar15,uVar16,0,0,0,uStack_184);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              lVar5 = lVar14;
              func_0x00010bfe6ac0(lVar14);
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_retainAutorelease();
            func_0x00010bdc1020();
            func_0x00010c182c80(puVar11);
            func_0x00010c182ca0(puVar11);
            puVar12 = puVar2;
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befbb20();
            _objc_release(puVar12);
            _objc_release(lVar5);
            _objc_release(puVar11);
          }
          lVar5 = lVar14;
          func_0x00010c2991a0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            lVar5 = lVar14;
            func_0x00010c29bb40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar5 != 0) goto LAB_107ad5380;
          }
          else {
            _objc_release();
LAB_107ad5380:
            lVar5 = lVar14;
            func_0x00010c2991a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar11 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
            lVar6 = lVar14;
            if (lVar5 == 0) {
              lVar5 = lVar14;
              func_0x00010c29bb40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar11 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
              if (lVar5 != 0) {
                func_0x00010c29bb40(lVar14);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c100c20();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_107ad541c;
              }
              puVar11 = (undefined *)0x0;
            }
            else {
              func_0x00010c2991a0(lVar14);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c100be0();
              _objc_retainAutoreleasedReturnValue();
LAB_107ad541c:
              _objc_release(lVar6);
            }
            *(undefined1 *)((long)puVar2 + (long)_DAT_112769e58) = 1;
            puVar7 = PTR_PTR_1126c9e68;
            _objc_alloc();
            func_0x00010c0370a0();
            func_0x00010c1ca6a0();
            func_0x00010c161660(puVar7);
            puVar8 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
            func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010bf5f0a0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa240(puVar8);
            _objc_release(puVar9);
            _objc_release(puVar8);
            puVar8 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
            func_0x00010c100c80(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2218a0();
            puVar12 = puVar2;
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befbb20();
            _objc_release(puVar12);
            func_0x00010befa120(puVar3);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar11);
          }
          func_0x00010c27a500();
          if ((lVar14 == 2) && (lVar5 = (long)_DAT_112769e5c, *(long *)((long)puVar2 + lVar5) == 0))
          {
            puVar11 = PTR__OBJC_CLASS___UIImageView_1126aec28;
            _objc_alloc();
            puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01bf60();
            uVar15 = *(undefined8 *)((long)puVar2 + lVar5);
            *(undefined **)((long)puVar2 + lVar5) = puVar11;
            _objc_release(uVar15);
            _objc_release(puVar7);
            uVar15 = *(undefined8 *)((long)puVar2 + lVar5);
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar2;
            func_0x00010c08c0e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1c2c00();
            _objc_release(puVar12);
            _objc_release(uVar15);
            func_0x00010bfb68e0(*(undefined8 *)((long)puVar2 + lVar5));
            uStack_184 = 1;
            bVar1 = true;
            uVar15 = param_3;
            uVar16 = param_4;
          }
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar4 != puVar13);
        puVar13 = &uStack_150;
        puVar4 = param_7;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(param_7);
    uVar15 = *(undefined8 *)((long)puVar2 + (long)_DAT_112769e60);
    *(undefined **)((long)puVar2 + (long)_DAT_112769e60) = puVar3;
    _objc_release(uVar15);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_2e0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  puStack_290 = PTR_PTR_1126f9b10;
  puVar4 = puVar13;
  puStack_298 = param_7;
  _objc_msgSendSuper2(&puStack_298,PTR_s_layoutSublayersOfLayer__1125377f8,puVar13);
  puVar2 = param_7;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar13 == puVar2) {
    uVar15 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    puVar2 = puVar13;
    func_0x00010c25ec40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf52a60();
    if (puVar4 != (undefined8 *)0x0) {
      lVar10 = *plStack_2d0;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          if (*plStack_2d0 != lVar10) {
            _objc_enumerationMutation(puVar2);
          }
          uVar16 = *(undefined8 *)(lStack_2d8 + (long)puVar12 * 8);
          func_0x00010bf20c00(param_7);
          func_0x00010c19f0e0(uVar16);
          func_0x00010c12aaa0(uVar16);
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar4 != puVar12);
        puVar4 = puVar2;
        puVar12 = &uStack_2e0;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(puVar2);
    lVar10 = (long)_DAT_112769e5c;
    puVar4 = puVar12;
    if (*(long *)((long)param_7 + lVar10) != 0) {
      func_0x00010bf20c00(param_7);
      uVar16 = *(undefined8 *)((long)param_7 + lVar10);
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(uVar15,param_2,param_3,param_4);
      _objc_release(uVar16);
      puVar4 = puVar12;
    }
  }
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return puVar13;
  }
  ___stack_chk_fail();
  func_0x00010c0dfc60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157280();
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 107ad569c; end: 107ad586b; -[SCOperaShareableMediaView layoutSublayersOfLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad569c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  puVar3 = &uStack_150;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puStack_100 = PTR_PTR_1126f9b10;
  puVar2 = param_7;
  puStack_108 = param_5;
  _objc_msgSendSuper2(&puStack_108,PTR_s_layoutSublayersOfLayer__1125377f8,param_7);
  puVar1 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_7 == puVar1) {
    uVar7 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    puVar1 = param_7;
    func_0x00010c25ec40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar5 = *plStack_140;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_140 != lVar5) {
            _objc_enumerationMutation(puVar1);
          }
          uVar4 = *(undefined8 *)(lStack_148 + (long)puVar6 * 8);
          func_0x00010bf20c00(param_5);
          func_0x00010c19f0e0(uVar4);
          func_0x00010c12aaa0(uVar4);
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar2 = puVar1;
        puVar3 = &uStack_150;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(puVar1);
    lVar5 = (long)_DAT_112769e5c;
    puVar2 = (undefined1 *)puVar3;
    if (*(long *)(param_5 + lVar5) != 0) {
      func_0x00010bf20c00(param_5);
      uVar4 = *(undefined8 *)(param_5 + lVar5);
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(uVar7,param_2,param_3,param_4);
      _objc_release(uVar4);
      puVar2 = (undefined1 *)puVar3;
    }
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0dfc60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157280();
  _objc_release(puVar2);
  return;
}



/* Entry: 107ad586c; end: 107ad58cb; -[SCOperaShareableMediaView playerItemDidReachEnd:] */

void FUN_107ad586c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dfc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157280();
  _objc_release(param_3);
  return;
}



/* Entry: 107ad58cc; end: 107ad58f3; -[SCOperaShareableMediaView SCAMediaTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_107ad58cc(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111817f0;
  if (*(char *)(param_1 + _DAT_112769e58) == '\0') {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111181808;
  }
  return ppuVar1;
}



/* Entry: 107ad58f4; end: 107ad5a03; -[SCOperaShareableMediaView play] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad58f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + _DAT_112769e60);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      func_0x00010c100720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fe360();
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(lVar5 + _DAT_112769e60);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      func_0x00010c100720(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5b20();
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar5 + _DAT_112769e5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar5 + _DAT_112769e60,0);
  return;
}



/* Entry: 107ad5a04; end: 107ad5b13; -[SCOperaShareableMediaView pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad5a04(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + _DAT_112769e60);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      func_0x00010c100720(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5b20();
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar5 + _DAT_112769e5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar5 + _DAT_112769e60,0);
  return;
}



/* Entry: 107ad5b14; end: 107ad5b53; -[SCOperaShareableMediaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad5b14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112769e5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112769e60,0);
  return;
}



/* Entry: 107ad5b54; end: 107ad5c9f; -[SCPHAssetMediaView initWithPHAsset:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ad5b54(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 **ppuVar3;
  long lVar4;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) ||
     ((lVar4 = param_3, func_0x00010c0c6c20(), lVar4 != 1 &&
      (lVar4 = param_3, func_0x00010c0c6c20(), lVar4 != 2)))) {
    ppuVar3 = (undefined1 **)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126f9b18;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      puVar1 = (undefined1 *)ppuVar3;
      func_0x00010c08c0e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4008000000000000);
      _objc_release(puVar1);
      puVar1 = (undefined1 *)ppuVar3;
      func_0x00010c08c0e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar1);
      lVar4 = (long)_DAT_112769e64;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)ppuVar3 + lVar4);
      *(undefined8 *)((long)ppuVar3 + lVar4) = param_4;
      _objc_release(uVar2);
      lVar4 = (long)_DAT_112769e68;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)ppuVar3 + lVar4);
      *(long *)((long)ppuVar3 + lVar4) = param_3;
      _objc_release(uVar2);
      func_0x00010beb1160(ppuVar3);
    }
    _objc_retain(ppuVar3);
    param_1 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar3;
}



/* Entry: 107ad5ca0; end: 107ad5fc3; -[SCPHAssetMediaView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad5ca0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar5 = (long)_DAT_112769e68;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c0c6c20();
  if (lVar1 == 1) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar1 = (long)_DAT_112769e6c;
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar1));
    func_0x00010befbb60(param_1);
    puVar2 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107ad5fc4;
    puStack_68 = &UNK_110975a08;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c1357a0(0x4069000000000000,0x4069000000000000,puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
  }
  else {
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c0c6c20();
    if (lVar1 == 2) {
      puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
      func_0x00010c100c80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = (long)_DAT_112769e70;
      uVar4 = *(undefined8 *)(param_1 + lVar1);
      *(undefined **)(param_1 + lVar1) = puVar2;
      _objc_release(uVar4);
      func_0x00010c2218a0(*(undefined8 *)(param_1 + lVar1));
      lVar1 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb20();
      _objc_release(lVar1);
      puVar2 = PTR_PTR_1126afd30;
      _objc_alloc();
      func_0x00010bfffc60();
      lVar1 = (long)_DAT_112769e74;
      uVar4 = *(undefined8 *)(param_1 + lVar1);
      *(undefined **)(param_1 + lVar1) = puVar2;
      _objc_release(uVar4);
      func_0x00010befbb60(param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_107ad6014;
      puStack_90 = &UNK_1108471b0;
      lStack_88 = param_1;
      func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar1));
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar1));
      _objc_initWeak(auStack_58,param_1);
      puVar2 = PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0;
      _objc_opt_new(PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0);
      func_0x00010c18ba80();
      func_0x00010c1cc000(puVar2);
      puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_b0,auStack_58);
      func_0x00010c136280(puVar3);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_b0);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_58);
    }
  }
  return;
}



/* Entry: 107ad5fc4; end: 107ad6013;  */

void FUN_107ad5fc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdff420(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ad6014; end: 107ad607b;  */

void FUN_107ad6014(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ad607c; end: 107ad6157;  */

void FUN_107ad607c(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x107ad6120;
    puStack_38 = &UNK_110841f80;
    lStack_30 = param_1;
    _objc_retain(param_2);
    uStack_28 = param_2;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 107ad6158; end: 107ad6167; -[SCPHAssetMediaView _didReceiveImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad6158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112769e6c),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 107ad6168; end: 107ad62c3; -[SCPHAssetMediaView _didReceivePlayerItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad6168(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ba150;
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf0af00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22e420(puVar2,param_2,lVar1,*(undefined8 *)(param_1 + _DAT_112769e64));
    _objc_release(lVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = PTR_PTR_1126c9e68;
      _objc_alloc(PTR_PTR_1126c9e68);
      func_0x00010c0370a0();
      func_0x00010c1ca6a0();
      func_0x00010c161660(puVar3,param_2,2);
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_s_playerItemDidReachEnd__11252c4a8;
      uVar6 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
      puVar5 = puVar3;
      func_0x00010bf5f0a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240(puVar4,param_2,param_1,puVar2,uVar6,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1dda40(*(undefined8 *)(param_1 + _DAT_112769e70),param_2,puVar3);
      if (*(char *)(param_1 + _DAT_112769e78) == '\x01') {
        func_0x00010c0fe360(puVar3);
      }
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ad62c4; end: 107ad6323; -[SCPHAssetMediaView playerItemDidReachEnd:] */

void FUN_107ad62c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dfc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157280();
  _objc_release(param_3);
  return;
}



/* Entry: 107ad6324; end: 107ad6393; -[SCPHAssetMediaView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad6324(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9b18;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112769e6c));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112769e70));
  return;
}



/* Entry: 107ad6394; end: 107ad63f3; -[SCPHAssetMediaView SCAMediaTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_107ad6394(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112769e68;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c0c6c20();
  if (lVar1 == 1) {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111181820;
  }
  else {
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c0c6c20();
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111181838;
    if (lVar1 != 2) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111181850;
    }
  }
  return ppuVar2;
}



/* Entry: 107ad63f4; end: 107ad643f; -[SCPHAssetMediaView play] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad63f4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112769e78) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112769e70);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fe360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad6440; end: 107ad6487; -[SCPHAssetMediaView pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad6440(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112769e78) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112769e70);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad6488; end: 107ad64f7; -[SCPHAssetMediaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad6488(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112769e64,0);
  _objc_storeStrong(param_1 + _DAT_112769e74,0);
  _objc_storeStrong(param_1 + _DAT_112769e70,0);
  _objc_storeStrong(param_1 + _DAT_112769e6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112769e68,0);
  return;
}



/* Entry: 107ad64f8; end: 107ad6723; -[SCSendGalleryMediaGroupsMediaView initWithGalleryMediaGroups:previewAssetVideoProviderFactory:dataObjectContext:encryptedContentManager:memoriesEntryThumbnailGeneratorBuilder:memoriesCachingMediaManager:userTrackedLogger:circumstanceEngine:videoTrackingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ad64f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f9b20;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112769e7c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769e80;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769e84;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769e88;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769e8c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769e90;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769e94;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769e98;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112769e9c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    func_0x00010beb1160(puVar1);
  }
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



/* Entry: 107ad6724; end: 107ad68df; -[SCSendGalleryMediaGroupsMediaView _setupView] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000107ad7508 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_107ad6724(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  long lStack_300;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc_init();
  lVar12 = (long)_DAT_112769ea0;
  uVar11 = *(undefined8 *)(param_5 + lVar12);
  *(undefined **)(param_5 + lVar12) = puVar1;
  _objc_release(uVar11);
  func_0x00010c17d4c0(*(undefined8 *)(param_5 + lVar12));
  func_0x00010c2025c0(*(undefined8 *)(param_5 + lVar12));
  func_0x00010c2026e0(*(undefined8 *)(param_5 + lVar12));
  func_0x00010befbb60(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar15 = *(long *)(param_5 + _DAT_112769e7c);
  _objc_retain(lVar15);
  puVar10 = auStack_d8;
  uVar11 = 0x10;
  lVar12 = lVar15;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar17 = *plStack_110;
    do {
      lVar19 = 0;
      do {
        if (*plStack_110 != lVar17) {
          _objc_enumerationMutation(lVar15);
        }
        func_0x00010bdc7720(param_5);
        lVar19 = lVar19 + 1;
      } while (lVar12 != lVar19);
      puVar10 = auStack_d8;
      uVar11 = 0x10;
      lVar12 = lVar15;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar15);
  uVar16 = *(undefined8 *)(param_5 + _DAT_112769ea4);
  *(undefined **)(param_5 + _DAT_112769ea4) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_5 + _DAT_112769ea8);
  *(undefined **)(param_5 + _DAT_112769ea8) = puVar2;
  _objc_release(uVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar10);
  _objc_retain(uVar11);
  puVar2 = (undefined *)puVar4;
  func_0x00010bfbd240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if ((puVar3 == (undefined *)((long)&lRam0000000000000000 + 1)) ||
     (puVar3 = (undefined *)puVar4, func_0x00010bfcf460(),
     puVar3 == (undefined *)((long)&lRam0000000000000000 + 1))) {
    _objc_release(puVar2);
LAB_107ad6978:
    puVar2 = (undefined *)puVar4;
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_DAT_1126a5228;
    _objc_retain(puVar3);
    puVar14 = puVar3;
    func_0x00010010fab4(puVar3,puVar2);
    _objc_release(puVar3);
    if (((int)puVar14 != 0) && (puVar3 != (undefined *)0x0)) {
      _objc_retain(puVar3);
      puVar2 = PTR_PTR_1126d2998;
      _objc_alloc();
      func_0x00010c0170e0();
      puVar14 = puVar2;
      func_0x00010c0c70c0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar2 != (undefined *)0x0) && (puVar14 != (undefined *)0x0)) {
        func_0x00010befbb60(*(undefined8 *)(puVar1 + _DAT_112769ea0));
        func_0x00010befa120(puVar10);
        func_0x00010befa120(uVar11);
      }
      _objc_release(puVar14);
      puVar14 = puVar3;
LAB_107ad6a70:
      _objc_release(puVar2);
      goto LAB_107ad6a78;
    }
    puVar2 = PTR_PTR_1126c4650;
    _objc_opt_class(PTR_PTR_1126c4650);
    puVar14 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    if (((ulong)puVar14 & 1) != 0) {
      puVar14 = PTR_PTR_1126d29a0;
      _objc_alloc();
      func_0x00010c02aca0();
      puVar2 = puVar14;
      func_0x00010c0c70c0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar14 != (undefined *)0x0) && (puVar2 != (undefined *)0x0)) {
        func_0x00010befbb60(*(undefined8 *)(puVar1 + _DAT_112769ea0));
        func_0x00010befa120(puVar10);
        func_0x00010befa120(uVar11);
      }
      goto LAB_107ad6a70;
    }
    puVar2 = PTR_PTR_1126d29a8;
    _objc_opt_class(PTR_PTR_1126d29a8);
    puVar14 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    if (((ulong)puVar14 & 1) != 0) {
      puVar2 = puVar3;
      func_0x00010bfbd940();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126d2998;
      _objc_alloc();
      func_0x00010c0170e0();
      puVar6 = puVar2;
      func_0x00010c0c70c0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar2 != (undefined *)0x0) && (puVar6 != (undefined *)0x0)) {
        func_0x00010befbb60(*(undefined8 *)(puVar1 + _DAT_112769ea0));
        func_0x00010befa120(puVar10);
        func_0x00010befa120(uVar11);
      }
      _objc_release(puVar6);
      goto LAB_107ad6a70;
    }
  }
  else {
    puVar3 = (undefined *)puVar4;
    func_0x00010bfcf460();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)((long)&lRam0000000000000000 + 3)) goto LAB_107ad6978;
    puVar2 = (undefined *)puVar4;
    func_0x00010bfcf460();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = (undefined *)puVar4;
      func_0x00010bfbd240();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf529e0();
      _objc_release(puVar2);
      if ((undefined *)((long)&lRam0000000000000000 + 1U) < puVar3) {
        puVar3 = (undefined *)puVar4;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bf52a60();
        lVar15 = lRam0000000000000000;
        while (puVar2 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar15) {
              _objc_enumerationMutation(puVar3);
            }
            puVar6 = PTR_DAT_1126a5228;
            puVar20 = *(undefined **)((long)puVar14 * 8);
            _objc_retain(puVar20);
            puVar5 = puVar20;
            func_0x00010010fab4(puVar20,puVar6);
            _objc_release(puVar20);
            if ((int)puVar5 == 0 || puVar20 == (undefined *)0x0) {
              puVar6 = PTR_PTR_1126c4650;
              _objc_opt_class(PTR_PTR_1126c4650);
              _objc_opt_isKindOfClass(puVar20,puVar6);
              if (((ulong)puVar20 & 1) != 0) {
                puVar20 = PTR_PTR_1126d29a0;
                _objc_alloc();
                func_0x00010c02aca0();
                puVar6 = puVar20;
                func_0x00010c0c70c0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar20 != (undefined *)0x0 && puVar6 != (undefined *)0x0) {
                  func_0x00010befbb60(*(undefined8 *)(puVar1 + _DAT_112769ea0));
                  func_0x00010befa120(puVar10);
                  func_0x00010befa120(uVar11);
                }
                goto LAB_107ad6d98;
              }
            }
            else {
              _objc_retain(puVar20);
              puVar6 = PTR_PTR_1126d2998;
              _objc_alloc();
              func_0x00010c0170e0();
              puVar5 = puVar6;
              func_0x00010c0c70c0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar6 != (undefined *)0x0 && puVar5 != (undefined *)0x0) {
                func_0x00010befbb60(*(undefined8 *)(puVar1 + _DAT_112769ea0));
                func_0x00010befa120(puVar10);
                func_0x00010befa120(uVar11);
              }
              _objc_release(puVar5);
LAB_107ad6d98:
              _objc_release(puVar6);
              _objc_release(puVar20);
            }
            puVar14 = puVar14 + 1;
          } while (puVar2 != puVar14);
          puVar2 = puVar3;
          func_0x00010bf52a60();
        }
        _objc_release(puVar3);
      }
      goto LAB_107ad6a88;
    }
    puVar3 = PTR_PTR_1126d29b0;
    _objc_alloc();
    func_0x00010c016f20();
    puVar14 = puVar3;
    func_0x00010c0c70c0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar3 != (undefined *)0x0) && (puVar14 != (undefined *)0x0)) {
      func_0x00010befbb60(*(undefined8 *)(puVar1 + _DAT_112769ea0));
      func_0x00010befa120(puVar10);
      func_0x00010befa120(uVar11);
    }
LAB_107ad6a78:
    _objc_release(puVar14);
  }
  _objc_release(puVar3);
LAB_107ad6a88:
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_448 = PTR_PTR_1126f9b20;
  puStack_450 = (undefined *)puVar4;
  _objc_msgSendSuper2(&puStack_450,PTR_s_layoutSubviews_112600e60);
  lVar21 = (long)_DAT_112769ea0;
  uVar16 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar11 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar26 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar25 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar24 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar22 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_480 = uVar11;
  uStack_478 = uVar16;
  uStack_470 = uVar25;
  uStack_468 = uVar26;
  uStack_460 = uVar22;
  uStack_458 = uVar24;
  func_0x00010c219960(*(undefined8 *)((long)puVar4 + lVar21));
  lVar19 = (long)_DAT_112769ea8;
  lVar17 = *(long *)((long)puVar4 + lVar19);
  _objc_retain(lVar17);
  lVar12 = lVar17;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar17);
      }
      uStack_480 = uVar11;
      uStack_478 = uVar16;
      uStack_470 = uVar25;
      uStack_468 = uVar26;
      uStack_460 = uVar22;
      uStack_458 = uVar24;
      func_0x00010c219960(*(undefined8 *)(lVar18 * 8));
      lVar18 = lVar18 + 1;
    } while (lVar12 != lVar18);
    lVar12 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release(lVar17);
  func_0x00010bf20c00(puVar4);
  func_0x00010bf20c00(puVar4);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)((long)puVar4 + lVar21));
  func_0x00010bf20c00(*(undefined8 *)((long)puVar4 + lVar21));
  lVar15 = (long)_DAT_112769ea4;
  lVar12 = *(long *)((long)puVar4 + lVar15);
  dVar23 = param_4;
  func_0x00010bf529e0();
  puVar1 = PTR_s_mediaViewAspectRatio_11260f650;
  if (lVar12 == 0) {
    dVar28 = 22.0;
  }
  else {
    uVar13 = 0;
    dVar27 = param_4 + -13.0 + -7.0;
    dVar28 = 16.0;
    do {
      uVar7 = *(ulong *)((long)puVar4 + lVar15);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)puVar4 + lVar19);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      dVar23 = 1.0;
      if ((uVar9 & 1) != 0) {
        func_0x00010c0c70e0(uVar7);
      }
      dVar29 = dVar27 * dVar23;
      if (NAN(dVar29)) {
        ppuStack_3a0 = &PTR____CFConstantStringClassReference_110de1e58;
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_398 = &PTR____CFConstantStringClassReference_110eac418;
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_390 = puVar2;
        func_0x00010c0df720(dVar23);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_388 = puVar3;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110eac3d8,
                            &PTR____CFConstantStringClassReference_110eac3f8,puVar14,
                            *(undefined8 *)((long)puVar4 + (long)_DAT_112769e94));
        _objc_release(puVar14);
        _objc_release(puVar3);
        _objc_release(puVar2);
        dVar29 = 0.0;
      }
      if (NAN(dVar28)) {
        ppuStack_3c0 = &PTR____CFConstantStringClassReference_110de1e58;
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_3b8 = &PTR____CFConstantStringClassReference_110eac458;
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_3b0 = puVar2;
        func_0x00010c0df720(dVar29);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_3a8 = puVar3;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110eac3d8,
                            &PTR____CFConstantStringClassReference_110eac438,puVar14,
                            *(undefined8 *)((long)puVar4 + (long)_DAT_112769e94));
        _objc_release(puVar14);
        _objc_release(puVar3);
        _objc_release(puVar2);
        dVar28 = 0.0;
      }
      dVar23 = dVar27;
      func_0x00010c19f0e0(dVar28,0x402a000000000000,dVar29,dVar27,uVar8);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar8);
      _objc_release(puVar2);
      dVar28 = dVar29 + dVar28 + 10.0;
      _objc_release(uVar8);
      _objc_release(uVar7);
      uVar13 = uVar13 + 1;
      uVar9 = *(ulong *)((long)puVar4 + lVar15);
      func_0x00010bf529e0();
    } while (uVar13 < uVar9);
    dVar28 = dVar28 + 6.0;
  }
  func_0x00010bf20c00(*(undefined8 *)((long)puVar4 + lVar21));
  func_0x00010c1827c0(dVar28,dVar23,*(undefined8 *)((long)puVar4 + lVar21));
  puVar1 = (undefined *)puVar4;
  func_0x00010b8166c0();
  if (((ulong)puVar1 & 1) != 0) {
    _CGAffineTransformMakeScale(&uStack_480,0xbff0000000000000,0x3ff0000000000000);
    uVar11 = uStack_480;
    uVar16 = uStack_478;
    uVar25 = uStack_470;
    uVar26 = uStack_468;
    uVar22 = uStack_460;
    uVar24 = uStack_458;
  }
  uStack_458 = uVar24;
  uStack_460 = uVar22;
  uStack_468 = uVar26;
  uStack_470 = uVar25;
  uStack_478 = uVar16;
  uStack_480 = uVar11;
  func_0x00010c219960(*(undefined8 *)((long)puVar4 + lVar21));
  lVar17 = *(long *)((long)puVar4 + lVar19);
  _objc_retain(lVar17);
  lVar12 = lVar17;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar17);
      }
      func_0x00010c219960(*(undefined8 *)(lVar19 * 8));
      lVar19 = lVar19 + 1;
    } while (lVar12 != lVar19);
    lVar12 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_300) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(lVar17 + _DAT_112769ea8);
  _objc_retain(lVar17);
  lVar12 = lVar17;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar17);
      }
      uVar11 = *(undefined8 *)(lVar21 * 8);
      func_0x00010bdc2020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1);
      _objc_release(uVar11);
      lVar21 = lVar21 + 1;
    } while (lVar12 != lVar21);
    lVar12 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(lVar17 + _DAT_112769ea8);
  _objc_retain(lVar17);
  lVar12 = lVar17;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  puVar1 = PTR_s_play_11261d2f8;
  while (PTR_s_play_11261d2f8 = puVar1, lVar12 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar17);
      }
      uVar9 = *(ulong *)(lVar21 * 8);
      uVar13 = uVar9;
      _objc_opt_respondsToSelector(uVar9,puVar1);
      if ((uVar13 & 1) != 0) {
        func_0x00010c0fe360(uVar9);
      }
      lVar21 = lVar21 + 1;
    } while (lVar12 != lVar21);
    lVar12 = lVar17;
    func_0x00010bf52a60();
    puVar1 = PTR_s_play_11261d2f8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(lVar17 + _DAT_112769ea8);
  _objc_retain(lVar17);
  lVar12 = lVar17;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  puVar1 = PTR_s_pause_11261b0e8;
  while (PTR_s_pause_11261b0e8 = puVar1, lVar12 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar17);
      }
      uVar9 = *(ulong *)(lVar21 * 8);
      uVar13 = uVar9;
      _objc_opt_respondsToSelector(uVar9,puVar1);
      if ((uVar13 & 1) != 0) {
        func_0x00010c0f5b20(uVar9);
      }
      lVar21 = lVar21 + 1;
    } while (lVar12 != lVar21);
    lVar12 = lVar17;
    func_0x00010bf52a60();
    puVar1 = PTR_s_pause_11261b0e8;
  }
  _objc_release(lVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar17 + _DAT_112769e9c,0);
    _objc_storeStrong(lVar17 + _DAT_112769e98,0);
    _objc_storeStrong(lVar17 + _DAT_112769e94,0);
    _objc_storeStrong(lVar17 + _DAT_112769e90,0);
    _objc_storeStrong(lVar17 + _DAT_112769e8c,0);
    _objc_storeStrong(lVar17 + _DAT_112769e88,0);
    _objc_storeStrong(lVar17 + _DAT_112769e84,0);
    _objc_storeStrong(lVar17 + _DAT_112769e80,0);
    _objc_storeStrong(lVar17 + _DAT_112769ea8,0);
    _objc_storeStrong(lVar17 + _DAT_112769ea4,0);
    _objc_storeStrong(lVar17 + _DAT_112769ea0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar17 + _DAT_112769e7c,0);
    return;
  }
  return;
}



/* Entry: 107ad68e0; end: 107ad6f2b; -[SCSendGalleryMediaGroupsMediaView _addModelsForGalleryMediaGroup:previewModels:mediaViews:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000107ad7508 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_107ad68e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  long lStack_1e0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = param_7;
  func_0x00010bfbd240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if ((puVar2 == (undefined *)((long)&lRam0000000000000000 + 1)) ||
     (puVar2 = param_7, func_0x00010bfcf460(),
     puVar2 == (undefined *)((long)&lRam0000000000000000 + 1))) {
    _objc_release(puVar1);
LAB_107ad6978:
    puVar1 = param_7;
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_DAT_1126a5228;
    _objc_retain(puVar2);
    puVar12 = puVar2;
    func_0x00010010fab4(puVar2,puVar1);
    _objc_release(puVar2);
    if (((int)puVar12 != 0) && (puVar2 != (undefined *)0x0)) {
      _objc_retain(puVar2);
      puVar1 = PTR_PTR_1126d2998;
      _objc_alloc();
      func_0x00010c0170e0();
      puVar12 = puVar1;
      func_0x00010c0c70c0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar1 != (undefined *)0x0) && (puVar12 != (undefined *)0x0)) {
        func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_112769ea0));
        func_0x00010befa120(param_8);
        func_0x00010befa120(param_9);
      }
      _objc_release(puVar12);
      puVar12 = puVar2;
LAB_107ad6a70:
      _objc_release(puVar1);
      goto LAB_107ad6a78;
    }
    puVar1 = PTR_PTR_1126c4650;
    _objc_opt_class(PTR_PTR_1126c4650);
    puVar12 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    if (((ulong)puVar12 & 1) != 0) {
      puVar12 = PTR_PTR_1126d29a0;
      _objc_alloc();
      func_0x00010c02aca0();
      puVar1 = puVar12;
      func_0x00010c0c70c0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar12 != (undefined *)0x0) && (puVar1 != (undefined *)0x0)) {
        func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_112769ea0));
        func_0x00010befa120(param_8);
        func_0x00010befa120(param_9);
      }
      goto LAB_107ad6a70;
    }
    puVar1 = PTR_PTR_1126d29a8;
    _objc_opt_class(PTR_PTR_1126d29a8);
    puVar12 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    if (((ulong)puVar12 & 1) != 0) {
      puVar1 = puVar2;
      func_0x00010bfbd940();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126d2998;
      _objc_alloc();
      func_0x00010c0170e0();
      puVar4 = puVar1;
      func_0x00010c0c70c0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar1 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
        func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_112769ea0));
        func_0x00010befa120(param_8);
        func_0x00010befa120(param_9);
      }
      _objc_release(puVar4);
      goto LAB_107ad6a70;
    }
  }
  else {
    puVar2 = param_7;
    func_0x00010bfcf460();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)((long)&lRam0000000000000000 + 3)) goto LAB_107ad6978;
    puVar1 = param_7;
    func_0x00010bfcf460();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = param_7;
      func_0x00010bfbd240();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf529e0();
      _objc_release(puVar1);
      if ((undefined *)((long)&lRam0000000000000000 + 1U) < puVar2) {
        puVar2 = param_7;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        func_0x00010bf52a60();
        lVar14 = lRam0000000000000000;
        while (puVar1 != (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar14) {
              _objc_enumerationMutation(puVar2);
            }
            puVar4 = PTR_DAT_1126a5228;
            puVar16 = *(undefined **)((long)puVar12 * 8);
            _objc_retain(puVar16);
            puVar3 = puVar16;
            func_0x00010010fab4(puVar16,puVar4);
            _objc_release(puVar16);
            if ((int)puVar3 == 0 || puVar16 == (undefined *)0x0) {
              puVar4 = PTR_PTR_1126c4650;
              _objc_opt_class(PTR_PTR_1126c4650);
              _objc_opt_isKindOfClass(puVar16,puVar4);
              if (((ulong)puVar16 & 1) != 0) {
                puVar16 = PTR_PTR_1126d29a0;
                _objc_alloc();
                func_0x00010c02aca0();
                puVar4 = puVar16;
                func_0x00010c0c70c0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar16 != (undefined *)0x0 && puVar4 != (undefined *)0x0) {
                  func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_112769ea0));
                  func_0x00010befa120(param_8);
                  func_0x00010befa120(param_9);
                }
                goto LAB_107ad6d98;
              }
            }
            else {
              _objc_retain(puVar16);
              puVar4 = PTR_PTR_1126d2998;
              _objc_alloc();
              func_0x00010c0170e0();
              puVar3 = puVar4;
              func_0x00010c0c70c0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar4 != (undefined *)0x0 && puVar3 != (undefined *)0x0) {
                func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_112769ea0));
                func_0x00010befa120(param_8);
                func_0x00010befa120(param_9);
              }
              _objc_release(puVar3);
LAB_107ad6d98:
              _objc_release(puVar4);
              _objc_release(puVar16);
            }
            puVar12 = puVar12 + 1;
          } while (puVar1 != puVar12);
          puVar1 = puVar2;
          func_0x00010bf52a60();
        }
        _objc_release(puVar2);
      }
      goto LAB_107ad6a88;
    }
    puVar2 = PTR_PTR_1126d29b0;
    _objc_alloc();
    func_0x00010c016f20();
    puVar12 = puVar2;
    func_0x00010c0c70c0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar2 != (undefined *)0x0) && (puVar12 != (undefined *)0x0)) {
      func_0x00010befbb60(*(undefined8 *)(param_5 + _DAT_112769ea0));
      func_0x00010befa120(param_8);
      func_0x00010befa120(param_9);
    }
LAB_107ad6a78:
    _objc_release(puVar12);
  }
  _objc_release(puVar2);
LAB_107ad6a88:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_328 = PTR_PTR_1126f9b20;
  puStack_330 = param_7;
  _objc_msgSendSuper2(&puStack_330,PTR_s_layoutSubviews_112600e60);
  lVar17 = (long)_DAT_112769ea0;
  uVar20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar8 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar23 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar22 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar21 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_360 = uVar8;
  uStack_358 = uVar20;
  uStack_350 = uVar22;
  uStack_348 = uVar23;
  uStack_340 = uVar18;
  uStack_338 = uVar21;
  func_0x00010c219960(*(undefined8 *)(param_7 + lVar17));
  lVar13 = (long)_DAT_112769ea8;
  lVar10 = *(long *)(param_7 + lVar13);
  _objc_retain(lVar10);
  lVar9 = lVar10;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar10);
      }
      uStack_360 = uVar8;
      uStack_358 = uVar20;
      uStack_350 = uVar22;
      uStack_348 = uVar23;
      uStack_340 = uVar18;
      uStack_338 = uVar21;
      func_0x00010c219960(*(undefined8 *)(lVar15 * 8));
      lVar15 = lVar15 + 1;
    } while (lVar9 != lVar15);
    lVar9 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  func_0x00010bf20c00(param_7);
  func_0x00010bf20c00(param_7);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_7 + lVar17));
  func_0x00010bf20c00(*(undefined8 *)(param_7 + lVar17));
  lVar14 = (long)_DAT_112769ea4;
  lVar9 = *(long *)(param_7 + lVar14);
  dVar19 = param_4;
  func_0x00010bf529e0();
  puVar1 = PTR_s_mediaViewAspectRatio_11260f650;
  if (lVar9 == 0) {
    dVar25 = 22.0;
  }
  else {
    uVar11 = 0;
    dVar24 = param_4 + -13.0 + -7.0;
    dVar25 = 16.0;
    do {
      uVar5 = *(ulong *)(param_7 + lVar14);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_7 + lVar13);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      _objc_opt_respondsToSelector(uVar5,puVar1);
      dVar19 = 1.0;
      if ((uVar7 & 1) != 0) {
        func_0x00010c0c70e0(uVar5);
      }
      dVar26 = dVar24 * dVar19;
      if (NAN(dVar26)) {
        ppuStack_280 = &PTR____CFConstantStringClassReference_110de1e58;
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_278 = &PTR____CFConstantStringClassReference_110eac418;
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_270 = puVar2;
        func_0x00010c0df720(dVar19);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_268 = puVar12;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110eac3d8,
                            &PTR____CFConstantStringClassReference_110eac3f8,puVar4,
                            *(undefined8 *)(param_7 + _DAT_112769e94));
        _objc_release(puVar4);
        _objc_release(puVar12);
        _objc_release(puVar2);
        dVar26 = 0.0;
      }
      if (NAN(dVar25)) {
        ppuStack_2a0 = &PTR____CFConstantStringClassReference_110de1e58;
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_298 = &PTR____CFConstantStringClassReference_110eac458;
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_290 = puVar2;
        func_0x00010c0df720(dVar26);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_288 = puVar12;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110eac3d8,
                            &PTR____CFConstantStringClassReference_110eac438,puVar4,
                            *(undefined8 *)(param_7 + _DAT_112769e94));
        _objc_release(puVar4);
        _objc_release(puVar12);
        _objc_release(puVar2);
        dVar25 = 0.0;
      }
      dVar19 = dVar24;
      func_0x00010c19f0e0(dVar25,0x402a000000000000,dVar26,dVar24,uVar6);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar6);
      _objc_release(puVar2);
      dVar25 = dVar26 + dVar25 + 10.0;
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar11 = uVar11 + 1;
      uVar7 = *(ulong *)(param_7 + lVar14);
      func_0x00010bf529e0();
    } while (uVar11 < uVar7);
    dVar25 = dVar25 + 6.0;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_7 + lVar17));
  func_0x00010c1827c0(dVar25,dVar19,*(undefined8 *)(param_7 + lVar17));
  puVar1 = param_7;
  func_0x00010b8166c0();
  if (((ulong)puVar1 & 1) != 0) {
    _CGAffineTransformMakeScale(&uStack_360,0xbff0000000000000,0x3ff0000000000000);
    uVar8 = uStack_360;
    uVar20 = uStack_358;
    uVar22 = uStack_350;
    uVar23 = uStack_348;
    uVar18 = uStack_340;
    uVar21 = uStack_338;
  }
  uStack_338 = uVar21;
  uStack_340 = uVar18;
  uStack_348 = uVar23;
  uStack_350 = uVar22;
  uStack_358 = uVar20;
  uStack_360 = uVar8;
  func_0x00010c219960(*(undefined8 *)(param_7 + lVar17));
  lVar10 = *(long *)(param_7 + lVar13);
  _objc_retain(lVar10);
  lVar9 = lVar10;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar10);
      }
      func_0x00010c219960(*(undefined8 *)(lVar13 * 8));
      lVar13 = lVar13 + 1;
    } while (lVar9 != lVar13);
    lVar9 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(lVar10 + _DAT_112769ea8);
  _objc_retain(lVar10);
  lVar9 = lVar10;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar10);
      }
      uVar8 = *(undefined8 *)(lVar17 * 8);
      func_0x00010bdc2020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1);
      _objc_release(uVar8);
      lVar17 = lVar17 + 1;
    } while (lVar9 != lVar17);
    lVar9 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(lVar10 + _DAT_112769ea8);
  _objc_retain(lVar10);
  lVar9 = lVar10;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  puVar1 = PTR_s_play_11261d2f8;
  while (PTR_s_play_11261d2f8 = puVar1, lVar9 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar10);
      }
      uVar7 = *(ulong *)(lVar17 * 8);
      uVar11 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar11 & 1) != 0) {
        func_0x00010c0fe360(uVar7);
      }
      lVar17 = lVar17 + 1;
    } while (lVar9 != lVar17);
    lVar9 = lVar10;
    func_0x00010bf52a60();
    puVar1 = PTR_s_play_11261d2f8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(lVar10 + _DAT_112769ea8);
  _objc_retain(lVar10);
  lVar9 = lVar10;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  puVar1 = PTR_s_pause_11261b0e8;
  while (PTR_s_pause_11261b0e8 = puVar1, lVar9 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar10);
      }
      uVar7 = *(ulong *)(lVar17 * 8);
      uVar11 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar11 & 1) != 0) {
        func_0x00010c0f5b20(uVar7);
      }
      lVar17 = lVar17 + 1;
    } while (lVar9 != lVar17);
    lVar9 = lVar10;
    func_0x00010bf52a60();
    puVar1 = PTR_s_pause_11261b0e8;
  }
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar10 + _DAT_112769e9c,0);
    _objc_storeStrong(lVar10 + _DAT_112769e98,0);
    _objc_storeStrong(lVar10 + _DAT_112769e94,0);
    _objc_storeStrong(lVar10 + _DAT_112769e90,0);
    _objc_storeStrong(lVar10 + _DAT_112769e8c,0);
    _objc_storeStrong(lVar10 + _DAT_112769e88,0);
    _objc_storeStrong(lVar10 + _DAT_112769e84,0);
    _objc_storeStrong(lVar10 + _DAT_112769e80,0);
    _objc_storeStrong(lVar10 + _DAT_112769ea8,0);
    _objc_storeStrong(lVar10 + _DAT_112769ea4,0);
    _objc_storeStrong(lVar10 + _DAT_112769ea0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar10 + _DAT_112769e7c,0);
    return;
  }
  return;
}



/* Entry: 107ad6f2c; end: 107ad747f; -[SCSendGalleryMediaGroupsMediaView layoutSubviews] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000107ad7508 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_107ad6f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d8 = PTR_PTR_1126f9b20;
  uStack_1e0 = param_5;
  _objc_msgSendSuper2(&uStack_1e0,PTR_s_layoutSubviews_112600e60);
  lVar15 = (long)_DAT_112769ea0;
  uVar18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar9 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar21 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar19 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar16 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_210 = uVar9;
  uStack_208 = uVar18;
  uStack_200 = uVar20;
  uStack_1f8 = uVar21;
  uStack_1f0 = uVar16;
  uStack_1e8 = uVar19;
  func_0x00010c219960(*(undefined8 *)(param_5 + lVar15));
  lVar12 = (long)_DAT_112769ea8;
  lVar10 = *(long *)(param_5 + lVar12);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar10);
      }
      uStack_210 = uVar9;
      uStack_208 = uVar18;
      uStack_200 = uVar20;
      uStack_1f8 = uVar21;
      uStack_1f0 = uVar16;
      uStack_1e8 = uVar19;
      func_0x00010c219960(*(undefined8 *)(lVar14 * 8));
      lVar14 = lVar14 + 1;
    } while (lVar1 != lVar14);
    lVar1 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_5 + lVar15));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar15));
  lVar13 = (long)_DAT_112769ea4;
  lVar1 = *(long *)(param_5 + lVar13);
  dVar17 = param_4;
  func_0x00010bf529e0();
  puVar8 = PTR_s_mediaViewAspectRatio_11260f650;
  if (lVar1 == 0) {
    dVar23 = 22.0;
  }
  else {
    uVar11 = 0;
    dVar22 = param_4 + -13.0 + -7.0;
    dVar23 = 16.0;
    do {
      uVar2 = *(ulong *)(param_5 + lVar13);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_5 + lVar12);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      _objc_opt_respondsToSelector(uVar2,puVar8);
      dVar17 = 1.0;
      if ((uVar4 & 1) != 0) {
        func_0x00010c0c70e0(uVar2);
      }
      dVar24 = dVar22 * dVar17;
      if (NAN(dVar24)) {
        ppuStack_130 = &PTR____CFConstantStringClassReference_110de1e58;
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_128 = &PTR____CFConstantStringClassReference_110eac418;
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_120 = puVar5;
        func_0x00010c0df720(dVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_118 = puVar6;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110eac3d8,
                            &PTR____CFConstantStringClassReference_110eac3f8,puVar7,
                            *(undefined8 *)(param_5 + (long)_DAT_112769e94));
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        dVar24 = 0.0;
      }
      if (NAN(dVar23)) {
        ppuStack_150 = &PTR____CFConstantStringClassReference_110de1e58;
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_148 = &PTR____CFConstantStringClassReference_110eac458;
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_140 = puVar5;
        func_0x00010c0df720(dVar24);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_138 = puVar6;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110eac3d8,
                            &PTR____CFConstantStringClassReference_110eac438,puVar7,
                            *(undefined8 *)(param_5 + (long)_DAT_112769e94));
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        dVar23 = 0.0;
      }
      dVar17 = dVar22;
      func_0x00010c19f0e0(dVar23,0x402a000000000000,dVar24,dVar22,uVar3);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar3);
      _objc_release(puVar5);
      dVar23 = dVar24 + dVar23 + 10.0;
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar11 = uVar11 + 1;
      uVar4 = *(ulong *)(param_5 + lVar13);
      func_0x00010bf529e0();
    } while (uVar11 < uVar4);
    dVar23 = dVar23 + 6.0;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar15));
  func_0x00010c1827c0(dVar23,dVar17,*(undefined8 *)(param_5 + lVar15));
  uVar11 = param_5;
  func_0x00010b8166c0();
  if ((uVar11 & 1) != 0) {
    _CGAffineTransformMakeScale(&uStack_210,0xbff0000000000000,0x3ff0000000000000);
    uVar9 = uStack_210;
    uVar18 = uStack_208;
    uVar20 = uStack_200;
    uVar21 = uStack_1f8;
    uVar16 = uStack_1f0;
    uVar19 = uStack_1e8;
  }
  uStack_1e8 = uVar19;
  uStack_1f0 = uVar16;
  uStack_1f8 = uVar21;
  uStack_200 = uVar20;
  uStack_208 = uVar18;
  uStack_210 = uVar9;
  func_0x00010c219960(*(undefined8 *)(param_5 + lVar15));
  lVar10 = *(long *)(param_5 + lVar12);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar10);
      }
      func_0x00010c219960(*(undefined8 *)(lVar12 * 8));
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    lVar1 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(lVar10 + _DAT_112769ea8);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar10);
      }
      uVar9 = *(undefined8 *)(lVar15 * 8);
      func_0x00010bdc2020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar8);
      _objc_release(uVar9);
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(lVar10 + _DAT_112769ea8);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  puVar8 = PTR_s_play_11261d2f8;
  while (PTR_s_play_11261d2f8 = puVar8, lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar10);
      }
      uVar4 = *(ulong *)(lVar15 * 8);
      uVar11 = uVar4;
      _objc_opt_respondsToSelector(uVar4,puVar8);
      if ((uVar11 & 1) != 0) {
        func_0x00010c0fe360(uVar4);
      }
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar10;
    func_0x00010bf52a60();
    puVar8 = PTR_s_play_11261d2f8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(lVar10 + _DAT_112769ea8);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  puVar8 = PTR_s_pause_11261b0e8;
  while (PTR_s_pause_11261b0e8 = puVar8, lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar10);
      }
      uVar4 = *(ulong *)(lVar15 * 8);
      uVar11 = uVar4;
      _objc_opt_respondsToSelector(uVar4,puVar8);
      if ((uVar11 & 1) != 0) {
        func_0x00010c0f5b20(uVar4);
      }
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar10;
    func_0x00010bf52a60();
    puVar8 = PTR_s_pause_11261b0e8;
  }
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar10 + _DAT_112769e9c,0);
    _objc_storeStrong(lVar10 + _DAT_112769e98,0);
    _objc_storeStrong(lVar10 + _DAT_112769e94,0);
    _objc_storeStrong(lVar10 + _DAT_112769e90,0);
    _objc_storeStrong(lVar10 + _DAT_112769e8c,0);
    _objc_storeStrong(lVar10 + _DAT_112769e88,0);
    _objc_storeStrong(lVar10 + _DAT_112769e84,0);
    _objc_storeStrong(lVar10 + _DAT_112769e80,0);
    _objc_storeStrong(lVar10 + _DAT_112769ea8,0);
    _objc_storeStrong(lVar10 + _DAT_112769ea4,0);
    _objc_storeStrong(lVar10 + _DAT_112769ea0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar10 + _DAT_112769e7c,0);
    return;
  }
  return;
}



/* Entry: 107ad7480; end: 107ad75bf; -[SCSendGalleryMediaGroupsMediaView SCAMediaTypes] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000107ad7508 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_107ad7480(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + _DAT_112769ea8);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar4 = *(undefined8 *)(lVar9 * 8);
      func_0x00010bdc2020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(uVar4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(lVar7 + _DAT_112769ea8);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar2 = PTR_s_play_11261d2f8;
  while (PTR_s_play_11261d2f8 = puVar2, lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar5 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar2);
      if ((uVar5 & 1) != 0) {
        func_0x00010c0fe360(uVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    puVar2 = PTR_s_play_11261d2f8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(lVar7 + _DAT_112769ea8);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar2 = PTR_s_pause_11261b0e8;
  while (PTR_s_pause_11261b0e8 = puVar2, lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar5 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar2);
      if ((uVar5 & 1) != 0) {
        func_0x00010c0f5b20(uVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    puVar2 = PTR_s_pause_11261b0e8;
  }
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar7 + _DAT_112769e9c,0);
  _objc_storeStrong(lVar7 + _DAT_112769e98,0);
  _objc_storeStrong(lVar7 + _DAT_112769e94,0);
  _objc_storeStrong(lVar7 + _DAT_112769e90,0);
  _objc_storeStrong(lVar7 + _DAT_112769e8c,0);
  _objc_storeStrong(lVar7 + _DAT_112769e88,0);
  _objc_storeStrong(lVar7 + _DAT_112769e84,0);
  _objc_storeStrong(lVar7 + _DAT_112769e80,0);
  _objc_storeStrong(lVar7 + _DAT_112769ea8,0);
  _objc_storeStrong(lVar7 + _DAT_112769ea4,0);
  _objc_storeStrong(lVar7 + _DAT_112769ea0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar7 + _DAT_112769e7c,0);
  return;
}



/* Entry: 107ad75c0; end: 107ad76db; -[SCSendGalleryMediaGroupsMediaView play] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad75c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + _DAT_112769ea8);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_play_11261d2f8;
  while (PTR_s_play_11261d2f8 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c0fe360(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    puVar1 = PTR_s_play_11261d2f8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(lVar6 + _DAT_112769ea8);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_pause_11261b0e8;
  while (PTR_s_pause_11261b0e8 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c0f5b20(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    puVar1 = PTR_s_pause_11261b0e8;
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar6 + _DAT_112769e9c,0);
  _objc_storeStrong(lVar6 + _DAT_112769e98,0);
  _objc_storeStrong(lVar6 + _DAT_112769e94,0);
  _objc_storeStrong(lVar6 + _DAT_112769e90,0);
  _objc_storeStrong(lVar6 + _DAT_112769e8c,0);
  _objc_storeStrong(lVar6 + _DAT_112769e88,0);
  _objc_storeStrong(lVar6 + _DAT_112769e84,0);
  _objc_storeStrong(lVar6 + _DAT_112769e80,0);
  _objc_storeStrong(lVar6 + _DAT_112769ea8,0);
  _objc_storeStrong(lVar6 + _DAT_112769ea4,0);
  _objc_storeStrong(lVar6 + _DAT_112769ea0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar6 + _DAT_112769e7c,0);
  return;
}



/* Entry: 107ad76dc; end: 107ad77f7; -[SCSendGalleryMediaGroupsMediaView pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad76dc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + _DAT_112769ea8);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_pause_11261b0e8;
  while (PTR_s_pause_11261b0e8 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c0f5b20(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    puVar1 = PTR_s_pause_11261b0e8;
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar6 + _DAT_112769e9c,0);
  _objc_storeStrong(lVar6 + _DAT_112769e98,0);
  _objc_storeStrong(lVar6 + _DAT_112769e94,0);
  _objc_storeStrong(lVar6 + _DAT_112769e90,0);
  _objc_storeStrong(lVar6 + _DAT_112769e8c,0);
  _objc_storeStrong(lVar6 + _DAT_112769e88,0);
  _objc_storeStrong(lVar6 + _DAT_112769e84,0);
  _objc_storeStrong(lVar6 + _DAT_112769e80,0);
  _objc_storeStrong(lVar6 + _DAT_112769ea8,0);
  _objc_storeStrong(lVar6 + _DAT_112769ea4,0);
  _objc_storeStrong(lVar6 + _DAT_112769ea0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar6 + _DAT_112769e7c,0);
  return;
}



/* Entry: 107ad77f8; end: 107ad78d7; -[SCSendGalleryMediaGroupsMediaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad77f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112769e9c,0);
  _objc_storeStrong(param_1 + _DAT_112769e98,0);
  _objc_storeStrong(param_1 + _DAT_112769e94,0);
  _objc_storeStrong(param_1 + _DAT_112769e90,0);
  _objc_storeStrong(param_1 + _DAT_112769e8c,0);
  _objc_storeStrong(param_1 + _DAT_112769e88,0);
  _objc_storeStrong(param_1 + _DAT_112769e84,0);
  _objc_storeStrong(param_1 + _DAT_112769e80,0);
  _objc_storeStrong(param_1 + _DAT_112769ea8,0);
  _objc_storeStrong(param_1 + _DAT_112769ea4,0);
  _objc_storeStrong(param_1 + _DAT_112769ea0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112769e7c,0);
  return;
}



/* Entry: 107ad78d8; end: 107ad7aa7; -[SCSendGalleryMediaGroupsPreviewModel initWithGalleryMediaGroups:previewAssetVideoProviderFactory:dataObjectContext:encryptedContentManager:memoriesEntryThumbnailGeneratorBuilder:memoriesCachingMediaManager:userTrackedLogger:circumstanceEngine:videoTrackingServices:] */

undefined1 *
FUN_107ad78d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f9b28;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ad7aa8; end: 107ad7aaf; -[SCSendGalleryMediaGroupsPreviewModel viewStyle] */

undefined8 FUN_107ad7aa8(void)

{
  return 2;
}



/* Entry: 107ad7ab0; end: 107ad7aff; -[SCSendGalleryMediaGroupsPreviewModel mediaView] */

void FUN_107ad7ab0(void)

{
  _objc_alloc(PTR_PTR_1126d6460);
  func_0x00010c016f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ad7b00; end: 107ad7b07; -[SCSendGalleryMediaGroupsPreviewModel shareType] */

undefined8 FUN_107ad7b00(void)

{
  return 1;
}



/* Entry: 107ad7b08; end: 107ad7b8b; -[SCSendGalleryMediaGroupsPreviewModel .cxx_destruct] */

void FUN_107ad7b08(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 107ad7b8c; end: 107ad7e0b; -[SCSendGalleryMultiSnapPreviewModel initWithGalleryMediaGroup:galleryEntry:gallerySnap:previewAssetVideoProviderFactory:dataObjectContext:encryptedContentManager:memoriesEntryThumbnailGeneratorBuilder:memoriesCachingMediaManager:userTrackedLogger:circumstanceEngine:videoTrackingServices:] */

undefined8 *
FUN_107ad7b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f9b30;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 107ad7e0c; end: 107ad7e13; -[SCSendGalleryMultiSnapPreviewModel viewStyle] */

undefined8 FUN_107ad7e0c(void)

{
  return 2;
}



/* Entry: 107ad7e14; end: 107ad7edb; -[SCSendGalleryMultiSnapPreviewModel mediaView] */

undefined * FUN_107ad7e14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d6460;
  _objc_alloc(PTR_PTR_1126d6460);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016f40(puVar1,param_2,puVar2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 107ad7edc; end: 107ad7ee3; -[SCSendGalleryMultiSnapPreviewModel shareType] */

undefined8 FUN_107ad7edc(void)

{
  return 1;
}



/* Entry: 107ad7ee4; end: 107ad7eef; -[SCSendGalleryMultiSnapPreviewModel chatMessage] */

void FUN_107ad7ee4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  puVar2 = *(undefined **)(param_1 + 0x18);
  _objc_retain();
  _objc_retain(puVar2);
  puVar3 = puVar1;
  func_0x00010bf977c0();
  if (((uint)puVar3 == 7) && (puVar4 = puVar1, func_0x00010b5f6b3c(), (int)puVar4 != 0)) {
    puVar7 = puVar2;
    func_0x00010b5f7a24(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x000108dfd174();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = puVar1;
    func_0x00010bf977c0();
    if ((((int)puVar4 == 9) || (puVar4 = puVar1, func_0x00010bf977c0(), (int)puVar4 == 0xf)) ||
       (((uint)puVar3 < 0x3f && ((1L << ((ulong)puVar3 & 0x3f) & 0x4008180000000000U) != 0)))) {
      puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      _objc_retain(puVar2);
      func_0x00010c0c7400();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010b5f7a24(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar7 = puVar3;
      func_0x00010c25d400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar5 = &PTR____CFConstantStringClassReference_110eac578;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eac578,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
    }
    else {
      puVar3 = puVar1;
      func_0x00010bf977c0();
      if ((int)puVar3 == 8) {
        puVar3 = puVar1;
        func_0x00010c2711a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107ade3c8;
      }
      puVar4 = puVar1;
      func_0x00010bf977c0();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar7 = puVar1;
      if ((int)puVar4 == 0x27) {
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010b5f7a24();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x000108dfd174();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar4);
      }
      else {
        puVar3 = puVar1;
        func_0x00010bf977c0();
        if ((int)puVar3 == 0x12) {
          func_0x000108dfd7f4();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107ade3c8;
        }
        func_0x00010bf3fcc0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar7;
        func_0x00010c1083e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  _objc_release(puVar7);
LAB_107ade3c8:
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ad7ef0; end: 107ad7f8b; -[SCSendGalleryMultiSnapPreviewModel .cxx_destruct] */

void FUN_107ad7ef0(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 107ad7f8c; end: 107ad8043; +[SCSendMultiSelectThumbnailMediaView mediaViewAspectRatioForPreviewModel:] */

ulong FUN_107ad7f8c(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_mediaViewAspectRatio_11260f650);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0c70e0(param_4);
    uVar1 = param_1 & 0x7fffffffffffffff;
    if ((uVar1 < 0x7ff0000000000001 &&
        (uVar1 != 0x7ff0000000000000 &&
        (uVar1 != 0 && (-1 < (long)param_1 || 0xffffffffffffe < (param_1 & 0x7fffffffffffffff) - 1))
        )) && (-1 < (long)param_1 ||
              0x3fe < (param_1 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35))
    goto LAB_107ad8028;
  }
  param_1 = 0x3ff0000000000000;
LAB_107ad8028:
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107ad8044; end: 107ad826f; -[SCSendMultiSelectThumbnailMediaView initWithPreviewModel:totalMediaCount:accessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ad8044(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f9b38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0c70c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112769efc;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = uVar2;
    _objc_release(uVar6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126c51b8;
    _objc_alloc();
    func_0x00010c04eae0();
    lVar7 = (long)_DAT_112769f00;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    if (param_4 < 10) {
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110eac478;
    }
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(ppuVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010c1af000(puVar1);
    func_0x00010c161020(puVar1);
    func_0x00010c161080(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ad8270; end: 107ad8377; -[SCSendMultiSelectThumbnailMediaView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad8270(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_90 [32];
  double dStack_70;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f9b38;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_3);
  lVar2 = (long)_DAT_112769efc;
  func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar2));
  lVar1 = (long)_DAT_112769f00;
  func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar1));
  func_0x00010c1739e0(0,0,param_1,param_2,*(undefined8 *)(param_3 + lVar1));
  _CGAffineTransformMakeScale(auStack_90,0x3fe999999999999a,0x3fe999999999999a);
  func_0x00010c219960(*(undefined8 *)(param_3 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar2));
  _CGRectGetWidth();
  func_0x00010c17a6a0((dStack_70 + -2.0) - param_1 * 0.8 * 0.5,param_2 * 0.8 * 0.5 + 2.0,
                      *(undefined8 *)(param_3 + lVar1));
  return;
}



/* Entry: 107ad8378; end: 107ad83cb; -[SCSendMultiSelectThumbnailMediaView SCAMediaTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad8378(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112769efc;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_SCAMediaTypes_11254e1a8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bdc2020(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ad83cc; end: 107ad8413; -[SCSendMultiSelectThumbnailMediaView play] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad83cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112769efc;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_play_11261d2f8);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_play_11261d2f8);
    return;
  }
  return;
}



/* Entry: 107ad8414; end: 107ad845b; -[SCSendMultiSelectThumbnailMediaView pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad8414(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112769efc;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_pause_11261b0e8);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_pause_11261b0e8);
    return;
  }
  return;
}



/* Entry: 107ad845c; end: 107ad84a3; -[SCSendMultiSelectThumbnailMediaView start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad845c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112769efc;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_start_112671080);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_start_112671080);
    return;
  }
  return;
}



/* Entry: 107ad84a4; end: 107ad84eb; -[SCSendMultiSelectThumbnailMediaView stop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad84a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112769efc;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_stop_112673008);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_stop_112673008);
    return;
  }
  return;
}



/* Entry: 107ad84ec; end: 107ad852b; -[SCSendMultiSelectThumbnailMediaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad84ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112769f00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112769efc,0);
  return;
}



/* Entry: 107ad852c; end: 107ad8647; -[SCSendMultiSelectThumbnailPreviewModel initWithBasePreviewModel:thumbnailPreviewModel:totalMediaCount:accessibilityLabel:] */

undefined1 *
FUN_107ad852c(undefined1 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
             long param_6)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar4 = (undefined1 *)0x0;
  if (((param_3 != 0) && (param_4 != 0)) && (1 < param_5)) {
    lVar1 = param_6;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puStack_48 = PTR_PTR_1126f9b40;
      puStack_50 = param_1;
      _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
      if (ppuVar2 != (undefined1 **)0x0) {
        _objc_retain(param_3);
        uVar3 = *(undefined8 *)((long)ppuVar2 + 8);
        *(long *)((long)ppuVar2 + 8) = param_3;
        _objc_release(uVar3);
        _objc_retain(param_4);
        uVar3 = *(undefined8 *)((long)ppuVar2 + 0x10);
        *(long *)((long)ppuVar2 + 0x10) = param_4;
        _objc_release(uVar3);
        *(ulong *)((long)ppuVar2 + 0x18) = param_5;
        lVar1 = param_6;
        func_0x00010bf51e00();
        uVar3 = *(undefined8 *)((long)ppuVar2 + 0x20);
        *(long *)((long)ppuVar2 + 0x20) = lVar1;
        _objc_release(uVar3);
      }
      _objc_retain(ppuVar2);
      param_1 = (undefined1 *)ppuVar2;
      puVar4 = (undefined1 *)ppuVar2;
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 107ad8648; end: 107ad864f; -[SCSendMultiSelectThumbnailPreviewModel viewStyle] */

undefined8 FUN_107ad8648(void)

{
  return 0;
}



/* Entry: 107ad8650; end: 107ad8663; -[SCSendMultiSelectThumbnailPreviewModel mediaViewAspectRatio] */

void FUN_107ad8650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d6468,PTR_s_mediaViewAspectRatioForPreviewMo_11260f658,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 107ad8664; end: 107ad8697; -[SCSendMultiSelectThumbnailPreviewModel mediaView] */

void FUN_107ad8664(void)

{
  _objc_alloc(PTR_PTR_1126d6468);
  func_0x00010c039ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ad8698; end: 107ad869f; -[SCSendMultiSelectThumbnailPreviewModel shareType] */

void FUN_107ad8698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_shareType_112668690);
  return;
}



/* Entry: 107ad86a0; end: 107ad86e7; -[SCSendMultiSelectThumbnailPreviewModel chatMessage] */

void FUN_107ad86a0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_chatMessage_1125ab558);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf36ec0(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ad86e8; end: 107ad8723; -[SCSendMultiSelectThumbnailPreviewModel .cxx_destruct] */

void FUN_107ad86e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ad8724; end: 107ad87cf; -[SCSendOperaPreviewModel initWithOperaShareableMedias:viewLocation:] */

undefined1 * FUN_107ad8724(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    ppuVar3 = (undefined1 **)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126f9b48;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)ppuVar3 + 8);
      *(long *)((long)ppuVar3 + 8) = param_3;
      _objc_release(uVar2);
      *(undefined8 *)((long)ppuVar3 + 0x10) = param_4;
    }
    _objc_retain(ppuVar3);
    param_1 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar3;
}



/* Entry: 107ad87d0; end: 107ad87d7; -[SCSendOperaPreviewModel viewStyle] */

undefined8 FUN_107ad87d0(void)

{
  return 0;
}



/* Entry: 107ad87d8; end: 107ad8a47; -[SCSendOperaPreviewModel mediaViewAspectRatio] */

double FUN_107ad87d8(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                    undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = 0.0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar4 = *(long *)(param_5 + 8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_6,&uStack_1b0,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_1a0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar7 * 8);
        func_0x00010c27a500();
        if (lVar2 == 2) {
          param_3 = 1.0;
          goto LAB_107ad8a00;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_6,&uStack_1b0,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  dVar8 = 0.0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar4 = *(long *)(param_5 + 8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_6,&uStack_1f0,auStack_168,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_1e0;
    do {
      lVar7 = 0;
      do {
        dVar9 = dVar8;
        dVar10 = param_2;
        if (*plStack_1e0 != lVar6) {
          _objc_enumerationMutation(lVar4);
          dVar9 = dVar8;
          dVar10 = param_2;
        }
        puVar5 = *(undefined **)(lStack_1e8 + lVar7 * 8);
        puVar3 = puVar5;
        func_0x00010c0c6c20();
        dVar8 = dVar9;
        param_2 = dVar10;
        if (puVar3 == (undefined *)0x0) {
          puVar3 = puVar5;
          func_0x00010bfe6ac0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d0a0();
          param_2 = dVar10;
          _objc_release(puVar3);
          dVar8 = dVar9;
          if (dVar10 != 0.0) {
            puVar3 = puVar5;
            func_0x00010bfe6ac0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23d0a0();
            dVar8 = dVar9;
            func_0x00010bfe6ac0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23d0a0();
            param_3 = dVar9 / param_2;
            _objc_release(puVar5);
            goto LAB_107ad89f8;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_6,&uStack_1f0,auStack_168,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_3 = param_3 / param_4;
LAB_107ad89f8:
  _objc_release(puVar3);
LAB_107ad8a00:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_alloc(PTR_PTR_1126d6470);
  func_0x00010c045b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return dVar8;
}



/* Entry: 107ad8a48; end: 107ad8a77; -[SCSendOperaPreviewModel mediaView] */

void FUN_107ad8a48(void)

{
  _objc_alloc(PTR_PTR_1126d6470);
  func_0x00010c045b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ad8a78; end: 107ad8a8b; -[SCSendOperaPreviewModel shareType] */

undefined8 FUN_107ad8a78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (*(long *)(param_1 + 0x10) == 0x15) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 107ad8a8c; end: 107ad8a97; -[SCSendOperaPreviewModel .cxx_destruct] */

void FUN_107ad8a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ad8a98; end: 107ad8bf3; -[SCSendPHAssetPreviewModel initWithMemoriesSendPHAsset:shareType:removePreview:isMultiSelect:textOnly:configProvider:] */

undefined1 *
FUN_107ad8a98(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
             byte param_6,undefined1 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) ||
     ((lVar2 = lVar1, func_0x00010c0c6c20(), lVar2 != 1 &&
      (lVar2 = lVar1, func_0x00010c0c6c20(), lVar2 != 2)))) {
LAB_107ad8bac:
    ppuVar4 = (undefined1 **)0x0;
  }
  else {
    if (((param_6 & 1) == 0) && (param_5 != 0)) {
      lVar2 = param_3;
      func_0x00010bf371e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) goto LAB_107ad8bac;
    }
    puStack_68 = PTR_PTR_1126f9b50;
    puStack_70 = param_1;
    _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
    if (ppuVar4 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)((long)ppuVar4 + 8);
      *(long *)((long)ppuVar4 + 8) = param_3;
      _objc_release(uVar3);
      *(undefined8 *)((long)ppuVar4 + 0x10) = param_4;
      *(char *)((long)ppuVar4 + 0x18) = (char)param_5;
      *(byte *)((long)ppuVar4 + 0x19) = param_6;
      *(undefined1 *)((long)ppuVar4 + 0x1a) = param_7;
      _objc_retain(param_8);
      uVar3 = *(undefined8 *)((long)ppuVar4 + 0x20);
      *(undefined8 *)((long)ppuVar4 + 0x20) = param_8;
      _objc_release(uVar3);
    }
    _objc_retain(ppuVar4);
    param_1 = (undefined1 *)ppuVar4;
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar4;
}



/* Entry: 107ad8bf4; end: 107ad8c2b; -[SCSendPHAssetPreviewModel viewStyle] */

undefined8 FUN_107ad8bf4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
      return 4;
    }
  }
  else if (((*(byte *)(param_1 + 0x19) & 1) == 0) && ((*(byte *)(param_1 + 0x1a) & 1) != 0)) {
    return 5;
  }
  return 0;
}



/* Entry: 107ad8c2c; end: 107ad8ccf; -[SCSendPHAssetPreviewModel mediaViewAspectRatio] */

double FUN_107ad8c2c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_5 + 8);
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fcaa0();
  if (uVar3 == 0) {
    func_0x00010bf20c00(puVar1);
    func_0x00010bf20c00(puVar1);
    param_3 = param_3 / param_4;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0fce40(uVar2);
    uVar4 = uVar2;
    func_0x00010c0fcaa0(uVar2);
    param_3 = (double)uVar3 / (double)uVar4;
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_3;
}



/* Entry: 107ad8cd0; end: 107ad8d37; -[SCSendPHAssetPreviewModel mediaView] */

void FUN_107ad8cd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6478;
  _objc_alloc(PTR_PTR_1126d6478);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0af00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032bc0(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ad8d38; end: 107ad8d3f; -[SCSendPHAssetPreviewModel shareType] */

undefined8 FUN_107ad8d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ad8d40; end: 107ad8d47; -[SCSendPHAssetPreviewModel chatMessage] */

void FUN_107ad8d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf371f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_chatPrefillText_1125ab620);
  return;
}



/* Entry: 107ad8d48; end: 107ad8d77; -[SCSendPHAssetPreviewModel .cxx_destruct] */

void FUN_107ad8d48(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ad8d78; end: 107ad8e6b; -[SCSendPreviewURLViewModel initWithURL:urlPreviewProvider:simpleContentFetcher:] */

undefined1 *
FUN_107ad8d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f9b58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x48) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    func_0x00010be15320(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ad8e6c; end: 107ad8e73; -[SCSendPreviewURLViewModel viewStyle] */

undefined8 FUN_107ad8e6c(void)

{
  return 1;
}



/* Entry: 107ad8e74; end: 107ad8e7b; -[SCSendPreviewURLViewModel shareType] */

undefined8 FUN_107ad8e74(void)

{
  return 7;
}



/* Entry: 107ad8e7c; end: 107ad8e8f; -[SCSendPreviewURLViewModel mediaViewInsets] */

undefined8 FUN_107ad8e7c(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 107ad8e90; end: 107ad8f7b; -[SCSendPreviewURLViewModel mediaView] */

void FUN_107ad8e90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010be23a80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  if (param_1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110eac498);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c182220(puVar1,param_2,4);
  }
  else {
    func_0x00010c01bf60(puVar1,param_2,param_1);
    func_0x00010c182220();
    func_0x00010c17d4c0(puVar1,param_2,1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ad8f7c; end: 107ad8fe7; -[SCSendPreviewURLViewModel title] */

void FUN_107ad8f7c(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfe4420(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
  }
  _os_unfair_lock_unlock(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ad8fe8; end: 107ad9053; -[SCSendPreviewURLViewModel subtitle] */

void FUN_107ad8fe8(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010beec820(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
  }
  _os_unfair_lock_unlock(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ad9054; end: 107ad90c7; -[SCSendPreviewURLViewModel _setTitle:subtitle:] */

void FUN_107ad9054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x48);
  return;
}



/* Entry: 107ad90c8; end: 107ad9107; -[SCSendPreviewURLViewModel _setUrlThumbnailImage:] */

void FUN_107ad90c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x48);
  return;
}



/* Entry: 107ad9108; end: 107ad9143; -[SCSendPreviewURLViewModel _getUrlThumbnail] */

void FUN_107ad9108(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ad9144; end: 107ad914b; -[SCSendPreviewURLViewModel mediaViewAspectRatio] */

undefined8 FUN_107ad9144(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 107ad914c; end: 107ad92ab; -[SCSendPreviewURLViewModel _fetchUrlPreview] */

void FUN_107ad914c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfa9620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107ad92ac; end: 107ad939b;  */

void FUN_107ad92ac(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107ad939c;
  uStack_30 = 0x107ad93ac;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32c00();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 107ad939c; end: 107ad93b3;  */

void FUN_107ad939c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ad93b4; end: 107ad93eb;  */

void FUN_107ad93b4(long param_1,undefined8 param_2)

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



/* Entry: 107ad93ec; end: 107ad94c3; -[SCSendPreviewURLViewModel _handleUpdatedUrlPreview:] */

void FUN_107ad93ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea8760(param_1,param_2,lVar1,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7e900();
  }
  else {
    lVar1 = param_3;
    func_0x00010c26e500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14f60(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ad94c4; end: 107ad9613; -[SCSendPreviewURLViewModel _fetchThumbnailImageWithUrl:] */

void FUN_107ad94c4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b08b0;
    func_0x00010bf33760(PTR_PTR_1126b08b0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c13e600(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ad9614; end: 107ad96b7;  */

void FUN_107ad9614(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c13e900(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32bc0();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ad96b8; end: 107ad96ef; -[SCSendPreviewURLViewModel _handleUpdatedThumbnailImage:] */

void FUN_107ad96b8(long param_1)

{
  func_0x00010bea9e40();
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ad96f0; end: 107ad9707; -[SCSendPreviewURLViewModel delegate] */

void FUN_107ad96f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ad9708; end: 107ad9713; -[SCSendPreviewURLViewModel setDelegate:] */

void FUN_107ad9708(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 107ad9714; end: 107ad9793; -[SCSendPreviewURLViewModel .cxx_destruct] */

void FUN_107ad9714(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 107ad9794; end: 107ad9bc3; -[SCGallerySnapMediaView initWithGallerySnap:memoriesCachingMediaManager:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ad9794(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_90 = PTR_PTR_1126f9b60;
  puVar2 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar12 = (long)_DAT_112769f5c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 **)((long)puVar2 + lVar12) = param_7;
    puStack_a0 = param_7;
    _objc_release(uVar3);
    lVar11 = (long)_DAT_112769f60;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_8;
    uStack_a8 = param_8;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(puVar2);
    func_0x00010c013de0();
    lVar13 = (long)_DAT_112769f64;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined **)((long)puVar2 + lVar13) = puVar4;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar2 + lVar13));
    lVar11 = (long)_DAT_112769f68;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_9;
    uStack_b0 = param_9;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar2 + lVar13));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3feccccccccccccd,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar13));
    _objc_release(puVar4);
    func_0x00010befbb60(puVar2);
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar12);
    func_0x000109023acc();
    if (iVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar11 = (long)_DAT_112769f6c;
      uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
      *(undefined **)((long)puVar2 + lVar11) = puVar4;
      _objc_release(uVar3);
      _objc_release(puVar5);
      uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c08c0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(puVar6);
      _objc_release(uVar3);
    }
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar13));
    puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    uStack_b8 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar3;
    param_5 = *(undefined8 *)((long)puVar2 + lVar13);
    uStack_c8 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    uStack_d0 = param_5;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = param_5;
    unaff_x20 = *(undefined8 *)((long)puVar2 + lVar13);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c08de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar3;
    uVar8 = *(undefined8 *)((long)puVar2 + lVar13);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c2793a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_d8);
    _objc_release(puVar4);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(puVar7);
    _objc_release(unaff_x20);
    _objc_release(param_5);
    _objc_release(puVar6);
    _objc_release(uStack_d0);
    _objc_release(uStack_c8);
    _objc_release(puStack_c0);
    _objc_release(uStack_b8);
    param_7 = puStack_a0;
    param_8 = uStack_a8;
    param_9 = uStack_b0;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_107ad9bc4;
  puStack_108 = PTR_PTR_1126f9b60;
  puStack_110 = param_7;
  uStack_100 = unaff_x20;
  uStack_f8 = param_5;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_110,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_7);
  func_0x00010c19f0e0(*(undefined8 *)((long)param_7 + (long)_DAT_112769f6c));
  puVar2 = param_7;
  func_0x00010bfb68e0(param_7);
  if ((param_3 != 0.0) && (puVar2 = param_7, func_0x00010bfb68e0(param_7), param_4 != 0.0)) {
    func_0x00010be91a00(param_7);
    puVar2 = param_7;
  }
  return puVar2;
}


