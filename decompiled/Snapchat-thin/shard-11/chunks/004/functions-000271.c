/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108531508; end: 108531597; -[SCDiscoverFeedQueryParameters initWithFeedType:pageSessionId:isPresentingUnderChat:] */

undefined1 *
FUN_108531508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fcbc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108531598; end: 1085315bb; -[SCDiscoverFeedQueryParameters copyWithZone:] */

undefined8 FUN_108531598(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1085315bc; end: 10853162b; -[SCDiscoverFeedQueryParameters hash] */

undefined8 * FUN_1085315bc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1085316c0;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(char *)((long)puVar2 + 8) != param_3[8])))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_1085316c0;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_1085316c0;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_1085316c0:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10853162c; end: 1085316db; -[SCDiscoverFeedQueryParameters isEqual:] */

long FUN_10853162c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1085316c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_1085316c0;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_1085316c0;
    }
  }
  lVar3 = 1;
LAB_1085316c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1085316dc; end: 1085316e3; -[SCDiscoverFeedQueryParameters feedType] */

undefined8 FUN_1085316dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085316e4; end: 1085316eb; -[SCDiscoverFeedQueryParameters pageSessionId] */

undefined8 FUN_1085316e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085316ec; end: 1085316f3; -[SCDiscoverFeedQueryParameters isPresentingUnderChat] */

undefined1 FUN_1085316ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1085316f4; end: 1085316ff; -[SCDiscoverFeedQueryParameters .cxx_destruct] */

void FUN_1085316f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108531700; end: 1085317e7; -[SCDiscoverFeedStoriesRequestQueryParameters initWithFeedTypes:feedTypeToNumStories:pageSessionId:pageType:] */

undefined1 *
FUN_108531700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126fcbc8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085317e8; end: 10853180b; -[SCDiscoverFeedStoriesRequestQueryParameters copyWithZone:] */

undefined8 FUN_1085317e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10853180c; end: 10853188f; -[SCDiscoverFeedStoriesRequestQueryParameters hash] */

undefined8 * FUN_10853180c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108531938:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108531944;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_108531944;
          }
          goto LAB_108531938;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108531944:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108531890; end: 10853195f; -[SCDiscoverFeedStoriesRequestQueryParameters isEqual:] */

long FUN_108531890(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108531938:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108531944;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108531944;
          }
          goto LAB_108531938;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108531944:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108531960; end: 108531967; -[SCDiscoverFeedStoriesRequestQueryParameters feedTypes] */

undefined8 FUN_108531960(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108531968; end: 10853196f; -[SCDiscoverFeedStoriesRequestQueryParameters feedTypeToNumStories] */

undefined8 FUN_108531968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108531970; end: 108531977; -[SCDiscoverFeedStoriesRequestQueryParameters pageSessionId] */

undefined8 FUN_108531970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108531978; end: 10853197f; -[SCDiscoverFeedStoriesRequestQueryParameters pageType] */

undefined8 FUN_108531978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108531980; end: 1085319bb; -[SCDiscoverFeedStoriesRequestQueryParameters .cxx_destruct] */

void FUN_108531980(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085319bc; end: 1085319cb; -[SCDiscoverRetryTimer initWithRetryPolicy:callbackQueue:callbackBlock:] */

void FUN_1085319bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c040010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithRetryPolicy_scheduleFirs_1125eda00,param_3,0,param_4,param_5);
  return;
}



/* Entry: 1085319cc; end: 108531bcb; -[SCDiscoverRetryTimer initWithRetryPolicy:scheduleFirstAttemptAsRetry:callbackQueue:callbackBlock:] */

undefined8 *
FUN_1085319cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126fcbd0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[2] = param_4 & 0xffffffff;
    uVar2 = puVar1[4];
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0bef80(uVar2);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108531bcc; end: 108531c1b;  */

void FUN_108531bcc(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 1;
  return;
}



/* Entry: 108531c1c; end: 108531ebb; -[SCDiscoverRetryTimer scheduleNextAttempt] */

bool FUN_108531c1c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 < uVar2) {
    lVar1 = uVar3 + 1;
    *(long *)(param_1 + 0x10) = lVar1;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    dVar10 = 0.0;
    if (1 < lVar1) {
      puStack_118 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      uStack_68 = 0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      uStack_98 = 0x108531ff4;
      puStack_90 = &UNK_110a51e50;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x108532004;
      puStack_c0 = &UNK_110a51e80;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_108532020;
      puStack_f0 = &UNK_110a51e80;
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_108532058;
      puStack_120 = &UNK_110a51e80;
      lStack_110 = lVar1;
      puStack_e8 = puStack_118;
      lStack_e0 = lVar1;
      puStack_b8 = puStack_118;
      lStack_b0 = lVar1;
      puStack_88 = puStack_118;
      puStack_78 = puStack_118;
      func_0x00010c0bef80(uVar6);
      dVar10 = (double)puStack_78[3];
      __Block_object_dispose(&uStack_80,8);
    }
    _objc_release(uVar6);
    _objc_initWeak(&puStack_d8,param_1);
    dVar8 = ABS(dVar10);
    dVar9 = ABS(dVar10 + 0.0) * 2.220446049250313e-16;
    bVar4 = true;
    if ((2.2250738585072014e-308 <= dVar8) && (bVar4 = false, !NAN(dVar8) && !NAN(dVar9))) {
      bVar4 = dVar8 < dVar9;
    }
    if (bVar4) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_108531ebc;
      puStack_148 = &UNK_1108434b0;
      puVar7 = auStack_140;
      _objc_copyWeak(puVar7,&puStack_d8);
      func_0x000107c27d8c(uVar6,&puStack_160);
    }
    else {
      puVar5 = PTR_PTR_1126ae888;
      _objc_alloc();
      puVar7 = auStack_168;
      _objc_copyWeak(puVar7,&puStack_d8);
      func_0x00010c0522e0(dVar10);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar5;
      _objc_release(uVar6);
    }
    _objc_destroyWeak(puVar7);
    _objc_destroyWeak(&puStack_d8);
  }
  return uVar3 < uVar2;
}



