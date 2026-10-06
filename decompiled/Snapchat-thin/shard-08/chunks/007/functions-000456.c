/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064867b4; end: 106486843;  */

void FUN_1064867b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  lVar2 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c064520(lVar1,param_3,lVar2);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  func_0x00010c1e11e0(param_1,lVar1,param_3,param_2);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106486844; end: 106486907;  */

void FUN_106486844(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1d1d00();
  _objc_release(lVar2);
  cVar1 = *(char *)(param_1 + 0x38);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  if (cVar1 != '\x01') {
    func_0x00010bf84b00(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfc1cc0(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064868d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106486908; end: 1064869e3; -[SCContextV2SwipeUpGestureTracker setPresentationAmount:] */

void FUN_106486908(double param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(double *)(param_2 + 0x18) = param_1;
  if (0.0 < param_1) {
    _objc_initWeak(auStack_38,param_2);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_2;
    func_0x00010bdec700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0a6c0(param_2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1064869e4; end: 106486a2f;  */

void FUN_1064869e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1e11e0(*(undefined8 *)(param_1 + 0x18));
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106486a30; end: 106486bef; -[SCContextV2SwipeUpGestureTracker _ensureSwipeUpVCExistsWithCompletion:source:] */

void FUN_106486a30(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c29c3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010bf16360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar3 == 0 && lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
    }
    else {
      _objc_storeWeak(param_1 + 0x10,lVar2);
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_4);
      _objc_retain(param_3);
      func_0x00010c10c300(lVar2);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106486bf0; end: 106486d17;  */

void FUN_106486bf0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,lVar1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1d2120();
    _objc_release(lVar2);
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfc1cc0();
    _objc_release(lVar2);
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c2651e0();
    _objc_release(lVar2);
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106486d18; end: 106486d53;  */

void FUN_106486d18(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec9400(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106486d54; end: 106486e0f; -[SCContextV2SwipeUpGestureTracker _swipeUpVCDidDismissViaSwipe:] */

void FUN_106486d54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1d2120();
    _objc_release(lVar1);
    _objc_storeWeak(param_1 + 0x10,0);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bdec700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2651c0(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106486e10; end: 106486f33; -[SCContextV2SwipeUpGestureTracker _createContextActionSourceWithActionType:] */

void FUN_106486e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  uVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4e140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4eb20();
  uVar5 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf4e140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf4eae0();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf4e140();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf4eb00();
  func_0x00010bff0a60(puVar1,param_2,param_3,uVar4,uVar7,uVar9,0xffffffffffffffff);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106486f34; end: 106486f4b; -[SCContextV2SwipeUpGestureTracker delegate] */

void FUN_106486f34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106486f4c; end: 106486f57; -[SCContextV2SwipeUpGestureTracker setDelegate:] */

void FUN_106486f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106486f58; end: 106486f6f; -[SCContextV2SwipeUpGestureTracker presentedViewController] */

void FUN_106486f58(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106486f70; end: 106486f7b; -[SCContextV2SwipeUpGestureTracker setPresentedViewController:] */

void FUN_106486f70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106486f7c; end: 106486f83; -[SCContextV2SwipeUpGestureTracker presentationAmount] */

undefined8 FUN_106486f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106486f84; end: 106486fab; -[SCContextV2SwipeUpGestureTracker .cxx_destruct] */

void FUN_106486f84(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106486fac; end: 1064872eb; -[SCContextV2SwipeUpViewController initWithSessionParams:logger:actionParams:operaPageObservable:composerRuntime:circumstanceEngine:cardViewFactory:operaNavigationStyle:boostCoordinator:bloopsInfoCardVCFactory:contextExperimentService:currentUserId:valdiRuntimeProvider:snapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106486fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126f1540;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112748428;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274842c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748430;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748434;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748438;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274843c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748440);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112748440) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112748444) = param_10;
    lVar4 = (long)_DAT_112748448;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274844c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748450;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748454;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748458;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274845c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064872ec; end: 106488147; -[SCContextV2SwipeUpViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064872ec(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined *puVar36;
  ulong uVar37;
  ulong uVar38;
  undefined *puVar39;
  undefined **ppuVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined8 uVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined8 uVar56;
  long lVar57;
  long lVar58;
  double dVar59;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126f1540;
  uStack_108 = param_1;
  _objc_msgSendSuper2(&uStack_108,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar37);
  _objc_release(puVar2);
  *(undefined8 *)(param_1 + (long)_DAT_112748460) = 0x3ff0000000000000;
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc_init();
  lVar53 = (long)_DAT_112748464;
  uVar52 = *(undefined8 *)(param_1 + lVar53);
  *(undefined **)(param_1 + lVar53) = puVar2;
  _objc_release(uVar52);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar53));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar53));
  func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,
                      *(undefined8 *)(param_1 + lVar53));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar53));
  uVar37 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar37);
  func_0x00010c181fc0(*(undefined8 *)(param_1 + lVar53));
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar54 = (long)_DAT_112748468;
  uVar52 = *(undefined8 *)(param_1 + lVar54);
  *(undefined **)(param_1 + lVar54) = puVar2;
  _objc_release(uVar52);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar54));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar54));
  dVar59 = 0.0;
  func_0x00010c207380(0,*(undefined8 *)(param_1 + lVar54));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar54));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar54));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar53));
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60(puVar3);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar53));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar53);
  uStack_f8 = uVar52;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar53);
  uStack_f0 = uVar56;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar53);
  uStack_e8 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar3;
  uStack_e0 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar3;
  puStack_d8 = puVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar54);
  puStack_d0 = puVar39;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar54);
  uStack_c8 = uVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar26 = uVar24;
  func_0x00010bf493c0(-dVar59);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar54);
  uStack_c0 = uVar26;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar54);
  uStack_b8 = uVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar54);
  uStack_b0 = uVar32;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar35;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(puVar39);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar56);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar52);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar4);
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  lVar57 = (long)_DAT_112748428;
  uVar52 = *(undefined8 *)(param_1 + lVar57);
  puStack_120 = &uStack_128;
  func_0x00010bfa29a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_106488148;
  puStack_138 = &UNK_1109192b0;
  puStack_130 = &uStack_128;
  func_0x00010c0bed40();
  _objc_release(uVar52);
  if ((*(char *)(puStack_120 + 3) == '\x01') && (*(long *)(param_1 + (long)_DAT_11274844c) != 0)) {
    uVar37 = *(ulong *)(param_1 + lVar57);
    func_0x00010c08bda0();
    if ((0x18 < uVar37) && ((0x22 < uVar37 || ((1L << (uVar37 & 0x3f) & 0x510000000U) == 0)))) {
      iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_11274843c);
      func_0x000108435e48();
      if (iVar1 != 0) {
        func_0x00010bdc62c0(param_1);
      }
    }
  }
  uVar38 = *(ulong *)(param_1 + lVar57);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar38;
  func_0x00010c06b5c0();
  if ((uVar37 & 1) == 0) {
    uVar37 = *(ulong *)(param_1 + lVar57);
    func_0x00010c08bda0();
    if ((0x18 < uVar37) && ((0x22 < uVar37 || ((1L << (uVar37 & 0x3f) & 0x510000000U) == 0))))
    goto LAB_106487ae0;
  }
  else {
LAB_106487ae0:
    _objc_release(uVar38);
    puVar2 = PTR_PTR_1126cadc0;
    _objc_alloc();
    func_0x00010bff08e0();
    lVar58 = (long)_DAT_11274846c;
    uVar52 = *(undefined8 *)(param_1 + lVar58);
    *(undefined **)(param_1 + lVar58) = puVar2;
    _objc_release(uVar52);
    func_0x00010bef7700(param_1);
    uVar56 = *(undefined8 *)(param_1 + lVar54);
    uVar52 = *(undefined8 *)(param_1 + lVar58);
    func_0x00010c29bf00(uVar52);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(uVar56);
    _objc_release(uVar52);
    func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar58));
    uVar38 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar38;
    func_0x00010bf4e140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182de0(param_1);
    _objc_release(uVar37);
  }
  _objc_release(uVar38);
  lVar58 = *(long *)(param_1 + (long)_DAT_112748440);
  if (lVar58 != 0) {
    (**(code **)(lVar58 + 0x10))(lVar58,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar55 = (long)_DAT_112748470;
    uVar52 = *(undefined8 *)(param_1 + lVar55);
    *(long *)(param_1 + lVar55) = lVar58;
    _objc_release(uVar52);
    _objc_initWeak(&puStack_a0,param_1);
    _objc_copyWeak(auStack_158,&puStack_a0);
    func_0x00010c1d3660(*(undefined8 *)(param_1 + lVar55));
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar54));
    _objc_destroyWeak(auStack_158);
    _objc_destroyWeak(&puStack_a0);
  }
  if (*(long *)(param_1 + (long)_DAT_112748474) != 0) {
    func_0x00010bdc8040(param_1);
  }
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c18b5e0(puVar2);
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar53));
  puVar39 = *(undefined **)(param_1 + lVar57);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar39;
  func_0x00010c06b5c0();
  if (((ulong)puVar22 & 1) == 0) {
    uVar37 = *(ulong *)(param_1 + lVar57);
    func_0x00010c08bda0();
    if ((uVar37 < 0x19) || ((uVar37 < 0x23 && ((1L << (uVar37 & 0x3f) & 0x510000000U) != 0))))
    goto LAB_106488018;
  }
  _objc_release(puVar39);
  puVar39 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  _objc_retain();
  puVar19 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar22 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar19);
  _objc_release(puVar22);
  puVar22 = PTR_PTR_1126b10a0;
  ppuVar40 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar40);
  if (puVar39 != (undefined *)0x0) {
    func_0x00010bef9040(puVar22);
  }
  func_0x00010c219b60(puVar22);
  puVar18 = puVar22;
  func_0x00010c08c0e0(puVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(puVar18);
  func_0x00010befbb60(puVar19);
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar16 = puVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar16;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar42 = puVar22;
  puStack_a0 = puVar41;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = puVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar42;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar22;
  puStack_98 = puVar44;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = puVar19;
  func_0x00010c2793a0(puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar47 = puVar45;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar22;
  puStack_90 = puVar47;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar19;
  func_0x00010bf1ff80(puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar48;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar51 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar50;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar18);
  _objc_release(puVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar36);
  _objc_release(puVar16);
  _objc_release(puVar22);
  _objc_release(puVar39);
  uVar52 = *(undefined8 *)(param_1 + (long)_DAT_112748478);
  *(undefined **)(param_1 + (long)_DAT_112748478) = puVar19;
  _objc_release(uVar52);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar54));
