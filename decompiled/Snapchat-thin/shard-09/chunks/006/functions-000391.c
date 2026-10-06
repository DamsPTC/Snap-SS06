/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f19944; end: 106f19953;  */

void FUN_106f19944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106f19950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106f19954; end: 106f19a6f; -[SCPostableContentDestinationsPersistence _allDestinationsFetchedResult] */

void FUN_106f19954(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    _objc_opt_class(PTR_PTR_1126d32f0);
    if (lVar1 == 0) {
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_70,lVar1);
    }
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    uStack_8c = 0;
    puVar2 = &uStack_70;
    func_0x00010054c81c(puVar2,&lStack_88,&uStack_8c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_48);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    puVar3 = PTR_PTR_1126c0ab0;
    func_0x00010bfab920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  func_0x00010bfab8e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f19a70; end: 106f19b2b; -[SCPostableContentDestinationsPersistence upsertDestinations:completionQueue:completionHandler:] */

void FUN_106f19a70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106f19b2c;
  puStack_40 = &UNK_11084f688;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,param_5);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f19b2c; end: 106f19ca3;  */

void FUN_106f19b2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        FUN_106f1a504(uVar2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  uVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(puVar5);
  func_0x00010bdc9d60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f19ca4; end: 106f19d6b; -[SCPostableContentDestinationsPersistence allDestinationsObservableWithObservationQueue:] */

void FUN_106f19ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bdc9d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e0500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f19d6c; end: 106f19d8b;  */

void FUN_106f19d6c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f19d8c; end: 106f19dbb; -[SCPostableContentDestinationsPersistence .cxx_destruct] */

void FUN_106f19d8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f19dbc; end: 106f19eab; -[SCPostableContentDestination initWithId:postingStoryType:postingMyStoryPrivacy:renderingData:postingStoryTypeVariant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f19dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f7cf0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112761124);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112761124) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112761128) = param_4;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11276112c) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112761130);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112761130) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112761134) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f19eac; end: 106f19ecf; -[SCPostableContentDestination copyWithZone:] */

undefined8 FUN_106f19eac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f19ed0; end: 106f19f6b; -[SCPostableContentDestination hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106f19ed0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761124);
  func_0x00010bfde980();
  lStack_48 = (long)*(int *)(param_1 + _DAT_112761128);
  lStack_40 = (long)*(int *)(param_1 + _DAT_11276112c);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112761130);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + _DAT_112761134);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106f1a044:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106f1a050;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(int *)((long)puVar3 + (long)_DAT_112761128) == *(int *)(param_3 + _DAT_112761128) &&
         (*(int *)((long)puVar3 + (long)_DAT_11276112c) == *(int *)(param_3 + _DAT_11276112c))) &&
        (*(int *)((long)puVar3 + (long)_DAT_112761134) == *(int *)(param_3 + _DAT_112761134))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112761124);
      if ((lVar5 == *(long *)(param_3 + _DAT_112761124)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_112761130);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_112761130)) {
          func_0x00010c071ae0();
          goto LAB_106f1a050;
        }
        goto LAB_106f1a044;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106f1a050:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106f19f6c; end: 106f1a06b; -[SCPostableContentDestination isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106f19f6c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106f1a044:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106f1a050;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(int *)(param_1 + (long)_DAT_112761128) == *(int *)(param_3 + (long)_DAT_112761128) &&
         (*(int *)(param_1 + (long)_DAT_11276112c) == *(int *)(param_3 + (long)_DAT_11276112c))) &&
        (*(int *)(param_1 + (long)_DAT_112761134) == *(int *)(param_3 + (long)_DAT_112761134))))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112761124);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112761124)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112761130);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112761130)) {
          func_0x00010c071ae0();
          goto LAB_106f1a050;
        }
        goto LAB_106f1a044;
      }
    }
    lVar3 = 0;
  }
LAB_106f1a050:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106f1a06c; end: 106f1a07b; -[SCPostableContentDestination id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f1a06c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761124);
}