/* Entry: 108531ebc; end: 108531f13;  */

void FUN_108531ebc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0b840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108531f14; end: 108531f57; -[SCDiscoverRetryTimer dealloc] */

void FUN_108531f14(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00();
  puStack_28 = PTR_PTR_1126fcbd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108531f58; end: 108531f8f; -[SCDiscoverRetryTimer invalidate] */

void FUN_108531f58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108531f90; end: 108531fa7; -[SCDiscoverRetryTimer _executeCallback] */

void FUN_108531f90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108531fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    return;
  }
  return;
}



/* Entry: 108531fa8; end: 108531fef; -[SCDiscoverRetryTimer .cxx_destruct] */

void FUN_108531fa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108531ff0; end: 10853201f;  */

void FUN_108531ff0(void)

{
  return;
}



/* Entry: 108532020; end: 108532057;  */

void FUN_108532020(undefined8 param_1,long param_2)

{
  _pow(param_1,(double)(*(long *)(param_2 + 0x28) + -1));
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = param_1;
  return;
}



/* Entry: 108532058; end: 1085320af;  */

void FUN_108532058(double param_1,long param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)(*(long *)(param_2 + 0x28) + -1);
  _exp2();
  iVar1 = (int)dVar2;
  _arc4random_uniform();
  *(double *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = param_1 * (double)(iVar1 + 1);
  return;
}



/* Entry: 1085320b0; end: 10853211b; +[SCDiscoverRetryPolicy arithmeticalBackoffWithExponentialJitterWithRetryInterval:maxRetryCount:] */

void FUN_1085320b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0dc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  *(undefined8 *)(puVar2 + 0x40) = param_1;
  *(undefined8 *)(puVar2 + 0x48) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10853211c; end: 108532187; +[SCDiscoverRetryPolicy arithmeticalBackoffWithRetryInterval:maxRetryCount:] */

void FUN_10853211c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0dc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108532188; end: 1085321f3; +[SCDiscoverRetryPolicy equallyIntervalWithRetryInterval:maxRetryCount:] */

void FUN_108532188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0dc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085321f4; end: 10853225f; +[SCDiscoverRetryPolicy exponentialBackoffWithBaseRetryInterval:maxRetryCount:] */

void FUN_1085321f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0dc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108532260; end: 1085322a7; +[SCDiscoverRetryPolicy noRetry] */

void FUN_108532260(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0dc8;
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



/* Entry: 1085322a8; end: 1085324e7; -[SCDiscoverRetryPolicy initWithCoder:] */

undefined8 * FUN_1085322a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong unaff_x21;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puStack_70 = PTR_PTR_1126fcbd8;
  puVar1 = &uStack_78;
  uStack_78 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) {
          uVar2 = unaff_x21;
          func_0x00010c0720c0();
          if ((uVar2 & 1) == 0) {
            uVar2 = unaff_x21;
            func_0x00010c0720c0();
            if ((uVar2 & 1) == 0) goto LAB_108532474;
            uVar4 = 4;
            lVar5 = 0x48;
            lVar6 = 0x40;
          }
          else {
            uVar4 = 3;
            lVar5 = 0x38;
            lVar6 = 0x30;
          }
        }
        else {
          uVar4 = 2;
          lVar5 = 0x28;
          lVar6 = 0x20;
        }
      }
      else {
        uVar4 = 1;
        lVar5 = 0x18;
        lVar6 = 0x10;
      }
      func_0x00010bf66da0(param_4);
      *(undefined8 *)((long)puVar1 + lVar6) = param_1;
      uVar2 = param_4;
      func_0x00010bf66f40();
      *(ulong *)((long)puVar1 + lVar5) = uVar2;
    }
    else {
      uVar4 = 0;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_108532474:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 1085324e8; end: 10853250b; -[SCDiscoverRetryPolicy copyWithZone:] */

undefined8 FUN_1085324e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10853250c; end: 10853263f; -[SCDiscoverRetryPolicy encodeWithCoder:] */

void FUN_10853250c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if (lVar2 != 1) goto LAB_10853261c;
      ppuVar3 = &PTR____CFConstantStringClassReference_110ee1278;
      ppuVar4 = &PTR____CFConstantStringClassReference_110ee12b8;
      lVar5 = 0x18;
      lVar2 = 0x10;
      ppuVar1 = &PTR____CFConstantStringClassReference_110ee1298;
      goto LAB_1085325ec;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110ee1258;
  }
  else {
    if (lVar2 == 4) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ee1398;
      ppuVar4 = &PTR____CFConstantStringClassReference_110ee13d8;
      lVar5 = 0x48;
      lVar2 = 0x40;
      ppuVar1 = &PTR____CFConstantStringClassReference_110ee13b8;
    }
    else if (lVar2 == 3) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ee1338;
      ppuVar4 = &PTR____CFConstantStringClassReference_110ee1378;
      lVar5 = 0x38;
      lVar2 = 0x30;
      ppuVar1 = &PTR____CFConstantStringClassReference_110ee1358;
    }
    else {
      if (lVar2 != 2) goto LAB_10853261c;
      ppuVar3 = &PTR____CFConstantStringClassReference_110ee12d8;
      ppuVar4 = &PTR____CFConstantStringClassReference_110ee1318;
      lVar5 = 0x28;
      lVar2 = 0x20;
      ppuVar1 = &PTR____CFConstantStringClassReference_110ee12f8;
    }