LAB_106488018:
  _objc_release(puVar39);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_128,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(puVar39 + 0x20);
    _objc_destroyWeak(&puStack_a0);
    lVar53 = 8;
    __Block_object_dispose(&uStack_128);
    __Unwind_Resume();
    *(bool *)(*(long *)(*(long *)(puVar3 + 0x20) + 8) + 0x18) = lVar53 != 0;
    return;
  }
  return;
}



/* Entry: 106488148; end: 10648815f;  */

void FUN_106488148(long param_1,long param_2)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 != 0;
  return;
}



/* Entry: 106488160; end: 10648818b;  */

void FUN_106488160(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4d640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648818c; end: 106488297; -[SCContextV2SwipeUpViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648818c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar1 = *(ulong *)(param_1 + (long)_DAT_112748428);
  func_0x00010c08bda0();
  if (((0x18 < uVar1) && (0x22 < uVar1 || (1L << (uVar1 & 0x3f) & 0x510000000U) == 0)) &&
     (uVar1 = param_1, func_0x00010c06d1e0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e720();
    _objc_release(uVar1);
  }
  func_0x00010be7f7a0(param_1);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11274846c);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_112748478));
  return;
}



/* Entry: 106488298; end: 106488347; -[SCContextV2SwipeUpViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488298(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1540;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(ulong *)(param_1 + (long)_DAT_112748428);
  func_0x00010c08bda0();
  if (((0x18 < uVar1) && (0x22 < uVar1 || (1L << (uVar1 & 0x3f) & 0x510000000U) == 0)) &&
     (uVar1 = param_1, func_0x00010c06d1e0(), (uVar1 & 1) == 0)) {
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c6a0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106488348; end: 10648840f; -[SCContextV2SwipeUpViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488348(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1540;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  uVar1 = *(ulong *)(param_1 + _DAT_112748428);
  func_0x00010c08bda0();
  if ((0x18 < uVar1) && (0x22 < uVar1 || (1L << (uVar1 & 0x3f) & 0x510000000U) == 0)) {
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c10fd00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29e840();
      _objc_release(param_1);
    }
  }
  return;
}



/* Entry: 106488410; end: 1064884d7; -[SCContextV2SwipeUpViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488410(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1540;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar1 = *(ulong *)(param_1 + _DAT_112748428);
  func_0x00010c08bda0();
  if ((0x18 < uVar1) && (0x22 < uVar1 || (1L << (uVar1 & 0x3f) & 0x510000000U) == 0)) {
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c10fd00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29c880();
      _objc_release(param_1);
    }
  }
  return;
}



/* Entry: 1064884d8; end: 10648861b; -[SCContextV2SwipeUpViewController contentSizeDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064884d8(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_112748464;
  func_0x00010bf4d5e0(*(undefined8 *)(param_3 + lVar3));
  if (0.0 < param_2) {
    func_0x00010c08cdc0(*(undefined8 *)(param_3 + lVar3));
    if (*(long *)(param_3 + _DAT_11274847c) != 0) {
      (**(code **)(*(long *)(param_3 + _DAT_11274847c) + 0x10))();
    }
    func_0x00010c0641e0(param_3);
    if ((((*(byte *)(param_3 + _DAT_112748480) & 1) == 0) &&
        ((*(byte *)(param_3 + _DAT_112748484) & 1) == 0)) &&
       ((*(byte *)(param_3 + _DAT_112748488) & 1) == 0)) {
      dVar4 = param_1;
      func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar3));
      bVar2 = false;
      if ((dVar4 == 0.0) && (bVar2 = false, !NAN(param_2) && !NAN(param_1))) {
        bVar2 = param_2 == param_1;
      }
      if (!bVar2) {
        _objc_initWeak(auStack_38,param_3);
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_copyWeak(auStack_40,auStack_38);
        func_0x00010bf03400(0x3fb999999999999a,puVar1);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
    }
  }
  return;
}



/* Entry: 10648861c; end: 106488667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648861c(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010c0641e0(param_2);
    func_0x00010c1822e0(0,param_1,*(undefined8 *)(param_2 + _DAT_112748464));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106488668; end: 106488673; -[SCContextV2SwipeUpViewController _tappedToDismiss] */