/* Entry: 106f1a07c; end: 106f1a08b; -[SCPostableContentDestination postingStoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106f1a07c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112761128);
}



/* Entry: 106f1a08c; end: 106f1a09b; -[SCPostableContentDestination postingMyStoryPrivacy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106f1a08c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11276112c);
}



/* Entry: 106f1a09c; end: 106f1a0ab; -[SCPostableContentDestination renderingData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f1a09c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761130);
}



/* Entry: 106f1a0ac; end: 106f1a0bb; -[SCPostableContentDestination postingStoryTypeVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106f1a0ac(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112761134);
}



/* Entry: 106f1a0bc; end: 106f1a0fb; -[SCPostableContentDestination .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f1a0bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112761130,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761124,0);
  return;
}



/* Entry: 106f1a0fc; end: 106f1a143; -[SCRenderingData initWithIsAboveFirstFold:] */

void FUN_106f1a0fc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7cf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106f1a144; end: 106f1a167; -[SCRenderingData copyWithZone:] */

undefined8 FUN_106f1a144(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f1a168; end: 106f1a16f; -[SCRenderingData hash] */

undefined1 FUN_106f1a168(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106f1a170; end: 106f1a1f7; -[SCRenderingData isEqual:] */

bool FUN_106f1a170(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106f1a1f8; end: 106f1a1ff; -[SCRenderingData isAboveFirstFold] */

undefined1 FUN_106f1a1f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106f1a200; end: 106f1a20b; +[SCPostableContentDestination table] */

undefined * FUN_106f1a200(void)

{
  return &UNK_10f3e0994;
}



/* Entry: 106f1a20c; end: 106f1a3ef; +[SCPostableContentDestination immutableObjectParse:bufferSize:] */

void FUN_106f1a20c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d32f0;
  _objc_alloc(PTR_PTR_1126d32f0);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
LAB_106f1a2c0:
    uVar9 = 0;
LAB_106f1a2c4:
    uVar10 = 0;
LAB_106f1a2c8:
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar5 < 7) goto LAB_106f1a2c0;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 6);
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    if (uVar5 < 9) goto LAB_106f1a2c4;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 8);
    if (uVar7 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    if (uVar5 < 0xb) goto LAB_106f1a2c8;
    if (*(short *)((long)piVar1 + lVar6 + 10) == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR_PTR_1126d3300;
      _objc_alloc(PTR_PTR_1126d3300);
      func_0x00010c01ec00();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((0xc < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xc), uVar7 != 0)) {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar7);
      goto LAB_106f1a2d0;
    }
  }
  uVar4 = 0;
LAB_106f1a2d0:
  func_0x00010c01b300(puVar3,param_2,puVar8,uVar9,uVar10,puVar11,uVar4);
  _objc_release(puVar11);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f1a3f0; end: 106f1a413; +[SCPostableContentDestination objectClassFunctionPointer] */

undefined1  [16] FUN_106f1a3f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x106f1a40c;
  auVar1._0_8_ = 0x106f1a404;
  return auVar1;
}



/* Entry: 106f1a414; end: 106f1a503;  */

undefined1 *
FUN_106f1a414(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126f7d00;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_3;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x14) = param_4;
      *(undefined4 *)((long)plVar1 + 0x18) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x1c) = param_7;
    }
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106f1a504; end: 106f1aae3;  */

