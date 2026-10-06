/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061f55dc; end: 1061f55ff; -[SCLensLoggerLensSelection copyWithZone:] */

undefined8 FUN_1061f55dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1061f5600; end: 1061f567b; -[SCLensLoggerLensSelection hash] */

void FUN_1061f5600(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f0580;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061f567c; end: 1061f56bf; -[SCLensLoggerLensSelection internalInit] */

void FUN_1061f567c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f0580;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061f56c0; end: 1061f5787; -[SCLensLoggerLensSelection isEqual:] */

long FUN_1061f56c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1061f5760:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1061f576c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1061f576c;
        }
        goto LAB_1061f5760;
      }
    }
    lVar3 = 0;
  }
LAB_1061f576c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061f5788; end: 1061f5947; -[SCLensLoggerLensSelection matchTap:drag:swipe:autoSelection:feature:page:background:snapCapture:] */

void FUN_1061f5788(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 4) {
    if (lVar2 < 2) {
      if (lVar2 == 0) {
        if (param_3 == 0) goto LAB_1061f58f0;
        pcVar3 = *(code **)(param_3 + 0x10);
        lVar2 = param_3;
      }
      else {
        if ((lVar2 != 1) || (param_4 == 0)) goto LAB_1061f58f0;
        pcVar3 = *(code **)(param_4 + 0x10);
        lVar2 = param_4;
      }
    }
    else if (lVar2 == 2) {
      if (param_5 == 0) goto LAB_1061f58f0;
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
    else {
      if ((lVar2 != 3) || (param_6 == 0)) goto LAB_1061f58f0;
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
  }
  else {
    if (lVar2 < 6) {
      if (lVar2 == 4) {
        if (param_7 == 0) goto LAB_1061f58f0;
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        pcVar3 = *(code **)(param_7 + 0x10);
        lVar2 = param_7;
      }
      else {
        if ((lVar2 != 5) || (param_8 == 0)) goto LAB_1061f58f0;
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        pcVar3 = *(code **)(param_8 + 0x10);
        lVar2 = param_8;
      }
      (*pcVar3)(lVar2,uVar1);
      goto LAB_1061f58f0;
    }
    if (lVar2 != 6) {
      if ((lVar2 == 7) && (param_10 != 0)) {
        (**(code **)(param_10 + 0x10))(param_10,*(undefined1 *)(param_1 + 0x20));
      }
      goto LAB_1061f58f0;
    }
    if (param_9 == 0) goto LAB_1061f58f0;
    pcVar3 = *(code **)(param_9 + 0x10);
    lVar2 = param_9;
  }
  (*pcVar3)(lVar2);
LAB_1061f58f0:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f5948; end: 1061f5977; -[SCLensLoggerLensSelection .cxx_destruct] */

void FUN_1061f5948(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1061f5978; end: 1061f5a83; -[SCLensDelayedSwipe initWithLensId:event:interaction:info:] */

undefined1 *
FUN_1061f5978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0588;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061f5a84; end: 1061f5aa7; -[SCLensDelayedSwipe copyWithZone:] */

undefined8 FUN_1061f5a84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1061f5aa8; end: 1061f5b33; -[SCLensDelayedSwipe hash] */

undefined8 * FUN_1061f5aa8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1061f5be4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1061f5bf0;
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
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_1061f5bf0;
            }
            goto LAB_1061f5be4;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1061f5bf0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1061f5b34; end: 1061f5c0b; -[SCLensDelayedSwipe isEqual:] */

long FUN_1061f5b34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1061f5be4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1061f5bf0;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_1061f5bf0;
            }
            goto LAB_1061f5be4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1061f5bf0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061f5c0c; end: 1061f5c13; -[SCLensDelayedSwipe lensId] */

undefined8 FUN_1061f5c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1061f5c14; end: 1061f5c1b; -[SCLensDelayedSwipe event] */

undefined8 FUN_1061f5c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061f5c1c; end: 1061f5c23; -[SCLensDelayedSwipe interaction] */

undefined8 FUN_1061f5c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1061f5c24; end: 1061f5c2b; -[SCLensDelayedSwipe info] */

undefined8 FUN_1061f5c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1061f5c2c; end: 1061f5c73; -[SCLensDelayedSwipe .cxx_destruct] */

void FUN_1061f5c2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061f5c74; end: 1061f5f8b; -[SCLensDownloadLogger logDownloadFinishedForLens:downloadTimeSec:wasAutomaticDownload:downloadSize:mediaId:boltContentId:fetchType:statusCode:] */

void FUN_1061f5c74(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7410;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5e460();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126c8be0;
  _objc_opt_new(PTR_PTR_1126c8be0);
  lVar4 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar3,param_3,lVar4);
  _objc_release(lVar4);
  func_0x00010c191400(param_1,puVar3);
  func_0x00010c16d340(puVar3,param_3,param_5);
  func_0x00010c202cc0(puVar3,param_3,param_6);
  func_0x00010c180de0(puVar3,param_3,puVar2);
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(puVar3,param_3,puVar1);
  lVar4 = param_4;
  func_0x00010c0d53e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(puVar3,param_3,lVar4);
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126bd498;
  lVar4 = param_4;
  func_0x00010c27dd80(param_4);
  func_0x00010bf1cee0(puVar1,param_3,lVar4);
  func_0x00010c1bd160(puVar3,param_3,puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dbc358);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  func_0x00010c1c4880(puVar3,param_3,puVar1);
  puVar2 = PTR_PTR_1126bd498;
  func_0x00010bf1cea0(PTR_PTR_1126bd498,param_3,param_9);
  func_0x00010c19b580(puVar3,param_3,puVar2);
  lVar4 = param_4;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    puVar2 = PTR_PTR_1126c4718;
    _objc_opt_new(PTR_PTR_1126c4718);
    lVar4 = param_4;
    func_0x00010c2813a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar2,param_3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010c2813a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar2,param_3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c1bb300(puVar3,param_3,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010c20a3c0(puVar3,param_3,param_10);
  func_0x00010c20f900(puVar3,param_3,param_10 - 200U < 100);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061f5f8c; end: 1061f607b; -[SCLensDownloadLogger logCustomEventForLens:interactionName:interactionValue:] */

void FUN_1061f5f8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc038;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c19c240(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1ae1e0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1ae280(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061f607c; end: 1061f610f; -[SCLensDownloadLogger logResourceResolvedForLens:resolvedToFallback:cached:] */

void FUN_1061f607c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126bbad0;
  func_0x00010be4c000(PTR_PTR_1126bbad0);
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 & 1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e450b8;
    if (param_5 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e450d8;
    }
    _objc_retain(ppuVar2);
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e450f8;
  }
  func_0x00010b7209a8(*(undefined8 *)(param_1 + 0x20),puVar1,ppuVar2,1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061f6110; end: 1061f620f; +[SCLensDownloadLogger _lensTypeForLens:] */

void FUN_1061f6110(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126bbad0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    _objc_release(param_3);
    func_0x00010be4bda0(puVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e45118);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061f6210; end: 1061f6237; +[SCLensDownloadLogger _lensSourceFromLensType:] */

undefined ** FUN_1061f6210(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x19) {
    return (undefined **)(&PTR_PTR_1109157f8)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dabe78;
}



/* Entry: 1061f6238; end: 1061f627f; -[SCLensDownloadLogger .cxx_destruct] */

void FUN_1061f6238(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061f6280; end: 1061f635b; -[SCLensDownloadLoggerManager logLensContentDownloadedWithLens:contentResult:fetchType:isUserInitiated:statusCode:] */

void FUN_1061f6280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1061f635c;
  puStack_88 = &UNK_1108e7778;
  lStack_80 = param_1;
  uStack_78 = param_4;
  uStack_70 = param_3;
  uStack_68 = param_5;
  uStack_60 = param_7;
  uStack_58 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1061f635c; end: 1061f63db;  */

void FUN_1061f635c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bde7fc0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfc40e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  func_0x00010bdd7660(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be55310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logLensContentDownloadedWithLen_112572e60,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1061f63dc; end: 1061f64db; -[SCLensDownloadLoggerManager logLensAssetDownloadedWithAsset:lens:contentResult:fetchType:statusCode:cached:] */

void FUN_1061f63dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1061f64dc;
  puStack_90 = &UNK_1108e7718;
  lStack_88 = param_1;
  uStack_80 = param_5;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 1061f64dc; end: 1061f655b;  */

void FUN_1061f64dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bde7fc0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfc40e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  func_0x00010bdd7660(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be552f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logLensAssetDownloadedWithAsset_112572e58,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x50));
  return;
}



/* Entry: 1061f655c; end: 1061f66bb; -[SCLensDownloadLoggerManager _logLensContentDownloadedWithLens:contentResult:fetchType:isUserInitiated:statusCode:] */

void FUN_1061f655c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010bfc79a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c135340();
  lVar4 = lVar2;
  func_0x00010c1367a0(lVar2);
  uVar9 = *(undefined8 *)(param_1 + 8);
  lVar5 = lVar2;
  func_0x00010c0f66a0(lVar2);
  lVar6 = param_4;
  func_0x00010bfc40e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar7 = lVar6;
  func_0x00010c0c5180(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf1ee80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a53c0((double)(lVar3 - lVar4) / 1000.0,uVar9,param_2,param_3,param_6 ^ 1,lVar5,lVar7
                      ,lVar8,param_5,param_7);
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061f66bc; end: 1061f687f; -[SCLensDownloadLoggerManager _logLensAssetDownloadedWithAsset:lens:contentResult:fetchType:statusCode:cached:] */

void FUN_1061f66bc(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_5;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c135340();
  lVar5 = lVar3;
  func_0x00010c1367a0(lVar3);
  puVar7 = PTR_PTR_1126bb9a8;
  uVar6 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010be8b100(puVar7,param_2,uVar6);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  lVar8 = lVar3;
  func_0x00010c0f66a0(lVar3);
  uVar6 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar9 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar1 = ppuVar9;
  }
  lVar10 = param_5;
  func_0x00010bfc40e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar11 = lVar10;
  func_0x00010c0c5180(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0b140((double)(lVar4 - lVar5) / 1000.0,uVar12,param_2,lVar8,puVar7,param_8,uVar6,
                      ppuVar1,lVar11,param_6,param_7);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(ppuVar9);
  _objc_release(uVar6);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1061f6880; end: 1061f68a3; +[SCLensDownloadLoggerManager _remoteAssetTypeFromAssetType:] */

undefined8 FUN_1061f6880(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 7U < 4) {
    return *(undefined8 *)(&UNK_10ddda1f8 + (param_3 - 7U) * 8);
  }
  return 1;
}



/* Entry: 1061f68a4; end: 1061f697b; -[SCLensDownloadLoggerManager _contentResultAlreadyReported:] */

long FUN_1061f68a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd79e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c0dff20(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x00010be05ea0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_1;
        func_0x00010c071f40(param_1,param_2,lVar2);
      }
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061f697c; end: 1061f6a07; -[SCLensDownloadLoggerManager _cacheContentResultDownloadTimestamp:] */

void FUN_1061f697c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd79e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010be05ea0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18),param_2,lVar2,lVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f6a08; end: 1061f6ac7; -[SCLensDownloadLoggerManager _cacheKeyForContentResult:] */

void FUN_1061f6a08(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfc40e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bfcaaa0();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = lVar1;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd4f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061f6ac8; end: 1061f6b4b; -[SCLensDownloadLoggerManager _downloadEndTypeTimestampFromContentResult:] */

void FUN_1061f6ac8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c135340(lVar1);
    func_0x00010c0df7c0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061f6b4c; end: 1061f6b93; -[SCLensDownloadLoggerManager .cxx_destruct] */

void FUN_1061f6b4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061f6b94; end: 1061f6bff; -[SCLensLoggerMediaPickerSession initWithMediaTypes:] */

undefined1 * FUN_1061f6b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f05a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1061f6c00; end: 1061f6ce3; -[SCLensLoggerMediaPickerSession mediaDisplayedAtIndex:mediaType:] */

void FUN_1061f6c00(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x10) <= param_3) {
    uVar4 = param_3;
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
  if (param_4 == 1) {
    lVar2 = 0x18;
  }
  else {
    if (param_4 != 2) goto LAB_1061f6ca4;
    lVar2 = 0x20;
  }
  *(long *)(param_1 + lVar2) = *(long *)(param_1 + lVar2) + 1;
LAB_1061f6ca4:
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061f6ce4; end: 1061f6cef; -[SCLensLoggerMediaPickerSession interactionName] */

undefined ** FUN_1061f6ce4(void)

{
  return &PTR____CFConstantStringClassReference_110e45238;
}



/* Entry: 1061f6cf0; end: 1061f6ec3; -[SCLensLoggerMediaPickerSession jsonRepresentation] */

undefined * FUN_1061f6cf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e45258;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(uint *)(param_1 + 0x28) & 1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e45278;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar1;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110de7678;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar2;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(uint *)(param_1 + 0x28) >> 1 & 1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e09f98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar3;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e45298;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar4;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_98,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar6,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar6 + 0x10);
}



/* Entry: 1061f6ec4; end: 1061f6ecb; -[SCLensLoggerMediaPickerSession maxVisibleIndex] */

undefined8 FUN_1061f6ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061f6ecc; end: 1061f6ed3; -[SCLensLoggerMediaPickerSession photoCount] */

undefined8 FUN_1061f6ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1061f6ed4; end: 1061f6edb; -[SCLensLoggerMediaPickerSession videoCount] */

undefined8 FUN_1061f6ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1061f6edc; end: 1061f6ee3; -[SCLensLoggerMediaPickerSession mediaTypes] */

undefined8 FUN_1061f6edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1061f6ee4; end: 1061f6eeb; -[SCLensLoggerMediaPickerSession setMediaTypes:] */

void FUN_1061f6ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 1061f6eec; end: 1061f6fab; -[SCLensLoggerMediaPickerSession .cxx_destruct] */

void FUN_1061f6eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061f6fac; end: 1061f70ef;  */

void FUN_1061f6fac(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  if (param_1 < 5) {
    if (param_1 < 3) {
      if (param_1 == 1) {
        func_0x00010c268bc0(PTR_PTR_1126c8bd8);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (param_1 == 2) {
        func_0x00010bf895e0(PTR_PTR_1126c8bd8);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (param_1 == 3) {
      func_0x00010c264560(PTR_PTR_1126c8bd8);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 4) {
      func_0x00010bf11ce0(PTR_PTR_1126c8bd8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (param_1 < 7) {
      if (param_1 == 5) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e452b8;
      }
      else {
        if (param_1 != 6) goto LAB_1061f70e8;
        ppuVar1 = &PTR____CFConstantStringClassReference_110e452d8;
      }
    }
    else if (param_1 == 7) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e452f8;
    }
    else if (param_1 == 8) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e45338;
    }
    else {
      if (param_1 != 9) goto LAB_1061f70e8;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e45318;
    }
    func_0x00010bfa31a0(PTR_PTR_1126c8bd8,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1061f70e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061f70f0; end: 1061f7273;  */

undefined8 FUN_1061f70f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = 0xffffffffffffffff;
  if (param_1 != 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0xffffffffffffffff;
    func_0x00010c0c0b20(param_1);
    uVar1 = puStack_48[3];
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1061f7274; end: 1061f730f;  */

void FUN_1061f7274(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1061f7310; end: 1061f743f;  */

void FUN_1061f7310(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_1061f7440;
    uStack_30 = 0x1061f7450;
    uStack_28 = 0;
    func_0x00010c0c0b20(param_1);
    uVar1 = puStack_48[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f7440; end: 1061f7457;  */

void FUN_1061f7440(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1061f7458; end: 1061f7507;  */

void FUN_1061f7458(long param_1,undefined8 param_2)

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



/* Entry: 1061f7508; end: 1061f760f;  */

undefined8 FUN_1061f7508(undefined8 param_1)

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
  uStack_28 = 0;
  func_0x00010c0bf120(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1061f7610; end: 1061f765f;  */

void FUN_1061f7610(void)

{
  return;
}



/* Entry: 1061f7660; end: 1061f7787;  */

undefined8 FUN_1061f7660(undefined8 param_1)

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
  uStack_38 = 0;
  func_0x00010c0bf120(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1061f7788; end: 1061f77f7;  */

void FUN_1061f7788(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1061f77f8; end: 1061f7923;  */

void FUN_1061f77f8(undefined8 param_1)

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
  pcStack_38 = FUN_1061f7440;
  uStack_30 = 0x1061f7450;
  uStack_28 = 0;
  func_0x00010c0bf120(param_1);
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



/* Entry: 1061f7924; end: 1061f7927;  */

void FUN_1061f7924(void)

{
  return;
}



/* Entry: 1061f7928; end: 1061f7a07;  */

void FUN_1061f7928(long param_1,undefined8 param_2)

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



/* Entry: 1061f7a08; end: 1061f7a0b; -[SCALensSwipeBase addEventToLogLenses] */

void FUN_1061f7a08(void)

{
  return;
}



/* Entry: 1061f7a0c; end: 1061f7aeb; -[SCLensContentRedownloadLogger logRedownloadForLens:redownloadType:redownlaodResolution:] */

void FUN_1061f7a0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126bb928;
  func_0x00010bf4d1e0(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    ppuVar1 = (undefined **)0x0;
    if (param_4 == 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e45398;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e453b8;
    if (param_4 != 2) {
      ppuVar2 = ppuVar1;
    }
    puVar4 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dad058,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e453d8;
    if (param_5 != 1) {
      ppuVar1 = (undefined **)0x0;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110df1bb8;
    if (param_5 != 0) {
      ppuVar2 = ppuVar1;
    }
    puVar3 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e45378,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1061f7aec; end: 1061f7af7; -[SCLensContentRedownloadLogger .cxx_destruct] */

void FUN_1061f7aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061f7af8; end: 1061f7b3f;  */

void FUN_1061f7af8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbbba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061f7b40; end: 1061f7baf; -[SCLensLogger setupWithFpsTracker:] */

void FUN_1061f7b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x148);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
  _objc_release(uVar1);
  func_0x00010c0e0ac0(param_1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f7bb0; end: 1061f7cdf; -[SCLensLogger setupWithClearEffectObservable:] */

void FUN_1061f7bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = param_3;
  func_0x00010c2706e0(0x3fd3333333333333,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1061f7ce0; end: 1061f7d13;  */

void FUN_1061f7ce0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be8f660(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061f7d14; end: 1061f7d83; -[SCLensLogger fpsTracker] */

void FUN_1061f7d14(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x148);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f7d84; end: 1061f7d8b; -[SCLensLogger _didChangeUserSessionInteracted:] */

void FUN_1061f7d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1c0),PTR_s_setUserInteractableSession__112665458);
  return;
}



/* Entry: 1061f7d8c; end: 1061f7dcf; -[SCLensLogger baseSessionId] */

void FUN_1061f7d8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf60040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf16240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f7dd0; end: 1061f7e1f; -[SCLensLogger arBarTabSessionId] */

void FUN_1061f7dd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf60040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf0e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061f7e20; end: 1061f7eb7; -[SCLensLogger _arBarTabSessionIdForSessionInfo:] */

void FUN_1061f7e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c160100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf09140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  _os_unfair_lock_lock(param_1 + 0x148);
  uVar1 = uVar2;
  if (*(char *)(param_1 + 0x13c) == '\0') {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x148);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f7eb8; end: 1061f7f07; -[SCLensLogger arBarTabCategoryId] */

void FUN_1061f7eb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf60040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf0c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061f7f08; end: 1061f7f9f; -[SCLensLogger _arBarTabCategoryIdForSessionInfo:] */

void FUN_1061f7f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c160100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf09140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  _os_unfair_lock_lock(param_1 + 0x148);
  uVar1 = uVar2;
  if (*(char *)(param_1 + 0x13c) == '\0') {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x148);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f7fa0; end: 1061f7fc7; -[SCLensLogger lensSwipeId] */

void FUN_1061f7fa0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f7fc8; end: 1061f8027; -[SCLensLogger currentLens] */

void FUN_1061f7fc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf601c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061f8028; end: 1061f8097; -[SCLensLogger lensSource] */

long FUN_1061f8028(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x58) != -1) {
    return *(long *)(param_1 + 0x58);
  }
  func_0x00010bf60040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c160100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c247d20();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1061f8098; end: 1061f80f7; -[SCLensLogger lensSourceType] */

undefined * FUN_1061f8098(undefined *param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x58) != -1) {
    puVar1 = PTR_PTR_1126bd498;
                    /* WARNING: Could not recover jumptable at 0x00010c096d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126bd498,PTR_s_lensSourceTypeFromBlizzardLensSo_112603560);
    return puVar1;
  }
  puVar1 = param_1;
  func_0x00010bf60040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4bdc0(param_1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1061f80f8; end: 1061f81ab; -[SCLensLogger _lensSourceTypeForSessionInfo:] */

undefined * FUN_1061f80f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c160100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c243400();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bd498;
  if (lVar2 == 0x13) {
    puVar3 = (undefined *)0x16;
  }
  else if (lVar2 == 0x26) {
    puVar3 = (undefined *)0x17;
  }
  else {
    lVar1 = param_3;
    func_0x00010c160100(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c247d20();
    func_0x00010c096d40(puVar3,param_2,lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1061f81ac; end: 1061f821f; -[SCLensLogger unlockableLensTracker] */

void FUN_1061f81ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c096ca0();
  lVar2 = param_1;
  func_0x00010be45740(param_1,param_2,lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  if ((int)lVar2 == 0) {
    func_0x00010c281140(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c281460();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1061f8220; end: 1061f825b; -[SCLensLogger lensSelectionOverride] */

void FUN_1061f8220(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x148);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061f825c; end: 1061f829b; -[SCLensLogger _overrideLensSelectionWithSelection:] */

void FUN_1061f825c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x148);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x148);
  return;
}



/* Entry: 1061f829c; end: 1061f8327; -[SCLensLogger _notifyLensSessionInfoChangedForSessionState:] */

void FUN_1061f829c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1061f7508(param_3);
  uVar2 = param_3;
  FUN_1061f77f8(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010be4bce0(param_1,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061f8328; end: 1061f83bb; -[SCLensLogger _notifyLensSessionInfoChanged] */

void FUN_1061f8328(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf60040();
  _objc_retainAutoreleasedReturnValue();
  FUN_1061f83bc(&PTR____CFConstantStringClassReference_110e453f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    lVar1 = lVar3;
    if (lVar3 != 2) {
      lVar1 = 0;
    }
    if (lVar3 == 1) {
      lVar1 = 1;
    }
    lVar3 = param_1;
    func_0x00010be4bce0(param_1,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,lVar3);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1061f83bc; end: 1061f8437;  */

void FUN_1061f83bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db27b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013d00();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061f8438; end: 1061f858f; -[SCLensLogger _lensSessionInfoWithState:carouselSessionInfo:] */

void FUN_1061f8438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  puVar1 = PTR_PTR_1126c4378;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c15ffa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c096d20(param_1);
  uVar4 = param_4;
  func_0x00010c160100(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c247d20();
  uVar6 = param_4;
  func_0x00010c160100(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c243400();
  uVar8 = param_1;
  func_0x00010bdcf0e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf0c0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0827a0();
  _objc_release(param_4);
  func_0x00010c0452a0(puVar1,param_2,uVar2,param_3,uVar3,uVar5,uVar7,uVar8,param_1,(char)uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061f8590; end: 1061f86af; -[SCLensLogger _lensSessionDidStartWithSessionId:sourceType:entranceType:sessionState:] */

void FUN_1061f8590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x60) = 1;
  _objc_retain(param_6);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c281140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251c00();
  _objc_release(lVar1);
  func_0x00010c251b20(*(undefined8 *)(param_1 + 0x1c0));
  _objc_release(param_3);
  func_0x00010c096d20(param_1);
  func_0x00010bee2080(param_1);
  func_0x00010be64c00(param_1);
  _objc_release(param_6);
  func_0x00010c187580(param_1);
  func_0x00010c1875e0(param_1);
  func_0x00010c1875c0(param_1);
  func_0x00010c16e200(param_1);
  func_0x00010c1a1220(param_1);
  func_0x00010c1a1240(param_1);
  func_0x00010c16e240(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1833d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setContextSessionId__11263e710,0);
  return;
}



/* Entry: 1061f86b0; end: 1061f86bf; -[SCLensLogger isLensSessionActive] */

bool FUN_1061f86b0(long param_1)

{
  return *(long *)(param_1 + 0x60) == 1;
}



/* Entry: 1061f86c0; end: 1061f86cf; -[SCLensLogger isLensSessionPaused] */

bool FUN_1061f86c0(long param_1)

{
  return *(long *)(param_1 + 0x60) == 2;
}



/* Entry: 1061f86d0; end: 1061f86df; -[SCLensLogger _isLensSessionStopped] */

bool FUN_1061f86d0(long param_1)

{
  return *(long *)(param_1 + 0x60) == 0;
}



/* Entry: 1061f86e0; end: 1061f877f; -[SCLensLogger _lensSessionDidResume:sessionState:] */

void FUN_1061f86e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x60) = 1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c278140(param_1,param_2,0,0,1);
  lVar1 = param_1;
  func_0x00010c281140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fda20();
  _objc_release(lVar1);
  func_0x00010c13d940(*(undefined8 *)(param_1 + 0x1c0),param_2,param_3);
  _objc_release(param_3);
  func_0x00010be64c00(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061f8780; end: 1061f87db; -[SCLensLogger _lensSessionDidPause:sessionState:] */

void FUN_1061f8780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c139340(param_1,param_2,0);
  func_0x00010be93f20(param_1);
  func_0x00010c0f6020(*(undefined8 *)(param_1 + 0x1c0));
  *(undefined8 *)(param_1 + 0x60) = 2;
  func_0x00010be64c00(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061f87dc; end: 1061f8993; -[SCLensLogger _lensSessionDidStop:isPrevStatePaused:sessionState:] */

void FUN_1061f87dc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x23;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_4 & 1) == 0) {
    func_0x00010c139340(param_1,param_2,0);
  }
  func_0x00010c278120(param_1,param_2,0,0,1);
  func_0x00010c2569c0(*(undefined8 *)(param_1 + 0x1c0));
  *(undefined8 *)(param_1 + 0x60) = 0;
  func_0x00010be64c00(param_1,param_2,param_5);
  func_0x00010bedfb20(param_1,param_2,0);
  func_0x00010c2056c0(param_1,param_2,0xffffffffffffffff);
  func_0x00010c217620(param_1,param_2,0);
  func_0x00010c217640(param_1,param_2,0);
  func_0x00010c207e00(0,param_1);
  func_0x00010c209c00(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  _objc_release(uVar1);
  func_0x00010c188080(param_1,param_2,0);
  func_0x00010c186fa0(param_1,param_2,0);
  func_0x00010c187b20(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  func_0x00010be93f20(param_1);
  lVar2 = param_1;
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    unaff_x23 = param_1;
    func_0x00010bf60cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079580();
  }
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  FUN_1061f83bc(&PTR____CFConstantStringClassReference_110e45418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(param_1);
  if (lVar2 != 0) {
    _objc_release(unaff_x23);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f8994; end: 1061f89f3; -[SCLensLogger _updateThumbnailLoggerWithLensSource:entranceType:] */

void FUN_1061f8994(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x0001061f6ef8();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x0001061f6f9c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bf324f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_carouselDidActivatedWithType_ent_1125aa2e0,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 1061f89f4; end: 1061f8a87; -[SCLensLogger lensSpinning:atIndex:selectionType:originalLensIndex:count:] */

void FUN_1061f89f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  func_0x00010be4b8e0(param_1,param_2,0,0,0,0,0,0,0);
  func_0x00010be4bde0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f8a88; end: 1061f8e03; -[SCLensLogger _lensSpinning:atIndex:selectionType:originalLensIndex:count:] */

void FUN_1061f8a88(double param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf601c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf601c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar3,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010bf601c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0(uVar2,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    if (param_4 != 0) {
      uVar1 = param_2;
      func_0x00010bf601c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c076ce0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x00010c187b20(param_2,param_3,param_4);
        goto LAB_1061f8ddc;
      }
    }
    uVar1 = param_2;
    func_0x00010bf601c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_2;
      func_0x00010c0767a0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        puVar5 = PTR_PTR_1126c8bf0;
        _objc_opt_new(PTR_PTR_1126c8bf0);
        uVar1 = param_2;
        func_0x00010c096ca0(param_2);
        uVar2 = param_2;
        func_0x00010bf601c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_2;
        func_0x00010bf5f200(param_2);
        uVar6 = param_2;
        func_0x00010c243400(param_2);
        uVar7 = param_2;
        func_0x00010be15d60(param_2,param_3,puVar5,uVar1,uVar2,0,uVar3,uVar6,
                            *(undefined8 *)(param_2 + 0x48),0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(uVar2);
        _CACurrentMediaTime();
        dVar9 = param_1;
        func_0x00010c249ea0(param_2);
        func_0x00010c222d20((double)(long)((param_1 - dVar9) * 10.0) / 10.0,uVar7);
        func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,uVar7);
        puVar5 = PTR_PTR_1126c8bf8;
        uVar8 = *(undefined8 *)(param_2 + 0x30);
        lVar4 = param_4;
        func_0x00010c070fa0(param_4);
        func_0x00010bf7ba00(puVar5,param_3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar8,param_3,puVar5);
        _objc_release(puVar5);
        _objc_release(uVar7);
      }
    }
    func_0x00010c187b20(param_2,param_3,param_4);
    FUN_1061f6fac();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = param_6;
    _objc_release(uVar8);
    func_0x00010be6ed40(param_2,param_3,param_4);
    if (param_4 != 0) {
      _CACurrentMediaTime();
      func_0x00010c207e00(param_2);
      func_0x00010c187560(param_2,param_3,param_5 - param_7);
      func_0x00010c1bb480(param_2,param_3,param_8);
      func_0x00010c091fc0();
      uVar1 = param_2;
      func_0x00010c281140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf32ae0();
      _objc_release(uVar1);
      func_0x00010c281140(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179c80();
      _objc_release(param_2);
    }
  }
LAB_1061f8ddc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061f8e04; end: 1061f8f4f; -[SCLensLogger lensPresented:atIndex:selectionType:originalLensIndex:count:afterRecording:launchData:] */

void FUN_1061f8e04(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf5f140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be4bde0(param_1);
  func_0x00010be4b8e0(param_1);
  _objc_release(in_stack_00000000);
  _objc_release(param_3);
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c207e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setSpinStartTime__11265f9a8);
  return;
}



/* Entry: 1061f8f50; end: 1061f9477; -[SCLensLogger _lensPresented:atIndex:selectionType:originalLensIndex:count:afterRecording:launchData:] */

void FUN_1061f8f50(ulong param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5,
                  long param_6,undefined8 param_7,uint param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf60cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar8 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162840(uVar7,param_2,uVar8);
  _objc_release(uVar8);
  uVar8 = uVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c0720c0(uVar8,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar8);
  if ((uVar3 & 1) != 0) goto LAB_1061f9434;
  if (uVar1 != 0) {
    func_0x00010c095a60(param_1);
    uVar8 = param_1;
    func_0x00010c0767a0();
    if (((int)uVar8 != 0) && (uVar8 = uVar1, func_0x00010c079580(), (uVar8 & 1) == 0)) {
      uVar8 = param_1;
      func_0x00010c096ca0(param_1);
      func_0x00010c0a97a0(param_1,param_2,uVar8,param_8);
    }
    uVar8 = param_1;
    func_0x00010bdf67e0(param_1);
    uVar2 = param_1;
    func_0x00010c096ca0(param_1);
    func_0x00010be51220(param_1,param_2,uVar8,param_8,2,uVar2);
  }
  if (param_3 == 0) {
    uVar8 = 1;
  }
  else {
    uVar2 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c110260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puVar5 = PTR_PTR_1126c8c00;
  _objc_opt_new(PTR_PTR_1126c8c00);
  func_0x00010c209c00(param_1,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c2762e0(PTR_PTR_1126ae4f0);
  func_0x00010c209be0(param_1);
  _CACurrentMediaTime();
  func_0x00010c177200(param_1);
  func_0x00010c188080(param_1,param_2,param_3);
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1900(param_1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be6ed40(param_1,param_2,param_3);
  if (param_3 == 0) {
    func_0x00010c186fa0(param_1,param_2,0);
  }
  else {
    uVar2 = param_3;
    func_0x00010c079580();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c096420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c097be0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf08240(uVar3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010c0972c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210680(uVar6,param_2,uVar2);
      _objc_release(uVar2);
      func_0x00010c186fa0(param_1,param_2,uVar6);
      _objc_release(uVar6);
    }
    else {
      func_0x00010c186fa0(param_1,param_2,0);
    }
    func_0x00010c1e1820(param_1,param_2,param_3);
  }
  func_0x00010c225ca0(param_1,param_2,0);
  func_0x00010c1b3cc0(param_1,param_2,0);
  func_0x00010c1b3ce0(param_1,param_2,0);
  func_0x00010c2184a0(0,param_1);
  uVar2 = param_1;
  func_0x00010c251980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6b20();
  func_0x00010c187480(param_1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c096a40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
LAB_1061f9300:
    FUN_1061f6fac();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_5 < 10) && ((1L << (param_5 & 0x3f) & 0x28eU) != 0)) {
      _objc_release();
      goto LAB_1061f9300;
    }
    _objc_release();
    param_5 = param_1;
    func_0x00010c096a40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x40) = param_5;
  _objc_release(uVar7);
  func_0x00010be6ed20(param_1,param_2,0);
  if ((uVar8 & 1) == 0) {
    func_0x00010c19cf40(0xbff0000000000000,param_1);
    func_0x00010c19d7a0(0xbff0000000000000,param_1);
    if ((param_8 & 1) == 0) {
      func_0x00010c16e200(param_1,param_2,0);
      func_0x00010c1a1220(param_1,param_2,0);
      func_0x00010c1a1240(param_1,param_2,0);
      func_0x00010c16e240(param_1,param_2,0);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a320(param_1,param_2,puVar5);
  _objc_release(puVar5);
  if (param_3 != 0) {
    func_0x00010c187560(param_1,param_2,param_4 - param_6);
    func_0x00010c1bb480(param_1,param_2,param_7);
    func_0x00010c091fc0();
    uVar8 = param_1;
    func_0x00010c281140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32ae0();
    _objc_release(uVar8);
    uVar8 = param_1;
    func_0x00010c281140(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179c80();
    _objc_release(uVar8);
  }
  func_0x00010c1bc4c0(param_1,param_2,0);
LAB_1061f9434:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061f9478; end: 1061f9523; -[SCLensLogger arKitSessionStarted] */

void FUN_1061f9478(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c8c08;
  _objc_opt_new(PTR_PTR_1126c8c08);
  lVar2 = param_1;
  func_0x00010bf60cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c096b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061f9524; end: 1061f95cf; -[SCLensLogger arKitSessionReceivedFirstFrame] */

void FUN_1061f9524(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c8c10;
  _objc_opt_new(PTR_PTR_1126c8c10);
  lVar2 = param_1;
  func_0x00010bf60cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c096b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061f95d0; end: 1061f95df; -[SCLensLogger closeAttachmentView] */

void FUN_1061f95d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c278130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_trackLensInteraction_appliedLens_11267ba70,0,0,1);
  return;
}



/* Entry: 1061f95e0; end: 1061f95e7; -[SCLensLogger openAttachmentView] */

void FUN_1061f95e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c225cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setWithAttachmentOpen__112667150,1);
  return;
}



/* Entry: 1061f95e8; end: 1061f961b; -[SCLensLogger openAttachmentViewWithLensCarouselActivated] */

void FUN_1061f95e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0e8fa0();
  uVar1 = param_1;
  func_0x00010c096ca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a97b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logLensSwipeEvent_afterRecording_112607ff8,uVar1,0);
  return;
}



/* Entry: 1061f961c; end: 1061f9dfb; -[SCLensLogger _fillLensSwipeEvent:lensSourceType:lens:lensSwipeOptionCount:indexPos:snapSource:lensSelection:notificationId:] */

void FUN_1061f961c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_10);
  _objc_retain(param_9);
  lVar1 = param_5;
  func_0x00010c094540(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(param_3,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c210680(param_3,param_2,*(undefined8 *)(param_1 + 0x110));
  func_0x00010c1bc4c0(param_3,param_2,param_6);
  func_0x00010c1bcca0(param_3,param_2,param_4);
  func_0x00010c206c40(param_3,param_2,param_8);
  lVar2 = *(long *)(param_1 + 0x180);
  func_0x00010bfe9b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bef1020();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010c067fc0(lVar2);
      func_0x00010c206c40(param_3,param_2,lVar3);
    }
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bdf67e0(param_1);
  func_0x00010c176040(param_3,param_2,lVar2);
  func_0x00010c1a9660(param_3,param_2,0xffffffffffffffff);
  puVar4 = PTR_PTR_1126b2930;
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(param_3,param_2,puVar4);
  lVar2 = param_1;
  func_0x00010c2a8920(param_1);
  func_0x00010c225ca0(param_3,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010bf09180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcf40(param_3,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf4f080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(param_3,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c26a320(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212740(param_3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bfca960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd4380();
  lVar6 = param_1;
  if ((int)lVar3 == 0) {
    lVar3 = param_5;
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_5;
      func_0x00010c281520(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf0d600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be20160(param_1,param_2,lVar5);
      _objc_release(lVar5);
      goto LAB_1061f98b0;
    }
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf0d600(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be20160(param_1,param_2,lVar3);
LAB_1061f98b0:
    _objc_release(lVar3);
    func_0x00010c16b360(param_3,param_2,lVar6);
  }
  lVar3 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar6 = param_1 + 0xc0;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar3);
    if (lVar6 != 0) {
      lVar3 = param_1 + 0xc0;
      _objc_loadWeakRetained(lVar3);
      lVar6 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c06d680();
      _objc_release(lVar6);
      _objc_release(lVar3);
      lVar3 = param_1 + 0xb8;
      _objc_loadWeakRetained(lVar3);
      lVar6 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c06d640();
      _objc_release(lVar6);
      _objc_release(lVar3);
      uVar11 = (uint)lVar5 & (uint)lVar7;
      goto LAB_1061f9968;
    }
  }
  uVar11 = 0;
LAB_1061f9968:
  func_0x00010c1a5b00(param_3,param_2,uVar11);
  puVar4 = PTR_PTR_1126c4718;
  _objc_opt_new(PTR_PTR_1126c4718);
  lVar3 = param_5;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar6 != 0) {
    lVar3 = param_5;
    func_0x00010c2813a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar4,param_2,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar3);
  }
  lVar3 = param_5;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c11fa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar6 != 0) {
    lVar3 = param_5;
    func_0x00010c2813a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar4,param_2,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar3);
  }
  lVar3 = param_5;
  func_0x00010c092b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bf09160(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = param_5;
    func_0x00010c092b80(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c17a100(puVar4,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c1ce180(puVar4,param_2,param_10);
  _objc_release(param_10);
  func_0x00010c1bb300(param_3,param_2,puVar4);
  lVar3 = param_1;
  func_0x00010bebebc0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c089660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c87c0(param_3,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010c2813a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164480(param_3,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar3);
  puVar8 = PTR_PTR_1126ae6a8;
  lVar3 = param_5;
  func_0x00010c27dd80(param_5);
  func_0x00010c097840(puVar8,param_2,lVar3);
  func_0x00010c1bd160(param_3,param_2,puVar8);
  lVar3 = param_5;
  func_0x00010c0d53e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(param_3,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf13960(param_1);
  func_0x00010c199a40(param_3,param_2,lVar3);
  lVar3 = param_1;
  func_0x00010bfbb1c0(param_1);
  func_0x00010c199b20(param_3,param_2,lVar3);
  lVar3 = param_5;
  func_0x00010c13b280(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1baba0(param_3,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c096b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(param_3,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c091fc0(param_1);
  func_0x00010c19c180(param_3,param_2,lVar3);
  func_0x00010c19c1a0(param_3,param_2,param_7);
  func_0x00010c19bec0(param_3,param_2,1);
  lVar3 = param_1;
  func_0x00010c0c6c20(param_1);
  func_0x00010c1c5440(param_3,param_2,lVar3);
  lVar3 = param_1;
  func_0x00010c116000(param_1);
  func_0x00010c1e3cc0(param_3,param_2,lVar3);
  lVar3 = param_5;
  func_0x00010c24a2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208000(param_3,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010c24ab40(param_5);
  func_0x00010c208420(param_3,param_2,lVar3);
  uVar9 = param_9;
  FUN_1061f70f0(param_9);
  func_0x00010c1bcb00(param_3,param_2,uVar9);
  uVar9 = param_9;
  FUN_1061f7310(param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  func_0x00010c1bcae0(param_3,param_2,uVar9);
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c2339c0();
  _objc_release(uVar10);
  func_0x00010c1ac380(param_3,param_2,uVar9);
  lVar3 = param_5;
  func_0x00010c094540(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea3340(param_1,param_2,param_3,lVar3);
  _objc_release(lVar3);
  func_0x00010bedab00(param_1,param_2,param_3,param_5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