void FUN_106488668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106488674; end: 1064888af; -[SCContextV2SwipeUpViewController dismissViewControllerAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488674(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    if ((param_3 & 1) == 0) {
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x106488944;
      puStack_a8 = &UNK_11084aaa8;
      lStack_a0 = param_1;
      _objc_retain(param_4);
      puStack_c8 = PTR_PTR_1126f1540;
      lStack_d0 = param_1;
      lStack_98 = param_4;
      _objc_msgSendSuper2(&lStack_d0,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,&puStack_c0)
      ;
      lVar2 = lStack_98;
    }
    else {
      *(undefined1 *)(param_1 + _DAT_112748488) = 1;
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(param_4);
      func_0x00010bf03440(0x3fc999999999999a,0,puVar1);
      lVar2 = param_4;
    }
  }
  else {
    lVar2 = param_1;
    func_0x00010c0e3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1064888b0;
    puStack_68 = &UNK_110924520;
    _objc_retain(param_4);
    lStack_60 = param_4;
    _objc_copyWeak(auStack_50,auStack_48);
    puStack_88 = PTR_PTR_1126f1540;
    lStack_90 = param_1;
    lStack_58 = lVar2;
    _objc_msgSendSuper2(&lStack_90,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_3,
                        &puStack_80);
    _objc_destroyWeak(auStack_50);
    _objc_release(lStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1064888b0; end: 1064889f3;  */

void FUN_1064888b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106488930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    return;
  }
  return;
}



/* Entry: 1064889f4; end: 106488a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064889f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748464),
             PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 106488a24; end: 106488a2b; -[SCContextV2SwipeUpViewController pageViewName] */

undefined8 FUN_106488a24(void)

{
  return 0x3d;
}



/* Entry: 106488a2c; end: 106488a9f; -[SCContextV2SwipeUpViewController showPlaceholderCards:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488a2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be7f7a0(param_1,param_2,param_4);
  if (lVar1 != 2) {
    func_0x00010c09c7a0(param_1);
    func_0x00010c1dca40(*(undefined8 *)(param_1 + _DAT_112748470),param_2,param_3,0);
    func_0x00010bf4d640(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106488aa0; end: 106488b2b; -[SCContextV2SwipeUpViewController showCardsContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c09c7a0(param_1);
  lVar2 = (long)_DAT_112748470;
  func_0x00010c2367c0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = param_3;
  func_0x00010bfd5240();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    func_0x00010be7f7a0(param_1);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bf4d650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentSizeDidChange_1125b0f38);
  return;
}



/* Entry: 106488b2c; end: 106488b3b; -[SCContextV2SwipeUpViewController cardsContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488b2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf32290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748470),PTR_s_cardsContent_1125aa248);
  return;
}



/* Entry: 106488b3c; end: 106488b83; -[SCContextV2SwipeUpViewController showErrorStateWithRetryBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488b3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c09c7a0(param_1);
  func_0x00010c2374c0(*(undefined8 *)(param_1 + _DAT_112748470),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106488b84; end: 106488c03; -[SCContextV2SwipeUpViewController setCardsAndActionsOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488b84(double param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  double dStack_18;
  
  if (param_1 != *(double *)(param_2 + _DAT_112748460)) {
    *(double *)(param_2 + _DAT_112748460) = param_1;
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_106488c04;
    puStack_28 = &UNK_110848c48;
    lStack_20 = param_2;
    dStack_18 = param_1;
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_40);
  }
  return;
}



/* Entry: 106488c04; end: 106488c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748468),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106488c1c; end: 106488c6b; -[SCContextV2SwipeUpViewController setReplyView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112748474;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc8050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addReplyView_11254f9b0);
  return;
}



/* Entry: 106488c6c; end: 106488d33; -[SCContextV2SwipeUpViewController _addReplyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488c6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112748474;
  if ((*(long *)(param_1 + lVar5) != 0) && (lVar1 = param_1, func_0x00010c0834c0(), (int)lVar1 != 0)
     ) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf49420(*(undefined8 *)(param_1 + _DAT_112748490));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112748494);
    *(undefined8 *)(param_1 + _DAT_112748494) = uVar3;
    _objc_release(uVar4);
    func_0x00010c162480(uVar3);
    _objc_release(uVar2);
    func_0x00010c066580(*(undefined8 *)(param_1 + _DAT_112748468));
                    /* WARNING: Could not recover jumptable at 0x00010bf4d650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentSizeDidChange_1125b0f38);
    return;
  }
  return;
}



/* Entry: 106488d34; end: 106488d7f; -[SCContextV2SwipeUpViewController setReplyViewHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488d34(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112748490) = param_1;
  if (*(long *)(param_2 + _DAT_112748494) != 0) {
    func_0x00010c181140();
                    /* WARNING: Could not recover jumptable at 0x00010bf4d650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentSizeDidChange_1125b0f38);
    return;
  }
  return;
}



/* Entry: 106488d80; end: 106488f0f; -[SCContextV2SwipeUpViewController _addCameosInfoCardView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106488d80(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                    long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  double dVar8;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_5 + _DAT_11274844c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + _DAT_112748428);
  func_0x00010c29d360(uVar3);
  lVar4 = lVar2;
  func_0x00010bf54d20(lVar2,param_6,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010bef7700(param_5,param_6,lVar4);
  uVar3 = *(undefined8 *)(param_5 + _DAT_112748468);
  lVar2 = lVar4;
  func_0x00010c29bf00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(uVar3,param_6,lVar2);
  _objc_release(lVar2);
  func_0x00010bf77e80(lVar4,param_6,param_5);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar8 = 70.0;
  lVar6 = lVar5;
  func_0x00010bf49420(0x4051800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = lVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return dVar8;
  }
  ___stack_chk_fail();
  lVar2 = (long)_DAT_112748464;
  func_0x00010bf4d5e0(*(undefined8 *)(lVar4 + lVar2));
  func_0x00010bf20c00(*(undefined8 *)(lVar4 + lVar2));
  return param_2 - param_4;
}



/* Entry: 106488f10; end: 106488f53; -[SCContextV2SwipeUpViewController _maxPresentationAmount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106488f10(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                    long param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112748464;
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  return param_2 - param_4;
}



/* Entry: 106488f54; end: 1064890d7; -[SCContextV2SwipeUpViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106488f54(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_5);
  func_0x00010bf4cdc0(param_5);
  dVar4 = (param_2 / -180.0 + 1.0) * 20.0;
  dVar6 = dVar4;
  if (dVar4 <= 0.0) {
    dVar6 = 0.0;
  }
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  lVar2 = param_3;
  dVar5 = dVar4;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  dVar6 = dVar6 + dVar5;
  func_0x00010c17a6a0(dVar4,param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((*(char *)(param_3 + _DAT_11274848c) == '\x01') &&
     (func_0x00010bf4cdc0(param_5), dVar6 < 20.0)) {
    func_0x00010bf84b00(param_3,param_4,0,0);
  }
  func_0x00010bf4cdc0(param_5);
  dVar6 = (dVar6 + -20.0) / 80.0;
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  dVar4 = 1.0;
  if (dVar6 <= 1.0) {
    dVar4 = dVar6;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,dVar4 * 0.7,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1064890d8; end: 10648925b; -[SCContextV2SwipeUpViewController scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064890d8(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar3 = param_2;
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_4 = param_4 * 0.7;
  _objc_release(puVar1);
  func_0x00010bf4cdc0(param_7);
  if ((param_4 <= dVar3) || (0.0 < param_2)) {
    if (param_4 <= *(double *)(param_8 + 8)) {
      param_4 = *(double *)(param_8 + 8);
    }
    *(double *)(param_8 + 8) = param_4;
  }
  else {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e50c18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e50c38;
    puStack_68 = puVar2;
    func_0x00010bf4cdc0(param_7);
    func_0x00010c0df720(dVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_68,&ppuStack_78,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    _objc_release(puVar2);
    *(undefined8 *)(param_8 + 8) = 0;
    *(undefined1 *)(param_5 + _DAT_11274848c) = 1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_7 + _DAT_11274848c) = 0;
  *(undefined1 *)(param_7 + _DAT_112748480) = 1;
  return;
}



/* Entry: 10648925c; end: 10648927b; -[SCContextV2SwipeUpViewController scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648925c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274848c) = 0;
  *(undefined1 *)(param_1 + _DAT_112748480) = 1;
  return;
}



/* Entry: 10648927c; end: 1064893cb; -[SCContextV2SwipeUpViewController gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10648927c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + _DAT_112748468);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        uVar12 = *(undefined8 *)(lStack_118 + lVar14 * 8);
        func_0x00010c09ef00(param_4,param_2,uVar12);
        puVar9 = (undefined8 *)0x0;
        uVar3 = uVar12;
        func_0x00010c102b20();
        if (((int)uVar3 != 0) && (func_0x00010c074c20(), (int)uVar12 == 0)) {
          puVar11 = (undefined1 *)0x0;
          goto LAB_106489380;
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar10 = 0x10;
      lVar2 = lVar1;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  puVar11 = (undefined1 *)0x1;
LAB_106489380:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(lVar10);
  lVar2 = param_4;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010c1c8b80(param_4,param_2,6);
    _objc_retain(puVar9);
    puVar11 = (undefined1 *)puVar9;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar11;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = (undefined1 *)puVar9;
    if (puVar4 != (undefined1 *)0x0) {
      puVar5 = puVar4;
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar4;
        func_0x00010c1417c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar9);
        puVar5 = (undefined1 *)puVar9;
        while (puVar5 != (undefined1 *)0x0) {
          if (puVar5 == puVar6) {
            _objc_release(puVar5);
            goto LAB_1064895a4;
          }
          puVar7 = puVar5;
          func_0x00010c0f3ca0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 == (undefined1 *)0x0) {
            puVar8 = puVar5;
            func_0x00010c10fd00();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(puVar7);
            puVar8 = puVar7;
          }
          _objc_release(puVar5);
          _objc_release(puVar7);
          puVar5 = puVar8;
        }
        _objc_retain(puVar6);
        puVar5 = puVar6;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar11 = puVar6;
        while (puVar5 != (undefined1 *)0x0) {
          puVar7 = puVar11;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          puVar5 = puVar7;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar11 = puVar7;
        }
        _objc_release(puVar9);
        func_0x00010c1c8b80(param_4,param_2,5);
LAB_1064895a4:
        _objc_release(puVar6);
      }
    }
    func_0x00010c10eda0(puVar11,param_2,param_4,0,lVar10);
    _objc_release(puVar4);
    _objc_release(puVar11);
  }
  else if (lVar10 != 0) {
    (**(code **)(lVar10 + 0x10))(lVar10);
  }
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return (undefined1 *)puVar9;
}



/* Entry: 1064893cc; end: 1064895f3; -[SCContextV2SwipeUpViewController presentFromBaseViewController:gestureTracker:completion:] */

void FUN_1064893cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1c8b80(param_1,param_2,6);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        lVar4 = lVar2;
        func_0x00010c1417c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        lVar3 = param_3;
        while (lVar3 != 0) {
          if (lVar3 == lVar4) {
            _objc_release(lVar3);
            goto LAB_1064895a4;
          }
          lVar5 = lVar3;
          func_0x00010c0f3ca0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            lVar6 = lVar3;
            func_0x00010c10fd00();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(lVar5);
            lVar6 = lVar5;
          }
          _objc_release(lVar3);
          _objc_release(lVar5);
          lVar3 = lVar6;
        }
        _objc_retain(lVar4);
        lVar3 = lVar4;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar1 = lVar4;
        while (lVar3 != 0) {
          lVar5 = lVar1;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          lVar3 = lVar5;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          lVar1 = lVar5;
        }
        _objc_release(param_3);
        func_0x00010c1c8b80(param_1,param_2,5);