void FUN_106f1a504(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  
  _objc_retain();
  puVar13 = PTR_PTR_1126d32f8;
  _objc_retain(param_1);
  _objc_opt_self(puVar13);
  _objc_retain(param_1);
  if (param_1 == 0) {
LAB_106f1a8dc:
    lVar10 = 0;
LAB_106f1a8e0:
    _objc_release(lVar10);
  }
  else {
    lVar1 = param_1;
    func_0x00010c1422e0();
    if (lVar1 < 0) {
      lVar1 = param_1;
      func_0x00010bfe5d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar10 = param_1;
      if (lVar1 != 0) {
        puVar13 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar13;
        func_0x00010bf636c0();
        _objc_release(puVar13);
        func_0x0001001b9e08(puVar2,&UNK_10f3e09b7);
        if (puVar2 != (undefined *)0x0) {
          lVar1 = param_1;
          func_0x00010bfe5d80(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          lVar3 = lVar1;
          _objc_retainAutorelease(lVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar2,1,lVar3,0xffffffff,0xffffffffffffffff);
          _objc_release(lVar1);
          _objc_release(lVar1);
          puVar13 = puVar2;
          _sqlite3_step();
          if ((int)puVar13 == 100) {
            puVar13 = puVar2;
            _sqlite3_column_int64(puVar2,0);
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d32f0);
            _sqlite3_column_blob(puVar2,1);
            _sqlite3_column_bytes(puVar2,1);
            puVar5 = puVar4;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar4);
            _sqlite3_reset(puVar2);
            if (puVar5 == (undefined *)0x0) goto LAB_106f1a8dc;
            puVar2 = PTR_PTR_1126d32f8;
            _objc_alloc();
            puVar4 = puVar5;
            func_0x00010bfe5d80(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c105a40(puVar5);
            puVar7 = puVar5;
            func_0x00010c105920(puVar5);
            puVar8 = puVar5;
            func_0x00010c130760(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar5;
            func_0x00010c105a60(puVar5);
            FUN_106f1a414(puVar2,puVar13,puVar4,puVar6,puVar7,puVar8,puVar9);
            goto LAB_106f1a640;
          }
        }
      }
      goto LAB_106f1a8e0;
    }
    lVar1 = param_1;
    func_0x00010c1422e0(param_1);
    puVar13 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d32f0);
    puVar5 = puVar13;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar13);
    if (puVar5 == (undefined *)0x0) goto LAB_106f1a8dc;
    puVar2 = PTR_PTR_1126d32f8;
    _objc_alloc();
    puVar4 = puVar5;
    func_0x00010bfe5d80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    func_0x00010c105a40(puVar5);
    puVar6 = puVar5;
    func_0x00010c105920(puVar5);
    puVar8 = puVar5;
    func_0x00010c130760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c105a60(puVar5);
    FUN_106f1a414(puVar2,lVar1,puVar4,puVar13,puVar6,puVar8,puVar7);
LAB_106f1a640:
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_1);
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      lVar1 = param_1;
      func_0x00010bfe5d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c105a40();
      *(int *)(puVar2 + 0x14) = (int)lVar1;
      lVar1 = param_1;
      func_0x00010c105920();
      *(int *)(puVar2 + 0x18) = (int)lVar1;
      lVar1 = param_1;
      func_0x00010c130760(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c105a60();
      *(int *)(puVar2 + 0x1c) = (int)lVar1;
      _objc_retain(puVar2);
      puVar13 = puVar2;
      goto LAB_106f1a9c0;
    }
  }
  _objc_release(param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  puVar13 = PTR_PTR_1126d32f8;
  _objc_retain(param_1);
  _objc_opt_self(puVar13);
  puVar2 = PTR_PTR_1126d32f8;
  if (param_1 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bfe5d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c105a40(param_1);
    lVar3 = param_1;
    func_0x00010c105920(param_1);
    lVar11 = param_1;
    func_0x00010c130760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c105a60(param_1);
    FUN_106f1a414(puVar2,0xffffffffffffffff,lVar1,lVar10,lVar3,lVar11,lVar12);
    _objc_release(lVar11);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_1);
  puVar13 = (undefined *)0x0;
LAB_106f1a9c0:
  _objc_release(puVar13);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f1aae4; end: 106f1ab4b;  */

void FUN_106f1aae4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d32f0;
    _objc_alloc(PTR_PTR_1126d32f0);
    func_0x00010c01b300();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f1ab4c; end: 106f1ab7b; -[SCPostableContentDestinationChangeRequest .cxx_destruct] */

void FUN_106f1ab4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106f1ab7c; end: 106f1ab87; -[SCPostableContentDestinationChangeRequest table] */

undefined * FUN_106f1ab7c(void)

{
  return &UNK_10f3e0994;
}



/* Entry: 106f1ab88; end: 106f1abcf; -[SCPostableContentDestinationChangeRequest createTableWithSQLite:] */

void FUN_106f1ab88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10de15f7c,0x88,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 106f1abd0; end: 106f1af57; -[SCPostableContentDestinationChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106f1abd0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_106f1aae4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106f1af58(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3e0a41);
    if (lVar6 == 0) goto LAB_106f1aef4;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106f1aef4;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d32f0);
    func_0x00010c21c9a0(puVar7);
LAB_106f1aedc:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f3e0a03);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d32f0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106f1af00;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_106f1af00;
    }
    FUN_106f1aae4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106f1af58(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3e0a88);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d32f0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_106f1aedc;
      }
    }
