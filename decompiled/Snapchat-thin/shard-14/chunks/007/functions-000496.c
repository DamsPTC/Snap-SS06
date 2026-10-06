/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b619244; end: 10b619267; -[SCStoriesSnapProSnap copyWithZone:] */

undefined8 FUN_10b619244(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b619268; end: 10b619317; -[SCStoriesSnapProSnap hash] */

undefined8 * FUN_10b619268(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
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
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b619410:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b61941c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10b61941c;
                  }
                  goto LAB_10b619410;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b61941c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b619318; end: 10b619437; -[SCStoriesSnapProSnap isEqual:] */

long FUN_10b619318(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b619410:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61941c;
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
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10b61941c;
                  }
                  goto LAB_10b619410;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b61941c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b619438; end: 10b61943f; -[SCStoriesSnapProSnap clientId] */

undefined8 FUN_10b619438(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b619440; end: 10b619447; -[SCStoriesSnapProSnap postedTimestamp] */

undefined8 FUN_10b619440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b619448; end: 10b61944f; -[SCStoriesSnapProSnap caption] */

undefined8 FUN_10b619448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b619450; end: 10b619457; -[SCStoriesSnapProSnap thumbnailInfo] */

undefined8 FUN_10b619450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b619458; end: 10b61945f; -[SCStoriesSnapProSnap goLiveTimestamp] */

undefined8 FUN_10b619458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b619460; end: 10b619467; -[SCStoriesSnapProSnap pendingSnapPlaybackInfo] */

undefined8 FUN_10b619460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b619468; end: 10b61946f; -[SCStoriesSnapProSnap multiSnapInfo] */

undefined8 FUN_10b619468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b619470; end: 10b6194db; -[SCStoriesSnapProSnap .cxx_destruct] */

void FUN_10b619470(long param_1)

{
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



/* Entry: 10b6194dc; end: 10b619563; -[SCStoriesUploadingSnapState initWithLocalMediaUploadingState:businessIds:] */

undefined1 *
FUN_10b6194dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127069f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b619564; end: 10b619587; -[SCStoriesUploadingSnapState copyWithZone:] */

undefined8 FUN_10b619564(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b619588; end: 10b6195ef; -[SCStoriesUploadingSnapState hash] */

long * FUN_10b619588(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b619674;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b619674;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b619674;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b619674:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b6195f0; end: 10b61968f; -[SCStoriesUploadingSnapState isEqual:] */

long FUN_10b6195f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b619674;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b619674;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b619674;
    }
  }
  lVar3 = 1;
LAB_10b619674:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b619690; end: 10b619697; -[SCStoriesUploadingSnapState localMediaUploadingState] */

undefined8 FUN_10b619690(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b619698; end: 10b61969f; -[SCStoriesUploadingSnapState businessIds] */

undefined8 FUN_10b619698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6196a0; end: 10b6196ab; -[SCStoriesUploadingSnapState .cxx_destruct] */

void FUN_10b6196a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6196ac; end: 10b619733; -[SCStoriesSnapProPendingSnap initWithSnap:postingState:] */

undefined1 *
FUN_10b6196ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706a00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b619734; end: 10b619757; -[SCStoriesSnapProPendingSnap copyWithZone:] */

undefined8 FUN_10b619734(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b619758; end: 10b6197cb; -[SCStoriesSnapProPendingSnap hash] */

undefined8 * FUN_10b619758(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b619850;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b619850;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b619850;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b619850:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b6197cc; end: 10b61986b; -[SCStoriesSnapProPendingSnap isEqual:] */

long FUN_10b6197cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b619850;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b619850;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b619850;
    }
  }
  lVar3 = 1;
LAB_10b619850:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61986c; end: 10b619873; -[SCStoriesSnapProPendingSnap snap] */

undefined8 FUN_10b61986c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b619874; end: 10b61987b; -[SCStoriesSnapProPendingSnap postingState] */

undefined8 FUN_10b619874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b61987c; end: 10b619887; -[SCStoriesSnapProPendingSnap .cxx_destruct] */

void FUN_10b61987c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b619888; end: 10b6198f7; +[SCMyStoriesSaveUpdate saveBeganWithSavingToMemories:savingToCameraRoll:savingIndividualSnap:] */

void FUN_10b619888(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1340;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
  puVar2[0x11] = param_4;
  puVar2[0x12] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6198f8; end: 10b619963; +[SCMyStoriesSaveUpdate saveFailedWithError:] */

void FUN_10b6198f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1340;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b619964; end: 10b6199ef; +[SCMyStoriesSaveUpdate saveSucceededWithSavedToMemories:savedToCameraRoll:savedIndividualSnap:storyDisplayName:] */

void FUN_10b619964(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b1340;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x13] = param_3;
  puVar2[0x14] = param_4;
  puVar2[0x15] = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6199f0; end: 10b619a13; -[SCMyStoriesSaveUpdate copyWithZone:] */

undefined8 FUN_10b6199f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b619a14; end: 10b619ac7; -[SCMyStoriesSaveUpdate hash] */

void FUN_10b619a14(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar8;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_68 = (ulong)uVar1 & 0xff;
  uStack_60 = uVar7 >> 0x10 & 0xff;
  uStack_58 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_50 = (ulong)uVar5;
  uStack_48 = (ulong)*(byte *)(param_1 + 0x14);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x15);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_112706a08;
  puStack_a0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b619ac8; end: 10b619b0b; -[SCMyStoriesSaveUpdate internalInit] */

void FUN_10b619ac8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112706a08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b619b0c; end: 10b619c23; -[SCMyStoriesSaveUpdate isEqual:] */

long FUN_10b619b0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b619bfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b619c08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
           (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
          ((*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12) &&
           (*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13))))))) &&
        (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))) &&
       (*(char *)(param_1 + 0x15) == *(char *)(param_3 + 0x15))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b619c08;
        }
        goto LAB_10b619bfc;
      }
    }
    lVar3 = 0;
  }