LAB_1064895a4:
        _objc_release(lVar4);
      }
    }
    func_0x00010c10eda0(lVar1,param_2,param_1,0,param_5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064895f4; end: 106489657; -[SCContextV2SwipeUpViewController initialPresentationAmount] */

double FUN_1064895f4(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  
  func_0x00010be5dcc0();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  if ((double)(long)(param_4 * 0.7) <= param_1) {
    param_1 = (double)(long)(param_4 * 0.7);
  }
  return param_1;
}



/* Entry: 106489658; end: 10648965b; -[SCContextV2SwipeUpViewController initialSwipeUpGesturePresentationAmount:] */

void FUN_106489658(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0641f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initialPresentationAmount_1125f6a88);
  return;
}



/* Entry: 10648965c; end: 10648966b; -[SCContextV2SwipeUpViewController gestureTracker:isActivelyAnimatingPresentationAmount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648965c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + _DAT_112748484) = param_4;
  return;
}



/* Entry: 10648966c; end: 1064896a7; -[SCContextV2SwipeUpViewController setPresentationAmount:gestureTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648966c(undefined8 param_1,long param_2)

{
  if (((*(byte *)(param_2 + _DAT_112748488) & 1) == 0) &&
     ((*(byte *)(param_2 + _DAT_112748480) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,param_1,*(undefined8 *)(param_2 + _DAT_112748464),PTR_s_setContentOffset__11263e2d8
              );
    return;
  }
  return;
}



/* Entry: 1064896a8; end: 1064896b3; -[SCContextV2SwipeUpViewController defaultProjectNameV2] */

