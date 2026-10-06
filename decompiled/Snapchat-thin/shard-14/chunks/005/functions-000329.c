/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2a2704; end: 10b2a2727;  */

undefined8 FUN_10b2a2704(int param_1)

{
  undefined8 uVar1;
  
  func_0x000107c30a74();
  uVar1 = 0x402a000000000000;
  if (param_1 == 0) {
    uVar1 = 0x4020000000000000;
  }
  return uVar1;
}



/* Entry: 10b2a2728; end: 10b2a29ef;  */

void FUN_10b2a2728(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
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
  
  _objc_retain(param_8);
  uVar1 = param_6;
  func_0x00010bde9d60(param_5,param_6,param_7,param_9);
  _objc_retainAutoreleasedReturnValue();
  _CGAffineTransformMakeScale(&uStack_90,0x3ff0000000000000,0xbff0000000000000);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  func_0x00010c219960(uVar1,param_7,&uStack_c0);
  dVar3 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar4 = dVar3;
  func_0x00010bf20c00(uVar1);
  _CGRectGetMidX();
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar5 = param_1;
  func_0x00010bf20c00(uVar1);
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar3 + dVar4,param_1 - dVar5,uVar1);
  func_0x00010c16d4a0(uVar1,param_7,0xc);
  uVar2 = uVar1;
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x3ff0000000000000);
  _objc_release(uVar2);
  func_0x00010befbb60(param_8,param_7,uVar1);
  _objc_release(param_8);
  func_0x00010befc0a0(param_6,param_7,uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2a29f0; end: 10b2a2adf;  */

void FUN_10b2a29f0(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b2a2a8c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f48b8 != -1) {
    func_0x000107c27d9c(0x1137f48b8,&puStack_48);
  }
  if ((bRam00000001137f48b0 & 1) != 0) {
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2a2ae0; end: 10b2a2b53;  */

undefined1 FUN_10b2a2ae0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b2a2b54;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001137f48c0 != -1) {
    uStack_18 = param_1;
    func_0x000107c27d9c(0x1137f48c0,&puStack_38);
  }
  return uRam00000001137f48b1;
}



/* Entry: 10b2a2b54; end: 10b2a2ba7;  */

void FUN_10b2a2b54(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_1126a5c30;
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x000107c318f8(lVar3,puVar1);
  _objc_release(lVar3);
  uRam00000001137f48b1 = 0;
  if (lVar3 != 0) {
    uRam00000001137f48b1 = (undefined1)lVar2;
  }
  return;
}



/* Entry: 10b2a2ba8; end: 10b2a2cb7;  */

void FUN_10b2a2ba8(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = param_2;
  func_0x00010bde62a0();
  if ((int)uVar1 != 0) {
    _objc_retain(param_2);
    uVar1 = param_2;
    func_0x00010bf31bc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf31a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c14da40(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar1 = param_2;
    dVar4 = param_1;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    uVar3 = param_2;
    dVar5 = dVar4;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bf20c00(uVar3);
    _CGRectGetHeight();
    func_0x00010c19f0e0(0,-param_1,dVar4,param_1 + dVar5,uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10b2a2cb8; end: 10b2a2e97;  */

void FUN_10b2a2cb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5c38);
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    func_0x00010c1ee9a0(0x4028000000000000,param_3);
  }
  lVar1 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_3);
    func_0x00010c19f0e0(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(puVar3);
    func_0x00010bf199e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar3);
    _objc_release(puVar4);
    lVar1 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2a2e98; end: 10b2a2f5b;  */

void FUN_10b2a2e98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c142240();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bddbb40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c1554e0();
    do {
      if (lVar2 < 1) {
        _objc_release(lVar1);
        func_0x00010bec5a20(param_1,param_2,param_3);
        goto LAB_10b2a2f24;
      }
      lVar3 = lVar1;
      func_0x00010c0df2a0(lVar1,param_2,lVar2 + -1);
      lVar2 = lVar2 + -1;
    } while (lVar3 < 1);
    _objc_release(lVar1);
  }
  func_0x00010bec5a40(param_1,param_2,param_3);
LAB_10b2a2f24:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2a2f5c; end: 10b2a3087;  */

void FUN_10b2a2f5c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  _objc_getAssociatedObject(param_1,0x1137f48a8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0(puVar1);
    _objc_release(puVar2);
    func_0x00010c16d4a0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(0x4024000000000000);
    _objc_release(puVar2);
    func_0x00010c1677c0(0,puVar1);
    func_0x00010c21e900(puVar1);
    puVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c1f5ee0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2a3088; end: 10b2a3097;  */

void FUN_10b2a3088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,0x1137f48a8,param_3,1);
  return;
}



/* Entry: 10b2a3098; end: 10b2a31cb;  */

