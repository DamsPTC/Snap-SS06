/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107248674; end: 10724867b; -[MGLReachability reachabilityObject] */

undefined8 FUN_107248674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10724867c; end: 10724869b; -[MGLReachability setReachabilityObject:] */

void FUN_10724867c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001072486e4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10724869c; end: 1072486d7; -[MGLReachability .cxx_destruct] */

void FUN_10724869c(long param_1)

{
  func_0x0001072487ac(param_1 + 0x30);
  func_0x0001072487ac(param_1 + 0x28);
  func_0x0001072487ac(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1072486d8; end: 1072487b3;  */

void FUN_1072486d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1072487b4; end: 107248823;  */

void FUN_1072487b4(void)

{
  int iVar1;
  
  if ((bRam000000011381e9f8 & 1) == 0) {
    iVar1 = 0x1381e9f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_107248824(0x11381e9e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11381e9f8);
      return;
    }
  }
  return;
}



/* Entry: 107248824; end: 1072488ab;  */

long * FUN_107248824(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_28;
  
  *param_1 = 0;
  plVar2 = param_1;
  func_0x0001073af260();
  param_1[1] = (long)plVar2;
  if (plVar2 == (long *)0x0) {
    FUN_1072488ac(&lStack_28);
    lVar1 = lStack_28;
    lStack_28 = 0;
    lVar3 = *param_1;
    *param_1 = lVar1;
    if (lVar3 != 0) {
      FUN_107248920();
      lVar1 = lStack_28;
      lStack_28 = 0;
      if (lVar1 != 0) {
        FUN_107248920();
      }
    }
    param_1[1] = *param_1;
  }
  return param_1;
}



/* Entry: 1072488ac; end: 1072488ef;  */

void FUN_1072488ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xe8;
  __Znwm();
  func_0x0001078980a4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1072488f0; end: 10724891f;  */

long * FUN_1072488f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_107248920();
  }
  return param_1;
}



/* Entry: 107248920; end: 10724892b;  */

void FUN_107248920(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107248928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10724892c; end: 107248933; +[MGLMapCamera supportsSecureCoding] */

undefined8 FUN_10724892c(void)

{
  return 1;
}



/* Entry: 107248934; end: 107248947; +[MGLMapCamera camera] */

void FUN_107248934(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107248948; end: 107248aaf; +[MGLMapCamera cameraLookingAtCenterCoordinate:fromEyeCoordinate:eyeAltitude:] */

void FUN_107248948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = param_6;
  _CLLocationCoordinate2DIsValid();
  dVar3 = -1.0;
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xbff0000000000000;
  }
  else {
    _CLLocationCoordinate2DIsValid(param_3,param_4);
    uVar2 = 0xbff0000000000000;
    if (iVar1 != 0) {
      uVar2 = param_3;
      FUN_10724645c(param_3,param_4,param_1,param_2);
      _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
      func_0x00010c021a60(param_1,param_2);
      _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
      func_0x00010c021a60(param_3,param_4);
      func_0x00010bf86f80();
      dVar3 = param_5;
      _atan2(param_5,param_3);
      dVar3 = (dVar3 * -180.0) / 3.141592653589793 + 90.0;
      FUN_107246670(dVar3,0,0x4076800000000000);
      func_0x000107249698();
      func_0x000107249690();
    }
  }
  _objc_alloc(param_6);
  func_0x000107249628();
  func_0x00010bffd4c0(param_1,param_2,param_5,dVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107248ab0; end: 107248b27; +[MGLMapCamera cameraLookingAtCenterCoordinate:acrossDistance:pitch:heading:] */

void FUN_107248ab0(undefined8 param_1)

{
  double in_d3;
  
  func_0x000107249660();
  func_0x0001072496b8((90.0 - in_d3) * 3.141592653589793,0x4066800000000000);
  _objc_alloc(param_1);
  func_0x000107249628();
  func_0x000107249610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107248b28; end: 107248b67; +[MGLMapCamera cameraLookingAtCenterCoordinate:altitude:pitch:heading:] */

void FUN_107248b28(void)

{
  func_0x000107249660();
  _objc_alloc();
  func_0x000107249628();
  func_0x000107249610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107248b68; end: 107248bc3; +[MGLMapCamera cameraLookingAtCenterCoordinate:altitude:pitch:heading:padding:] */

void FUN_107248b68(void)

{
  func_0x000107249660();
  _objc_alloc();
  func_0x000107249610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107248bc4; end: 107248bcf; +[MGLMapCamera cameraLookingAtCenterCoordinate:fromDistance:pitch:heading:] */

void FUN_107248bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf29cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c65a0,PTR_s_cameraLookingAtCenterCoordinate__1125a80e0);
  return;
}



/* Entry: 107248bd0; end: 107248c4f; -[MGLMapCamera initWithCenterCoordinate:altitude:pitch:heading:padding:] */

void FUN_107248bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f8d30;
  uStack_50 = param_6;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = in_stack_00000000;
    *(undefined8 *)((long)puVar1 + 0x38) = in_stack_00000008;
    *(undefined8 *)((long)puVar1 + 0x40) = in_stack_00000010;
    *(undefined8 *)((long)puVar1 + 0x48) = in_stack_00000018;
  }
  return;
}



/* Entry: 107248c50; end: 107248e17; -[MGLMapCamera initWithCoder:] */

undefined1 * FUN_107248c50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107249600();
  puVar1 = PTR_PTR_1126c5b68;
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3b60();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0b3b60();
    _objc_release(puVar1);
    func_0x000107249698();
    if ((long)puVar2 < 4) goto LAB_107248cf4;
    func_0x00010c22b860(PTR_PTR_1126c5b68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1f00();
  }
  func_0x000107249698();
LAB_107248cf4:
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000107249678();
    uVar4 = param_1;
    func_0x000107249678();
    _CLLocationCoordinate2DMake();
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    *(undefined8 *)(puVar3 + 0x28) = uVar4;
    func_0x000107249678();
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    func_0x000107249678();
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    func_0x000107249678();
    *(undefined8 *)(puVar3 + 8) = param_1;
    func_0x000107249678();
    *(undefined8 *)(puVar3 + 0x38) = param_1;
    func_0x000107249678();
    *(undefined8 *)(puVar3 + 0x48) = param_1;
    func_0x000107249678();
    *(undefined8 *)(puVar3 + 0x30) = param_1;
    func_0x000107249678();
    *(undefined8 *)(puVar3 + 0x40) = param_1;
  }
  func_0x000107249658();
  return puVar3;
}