undefined ** FUN_1064896a8(void)

{
  return &PTR____CFConstantStringClassReference_110dcb198;
}



/* Entry: 1064896b4; end: 1064896bf; -[SCContextV2SwipeUpViewController didTapDoneButton] */

void FUN_1064896b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1064896c0; end: 106489727; -[SCContextV2SwipeUpViewController setContextActionSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064896c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748498);
  *(undefined8 *)(param_1 + _DAT_112748498) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c182de0(*(undefined8 *)(param_1 + _DAT_11274846c),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106489728; end: 1064897cf; -[SCContextV2SwipeUpViewController _presentationMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106489728(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  if (param_3 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_112748498);
  }
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274843c);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748428);
  func_0x00010c08bda0(uVar1);
  func_0x000108435f50(uVar4,uVar1);
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x00010bf4eb20();
    uVar1 = 1;
    if (lVar2 != 4) {
      uVar1 = 2;
    }
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1064897d0; end: 1064897df; -[SCContextV2SwipeUpViewController onDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064897d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274849c);
}



/* Entry: 1064897e0; end: 1064897eb; -[SCContextV2SwipeUpViewController setOnDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064897e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1064897ec; end: 1064897fb; -[SCContextV2SwipeUpViewController onContentSizeChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064897ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274847c);
}



/* Entry: 1064897fc; end: 106489807; -[SCContextV2SwipeUpViewController setOnContentSizeChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064897fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106489808; end: 106489827; -[SCContextV2SwipeUpViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106489808(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127484a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106489828; end: 10648983b; -[SCContextV2SwipeUpViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106489828(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127484a0,param_3);
  return;
}



/* Entry: 10648983c; end: 10648984b; -[SCContextV2SwipeUpViewController replyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10648983c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748474);
}



/* Entry: 10648984c; end: 10648985b; -[SCContextV2SwipeUpViewController replyViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10648984c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748490);
}



/* Entry: 10648985c; end: 10648986b; -[SCContextV2SwipeUpViewController cardsAndActionsOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10648985c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748460);
}



/* Entry: 10648986c; end: 10648987b; -[SCContextV2SwipeUpViewController actionsHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10648986c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127484a4);
}



/* Entry: 10648987c; end: 10648988b; -[SCContextV2SwipeUpViewController contextActionSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10648987c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748498);
}



/* Entry: 10648988c; end: 10648989b; -[SCContextV2SwipeUpViewController sessionParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10648988c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748428);
}



/* Entry: 10648989c; end: 106489a57; -[SCContextV2SwipeUpViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648989c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112748428,0);
  _objc_storeStrong(param_1 + _DAT_112748498,0);
  _objc_storeStrong(param_1 + _DAT_1127484a4,0);
  _objc_storeStrong(param_1 + _DAT_112748474,0);
  _objc_destroyWeak(param_1 + _DAT_1127484a0);
  _objc_storeStrong(param_1 + _DAT_11274847c,0);
  _objc_storeStrong(param_1 + _DAT_11274849c,0);
  _objc_storeStrong(param_1 + _DAT_11274845c,0);
  _objc_storeStrong(param_1 + _DAT_112748458,0);
  _objc_storeStrong(param_1 + _DAT_112748454,0);
  _objc_storeStrong(param_1 + _DAT_112748450,0);
  _objc_storeStrong(param_1 + _DAT_11274844c,0);
  _objc_storeStrong(param_1 + _DAT_112748448,0);
  _objc_storeStrong(param_1 + _DAT_112748440,0);
  _objc_storeStrong(param_1 + _DAT_11274843c,0);
  _objc_storeStrong(param_1 + _DAT_112748438,0);
  _objc_storeStrong(param_1 + _DAT_112748434,0);
  _objc_storeStrong(param_1 + _DAT_11274846c,0);
  _objc_storeStrong(param_1 + _DAT_112748494,0);
  _objc_storeStrong(param_1 + _DAT_112748430,0);
  _objc_storeStrong(param_1 + _DAT_1127484a8,0);
  _objc_storeStrong(param_1 + _DAT_112748478,0);
  _objc_storeStrong(param_1 + _DAT_112748470,0);
  _objc_storeStrong(param_1 + _DAT_112748468,0);
  _objc_storeStrong(param_1 + _DAT_112748464,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274842c,0);
  return;
}



/* Entry: 106489a58; end: 10648a083; -[SCEmbeddedContextCardsView initWithSessionParams:logger:viewControllerForModalPresentation:interopProvider:actionHandler:appStartExperimentReader:birthdayProvider:bitmojiAvatarProvider:imageDownloader:storiesFetcher:contextStoryPlaybackScopeExposer:cardsDataFetcher:composerRuntime:alertPresenterFactory:musicServices:musicFavoritesComposerServices:snapchatterServices:userSession:circumstanceEngine:placesContextCardContextCreator:ctpItemViewService:contextExperimentService:chatCameraScopeExposer:chatCameraScopeServices:chatScopeExposer:chatScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106489a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126f1548;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_1127484ac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127484b0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127484b4;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_14;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127484b8;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_25;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127484bc;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_26;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127484c0;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_27;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127484c4;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_28;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127484c8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_1127484cc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127484d0;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b6220;
    _objc_alloc();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010beee700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010beeed40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045480();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127484d4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127484d4) = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10648a084;
    puStack_a0 = &UNK_110924550;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b6228;
    _objc_alloc();
    func_0x00010bff0bc0();
    lVar7 = (long)_DAT_1127484d8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar2);
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c1d3660(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    func_0x00010be4ccc0(puVar1);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 10648a084; end: 10648a107;  */

