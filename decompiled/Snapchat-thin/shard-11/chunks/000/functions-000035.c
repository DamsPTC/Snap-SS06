/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080913c4; end: 1080913cb; -[SCMusicSticker toCTPItem] */

undefined8 FUN_1080913c4(void)

{
  return 0;
}



/* Entry: 1080913cc; end: 1080913fb; -[SCMusicSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080913cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774148);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080913fc; end: 108091403; -[SCMusicSticker supportedFlows] */

undefined8 FUN_1080913fc(void)

{
  return 0;
}



/* Entry: 108091404; end: 10809140b; -[SCMusicSticker infoType] */

undefined8 FUN_108091404(void)

{
  return 0xb;
}



/* Entry: 10809140c; end: 10809141b; -[SCMusicSticker intrinsicSize] */

undefined1  [16] FUN_10809140c(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 10809141c; end: 108091467; -[SCMusicSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809141c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112774148,0);
  return;
}



/* Entry: 108091468; end: 1080915af; -[SCValdiAnimator initWithCurve:controlPoints:duration:beginFromCurrentState:crossfade:stiffness:damping:] */

undefined1 *
FUN_108091468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126fc510;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    func_0x0001080928a4();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined1 *)((long)puVar1 + 0x20) = param_8;
    *(undefined1 *)((long)puVar1 + 0x21) = param_9;
    *(undefined1 *)((long)puVar1 + 0x22) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000108092860(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000108092860(uVar2);
    _dispatch_group_create();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000108092860(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000108092860(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    func_0x000108092860(uVar2);
    *(undefined1 *)((long)puVar1 + 0x60) = 0;
  }
  func_0x000108092830();
  return (undefined1 *)puVar1;
}



/* Entry: 1080915b0; end: 1080917eb; -[SCValdiAnimator _populateCAAnimation:] */

void FUN_1080915b0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000108092848();
  func_0x00010c1ea580(param_3,param_2,1);
  func_0x00010c19bc40(param_3,param_2,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  puVar1 = PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
  func_0x0001080928a4();
  _objc_opt_class();
  func_0x0001080928c0();
  lVar2 = param_3;
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = 0;
  }
  func_0x00010809288c();
  func_0x000108092830();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c192d40(uVar3,param_3);
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    if (lVar2 == 4) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c0dfd40(lVar2,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      uVar4 = uVar3;
      func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0x10),param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      uVar5 = uVar4;
      func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0x10),param_2,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      uVar6 = uVar5;
      func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0x10),param_2,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      func_0x00010bfbc0c0(uVar3,uVar4,uVar5,uVar6,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216080(param_3,param_2,puVar1);
      func_0x000108092894();
      func_0x000108092840();
      func_0x000108092838();
      func_0x000108092884();
    }
    else {
      switch(*(undefined8 *)(param_1 + 8)) {
      case 0:
        func_0x0001080928e8();
        break;
      case 1:
        func_0x0001080928e8();
        break;
      case 2:
        func_0x0001080928e8();
        break;
      case 3:
        func_0x0001080928e8();
        break;
      default:
        goto LAB_1080917c4;
      }
      func_0x00010bfbc100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216080(param_3,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
  else {
    func_0x00010c20be40(*(undefined8 *)(param_1 + 0x28),param_3);
    func_0x00010c1893a0(*(undefined8 *)(param_1 + 0x30),param_3);
    func_0x00010c2283a0(param_3);
    func_0x00010c192d40(param_3);
  }
LAB_1080917c4:
  func_0x000108092818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080917ec; end: 1080918c3; -[SCValdiAnimator addTransitionOnLayer:] */

void FUN_1080917ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000108092848();
  lVar1 = param_3;
  func_0x00010bf03c40(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3e78);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_1080918a8;
  }
  puVar2 = PTR__OBJC_CLASS___CATransition_1126b3c00;
  _objc_opt_new(PTR__OBJC_CLASS___CATransition_1126b3c00);
  func_0x00010c21acc0();
  uVar3 = param_1;
  func_0x00010be75ba0(param_1,param_2,puVar2);
  func_0x0001080928b4();
  func_0x00010c021be0();
  func_0x00010bdcd220(param_1,param_2,uVar3);
  func_0x000108092884();
  func_0x00010809287c();
LAB_1080918a8:
  func_0x000108092818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080918c4; end: 1080918d3; -[SCValdiAnimator _isSpringAnimation] */

bool FUN_1080918c4(long param_1)

{
  return *(double *)(param_1 + 0x18) == 0.0;
}



/* Entry: 1080918d4; end: 108091baf; -[SCValdiAnimator _setValue:forKeyPath:inLayer:] */

void FUN_1080918d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,int param_8,ulong param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000108092848();
  func_0x00010809288c();
  func_0x0001080928ac();
  func_0x00010c0720c0();
  if (param_8 != 0) {
    uVar2 = param_9;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x000108092894();
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    if (uVar1 != 0) {
      func_0x0001080928a4();
      _objc_opt_class();
      func_0x0001080928c0();
      if (((ulong)puVar3 & 1) == 0) {
        param_7 = 0;
      }
      _objc_retain(param_7);
      func_0x000108092830();
      func_0x00010bdc1080(param_7);
      func_0x000108092838();
      uVar4 = uVar2;
      func_0x00010c1378a0();
      if (((int)uVar4 == 0) || ((*(byte *)(param_5 + 0x21) & 1) != 0)) {
        func_0x00010c1739e0(param_1,param_2,param_3,param_4,uVar2);
      }
      else {
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uVar6 = 0xc2000000;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_108091bb0;
        puStack_a0 = &UNK_110870f70;
        _objc_retain(uVar2);
        uStack_98 = uVar1;
        uStack_90 = param_1;
        uStack_88 = param_2;
        uStack_80 = param_3;
        uStack_78 = param_4;
        _objc_retainBlock(&puStack_b8);
        lVar5 = param_5;
        func_0x00010be44160();
        if ((int)lVar5 == 0) {
          lVar5 = *(long *)(param_5 + 0x10);
          func_0x00010bf529e0();
          if (lVar5 == 4) {
            func_0x00010c0dfd40(*(undefined8 *)(param_5 + 0x10));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            uVar7 = uVar6;
            func_0x00010c0dfd40(*(undefined8 *)(param_5 + 0x10));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            uVar8 = uVar7;
            func_0x0001080928d8();
            func_0x000108092838();
            func_0x00010c0dfd40(*(undefined8 *)(param_5 + 0x10));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            uVar9 = uVar8;
            func_0x00010c0dfd40(*(undefined8 *)(param_5 + 0x10));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            func_0x0001080928d8();
            func_0x000108092838();
            func_0x0001080928cc();
            func_0x00010c0048a0(uVar6,uVar7,uVar8,uVar9);
          }
          else {
            func_0x0001080928cc();
            func_0x00010bff2f00();
          }
        }
        else {
          _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
          func_0x00010c028a80(0x3ff0000000000000,*(undefined8 *)(param_5 + 0x28),
                              *(undefined8 *)(param_5 + 0x30),0,0);
        }
        puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
        _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
        func_0x00010c00eb20(*(undefined8 *)(param_5 + 0x18));
        func_0x00010bef6cc0();
        func_0x00010c24dc40(puVar3);
        func_0x000108092884();
        func_0x000108092838();
        func_0x000108092894();
        _objc_release(uStack_98);
      }
    }
    func_0x00010809287c();
  }
  func_0x00010c220240(param_9);
  func_0x000108092840();
  func_0x000108092818();
  func_0x000108092830();
  return;
}