/* Entry: 107248e18; end: 107248ecf; -[MGLMapCamera encodeWithCoder:] */

void FUN_107248e18(void)

{
  long unaff_x20;
  
  func_0x000107249600();
  func_0x000107249680(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107249680(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107249680(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107249680(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107249680(*(undefined8 *)(unaff_x20 + 8));
  func_0x000107249680(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107249680(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107249680(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107249680(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107248ed0; end: 107248f27; -[MGLMapCamera copyWithZone:] */

void FUN_107248ed0(long param_1)

{
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010bffd4c0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 107248f28; end: 107248f5f; +[MGLMapCamera keyPathsForValuesAffectingViewingDistance] */

void FUN_107248f28(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110ea4a78);
  return;
}



/* Entry: 107248f60; end: 107248fb7; -[MGLMapCamera viewingDistance] */

double FUN_107248f60(double param_1)

{
  double dVar1;
  
  func_0x00010c0fc7c0();
  dVar1 = 90.0 - param_1;
  func_0x0001072496b0();
  dVar1 = dVar1 * 3.141592653589793;
  func_0x0001072496b8(dVar1,0x4066800000000000);
  return param_1 / dVar1;
}



/* Entry: 107248fb8; end: 10724900f; -[MGLMapCamera setViewingDistance:] */

void FUN_107248fb8(double param_1,undefined8 param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010c0fc7c0();
  dVar1 = (90.0 - dVar1) * 3.141592653589793;
  func_0x0001072496b8(dVar1,0x4066800000000000);
                    /* WARNING: Could not recover jumptable at 0x00010c167930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 * dVar1,param_2,PTR_s_setAltitude__112637868);
  return;
}



/* Entry: 107249010; end: 1072490ab; -[MGLMapCamera description] */

void FUN_107249010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ea4b38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724964c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1072490ac; end: 1072491c3; -[MGLMapCamera isEqual:] */

ushort FUN_1072490ac(undefined8 param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  ulong uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined2 uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x30);
  uVar6 = (undefined2)((ulong)param_1 >> 0x20);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  func_0x000107249600();
  _objc_opt_class();
  uVar2 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else if (unaff_x19 == unaff_x20) {
    uVar4 = 1;
  }
  else {
    _objc_retain();
    dVar11 = *(double *)(unaff_x20 + 0x20);
    func_0x0001072496a0();
    if ((((dVar11 == (double)CONCAT26(uVar7,CONCAT24(uVar6,CONCAT22(uVar5,uVar3)))) &&
         (dVar11 = *(double *)(unaff_x20 + 0x28), func_0x0001072496a0(), dVar11 == param_2)) &&
        (dVar11 = *(double *)(unaff_x20 + 0x18), func_0x0001072496b0(),
        dVar11 == (double)CONCAT26(uVar7,CONCAT24(uVar6,CONCAT22(uVar5,uVar3))))) &&
       ((dVar11 = *(double *)(unaff_x20 + 0x10), func_0x00010c0fc7c0(),
        dVar11 == (double)CONCAT26(uVar7,CONCAT24(uVar6,CONCAT22(uVar5,uVar3))) &&
        (dVar11 = *(double *)(unaff_x20 + 8), func_0x00010bfe0320(),
        dVar11 == (double)CONCAT26(uVar7,CONCAT24(uVar6,CONCAT22(uVar5,uVar3))))))) {
      dVar1 = *(double *)(unaff_x20 + 0x38);
      dVar11 = *(double *)(unaff_x20 + 0x30);
      uVar3 = SUB82(dVar11,0);
      uVar5 = (undefined2)((ulong)dVar11 >> 0x10);
      uVar6 = (undefined2)((ulong)dVar11 >> 0x20);
      uVar7 = (undefined2)((ulong)dVar11 >> 0x30);
      dVar10 = *(double *)(unaff_x20 + 0x48);
      dVar8 = *(double *)(unaff_x20 + 0x40);
      dVar9 = dVar8;
      func_0x000107249688();
      uVar4 = NEON_uminv(CONCAT26(-(ushort)(dVar10 == param_4),
                                  CONCAT24(-(ushort)(dVar8 == param_3),
                                           CONCAT22(-(ushort)(dVar1 == dVar9),
                                                    -(ushort)(dVar11 ==
                                                             (double)CONCAT26(uVar7,CONCAT24(uVar6,
                                                  CONCAT22(uVar5,uVar3))))))),2);
    }
    else {
      uVar4 = 0;
    }
    func_0x000107249658();
  }
  func_0x000107249658();
  return uVar4 & 1;
}



/* Entry: 1072491c4; end: 107249347; -[MGLMapCamera isEqualToMapCamera:] */

bool FUN_1072491c4(double param_1,undefined8 param_2,double param_3,double param_4)

{
  bool bVar1;
  bool bVar2;
  long unaff_x19;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x000107249600();
  if (unaff_x19 == unaff_x20) {
    bVar1 = true;
  }
  else {
    dVar3 = *(double *)(unaff_x20 + 0x20);
    func_0x0001072496a0();
    dVar5 = dVar3;
    if (dVar3 == param_1 || param_1 > dVar3) {
      dVar5 = param_1;
    }
    if (param_1 <= dVar3) {
      dVar3 = param_1;
    }
    if (dVar5 - dVar3 <= 1e-06) {
      dVar4 = *(double *)(unaff_x20 + 0x28);
      func_0x0001072496a0();
      bVar2 = dVar5 <= dVar4;
      bVar1 = dVar4 == dVar5;
      dVar3 = dVar4;
      if (bVar1 || dVar5 > dVar4) {
        dVar3 = dVar5;
      }
      if (dVar5 <= dVar4) {
        dVar4 = dVar5;
      }
      func_0x0001072496c0(dVar3,dVar4);
      if (!bVar2 || bVar1) {
        dVar5 = *(double *)(unaff_x20 + 0x18);
        func_0x0001072496b0();
        dVar4 = dVar5;
        if (dVar5 == dVar3 || dVar3 > dVar5) {
          dVar4 = dVar3;
        }
        if (dVar3 <= dVar5) {
          dVar5 = dVar3;
        }
        dVar4 = dVar4 - dVar5;
        if (dVar4 <= 1e-06) {
          dVar3 = *(double *)(unaff_x20 + 0x10);
          func_0x00010c0fc7c0();
          dVar5 = dVar3;
          if (dVar3 == dVar4 || dVar4 > dVar3) {
            dVar5 = dVar4;
          }
          if (dVar4 <= dVar3) {
            dVar3 = dVar4;
          }
          dVar5 = dVar5 - dVar3;
          if (dVar5 <= 1e-06) {
            dVar3 = *(double *)(unaff_x20 + 8);
            func_0x00010bfe0320();
            dVar4 = dVar3;
            if (dVar3 == dVar5 || dVar5 > dVar3) {
              dVar4 = dVar5;
            }
            if (dVar5 <= dVar3) {
              dVar3 = dVar5;
            }
            dVar5 = 1.0;
            if (dVar4 - dVar3 <= 1.0) {
              dVar4 = *(double *)(unaff_x20 + 0x38);
              func_0x000107249688();
              bVar2 = dVar5 <= dVar4;
              bVar1 = dVar4 == dVar5;
              dVar3 = dVar4;
              if (bVar1 || dVar5 > dVar4) {
                dVar3 = dVar5;
              }
              if (dVar5 <= dVar4) {
                dVar4 = dVar5;
              }
              func_0x0001072496c0(dVar3,dVar4);
              if (!bVar2 || bVar1) {
                dVar5 = *(double *)(unaff_x20 + 0x48);
                func_0x000107249688();
                bVar2 = param_4 <= dVar5;
                bVar1 = dVar5 == param_4;
                dVar3 = dVar5;
                if (bVar1 || param_4 > dVar5) {
                  dVar3 = param_4;
                }
                if (param_4 <= dVar5) {
                  dVar5 = param_4;
                }
                func_0x0001072496c0(dVar3,dVar5);
                if (!bVar2 || bVar1) {
                  dVar5 = *(double *)(unaff_x20 + 0x30);
                  func_0x000107249688();
                  dVar4 = dVar5;
                  if (dVar5 == dVar3 || dVar3 > dVar5) {
                    dVar4 = dVar3;
                  }
                  if (dVar3 <= dVar5) {
                    dVar5 = dVar3;
                  }
                  if (dVar4 - dVar5 <= 1e-06) {
                    dVar5 = *(double *)(unaff_x20 + 0x40);
                    func_0x000107249688();
                    bVar2 = param_3 <= dVar5;
                    bVar1 = dVar5 == param_3;
                    dVar3 = dVar5;
                    if (bVar1 || param_3 > dVar5) {
                      dVar3 = param_3;
                    }
                    if (param_3 <= dVar5) {
                      dVar5 = param_3;
                    }
                    func_0x0001072496c0(dVar3,dVar5);
                    bVar1 = !bVar2 || bVar1;
                    goto LAB_1072492f4;
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar1 = false;
  }
LAB_1072492f4:
  func_0x000107249658();
  return bVar1;
}



/* Entry: 107249348; end: 1072495a7; -[MGLMapCamera hash] */

undefined * FUN_107249348(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfde980();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfde980();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfde980();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfde980();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 8),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bfde980();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x38),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bfde980();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x48),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bfde980();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x40),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bfde980();
  _objc_release(puVar16);
  _objc_release(puVar14);
  func_0x000107249690();
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4 + (long)puVar2 + (long)(puVar6 + (long)puVar8) +
         (long)(puVar10 + (long)puVar12 + (long)puVar13) + (long)(puVar15 + (long)puVar17);
}



/* Entry: 1072495a8; end: 1072495af; -[MGLMapCamera centerCoordinate] */

undefined1  [16] FUN_1072495a8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 1072495b0; end: 1072495b7; -[MGLMapCamera setCenterCoordinate:] */

void FUN_1072495b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x20) = param_1;
  *(undefined8 *)(param_3 + 0x28) = param_2;
  return;
}



/* Entry: 1072495b8; end: 1072495bf; -[MGLMapCamera heading] */

undefined8 FUN_1072495b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1072495c0; end: 1072495c7; -[MGLMapCamera setHeading:] */

void FUN_1072495c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1072495c8; end: 1072495cf; -[MGLMapCamera pitch] */

undefined8 FUN_1072495c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1072495d0; end: 1072495d7; -[MGLMapCamera setPitch:] */

void FUN_1072495d0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1072495d8; end: 1072495df; -[MGLMapCamera altitude] */

undefined8 FUN_1072495d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1072495e0; end: 1072495e7; -[MGLMapCamera setAltitude:] */

void FUN_1072495e0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1072495e8; end: 1072495f3; -[MGLMapCamera padding] */

undefined8 FUN_1072495e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1072495f4; end: 1072496cb; -[MGLMapCamera setPadding:] */

void FUN_1072495f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x30) = param_1;
  *(undefined8 *)(param_5 + 0x38) = param_2;
  *(undefined8 *)(param_5 + 0x40) = param_3;
  *(undefined8 *)(param_5 + 0x48) = param_4;
  return;
}



/* Entry: 1072496cc; end: 10724975b; +[MGLOfflineStorage sharedOfflineStorage] */

void FUN_1072496cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010724cea0();
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10724975c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136ca150 != -1) {
    func_0x00010002a2fc(0x1136ca150,auStack_48);
  }
  func_0x00010c22bc20(PTR_PTR_1126d5598);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = uRam00000001136ca158;
  func_0x00010724ce44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10724975c; end: 10724984f;  */

void FUN_10724975c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001136ca158;
  uRam00000001136ca158 = uVar2;
  _objc_release(uVar1);
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  func_0x00010724cd44();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  func_0x00010724cd44();
  func_0x00010785f1f4();
  func_0x00010002b838(auStack_48,&UNK_10f4060a9);
  func_0x00010785eeac(puVar3,auStack_48);
  func_0x00010724ce08();
  return;
}



/* Entry: 107249850; end: 107249893; -[MGLOfflineStorage pauseFileSource:] */

void FUN_107249850(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c079ba0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010724cfcc(*(undefined8 *)(param_1 + 0x38));
  func_0x00010724cfcc(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPaused__112654088,1);
  return;
}



/* Entry: 107249894; end: 1072498d7; -[MGLOfflineStorage unpauseFileSource:] */

void FUN_107249894(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c079ba0();
  if ((int)lVar1 != 0) {
    func_0x00010724cfd8(*(undefined8 *)(param_1 + 0x38));
    func_0x00010724cfd8(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPaused__112654088,0);
    return;
  }
  return;
}



/* Entry: 1072498d8; end: 107249b23; -[MGLOfflineStorage setDelegate:] */

long * FUN_1072498d8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *plVar7;
  int extraout_w10;
  long *plVar8;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long alStack_d8 [3];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 *puStack_78;
  undefined1 auStack_70 [32];
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = param_1;
  func_0x00010724cc70(param_1,param_3);
  uStack_48 = extraout_x8;
  _objc_storeWeak(uVar4 + 0x20);
  uVar4 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  uVar5 = uVar4;
  func_0x00010724cd2c();
  if ((uVar4 & 1) == 0) {
    FUN_107249b40(param_1 + 0x10,0);
    plVar7 = *(long **)(param_1 + 0x38);
    uStack_c0 = 0;
    func_0x000107528168(auStack_b8,alStack_d8);
    uStack_98 = 0;
    (**(code **)(*plVar7 + 0x50))(plVar7,auStack_b8);
    FUN_10724bd1c(auStack_b8);
    plVar8 = alStack_d8;
    FUN_10724bd1c();
  }
  else {
    func_0x0001073af260();
    func_0x00010724ce44();
    puVar6 = (undefined8 *)0x48;
    __Znwm();
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_10724b408(puVar6 + 2);
    puVar6[4] = &PTR_FUN_110994dd8;
    puVar6[5] = param_1;
    puVar6[7] = puVar6 + 4;
    puVar6[8] = puVar6 + 2;
    func_0x0001073ada24(puVar6[2],uVar5);
    uStack_e0 = 0;
    FUN_107249b40(param_1 + 0x10,puVar6);
    func_0x00010724b8dc(&uStack_e0);
    plVar8 = *(long **)(param_1 + 0x38);
    lVar1 = *(long *)(param_1 + 0x10) + 0x20;
    plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
    lVar2 = *plVar7;
    lVar3 = plVar7[1];
    lStack_f8 = lVar1;
    lStack_f0 = lVar2;
    lStack_e8 = lVar3;
    if (lVar3 != 0) {
      do {
        func_0x00010724d040();
      } while (extraout_w10 != 0);
    }
    plVar7 = &lStack_f8;
    puStack_78 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    *puVar6 = &PTR_SUB_110994e68;
    puVar6[1] = lVar1;
    puVar6[2] = lVar2;
    puVar6[3] = lVar3;
    lStack_f0 = 0;
    lStack_e8 = 0;
    puStack_78 = puVar6;
    func_0x000107528168(auStack_70,auStack_90);
    uStack_50 = 0;
    (**(code **)(*plVar8 + 0x50))(plVar8,auStack_70);
    FUN_10724bd1c(auStack_70);
    FUN_10724bd1c(auStack_90);
    plVar8 = &lStack_f0;
    FUN_10724ae28();
  }
  func_0x00010724cc40(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10724bd1c(auStack_70);
    FUN_10724bd1c(auStack_90);
    FUN_10724ae28(plVar7 + 1);
    func_0x00010724ce24();
    func_0x00010724cd20();
    return plVar7;
  }
  return plVar8;
}



/* Entry: 107249b24; end: 107249b3f;  */

void FUN_107249b24(void)

{
  func_0x00010724cd20();
  return;
}



/* Entry: 107249b40; end: 107249b93;  */

void FUN_107249b40(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0001073ada2c(**(undefined8 **)(lVar1 + 0x40));
    FUN_10724bd1c(*(long *)(lVar1 + 0x40) + 0x10);
    FUN_10724b54c(lVar1 + 0x10);
    func_0x00010724b8b8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107249b94; end: 107249e43; -[MGLOfflineStorage init] */

undefined8 * FUN_107249b94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  undefined8 auStack_50 [2];
  
  func_0x00010c22bc20(PTR_PTR_1126d5598);
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_1072487b4();
  func_0x00010724d020();
  puVar1 = auStack_50;
  auStack_50[0] = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107527e54(&lStack_58);
    puVar2 = puVar1;
    func_0x00010bf64d20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010002b838(auStack_70,puVar2);
    func_0x000100066230(lStack_58 + 0x30,auStack_70);
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010002b838(auStack_88,puVar3);
    func_0x000100066230(lStack_58 + 0x48,auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    func_0x00010724cd34();
    func_0x00010724cf34();
    func_0x00010724cd2c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    func_0x00010724cd3c();
    func_0x00010789e8a0();
    func_0x000107525958(&uStack_b0);
    uStack_98 = uStack_a8;
    uStack_a0 = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    FUN_107249e44(puVar1 + 9,&uStack_a0);
    func_0x00010724bd50(&uStack_a0);
    func_0x00010724d00c();
    func_0x00010789e8a0();
    func_0x000107525958(&uStack_b0);
    uStack_98 = uStack_a8;
    uStack_a0 = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    FUN_107249e44(puVar1 + 7,&uStack_a0);
    func_0x00010724bd50(&uStack_a0);
    func_0x00010724d00c();
    func_0x00010789e8a0();
    func_0x000107525958(&uStack_c0);
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    func_0x000107249e68(puVar1 + 5,&uStack_a0);
    func_0x00010724bd74(&uStack_a0);
    func_0x00010724d00c();
    func_0x00010724bd50(&uStack_c0);
    func_0x00010c22bc20(PTR_PTR_1126d5578);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010724cf24();
    func_0x00010724cd3c();
    func_0x00010c22bc20(PTR_PTR_1126d5578);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010724cf24();
    func_0x00010724cd3c();
    func_0x000107527f90(&lStack_58);
  }
  return puVar1;
}



/* Entry: 107249e44; end: 107249e8b;  */

void FUN_107249e44(void)

{
  func_0x00010724ccd8();
  func_0x00010724bd50();
  return;
}



/* Entry: 107249e8c; end: 107249f77; -[MGLOfflineStorage dealloc] */

void FUN_107249e8c(undefined8 param_1)

{
  undefined8 auStack_40 [2];
  
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  func_0x00010724cd3c();
  func_0x00010c22bc20(PTR_PTR_1126d5578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580();
  func_0x00010724cd3c();
  func_0x00010c22bc20(PTR_PTR_1126d5578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580();
  func_0x00010724cd3c();
  func_0x00010724d020();
  auStack_40[0] = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107249f78; end: 10724a23b; -[MGLOfflineStorage observeValueForKeyPath:ofObject:change:context:] */

void FUN_107249f78(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  int unaff_w19;
  undefined *unaff_x20;
  ulong unaff_x21;
  long *aplStack_d0 [2];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [64];
  undefined8 uStack_68;
  
  func_0x00010724d02c();
  func_0x00010724cc70();
  uStack_68 = extraout_x8;
  _objc_retain(param_3);
  func_0x00010724ce34();
  _objc_retain();
  iVar1 = unaff_w19;
  func_0x00010c0720c0();
  if (iVar1 == 0) {
LAB_10724a000:
    func_0x00010c0720c0();
    if (unaff_w19 != 0) {
      puVar2 = PTR_PTR_1126d5578;
      func_0x00010c22bc20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      in_ZR = unaff_x20 == puVar2;
      if ((bool)in_ZR) {
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
        _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
        uVar3 = unaff_x21;
        _objc_opt_isKindOfClass(unaff_x21,puVar2);
        param_1 = (long *)param_1[7];
        if ((uVar3 & 1) != 0) {
          func_0x00010724cf3c();
          func_0x00010724cfe4();
          func_0x00010724cd68(*(undefined8 *)(*param_1 + 0x40));
          goto LAB_10724a11c;
        }
        func_0x00010724cf3c();
        func_0x00010beec820(unaff_x21);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc3520(unaff_x21);
        func_0x00010724cfe4();
        func_0x00010724cd68(*(undefined8 *)(*param_1 + 0x40));
        func_0x000104c3323c(auStack_a8);
        func_0x00010724ceb0();
LAB_10724a16c:
        func_0x00010724d004();
        goto LAB_10724a170;
      }
    }
    func_0x00010724d020();
    aplStack_d0[0] = param_1;
    _objc_msgSendSuper2(aplStack_d0,PTR_s_observeValueForKeyPath_ofObject__112615e88);
  }
  else {
    puVar2 = PTR_PTR_1126d5578;
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    in_ZR = unaff_x20 == puVar2;
    if (!(bool)in_ZR) goto LAB_10724a000;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    uVar3 = unaff_x21;
    _objc_opt_isKindOfClass(unaff_x21,puVar2);
    if ((uVar3 & 1) == 0) {
      param_1 = (long *)param_1[7];
      func_0x00010002b838(auStack_c0,&UNK_10f4060d6);
      _objc_retainAutorelease(unaff_x21);
      func_0x00010bdc3520(unaff_x21);
      func_0x00010724cfe4();
      func_0x00010724cd68(*(undefined8 *)(*param_1 + 0x40));
LAB_10724a11c:
      func_0x000104c3323c(auStack_a8);
      goto LAB_10724a16c;
    }
LAB_10724a170:
    func_0x00010724cd34();
  }
  func_0x00010724cd2c();
  func_0x00010724cd3c();
  func_0x00010724cd44();
  func_0x00010724cc40(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724ce58();
  func_0x00010724ceb0();
  func_0x00010724d004();
  func_0x00010724cd34();
  func_0x00010724cd2c();
  func_0x00010724cd3c();
  func_0x00010724cd44();
  __Unwind_Resume(param_1);
  func_0x00010bf64d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10724a23c; end: 10724a287; -[MGLOfflineStorage databasePath] */

void FUN_10724a23c(undefined8 param_1)

{
  func_0x00010bf64d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10724a288; end: 10724a42f; -[MGLOfflineStorage databaseURL] */

void FUN_10724a288(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010724cd2c();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar2);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (((ulong)puVar3 & 1) == 0) {
      lVar5 = param_1;
      _objc_opt_class();
      func_0x00010bf69220();
      _objc_retainAutoreleasedReturnValue();
      *(long *)(param_1 + 8) = lVar5;
    }
    else {
      func_0x00010c25d060(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b4a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad340();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar2;
      _objc_release(uVar4);
      func_0x00010724ceb0();
      func_0x00010724cd34();
      func_0x00010724cd2c();
      func_0x00010bdc2cc0(*(undefined8 *)(param_1 + 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cf14();
      func_0x00010724cd34();
    }
    func_0x00010724cd2c();
    func_0x00010724cd44();
    lVar5 = *(long *)(param_1 + 8);
  }
  func_0x00010724ce44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10724a430; end: 10724a5cb; +[MGLOfflineStorage defaultDatabaseURLIncludingSubdirectory:] */

void FUN_10724a430(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd2c();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0ccf80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010724cd34();
  }
  func_0x00010bdc2c60(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd44();
  if (param_3 != 0) {
    func_0x00010bdc2c60(puVar1,param_2,&PTR____CFConstantStringClassReference_110e06eb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010724cd34();
  }
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cf14();
  func_0x00010724cd34();
  if (param_3 != 0) {
    func_0x00010c1ecdc0(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                        *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_11034ab18,0);
  }
  func_0x00010bdc2c60(puVar1,param_2,&PTR____CFConstantStringClassReference_110e06e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd2c();
  func_0x00010724cd44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10724a5cc; end: 10724a657; +[MGLOfflineStorage legacyDatabasePath] */

void FUN_10724a5cc(void)

{
  undefined8 uVar1;
  
  uVar1 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd3c();
  func_0x00010724cd44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10724a658; end: 10724a6c7; -[MGLOfflineStorage setMaximumAmbientCacheSize:withCompletionHandler:] */

long * FUN_10724a658(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long *plVar2;
  undefined8 uStack_118;
  undefined8 uStack_c8;
  undefined8 uStack_78;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010724cc70();
  plVar2 = *(long **)(param_1 + 0x28);
  uStack_28 = extraout_x8;
  _objc_retainBlock(param_4);
  func_0x00010724ce64(&PTR_DAT_110994f28);
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_3,auStack_48);
  func_0x00010724ce10();
  func_0x00010724cc40(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010724cdc8();
    func_0x00010724cd60();
    func_0x00010724cc70();
    func_0x00010724cd90();
    func_0x00010724ce64(&PTR_DAT_110994fa8);
    func_0x00010724ce94(*(undefined8 *)(*param_3 + 0x90));
    func_0x00010724ce10();
    func_0x00010724cc40(uStack_78);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010724cdc8();
      func_0x00010724cd60();
      func_0x00010724cc70();
      func_0x00010724cd90();
      func_0x00010724ce64(&PTR_DAT_110995028);
      func_0x00010724ce94(*(undefined8 *)(*param_3 + 0x98));
      func_0x00010724ce10();
      func_0x00010724cc40(uStack_c8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010724cdc8();
        func_0x00010724cd60();
        func_0x00010724cc70();
        func_0x00010724cd90();
        func_0x00010724ce64(&PTR_DAT_1109950d8);
        func_0x00010724ce94(*(undefined8 *)(*param_3 + 0x60));
        func_0x00010724ce10();
        func_0x00010724cc40(uStack_118);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010724cdc8();
          func_0x00010724cd60();
          plVar1 = (long *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf64d20(plVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0e880(plVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010724cd2c();
          func_0x00010724cd44();
          func_0x00010bfad040(plVar1);
          func_0x00010724cd3c();
          return plVar1;
        }
      }
    }
  }
  return plVar2;
}



/* Entry: 10724a6c8; end: 10724a71b; -[MGLOfflineStorage invalidateAmbientCacheWithCompletionHandler:] */

undefined * FUN_10724a6c8(undefined *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long *unaff_x19;
  undefined8 uStack_c8;
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  func_0x00010724cc70();
  func_0x00010724cd90();
  func_0x00010724ce64(&PTR_DAT_110994fa8);
  func_0x00010724ce94(*(undefined8 *)(*unaff_x19 + 0x90));
  func_0x00010724ce10();
  func_0x00010724cc40(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010724cdc8();
    func_0x00010724cd60();
    func_0x00010724cc70();
    func_0x00010724cd90();
    func_0x00010724ce64(&PTR_DAT_110995028);
    func_0x00010724ce94(*(undefined8 *)(*unaff_x19 + 0x98));
    func_0x00010724ce10();
    func_0x00010724cc40(uStack_78);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010724cdc8();
      func_0x00010724cd60();
      func_0x00010724cc70();
      func_0x00010724cd90();
      func_0x00010724ce64(&PTR_DAT_1109950d8);
      func_0x00010724ce94(*(undefined8 *)(*unaff_x19 + 0x60));
      func_0x00010724ce10();
      func_0x00010724cc40(uStack_c8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010724cdc8();
        func_0x00010724cd60();
        puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf64d20(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0e880(puVar1,param_2,param_1,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010724cd2c();
        func_0x00010724cd44();
        func_0x00010bfad040(puVar1);
        func_0x00010724cd3c();
        return puVar1;
      }
    }
  }
  return param_1;
}



/* Entry: 10724a71c; end: 10724a76f; -[MGLOfflineStorage clearAmbientCacheWithCompletionHandler:] */

undefined * FUN_10724a71c(undefined *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long *unaff_x19;
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  func_0x00010724cc70();
  func_0x00010724cd90();
  func_0x00010724ce64(&PTR_DAT_110995028);
  func_0x00010724ce94(*(undefined8 *)(*unaff_x19 + 0x98));
  func_0x00010724ce10();
  func_0x00010724cc40(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010724cdc8();
    func_0x00010724cd60();
    func_0x00010724cc70();
    func_0x00010724cd90();
    func_0x00010724ce64(&PTR_DAT_1109950d8);
    func_0x00010724ce94(*(undefined8 *)(*unaff_x19 + 0x60));
    func_0x00010724ce10();
    func_0x00010724cc40(uStack_78);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010724cdc8();
      func_0x00010724cd60();
      puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64d20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0e880(puVar1,param_2,param_1,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724cd2c();
      func_0x00010724cd44();
      func_0x00010bfad040(puVar1);
      func_0x00010724cd3c();
      return puVar1;
    }
  }
  return param_1;
}



/* Entry: 10724a770; end: 10724a7c3; -[MGLOfflineStorage resetDatabaseWithCompletionHandler:] */

undefined * FUN_10724a770(undefined *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long *unaff_x19;
  undefined8 uStack_28;
  
  func_0x00010724cc70();
  func_0x00010724cd90();
  func_0x00010724ce64(&PTR_DAT_1109950d8);
  func_0x00010724ce94(*(undefined8 *)(*unaff_x19 + 0x60));
  func_0x00010724ce10();
  func_0x00010724cc40(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010724cdc8();
  func_0x00010724cd60();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e880(puVar1,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd2c();
  func_0x00010724cd44();
  func_0x00010bfad040(puVar1);
  func_0x00010724cd3c();
  return puVar1;
}



/* Entry: 10724a7c4; end: 10724a86f; -[MGLOfflineStorage countOfBytesCompleted] */

undefined * FUN_10724a7c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e880(puVar1,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724cd2c();
  func_0x00010724cd44();
  func_0x00010bfad040(puVar1);
  func_0x00010724cd3c();
  return puVar1;
}



/* Entry: 10724a870; end: 10724a88b; -[MGLOfflineStorage preloadData:forURL:modificationDate:expirationDate:eTag:mustRevalidate:] */

void FUN_10724a870(void)

{
  func_0x00010c108680();
  return;
}



/* Entry: 10724a88c; end: 10724ac0b; -[MGLOfflineStorage preloadData:forURL:modificationDate:expirationDate:eTag:mustRevalidate:completionHandler:] */

void FUN_10724a88c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long in_x6;
  undefined1 in_w7;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar4;
  long in_stack_00000000;
  undefined1 uStack_411;
  undefined1 *puStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [56];
  undefined1 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_398 [32];
  undefined1 auStack_378 [24];
  undefined8 uStack_360;
  undefined1 auStack_358 [16];
  undefined7 uStack_348;
  undefined1 uStack_341;
  undefined2 uStack_340;
  undefined1 uStack_33e;
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  byte bStack_320;
  ulong uStack_318;
  byte bStack_310;
  undefined1 auStack_308 [24];
  undefined1 uStack_2f0;
  undefined1 uStack_2e8;
  undefined1 uStack_2e4;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [72];
  undefined1 uStack_290;
  undefined1 auStack_288 [504];
  undefined **ppuStack_90;
  long lStack_88;
  
  func_0x00010724d02c();
  func_0x00010724cc70();
  _objc_retain(param_4);
  func_0x00010724ce34();
  _objc_retain();
  _objc_retain();
  _objc_retain(in_x6);
  _objc_retain(in_stack_00000000);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x20;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000100060964(auStack_358,uVar1);
  auStack_2d8[0] = 0;
  uStack_290 = 0;
  auStack_3f0[0] = 0;
  uStack_3b8 = 0;
  FUN_10724aea8(auStack_288,0,auStack_358,auStack_2d8,3,auStack_3f0);
  FUN_10724b12c(auStack_3f0);
  FUN_10724b2ac(auStack_2d8);
  func_0x000104c2f714(auStack_358);
  _objc_release(unaff_x20);
  auStack_358[0] = 2;
  bStack_320 = 0;
  uStack_318 = uStack_318 & 0xffffffffffffff00;
  bStack_310 = 0;
  auStack_308[0] = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  uStack_348 = 0;
  uStack_341 = 0;
  uStack_340 = 0;
  uStack_33e = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  uStack_328 = uStack_328 & 0xffffffffffffff00;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c08fa60();
  uStack_3b0 = unaff_x19;
  FUN_10724ac0c(&ppuStack_90,auStack_378,&uStack_3b0);
  FUN_10724ac30(&uStack_338,&ppuStack_90);
  FUN_10724c894(&ppuStack_90);
  uStack_33e = in_w7;
  if (in_x6 != 0) {
    _objc_retainAutorelease(in_x6);
    func_0x00010bdc3520(in_x6);
    func_0x00010002b838(&ppuStack_90,in_x6);
    func_0x000100602604(auStack_308,&ppuStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_90);
  }
  if (unaff_x21 != 0) {
    func_0x00010c26f320();
    param_1 = param_1 * 1000000000.0;
    uStack_328 = (long)param_1 / 1000000000;
    if ((bStack_320 & 1) == 0) {
      bStack_320 = 1;
    }
  }
  if (unaff_x22 != 0) {
    func_0x00010c26f320();
    uStack_318 = (long)(param_1 * 1000000000.0) / 1000000000;
    if ((bStack_310 & 1) == 0) {
      bStack_310 = 1;
    }
  }
  uStack_360 = 0;
  if (in_stack_00000000 != 0) {
    _objc_retainBlock();
    func_0x00010724ce34();
    uStack_400 = 0;
    uStack_3f8 = 0;
    ppuStack_90 = &PTR_DAT_1109951a8;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    lStack_88 = in_stack_00000000;
    func_0x00010724ac54(&uStack_3b0);
    FUN_10724cacc(&ppuStack_90,auStack_378);
    func_0x0001006393ec(&ppuStack_90);
    func_0x00010724ac54(&uStack_400);
  }
  plVar4 = *(long **)(param_2 + 0x28);
  FUN_10724cbe8(auStack_398,auStack_378);
  puVar3 = auStack_288;
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar3,auStack_358,auStack_398);
  func_0x0001006393ec(auStack_398);
  func_0x0001006393ec(auStack_378);
  func_0x00010724b340(auStack_358);
  puVar2 = auStack_288;
  func_0x00010724b374(puVar2);
  func_0x00010724ceb0();
  func_0x00010724cf34();
  func_0x00010724cd34();
  func_0x00010724cd2c();
  func_0x00010724cd3c();
  func_0x00010724cd44();
  func_0x00010724cc40(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b340(auStack_358);
  func_0x00010724b374(auStack_288);
  func_0x00010724ceb0();
  func_0x00010724cf34();
  func_0x00010724cd34();
  func_0x00010724cd2c();
  func_0x00010724cd3c();
  func_0x00010724cd44();
  __Unwind_Resume(puVar2);
  pcStack_408 = FUN_10724ac0c;
  puStack_410 = &stack0xfffffffffffffff0;
  FUN_10724c720(&uStack_411,puVar2,puVar3);
  return;
}



/* Entry: 10724ac0c; end: 10724ac2f;  */

void FUN_10724ac0c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10724c720(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10724ac30; end: 10724ac77;  */

void FUN_10724ac30(void)

{
  func_0x00010724ccd8();
  func_0x000104c33970();
  return;
}



/* Entry: 10724ac78; end: 10724ac87; -[MGLOfflineStorage putResourceWithUrl:data:modified:expires:etag:mustRevalidate:] */

void FUN_10724ac78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_preloadData_forURL_modificationD_11261fbb8,param_4,param_3);
  return;
}



/* Entry: 10724ac88; end: 10724ac9f; -[MGLOfflineStorage delegate] */

void FUN_10724ac88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10724aca0; end: 10724acc7; -[MGLOfflineStorage mbglDatabaseFileSource] */

void FUN_10724aca0(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010724d040(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10724acc8; end: 10724ad07; -[MGLOfflineStorage setMbglDatabaseFileSource:] */

void FUN_10724acc8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010724d040();
    } while (extraout_w10 != 0);
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x00010724bd74(&uStack_20);
  return;
}



/* Entry: 10724ad08; end: 10724ad2f; -[MGLOfflineStorage mbglOnlineFileSource] */

void FUN_10724ad08(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010724d040(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10724ad30; end: 10724ad3b; -[MGLOfflineStorage setMbglOnlineFileSource:] */

undefined8 * FUN_10724ad30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *param_3;
  lVar3 = param_3[1];
  puVar1 = (undefined8 *)(param_1 + 0x38);
  if (lVar3 != 0) {
    do {
      func_0x00010724d040();
    } while (extraout_w10 != 0);
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *puVar1;
  *puVar1 = uVar2;
  *(long *)(param_1 + 0x40) = lVar3;
  func_0x00010724bd50(&uStack_30);
  return puVar1;
}



/* Entry: 10724ad3c; end: 10724ad7f;  */

undefined8 * FUN_10724ad3c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      func_0x00010724d040();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010724bd50(&uStack_30);
  return param_1;
}



/* Entry: 10724ad80; end: 10724ada7; -[MGLOfflineStorage mbglFileSource] */

void FUN_10724ad80(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010724d040(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10724ada8; end: 10724adb3; -[MGLOfflineStorage setMbglFileSource:] */

undefined8 * FUN_10724ada8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *param_3;
  lVar3 = param_3[1];
  puVar1 = (undefined8 *)(param_1 + 0x48);
  if (lVar3 != 0) {
    do {
      func_0x00010724d040();
    } while (extraout_w10 != 0);
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *puVar1;
  *puVar1 = uVar2;
  *(long *)(param_1 + 0x50) = lVar3;
  func_0x00010724bd50(&uStack_30);
  return puVar1;
}



/* Entry: 10724adb4; end: 10724adbb; -[MGLOfflineStorage isPaused] */

undefined1 FUN_10724adb4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10724adbc; end: 10724adc3; -[MGLOfflineStorage setPaused:] */

void FUN_10724adbc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10724adc4; end: 10724ae0f; -[MGLOfflineStorage .cxx_destruct] */

void FUN_10724adc4(long param_1)

{
  func_0x00010724bd50(param_1 + 0x48);
  func_0x00010724bd50(param_1 + 0x38);
  func_0x00010724bd74(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  func_0x00010724b8dc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10724ae10; end: 10724ae27; -[MGLOfflineStorage .cxx_construct] */

void FUN_10724ae10(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10724ae28; end: 10724aea7;  */

void FUN_10724ae28(long param_1)

{
  func_0x00010724ce4c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10724aea8; end: 10724af53;  */

undefined1 *
FUN_10724aea8(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_5;
  *(undefined2 *)(param_1 + 2) = 0;
  func_0x000104c2fe00(param_1 + 8,param_3);
  param_1[0x40] = 0;
  param_1[0x78] = 0;
  FUN_10724af54(param_1 + 0x80,param_4);
  FUN_10724afdc(param_1 + 0xd0,param_6);
  param_1[0x110] = 0;
  param_1[0x118] = 0;
  param_1[0x120] = 0;
  param_1[0x128] = 0;
  param_1[0x130] = 0;
  param_1[0x148] = 0;
  param_1[0x170] = 0;
  param_1[0x1a8] = 0;
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  param_1[0x168] = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0x3f800000;
  return param_1;
}



/* Entry: 10724af54; end: 10724af7f;  */

undefined1 * FUN_10724af54(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x48] = 0;
  FUN_10724af80();
  return param_1;
}



/* Entry: 10724af80; end: 10724af93;  */

void FUN_10724af80(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_10724afb0();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  return;
}



/* Entry: 10724af94; end: 10724afaf;  */

void FUN_10724af94(long param_1)

{
  FUN_10724afb0();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 10724afb0; end: 10724afdb;  */

void FUN_10724afb0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3d) = *(undefined8 *)(param_2 + 0x3d);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 10724afdc; end: 10724b007;  */

undefined1 * FUN_10724afdc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  FUN_10724b008();
  return param_1;
}



/* Entry: 10724b008; end: 10724b01b;  */

void FUN_10724b008(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_10724b038();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 10724b01c; end: 10724b037;  */

void FUN_10724b01c(long param_1)

{
  FUN_10724b038();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 10724b038; end: 10724b05f;  */

undefined4 * FUN_10724b038(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_10724b060(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10724b060; end: 10724b08b;  */

undefined1 * FUN_10724b060(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_10724b08c();
  return param_1;
}



/* Entry: 10724b08c; end: 10724b09f;  */

void FUN_10724b08c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_10724b0bc();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10724b0a0; end: 10724b0bb;  */

void FUN_10724b0a0(long param_1)

{
  FUN_10724b0bc();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10724b0bc; end: 10724b12b;  */

void FUN_10724b0bc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10724b12c; end: 10724b15b;  */

long FUN_10724b12c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10724b15c(param_1 + 8);
  }
  return param_1;
}



/* Entry: 10724b15c; end: 10724b17b;  */

void FUN_10724b15c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10724b17c();
  }
  return;
}



/* Entry: 10724b17c; end: 10724b203;  */

long FUN_10724b17c(long param_1)

{
  func_0x00010724b1a4(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10724b294(param_1,0);
  return param_1;
}



/* Entry: 10724b204; end: 10724b253;  */

void FUN_10724b204(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x00010724cec8((&PTR_FUN_110994d98)[*(uint *)(param_1 + 0x18)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10724b254; end: 10724b26f;  */

void FUN_10724b254(void)

{
  return;
}



/* Entry: 10724b270; end: 10724b293;  */

undefined8 FUN_10724b270(undefined8 param_1)

{
  FUN_10724b294(param_1,0);
  return param_1;
}



/* Entry: 10724b294; end: 10724b2ab;  */

void FUN_10724b294(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10724b2ac; end: 10724b2ff;  */

long FUN_10724b2ac(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x000104c2f714(param_1);
  }
  return param_1;
}



/* Entry: 10724b300; end: 10724b317;  */

void FUN_10724b300(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10724b318; end: 10724b407;  */

void FUN_10724b318(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10724b408; end: 10724b423;  */

void FUN_10724b408(void)

{
  undefined1 uStack_11;
  
  FUN_10724b424(&uStack_11);
  return;
}



/* Entry: 10724b424; end: 10724b48b;  */

undefined1 * FUN_10724b424(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010724cc70();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_10724b48c(auStack_40);
  FUN_10724b4e0();
  func_0x00010724cf88();
  FUN_10724b570();
  func_0x00010724cc40(uStack_28);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  FUN_10724b570();
  func_0x00010724cd60();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_10724b4b4();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}