void FUN_10648a084(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdf3940(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10648a108; end: 10648a15f; -[SCEmbeddedContextCardsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a108(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1548;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127484d8));
  return;
}



/* Entry: 10648a160; end: 10648a16f; -[SCEmbeddedContextCardsView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127484d8),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 10648a170; end: 10648a17f; -[SCEmbeddedContextCardsView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127484d8),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10648a180; end: 10648a28f; -[SCEmbeddedContextCardsView _sizeChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a180(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  func_0x00010c069fa0();
  func_0x00010c069fe0(param_4);
  lVar3 = param_4;
  func_0x00010c0e67a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_4;
    func_0x00010c0e67a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_release(lVar3);
  }
  lVar3 = (long)_DAT_1127484dc;
  if (*(char *)(param_4 + lVar3) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar4 = 3.4028234663852886e+38;
    func_0x00010c23d5a0(param_3,param_4);
    _objc_release(puVar1);
    if (40.0 < dVar4) {
      lVar2 = param_4;
      func_0x00010bf6b020(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8dc00();
      _objc_release(lVar2);
      *(undefined1 *)(param_4 + lVar3) = 0;
    }
  }
  return;
}



/* Entry: 10648a290; end: 10648a2f7; -[SCEmbeddedContextCardsView setPlaceholderCards:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127484d8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf32280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1dca40(*(undefined8 *)(param_1 + lVar2),param_2,param_3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648a2f8; end: 10648a37f; -[SCEmbeddedContextCardsView _loadCards] */

void FUN_10648a2f8(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10648a380;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10648a380; end: 10648a47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a380(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127484b4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfa58a0(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 10648a47c; end: 10648a6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a47c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      _objc_initWeak(auStack_58,param_1);
      uVar6 = *(undefined8 *)(param_1 + _DAT_1127484d8);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c2374c0(uVar6);
      lVar7 = param_1 + _DAT_1127484e4;
      _objc_loadWeakRetained(lVar7);
      func_0x00010bf8dc00();
      _objc_release(lVar7);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    else {
      func_0x00010c2839a0(*(undefined8 *)(param_1 + _DAT_1127484b0));
      lVar7 = (long)_DAT_1127484e4;
      uVar1 = param_1 + lVar7;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      lVar5 = param_2;
      if ((uVar2 & 1) != 0) {
        lVar3 = param_1 + lVar7;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010bf8dc20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar5 = lVar4;
        }
        _objc_retain(lVar5);
        _objc_release(param_2);
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      lVar3 = lVar5;
      func_0x00010bfd5240();
      if ((int)lVar3 == 0) {
        lVar7 = param_1 + lVar7;
        _objc_loadWeakRetained(lVar7);
        func_0x00010bf8dc00();
        _objc_release(lVar7);
      }
      else {
        *(undefined1 *)(param_1 + _DAT_1127484dc) = 1;
      }
      func_0x00010c2367c0(*(undefined8 *)(param_1 + _DAT_1127484d8));
      param_2 = lVar5;
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10648a6bc; end: 10648a70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a6bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127484e0) = 1;
    func_0x00010c0aa280(*(undefined8 *)(param_1 + _DAT_1127484b0));
    func_0x00010be4ccc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648a710; end: 10648a84f; -[SCEmbeddedContextCardsView _createSnapchatterActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a710(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = param_1;
  func_0x00010be632a0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb83b8);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be63280(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb8398);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b16b0;
  _objc_alloc(PTR_PTR_1126b16b0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127484d0);
  func_0x00010c244ae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  puVar6 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010becd5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar6,param_2,param_1,0);
  func_0x00010c049c40(puVar3,param_2,uVar4,puVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10648a850; end: 10648a903; -[SCEmbeddedContextCardsView _newOpenChatActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10648a850(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c2898;
  _objc_alloc(PTR_PTR_1126c2898);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127484c0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127484c4);
  puVar2 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010becd5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar2,param_2,param_1,0);
  func_0x00010bffde60(puVar1,param_2,uVar3,uVar4,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10648a904; end: 10648a983; -[SCEmbeddedContextCardsView _newOpenCameraActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10648a904(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c2890;
  _objc_alloc(PTR_PTR_1126c2890);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127484b8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127484bc);
  func_0x00010becd5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd980(puVar1,param_2,uVar2,uVar3,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10648a984; end: 10648aaab; -[SCEmbeddedContextCardsView _topMostPresentedViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648a984(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_1127484c8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar1 != 0) {
    lVar2 = lVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar1 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar4 = lVar2;
  }
  lVar1 = lVar4;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  while (lVar2 != 0) {
    lVar1 = lVar4;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar4 = lVar3;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    lVar4 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10648aaac; end: 10648aabb; -[SCEmbeddedContextCardsView onSizeChangedBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10648aaac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127484e8);
}



/* Entry: 10648aabc; end: 10648aac7; -[SCEmbeddedContextCardsView setOnSizeChangedBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648aabc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10648aac8; end: 10648aae7; -[SCEmbeddedContextCardsView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648aac8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127484e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10648aae8; end: 10648aafb; -[SCEmbeddedContextCardsView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648aae8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127484e4,param_3);
  return;
}



/* Entry: 10648aafc; end: 10648ac17; -[SCEmbeddedContextCardsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10648aafc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127484e4);
  _objc_storeStrong(param_1 + _DAT_1127484e8,0);
  _objc_storeStrong(param_1 + _DAT_1127484c4,0);
  _objc_storeStrong(param_1 + _DAT_1127484c0,0);
  _objc_storeStrong(param_1 + _DAT_1127484bc,0);
  _objc_storeStrong(param_1 + _DAT_1127484b8,0);
  _objc_storeStrong(param_1 + _DAT_1127484d0,0);
  _objc_storeStrong(param_1 + _DAT_1127484c8,0);
  _objc_storeStrong(param_1 + _DAT_1127484b4,0);
  _objc_storeStrong(param_1 + _DAT_1127484d4,0);
  _objc_storeStrong(param_1 + _DAT_1127484ec,0);
  _objc_storeStrong(param_1 + _DAT_1127484f0,0);
  _objc_storeStrong(param_1 + _DAT_1127484cc,0);
  _objc_storeStrong(param_1 + _DAT_1127484d8,0);
  _objc_storeStrong(param_1 + _DAT_1127484b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127484ac,0);
  return;
}



/* Entry: 10648ac18; end: 10648b083; -[SCContextRepliesSubscribeUpsellDataManager initWithSubscribeStatusHandler:snapchatterServices:imageFetchingService:publicProfileManager:bitmojiSelfieFetcher:userParams:profileIconURL:bitmojiAvatarId:bitmojiSelfieId:isPosterMutualFriend:] */

undefined8 *
FUN_10648ac18(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  puStack_68 = PTR_PTR_1126f1550;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_4;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[2];
    puVar2[2] = uVar3;
    _objc_release(uVar9);
    uVar3 = param_4;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[3];
    puVar2[3] = uVar3;
    _objc_release(uVar9);
    _objc_retain(param_5);
    uVar3 = puVar2[4];
    puVar2[4] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[5];
    puVar2[5] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[6];
    puVar2[6] = param_9;
    _objc_release(uVar3);
    uVar3 = param_8;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[0xf];
    puVar2[0xf] = uVar3;
    _objc_release(uVar9);
    _objc_retain(param_3);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[7];
    puVar2[7] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[8];
    puVar2[8] = param_11;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 0xe) = param_12;
    uVar3 = param_8;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x000108437e88();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar2[0x10];
    puVar2[0x10] = uVar9;
    _objc_release(uVar10);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[1];
    puVar2[1] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar3 = puVar2[9];
    puVar2[9] = puVar4;
    _objc_release(uVar3);
    uVar5 = param_3;
    func_0x00010bfa7b60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_class(PTR_PTR_1126ae820);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar3 = puVar2[10];
    puVar2[10] = uVar1;
    _objc_release(uVar3);
    puVar7 = auStack_78;
    _objc_initWeak(puVar7,puVar2);
    uVar9 = puVar2[10];
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ec0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(puVar7);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
    uVar3 = puVar2[0x11];
    puVar8 = puVar2;
    func_0x00010bdf91e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar8);
    func_0x00010be133c0(puVar2);
    func_0x00010be140e0(puVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
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
  return puVar2;
}



/* Entry: 10648b084; end: 10648b0e3;  */

void FUN_10648b084(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bea4ea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648b0e4; end: 10648b0eb; -[SCContextRepliesSubscribeUpsellDataManager _setIsPosterMutualFriend:] */

void FUN_10648b0e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10648b0ec; end: 10648b0f3; -[SCContextRepliesSubscribeUpsellDataManager _setIsSubscribed:] */

void FUN_10648b0ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}



/* Entry: 10648b0f4; end: 10648b113; -[SCContextRepliesSubscribeUpsellDataManager shouldShowUpsell] */

byte FUN_10648b0f4(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x71) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x70) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10648b114; end: 10648b26f; -[SCContextRepliesSubscribeUpsellDataManager _fetchSnapchatter] */

void FUN_10648b114(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c2448c0(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10648b270; end: 10648b35b;  */

void FUN_10648b270(long param_1,undefined *param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR_PTR_1126b15c8;
    _objc_alloc(PTR_PTR_1126b15c8);
    func_0x00010c05c0e0();
  }
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010bea4de0(lVar1);
  _objc_release(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10648b35c; end: 10648b457; -[SCContextRepliesSubscribeUpsellDataManager subscribeWithCompletion:] */

void FUN_10648b35c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10648b458; end: 10648b4ab;  */

void FUN_10648b458(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648b4ac; end: 10648b563; -[SCContextRepliesSubscribeUpsellDataManager _submitSubscriptionWithSnapchatter:completion:] */

void FUN_10648b4ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae5c0;
  _objc_retain(param_4);
  func_0x00010befca80(puVar1,param_2,param_3,0x4a68a6a6,0x42,0,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8a80();
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10648b564; end: 10648b56b; -[SCContextRepliesSubscribeUpsellDataManager displayName] */

void FUN_10648b564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 10648b56c; end: 10648b643; -[SCContextRepliesSubscribeUpsellDataManager _fetchProfileImage] */

void FUN_10648b56c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010be11bc0(param_1);
  }
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c269fc0(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchBitmojiAvatar_112561940);
  return;
}



/* Entry: 10648b644; end: 10648b68b;  */

void FUN_10648b644(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be15300();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