/* Entry: 108091bb0; end: 108091c2b;  */

void FUN_108091bb0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1739e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x20));
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c08c0e0(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  func_0x000108092818();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108091c2c; end: 108091d67; -[SCValdiAnimator _removeConflictingAnimationOnLayer:forKeyPath:] */

void FUN_108091c2c(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined **ppuVar1;
  char cVar2;
  undefined1 in_ZR;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  long lStack_128;
  long *plStack_120;
  
  uVar10 = param_4;
  func_0x000108092820();
  _objc_retain(uVar10);
  uVar3 = param_1;
  func_0x00010be711c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108092850();
  _objc_retain();
  func_0x0001080927e8();
  uVar10 = 0;
  uVar5 = 0;
  if (uVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      uVar10 = 0;
      do {
        func_0x000108092900();
        in_ZR = extraout_x8_00 == lVar9;
        if (!(bool)in_ZR) {
          func_0x0001080928e0();
        }
        param_3 = *(ulong *)(lStack_128 + uVar10 * 8);
        uVar5 = param_3;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_4;
        func_0x00010c0720c0();
        uVar6 = uVar5;
        func_0x000108092894();
        if ((uVar5 & 1) != 0) {
          uVar5 = param_3;
          func_0x00010bf039a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(uVar3);
          uVar10 = *(ulong *)(param_1 + 0x38);
          func_0x00010c12d360();
          goto LAB_108091d28;
        }
        uVar10 = uVar10 + 1;
        in_ZR = uVar10 == uVar4;
      } while (uVar10 < uVar4);
      func_0x0001080927e8();
      uVar4 = uVar6;
    } while (uVar6 != 0);
    uVar10 = 0;
    uVar5 = 0;
    param_3 = uVar8;
  }
LAB_108091d28:
  func_0x000108092818();
  func_0x000108092818();
  func_0x000108092830();
  func_0x0001080927fc(extraout_x8);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  func_0x000108092848();
  func_0x00010809288c();
  cVar2 = *(char *)(uVar10 + 0x21);
  func_0x0001080928ac();
  if (cVar2 == '\x01') {
    func_0x00010befc640();
    goto LAB_108091ef4;
  }
  uVar5 = uVar10;
  func_0x00010be8bb20();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(uVar10 + 0x20) == '\x01') {
    uVar3 = uVar5;
    func_0x0001080928f4();
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) goto LAB_108091e24;
    func_0x00010c10f4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108092838();
  }
  else {
LAB_108091e24:
    puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    _objc_opt_class(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar7);
    if ((uVar3 & 1) == 0) {
      func_0x0001080928f4();
      func_0x00010c296f80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfbb0a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  ppuVar1 = &PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  if (*(double *)(uVar10 + 0x18) == 0.0) {
    ppuVar1 = &PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
  }
  puVar7 = *ppuVar1;
  func_0x00010bf04040(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar7);
  func_0x00010be75ba0(uVar10);
  func_0x0001080928b4();
  func_0x00010c021be0();
  func_0x00010bdcd220(uVar10);
  func_0x0001080928d8();
  func_0x000108092838();
  func_0x000108092894();
  func_0x000108092884();
LAB_108091ef4:
  func_0x00010bea9f40(uVar10);
  func_0x000108092840();
  func_0x000108092818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108091d68; end: 108091f2b; -[SCValdiAnimator addAnimationOnLayer:forKeyPath:value:] */

void FUN_108091d68(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  func_0x000108092848();
  func_0x00010809288c();
  cVar2 = *(char *)(param_1 + 0x21);
  func_0x0001080928ac();
  if (cVar2 == '\x01') {
    func_0x00010befc640();
    goto LAB_108091ef4;
  }
  uVar3 = param_1;
  func_0x00010be8bb20();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar4 = uVar3;
    func_0x0001080928f4();
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) goto LAB_108091e24;
    func_0x00010c10f4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108092838();
  }
  else {
LAB_108091e24:
    puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    _objc_opt_class(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar5);
    if ((uVar4 & 1) == 0) {
      func_0x0001080928f4();
      func_0x00010c296f80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfbb0a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  ppuVar1 = &PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  if (*(double *)(param_1 + 0x18) == 0.0) {
    ppuVar1 = &PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
  }
  puVar5 = *ppuVar1;
  func_0x00010bf04040(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar5);
  func_0x00010be75ba0(param_1);
  func_0x0001080928b4();
  func_0x00010c021be0();
  func_0x00010bdcd220(param_1);
  func_0x0001080928d8();
  func_0x000108092838();
  func_0x000108092894();
  func_0x000108092884();
LAB_108091ef4:
  func_0x00010bea9f40(param_1);
  func_0x000108092840();
  func_0x000108092818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108091f2c; end: 108091f5f; -[SCValdiAnimator addCompletion:] */

void FUN_108091f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retainBlock(param_3);
  func_0x0001080928f4();
  func_0x00010befa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108091f60; end: 108091fb3; -[SCValdiAnimator _pendingAnimationsForLayer:] */

void FUN_108091f60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972c0(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108092818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108091fb4; end: 10809207f; -[SCValdiAnimator _appendLayerAnimation:] */

void FUN_108091fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000108092848();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar1 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2972c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809287c();
  puVar3 = *(undefined **)(param_1 + 0x58);
  func_0x00010c0e00e0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,puVar3,puVar2);
  }
  func_0x00010befa120(puVar3,param_2,param_3);
  func_0x00010809287c();
  func_0x000108092840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108092080; end: 10809227b; -[SCValdiAnimator _removeAnimationsFromChildrenIfNeeded] */

ulong FUN_108092080(long param_1,undefined *param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lStack_1e8;
  long *plStack_1e0;
  
  func_0x000108092820();
  puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  _objc_alloc();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c0321c0();
  uVar4 = *(ulong *)(param_1 + 0x38);
  func_0x0001080928ac();
  uVar3 = uVar4;
  func_0x000108092810();
  lVar7 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(uVar4);
      }
      func_0x00010c08c0e0(*(undefined8 *)(uVar6 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      func_0x000108092884();
      uVar6 = uVar6 + 1;
      in_ZR = uVar6 == uVar3;
    } while (uVar6 < uVar3);
    uVar3 = uVar4;
    func_0x000108092810();
  }
  func_0x000108092840();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108092850();
  uVar4 = *(ulong *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000108092810();
  if (uVar3 != 0) {
    lVar7 = *plStack_1e0;
    do {
      uVar6 = 0;
      do {
        func_0x000108092900();
        if (extraout_x8_00 != lVar7) {
          _objc_enumerationMutation(uVar4);
        }
        uVar5 = *(ulong *)(lStack_1e8 + uVar6 * 8);
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = puVar1;
        FUN_10809227c();
        func_0x000108092838();
        if ((uVar5 & 1) == 0) {
          func_0x00010befa120(puVar2);
        }
        uVar6 = uVar6 + 1;
        in_ZR = uVar6 == uVar3;
      } while (uVar6 < uVar3);
      uVar3 = uVar4;
      func_0x000108092810();
    } while (uVar3 != 0);
  }
  func_0x00010809287c();
  uVar3 = *(ulong *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar2;
  _objc_release();
  func_0x000108092818();
  func_0x0001080927fc(extraout_x8);
  if ((bool)in_ZR) {
    return uVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c262c80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x0001080928f4();
    func_0x00010bf4b900();
    if ((uVar4 & 1) == 0) {
      FUN_10809227c(uVar3,param_2);
    }
    else {
      uVar3 = 1;
    }
  }
  func_0x000108092818();
  func_0x000108092830();
  return uVar3;
}



/* Entry: 10809227c; end: 1080922fb;  */

ulong FUN_10809227c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  func_0x00010c262c80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x0001080928f4();
    func_0x00010bf4b900();
    if ((uVar1 & 1) == 0) {
      FUN_10809227c(param_1,param_2);
    }
    else {
      param_1 = 1;
    }
  }
  func_0x000108092818();
  func_0x000108092830();
  return param_1;
}



/* Entry: 1080922fc; end: 108092573; -[SCValdiAnimator flushAnimations:] */

void FUN_1080922fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_80;
  
  func_0x000108092820();
  uStack_80 = extraout_x8;
  func_0x000108092848();
  uVar2 = *(char *)(param_1 + 0x21) == '\x01';
  if ((bool)uVar2) {
    func_0x00010be8b5c0(param_1);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uVar5 = *(ulong *)(param_1 + 0x38);
  func_0x0001080928ac();
  uVar3 = uVar5;
  func_0x000108092810();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar3 != 0) {
    lVar8 = *plStack_130;
    do {
      uVar7 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = *(undefined8 *)(lStack_138 + uVar7 * 8);
        _dispatch_group_enter(*(undefined8 *)(param_1 + 0x48));
        puStack_168 = puVar1;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_108092574;
        puStack_150 = &UNK_110841f20;
        lStack_148 = param_1;
        func_0x00010c0f82c0(uVar6);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
        uVar7 = uVar7 + 1;
        uVar2 = uVar7 == uVar3;
      } while (uVar7 < uVar3);
      uVar3 = uVar5;
      func_0x000108092810();
    } while (uVar3 != 0);
  }
  func_0x000108092840();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  _objc_initWeak(auStack_170,param_1);
  uVar6 = param_3;
  func_0x00010bf481c0();
  if ((int)uVar6 != 0) {
    puStack_1a0 = puVar1;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_108092580;
    puStack_188 = &UNK_110841fb0;
    _objc_copyWeak(auStack_178,auStack_170);
    func_0x0001080928a4();
    uStack_180 = param_3;
    func_0x00010bef78c0(param_1);
    _objc_release(uStack_180);
    _objc_destroyWeak(auStack_178);
  }
  lVar8 = *(long *)(param_1 + 0x50);
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_108092614;
  puStack_1b8 = &UNK_110841fb0;
  lStack_1b0 = lVar8;
  _objc_retain();
  _objc_copyWeak(auStack_1a8,auStack_170);
  func_0x000100bc0718(uVar6,PTR___dispatch_main_q_11034be20,&puStack_1d0);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(lStack_1b0);
  func_0x000108092840();
  puVar4 = auStack_170;
  _objc_destroyWeak();
  func_0x000108092830();
  func_0x0001080927fc(uStack_80);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar8 + 0x28);
  _objc_destroyWeak(auStack_170);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x48));
  return;
}