LAB_106f1aef4:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106f1af00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106f1af58; end: 106f1b267;  */

ulong FUN_106f1af58(ulong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  _objc_retain(param_2);
  pcVar6 = param_2;
  func_0x00010c130760();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar6 == (char *)0x0) {
    uVar13 = 0;
  }
  else {
    pcVar7 = param_2;
    func_0x00010c130760(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    pcVar8 = pcVar7;
    func_0x00010c06b440(pcVar7);
    *(undefined1 *)(param_1 + 0x46) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100ab13ac(param_1,4,pcVar8,0);
    uVar13 = param_1;
    func_0x0001001ce548(param_1,((int)uVar12 - (int)uVar2) + (int)uVar1);
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    uVar13 = uVar13 & 0xffffffff;
  }
  _objc_release(pcVar6);
  pcVar6 = param_2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar6 == (char *)0x0) {
    uVar11 = 0;
    goto LAB_106f1b0f0;
  }
  pcVar7 = pcVar6;
  _CFStringGetCStringPtr(pcVar6,0x8000100);
  uVar11 = param_1;
  if (pcVar7 != (char *)0x0) {
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    func_0x0001001cde08(param_1,pcVar7,pcVar8);
    goto LAB_106f1b0f0;
  }
  pcVar7 = pcVar6;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar7 == (char *)0x0) {
    pcVar7 = pcVar6;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar7 != (char *)0x0) goto LAB_106f1b0b0;
    uVar11 = 0;
  }
  else {
LAB_106f1b0b0:
    pcVar9 = pcVar7;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar10 = pcVar7;
    func_0x00010c08fa60(pcVar7);
    pcVar8 = "";
    if (pcVar9 != (char *)0x0) {
      pcVar8 = pcVar9;
    }
    func_0x0001001cde08(param_1,pcVar8,pcVar10);
  }
  _objc_release(pcVar7);
LAB_106f1b0f0:
  _objc_release(pcVar6);
  pcVar7 = param_2;
  func_0x00010c105a40(param_2);
  pcVar8 = param_2;
  func_0x00010c105920(param_2);
  pcVar9 = param_2;
  func_0x00010c105a60(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x000100c3b024(param_1,0xc,pcVar9,0);
  if (uVar13 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,10,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar13) + 4,0);
  }
  func_0x000100c3b024(param_1,8,pcVar8,0);
  func_0x000100c3b024(param_1,6,pcVar7,0);
  func_0x0001001ce2e4(param_1,4,uVar11 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(pcVar6);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106f1b268; end: 106f1b2db; -[UNISCPCDPostableContentDestinations initWithUnifiedGrpcService:] */

undefined1 * FUN_106f1b268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7d08;
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



/* Entry: 106f1b2dc; end: 106f1b3bf; -[UNISCPCDPostableContentDestinations getPostableContentDestinationsWithRequest:callOptionsBuilder:handler:] */

void FUN_106f1b2dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d3308;
  _objc_opt_class(PTR_PTR_1126d3308);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e8c6d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106f1b3c0; end: 106f1b3cb; -[UNISCPCDPostableContentDestinations .cxx_destruct] */

void FUN_106f1b3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f1b3cc; end: 106f1b447;  */

undefined * FUN_106f1b3cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8040 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c6f8,
                        &UNK_10de16010,&UNK_10de16020,2,FUN_106f1b448,0);
    do {
      if (puRam00000001136c8040 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8040;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8040,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8040 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8040;
}



/* Entry: 106f1b448; end: 106f1b453;  */

bool FUN_106f1b448(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106f1b454; end: 106f1b4bb; +[SCPCDGetPostableContentDestinationsRequest descriptor] */

void FUN_106f1b454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b454f0,
                        &PTR____CFConstantStringClassReference_110e8c718,&PTR_DAT_11318b890,
                        &PTR_DAT_11318b8a8,1,0x10,0x1c);
    puRam00000001136c8048 = puVar1;
  }
  return;
}



