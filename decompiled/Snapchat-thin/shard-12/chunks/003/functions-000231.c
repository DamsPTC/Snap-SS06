/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ff8190; end: 108ff819f; -[SCGroupBitmojiAvatarView rearBitmojiOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff8190(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6f8);
}



/* Entry: 108ff81a0; end: 108ff822f; -[SCGroupBitmojiAvatarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff81a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f708,0);
  _objc_storeStrong(param_1 + _DAT_11277f6fc,0);
  _objc_storeStrong(param_1 + _DAT_11277f704,0);
  _objc_storeStrong(param_1 + _DAT_11277f6f4,0);
  _objc_storeStrong(param_1 + _DAT_11277f6ec,0);
  _objc_storeStrong(param_1 + _DAT_11277f6f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f6e8,0);
  return;
}



/* Entry: 108ff8230; end: 108ff829b;  */

void FUN_108ff8230(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b48f0;
  _objc_opt_new(PTR_PTR_1126b48f0);
  func_0x00010c182220();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8160();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff829c; end: 108ff82cf;  */

void FUN_108ff829c(long param_1,byte param_2)

{
  FUN_1090072d8();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 ^ 1;
  return;
}



/* Entry: 108ff82d0; end: 108ff8627;  */

void FUN_108ff82d0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int param_6)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_6 == 0) {
    dVar3 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar3 = dVar3 * 0.550000011920929;
    dVar2 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar2 = dVar2 * 0.27000001072883606;
    lVar1 = 8;
    if (param_5 != 2) {
      lVar1 = 0;
    }
    dVar4 = *(double *)(&UNK_10dd90440 + lVar1);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar5 = dVar3 * -0.5 + param_1 * dVar4;
    dVar4 = dVar3 / 0.7446808510638298;
  }
  else {
    if (param_5 == 2) {
      dVar2 = 0.0;
      dVar4 = 0.23000000417232513;
      dVar3 = 0.8799999952316284;
    }
    else {
      dVar2 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      dVar2 = dVar2 * 0.05000000074505806;
      dVar4 = 0.25;
      dVar3 = 0.824999988079071;
    }
    dVar5 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar3 = dVar3 * dVar5;
    dVar5 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar5 = -(dVar4 * dVar5);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar2 = (param_1 - dVar3) - dVar2;
    dVar4 = dVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbb450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectIntegral_1103475b8)(dVar5,dVar2,dVar3,dVar4);
  return;
}



/* Entry: 108ff8628; end: 108ff8757;  */

double FUN_108ff8628(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,uint param_6,int param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((param_6 & 1) == 0) {
    dVar2 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar2 = dVar2 * 0.7300000190734863;
    dVar3 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar3 = dVar3 * 0.12999999523162842;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    param_1 = param_1 - dVar2;
    dVar1 = dVar2 / 0.7446808510638298;
  }
  else {
    if (param_7 == 0) {
      return param_1;
    }
    dVar1 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar1 = dVar1 * 0.8999999761581421;
    dVar3 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar3 = dVar3 - dVar1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    param_1 = param_1 - dVar1;
    dVar2 = dVar1;
  }
  param_1 = param_1 * 0.5;
  _CGRectIntegral(param_1,dVar3,dVar2,dVar1);
  return param_1;
}



/* Entry: 108ff8758; end: 108ff89b7;  */

double FUN_108ff8758(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,ulong param_6)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  if ((param_6 & 1) == 0) {
    dVar6 = *(double *)PTR__CGRectZero_110347608;
  }
  else {
    lVar1 = param_5;
    func_0x00010bf1ae20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_5;
      func_0x00010bfce6a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        dVar6 = 0.0;
        dVar5 = 0.0;
      }
      else {
        lVar1 = param_5;
        func_0x00010bfce6a0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf529e0();
        _objc_release(lVar1);
        uVar4 = param_2;
        dVar3 = param_1;
        uStack_80 = param_4;
        uStack_78 = param_3;
        if (lVar2 == 2) {
          func_0x000108ff8454(param_1,param_2,2,1);
        }
        dVar5 = param_1;
        _CGRectGetWidth(param_1,param_2,param_3,param_4);
        _CGRectGetHeight(param_1,param_2,param_3,param_4);
        dVar5 = dVar5 * 0.3295774459838867;
        dVar6 = dVar3;
        _CGRectGetWidth(dVar3,uVar4,uStack_78,uStack_80);
        dVar6 = dVar3 + dVar6 * 0.5;
        _CGRectGetHeight(dVar3,uVar4,uStack_78,uStack_80);
      }
    }
    else {
      dVar5 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar5 = dVar5 * 0.3295774459838867;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      dVar6 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar6 = dVar6 * 0.5;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
    }
    dVar6 = dVar6 - dVar5 * 0.5;
  }
  _objc_release(param_5);
  return dVar6;
}