LAB_1085325ec:
    func_0x00010bf92e80(*(undefined8 *)(param_1 + lVar2),param_3,param_2,ppuVar1);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + lVar5),ppuVar4);
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_10853261c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108532640; end: 10853272b; -[SCDiscoverRetryPolicy hash] */

void FUN_108532640(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_58 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_48 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_38 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_28 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c3191c(&uStack_60,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126fcbd8;
  puStack_90 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10853272c; end: 10853276f; -[SCDiscoverRetryPolicy internalInit] */

void FUN_10853272c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fcbd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108532770; end: 10853290b; -[SCDiscoverRetryPolicy isEqual:] */

bool FUN_108532770(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
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
      if (((uVar3 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
          ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) {
        dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar4 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                      2.220446049250313e-16;
              if (dVar4 <= 2.2250738585072014e-308) {
                dVar4 = 2.2250738585072014e-308;
              }
              bVar1 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40)) < dVar4;
              goto LAB_1085328b8;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_1085328b8:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10853290c; end: 108532a3b; -[SCDiscoverRetryPolicy matchNoRetry:equallyInterval:arithmeticalBackoff:exponentialBackoff:arithmeticalBackoffWithExponentialJitter:] */

void FUN_10853290c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_1085329f0;
    }
    if ((lVar2 != 1) || (param_4 == 0)) goto LAB_1085329f0;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  else if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_1085329f0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else if (lVar2 == 3) {
    if (param_6 == 0) goto LAB_1085329f0;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  else {
    if ((lVar2 != 4) || (param_7 == 0)) goto LAB_1085329f0;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    pcVar3 = *(code **)(param_7 + 0x10);
    lVar2 = param_7;
  }
  (*pcVar3)(uVar4,lVar2,uVar1);
LAB_1085329f0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108532a3c; end: 108532aa3; +[SCFrontierFulfillStoryAdsRequest descriptor] */

void FUN_108532a3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c3b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba67a0,
                        &PTR____CFConstantStringClassReference_110ee13f8,&PTR_DAT_1132655b0,
                        &PTR_s_requestId_1132656a8,9,0x48,0x1c);
    puRam000000011372c3b0 = puVar1;
  }
  return;
}



/* Entry: 108532aa4; end: 108532b0b; +[SCFrontierFulfillStoryAdsResponse descriptor] */

void FUN_108532aa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c3b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba67f0,
                        &PTR____CFConstantStringClassReference_110ee1418,&PTR_DAT_1132655b0,
                        &PTR_s_requestId_1132655c8,3,0x20,0x1c);
    puRam000000011372c3b8 = puVar1;
  }
  return;
}



/* Entry: 108532b0c; end: 108532b73; +[SCFrontierStoryAdsSignals descriptor] */

void FUN_108532b0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c3c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba6840,
                        &PTR____CFConstantStringClassReference_110ee1438,&PTR_DAT_1132655b0,
                        &PTR_s_compositeStoryId_113265628,4,0x18,0x1c);
    puRam000000011372c3c0 = puVar1;
  }
  return;
}



/* Entry: 108532b74; end: 108532b97;  */

undefined8 FUN_108532b74(long param_1)

{
  if (param_1 + 1U < 0x1c) {
    return *(undefined8 *)(&UNK_10df34cc8 + (param_1 + 1U) * 8);
  }
  return 2;
}



/* Entry: 108532b98; end: 108532d1f;  */