/* Entry: 106f1b4bc; end: 106f1b523; +[SCPCDGetPostableContentDestinationsResponse descriptor] */

void FUN_106f1b4bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45540,
                        &PTR____CFConstantStringClassReference_110e8c738,&PTR_DAT_11318b890,
                        &PTR_DAT_11318b8c8,1,0x10,0x1c);
    puRam00000001136c8050 = puVar1;
  }
  return;
}



/* Entry: 106f1b524; end: 106f1b58b; +[SCPCDOrderedContentDestination descriptor] */

void FUN_106f1b524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45590,
                        &PTR____CFConstantStringClassReference_110e8c758,&PTR_DAT_11318b890,
                        &PTR_DAT_11318b908,2,0x10,0x1c);
    puRam00000001136c8058 = puVar1;
  }
  return;
}



/* Entry: 106f1b58c; end: 106f1b5f3; +[SCPCDContentDestination descriptor] */

void FUN_106f1b58c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b455e0,
                        &PTR____CFConstantStringClassReference_110e8c778,&PTR_DAT_11318b890,
                        &PTR_s_id_p_11318b948,7,0x30,0x1c);
    puRam00000001136c8060 = puVar1;
  }
  return;
}



/* Entry: 106f1b5f4; end: 106f1b6d7; +[SCPCDContentRenderingData descriptor] */

void FUN_106f1b5f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45630,
                        &PTR____CFConstantStringClassReference_110e8c798,&PTR_DAT_11318b890,
                        &PTR_DAT_11318b8e8,1,4,0x1c);
    puRam00000001136c8068 = puVar1;
  }
  return;
}



/* Entry: 106f1b6d8; end: 106f1b6e3;  */

bool FUN_106f1b6d8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106f1b6e4; end: 106f1b7b3; +[SCSCOREMyStoryPrivacy descriptor] */

void FUN_106f1b6e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b456d0,
                        &PTR____CFConstantStringClassReference_110e8c7d8,&PTR_DAT_11318ba28,0,0,4,
                        0x1c);
    puRam00000001136c8078 = puVar1;
  }
  return;
}



/* Entry: 106f1b7b4; end: 106f1b85f; -[SCSearchDeploymentConfiguration initWithBaseURL:routeTag:] */

undefined1 *
FUN_106f1b7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7d10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f1b860; end: 106f1b883; -[SCSearchDeploymentConfiguration copyWithZone:] */

undefined8 FUN_106f1b860(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f1b884; end: 106f1b8f7; -[SCSearchDeploymentConfiguration hash] */

undefined8 * FUN_106f1b884(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106f1b978:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106f1b984;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106f1b984;
        }
        goto LAB_106f1b978;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106f1b984:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106f1b8f8; end: 106f1b99f; -[SCSearchDeploymentConfiguration isEqual:] */

long FUN_106f1b8f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106f1b978:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106f1b984;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106f1b984;
        }
        goto LAB_106f1b978;
      }
    }
    lVar3 = 0;
  }
LAB_106f1b984:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106f1b9a0; end: 106f1b9a7; -[SCSearchDeploymentConfiguration baseURL] */

undefined8 FUN_106f1b9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f1b9a8; end: 106f1b9af; -[SCSearchDeploymentConfiguration routeTag] */

undefined8 FUN_106f1b9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f1b9b0; end: 106f1ba5b; -[SCSearchDeploymentConfiguration .cxx_destruct] */

void FUN_106f1b9b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f1ba5c; end: 106f1ba67;  */

bool FUN_106f1ba5c(uint param_1)