/* Entry: 108ff89b8; end: 108ff8a9f; -[SCGroupBitmojiNotificationAvatarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ff89b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffc78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be397e0(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f714);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f714) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f718);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f718) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f71c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f71c) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ff8aa0; end: 108ff8aab;  */

void FUN_108ff8aa0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c182220();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8160();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff8aac; end: 108ff8adf; -[SCGroupBitmojiNotificationAvatarView _initCircleLayer] */

void FUN_108ff8aac(undefined8 param_1)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ff8ae0; end: 108ff8b6f; -[SCGroupBitmojiNotificationAvatarView layoutSubviews] */

void FUN_108ff8ae0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffc78;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c1842e0(param_1 * 0.5,uVar1);
  func_0x00010be49340(param_2);
  func_0x00010be49540(param_2);
  func_0x00010be493e0(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108ff8b70; end: 108ff8c8b; -[SCGroupBitmojiNotificationAvatarView _layoutLeftImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff8b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277f720;
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_5 + lVar5);
    func_0x00010bf529e0();
    if (lVar1 != 3) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c089820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bf529e0(uVar3);
  uVar4 = uVar2;
  func_0x00010bf86c40(uVar2);
  FUN_108ff82d0(param_1,param_2,param_3,param_4,uVar3,uVar4);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277f714);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff8c8c; end: 108ff8dcf; -[SCGroupBitmojiNotificationAvatarView _layoutRightImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff8c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277f720;
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_5 + lVar5);
    func_0x00010bf529e0();
    if (lVar1 != 3) {
      return;
    }
  }
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010bf529e0();
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  if (lVar1 == 2) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf20c00(param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bf529e0(uVar3);
  uVar4 = uVar2;
  func_0x00010bf86c40(uVar2);
  func_0x000108ff8454(param_1,param_2,param_3,param_4,uVar3,uVar4);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277f71c);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff8dd0; end: 108ff8eef; -[SCGroupBitmojiNotificationAvatarView _layoutMiddleImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff8dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277f720;
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 1) {
    lVar1 = *(long *)(param_5 + lVar5);
    func_0x00010bf529e0();
    if (lVar1 != 3) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bf529e0(uVar3);
  uVar4 = uVar2;
  func_0x00010bf86c40(uVar2);
  FUN_108ff8628(param_1,param_2,param_3,param_4,uVar3,uVar4,0);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277f718);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff8ef0; end: 108ff90bb; -[SCGroupBitmojiNotificationAvatarView setViewModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff8ef0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11277f720;
  uVar6 = *(ulong *)(param_1 + lVar8);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  if (uVar6 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar7 = uVar6;
      func_0x00010c071ae0(uVar6,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar6);
      if ((uVar7 & 1) != 0) goto LAB_108ff90a0;
    }
    uVar6 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = uVar6;
    _objc_release(uVar5);
    uVar7 = param_3;
    func_0x00010bf529e0(param_3);
    uVar6 = param_1;
    func_0x00010be378c0(param_1,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010be35820(param_1,param_2,uVar7);
    uVar7 = param_3;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        uVar1 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010c0dfd40(uVar6,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdee940(param_1,param_2,uVar2);
        uVar3 = uVar1;
        func_0x00010bf86c40(uVar1);
        func_0x00010bedc620(param_1,param_2,uVar2,uVar3);
        uVar3 = uVar1;
        func_0x00010bfe6ac0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar7 = uVar7 + 1;
        uVar1 = param_3;
        func_0x00010bf529e0();
      } while (uVar7 < uVar1);
    }
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar6);
LAB_108ff90a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff90bc; end: 108ff91b7; -[SCGroupBitmojiNotificationAvatarView _imageViewsToUpdateForCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff90bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined8 *)0x1) {
    uStack_48 = *(undefined8 *)(param_1 + _DAT_11277f718);
    param_3 = &uStack_48;
  }
  else if (param_3 == (undefined8 *)0x2) {
    uStack_40 = *(undefined8 *)(param_1 + _DAT_11277f71c);
    uStack_38 = *(undefined8 *)(param_1 + _DAT_11277f714);
    param_3 = &uStack_40;
  }
  else {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (param_3 != (undefined8 *)0x3) goto LAB_108ff9190;
    uStack_30 = *(undefined8 *)(param_1 + _DAT_11277f718);
    uStack_28 = *(undefined8 *)(param_1 + _DAT_11277f71c);
    uStack_20 = *(undefined8 *)(param_1 + _DAT_11277f714);
    param_3 = &uStack_30;
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
LAB_108ff9190:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  if (param_3 == (undefined8 *)0x2) {
    piVar3 = (int *)&DAT_11277f718;
  }
  else {
    if (param_3 != (undefined8 *)0x1) {
      return;
    }
    piVar3 = (int *)&DAT_11277f714;
    uVar2 = *(undefined8 *)(puVar1 + _DAT_11277f71c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(puVar1 + *piVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff91b8; end: 108ff925b; -[SCGroupBitmojiNotificationAvatarView _hideImageViewsForCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff91b8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_3 == 2) {
    piVar2 = (int *)&DAT_11277f718;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    piVar2 = (int *)&DAT_11277f714;
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f71c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + *piVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff925c; end: 108ff93d7; -[SCGroupBitmojiNotificationAvatarView _createIfNecessaryForImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff925c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) goto LAB_108ff939c;
  func_0x00010bf57500(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277f71c;
  lVar1 = param_3;
  if (param_3 == *(long *)(param_1 + lVar4)) {
    lVar5 = (long)_DAT_11277f718;
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_108ff92c0;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
LAB_108ff936c:
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(param_1,param_2,lVar1,uVar3);
    _objc_release(uVar3);
  }
  else {
LAB_108ff92c0:
    if (param_3 == *(long *)(param_1 + _DAT_11277f714)) {
      lVar2 = *(long *)(param_1 + lVar4);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        func_0x00010c269d40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        goto LAB_108ff936c;
      }
    }
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
LAB_108ff939c:
  lVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff93d8; end: 108ff94a3; -[SCGroupBitmojiNotificationAvatarView _updateOpacityForImageView:displayingBitmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff93d8(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  if (param_3 == *(long *)(param_1 + _DAT_11277f714)) {
LAB_108ff943c:
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      uVar3 = 0x3fc3333333333333;
    }
    else {
      uVar3 = 0x3fe0000000000000;
    }
  }
  else {
    if (param_3 == *(long *)(param_1 + _DAT_11277f71c)) {
      lVar1 = *(long *)(param_1 + _DAT_11277f720);
      func_0x00010bf529e0();
      if (lVar1 == 3) goto LAB_108ff943c;
    }
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff94a4; end: 108ff94b3; -[SCGroupBitmojiNotificationAvatarView viewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff94a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f720);
}



/* Entry: 108ff94b4; end: 108ff9513; -[SCGroupBitmojiNotificationAvatarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff94b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f720,0);
  _objc_storeStrong(param_1 + _DAT_11277f71c,0);
  _objc_storeStrong(param_1 + _DAT_11277f718,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f714,0);
  return;
}



/* Entry: 108ff9514; end: 108ff957f;  */

void FUN_108ff9514(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c182220();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8160();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff9580; end: 108ff95fb;  */

void FUN_108ff9580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126dce20;
  _objc_opt_class(PTR_PTR_1126dce20);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110f16af8,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ff95fc; end: 108ff9643; +[SCAvatarCircleBackgroundViewModel blur] */

void FUN_108ff95fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b45f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ff9644; end: 108ff96fb; +[SCAvatarCircleBackgroundViewModel imageURLWithBackgroundImageURL:backgroundColor:opacity:mediaContextType:] */

void FUN_108ff9644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b45f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  *(undefined8 *)(puVar2 + 0x50) = param_1;
  *(undefined8 *)(puVar2 + 0x58) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ff96fc; end: 108ff97a3; +[SCAvatarCircleBackgroundViewModel imageWithBackgroundNetworkImage:backgroundColor:opacity:] */

void FUN_108ff96fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b45f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  *(undefined8 *)(puVar2 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ff97a4; end: 108ff9847; +[SCAvatarCircleBackgroundViewModel solidColorWithBackgroundColor:strokeColor:strokeWidth:] */

void FUN_108ff97a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b45f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  *(undefined8 *)(puVar2 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ff9848; end: 108ff986b; -[SCAvatarCircleBackgroundViewModel copyWithZone:] */

undefined8 FUN_108ff9848(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ff986c; end: 108ff9983; -[SCAvatarCircleBackgroundViewModel hash] */

void FUN_108ff986c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x58);
  uVar5 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  uStack_40 = uVar3;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_a0 = 0x15;
  pcStack_88 = FUN_108ff9984;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_a8 = PTR_PTR_1126ffc80;
  puStack_b0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff9984; end: 108ff99c7; -[SCAvatarCircleBackgroundViewModel internalInit] */

void FUN_108ff9984(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ffc80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff99c8; end: 108ff9b8b; -[SCAvatarCircleBackgroundViewModel isEqual:] */

long FUN_108ff99c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ff9b64:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ff9b70;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
        dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
          dVar5 = ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if ((((bVar1) &&
               ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
                (func_0x00010c071c60(), (int)lVar4 != 0)))) &&
              ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
               (func_0x00010c071c60(), (int)lVar4 != 0)))) &&
             ((((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
               ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                (func_0x00010c071c60(), (int)lVar4 != 0)))) &&
              ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
            lVar4 = *(long *)(param_1 + 0x48);
            if (lVar4 != *(long *)(param_3 + 0x48)) {
              func_0x00010c071c60();
              goto LAB_108ff9b70;
            }
            goto LAB_108ff9b64;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_108ff9b70:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108ff9b8c; end: 108ff9c8f; -[SCAvatarCircleBackgroundViewModel matchBlur:solidColor:image:imageURL:] */

void FUN_108ff9b8c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_108ff9c60;
    }
    if ((lVar3 != 1) || (param_4 == 0)) goto LAB_108ff9c60;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar3 = param_4;
  }
  else {
    if (lVar3 != 2) {
      if ((lVar3 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))
                  (*(undefined8 *)(param_1 + 0x50),param_6,*(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58));
      }
      goto LAB_108ff9c60;
    }
    if (param_5 == 0) goto LAB_108ff9c60;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  (*pcVar4)(uVar5,lVar3,uVar1,uVar2);
LAB_108ff9c60:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff9c90; end: 108ff9cef; -[SCAvatarCircleBackgroundViewModel .cxx_destruct] */

void FUN_108ff9c90(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ff9cf0; end: 108ff9d63; +[SCAvatarFallbackNetworkImage avatarSilhouetteWithStroke:fillColor:] */

void FUN_108ff9cf0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd8f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  puVar2[0x28] = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ff9d64; end: 108ff9dcf; +[SCAvatarFallbackNetworkImage imageWithImageName:] */

void FUN_108ff9d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bd8f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ff9dd0; end: 108ff9e3b; +[SCAvatarFallbackNetworkImage viewTypeWithViewType:tintColor:] */

void FUN_108ff9dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd8f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ff9e3c; end: 108ff9e5f; -[SCAvatarFallbackNetworkImage copyWithZone:] */

undefined8 FUN_108ff9e3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ff9e60; end: 108ff9ef3; -[SCAvatarFallbackNetworkImage hash] */

void FUN_108ff9e60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_50 = -lVar1;
  if (-1 < lVar1) {
    lStack_50 = lVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126ffc88;
  puStack_90 = puVar4;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff9ef4; end: 108ff9f37; -[SCAvatarFallbackNetworkImage internalInit] */

void FUN_108ff9ef4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ffc88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff9f38; end: 108ffa027; -[SCAvatarFallbackNetworkImage isEqual:] */

long FUN_108ff9f38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ffa000:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffa00c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071c60();
            goto LAB_108ffa00c;
          }
          goto LAB_108ffa000;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ffa00c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ffa028; end: 108ffa0e3; -[SCAvatarFallbackNetworkImage matchViewType:image:avatarSilhouette:] */

void FUN_108ffa028(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined1 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ffa0e4; end: 108ffa11f; -[SCAvatarFallbackNetworkImage .cxx_destruct] */

void FUN_108ffa0e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108ffa120; end: 108ffa2eb; -[SCAvatarViewModel initWithBitmojiAvatarContainerViewModel:backgroundViewModel:ringViewModel:avatarBadgeViewModel:avatarActivityIndicatorViewModel:miniStoryThumbnailViewModel:shouldHandleStoryTapAction:isLoading:shouldShowReplayIcon:shouldShowPublicProfileLogo:renderStyle:] */

undefined8 *
FUN_108ffa120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ffc90;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9._3_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ffa2ec; end: 108ffa30f; -[SCAvatarViewModel copyWithZone:] */

undefined8 FUN_108ffa2ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffa310; end: 108ffa3e7; -[SCAvatarViewModel hash] */

undefined8 * FUN_108ffa310(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_50 = (ulong)uVar1 & 0xff;
  uStack_48 = uVar10 >> 0x10 & 0xff;
  uStack_40 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar8;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108ffa520:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ffa52c;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(char *)((long)puVar4 + 8) == param_3[8] && (*(char *)((long)puVar4 + 9) == param_3[9]))
         && (*(char *)((long)puVar4 + 10) == param_3[10])) &&
        (*(char *)((long)puVar4 + 0xb) == param_3[0xb])))) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x18);
        if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x20);
          if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x28);
            if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar4 + 0x30);
              if ((lVar6 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                lVar6 = *(long *)((long)puVar4 + 0x38);
                if ((lVar6 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar6 != 0)
                   ) {
                  puVar7 = *(undefined1 **)((long)puVar4 + 0x40);
                  if (puVar7 != *(undefined1 **)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_108ffa52c;
                  }
                  goto LAB_108ffa520;
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_108ffa52c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 108ffa3e8; end: 108ffa547; -[SCAvatarViewModel isEqual:] */

long FUN_108ffa3e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ffa520:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffa52c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_108ffa52c;
                  }
                  goto LAB_108ffa520;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ffa52c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ffa548; end: 108ffa54f; -[SCAvatarViewModel bitmojiAvatarContainerViewModel] */

undefined8 FUN_108ffa548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ffa550; end: 108ffa557; -[SCAvatarViewModel backgroundViewModel] */

undefined8 FUN_108ffa550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ffa558; end: 108ffa55f; -[SCAvatarViewModel ringViewModel] */

undefined8 FUN_108ffa558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ffa560; end: 108ffa567; -[SCAvatarViewModel avatarBadgeViewModel] */

undefined8 FUN_108ffa560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ffa568; end: 108ffa56f; -[SCAvatarViewModel avatarActivityIndicatorViewModel] */

undefined8 FUN_108ffa568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ffa570; end: 108ffa577; -[SCAvatarViewModel miniStoryThumbnailViewModel] */

undefined8 FUN_108ffa570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ffa578; end: 108ffa57f; -[SCAvatarViewModel shouldHandleStoryTapAction] */

undefined1 FUN_108ffa578(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ffa580; end: 108ffa587; -[SCAvatarViewModel isLoading] */

undefined1 FUN_108ffa580(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108ffa588; end: 108ffa58f; -[SCAvatarViewModel shouldShowReplayIcon] */

undefined1 FUN_108ffa588(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108ffa590; end: 108ffa597; -[SCAvatarViewModel shouldShowPublicProfileLogo] */

undefined1 FUN_108ffa590(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108ffa598; end: 108ffa59f; -[SCAvatarViewModel renderStyle] */

undefined8 FUN_108ffa598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108ffa5a0; end: 108ffa60b; -[SCAvatarViewModel .cxx_destruct] */

void FUN_108ffa5a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ffa60c; end: 108ffa6fb; -[SCBitmojiAvatarContainerViewModel initWithBitmojiAvatarViewModel:groupBitmojiAvatarViewModels:bitmojiAccessoryAvatarViewModel:bitmojiAccessoryAvatarViewTypingAnimationState:withSelfieInset:] */

undefined1 *
FUN_108ffa60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ffc98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ffa6fc; end: 108ffa71f; -[SCBitmojiAvatarContainerViewModel copyWithZone:] */

undefined8 FUN_108ffa6fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffa720; end: 108ffa7ab; -[SCBitmojiAvatarContainerViewModel hash] */

undefined8 * FUN_108ffa720(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108ffa864:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ffa870;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_108ffa870;
          }
          goto LAB_108ffa864;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108ffa870:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108ffa7ac; end: 108ffa88b; -[SCBitmojiAvatarContainerViewModel isEqual:] */

long FUN_108ffa7ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ffa864:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffa870;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_108ffa870;
          }
          goto LAB_108ffa864;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ffa870:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ffa88c; end: 108ffa893; -[SCBitmojiAvatarContainerViewModel bitmojiAvatarViewModel] */

undefined8 FUN_108ffa88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ffa894; end: 108ffa89b; -[SCBitmojiAvatarContainerViewModel groupBitmojiAvatarViewModels] */

undefined8 FUN_108ffa894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ffa89c; end: 108ffa8a3; -[SCBitmojiAvatarContainerViewModel bitmojiAccessoryAvatarViewModel] */

undefined8 FUN_108ffa89c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ffa8a4; end: 108ffa8ab; -[SCBitmojiAvatarContainerViewModel bitmojiAccessoryAvatarViewTypingAnimationState] */

undefined8 FUN_108ffa8a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ffa8ac; end: 108ffa8b3; -[SCBitmojiAvatarContainerViewModel withSelfieInset] */

undefined1 FUN_108ffa8ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ffa8b4; end: 108ffa8ef; -[SCBitmojiAvatarContainerViewModel .cxx_destruct] */

void FUN_108ffa8b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ffa8f0; end: 108ffa95b; +[SCBitmojiAvatarViewModel alternativeAvatarWithAlternativeAvatarViewModel:] */

void FUN_108ffa8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bd8e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ffa95c; end: 108ffa9c7; +[SCBitmojiAvatarViewModel emojiWithEmoji:] */

void FUN_108ffa95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bd8e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ffa9c8; end: 108ffaab7; +[SCBitmojiAvatarViewModel imageWithNetworkImage:loadingImage:fallbackNetworkImage:transformation:] */

void FUN_108ffa9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bd8e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ffaab8; end: 108ffaadb; -[SCBitmojiAvatarViewModel copyWithZone:] */

undefined8 FUN_108ffaab8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffaadc; end: 108ffab83; -[SCBitmojiAvatarViewModel hash] */

void FUN_108ffaadc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126ffca0;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ffab84; end: 108ffabc7; -[SCBitmojiAvatarViewModel internalInit] */

void FUN_108ffab84(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ffca0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ffabc8; end: 108ffacdf; -[SCBitmojiAvatarViewModel isEqual:] */

long FUN_108ffabc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ffacb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffacc4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_108ffacc4;
                }
                goto LAB_108ffacb8;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ffacc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fface0; end: 108ffad97; -[SCBitmojiAvatarViewModel matchImage:emoji:alternativeAvatar:] */

void FUN_108fface0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_108ffad74;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
      goto LAB_108ffad74;
    }
    if (param_4 == 0) goto LAB_108ffad74;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_108ffad74:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ffad98; end: 108ffadf7; -[SCBitmojiAvatarViewModel .cxx_destruct] */

void FUN_108ffad98(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ffadf8; end: 108ffae57; -[SCBitmojiAvatarViewModelConfiguration initWithShouldUsePlaceholderSilhouette:shouldUseProfilePicture:shouldUseFriendProfilePicture:] */

void FUN_108ffadf8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffca8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
  }
  return;
}



/* Entry: 108ffae58; end: 108ffae7b; -[SCBitmojiAvatarViewModelConfiguration copyWithZone:] */

undefined8 FUN_108ffae58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffae7c; end: 108ffaedf; -[SCBitmojiAvatarViewModelConfiguration hash] */

ulong * FUN_108ffae7c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 10) == param_3[10]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 108ffaee0; end: 108ffaf87; -[SCBitmojiAvatarViewModelConfiguration isEqual:] */

bool FUN_108ffaee0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 10) == *(char *)(param_3 + 10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108ffaf88; end: 108ffaf8f; -[SCBitmojiAvatarViewModelConfiguration shouldUsePlaceholderSilhouette] */

undefined1 FUN_108ffaf88(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ffaf90; end: 108ffaf97; -[SCBitmojiAvatarViewModelConfiguration shouldUseProfilePicture] */

undefined1 FUN_108ffaf90(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108ffaf98; end: 108ffaf9f; -[SCBitmojiAvatarViewModelConfiguration shouldUseFriendProfilePicture] */

undefined1 FUN_108ffaf98(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108ffafa0; end: 108ffafbb; +[SCBitmojiAvatarViewModelConfigurationBuilder bitmojiAvatarViewModelConfiguration] */

void FUN_108ffafa0(void)

{
  _objc_alloc_init(PTR_PTR_1126dce28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ffafbc; end: 108ffb093; +[SCBitmojiAvatarViewModelConfigurationBuilder bitmojiAvatarViewModelConfigurationFromExistingBitmojiAvatarViewModelConfiguration:] */

void FUN_108ffafbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126dce28;
  _objc_retain(param_3);
  func_0x00010bf1ae40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2354c0(param_3);
  puVar3 = puVar1;
  func_0x00010c2b8d20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c235500(param_3);
  puVar4 = puVar3;
  func_0x00010c2b8d40(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c235340(param_3);
  _objc_release(param_3);
  puVar5 = puVar4;
  func_0x00010c2b8d00(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108ffb094; end: 108ffb0cb; -[SCBitmojiAvatarViewModelConfigurationBuilder build] */

void FUN_108ffb094(void)

{
  _objc_alloc(PTR_PTR_1126c25d0);
  func_0x00010c0462c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ffb0cc; end: 108ffb0d3; -[SCBitmojiAvatarViewModelConfigurationBuilder withShouldUsePlaceholderSilhouette:] */

void FUN_108ffb0cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108ffb0d4; end: 108ffb0db; -[SCBitmojiAvatarViewModelConfigurationBuilder withShouldUseProfilePicture:] */

void FUN_108ffb0d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108ffb0dc; end: 108ffb0e3; -[SCBitmojiAvatarViewModelConfigurationBuilder withShouldUseFriendProfilePicture:] */

void FUN_108ffb0dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108ffb0e4; end: 108ffb24f; -[SCBitmojiAvatarViewModelSnapchatterInfo initWithUserId:username:displayName:bitmojiAvatarId:bitmojiSelfieId:birthdate:] */

undefined1 *
FUN_108ffb0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ffcb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ffb250; end: 108ffb273; -[SCBitmojiAvatarViewModelSnapchatterInfo copyWithZone:] */

undefined8 FUN_108ffb250(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ffb274; end: 108ffb317; -[SCBitmojiAvatarViewModelSnapchatterInfo hash] */

undefined8 * FUN_108ffb274(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108ffb3f8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108ffb404;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_108ffb404;
                }
                goto LAB_108ffb3f8;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108ffb404:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108ffb318; end: 108ffb41f; -[SCBitmojiAvatarViewModelSnapchatterInfo isEqual:] */

long FUN_108ffb318(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ffb3f8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ffb404;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_108ffb404;
                }
                goto LAB_108ffb3f8;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ffb404:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ffb420; end: 108ffb427; -[SCBitmojiAvatarViewModelSnapchatterInfo userId] */

undefined8 FUN_108ffb420(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ffb428; end: 108ffb42f; -[SCBitmojiAvatarViewModelSnapchatterInfo username] */

undefined8 FUN_108ffb428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ffb430; end: 108ffb437; -[SCBitmojiAvatarViewModelSnapchatterInfo displayName] */

undefined8 FUN_108ffb430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ffb438; end: 108ffb43f; -[SCBitmojiAvatarViewModelSnapchatterInfo bitmojiAvatarId] */

undefined8 FUN_108ffb438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ffb440; end: 108ffb447; -[SCBitmojiAvatarViewModelSnapchatterInfo bitmojiSelfieId] */

undefined8 FUN_108ffb440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ffb448; end: 108ffb44f; -[SCBitmojiAvatarViewModelSnapchatterInfo birthdate] */

undefined8 FUN_108ffb448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