undefined8 FUN_108532b98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  func_0x00010c0c1320(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108532d20; end: 108532db7;  */

void FUN_108532d20(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xc;
  if (param_2 != 3) {
    uVar1 = 2;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 108532db8; end: 108532eff;  */

undefined8 FUN_108532db8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  func_0x00010c0c1340(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108532f00; end: 108532f3b;  */

void FUN_108532f00(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010c27dd80();
  uVar1 = 0xc;
  if (param_2 != 3) {
    uVar1 = 0;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 108532f3c; end: 108532f8b;  */

void FUN_108532f3c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 6;
  return;
}



/* Entry: 108532f8c; end: 1085330a7;  */

undefined8 FUN_108532f8c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  _objc_retain(param_1);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010bf97e80(param_1);
  lVar2 = 3;
  if (*(char *)(puStack_58 + 3) == '\0') {
    lVar2 = 1;
  }
  lVar1 = 2;
  if (*(char *)(puStack_58 + 3) == '\0') {
    lVar1 = 0;
  }
  if (*(char *)(puStack_38 + 3) == '\0') {
    lVar2 = lVar1;
  }
  __Block_object_dispose(&uStack_60,8);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  uVar3 = *(undefined8 *)(&UNK_10df34da8 + lVar2 * 8);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1085330a8; end: 10853322f;  */

undefined8 FUN_1085330a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  func_0x00010c0c1320(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108533230; end: 1085332db;  */

void FUN_108533230(long param_1,ulong param_2)

{
  if (param_2 < 4) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
         *(undefined8 *)(&UNK_10df34dc8 + param_2 * 8);
  }
  return;
}



/* Entry: 1085332dc; end: 1085333ff;  */

undefined8 FUN_1085332dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  func_0x00010c0c1340(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108533400; end: 1085334f3;  */

void FUN_108533400(long param_1,long param_2)

{
  func_0x00010c27dd80();
  if (param_2 - 1U < 3) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
         *(undefined8 *)(&UNK_10df34e20 + (param_2 - 1U) * 8);
  }
  return;
}



/* Entry: 1085334f4; end: 10853351b;  */

void FUN_1085334f4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 6;
  return;
}



/* Entry: 10853351c; end: 1085335af;  */

undefined8 FUN_10853351c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c27dd80();
  if (lVar2 < 6) {
    if (lVar2 == 0) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = 0xd;
      if (lVar2 == 1) {
        lVar2 = param_1;
        func_0x00010c1143e0();
        uVar3 = 0x2d;
        if (lVar2 != 3) {
          uVar3 = 0x10;
        }
      }
    }
  }
  else {
    uVar3 = 0x2f;
    if (lVar2 != 10) {
      uVar3 = 0xd;
    }
    uVar1 = 0x28;
    if (lVar2 != 7) {
      uVar1 = uVar3;
    }
    uVar3 = 0x21;
    if (lVar2 != 6) {
      uVar3 = uVar1;
    }
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1085335b0; end: 10853389f;  */

undefined * FUN_1085335b0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar5 = param_1;
  func_0x00010c08fa60();
  if (uVar5 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar5 = param_1;
    _objc_retainAutorelease(param_1);
    func_0x00010bdc3520();
    uVar2 = uVar5;
    _strlen();
    _CC_SHA256(uVar5,uVar2,auStack_68);
    puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25d900();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = 0;
    do {
      func_0x00010bf06ba0(puVar4);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x20);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain();
    uVar5 = param_1;
    func_0x00010bf6ef00();
    if (uVar5 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      uVar5 = 0;
      puVar4 = (undefined *)0x0;
      do {
        uVar2 = param_1;
        func_0x00010bf6eee0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c296de0();
        _objc_release(uVar2);
        puVar1 = puVar4;
        if ((int)uVar3 == 1) {
          puVar1 = (undefined *)((ulong)puVar4 | 1);
        }
        puVar4 = (undefined *)((ulong)puVar4 | 2);
        if ((int)uVar3 != 2) {
          puVar4 = puVar1;
        }
        uVar5 = uVar5 + 1;
        uVar2 = param_1;
        func_0x00010bf6ef00();
      } while (uVar5 < uVar2);
    }
    _objc_release(param_1);
    return puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 1085338a0; end: 1085338ff;  */

void FUN_1085338a0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_10853959c();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    FUN_108539930();
    if ((int)uVar1 == 0) goto LAB_1085338f0;
    lVar2 = 0x28;
  }
  else {
    lVar2 = 0x20;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + lVar2) + 8) + 0x18) = 1;
LAB_1085338f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108533900; end: 10853395f; -[SCStoriesSnapPlaybackMetadata xLogObjectInfo] */

void FUN_108533900(undefined *param_1)

{
  undefined *puVar1;
  
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108533960; end: 108533c5b; -[SCStoriesOperaPlaybackSequence xLogObjectInfo] */

void FUN_108533960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108533c5c;
  puStack_68 = &UNK_1108d3b10;
  _objc_retain(puVar1);
  puStack_60 = puVar1;
  _objc_retain(puVar2);
  puStack_b0 = puVar3;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x108533e28;
  puStack_98 = &UNK_110a51eb0;
  puStack_58 = puVar2;
  _objc_retain(puVar1);
  puStack_90 = puVar1;
  _objc_retain(puVar2);
  puStack_e0 = puVar3;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x108533ff4;
  puStack_c8 = &UNK_110a51ee0;
  puStack_88 = puVar2;
  _objc_retain(puVar1);
  puStack_c0 = puVar1;
  _objc_retain(puVar2);
  puStack_110 = puVar3;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1085341c0;
  puStack_f8 = &UNK_110959d48;
  puStack_b8 = puVar2;
  _objc_retain(puVar1);
  puStack_f0 = puVar1;
  _objc_retain(puVar2);
  puStack_140 = puVar3;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x10853438c;
  puStack_128 = &UNK_110993e08;
  puStack_e8 = puVar2;
  _objc_retain(puVar1);
  puStack_120 = puVar1;
  _objc_retain(puVar2);
  puStack_170 = puVar3;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x108534558;
  puStack_158 = &UNK_110a51f10;
  puStack_118 = puVar2;
  _objc_retain(puVar1);
  puStack_150 = puVar1;
  _objc_retain(puVar2);
  puStack_1a0 = puVar3;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x108534724;
  puStack_188 = &UNK_110a51f40;
  puStack_148 = puVar2;
  _objc_retain(puVar1);
  puStack_180 = puVar1;
  _objc_retain(puVar2);
  puStack_1d0 = puVar3;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x1085348f0;
  puStack_1b8 = &UNK_110a51f70;
  puStack_1b0 = puVar1;
  puStack_1a8 = puVar2;
  puStack_178 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  func_0x00010c0bdf40(param_1,param_2,&puStack_80,&puStack_b0,&puStack_e0,&puStack_110,&puStack_140,
                      &puStack_170,&puStack_1a0,&puStack_1d0);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ee1518);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_178);
  _objc_release(puStack_180);
  _objc_release(puStack_148);
  _objc_release(puStack_150);
  _objc_release(puStack_118);
  _objc_release(puStack_120);
  _objc_release(puStack_e8);
  _objc_release(puStack_f0);
  _objc_release(puStack_b8);
  _objc_release(puStack_c0);
  _objc_release(puStack_88);
  _objc_release(puStack_90);
  _objc_release(puStack_58);
  _objc_release(puStack_60);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108533c5c; end: 108534a7f;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000108534474 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined ** FUN_108533c5c(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2;
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar9);
  }
  else {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(ppuVar1);
  ppuVar2 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (ppuVar1 != (undefined **)0x0) {
    ppuVar10 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(ppuVar2);
      }
      lVar7 = *(long *)((long)ppuVar10 * 8);
      lVar3 = lVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar8);
        _objc_release(lVar7);
      }
      ppuVar10 = (undefined **)((long)ppuVar10 + 1);
    } while (ppuVar1 != ppuVar10);
    ppuVar1 = ppuVar2;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar4;
  _objc_retain(ppuVar4);
  ppuVar2 = ppuVar4;
  func_0x00010bf622e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_2[4]);
    _objc_release(puVar9);
  }
  else {
    func_0x00010c1d0640(param_2[4]);
  }
  _objc_release(ppuVar2);
  ppuVar10 = ppuVar4;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar10;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (ppuVar2 != (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(ppuVar10);
      }
      lVar7 = *(long *)((long)ppuVar11 * 8);
      lVar3 = lVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar9 = param_2[5];
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(lVar7);
      }
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
    } while (ppuVar2 != ppuVar11);
    ppuVar2 = ppuVar10;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar1;
  _objc_retain(ppuVar1);
  ppuVar10 = ppuVar1;
  func_0x00010c0ee360();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar4[4]);
    _objc_release(puVar9);
  }
  else {
    func_0x00010c1d0640(ppuVar4[4]);
  }
  _objc_release(ppuVar10);
  ppuVar11 = ppuVar1;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar11;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (ppuVar10 != (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(ppuVar11);
      }
      lVar7 = *(long *)((long)ppuVar12 * 8);
      lVar3 = lVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar9 = ppuVar4[5];
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(lVar7);
      }
      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
    } while (ppuVar10 != ppuVar12);
    ppuVar10 = ppuVar11;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar2;
  _objc_retain(ppuVar2);
  ppuVar10 = ppuVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar1[4]);
    _objc_release(puVar9);
  }
  else {
    func_0x00010c1d0640(ppuVar1[4]);
  }
  _objc_release(ppuVar10);
  ppuVar11 = ppuVar2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar11;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (ppuVar10 != (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(ppuVar11);
      }
      lVar7 = *(long *)((long)ppuVar12 * 8);
      lVar3 = lVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar9 = ppuVar1[5];
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(lVar7);
      }
      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
    } while (ppuVar10 != ppuVar12);
    ppuVar10 = ppuVar11;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar4;
  _objc_retain(ppuVar4);
  ppuVar10 = ppuVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar2[4]);
    _objc_release(puVar9);
  }
  else {
    func_0x00010c1d0640(ppuVar2[4]);
  }
  _objc_release(ppuVar10);
  ppuVar11 = ppuVar4;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar11;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (ppuVar10 != (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(ppuVar11);
      }
      lVar7 = *(long *)((long)ppuVar12 * 8);
      lVar3 = lVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar9 = ppuVar2[5];
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(lVar7);
      }
      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
    } while (ppuVar10 != ppuVar12);
    ppuVar10 = ppuVar11;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar1;
  _objc_retain(ppuVar1);
  ppuVar10 = ppuVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar4[4]);
    _objc_release(puVar9);
  }
  else {
    func_0x00010c1d0640(ppuVar4[4]);
  }
  _objc_release(ppuVar10);
  ppuVar11 = ppuVar1;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar11;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (ppuVar10 != (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(ppuVar11);
      }
      lVar7 = *(long *)((long)ppuVar12 * 8);
      lVar3 = lVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar9 = ppuVar4[5];
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(lVar7);
      }
      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
    } while (ppuVar10 != ppuVar12);
    ppuVar10 = ppuVar11;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar2;
  _objc_retain(ppuVar2);
  ppuVar10 = ppuVar2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar1[4]);
    _objc_release(puVar9);
  }
  else {
    func_0x00010c1d0640(ppuVar1[4]);
  }
  _objc_release(ppuVar10);
  ppuVar11 = ppuVar2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar11;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (ppuVar10 != (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(ppuVar11);
      }
      lVar7 = *(long *)((long)ppuVar12 * 8);
      lVar3 = lVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar9 = ppuVar1[5];
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(lVar7);
      }
      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
    } while (ppuVar10 != ppuVar12);
    ppuVar10 = ppuVar11;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar4);
  ppuVar1 = ppuVar4;
  func_0x00010c259cc0(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar2[4]);
  _objc_release(ppuVar1);
  ppuVar10 = ppuVar4;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar10;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (ppuVar1 != (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(ppuVar10);
      }
      lVar7 = *(long *)((long)ppuVar11 * 8);
      lVar3 = lVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar9 = ppuVar2[5];
        func_0x00010bf3cf60(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(lVar7);
      }
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
    } while (ppuVar1 != ppuVar11);
    ppuVar1 = ppuVar10;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  if ((long)ppuVar4 + 1U < 0x6d) {
    return (undefined **)(&PTR_PTR_110a51fa0)[(long)ppuVar4 + 1U];
  }
  return &PTR____CFConstantStringClassReference_110ee1538;
}