{
  return param_1 < 0x23;
}



/* Entry: 106f1ba68; end: 106f1bae3;  */

undefined * FUN_106f1ba68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8088 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c838,
                        &UNK_10de16360,&UNK_10de16388,3,FUN_106f1bae4,0);
    do {
      if (puRam00000001136c8088 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8088;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8088,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8088 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8088;
}



/* Entry: 106f1bae4; end: 106f1baef;  */

bool FUN_106f1bae4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106f1baf0; end: 106f1bb6b;  */

undefined * FUN_106f1baf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8090 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c858,
                        &UNK_10de16394,&UNK_10de163b4,2,FUN_106f1bb6c,0);
    do {
      if (puRam00000001136c8090 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8090;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8090,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8090 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8090;
}



/* Entry: 106f1bb6c; end: 106f1bb77;  */

bool FUN_106f1bb6c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106f1bb78; end: 106f1bbf3;  */

undefined * FUN_106f1bb78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8098 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c878,
                        &UNK_10de163bc,&UNK_10de168e0,0x38,FUN_106f1bbf4,0);
    do {
      if (puRam00000001136c8098 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8098;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8098,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8098 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8098;
}



/* Entry: 106f1bbf4; end: 106f1bc0f;  */

uint FUN_106f1bbf4(ulong param_1)

{
  return (uint)((uint)param_1 < 0x39) & (uint)(0x1ffffffefffffff >> (param_1 & 0x3f));
}



/* Entry: 106f1bc10; end: 106f1bc8b;  */

undefined * FUN_106f1bc10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c898,
                        &UNK_10de169c0,&UNK_10de16a34,5,FUN_106f1bc8c,0);
    do {
      if (puRam00000001136c80a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80a0;
}



/* Entry: 106f1bc8c; end: 106f1bc97;  */

bool FUN_106f1bc8c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106f1bc98; end: 106f1bd13;  */

undefined * FUN_106f1bc98(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c8b8,
                        &UNK_10de16a48,&UNK_10de16cac,0x1e,FUN_106f1bd14,0);
    do {
      if (puRam00000001136c80a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80a8;
}



/* Entry: 106f1bd14; end: 106f1bd2b;  */

uint FUN_106f1bd14(uint param_1)

{
  return (uint)(param_1 < 0x1f) & 0x7fff7fffU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106f1bd2c; end: 106f1bdbb;  */

undefined * FUN_106f1bd2c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c8d8,
                        &UNK_10de16d24,&UNK_10de16f98,0x12,FUN_106f1bdbc,0,&UNK_10de16fe0);
    do {
      if (puRam00000001136c80b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80b0;
}



/* Entry: 106f1bdbc; end: 106f1bdc7;  */

bool FUN_106f1bdbc(uint param_1)

{
  return param_1 < 0x12;
}



/* Entry: 106f1bdc8; end: 106f1be43;  */

undefined * FUN_106f1bdc8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c8f8,
                        &UNK_10de17036,&UNK_10de170a4,4,FUN_106f1be44,0);
    do {
      if (puRam00000001136c80b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80b8;
}



/* Entry: 106f1be44; end: 106f1be4f;  */

bool FUN_106f1be44(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106f1be50; end: 106f1becb;  */

undefined * FUN_106f1be50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c918,
                        &UNK_10de170b4,&UNK_10de170d4,3,FUN_106f1becc,0);
    do {
      if (puRam00000001136c80c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80c0;
}



/* Entry: 106f1becc; end: 106f1bed7;  */

bool FUN_106f1becc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106f1bed8; end: 106f1bf53;  */

undefined * FUN_106f1bed8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c938,
                        &UNK_10de170e0,&UNK_10de170fc,3,FUN_106f1bf54,0);
    do {
      if (puRam00000001136c80c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80c8;
}



/* Entry: 106f1bf54; end: 106f1bf5f;  */

bool FUN_106f1bf54(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106f1bf60; end: 106f1bfdb;  */

undefined * FUN_106f1bf60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c958,
                        &UNK_10de17108,&UNK_10de17134,3,FUN_106f1bfdc,0);
    do {
      if (puRam00000001136c80d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80d0;
}



/* Entry: 106f1bfdc; end: 106f1bfe7;  */

bool FUN_106f1bfdc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106f1bfe8; end: 106f1c063;  */

undefined * FUN_106f1bfe8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c978,
                        &UNK_10de17140,&UNK_10de17174,7,FUN_106f1c064,0);
    do {
      if (puRam00000001136c80d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80d8;
}



/* Entry: 106f1c064; end: 106f1c06f;  */

bool FUN_106f1c064(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 106f1c070; end: 106f1c0eb;  */

undefined * FUN_106f1c070(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c998,
                        &UNK_10de17190,&UNK_10de171ac,4,FUN_106f1c0ec,0);
    do {
      if (puRam00000001136c80e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80e0;
}



/* Entry: 106f1c0ec; end: 106f1c0f7;  */

bool FUN_106f1c0ec(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106f1c0f8; end: 106f1c173;  */

undefined * FUN_106f1c0f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c9b8,
                        &UNK_10de171bc,&UNK_10de171fc,5,FUN_106f1c174,0);
    do {
      if (puRam00000001136c80e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80e8;
}



/* Entry: 106f1c174; end: 106f1c17f;  */

bool FUN_106f1c174(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106f1c180; end: 106f1c20f;  */

undefined * FUN_106f1c180(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c9d8,
                        &UNK_10de17210,&UNK_10de17248,3,FUN_106f1c210,0,&UNK_10de17254);
    do {
      if (puRam00000001136c80f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80f0;
}



/* Entry: 106f1c210; end: 106f1c21b;  */

bool FUN_106f1c210(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106f1c21c; end: 106f1c297;  */

undefined * FUN_106f1c21c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c80f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8c9f8,
                        &UNK_10de1725a,&UNK_10de17294,5,FUN_106f1c298,0);
    do {
      if (puRam00000001136c80f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c80f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c80f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c80f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c80f8;
}



/* Entry: 106f1c298; end: 106f1c2a3;  */

bool FUN_106f1c298(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106f1c2a4; end: 106f1c30b; +[SCS2GeoLocation descriptor] */

void FUN_106f1c2a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b457c0,
                        &PTR____CFConstantStringClassReference_110e04498,&PTR_DAT_11318ba88,
                        &PTR_s_latitude_11318c300,4,0x28,0x1c);
    puRam00000001136c8100 = puVar1;
  }
  return;
}



/* Entry: 106f1c30c; end: 106f1c377; +[SCS2UserInfo descriptor] */

void FUN_106f1c30c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45810,
                        &PTR____CFConstantStringClassReference_110e00738,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318d040,8,0x30,0x1c);
    puRam00000001136c8108 = puVar1;
  }
  return;
}



/* Entry: 106f1c378; end: 106f1c3df; +[SCS2CognacClientInfo descriptor] */

void FUN_106f1c378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45860,
                        &PTR____CFConstantStringClassReference_110e8ca18,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318baa0,1,0x10,0x1c);
    puRam00000001136c8110 = puVar1;
  }
  return;
}



/* Entry: 106f1c3e0; end: 106f1c46b; +[SCS2Tweak descriptor] */

undefined * FUN_106f1c3e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b458b0,
                        &PTR____CFConstantStringClassReference_110e8ca38,&PTR_DAT_11318ba88,
                        &PTR_s_id_p_11318c780,5,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c8118 = puVar1;
  }
  return puRam00000001136c8118;
}



/* Entry: 106f1c46c; end: 106f1c4fb; +[SCS2RequestOptions descriptor] */

undefined * FUN_106f1c46c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45900,
                        &PTR____CFConstantStringClassReference_110e8ca58,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318d6e0,0xb,0x48,0x1c);
    func_0x00010c229040();
    puRam00000001136c8120 = puVar1;
  }
  return puRam00000001136c8120;
}