void FUN_10b2a3098(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
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
  lVar1 = param_1;
  func_0x00010c14d9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(lVar1);
    param_4 = auStack_c8;
    param_5 = 0x10;
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_110,param_4,0x10);
    if (lVar2 != 0) {
      lVar4 = *plStack_100;
      do {
        lVar5 = 0;
        do {
          if (*plStack_100 != lVar4) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_108 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        param_4 = auStack_c8;
        param_5 = 0x10;
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_110,param_4,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    param_3 = puVar3;
    func_0x00010c1f5f40(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf04040(puVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  _objc_release(param_4);
  func_0x00010c216920(puVar3,param_2,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b2a31cc; end: 10b2a324f;  */

void FUN_10b2a31cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf04040(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  _objc_release(param_4);
  func_0x00010c216920(puVar1,param_2,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2a3250; end: 10b2a326b;  */

void FUN_10b2a3250(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf040f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0,param_2,PTR_s_animationWithKeyPath_fromValue_t_11259e9e0);
  return;
}



/* Entry: 10b2a326c; end: 10b2a337f;  */

void FUN_10b2a326c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf04040(puVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  _objc_release(param_6);
  func_0x00010c216920(puVar1,param_4,param_7);
  _objc_release(param_7);
  func_0x00010c192d40(param_1,puVar1);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_4,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c216080(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  _CACurrentMediaTime();
  func_0x00010c16fd40(param_2 + param_1,puVar1);
  if (param_9 != 0) {
    func_0x00010c1eabe0(0x7f800000,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2a3380; end: 10b2a3387;  */

void FUN_10b2a3380(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_animationGroupForStart_withValue_11259e8d0);
  return;
}



/* Entry: 10b2a3388; end: 10b2a3627;  */

void FUN_10b2a3388(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,int param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
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
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_6);
  lVar2 = param_6;
  func_0x00010bf52a60(param_6,param_4,&uStack_140,auStack_100,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_6);
        }
        uVar10 = *(undefined8 *)(lStack_138 + lVar8 * 8);
        lVar3 = param_6;
        func_0x00010c0e00e0(param_6,param_4,uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
        lVar4 = lVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c0dfd40(lVar3,param_4,param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04080(puVar6,param_4,uVar10,lVar4,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_4,puVar6);
        _objc_release(puVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_6;
      func_0x00010bf52a60(param_6,param_4,&uStack_140,auStack_100,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_6);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(param_1);
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar6,param_4,puVar7);
  _objc_release(puVar7);
  func_0x00010c168400(puVar6,param_4,puVar1);
  uVar10 = *(undefined8 *)PTR__kCAFillModeForwards_110346ce0;
  func_0x00010c19bc40(puVar6,param_4,uVar10);
  _CACurrentMediaTime();
  func_0x00010c16fd40(param_2 + param_1,puVar6);
  if (param_8 != 0) {
    func_0x00010c1eabe0(0x7f800000,puVar6);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  lVar2 = param_6;
  func_0x00010c0cb260(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(param_6,param_4,uVar10,lVar2);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b2a3628; end: 10b2a3687; +[SCStatusBarOverlayLabelWindow showMessageWithText:] */

void FUN_10b2a3628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0cb260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a3688; end: 10b2a36e7; +[SCStatusBarOverlayLabelWindow showErrorWithText:] */

void FUN_10b2a3688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0cb260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a36e8; end: 10b2a3757; +[SCStatusBarOverlayLabelWindow showDireErrorWithText:] */

void FUN_10b2a36e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010bf41580(puVar1,param_2,0xe45e58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2a3758; end: 10b2a37d7; +[SCStatusBarOverlayLabelWindow showMessageWithText:backgroundColor:] */

void FUN_10b2a3758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2a4b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2a37d8; end: 10b2a3867; +[SCStatusBarOverlayLabelWindow showMessageWithText:backgroundColor:duration:] */

void FUN_10b2a37d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2a4b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2387a0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2a3868; end: 10b2a386f; +[SCStatusBarOverlayLabelWindow showMessageWithText:backgroundColor:textColor:] */

void FUN_10b2a3868(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2387b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4010000000000000,param_1,PTR_s_showMessageWithText_backgroundCo_11266bc10);
  return;
}



/* Entry: 10b2a3870; end: 10b2a3877; +[SCStatusBarOverlayLabelWindow showMessageWithText:backgroundColor:textColor:accessibilityId:] */

void FUN_10b2a3870(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2387d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4010000000000000,param_1,PTR_s_showMessageWithText_backgroundCo_11266bc18);
  return;
}



/* Entry: 10b2a3878; end: 10b2a388b; +[SCStatusBarOverlayLabelWindow showMessageWithText:backgroundColor:textColor:duration:] */

void FUN_10b2a3878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2386d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showMessageWithMultipleLines_tex_11266bbd8,0,param_3,param_4,param_5);
  return;
}



/* Entry: 10b2a388c; end: 10b2a38a3; +[SCStatusBarOverlayLabelWindow showMessageWithText:backgroundColor:textColor:duration:accessibilityId:] */

void FUN_10b2a388c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2386f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showMessageWithMultipleLines_tex_11266bbe0,0,param_3,param_4,param_5,
             param_6);
  return;
}



/* Entry: 10b2a38a4; end: 10b2a38ab; +[SCStatusBarOverlayLabelWindow showMessageWithMultipleLines:text:backgroundColor:textColor:duration:] */

void FUN_10b2a38a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2386f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showMessageWithMultipleLines_tex_11266bbe0);
  return;
}



/* Entry: 10b2a38ac; end: 10b2a39c7; +[SCStatusBarOverlayLabelWindow showMessageWithMultipleLines:text:backgroundColor:textColor:duration:accessibilityId:] */

void FUN_10b2a38ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10b2a39c8;
  puStack_88 = &UNK_11094eca0;
  uStack_80 = param_7;
  uStack_78 = param_6;
  uStack_70 = param_5;
  uStack_68 = param_8;
  uStack_60 = param_1;
  uStack_58 = param_4;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x000107c312d0("APPSTORE",&puStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_7);
  return;
}



/* Entry: 10b2a39c8; end: 10b2a3a83;  */

void FUN_10b2a39c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126afca8;
  _objc_alloc(PTR_PTR_1126afca8);
  func_0x00010c02cc60();
  func_0x00010c213180();
  func_0x00010c16e440(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c212f20(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c235d80(*(undefined8 *)(param_1 + 0x40),puVar1,param_2,1);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c160fc0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2a3a84; end: 10b2a3a97; +[SCStatusBarOverlayLabelWindow messageBackgroundColor] */

void FUN_10b2a3a84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithHexCode__1125adf08,0xbbbbbb);
  return;
}



/* Entry: 10b2a3a98; end: 10b2a3ccf; -[SCStatusBarOverlayLabelWindow initWithMultipleLines:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2a3a98(double param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar5 = &uStack_80;
  uVar3 = 0;
  func_0x000107c30a2c(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  dVar10 = param_1;
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar10 = dVar10 + -16.0;
  _objc_release(puVar4);
  puStack_78 = PTR_PTR_1127061e0;
  dVar9 = 28.0;
  uStack_80 = param_2;
  _objc_msgSendSuper2(0x4020000000000000,param_1,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar5 != (undefined8 *)0x0) {
    func_0x00010bd86158(puVar5);
    *(undefined1 *)((long)puVar5 + (long)_DAT_11278e1cc) = param_4;
    dVar8 = 1.0;
    dVar7 = *(double *)PTR__UIWindowLevelStatusBar_110345e90 + 1.0;
    func_0x00010c225b00(puVar5);
    pdVar1 = (double *)((long)puVar5 + (long)_DAT_11278e1d0);
    func_0x00010bf20c00(puVar5);
    func_0x00010bf20c00(puVar5);
    _CGRectGetHeight();
    func_0x00010bc8525c();
    *pdVar1 = dVar7;
    pdVar1[1] = dVar8;
    pdVar1[2] = dVar10;
    pdVar1[3] = dVar9;
    pdVar2 = (double *)((long)puVar5 + (long)_DAT_11278e1d4);
    func_0x00010bf20c00(puVar5);
    *pdVar2 = dVar7;
    pdVar2[1] = dVar8;
    pdVar2[2] = dVar10;
    pdVar2[3] = dVar9;
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3]);
    lVar6 = (long)_DAT_11278e1d8;
    uVar3 = *(undefined8 *)((long)puVar5 + lVar6);
    *(undefined **)((long)puVar5 + lVar6) = puVar4;
    _objc_release(uVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar5 + lVar6));
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1eda0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar5 + lVar6));
    _objc_release(puVar4);
    func_0x00010c165e20(*(undefined8 *)((long)puVar5 + lVar6));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar5 + lVar6));
    uVar3 = *(undefined8 *)((long)puVar5 + lVar6);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar5 + lVar6));
    func_0x00010befbb60(puVar5);
  }
  return (undefined1 *)puVar5;
}



/* Entry: 10b2a3cd0; end: 10b2a3cd7; -[SCStatusBarOverlayLabelWindow init] */

void FUN_10b2a3cd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02cc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithMultipleLines__1125e8d00,0);
  return;
}



/* Entry: 10b2a3cd8; end: 10b2a3d37; -[SCStatusBarOverlayLabelWindow setText:] */

void FUN_10b2a3cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc9390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__adjustFrame_11254fe80);
  return;
}



/* Entry: 10b2a3d38; end: 10b2a3d87; -[SCStatusBarOverlayLabelWindow setTextColor:] */

void FUN_10b2a3d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2a3d88; end: 10b2a3de7; -[SCStatusBarOverlayLabelWindow setFont:] */

void FUN_10b2a3d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc9390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__adjustFrame_11254fe80);
  return;
}



/* Entry: 10b2a3de8; end: 10b2a3e37; -[SCStatusBarOverlayLabelWindow setBackgroundColor:] */

void FUN_10b2a3de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2a3e38; end: 10b2a3feb; -[SCStatusBarOverlayLabelWindow _adjustFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a3e38(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,int param_7)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_5;
  dVar8 = param_1;
  dVar9 = param_2;
  dVar10 = param_3;
  if (param_5[_DAT_11278e1cc] == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar3 = param_5;
    func_0x00010c087500(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar5 = param_5;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_80,&uStack_88,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar2,param_6,puVar4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf20c00(param_5);
    puVar3 = PTR_PTR_1126af270;
    dVar10 = param_3;
    _CGRectGetWidth();
    dVar9 = 1.79769313486232e+308;
    puVar4 = puVar2;
    func_0x00010c23d600(puVar3,param_6,puVar2,0);
    param_7 = (int)puVar4;
    dVar8 = dVar9 + 16.0;
    pdVar1 = (double *)(param_5 + _DAT_11278e1d4);
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = dVar8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1a7f60();
  if (param_7 != 0) {
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x10b2a40d4;
    puStack_e0 = &UNK_110842e18;
    puStack_d8 = puVar2;
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_f8);
    return;
  }
  func_0x00010c087700(puVar2);
  func_0x00010c087500(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar8,dVar9,dVar10,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b2a3fec; end: 10b2a4143; -[SCStatusBarOverlayLabelWindow showAnimated:] */

void FUN_10b2a3fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010c1a7f60(param_5,param_6,0);
  if (param_7 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10b2a40d4;
    puStack_50 = &UNK_110842e18;
    uStack_48 = param_5;
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_68);
    return;
  }
  func_0x00010c087700(param_5);
  func_0x00010c087500(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b2a4144; end: 10b2a42bb; -[SCStatusBarOverlayLabelWindow hideAnimated:] */

void FUN_10b2a4144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if (param_7 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10b2a424c;
    puStack_50 = &UNK_110842e18;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10b2a42bc;
    puStack_78 = &UNK_110841f20;
    uStack_70 = param_5;
    uStack_48 = param_5;
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_68,
                        &puStack_90);
    return;
  }
  func_0x00010c0876e0(param_5);
  uVar1 = param_5;
  func_0x00010c087500(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10b2a42bc; end: 10b2a42c7;  */

void FUN_10b2a42bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10b2a42c8; end: 10b2a436f; -[SCStatusBarOverlayLabelWindow showAnimated:hideInSeconds:] */

void FUN_10b2a42c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c1a7f60(param_2,param_3,0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b2a4370;
  puStack_40 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b2a43e0;
  puStack_70 = &UNK_1108471e0;
  uStack_68 = param_2;
  uStack_60 = param_1;
  uStack_38 = param_2;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_58,
                      &puStack_88);
  return;
}



/* Entry: 10b2a4370; end: 10b2a43df;  */

void FUN_10b2a4370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x00010c087700(*(undefined8 *)(param_5 + 0x20));
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c087500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a43e0; end: 10b2a44cf;  */

void FUN_10b2a43e0(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x10b2a4444;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c312d4((float)*(double *)(param_1 + 0x28),"APPSTORE",&puStack_38);
  return;
}



/* Entry: 10b2a44d0; end: 10b2a453f;  */

void FUN_10b2a44d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x00010c0876e0(*(undefined8 *)(param_5 + 0x20));
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c087500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a4540; end: 10b2a454b;  */

void FUN_10b2a4540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10b2a454c; end: 10b2a455b; -[SCStatusBarOverlayLabelWindow label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a454c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1d8);
}



/* Entry: 10b2a455c; end: 10b2a459b; -[SCStatusBarOverlayLabelWindow setLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a455c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e1d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a459c; end: 10b2a45b3; -[SCStatusBarOverlayLabelWindow labelFrameHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a459c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1d0);
}



/* Entry: 10b2a45b4; end: 10b2a45cb; -[SCStatusBarOverlayLabelWindow setLabelFrameHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a45b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11278e1d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b2a45cc; end: 10b2a45e3; -[SCStatusBarOverlayLabelWindow labelFrameVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a45cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1d4);
}



/* Entry: 10b2a45e4; end: 10b2a45fb; -[SCStatusBarOverlayLabelWindow setLabelFrameVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a45e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11278e1d4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b2a45fc; end: 10b2a460f; -[SCStatusBarOverlayLabelWindow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a45fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e1d8,0);
  return;
}



/* Entry: 10b2a4610; end: 10b2a46f7;  */

void FUN_10b2a4610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  func_0x00010c130f80(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98,
                      &PTR____CFConstantStringClassReference_110daafd8,2,0,uVar1);
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010c130f80(param_3,param_2,&PTR____CFConstantStringClassReference_110e99cb8,
                      &PTR____CFConstantStringClassReference_110daafd8,2,0,uVar1);
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010c130f80(param_3,param_2,&PTR____CFConstantStringClassReference_110dc0578,
                      &PTR____CFConstantStringClassReference_110daafd8,2,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2a46f8; end: 10b2a4847;  */

void FUN_10b2a46f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010be18aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e99cd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(param_1,param_2,puVar3,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a4848; end: 10b2a484f;  */

void FUN_10b2a4848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_handleTouchDownEventToSetImageFo_1125d2568,param_3,0);
  return;
}



/* Entry: 10b2a4850; end: 10b2a49a3;  */

void FUN_10b2a4850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retainBlock(param_3);
  _objc_setAssociatedObject(param_1,0x1137f48c8,param_3,3);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,0x1137f48c9,puVar1,3);
  func_0x00010befbd60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2a49a4; end: 10b2a4a4b;  */