LAB_10b619c08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b619c24; end: 10b619cef; -[SCMyStoriesSaveUpdate matchSaveBegan:saveSucceeded:saveFailed:] */

void FUN_10b619c24(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined1 *)(param_1 + 0x13),*(undefined1 *)(param_1 + 0x14),
                 *(undefined1 *)(param_1 + 0x15),*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11),
               *(undefined1 *)(param_1 + 0x12));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b619cf0; end: 10b619d1f; -[SCMyStoriesSaveUpdate .cxx_destruct] */

void FUN_10b619cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b619d20; end: 10b619de3; -[SCLeaveCustomStoryMetadata initWithPublicationId:type:isPendingMembership:displayName:] */

undefined1 *
FUN_10b619d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706a10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b619de4; end: 10b619e07; -[SCLeaveCustomStoryMetadata copyWithZone:] */

undefined8 FUN_10b619de4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b619e08; end: 10b619e8f; -[SCLeaveCustomStoryMetadata hash] */

undefined8 * FUN_10b619e08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar2 = &uStack_48;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_10b619f30:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b619f3c;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((puVar2[3] == param_3[3] && (*(char *)(puVar2 + 1) == *(char *)(param_3 + 1))))) {
      lVar4 = puVar2[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = (undefined8 *)puVar2[4];
        if (puVar5 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b619f3c;
        }
        goto LAB_10b619f30;
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_10b619f3c:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b619e90; end: 10b619f57; -[SCLeaveCustomStoryMetadata isEqual:] */

long FUN_10b619e90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b619f30:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b619f3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b619f3c;
        }
        goto LAB_10b619f30;
      }
    }
    lVar3 = 0;
  }
LAB_10b619f3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b619f58; end: 10b619f5f; -[SCLeaveCustomStoryMetadata publicationId] */

undefined8 FUN_10b619f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b619f60; end: 10b619f67; -[SCLeaveCustomStoryMetadata type] */

undefined8 FUN_10b619f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b619f68; end: 10b619f6f; -[SCLeaveCustomStoryMetadata isPendingMembership] */

undefined1 FUN_10b619f68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b619f70; end: 10b619f77; -[SCLeaveCustomStoryMetadata displayName] */

undefined8 FUN_10b619f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b619f78; end: 10b619fa7; -[SCLeaveCustomStoryMetadata .cxx_destruct] */