/* Entry: 106f1c4fc; end: 106f1c563; +[SCS2BusinessProfilesRequestOptions descriptor] */

void FUN_106f1c4fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45950,
                        &PTR____CFConstantStringClassReference_110e8ca78,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318bc20,2,0xc,0x1c);
    puRam00000001136c8128 = puVar1;
  }
  return;
}



/* Entry: 106f1c564; end: 106f1c5cb; +[SCS2SectionRequest descriptor] */

void FUN_106f1c564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b459a0,
                        &PTR____CFConstantStringClassReference_110e8ca98,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318bac0,1,0x10,0x1c);
    puRam00000001136c8130 = puVar1;
  }
  return;
}



/* Entry: 106f1c5cc; end: 106f1c633; +[SCS2StudyInfo descriptor] */

void FUN_106f1c5cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8138 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b459f0,
                        &PTR____CFConstantStringClassReference_110e8cab8,&PTR_DAT_11318ba88,
                        &PTR_s_id_p_11318c820,5,0x28,0x1c);
    puRam00000001136c8138 = puVar1;
  }
  return;
}



/* Entry: 106f1c634; end: 106f1c69f; +[SCS2SearchRequest descriptor] */

void FUN_106f1c634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45a40,
                        &PTR____CFConstantStringClassReference_110dec378,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318df60,0xd,0x50,0x1c);
    puRam00000001136c8140 = puVar1;
  }
  return;
}