void FUN_10b2a49a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  _objc_getAssociatedObject(param_1,0x1137f48ca);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  _objc_retainBlock(param_4);
  _objc_release(param_4);
  _objc_setAssociatedObject(param_1,0x1137f48ca,uVar2,0x303);
  _objc_release(uVar2);
  func_0x00010befbd60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a4a4c; end: 10b2a4aaf;  */

void FUN_10b2a4a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_getAssociatedObject(param_1,0x1137f48ca);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x10))(param_1,param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2a4ab0; end: 10b2a4b8b;  */

double FUN_10b2a4ab0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_5;
  func_0x00010bf4cbe0();
  if (lVar1 == 1) {
    lVar1 = param_5;
    func_0x00010bfe6ac0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_5);
    func_0x00010bf20c00(param_5);
    func_0x00010c23d0a0(lVar1);
    dVar2 = 0.0;
    if (param_1 / param_2 < param_3 / param_4) {
      dVar2 = (param_3 - param_1 * (param_4 / param_2)) * 0.5;
    }
    _objc_release(lVar1);
  }
  else {
    dVar2 = 0.0;
  }
  return dVar2;
}



/* Entry: 10b2a4b8c; end: 10b2a4c97;  */

void FUN_10b2a4b8c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010c04e820();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010c04e820();
    func_0x00010c08fa60(param_4);
    func_0x00010c11f3a0(param_4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740((float)param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(param_4);
    func_0x00010bef6f20(puVar3);
    _objc_release(puVar2);
  }
  func_0x00010c16b720(param_2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b2a4c98; end: 10b2a4ce3;  */

void FUN_10b2a4c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fc0(param_1,param_2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a4ce4; end: 10b2a4ceb;  */

void FUN_10b2a4ce4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c151950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_screenshotDrawViewHierarchy__112632070,0);
  return;
}



/* Entry: 10b2a4cec; end: 10b2a5043;  */

undefined8 *
FUN_10b2a4cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  long unaff_x24;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **unaff_x26;
  undefined *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined *puStack_820;
  long lStack_818;
  long *plStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  long lStack_7d8;
  long *plStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_698;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined **ppuStack_568;
  undefined *puStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  long lStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  long lStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined **ppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined1 **ppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [384];
  long lStack_298;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar22 = 0.0;
  dVar24 = param_4;
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0);
  _objc_release();
  if (param_7 == 0) {
    _UIGraphicsGetCurrentContext();
    dVar26 = 0.0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    puVar16 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar16;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    iVar9 = (int)&uStack_200;
    puVar16 = puVar20;
    func_0x00010bf52a60();
    if (puVar16 != (undefined *)0x0) {
      unaff_x26 = (undefined **)*plStack_1f0;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if ((undefined **)*plStack_1f0 != unaff_x26) {
            _objc_enumerationMutation(puVar20);
          }
          lVar14 = *(long *)(lStack_1f8 + (long)puVar21 * 8);
          puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010beb5420();
          if ((int)puVar2 != 0) {
            _CGContextSaveGState(puVar1);
            func_0x00010bf345e0(lVar14);
            func_0x00010bf345e0(lVar14);
            _CGContextTranslateCTM(dVar26,puVar1);
            if (lVar14 == 0) {
              dVar26 = 0.0;
              uStack_218 = 0;
              uStack_220 = 0;
              uStack_208 = 0;
              uStack_210 = 0;
              uStack_228 = 0;
              uStack_230 = 0;
              dVar23 = dVar22;
              dVar25 = dVar24;
            }
            else {
              func_0x00010c27a460(&uStack_230,lVar14);
              dVar23 = dVar22;
              dVar25 = dVar24;
            }
            _CGContextConcatCTM(puVar1,&uStack_230);
            func_0x00010bf20c00(lVar14);
            lVar3 = lVar14;
            dVar22 = dVar23;
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf02960();
            dVar26 = -(dVar23 * dVar26);
            func_0x00010bf20c00(lVar14);
            unaff_x24 = lVar14;
            dVar24 = dVar25;
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf02960();
            param_4 = -(dVar25 * param_4);
            _CGContextTranslateCTM(dVar26,param_4,puVar1);
            _objc_release(unaff_x24);
            _objc_release(lVar3);
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12fc60();
            _objc_release(lVar14);
            _CGContextRestoreGState(puVar1);
          }
          puVar21 = puVar21 + 1;
        } while (puVar16 != puVar21);
        iVar9 = (int)&uStack_200;
        puVar16 = puVar20;
        func_0x00010bf52a60();
      } while (puVar16 != (undefined *)0x0);
    }
  }
  else {
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    iVar9 = (int)&uStack_1c0;
    puVar1 = puVar20;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar14 = *plStack_1b0;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lVar14) {
            _objc_enumerationMutation(puVar20);
          }
          uVar12 = *(undefined8 *)(lStack_1b8 + (long)puVar16 * 8);
          puVar21 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010beb5420();
          if ((int)puVar21 != 0) {
            func_0x00010bf20c00(uVar12);
            func_0x00010bf89ce0(uVar12);
          }
          puVar16 = puVar16 + 1;
        } while (puVar1 != puVar16);
        iVar9 = (int)&uStack_1c0;
        puVar1 = puVar20;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
  }
  _objc_release();
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar20;
  _UIGraphicsEndImageContext();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    pcStack_238 = FUN_10b2a5044;
    puVar8 = &uStack_4e0;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_240 = &stack0xfffffffffffffff0;
    if (iVar9 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      plStack_450 = (long *)0x0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c2a7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      ppuVar4 = ppuVar5;
      func_0x00010bf52a60();
      if (ppuVar4 != (undefined **)0x0) {
        unaff_x24 = *plStack_450;
        do {
          ppuVar19 = (undefined **)0x0;
          do {
            if (*plStack_450 != unaff_x24) {
              _objc_enumerationMutation(ppuVar5);
            }
            func_0x00010be65860(puVar1);
            ppuVar19 = (undefined **)((long)ppuVar19 + 1);
          } while (ppuVar4 != ppuVar19);
          ppuVar4 = ppuVar5;
          func_0x00010bf52a60();
        } while (ppuVar4 != (undefined **)0x0);
      }
      _objc_release(ppuVar5);
    }
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_498 = 0;
    uStack_4a0 = 0;
    uStack_488 = 0;
    puStack_490 = (undefined8 *)0x0;
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    puVar21 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar21;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    puVar2 = puVar20;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      ppuVar19 = (undefined **)*puStack_490;
      unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if ((undefined **)*puStack_490 != ppuVar19) {
            _objc_enumerationMutation(puVar20);
          }
          unaff_x24 = *(long *)(lStack_498 + (long)puVar21 * 8);
          puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010beb5420();
          if ((int)puVar6 != 0) {
            func_0x00010be798c0(puVar1);
          }
          puVar21 = puVar21 + 1;
        } while (puVar2 != puVar21);
        puVar2 = puVar20;
        func_0x00010bf52a60();
        puVar21 = (undefined *)0x0;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar20);
    ppuVar5 = ppuVar4;
    func_0x00010bf529e0();
    if ((ppuVar5 != (undefined **)0x0) || (puVar16 != (undefined *)0x0)) {
      func_0x00010bfb2f20(PTR__OBJC_CLASS___CATransaction_1126b5718);
    }
    puVar20 = puVar1;
    func_0x00010c151940();
    _objc_retainAutoreleasedReturnValue();
    lStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    plStack_4d0 = (long *)0x0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    _objc_retain(ppuVar4);
    puVar11 = auStack_418;
    ppuVar5 = ppuVar4;
    func_0x00010bf52a60();
    if (ppuVar5 != (undefined **)0x0) {
      unaff_x24 = *plStack_4d0;
      do {
        ppuVar19 = (undefined **)0x0;
        do {
          if (*plStack_4d0 != unaff_x24) {
            _objc_enumerationMutation(ppuVar4);
          }
          func_0x00010c13c1a0(*(undefined8 *)(lStack_4d8 + (long)ppuVar19 * 8));
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
        } while (ppuVar5 != ppuVar19);
        puVar11 = auStack_418;
        ppuVar5 = ppuVar4;
        puVar8 = &uStack_4e0;
        func_0x00010bf52a60();
        puVar21 = (undefined *)0x0;
      } while (ppuVar5 != (undefined **)0x0);
    }
    _objc_release(ppuVar4);
    if (puVar16 != (undefined *)0x0) {
      puVar8 = (undefined8 *)puVar16;
      func_0x00010bed1a00(puVar1);
    }
    _objc_release(ppuVar4);
    puVar2 = puVar16;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
      ___stack_chk_fail();
      puVar10 = &uStack_630;
      pcStack_4e8 = FUN_10b2a536c;
      lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = (undefined *)puVar8;
      ppuStack_530 = unaff_x26;
      ppuStack_528 = ppuVar19;
      lStack_520 = unaff_x24;
      puStack_518 = puVar21;
      puStack_510 = puVar20;
      ppuStack_508 = ppuVar4;
      puStack_500 = puVar16;
      puStack_4f8 = puVar1;
      ppuStack_4f0 = &puStack_240;
      _objc_retain(puVar8);
      _objc_retain(puVar11);
      if (puVar8 != (undefined8 *)0x0) {
        puVar16 = (undefined *)puVar8;
        func_0x00010c0e0440();
        puVar1 = PTR_DAT_1126a5c40;
        if (puVar16 == (undefined *)0x2) {
          _objc_retain(puVar8);
          puVar16 = (undefined *)puVar8;
          func_0x000107c318f8(puVar8,puVar1);
          _objc_release(puVar8);
          if ((int)puVar16 != 0) {
            puVar7 = puVar11;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar7 == (undefined1 *)0x0) {
              puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar11);
              _objc_release(puVar1);
            }
            ppuStack_558 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3828;
            ppuStack_550 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3840;
            puVar1 = (undefined *)puVar8;
            puStack_548 = (undefined *)puVar8;
            func_0x00010c0e0400();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_540 = puVar1;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
            puVar7 = puVar11;
            func_0x00010c0e00e0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar7);
            _objc_release(puVar16);
          }
        }
        puVar1 = (undefined *)puVar8;
        func_0x00010c0e0440();
        if (puVar1 == (undefined *)0x1) {
          puVar7 = puVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar7 == (undefined1 *)0x0) {
            puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(puVar1);
          }
          ppuStack_568 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3828;
          puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_560 = (undefined *)puVar8;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e03e0(puVar8);
          puVar7 = puVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar7);
          _objc_release(puVar1);
        }
        uStack_608 = 0;
        uStack_610 = 0;
        uStack_5f8 = 0;
        uStack_600 = 0;
        uStack_628 = 0;
        uStack_630 = 0;
        uStack_618 = 0;
        plStack_620 = (long *)0x0;
        puVar1 = (undefined *)puVar8;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar1;
        func_0x00010bf52a60();
        if (puVar16 != (undefined *)0x0) {
          lVar14 = *plStack_620;
          do {
            puVar20 = (undefined *)0x0;
            do {
              if (*plStack_620 != lVar14) {
                _objc_enumerationMutation(puVar1);
              }
              func_0x00010be65860(puVar2);
              puVar20 = puVar20 + 1;
            } while (puVar16 != puVar20);
            puVar16 = puVar1;
            puVar10 = &uStack_630;
            func_0x00010bf52a60();
          } while (puVar16 != (undefined *)0x0);
        }
        _objc_release(puVar1);
        puVar6 = (undefined *)puVar10;
      }
      _objc_release(puVar11);
      _objc_release(puVar8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
        return puVar8;
      }
      ___stack_chk_fail();
      ppuVar19 = &puStack_820;
      lStack_698 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar6);
      puVar1 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar1 != (undefined *)0x0) &&
         (puVar16 = puVar1, func_0x00010bf529e0(), puVar16 != (undefined *)0x0)) {
        uStack_7b8 = 0;
        uStack_7c0 = 0;
        uStack_7a8 = 0;
        uStack_7b0 = 0;
        lStack_7d8 = 0;
        uStack_7e0 = 0;
        uStack_7c8 = 0;
        plStack_7d0 = (long *)0x0;
        _objc_retain(puVar1);
        puVar16 = puVar1;
        func_0x00010bf52a60();
        if (puVar16 != (undefined *)0x0) {
          lVar14 = *plStack_7d0;
          do {
            puVar20 = (undefined *)0x0;
            do {
              if (*plStack_7d0 != lVar14) {
                _objc_enumerationMutation(puVar1);
              }
              uVar18 = *(undefined8 *)(lStack_7d8 + (long)puVar20 * 8);
              uVar12 = uVar18;
              func_0x00010c0e00e0(uVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c281a40(uVar12);
              _objc_release(uVar18);
              _objc_release(uVar12);
              puVar20 = puVar20 + 1;
            } while (puVar16 != puVar20);
            puVar16 = puVar1;
            func_0x00010bf52a60();
          } while (puVar16 != (undefined *)0x0);
        }
        _objc_release(puVar1);
      }
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3840;
      puVar16 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar16 != (undefined *)0x0) &&
         (puVar20 = puVar16, func_0x00010bf529e0(), puVar20 != (undefined *)0x0)) {
        uStack_7f8 = 0;
        uStack_800 = 0;
        uStack_7e8 = 0;
        uStack_7f0 = 0;
        lStack_818 = 0;
        puStack_820 = (undefined *)0x0;
        uStack_808 = 0;
        plStack_810 = (long *)0x0;
        _objc_retain(puVar16);
        puVar20 = puVar16;
        func_0x00010bf52a60();
        if (puVar20 != (undefined *)0x0) {
          lVar14 = *plStack_810;
          do {
            puVar21 = (undefined *)0x0;
            do {
              if (*plStack_810 != lVar14) {
                _objc_enumerationMutation(puVar16);
              }
              uVar12 = *(undefined8 *)(lStack_818 + (long)puVar21 * 8);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c281a20();
              _objc_release(uVar12);
              puVar21 = puVar21 + 1;
            } while (puVar20 != puVar21);
            puVar20 = puVar16;
            ppuVar19 = &puStack_820;
            func_0x00010bf52a60();
          } while (puVar20 != (undefined *)0x0);
        }
        _objc_release(puVar16);
        ppuVar4 = ppuVar19;
      }
      _objc_release(puVar16);
      _objc_release(puVar1);
      _objc_release(puVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_698) {
        return (undefined8 *)puVar6;
      }
      ___stack_chk_fail();
      _objc_retain(ppuVar4);
      ppuVar19 = ppuVar4;
      _objc_opt_respondsToSelector(ppuVar4,PTR_s_screen_112631da0);
      if (((ulong)ppuVar19 & 1) == 0) {
        uVar13 = 1;
      }
      else {
        ppuVar19 = ppuVar4;
        func_0x00010c150e00(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = (uint)(ppuVar19 == ppuVar5);
        _objc_release();
        _objc_release(ppuVar19);
      }
      ppuVar19 = ppuVar4;
      _objc_opt_respondsToSelector(ppuVar4,PTR_s_isHidden_1125fad18);
      if (((ulong)ppuVar19 & 1) == 0) {
        uVar15 = 1;
      }
      else {
        ppuVar19 = ppuVar4;
        func_0x00010c074c20(ppuVar4);
        uVar15 = (uint)ppuVar19 ^ 1;
      }
      ppuVar19 = ppuVar4;
      _objc_opt_respondsToSelector(ppuVar4,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0);
      func_0x00010bf20c00(ppuVar4);
      if (dVar22 <= 0.0) {
        uVar17 = 0;
      }
      else {
        func_0x00010bf20c00(ppuVar4);
        uVar17 = (uint)(0.0 < dVar24);
      }
      puVar1 = PTR_DAT_1126a5700;
      _objc_retain(ppuVar4);
      ppuVar5 = ppuVar4;
      func_0x000107c318f8(ppuVar4,puVar1);
      _objc_release(ppuVar4);
      _objc_release(ppuVar4);
      return (undefined8 *)
             (ulong)(uVar13 & uVar15 & uVar17 & (uint)ppuVar19 &
                    ((uint)(ppuVar4 == (undefined **)0x0) | (uint)ppuVar5 ^ 1));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return (undefined8 *)puVar20;
}