void FUN_10b619f78(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b619fa8; end: 10b619fff; -[SCFriendStoriesFetchingInfo initWithLastUpdatedSnapTimeStamp:triggerType:] */

void FUN_10b619fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706a18;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b61a000; end: 10b61a023; -[SCFriendStoriesFetchingInfo copyWithZone:] */

undefined8 FUN_10b61a000(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61a024; end: 10b61a0a3; -[SCFriendStoriesFetchingInfo hash] */

ulong * FUN_10b61a024(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  double dVar6;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar4 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  puVar2 = &uStack_28;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar5 = (ulong *)0x1;
  }
  else {
    puVar5 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar5 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
        puVar5 = (ulong *)0x0;
      }
      else {
        dVar6 = ABS((double)puVar2[1] + (double)param_3[1]) * 2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        puVar5 = (ulong *)(ulong)(ABS((double)puVar2[1] - (double)param_3[1]) < dVar6);
      }
    }
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b61a0a4; end: 10b61a15f; -[SCFriendStoriesFetchingInfo isEqual:] */

bool FUN_10b61a0a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b61a160; end: 10b61a167; -[SCFriendStoriesFetchingInfo lastUpdatedSnapTimeStamp] */

undefined8 FUN_10b61a160(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b61a168; end: 10b61a16f; -[SCFriendStoriesFetchingInfo triggerType] */

undefined8 FUN_10b61a168(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b61a170; end: 10b61a1bf; -[SCStoriesMyStoryPrivacy initWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61a170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706a20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f7d4) = param_3;
  }
  return;
}



/* Entry: 10b61a1c0; end: 10b61a1e3; -[SCStoriesMyStoryPrivacy copyWithZone:] */

undefined8 FUN_10b61a1c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61a1e4; end: 10b61a1fb; -[SCStoriesMyStoryPrivacy hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61a1e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11278f7d4);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10b61a1fc; end: 10b61a28b; -[SCStoriesMyStoryPrivacy isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b61a1fc(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(long *)(param_1 + (long)_DAT_11278f7d4) ==
                *(long *)(param_3 + (long)_DAT_11278f7d4);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b61a28c; end: 10b61a29b; -[SCStoriesMyStoryPrivacy type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61a28c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f7d4);
}



/* Entry: 10b61a29c; end: 10b61a3e7; -[SCStoriesFriendCustomStoryPublicGroupMetadata initWithFriendUserId:groupId:type:displayName:creationTimestamp:communityMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b61a29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112706a28;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbb4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbb4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbb8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbb8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbbc) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbc0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbc0) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbc4) = param_1;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbc8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbc8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61a3e8; end: 10b61a40b; -[SCStoriesFriendCustomStoryPublicGroupMetadata copyWithZone:] */

undefined8 FUN_10b61a3e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61a40c; end: 10b61a4df; -[SCStoriesFriendCustomStoryPublicGroupMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61a40c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fbb4);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fbb8);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + _DAT_11278fbbc);
  lStack_48 = -lVar6;
  if (-1 < lVar6) {
    lStack_48 = lVar6;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fbc0);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_11278fbc4) + *(ulong *)(param_1 + _DAT_11278fbc4) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fbc8);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_58;
  uStack_30 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b61a604:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61a610;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (*(long *)((long)puVar4 + (long)_DAT_11278fbbc) ==
        *(long *)((long)param_3 + (long)_DAT_11278fbbc))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278fbc4);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_11278fbc4);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fbb4),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fbb4) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fbb8),
           lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fbb8) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fbc0),
          lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fbc0) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11278fbc8);
        if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11278fbc8)) {
          func_0x00010c071ae0();
          goto LAB_10b61a610;
        }
        goto LAB_10b61a604;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b61a610:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b61a4e0; end: 10b61a62b; -[SCStoriesFriendCustomStoryPublicGroupMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61a4e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61a604:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61a610;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11278fbbc) == *(long *)(param_3 + (long)_DAT_11278fbbc))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278fbc4);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278fbc4);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fbb4),
            lVar4 == *(long *)(param_3 + (long)_DAT_11278fbb4) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fbb8),
           lVar4 == *(long *)(param_3 + (long)_DAT_11278fbb8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fbc0),
          lVar4 == *(long *)(param_3 + (long)_DAT_11278fbc0) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11278fbc8);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_11278fbc8)) {
          func_0x00010c071ae0();
          goto LAB_10b61a610;
        }
        goto LAB_10b61a604;
      }
    }
    lVar4 = 0;
  }