/* Entry: 108534a80; end: 108534aeb;  */

undefined ** FUN_108534a80(long param_1)

{
  if (param_1 + 1U < 0x6d) {
    return (undefined **)(&PTR_PTR_110a51fa0)[param_1 + 1U];
  }
  return &PTR____CFConstantStringClassReference_110ee1538;
}



/* Entry: 108534aec; end: 108534b6f;  */

void FUN_108534aec(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_PTR_110cab530;
  if (param_1 < 0x2d) {
    if (param_1 == 0x2b) {
      ppuVar1 = &PTR_PTR_110cab560;
      goto LAB_108534b48;
    }
    if (param_1 == 0x2c) {
      ppuVar1 = &PTR_PTR_110cab538;
      goto LAB_108534b48;
    }
  }
  else {
    if (param_1 == 0x5b) {
      ppuVar1 = &PTR_PTR_110cab5f0;
      goto LAB_108534b48;
    }
    if (param_1 == 0x53) goto LAB_108534b48;
    if (param_1 == 0x2d) {
      ppuVar1 = &PTR_PTR_110cab550;
      goto LAB_108534b48;
    }
  }
  ppuVar1 = &PTR_PTR_110cab598;
LAB_108534b48:
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108534b70; end: 108534ba3;  */

undefined8 FUN_108534b70(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_1) {
  case 0xffffffffffffffff:
  case 0:
  case 1:
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0x10:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108534ba4; end: 1085355cf;  */

void FUN_108534ba4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b25c0;
  _objc_opt_new();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b25e0;
  _objc_opt_new();
  uVar14 = param_2;
  func_0x00010c26f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010c071060();
  uVar4 = param_2;
  func_0x00010c26f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  uVar5 = param_2;
  func_0x00010c0c5340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c27dd80();
  FUN_10853d77c(param_1,uVar3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar14);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_2);
  puVar13 = PTR_PTR_1126b25c8;
  _objc_alloc_init(PTR_PTR_1126b25c8);
  uVar14 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c21acc0(puVar13);
  _objc_release(uVar14);
  uVar14 = param_2;
  func_0x00010bf30da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed100();
  _objc_release(uVar14);
  func_0x00010c1d6440(puVar13);
  uVar14 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar14);
  uVar14 = param_2;
  func_0x00010c0c5340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar14);
  uVar14 = uVar4;
  FUN_10853d600(uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195c80(puVar13);
  _objc_release(uVar14);
  uVar14 = uVar4;
  FUN_10853d6b8(uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195ca0(puVar13);
  _objc_release(uVar14);
  uVar14 = param_2;
  func_0x00010c26f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  func_0x00010c1c45e0(puVar13);
  _objc_release(uVar14);
  puVar7 = PTR_PTR_1126bcf20;
  _objc_opt_new(PTR_PTR_1126bcf20);
  func_0x00010c1c4aa0();
  func_0x00010c1c4880(puVar13);
  _objc_retain(puVar13);
  _objc_retain(param_2);
  uVar14 = param_2;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf529e0();
  _objc_release(uVar14);
  if (uVar3 == 0) goto LAB_10853524c;
  uVar14 = param_2;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c067fc0();
  _objc_release(uVar3);
  _objc_release(uVar14);
  if ((long)uVar6 < 4) {
    if (uVar6 == 1) {
      puVar8 = PTR_PTR_1126affd8;
      _objc_alloc_init(PTR_PTR_1126affd8);
      func_0x00010c1c4d00(puVar13);
    }
    else if (uVar6 == 2) {
      puVar8 = PTR_PTR_1126affd0;
      _objc_alloc_init(PTR_PTR_1126affd0);
      func_0x00010c1c4d40(puVar13);
    }
    else {
      if (uVar6 != 3) goto LAB_10853501c;
      puVar8 = PTR_PTR_1126d8d30;
      _objc_alloc_init(PTR_PTR_1126d8d30);
      func_0x00010c1c4d80(puVar13);
    }
LAB_108535014:
    _objc_release(puVar8);
  }
  else {
    if (5 < (long)uVar6) {
      if (uVar6 == 6) {
        puVar8 = PTR_PTR_1126d8d40;
        _objc_alloc_init(PTR_PTR_1126d8d40);
        func_0x00010c191d40(puVar13);
      }
      else {
        if (uVar6 != 7) goto LAB_10853501c;
        puVar8 = PTR_PTR_1126d8d48;
        _objc_alloc_init(PTR_PTR_1126d8d48);
        func_0x00010c1c4d60(puVar13);
      }
      goto LAB_108535014;
    }
    if (uVar6 == 4) {
      puVar8 = PTR_PTR_1126d8d38;
      _objc_alloc_init(PTR_PTR_1126d8d38);
      func_0x00010c1c4da0(puVar13);
      goto LAB_108535014;
    }
    if (uVar6 == 5) {
      puVar8 = PTR_PTR_1126c8210;
      _objc_alloc_init(PTR_PTR_1126c8210);
      func_0x00010c1c4ce0(puVar13);
      goto LAB_108535014;
    }
  }
LAB_10853501c:
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar14 = param_2;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf529e0();
  _objc_release(uVar14);
  if (1 < uVar3) {
    uVar14 = 1;
    do {
      uVar3 = param_2;
      func_0x00010c0c5b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010c067fc0();
      _objc_release(uVar6);
      _objc_release(uVar3);
      puVar10 = PTR_PTR_1126affc8;
      _objc_alloc_init();
      if ((long)uVar9 < 4) {
        if (uVar9 == 1) {
          puVar11 = PTR_PTR_1126affd8;
          _objc_alloc_init(PTR_PTR_1126affd8);
          func_0x00010c1c4d00(puVar10);
        }
        else if (uVar9 == 2) {
          puVar11 = PTR_PTR_1126affd0;
          _objc_alloc_init(PTR_PTR_1126affd0);
          func_0x00010c1c4d40(puVar10);
        }
        else {
          if (uVar9 != 3) goto LAB_1085351d4;
          puVar11 = PTR_PTR_1126d8d30;
          _objc_alloc_init(PTR_PTR_1126d8d30);
          func_0x00010c1c4d80(puVar10);
        }
LAB_1085351cc:
        _objc_release(puVar11);
      }
      else {
        if (5 < (long)uVar9) {
          if (uVar9 == 6) {
            puVar11 = PTR_PTR_1126d8d40;
            _objc_alloc_init(PTR_PTR_1126d8d40);
            func_0x00010c191d40(puVar10);
          }
          else {
            if (uVar9 != 7) goto LAB_1085351d4;
            puVar11 = PTR_PTR_1126d8d48;
            _objc_alloc_init(PTR_PTR_1126d8d48);
            func_0x00010c1c4d60(puVar10);
          }
          goto LAB_1085351cc;
        }
        if (uVar9 == 4) {
          puVar11 = PTR_PTR_1126d8d38;
          _objc_alloc_init(PTR_PTR_1126d8d38);
          func_0x00010c1c4da0(puVar10);
          goto LAB_1085351cc;
        }
        if (uVar9 == 5) {
          puVar11 = PTR_PTR_1126c8210;
          _objc_alloc_init(PTR_PTR_1126c8210);
          func_0x00010c1c4ce0(puVar10);
          goto LAB_1085351cc;
        }
      }
LAB_1085351d4:
      puVar11 = puVar10;
      func_0x00010c0ed200();
      if ((int)puVar11 != 0) {
        func_0x00010befa120(puVar8);
      }
      _objc_release(puVar10);
      uVar14 = uVar14 + 1;
      uVar3 = param_2;
      func_0x00010c0c5b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
    } while (uVar14 < uVar6);
  }
  puVar10 = puVar8;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    func_0x00010c165a40(puVar13);
  }
  _objc_release(puVar8);
LAB_10853524c:
  _objc_release(param_2);
  _objc_release(puVar13);
  puVar8 = PTR_PTR_1126b25d0;
  _objc_opt_new(PTR_PTR_1126b25d0);
  func_0x00010c1c4020();
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar13);
  _objc_release(param_2);
  func_0x00010befa120(puVar12);
  _objc_release(puVar8);
  func_0x00010c1dd6c0(puVar2);
  _objc_release(puVar12);
  _objc_release(param_2);
  func_0x00010c1dd3e0(puVar1);
  _objc_release(puVar2);
  uVar14 = param_2;
  func_0x00010befd0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010853e268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba8a0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar14 = param_2;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar14 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126b2378;
    _objc_alloc(PTR_PTR_1126b2378);
    uVar14 = param_2;
    func_0x00010bf4e860(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar12);
    _objc_release(uVar14);
  }
  uVar14 = param_2;
  func_0x00010befd0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010853e1b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar14);
  if (uVar4 != 0) {
    func_0x00010befa120(puVar2);
  }
  uVar14 = param_2;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010853e134();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar14);
  if (uVar5 != 0) {
    func_0x00010befa120(puVar2);
  }
  puVar13 = puVar2;
  func_0x00010bf529e0();
  if (puVar13 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126cf388;
    _objc_opt_new(PTR_PTR_1126cf388);
    func_0x00010c16b440();
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(param_2);
  func_0x00010c16b420(puVar1);
  _objc_release(puVar13);
  uVar14 = param_2;
  func_0x00010c0c5340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010c27dd80();
  uVar4 = param_2;
  func_0x00010c141c40(param_2);
  func_0x00010853e088(uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207640(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar14);
  puVar2 = PTR_PTR_1126cc780;
  _objc_retain(param_2);
  _objc_opt_new(puVar2);
  uVar14 = param_2;
  func_0x00010bf5b080(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar14;
  func_0x00010bf5b440(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar14);
  func_0x00010c16b8e0(puVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085355d0; end: 108535677;  */

bool FUN_1085355d0(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain();
  bVar1 = true;
  if (param_2 < 0x3a) {
    if ((1L << (param_2 & 0x3f) & 0x226380060800980U) != 0) goto LAB_10853565c;
    if (param_2 != 0x15) goto LAB_108535630;
    uVar2 = param_1;
    func_0x000109021ff0();
    uVar2 = uVar2 & 1;
joined_r0x000108535650:
    if (uVar2 != 0) goto LAB_10853565c;
  }
  else {
LAB_108535630:
    if (param_2 - 0x53 < 0x14) {
      uVar2 = 1L << (param_2 - 0x53 & 0x3f) & 0x82109;
      goto joined_r0x000108535650;
    }
  }
  bVar1 = param_2 == 0x67;
LAB_10853565c:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 108535678; end: 1085356d7;  */

undefined8 FUN_108535678(ulong param_1)

{
  if (((0x39 < param_1) || ((1L << (param_1 & 0x3f) & 0x226380060800100U) == 0)) &&
     ((0x13 < param_1 - 0x53 || ((1L << (param_1 - 0x53 & 0x3f) & 0x8a101U) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 1085356d8; end: 108535743;  */

undefined8 FUN_1085356d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  if ((param_2 - 0x49U < 0x1d) && ((1L << (param_2 - 0x49U & 0x3f) & 0x12000001U) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = param_1;
    FUN_1085355d0(param_1,param_2);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108535744; end: 1085357a3;  */

undefined8 FUN_108535744(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf90d20();
  _objc_release(param_1);
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    switch(param_2) {
    case 0xffffffffffffffff:
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
    case 7:
    case 9:
    case 10:
    case 0x10:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2a:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x34:
    case 0x35:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x42:
    case 0x43:
    case 0x45:
    case 0x46:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5c:
    case 0x5d:
    case 0x5f:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 1085357a4; end: 108535923;  */

void FUN_1085357a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108535924;
  uStack_40 = 0x108535934;
  uStack_38 = 0;
  func_0x00010c0bdf40(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108535924; end: 10853593b;  */

void FUN_108535924(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10853593c; end: 108535993;  */

void FUN_10853593c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108535994; end: 108535997;  */

void FUN_108535994(void)

{
  return;
}



/* Entry: 108535998; end: 1085359ef;  */

void FUN_108535998(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085359f0; end: 1085359f3;  */

void FUN_1085359f0(void)

{
  return;
}



/* Entry: 1085359f4; end: 108535a4b;  */

void FUN_1085359f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108535a4c; end: 108535a4f;  */

void FUN_108535a4c(void)

{
  return;
}



/* Entry: 108535a50; end: 108535aff;  */

void FUN_108535a50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108535b00; end: 108535cc7;  */

void FUN_108535b00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108535924;
  uStack_40 = 0x108535934;
  uStack_38 = 0;
  func_0x00010c0bdf40(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108535cc8; end: 108535ec7;  */

void FUN_108535cc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108535ec8; end: 108536077;  */

void FUN_108535ec8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108535924;
  uStack_40 = 0x108535934;
  uStack_38 = 0;
  func_0x00010c0bdf40(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108536078; end: 1085360b7;  */

void FUN_108536078(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085360b8; end: 108536147;  */

void FUN_1085360b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108536148; end: 108536187;  */

void FUN_108536148(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0ee360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108536188; end: 1085362a7;  */

void FUN_108536188(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085362a8; end: 1085362ab;  */

void FUN_1085362a8(void)

{
  return;
}



/* Entry: 1085362ac; end: 1085363cb;  */

void FUN_1085362ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085363cc; end: 1085364f7;  */

void FUN_1085363cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108535924;
  uStack_30 = 0x108535934;
  uStack_28 = 0;
  func_0x00010c0bdf40(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085364f8; end: 1085366ff;  */

void FUN_1085364f8(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_130;
    do {
      lVar6 = 0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(undefined8 *)(lStack_138 + lVar6 * 8);
        uStack_160 = 0;
        uStack_150 = 0x2020000000;
        uStack_148 = 0;
        puStack_158 = &uStack_160;
        func_0x00010bf0e700(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c1320();
        _objc_release(uVar4);
        bVar1 = *(byte *)(puStack_158 + 3);
        __Block_object_dispose(&uStack_160,8);
        if ((bVar1 & 1) != 0) goto LAB_108536690;
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
LAB_108536690:
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_2);
  return;
}



/* Entry: 108536700; end: 108536703;  */

void FUN_108536700(void)

{
  return;
}



/* Entry: 108536704; end: 108536767;  */

void FUN_108536704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108536768; end: 10853677b;  */

void FUN_108536768(void)

{
  return;
}



/* Entry: 10853677c; end: 1085367bb;  */

void FUN_10853677c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf622e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085367bc; end: 1085367d3;  */

void FUN_1085367bc(void)

{
  return;
}



/* Entry: 1085367d4; end: 10853699b;  */

void FUN_1085367d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108535924;
  uStack_40 = 0x108535934;
  uStack_38 = 0;
  func_0x00010c0bdf40(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10853699c; end: 108536b9b;  */

void FUN_10853699c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108536b9c; end: 108536c8b;  */

undefined1 FUN_108536b9c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bdf40(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108536c8c; end: 108536cbb;  */

void FUN_108536c8c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108536cbc; end: 108536da3;  */

undefined8 FUN_108536cbc(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bdf40(param_1);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return 1;
}