/* Entry: 108092574; end: 10809257f;  */

void FUN_108092574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  return;
}



/* Entry: 108092580; end: 108092613;  */

void FUN_108092580(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  func_0x00010b97f424();
  plVar2 = param_1 + 5;
  _objc_loadWeakRetained(plVar2);
  func_0x00010c2a2340();
  func_0x00010b97f858(plVar1,plVar2);
  func_0x000108092840();
  func_0x00010c0f9540(param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x0001080925e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}



/* Entry: 108092614; end: 1080926c3;  */

void FUN_108092614(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  uVar1 = param_1;
  func_0x000108092820();
  func_0x000108092850();
  func_0x00010809288c();
  func_0x0001080927e8();
  if (uVar1 != 0) {
    lVar3 = *uStack_100;
    do {
      uVar4 = 0;
      do {
        func_0x000108092900();
        if (extraout_x8_00 != lVar3) {
          func_0x0001080928e0();
        }
        uVar2 = *(ulong *)(uStack_108 + uVar4 * 8);
        (**(code **)(uVar2 + 0x10))();
        uVar4 = uVar4 + 1;
        in_ZR = uVar4 == uVar1;
      } while (uVar4 < uVar1);
      func_0x0001080927e8();
      uVar1 = uVar2;
    } while (uVar2 != 0);
  }
  func_0x000108092818();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010be8b4c0();
  func_0x000108092830();
  func_0x0001080927fc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + 0x40),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 1080926c4; end: 1080926cb; -[SCValdiAnimator _removeCompletedAnimation:] */

void FUN_1080926c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 1080926cc; end: 1080926d3; -[SCValdiAnimator _removeAllRunningAnimations] */

void FUN_1080926cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1080926d4; end: 108092783; -[SCValdiAnimator cancel] */

void FUN_1080926d4(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  func_0x000108092820();
  uVar3 = (undefined1)param_3;
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x22) = 1;
    uVar1 = param_1;
    func_0x000108092850();
    func_0x00010809288c();
    func_0x0001080927e8();
    uVar3 = (undefined1)param_3;
    if (uVar1 != 0) {
      lVar4 = *uStack_100;
      do {
        uVar5 = 0;
        do {
          func_0x000108092900();
          if (extraout_x8_00 != lVar4) {
            func_0x0001080928e0();
          }
          uVar2 = *(ulong *)(uStack_108 + uVar5 * 8);
          func_0x00010bf2dde0();
          uVar5 = uVar5 + 1;
          in_ZR = uVar5 == uVar1;
        } while (uVar5 < uVar1);
        func_0x0001080927e8();
        uVar3 = (undefined1)param_3;
        uVar1 = uVar2;
      } while (uVar2 != 0);
    }
    func_0x000108092818();
    param_1 = *(ulong *)(param_1 + 0x40);
    func_0x00010c12adc0();
  }
  func_0x0001080927fc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_1 + 0x60) = uVar3;
  return;
}