LAB_10b61a610:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b61a62c; end: 10b61a63b; -[SCStoriesFriendCustomStoryPublicGroupMetadata friendUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61a62c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbb4);
}



/* Entry: 10b61a63c; end: 10b61a64b; -[SCStoriesFriendCustomStoryPublicGroupMetadata groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61a63c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbb8);
}



/* Entry: 10b61a64c; end: 10b61a65b; -[SCStoriesFriendCustomStoryPublicGroupMetadata type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61a64c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbbc);
}



/* Entry: 10b61a65c; end: 10b61a66b; -[SCStoriesFriendCustomStoryPublicGroupMetadata displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61a65c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbc0);
}



/* Entry: 10b61a66c; end: 10b61a67b; -[SCStoriesFriendCustomStoryPublicGroupMetadata creationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61a66c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbc4);
}



/* Entry: 10b61a67c; end: 10b61a68b; -[SCStoriesFriendCustomStoryPublicGroupMetadata communityMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61a67c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbc8);
}



/* Entry: 10b61a68c; end: 10b61a6eb; -[SCStoriesFriendCustomStoryPublicGroupMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61a68c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278fbc8,0);
  _objc_storeStrong(param_1 + _DAT_11278fbc0,0);
  _objc_storeStrong(param_1 + _DAT_11278fbb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fbb4,0);
  return;
}



/* Entry: 10b61a6ec; end: 10b61a78b; -[SCStoriesFriendCustomStoryPublicGroupUser initWithFriendUserId:expirationTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b61a6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112706a30;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbcc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbcc) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbd0) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61a78c; end: 10b61a7af; -[SCStoriesFriendCustomStoryPublicGroupUser copyWithZone:] */

undefined8 FUN_10b61a78c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61a7b0; end: 10b61a84b; -[SCStoriesFriendCustomStoryPublicGroupUser hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61a7b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fbcc);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + _DAT_11278fbd0) + *(ulong *)(param_1 + _DAT_11278fbd0) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b61a8f8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61a904;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar7 = *(double *)((long)puVar3 + (long)_DAT_11278fbd0);
      dVar8 = *(double *)((long)param_3 + (long)_DAT_11278fbd0);
      dVar9 = ABS(dVar7 - dVar8);
      dVar7 = ABS(dVar7 + dVar8) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar7))) {
        bVar1 = dVar9 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11278fbcc);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11278fbcc)) {
          func_0x00010c071ae0();
          goto LAB_10b61a904;
        }
        goto LAB_10b61a8f8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b61a904:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b61a84c; end: 10b61a91f; -[SCStoriesFriendCustomStoryPublicGroupUser isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61a84c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61a8f8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61a904;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278fbd0);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278fbd0);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11278fbcc);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_11278fbcc)) {
          func_0x00010c071ae0();
          goto LAB_10b61a904;
        }
        goto LAB_10b61a8f8;
      }
    }
    lVar4 = 0;
  }
LAB_10b61a904:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b61a920; end: 10b61a92f; -[SCStoriesFriendCustomStoryPublicGroupUser friendUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61a920(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbcc);
}



/* Entry: 10b61a930; end: 10b61a93f; -[SCStoriesFriendCustomStoryPublicGroupUser expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61a930(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbd0);
}



/* Entry: 10b61a940; end: 10b61a953; -[SCStoriesFriendCustomStoryPublicGroupUser .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61a940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fbcc,0);
  return;
}



/* Entry: 10b61a954; end: 10b61aa2f; -[SCStoriesAsyncPostingInfo initWithSnapComponentId:startPostingTime:storyPostedTimes:expirationTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b61a954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706a38;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbd4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbd4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbd8) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbdc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbdc) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbe0) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61aa30; end: 10b61aa53; -[SCStoriesAsyncPostingInfo copyWithZone:] */