/* Entry: 10b2a5044; end: 10b2a536b;  */

undefined8 *
FUN_10b2a5044(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined *param_5
             ,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long unaff_x24;
  long lVar15;
  undefined8 uVar16;
  undefined *unaff_x25;
  undefined *puVar17;
  undefined **unaff_x26;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_468;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined **ppuStack_338;
  undefined *puStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [384];
  long lStack_68;
  
  puVar4 = &uStack_2b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_7 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    puVar19 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar19;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar19 = puVar17;
    func_0x00010bf52a60();
    if (puVar19 != (undefined *)0x0) {
      unaff_x24 = *plStack_220;
      do {
        unaff_x25 = (undefined *)0x0;
        do {
          if (*plStack_220 != unaff_x24) {
            _objc_enumerationMutation(puVar17);
          }
          func_0x00010be65860(param_5);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar19 != unaff_x25);
        puVar19 = puVar17;
        func_0x00010bf52a60();
      } while (puVar19 != (undefined *)0x0);
    }
    _objc_release(puVar17);
  }
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  puStack_260 = (undefined8 *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puVar19 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar19;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  puVar1 = puVar18;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x25 = (undefined *)*puStack_260;
    unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_260 != unaff_x25) {
          _objc_enumerationMutation(puVar18);
        }
        unaff_x24 = *(long *)(lStack_268 + (long)puVar19 * 8);
        puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010beb5420();
        if ((int)puVar2 != 0) {
          func_0x00010be798c0(param_5);
        }
        puVar19 = puVar19 + 1;
      } while (puVar1 != puVar19);
      puVar1 = puVar18;
      func_0x00010bf52a60();
      puVar19 = (undefined *)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar18);
  puVar18 = puVar17;
  func_0x00010bf529e0();
  if ((puVar18 != (undefined *)0x0) || (puVar11 != (undefined *)0x0)) {
    func_0x00010bfb2f20(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  puVar18 = param_5;
  func_0x00010c151940();
  _objc_retainAutoreleasedReturnValue();
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  _objc_retain(puVar17);
  puVar10 = auStack_1e8;
  puVar1 = puVar17;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x24 = *plStack_2a0;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if (*plStack_2a0 != unaff_x24) {
          _objc_enumerationMutation(puVar17);
        }
        func_0x00010c13c1a0(*(undefined8 *)(lStack_2a8 + (long)unaff_x25 * 8));
        unaff_x25 = unaff_x25 + 1;
      } while (puVar1 != unaff_x25);
      puVar10 = auStack_1e8;
      puVar1 = puVar17;
      puVar4 = &uStack_2b0;
      func_0x00010bf52a60();
      puVar19 = (undefined *)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar17);
  if (puVar11 != (undefined *)0x0) {
    puVar4 = (undefined8 *)puVar11;
    func_0x00010bed1a00(param_5);
  }
  _objc_release(puVar17);
  puVar1 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
    return (undefined8 *)puVar18;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_400;
  pcStack_2b8 = FUN_10b2a536c;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)puVar4;
  ppuStack_300 = unaff_x26;
  puStack_2f8 = unaff_x25;
  lStack_2f0 = unaff_x24;
  puStack_2e8 = puVar19;
  puStack_2e0 = puVar18;
  puStack_2d8 = puVar17;
  puStack_2d0 = puVar11;
  puStack_2c8 = param_5;
  puStack_2c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar19 = (undefined *)puVar4;
    func_0x00010c0e0440();
    puVar11 = PTR_DAT_1126a5c40;
    if (puVar19 == (undefined *)0x2) {
      _objc_retain(puVar4);
      puVar19 = (undefined *)puVar4;
      func_0x000107c318f8(puVar4,puVar11);
      _objc_release(puVar4);
      if ((int)puVar19 != 0) {
        puVar3 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 == (undefined1 *)0x0) {
          puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar10);
          _objc_release(puVar11);
        }
        ppuStack_328 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3828;
        ppuStack_320 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3840;
        puVar11 = (undefined *)puVar4;
        puStack_318 = (undefined *)puVar4;
        func_0x00010c0e0400();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_310 = puVar11;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar3 = puVar10;
        func_0x00010c0e00e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar3);
        _objc_release(puVar19);
      }
    }
    puVar11 = (undefined *)puVar4;
    func_0x00010c0e0440();
    if (puVar11 == (undefined *)0x1) {
      puVar3 = puVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 == (undefined1 *)0x0) {
        puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar10);
        _objc_release(puVar11);
      }
      ppuStack_338 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3828;
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_330 = (undefined *)puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e03e0(puVar4);
      puVar3 = puVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar3);
      _objc_release(puVar11);
    }
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    plStack_3f0 = (long *)0x0;
    puVar11 = (undefined *)puVar4;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar11;
    func_0x00010bf52a60();
    if (puVar19 != (undefined *)0x0) {
      lVar15 = *plStack_3f0;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_3f0 != lVar15) {
            _objc_enumerationMutation(puVar11);
          }
          func_0x00010be65860(puVar1);
          puVar17 = puVar17 + 1;
        } while (puVar19 != puVar17);
        puVar19 = puVar11;
        puVar8 = &uStack_400;
        func_0x00010bf52a60();
      } while (puVar19 != (undefined *)0x0);
    }
    _objc_release(puVar11);
    puVar2 = (undefined *)puVar8;
  }
  _objc_release(puVar10);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_5f0;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  puVar11 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar11 != (undefined *)0x0) &&
     (puVar19 = puVar11, func_0x00010bf529e0(), puVar19 != (undefined *)0x0)) {
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    lStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_598 = 0;
    plStack_5a0 = (long *)0x0;
    _objc_retain(puVar11);
    puVar19 = puVar11;
    func_0x00010bf52a60();
    if (puVar19 != (undefined *)0x0) {
      lVar15 = *plStack_5a0;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_5a0 != lVar15) {
            _objc_enumerationMutation(puVar11);
          }
          uVar16 = *(undefined8 *)(lStack_5a8 + (long)puVar17 * 8);
          uVar5 = uVar16;
          func_0x00010c0e00e0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c281a40(uVar5);
          _objc_release(uVar16);
          _objc_release(uVar5);
          puVar17 = puVar17 + 1;
        } while (puVar19 != puVar17);
        puVar19 = puVar11;
        func_0x00010bf52a60();
      } while (puVar19 != (undefined *)0x0);
    }
    _objc_release(puVar11);
  }
  ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3840;
  puVar19 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar19 != (undefined *)0x0) &&
     (puVar17 = puVar19, func_0x00010bf529e0(), puVar17 != (undefined *)0x0)) {
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    lStack_5e8 = 0;
    puStack_5f0 = (undefined *)0x0;
    uStack_5d8 = 0;
    plStack_5e0 = (long *)0x0;
    _objc_retain(puVar19);
    puVar17 = puVar19;
    func_0x00010bf52a60();
    if (puVar17 != (undefined *)0x0) {
      lVar15 = *plStack_5e0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_5e0 != lVar15) {
            _objc_enumerationMutation(puVar19);
          }
          uVar5 = *(undefined8 *)(lStack_5e8 + (long)puVar18 * 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c281a20();
          _objc_release(uVar5);
          puVar18 = puVar18 + 1;
        } while (puVar17 != puVar18);
        puVar17 = puVar19;
        ppuVar6 = &puStack_5f0;
        func_0x00010bf52a60();
      } while (puVar17 != (undefined *)0x0);
    }
    _objc_release(puVar19);
    ppuVar9 = ppuVar6;
  }
  _objc_release(puVar19);
  _objc_release(puVar11);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return (undefined8 *)puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  ppuVar6 = ppuVar9;
  _objc_opt_respondsToSelector(ppuVar9,PTR_s_screen_112631da0);
  if (((ulong)ppuVar6 & 1) == 0) {
    uVar12 = 1;
  }
  else {
    ppuVar6 = ppuVar9;
    func_0x00010c150e00(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = (uint)(ppuVar6 == ppuVar7);
    _objc_release();
    _objc_release(ppuVar6);
  }
  ppuVar6 = ppuVar9;
  _objc_opt_respondsToSelector(ppuVar9,PTR_s_isHidden_1125fad18);
  if (((ulong)ppuVar6 & 1) == 0) {
    uVar13 = 1;
  }
  else {
    ppuVar6 = ppuVar9;
    func_0x00010c074c20(ppuVar9);
    uVar13 = (uint)ppuVar6 ^ 1;
  }
  ppuVar6 = ppuVar9;
  _objc_opt_respondsToSelector(ppuVar9,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0);
  func_0x00010bf20c00(ppuVar9);
  if (param_3 <= 0.0) {
    uVar14 = 0;
  }
  else {
    func_0x00010bf20c00(ppuVar9);
    uVar14 = (uint)(0.0 < param_4);
  }
  puVar11 = PTR_DAT_1126a5700;
  _objc_retain(ppuVar9);
  ppuVar7 = ppuVar9;
  func_0x000107c318f8(ppuVar9,puVar11);
  _objc_release(ppuVar9);
  _objc_release(ppuVar9);
  return (undefined8 *)
         (ulong)(uVar12 & uVar13 & uVar14 & (uint)ppuVar6 &
                ((uint)(ppuVar9 == (undefined **)0x0) | (uint)ppuVar7 ^ 1));
}