/* Entry: 106f1c6a0; end: 106f1c707; +[SCS2SectionToken descriptor] */

void FUN_106f1c6a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8148 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45a90,
                        &PTR____CFConstantStringClassReference_110e8cad8,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318bc60,2,0x10,0x1c);
    puRam00000001136c8148 = puVar1;
  }
  return;
}



/* Entry: 106f1c708; end: 106f1c773; +[SCS2SearchResponse descriptor] */

void FUN_106f1c708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45ae0,
                        &PTR____CFConstantStringClassReference_110dec398,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318cd20,6,0x38,0x1c);
    puRam00000001136c8150 = puVar1;
  }
  return;
}



/* Entry: 106f1c774; end: 106f1c7db; +[SCS2CacheMetadata descriptor] */

void FUN_106f1c774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45b30,
                        &PTR____CFConstantStringClassReference_110e8caf8,&PTR_DAT_11318ba88,
                        &PTR_s_sessionId_11318c380,4,0x28,0x1c);
    puRam00000001136c8158 = puVar1;
  }
  return;
}



/* Entry: 106f1c7dc; end: 106f1c867; +[SCS2CachedResponse descriptor] */

undefined * FUN_106f1c7dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45b80,
                        &PTR____CFConstantStringClassReference_110e8cb18,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318c060,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c8160 = puVar1;
  }
  return puRam00000001136c8160;
}



/* Entry: 106f1c868; end: 106f1c8cf; +[SCS2BatchResultLookupRequest descriptor] */

void FUN_106f1c868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45bd0,
                        &PTR____CFConstantStringClassReference_110e8cb38,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318c8c0,5,0x28,0x1c);
    puRam00000001136c8168 = puVar1;
  }
  return;
}



/* Entry: 106f1c8d0; end: 106f1c937; +[SCS2BatchResultLookupResponse descriptor] */

void FUN_106f1c8d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b45c20,
                        &PTR____CFConstantStringClassReference_110e8cb58,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318bae0,1,0x10,0x1c);
    puRam00000001136c8170 = puVar1;
  }
  return;
}



/* Entry: 106f1c938; end: 106f1c9c3; +[SCS2SuggestionsRequest descriptor] */

undefined * FUN_106f1c938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b46aa8,
                        &PTR____CFConstantStringClassReference_110e8cb78,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318c960,5,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c8178 = puVar1;
  }
  return puRam00000001136c8178;
}



/* Entry: 106f1c9c4; end: 106f1ca47; +[SCS2SuggestionsRequest_SearchContext descriptor] */

undefined * FUN_106f1c9c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b46ad0,
                        &PTR____CFConstantStringClassReference_110e8cb98,&PTR_DAT_11318ba88,
                        &PTR_DAT_11318bca0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c8180 = puVar1;
  }
  return puRam00000001136c8180;
}