undefined8 FUN_10b61aa30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61aa54; end: 10b61ab27; -[SCStoriesAsyncPostingInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61aa54(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fbd4);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_11278fbd8) + *(ulong *)(param_1 + _DAT_11278fbd8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fbdc);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_11278fbe0) + *(ulong *)(param_1 + _DAT_11278fbe0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  puVar4 = &uStack_58;
  uStack_48 = uVar3;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b61ac30:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61ac3c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278fbd8);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_11278fbd8);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if (bVar1) {
        dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278fbe0);
        dVar10 = *(double *)((long)param_3 + (long)_DAT_11278fbe0);
        dVar11 = ABS(dVar9 - dVar10);
        dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
          bVar1 = dVar11 < dVar9;
        }
        if ((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fbd4),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fbd4) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11278fbdc);
          if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11278fbdc)) {
            func_0x00010c071ae0();
            goto LAB_10b61ac3c;
          }
          goto LAB_10b61ac30;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b61ac3c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b61ab28; end: 10b61ac57; -[SCStoriesAsyncPostingInfo isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61ab28(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61ac30:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61ac3c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278fbd8);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278fbd8);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_11278fbe0);
        dVar6 = *(double *)(param_3 + (long)_DAT_11278fbe0);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if ((bVar1) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fbd4),
            lVar4 == *(long *)(param_3 + (long)_DAT_11278fbd4) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_11278fbdc);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_11278fbdc)) {
            func_0x00010c071ae0();
            goto LAB_10b61ac3c;
          }
          goto LAB_10b61ac30;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b61ac3c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b61ac58; end: 10b61ac67; -[SCStoriesAsyncPostingInfo snapComponentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61ac58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbd4);
}



/* Entry: 10b61ac68; end: 10b61ac77; -[SCStoriesAsyncPostingInfo startPostingTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61ac68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbd8);
}



/* Entry: 10b61ac78; end: 10b61ac87; -[SCStoriesAsyncPostingInfo storyPostedTimes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61ac78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbdc);
}



/* Entry: 10b61ac88; end: 10b61ac97; -[SCStoriesAsyncPostingInfo expirationTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61ac88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbe0);
}



/* Entry: 10b61ac98; end: 10b61acd7; -[SCStoriesAsyncPostingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61ac98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278fbdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fbd4,0);
  return;
}



/* Entry: 10b61acd8; end: 10b61add7; -[SCStoriesBundleStoryPlaybackSequence initWithStoryId:bundleType:storySnaps:sequenceInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b61acd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706a40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbe4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbe4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbe8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbec) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbf0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbf0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61add8; end: 10b61adfb; -[SCStoriesBundleStoryPlaybackSequence copyWithZone:] */

undefined8 FUN_10b61add8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61adfc; end: 10b61ae9b; -[SCStoriesBundleStoryPlaybackSequence hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61adfc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278fbe4);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11278fbe8);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fbec);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278fbf0);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b61af64:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61af70;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11278fbe8) ==
        *(long *)((long)param_3 + (long)_DAT_11278fbe8))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278fbe4);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11278fbe4)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278fbec);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11278fbec)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11278fbf0);
          if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11278fbf0)) {
            func_0x00010c071ae0();
            goto LAB_10b61af70;
          }
          goto LAB_10b61af64;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b61af70:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b61ae9c; end: 10b61af8b; -[SCStoriesBundleStoryPlaybackSequence isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61ae9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61af64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61af70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11278fbe8) == *(long *)(param_3 + (long)_DAT_11278fbe8))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11278fbe4);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278fbe4)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11278fbec);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278fbec)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11278fbf0);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11278fbf0)) {
            func_0x00010c071ae0();
            goto LAB_10b61af70;
          }
          goto LAB_10b61af64;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b61af70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61af8c; end: 10b61af9b; -[SCStoriesBundleStoryPlaybackSequence storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61af8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbe4);
}



/* Entry: 10b61af9c; end: 10b61afab; -[SCStoriesBundleStoryPlaybackSequence bundleType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61af9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbe8);
}



/* Entry: 10b61afac; end: 10b61afbb; -[SCStoriesBundleStoryPlaybackSequence storySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61afac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbec);
}



/* Entry: 10b61afbc; end: 10b61afcb; -[SCStoriesBundleStoryPlaybackSequence sequenceInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61afbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbf0);
}



/* Entry: 10b61afcc; end: 10b61b01b; -[SCStoriesBundleStoryPlaybackSequence .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61afcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278fbf0,0);
  _objc_storeStrong(param_1 + _DAT_11278fbec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fbe4,0);
  return;
}



/* Entry: 10b61b01c; end: 10b61b03f; -[SCStoriesCustomStoriesSyncToken copyWithZone:] */