/* Entry: 10b2a536c; end: 10b2a5697;  */

undefined1 *
FUN_10b2a536c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,undefined1 *param_7,long param_8)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined *puStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_1b8;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  
  puVar7 = &uStack_150;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_7 != (undefined1 *)0x0) {
    puVar1 = param_7;
    func_0x00010c0e0440();
    puVar2 = PTR_DAT_1126a5c40;
    if (puVar1 == (undefined1 *)0x2) {
      _objc_retain(param_7);
      puVar1 = param_7;
      func_0x000107c318f8(param_7,puVar2);
      _objc_release(param_7);
      if ((int)puVar1 != 0) {
        lVar12 = param_8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar12 == 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_8);
          _objc_release(puVar2);
        }
        ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3828;
        ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3840;
        puVar1 = param_7;
        puStack_68 = param_7;
        func_0x00010c0e0400();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_60 = puVar1;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        lVar12 = param_8;
        func_0x00010c0e00e0(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(lVar12);
        _objc_release(puVar2);
      }
    }
    puVar1 = param_7;
    func_0x00010c0e0440();
    if (puVar1 == (undefined1 *)0x1) {
      lVar12 = param_8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar12 == 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_8);
        _objc_release(puVar2);
      }
      ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3828;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = param_7;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e03e0(param_7);
      lVar12 = param_8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(lVar12);
      _objc_release(puVar2);
    }
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    puVar1 = param_7;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar12 = *plStack_140;
      do {
        puVar14 = (undefined1 *)0x0;
        do {
          if (*plStack_140 != lVar12) {
            _objc_enumerationMutation(puVar1);
          }
          func_0x00010be65860(param_5);
          puVar14 = puVar14 + 1;
        } while (puVar3 != puVar14);
        puVar3 = puVar1;
        puVar7 = &uStack_150;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar1);
    puVar1 = (undefined1 *)puVar7;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_7;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_340;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3 != (undefined1 *)0x0) &&
     (puVar14 = puVar3, func_0x00010bf529e0(), puVar14 != (undefined1 *)0x0)) {
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    lStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    plStack_2f0 = (long *)0x0;
    _objc_retain(puVar3);
    puVar14 = puVar3;
    func_0x00010bf52a60();
    if (puVar14 != (undefined1 *)0x0) {
      lVar12 = *plStack_2f0;
      do {
        puVar16 = (undefined1 *)0x0;
        do {
          if (*plStack_2f0 != lVar12) {
            _objc_enumerationMutation(puVar3);
          }
          uVar13 = *(undefined8 *)(lStack_2f8 + (long)puVar16 * 8);
          uVar4 = uVar13;
          func_0x00010c0e00e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c281a40(uVar4);
          _objc_release(uVar13);
          _objc_release(uVar4);
          puVar16 = puVar16 + 1;
        } while (puVar14 != puVar16);
        puVar14 = puVar3;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined1 *)0x0);
    }
    _objc_release(puVar3);
  }
  ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3840;
  puVar14 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar14 != (undefined1 *)0x0) &&
     (puVar16 = puVar14, func_0x00010bf529e0(), puVar16 != (undefined1 *)0x0)) {
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    lStack_338 = 0;
    puStack_340 = (undefined *)0x0;
    uStack_328 = 0;
    plStack_330 = (long *)0x0;
    _objc_retain(puVar14);
    puVar16 = puVar14;
    func_0x00010bf52a60();
    if (puVar16 != (undefined1 *)0x0) {
      lVar12 = *plStack_330;
      do {
        puVar15 = (undefined1 *)0x0;
        do {
          if (*plStack_330 != lVar12) {
            _objc_enumerationMutation(puVar14);
          }
          uVar4 = *(undefined8 *)(lStack_338 + (long)puVar15 * 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c281a20();
          _objc_release(uVar4);
          puVar15 = puVar15 + 1;
        } while (puVar16 != puVar15);
        puVar16 = puVar14;
        ppuVar5 = &puStack_340;
        func_0x00010bf52a60();
      } while (puVar16 != (undefined1 *)0x0);
    }
    _objc_release(puVar14);
    ppuVar8 = ppuVar5;
  }
  _objc_release(puVar14);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  ppuVar5 = ppuVar8;
  _objc_opt_respondsToSelector(ppuVar8,PTR_s_screen_112631da0);
  if (((ulong)ppuVar5 & 1) == 0) {
    uVar9 = 1;
  }
  else {
    ppuVar5 = ppuVar8;
    func_0x00010c150e00(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = (uint)(ppuVar5 == ppuVar6);
    _objc_release();
    _objc_release(ppuVar5);
  }
  ppuVar5 = ppuVar8;
  _objc_opt_respondsToSelector(ppuVar8,PTR_s_isHidden_1125fad18);
  if (((ulong)ppuVar5 & 1) == 0) {
    uVar10 = 1;
  }
  else {
    ppuVar5 = ppuVar8;
    func_0x00010c074c20(ppuVar8);
    uVar10 = (uint)ppuVar5 ^ 1;
  }
  ppuVar5 = ppuVar8;
  _objc_opt_respondsToSelector(ppuVar8,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0);
  func_0x00010bf20c00(ppuVar8);
  if (param_3 <= 0.0) {
    uVar11 = 0;
  }
  else {
    func_0x00010bf20c00(ppuVar8);
    uVar11 = (uint)(0.0 < param_4);
  }
  puVar2 = PTR_DAT_1126a5700;
  _objc_retain(ppuVar8);
  ppuVar6 = ppuVar8;
  func_0x000107c318f8(ppuVar8,puVar2);
  _objc_release(ppuVar8);
  _objc_release(ppuVar8);
  return (undefined1 *)
         (ulong)(uVar9 & uVar10 & uVar11 & (uint)ppuVar5 &
                ((uint)(ppuVar8 == (undefined **)0x0) | (uint)ppuVar6 ^ 1));
}



/* Entry: 10b2a5698; end: 10b2a591b;  */

ulong FUN_10b2a5698(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                   undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_1f0;
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
  long lStack_68;
  
  ppuVar5 = &puStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 != 0) && (uVar3 = uVar2, func_0x00010bf529e0(), uVar3 != 0)) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(uVar2);
    uVar3 = uVar2;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar12 = *plStack_1a0;
      do {
        uVar14 = 0;
        do {
          if (*plStack_1a0 != lVar12) {
            _objc_enumerationMutation(uVar2);
          }
          uVar11 = *(undefined8 *)(lStack_1a8 + uVar14 * 8);
          uVar4 = uVar11;
          func_0x00010c0e00e0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c281a40(uVar4);
          _objc_release(uVar11);
          _objc_release(uVar4);
          uVar14 = uVar14 + 1;
        } while (uVar3 != uVar14);
        uVar3 = uVar2;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
    }
    _objc_release(uVar2);
  }
  ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3840;
  uVar3 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 != 0) && (uVar14 = uVar3, func_0x00010bf529e0(), uVar14 != 0)) {
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    puStack_1f0 = (undefined *)0x0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    _objc_retain(uVar3);
    uVar14 = uVar3;
    func_0x00010bf52a60();
    if (uVar14 != 0) {
      lVar12 = *plStack_1e0;
      do {
        uVar13 = 0;
        do {
          if (*plStack_1e0 != lVar12) {
            _objc_enumerationMutation(uVar3);
          }
          uVar4 = *(undefined8 *)(lStack_1e8 + uVar13 * 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c281a20();
          _objc_release(uVar4);
          uVar13 = uVar13 + 1;
        } while (uVar14 != uVar13);
        uVar14 = uVar3;
        ppuVar5 = &puStack_1f0;
        func_0x00010bf52a60();
      } while (uVar14 != 0);
    }
    _objc_release(uVar3);
    ppuVar7 = ppuVar5;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_7;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  ppuVar5 = ppuVar7;
  _objc_opt_respondsToSelector(ppuVar7,PTR_s_screen_112631da0);
  if (((ulong)ppuVar5 & 1) == 0) {
    uVar8 = 1;
  }
  else {
    ppuVar5 = ppuVar7;
    func_0x00010c150e00(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = (uint)(ppuVar5 == ppuVar6);
    _objc_release();
    _objc_release(ppuVar5);
  }
  ppuVar5 = ppuVar7;
  _objc_opt_respondsToSelector(ppuVar7,PTR_s_isHidden_1125fad18);
  if (((ulong)ppuVar5 & 1) == 0) {
    uVar9 = 1;
  }
  else {
    ppuVar5 = ppuVar7;
    func_0x00010c074c20(ppuVar7);
    uVar9 = (uint)ppuVar5 ^ 1;
  }
  ppuVar5 = ppuVar7;
  _objc_opt_respondsToSelector(ppuVar7,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0);
  func_0x00010bf20c00(ppuVar7);
  if (param_3 <= 0.0) {
    uVar10 = 0;
  }
  else {
    func_0x00010bf20c00(ppuVar7);
    uVar10 = (uint)(0.0 < param_4);
  }
  puVar1 = PTR_DAT_1126a5700;
  _objc_retain(ppuVar7);
  ppuVar6 = ppuVar7;
  func_0x000107c318f8(ppuVar7,puVar1);
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  return (ulong)(uVar8 & uVar9 & uVar10 & (uint)ppuVar5 &
                ((uint)(ppuVar7 == (undefined **)0x0) | (uint)ppuVar6 ^ 1));
}



/* Entry: 10b2a591c; end: 10b2a5a5b;  */

uint FUN_10b2a591c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  _objc_retain(param_7);
  puVar1 = param_7;
  _objc_opt_respondsToSelector(param_7,PTR_s_screen_112631da0);
  if (((ulong)puVar1 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    puVar1 = param_7;
    func_0x00010c150e00(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = (uint)(puVar1 == puVar2);
    _objc_release();
    _objc_release(puVar1);
  }
  puVar1 = param_7;
  _objc_opt_respondsToSelector(param_7,PTR_s_isHidden_1125fad18);
  if (((ulong)puVar1 & 1) == 0) {
    uVar5 = 1;
  }
  else {
    puVar1 = param_7;
    func_0x00010c074c20(param_7);
    uVar5 = (uint)puVar1 ^ 1;
  }
  puVar1 = param_7;
  _objc_opt_respondsToSelector(param_7,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0);
  func_0x00010bf20c00(param_7);
  if (param_3 <= 0.0) {
    uVar6 = 0;
  }
  else {
    func_0x00010bf20c00(param_7);
    uVar6 = (uint)(0.0 < param_4);
  }
  puVar2 = PTR_DAT_1126a5700;
  _objc_retain(param_7);
  puVar3 = param_7;
  func_0x000107c318f8(param_7,puVar2);
  _objc_release(param_7);
  _objc_release(param_7);
  return uVar4 & uVar5 & uVar6 & (uint)puVar1 &
         ((uint)(param_7 == (undefined *)0x0) | (uint)puVar3 ^ 1);
}



/* Entry: 10b2a5a5c; end: 10b2a5be7;  */

/* WARNING: Possible PIC construction at 0x00010b2a5c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2a5c60) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10b2a5a5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined1 *param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  uVar6 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_7;
  puVar5 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_7;
  func_0x00010c074c20();
  if (((uVar2 & 1) == 0) && (func_0x00010bf01b40(param_7), 0.0 < param_1)) {
    uVar3 = param_7;
    _objc_opt_respondsToSelector(param_7,PTR_s_prepareForScreenshotCapture_112620010);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = param_7,
       _objc_opt_respondsToSelector(param_7,PTR_s_restoreAfterScreenshotCapture_11262ca88),
       (uVar3 & 1) == 0)) {
      uVar4 = param_7;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = auStack_d8;
      uVar2 = uVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      uVar3 = uVar6;
      while (uVar2 != 0) {
        uVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar4);
          }
          func_0x00010be798c0(param_5);
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
        puVar5 = auStack_d8;
        uVar2 = uVar4;
        uVar3 = 0;
        func_0x00010bf52a60();
      }
      _objc_release(uVar4);
    }
    else {
      func_0x00010c1097c0(param_7);
      uVar3 = param_7;
      func_0x00010befa120(param_8);
    }
  }
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = param_7;
  func_0x00010bf4dec0();
  if (((int)uVar6 == 0) && ((uVar3 & 1) == 0)) {
    func_0x00010c267d80(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)PTR__CGPointZero_110347540;
    param_4 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar7,param_4,param_7,PTR_s_setContentOffset_animated__11263e2e0,puVar5);
  return;
}



/* Entry: 10b2a5be8; end: 10b2a5c73;  */

/* WARNING: Possible PIC construction at 0x00010b2a5c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2a5c60) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10b2a5be8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 in_d3;
  
  uVar1 = param_1;
  func_0x00010bf4dec0();
  if (((int)uVar1 == 0) && ((param_3 & 1) == 0)) {
    func_0x00010c267d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)PTR__CGPointZero_110347540;
    in_d3 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,in_d3,param_1,PTR_s_setContentOffset_animated__11263e2e0,param_4);
  return;
}



/* Entry: 10b2a5c74; end: 10b2a5d23;  */

void FUN_10b2a5c74(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  func_0x00010bf4c7c0();
  dVar1 = -param_1;
  func_0x00010befda00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,dVar1 - param_1,param_2,PTR_s_setContentOffset_animated__11263e2e0,param_4);
  return;
}



/* Entry: 10b2a5d24; end: 10b2a5e87;  */

void FUN_10b2a5d24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = (undefined *)0x0;
  if (param_3 < 2) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41620(0x3fe3737373737373,0x3fd5555555555555,0x3fe4141414141414,
                            0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10b2a5e0c;
    }
LAB_10b2a5de0:
    uVar1 = 0x88;
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 3) goto LAB_10b2a5e0c;
      goto LAB_10b2a5de0;
    }
    uVar1 = 0x9e;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_10b2a5e0c:
  func_0x00010c267dc0(param_1,param_2,param_4,puVar2,param_5,param_6,param_7,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b2a5e88; end: 10b2a620b;  */

void FUN_10b2a5e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,char param_9)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar1 = &PTR_PTR_1126d0b18;
  if (param_9 == '\0') {
    ppuVar1 = &PTR__OBJC_CLASS___UIView_1126aec20;
  }
  puVar2 = *ppuVar1;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087680(0x3ff0000000000000,param_1,param_2,param_3,puVar3,param_4,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010befbb60(puVar2,param_2,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10b2a620c;
  puStack_88 = &UNK_1108471b0;
  _objc_retain(puVar2);
  puStack_80 = puVar2;
  func_0x00010c0bbfc0(param_1,param_2,&puStack_a0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_5 == 0 && param_6 == 0) {
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10b2a65f4;
    puStack_e0 = &UNK_1108471b0;
    _objc_retain(puVar2);
    puStack_d8 = puVar2;
    func_0x00010c0bbfc0(param_1,param_2,&puStack_f8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puStack_d8;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init(PTR__OBJC_CLASS___UIButton_1126aec48);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010c216260(puVar3,param_2,param_5,0);
    func_0x00010c216380(puVar3,param_2,param_4,0);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c271420(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c271420(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar4);
    func_0x00010c1a9fc0(puVar3,param_2,param_6,0);
    func_0x00010befbd60(puVar3,param_2,param_7,param_8,0x40);
    func_0x00010befbb60(puVar2,param_2,puVar3);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10b2a63cc;
    puStack_b8 = &UNK_11084fc58;
    _objc_retain(puVar2);
    puStack_b0 = puVar2;
    _objc_retain(param_1);
    uStack_a8 = param_1;
    func_0x00010c0bbfc0(puVar3,param_2,&puStack_d0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uStack_a8);
    _objc_release(puStack_b0);
  }
  _objc_release(puVar3);
  _objc_release(puStack_80);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2a620c; end: 10b2a65f3;  */

void FUN_10b2a620c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2a65f4; end: 10b2a6693;  */

void FUN_10b2a65f4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(0xc030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2a6694; end: 10b2a66c3;  */

void FUN_10b2a6694(void)

{
  func_0x00010c267da0();
  return;
}



/* Entry: 10b2a66c4; end: 10b2a6a5f;  */

void FUN_10b2a66c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c16e440();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087680(0x3ff0000000000000,param_1,param_2,param_4,puVar2,param_5,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  func_0x00010befbb60(puVar1,param_2,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b2a6820;
  puStack_50 = &UNK_1108471b0;
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  func_0x00010c0bbfc0(param_1,param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2a6a60; end: 10b2a6d23;  */

void FUN_10b2a6a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  ppuVar1 = &PTR_PTR_1126d0b18;
  if (param_5 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___UIView_1126aec20;
  }
  puVar7 = *ppuVar1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar7,param_2,puVar2);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fcc9c9c9c9c9c9d,0x3fe6969696969697,0x3fecdcdcdcdcdcdd,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c087680(0x3ff0000000000000,param_1,param_2,param_3,puVar2,puVar3,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010befbb60(puVar7,param_2,uVar4);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b2a6d24;
  puStack_80 = &UNK_1108471b0;
  _objc_retain(puVar7);
  puStack_78 = puVar7;
  func_0x00010c0bbfc0(uVar4,param_2,&puStack_98);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087680(0,param_1,param_2,param_4,puVar5,puVar6,0,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010befbb60(puVar7,param_2,param_1);
  puStack_c8 = puVar2;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10b2a6ee4;
  puStack_b0 = &UNK_11084fc58;
  uStack_a8 = uVar4;
  _objc_retain(puVar7);
  puStack_a0 = puVar7;
  _objc_retain(uVar4);
  func_0x00010c0bbfc0(param_1,param_2,&puStack_c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puStack_a0;
  _objc_retain(puVar7);
  _objc_release(puVar2);
  _objc_release(uStack_a8);
  _objc_release(param_1);
  _objc_release(puStack_78);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b2a6d24; end: 10b2a6ee3;  */

void FUN_10b2a6d24(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2a6ee4; end: 10b2a714f;  */

void FUN_10b2a6ee4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
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
  (**(code **)(lVar5 + 0x10))(0x4000000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x8000000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2a7150; end: 10b2a72c7;  */

void FUN_10b2a7150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c19e480(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c213180(puVar1,param_3,param_6);
  _objc_release(param_6);
  if (param_7 == 0) {
    func_0x00010c212f20(puVar1,param_3,param_4);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c28eda0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1,param_3,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  func_0x00010c165e20(puVar1,param_3,1);
  func_0x00010c1cfce0(puVar1,param_3,param_8);
  func_0x00010c1b6b20(param_1,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2a72c8; end: 10b2a7393;  */

void FUN_10b2a72c8(undefined8 param_1)

{
  func_0x00010c1b9b80(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c1e1610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPreservesSuperviewLayoutMargi_112655fa8,0)
  ;
  return;
}



/* Entry: 10b2a7394; end: 10b2a73af;  */

void FUN_10b2a7394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)
            (param_1,PTR_s_censorView_1125aab18,param_3,0x301);
  return;
}



/* Entry: 10b2a73b0; end: 10b2a749b;  */

void FUN_10b2a73b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bf345c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0(puVar2);
  func_0x00010c17a680(param_1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf345c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010bf345c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2a749c; end: 10b2a7567;  */

void FUN_10b2a749c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf345c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf345c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c17a690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCensorView__11263c3c0,0);
    return;
  }
  return;
}



/* Entry: 10b2a7568; end: 10b2a75c3;  */

undefined8 FUN_10b2a7568(undefined8 param_1,long param_2)

{
  _objc_getAssociatedObject(param_2,PTR_LOOP_11336f600);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0(param_2);
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b2a75c4; end: 10b2a761f;  */

void FUN_10b2a75c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_LOOP_11336f600;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,puVar1,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b2a7620; end: 10b2a7627;  */

undefined8 FUN_10b2a7620(void)

{
  return 0;
}



/* Entry: 10b2a7628; end: 10b2a7903;  */

void FUN_10b2a7628(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c0834c0();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c06d1e0();
  lVar6 = param_1;
  func_0x00010c06d1a0();
  uVar1 = (uint)lVar3 ^ 1;
  if (lVar5 == 0) {
    uVar1 = 1;
  }
  uVar7 = param_3;
  func_0x00010c0834c0();
  uVar1 = (uVar1 | (uint)lVar4 | (uint)lVar6 | (uint)uVar7) ^ 1;
  func_0x00010bf664c0(param_1);
  func_0x00010be9a640(param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010bef7700(param_1,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010be9a640();
  if (((int)lVar3 != 0) && ((uVar1 & 1) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    func_0x00010bf17b00(param_3,param_2,1,0);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar3,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010bf77e80(param_3,param_2,param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010be9a640();
  if (((uint)param_1 & uVar1) == 1) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    func_0x00010bf941a0(param_3);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2a7904; end: 10b2a7be3;  */

void FUN_10b2a7904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c0834c0();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c06d1e0();
  lVar6 = param_1;
  func_0x00010c06d1a0();
  uVar1 = (uint)lVar3 ^ 1;
  if (lVar5 == 0) {
    uVar1 = 1;
  }
  uVar7 = param_3;
  func_0x00010c0834c0();
  uVar1 = (uVar1 | (uint)lVar4 | (uint)lVar6 | (uint)uVar7) ^ 1;
  func_0x00010bf664c0(param_1);
  func_0x00010be9a640(param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010bef7700(param_1,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010be9a640();
  if (((int)lVar3 != 0) && ((uVar1 & 1) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    func_0x00010bf17b00(param_3,param_2,1,0);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  uVar7 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_4,param_2,uVar7);
  _objc_release(param_4);
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010bf77e80(param_3,param_2,param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010be9a640();
  if (((uint)param_1 & uVar1) == 1) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    func_0x00010bf941a0(param_3);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2a7be4; end: 10b2a7d4f;  */

void FUN_10b2a7be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  func_0x00010c2a6740(param_3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  func_0x00010c12c8e0(param_3);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2a7d50; end: 10b2a7d83;  */

undefined8 FUN_10b2a7d50(void)

{
  return 0;
}



/* Entry: 10b2a7d84; end: 10b2a7dff;  */

ulong FUN_10b2a7d84(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((param_1 != 0) && (uVar2 = param_1, (uVar1 & 1) == 0)) {
    do {
      uVar1 = uVar2;
      func_0x00010c06d1a0();
      param_1 = uVar2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if ((uVar1 & 1) != 0) break;
      uVar2 = param_1;
    } while (param_1 != 0);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2a7e00; end: 10b2a7e6b; -[UIViewControllerPopToRootWeakContainer initWithValue:] */

undefined1 * FUN_10b2a7e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127061e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2a7e6c; end: 10b2a7e83; -[UIViewControllerPopToRootWeakContainer value] */

void FUN_10b2a7e6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2a7e84; end: 10b2a7e8b; -[UIViewControllerPopToRootWeakContainer .cxx_destruct] */

void FUN_10b2a7e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b2a7e8c; end: 10b2a7efb;  */

void FUN_10b2a7e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e00f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060400();
  _objc_release(param_3);
  _objc_setAssociatedObject(param_1,&PTR_PTR_11336f608,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2a7efc; end: 10b2a800f;  */

void FUN_10b2a7efc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_getAssociatedObject(param_1,&PTR_PTR_11336f608);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2a8010; end: 10b2a802b;  */

undefined8 FUN_10b2a8010(void)

{
  return 0x404e000000000000;
}



/* Entry: 10b2a802c; end: 10b2a8083; -[SCConfigurableTapGestureRecognizer initWithTarget:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a802c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1127061f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithTarget_action__1125f1c48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e1e0) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e1e4) = 0x4008000000000000;
  }
  return;
}



/* Entry: 10b2a8084; end: 10b2a81b3; -[SCConfigurableTapGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8084(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0df520();
  if (uVar1 == 1) {
    *(undefined1 *)(param_3 + (long)_DAT_11278e1e8) = 1;
    lVar4 = (long)_DAT_11278e1ec;
    uVar5 = param_5;
    func_0x00010bf04a20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(uVar5,param_4,uVar2);
    *(undefined8 *)(param_3 + lVar4) = param_1;
    ((undefined8 *)(param_3 + lVar4))[1] = param_2;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(*(undefined8 *)(param_3 + (long)_DAT_11278e1e0),
                        PTR__OBJC_CLASS___NSTimer_1126af1b0,param_4,param_3,
                        PTR_s__failIfNeeded_112561210,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + (long)_DAT_11278e1f0);
    *(undefined **)(param_3 + (long)_DAT_11278e1f0) = puVar3;
    _objc_release(uVar5);
  }
  else {
    uVar1 = param_3;
    func_0x00010c0df520();
    if (1 < uVar1) {
      func_0x00010be0e1c0(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b2a81b4; end: 10b2a8297; -[SCConfigurableTapGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a81b4(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf04a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  param_1 = param_1 - *(double *)(param_3 + _DAT_11278e1ec);
  param_2 = param_2 - ((double *)(param_3 + _DAT_11278e1ec))[1];
  if (SQRT(param_1 * param_1 + param_2 * param_2) < *(double *)(param_3 + _DAT_11278e1e4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__failIfNeeded_112561210);
  return;
}