/* Entry: 108092784; end: 10809278b; -[SCValdiAnimator setDisableRemoveOnComplete:] */

void FUN_108092784(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10809278c; end: 108092793; -[SCValdiAnimator crossfade] */

undefined1 FUN_10809278c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 108092794; end: 10809279b; -[SCValdiAnimator wasCancelled] */

undefined1 FUN_108092794(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 10809279c; end: 1080927e7; -[SCValdiAnimator .cxx_destruct] */

void FUN_10809279c(long param_1)

{
  func_0x00010809289c(param_1 + 0x58);
  func_0x00010809289c(param_1 + 0x50);
  func_0x00010809289c(param_1 + 0x48);
  func_0x00010809289c(param_1 + 0x40);
  func_0x00010809289c(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1080927e8; end: 10809290b;  */

void FUN_1080927e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10809290c; end: 1080929e3; -[SCValdiLayerAnimation initWithLayer:animation:key:disableRemoveOnComplete:] */

undefined1 *
FUN_10809290c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000108092c20();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fc518;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1080929e4; end: 108092adf; -[SCValdiLayerAnimation performAnimationWithCompletion:] */

void FUN_1080929e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108092c20();
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1ea580(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010c12b200(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
    }
  }
  uVar2 = param_3;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _objc_release(uVar3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c262c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf03b80(param_1);
  }
  else {
    func_0x00010bef6c20(*(undefined8 *)(param_1 + 0x20));
    if (*(char *)(param_1 + 0x18) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf03c40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108092ae0; end: 108092afb; -[SCValdiLayerAnimation cancelAnimationIfRunning] */

void FUN_108092ae0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAnimationForKey__1126286a0,
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 108092afc; end: 108092bbb; -[SCValdiLayerAnimation animationDidStop:finished:] */

void FUN_108092afc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000108092c20();
  if ((*(char *)(param_1 + 0x18) == '\x01') && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == lVar1) {
      func_0x00010c12b200(*(undefined8 *)(param_1 + 0x20));
    }
  }
  lVar3 = *(long *)(param_1 + 8);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28));
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108092bbc; end: 108092bc3; -[SCValdiLayerAnimation layer] */

undefined8 FUN_108092bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108092bc4; end: 108092bcb; -[SCValdiLayerAnimation animation] */

undefined8 FUN_108092bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108092bcc; end: 108092bd3; -[SCValdiLayerAnimation key] */

undefined8 FUN_108092bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108092bd4; end: 108092c17; -[SCValdiLayerAnimation .cxx_destruct] */

void FUN_108092bd4(long param_1)

{
  FUN_108092c18(param_1 + 0x30);
  FUN_108092c18(param_1 + 0x28);
  FUN_108092c18(param_1 + 0x20);
  FUN_108092c18(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108092c18; end: 108092c27;  */

void FUN_108092c18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 108092c28; end: 108092c43; -[SCValdiAppMainDelegate rootValdiComponentPath] */

void FUN_108092c28(void)

{
  _objc_retain(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 108092c44; end: 108092c4b; -[SCValdiBootstrappingDependencies runtime] */

undefined8 FUN_108092c44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108092c4c; end: 108092c6b; -[SCValdiBootstrappingDependencies setRuntime:] */

void FUN_108092c4c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10809304c();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108092c6c; end: 108092c73; -[SCValdiBootstrappingDependencies navigator] */

undefined8 FUN_108092c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108092c74; end: 108092c93; -[SCValdiBootstrappingDependencies setNavigator:] */

void FUN_108092c74(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10809304c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108092c94; end: 108092cc3; -[SCValdiBootstrappingDependencies .cxx_destruct] */

void FUN_108092c94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108092cc4; end: 108092e63; -[SCValdiBootstrappingAppDelegate application:didFinishLaunchingWithOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108092cc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126b6cf0;
  _objc_opt_new();
  lVar9 = (long)_DAT_1127741a4;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  func_0x00010c284760(*(undefined8 *)(param_1 + lVar9),param_2,
                      &PTR___NSConcreteGlobalBlock_110a19fd0);
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0b6c00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126d91c0;
  _objc_alloc(PTR_PTR_1126d91c0);
  func_0x00010c040b80();
  puVar3 = PTR_PTR_1126d91c8;
  _objc_opt_new(PTR_PTR_1126d91c8);
  func_0x00010c1cba60();
  func_0x00010c1ef000(puVar3,param_2,uVar8);
  lVar9 = param_1;
  func_0x00010bf58900(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afcd0;
  _objc_alloc(PTR_PTR_1126afcd0);
  func_0x00010c0601e0();
  func_0x00010c1c1bc0(puVar2,param_2,puVar4);
  puVar5 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  puVar6 = puVar5;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219c00();
  _objc_release(puVar6);
  func_0x00010c1ee700(puVar1,param_2,puVar5);
  func_0x00010c0b7280(puVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127741a8);
  *(undefined **)(param_1 + _DAT_1127741a8) = puVar1;
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar8);
  return 1;
}



/* Entry: 108092e64; end: 108092e9f;  */

void FUN_108092e64(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c167020(param_2);
  func_0x00010c194be0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108092ea0; end: 108092ed3; -[SCValdiBootstrappingAppDelegate rootValdiComponentPath] */

undefined8 FUN_108092ea0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
                      &PTR____CFConstantStringClassReference_110ed3eb8);
  return 0;
}



/* Entry: 108092ed4; end: 10809300b; -[SCValdiBootstrappingAppDelegate createRootViewWithDependencies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108092ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c141760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afcc8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0d6d60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c142e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c000640();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + _DAT_1127741a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127741a8,0);
  return;
}



/* Entry: 10809300c; end: 10809304b; -[SCValdiBootstrappingAppDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809300c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127741a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127741a8,0);
  return;
}



/* Entry: 10809304c; end: 108093063;  */

void FUN_10809304c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 108093064; end: 108093093;  */

undefined8 FUN_108093064(void)

{
  func_0x00010c216380();
  return 1;
}



/* Entry: 108093094; end: 10809317b;  */

undefined8 FUN_108093094(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000108093cf8();
  func_0x000108093c44();
  uVar1 = param_1;
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108093cd8();
  func_0x00010bfe7c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108093c34();
  func_0x000108093c7c();
  func_0x00010c1a9fc0(param_1,param_2,uVar1);
  func_0x000108093c64();
  return 1;
}



/* Entry: 10809317c; end: 10809317f;  */

void FUN_10809317c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTitle_forState__1126632c0);
  return;
}



/* Entry: 108093180; end: 10809358b;  */

ulong FUN_108093180(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108093c44();
  func_0x00010c295360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200(param_3);
  func_0x000108093c34();
  uVar3 = param_3;
  func_0x00010c126e80();
  func_0x000108093cec();
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000108093cec();
        _objc_enumerationMutation();
      }
      func_0x000108093cec();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      func_0x000108093c6c();
      func_0x000108093cac(&PTR____CFConstantStringClassReference_110dad0b8,
                          PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a140(param_3);
      func_0x000108093c6c();
      func_0x000108093cac(&PTR____CFConstantStringClassReference_110ed3f78,
                          PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108093c84();
      func_0x000108093c6c();
      func_0x000108093cac(&PTR____CFConstantStringClassReference_110ed3f98,
                          PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108093c84();
      func_0x000108093c6c();
      func_0x000108093cac(&PTR____CFConstantStringClassReference_110db6dd8);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a180(param_3);
      func_0x000108093c6c();
      func_0x000108093cac(&PTR____CFConstantStringClassReference_110ed3fb8);
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bf1a180();
      func_0x000108093ca4();
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
    func_0x000108093cec();
    func_0x00010bf52a60();
    uVar3 = uVar4;
  }
  func_0x00010bf1a140(param_3);
  func_0x00010bf1a0c0(param_3);
  ppuVar8 = &PTR___NSConcreteGlobalBlock_110a1a1d0;
  func_0x00010c1dcc00(param_3);
  func_0x000108093c3c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x000108093c5c();
  puVar5 = PTR_PTR_1126d91d0;
  _objc_opt_class(PTR_PTR_1126d91d0);
  ppuVar6 = ppuVar8;
  _objc_opt_isKindOfClass(ppuVar8,puVar5);
  ppuVar1 = ppuVar8;
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  func_0x000108093cb8();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar6 = ppuVar8;
    func_0x00010bfb3a80(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a900(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    func_0x00010c271420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar7);
    func_0x000108093c6c();
    func_0x000108093ca4();
    func_0x000108093c7c();
    func_0x000108093c64();
    func_0x00010bf40c40(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c271420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    func_0x000108093c7c();
    func_0x000108093c64();
    func_0x00010c2954e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07cb60();
    func_0x00010c13ae40(ppuVar8);
    func_0x00010c271420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    func_0x000108093ca4();
    func_0x000108093c64();
  }
  func_0x000108093c74();
  func_0x000108093c34();
  func_0x000108093c3c();
  return (ulong)(ppuVar1 != (undefined **)0x0);
}



/* Entry: 10809358c; end: 10809387b;  */

bool FUN_10809358c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  func_0x000108093c5c();
  puVar2 = PTR_PTR_1126d91d0;
  _objc_opt_class(PTR_PTR_1126d91d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000108093cb8();
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010bfb3a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a900(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c271420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar4);
    func_0x000108093c6c();
    func_0x000108093ca4();
    func_0x000108093c7c();
    func_0x000108093c64();
    func_0x00010bf40c40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c271420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    func_0x000108093c7c();
    func_0x000108093c64();
    func_0x00010c2954e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07cb60();
    func_0x00010c13ae40(param_3);
    func_0x00010c271420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    func_0x000108093ca4();
    func_0x000108093c64();
  }
  func_0x000108093c74();
  func_0x000108093c34();
  func_0x000108093c3c();
  return uVar1 != 0;
}



/* Entry: 10809387c; end: 10809388b;  */

void FUN_10809387c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSAttributedString_1126af068,
             PTR_s_fontAttributesWithCompositeValue_1125ca878,param_2);
  return;
}



/* Entry: 10809388c; end: 10809393b;  */

undefined8
FUN_10809388c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000108093cf8();
  _objc_retain(param_4);
  func_0x000108093cb8();
  func_0x00010c296440(param_2);
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108093c74();
  func_0x000108093ccc();
  func_0x000108093c3c();
  func_0x000108093c34();
  return 1;
}



/* Entry: 10809393c; end: 108093947;  */

void FUN_10809393c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_setTitleColor_forState__112683340,param_3,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108093948; end: 10809398f;  */

void FUN_108093948(void)

{
  FUN_108093bfc();
  func_0x000108093c5c();
  func_0x000108093c4c();
  func_0x00010c296460();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108093c1c();
  func_0x000108093c28();
  func_0x000108093c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108093990; end: 10809399b;  */

void FUN_108093990(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_setTitleShadowColor_forSta_112683348,param_3,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10809399c; end: 1080939e3;  */

void FUN_10809399c(void)

{
  FUN_108093bfc();
  func_0x000108093c5c();
  func_0x000108093c4c();
  func_0x00010c296480();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108093c1c();
  func_0x000108093c28();
  func_0x000108093c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080939e4; end: 1080939ef;  */

void FUN_1080939e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_setImage_forState__1126831b0,param_3,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080939f0; end: 108093a37;  */

void FUN_1080939f0(void)

{
  FUN_108093bfc();
  func_0x000108093c5c();
  func_0x000108093c4c();
  func_0x00010c295e20();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108093c1c();
  func_0x000108093c28();
  func_0x000108093c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108093a38; end: 108093a43;  */

void FUN_108093a38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_setBackgroundImage_forStat_1126830c0,param_3,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108093a44; end: 108093b47;  */

void FUN_108093a44(void)

{
  FUN_108093bfc();
  func_0x000108093c5c();
  func_0x000108093c4c();
  func_0x00010c295a60();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108093c1c();
  func_0x000108093c28();
  func_0x000108093c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108093b48; end: 108093b53;  */

void FUN_108093b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_setTitleColor_forState__112683340,param_3,0);
  return;
}



/* Entry: 108093b54; end: 108093bab;  */

void FUN_108093b54(undefined8 param_1,undefined8 param_2)

{
  func_0x000108093c44();
  func_0x000108093c5c();
  func_0x00010c296460(param_2);
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108093c1c();
  func_0x000108093c28();
  func_0x000108093c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108093bac; end: 108093bc7;  */

void FUN_108093bac(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UIButton_1126aec48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108093bc8; end: 108093bfb;  */

bool FUN_108093bc8(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
  return param_1 == puVar1;
}



/* Entry: 108093bfc; end: 108093d03;  */

void FUN_108093bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 108093d04; end: 108093d73; -[SCValdiControlEventsHandler initWithControlEvents:function:] */

undefined1 * FUN_108093d04(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010809405c();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar1 + 8) = unaff_x20;
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x19;
    _objc_release(uVar2);
  }
  func_0x000108094070();
  return puVar1;
}



/* Entry: 108093d74; end: 108093ddf; -[SCValdiControlEventsHandler perform] */

void FUN_108093d74(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x00010b97f424();
  func_0x00010c0f9540(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x000108093dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}



/* Entry: 108093de0; end: 108093de7; -[SCValdiControlEventsHandler events] */

undefined8 FUN_108093de0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108093de8; end: 108093def; -[SCValdiControlEventsHandler function] */

undefined8 FUN_108093de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108093df0; end: 108093dfb; -[SCValdiControlEventsHandler .cxx_destruct] */

void FUN_108093df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108093dfc; end: 108093efb;  */

void FUN_108093dfc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_valdiEventsHandler_112682ef8;
  puVar2 = param_1;
  _objc_getAssociatedObject(param_1,PTR_s_valdiEventsHandler_112682ef8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_1,puVar1,puVar2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108093efc; end: 108093fbb;  */

void FUN_108093efc(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_1;
  func_0x00010c295340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_perform_11261ba08;
  uVar5 = 0;
  while (uVar3 = uVar2, func_0x00010bf529e0(), uVar5 < uVar3) {
    uVar3 = uVar2;
    func_0x00010c0dfd40(uVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf9a520();
    if (uVar4 == param_3) {
      uVar4 = uVar3;
      func_0x00010bf9a520(uVar3);
      func_0x00010c12e940(param_1,param_2,uVar3,puVar1,uVar4);
      func_0x00010c12d3c0(uVar2,param_2,uVar5);
    }
    else {
      uVar5 = uVar5 + 1;
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108093fbc; end: 108094023;  */

void FUN_108093fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a1e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3fd8,
                      &PTR___NSConcreteGlobalBlock_110a1a210,&PTR___NSConcreteGlobalBlock_110a1a230)
  ;
  func_0x00010bf1a1e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3ff8,
                      &PTR___NSConcreteGlobalBlock_110a1a250,&PTR___NSConcreteGlobalBlock_110a1a270)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108094024; end: 108094077;  */

void FUN_108094024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_addTargetWithControlEvents_112682f78,0x40,param_3);
  return;
}



/* Entry: 108094078; end: 108094107;  */

void FUN_108094078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x000108094368();
  func_0x000108094368();
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110e1de18,0,
                      &PTR___NSConcreteGlobalBlock_110a1a370,&PTR___NSConcreteGlobalBlock_110a1a390)
  ;
  func_0x00010c1dcc00(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a1a3b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108094108; end: 10809415f;  */

undefined8 FUN_108094108(void)

{
  FUN_1080942fc();
  func_0x000108094360();
  func_0x00010c1d4000();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108094314();
  func_0x000108094308();
  func_0x000108094320();
  func_0x00010809433c();
  return 1;
}



/* Entry: 108094160; end: 108094193;  */

void FUN_108094160(void)

{
  func_0x000108094328();
  func_0x00010bfce0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108094344();
  func_0x000108094320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108094194; end: 108094247;  */

undefined8 FUN_108094194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x21;
  double in_d3;
  
  FUN_1080942fc();
  _objc_retain(param_3);
  func_0x000108094360();
  func_0x00010c216160();
  func_0x00010bfb68e0();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(unaff_x21);
  func_0x00010c16e440();
  func_0x00010809433c();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108094314();
  func_0x000108094308();
  func_0x000108094320();
  func_0x00010809433c();
  return 1;
}



/* Entry: 108094248; end: 10809427b;  */

void FUN_108094248(void)

{
  func_0x000108094328();
  func_0x00010bfce0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108094344();
  func_0x000108094320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809427c; end: 1080942d3;  */

undefined8 FUN_10809427c(void)

{
  FUN_1080942fc();
  func_0x000108094360();
  func_0x00010c1d1360();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108094314();
  func_0x000108094308();
  func_0x000108094320();
  func_0x00010809433c();
  return 1;
}



/* Entry: 1080942d4; end: 1080942df;  */

void FUN_1080942d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setOn__112651f00,0);
  return;
}



/* Entry: 1080942e0; end: 1080942fb;  */

void FUN_1080942e0(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UISwitch_1126b0680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080942fc; end: 10809437b;  */

void FUN_1080942fc(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(in_x3);
  return;
}



/* Entry: 10809437c; end: 108094407; -[SCValdiMaskLayer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10809437c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc528;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127741b4) = 0x3ff0000000000000;
    func_0x00010c19bc80(puVar1);
    func_0x0001080989b8();
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108098820();
    func_0x00010c18b5e0();
    func_0x000108098770();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108094408; end: 108094477; -[SCValdiMaskLayer layoutSublayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108094408(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc528;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSublayers_112539578);
  func_0x0001080988b4();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127741b8));
  func_0x0001080988b4();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127741bc));
  func_0x00010bedcc60(param_1);
  return;
}



/* Entry: 108094478; end: 10809447b; -[SCValdiMaskLayer updateBounds:] */

void FUN_108094478(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1739f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBounds__11263a898);
  return;
}



/* Entry: 10809447c; end: 1080945fb; -[SCValdiMaskLayer _updatePath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809447c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_5;
  func_0x00010bf20c00();
  _CGPathCreateMutable();
  lVar2 = param_5;
  func_0x00010bfd5da0();
  if ((int)lVar2 == 0) {
    _CGPathAddRect(0,0,param_3,param_4,lVar1,0);
  }
  else {
    FUN_1080945fc(*(undefined8 *)(param_5 + _DAT_1127741c0),
                  *(undefined8 *)(param_5 + _DAT_1127741c4),
                  *(undefined8 *)(param_5 + _DAT_1127741c8),
                  *(undefined8 *)(param_5 + _DAT_1127741cc),param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    _CGPathAddPath(lVar1,0,lVar2);
    func_0x000108098778();
  }
  lVar2 = (long)_DAT_1127741d0;
  lVar3 = (long)_DAT_1127741b8;
  if (*(long *)(param_5 + lVar2) == 0) {
    func_0x00010c1c2c00(*(undefined8 *)(param_5 + lVar3));
  }
  else {
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    lVar2 = *(long *)(param_5 + lVar2);
    func_0x00010b973a6c(param_3,param_4);
    if (lVar2 == 0) {
      func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar3));
    }
    else {
      _CGPathAddPath(lVar1,0,lVar2);
      func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar3));
      _CFRelease(lVar2);
    }
  }
  func_0x000108098820();
  func_0x00010c1d9820();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)(lVar1);
    return;
  }
  return;
}



/* Entry: 1080945fc; end: 10809475f;  */

void FUN_1080945fc(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0,param_1);
  func_0x000108098924(param_1,param_1,param_1,0x400921fb54442d18,0x4012d97c7f3321d2,puVar1);
  func_0x00010bef98c0(param_5 - param_2,0,puVar1);
  func_0x000108098924(param_5 - param_2,param_2,param_2,0x4012d97c7f3321d2,0x401921fb54442d18,puVar1
                     );
  func_0x00010bef98c0(param_5,param_6 - param_4,puVar1);
  func_0x000108098924(param_5 - param_4,param_6 - param_4,param_4,0x401921fb54442d18,
                      0x401f6a7a2955385e,puVar1);
  func_0x00010bef98c0(param_3,param_6,puVar1);
  func_0x000108098924(param_3,param_6 - param_3,param_3,0x401f6a7a2955385e,0x400921fb54442d18,puVar1
                     );
  func_0x00010bef98c0(0,param_1,puVar1);
  func_0x00010bf3dc80(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108094760; end: 1080947bb; -[SCValdiMaskLayer hasCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108094760(long param_1)

{
  if (((*(double *)(param_1 + _DAT_1127741c0) == 0.0) &&
      (*(double *)(param_1 + _DAT_1127741c4) == 0.0)) &&
     (*(double *)(param_1 + _DAT_1127741cc) == 0.0)) {
    return *(double *)(param_1 + _DAT_1127741c8) != 0.0;
  }
  return true;
}



/* Entry: 1080947bc; end: 10809483f; -[SCValdiMaskLayer isEmpty] */

bool FUN_1080947bc(double param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  func_0x00010bfd5da0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c0bc220();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 == 0) && (func_0x00010c0bc1e0(param_2), param_1 == 1.0)) {
      func_0x00010c0bc180(param_2);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = param_2 == 0;
      _objc_release();
    }
    else {
      bVar1 = false;
    }
    func_0x000108098758();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108094840; end: 10809486b; -[SCValdiMaskLayer setTopLeftCornerRadius:topRightCornerRadius:bottomRightCornerRadius:bottomLeftCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108094840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + _DAT_1127741c0) = param_1;
  *(undefined8 *)(param_5 + _DAT_1127741c4) = param_2;
  *(undefined8 *)(param_5 + _DAT_1127741cc) = param_3;
  *(undefined8 *)(param_5 + _DAT_1127741c8) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bedcc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updatePath_112594cc0);
  return;
}



/* Entry: 10809486c; end: 10809494b; -[SCValdiMaskLayer setMaskPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809486c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  func_0x000108098680();
  lVar3 = (long)_DAT_1127741d0;
  func_0x000108098790();
  uVar1 = *(undefined8 *)(unaff_x20 + lVar3);
  *(long *)(unaff_x20 + lVar3) = unaff_x19;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_1127741b8;
  if (unaff_x19 == 0) {
    func_0x00010c12c940();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = 0;
    _objc_release(uVar1);
  }
  else {
    if (*(long *)(unaff_x20 + lVar3) == 0) {
      puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      _objc_opt_new();
      uVar1 = *(undefined8 *)(unaff_x20 + lVar3);
      *(undefined **)(unaff_x20 + lVar3) = puVar2;
      _objc_release(uVar1);
      func_0x0001080989b8();
      func_0x00010c22ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0(*(undefined8 *)(unaff_x20 + lVar3),param_2,uVar1);
      func_0x000108098778();
      func_0x00010c1d4bc0((float)(1.0 - *(double *)(unaff_x20 + _DAT_1127741b4)),
                          *(undefined8 *)(unaff_x20 + lVar3));
      func_0x0001080988ac();
      func_0x00010c19f0e0(*(undefined8 *)(unaff_x20 + lVar3));
      func_0x00010befbb20();
    }
    func_0x00010bedcc60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10809494c; end: 108094973; -[SCValdiMaskLayer setMaskOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809494c(double param_1,long param_2)

{
  *(double *)(param_2 + _DAT_1127741b4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)(1.0 - param_1),*(undefined8 *)(param_2 + _DAT_1127741b8),
             PTR_s_setOpacity__112652d18);
  return;
}