undefined8 FUN_10b61b01c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61b040; end: 10b61b0c3; -[SCStoriesCustomStoriesSyncToken hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61b040(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278fbf4);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fbf8);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b61b154:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61b160;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278fbf4);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11278fbf4)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11278fbf8);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11278fbf8)) {
          func_0x00010c071ae0();
          goto LAB_10b61b160;
        }
        goto LAB_10b61b154;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b61b160:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b61b0c4; end: 10b61b17b; -[SCStoriesCustomStoriesSyncToken isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61b0c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61b154:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61b160;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11278fbf4);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278fbf4)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11278fbf8);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_11278fbf8)) {
          func_0x00010c071ae0();
          goto LAB_10b61b160;
        }
        goto LAB_10b61b154;
      }
    }
    lVar3 = 0;
  }
LAB_10b61b160:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61b17c; end: 10b61b18b; -[SCStoriesCustomStoriesSyncToken userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61b17c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbf4);
}



/* Entry: 10b61b18c; end: 10b61b543; -[SCStoriesCustomStoryMetadata initWithPublicationId:type:displayName:creationInfo:currentUserCanPost:participants:posterIdsPermitted:viewerIdsPermitted:isInactive:sortingHints:currentUserCanAutosave:currentUserAutosaveEnabled:version:moderatorIds:blockedUsersExceptions:blockedUserIdsInGroup:blockedUserNamesInGroup:featureMetadata:joinedTimestampMs:bannedUserIds:isMuted:privateStorySubtype:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b61b18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
             undefined4 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_80 = PTR_PTR_112706a50;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbfc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbfc) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc00) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc04);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc04) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc08);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc08) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278fc0c) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc10);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc14);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc14) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc18);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278fc1c) = param_12;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc20);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278fc24) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278fc28) = param_15._1_1_;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc2c) = param_17;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc30);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc34);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc34) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc38);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc3c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc3c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc40);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc40) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc44) = param_1;
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc48);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc48) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278fc4c) = param_24;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc50) = param_26;
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b61b544; end: 10b61b567; -[SCStoriesCustomStoryMetadata copyWithZone:] */

undefined8 FUN_10b61b544(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61b568; end: 10b61b6ff; -[SCStoriesCustomStoryMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61b568(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fbfc);
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + _DAT_11278fc00);
  lStack_d0 = -lVar6;
  if (-1 < lVar6) {
    lStack_d0 = lVar6;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fc04);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fc08);
  uStack_c8 = uVar3;
  func_0x00010bfde980();
  uStack_b8 = (ulong)*(byte *)(param_1 + _DAT_11278fc0c);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fc10);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fc14);
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fc18);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uStack_98 = (ulong)*(byte *)(param_1 + _DAT_11278fc1c);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fc20);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + _DAT_11278fc24);
  uStack_80 = (ulong)*(byte *)(param_1 + _DAT_11278fc28);
  uStack_78 = *(undefined8 *)(param_1 + _DAT_11278fc2c);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fc30);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fc34);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fc38);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fc3c);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fc40);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_11278fc44) + *(ulong *)(param_1 + _DAT_11278fc44) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fc48);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_11278fc4c);
  lVar6 = *(long *)(param_1 + _DAT_11278fc50);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  puVar4 = &uStack_d8;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar4,0x16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b61b9ec:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61b9f8;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((*(long *)((long)puVar4 + (long)_DAT_11278fc00) ==
            *(long *)((long)param_3 + (long)_DAT_11278fc00) &&
           (*(char *)((long)puVar4 + (long)_DAT_11278fc0c) ==
            *(char *)((long)param_3 + (long)_DAT_11278fc0c))) &&
          (*(char *)((long)puVar4 + (long)_DAT_11278fc1c) ==
           *(char *)((long)param_3 + (long)_DAT_11278fc1c))) &&
         ((*(char *)((long)puVar4 + (long)_DAT_11278fc24) ==
           *(char *)((long)param_3 + (long)_DAT_11278fc24) &&
          (*(char *)((long)puVar4 + (long)_DAT_11278fc28) ==
           *(char *)((long)param_3 + (long)_DAT_11278fc28))))))) &&
       ((*(long *)((long)puVar4 + (long)_DAT_11278fc2c) ==
         *(long *)((long)param_3 + (long)_DAT_11278fc2c) &&
        ((*(char *)((long)puVar4 + (long)_DAT_11278fc4c) ==
          *(char *)((long)param_3 + (long)_DAT_11278fc4c) &&
         (*(long *)((long)puVar4 + (long)_DAT_11278fc50) ==
          *(long *)((long)param_3 + (long)_DAT_11278fc50))))))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278fc44);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_11278fc44);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if ((((((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fbfc),
              lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fbfc) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc04),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc04) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc08),
              lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc08) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc10),
              lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc10) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc14),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc14) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
          ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc18),
           lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc18) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc20),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc20) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc30),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc30) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc34),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc34) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc38),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc38) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           (((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc3c),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc3c) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fc40),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_11278fc40) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))) {
        puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11278fc48);
        if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11278fc48)) {
          func_0x00010c071ae0();
          goto LAB_10b61b9f8;
        }
        goto LAB_10b61b9ec;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b61b9f8:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b61b700; end: 10b61ba13; -[SCStoriesCustomStoryMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61b700(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61b9ec:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61b9f8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((((uVar3 & 1) != 0) &&
        ((((*(long *)(param_1 + (long)_DAT_11278fc00) == *(long *)(param_3 + (long)_DAT_11278fc00)
           && (*(char *)(param_1 + (long)_DAT_11278fc0c) ==
               *(char *)(param_3 + (long)_DAT_11278fc0c))) &&
          (*(char *)(param_1 + (long)_DAT_11278fc1c) == *(char *)(param_3 + (long)_DAT_11278fc1c)))
         && ((*(char *)(param_1 + (long)_DAT_11278fc24) == *(char *)(param_3 + (long)_DAT_11278fc24)
             && (*(char *)(param_1 + (long)_DAT_11278fc28) ==
                 *(char *)(param_3 + (long)_DAT_11278fc28))))))) &&
       ((*(long *)(param_1 + (long)_DAT_11278fc2c) == *(long *)(param_3 + (long)_DAT_11278fc2c) &&
        ((*(char *)(param_1 + (long)_DAT_11278fc4c) == *(char *)(param_3 + (long)_DAT_11278fc4c) &&
         (*(long *)(param_1 + (long)_DAT_11278fc50) == *(long *)(param_3 + (long)_DAT_11278fc50)))))
       )) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278fc44);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278fc44);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fbfc),
              lVar4 == *(long *)(param_3 + (long)_DAT_11278fbfc) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc04),
             lVar4 == *(long *)(param_3 + (long)_DAT_11278fc04) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc08),
              lVar4 == *(long *)(param_3 + (long)_DAT_11278fc08) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc10),
              lVar4 == *(long *)(param_3 + (long)_DAT_11278fc10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc14),
             lVar4 == *(long *)(param_3 + (long)_DAT_11278fc14) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc18),
           lVar4 == *(long *)(param_3 + (long)_DAT_11278fc18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc20),
            lVar4 == *(long *)(param_3 + (long)_DAT_11278fc20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc30),
            lVar4 == *(long *)(param_3 + (long)_DAT_11278fc30) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc34),
             lVar4 == *(long *)(param_3 + (long)_DAT_11278fc34) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc38),
             lVar4 == *(long *)(param_3 + (long)_DAT_11278fc38) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           (((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc3c),
             lVar4 == *(long *)(param_3 + (long)_DAT_11278fc3c) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fc40),
             lVar4 == *(long *)(param_3 + (long)_DAT_11278fc40) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))))))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11278fc48);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_11278fc48)) {
          func_0x00010c071ae0();
          goto LAB_10b61b9f8;
        }
        goto LAB_10b61b9ec;
      }
    }
    lVar4 = 0;
  }
LAB_10b61b9f8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b61ba14; end: 10b61ba23; -[SCStoriesCustomStoryMetadata publicationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61ba14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbfc);
}



/* Entry: 10b61ba24; end: 10b61ba33; -[SCStoriesCustomStoryMetadata type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61ba24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fc00);
}


