/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10658f02c; end: 10658f033; -[SCAudioNotePlayer isPlaying] */

void FUN_10658f02c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_isPlaying_1125fc310);
  return;
}



/* Entry: 10658f034; end: 10658f03b; -[SCAudioNotePlayer pauseAll] */

void FUN_10658f034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 10658f03c; end: 10658f0b3; -[SCAudioNotePlayer .cxx_destruct] */

void FUN_10658f03c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10658f0b4; end: 10658f197; -[SCAudioNotePlayingServiceProvider provide] */

void FUN_10658f0b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb9e0;
  _objc_alloc(PTR_PTR_1126cb9e0);
  func_0x00010bff5320();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10658f198; end: 10658f1d7;  */

void FUN_10658f198(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd1220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10658f1d8; end: 10658f2af; -[SCAudioNotePlayingServiceProvider _audioNotePlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658f1d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126cb9e8;
  _objc_alloc(PTR_PTR_1126cb9e8);
  lVar2 = param_1 + _DAT_11274abe0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274abe4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c003380(puVar1,param_2,lVar3,lVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10658f2b0; end: 10658f2f3; -[SCAudioNotePlayingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658f2b0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274abe4);
  _objc_destroyWeak(param_1 + _DAT_11274abe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274abe8);
  return;
}



/* Entry: 10658f2f4; end: 10658f3bf; -[SCAudioNotePlayerInternalSession initWithSessionId:playbackEventsPublisher:type:] */

undefined1 *
FUN_10658f2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f1d20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10658f3c0; end: 10658f3e3; -[SCAudioNotePlayerInternalSession copyWithZone:] */

undefined8 FUN_10658f3c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10658f3e4; end: 10658f463; -[SCAudioNotePlayerInternalSession hash] */

undefined8 * FUN_10658f3e4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10658f4fc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10658f508;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10658f508;
          }
          goto LAB_10658f4fc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10658f508:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10658f464; end: 10658f523; -[SCAudioNotePlayerInternalSession isEqual:] */

long FUN_10658f464(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10658f4fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10658f508;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10658f508;
          }
          goto LAB_10658f4fc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10658f508:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10658f524; end: 10658f52b; -[SCAudioNotePlayerInternalSession sessionId] */

undefined8 FUN_10658f524(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10658f52c; end: 10658f533; -[SCAudioNotePlayerInternalSession playbackEventsPublisher] */

undefined8 FUN_10658f52c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10658f534; end: 10658f53b; -[SCAudioNotePlayerInternalSession type] */

undefined8 FUN_10658f534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10658f53c; end: 10658f577; -[SCAudioNotePlayerInternalSession .cxx_destruct] */

void FUN_10658f53c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10658f578; end: 10658f5e3; +[SCAudioNotePlayerInternalSessionType dataWithData:] */

void FUN_10658f578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb9b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10658f5e4; end: 10658f6a7; +[SCAudioNotePlayerInternalSessionType messageWithMessage:conversationId:metricsInfo:] */

void FUN_10658f5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cb9b8;
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
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10658f6a8; end: 10658f6cb; -[SCAudioNotePlayerInternalSessionType copyWithZone:] */

undefined8 FUN_10658f6a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10658f6cc; end: 10658f75b; -[SCAudioNotePlayerInternalSessionType hash] */

void FUN_10658f6cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f1d28;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10658f75c; end: 10658f79f; -[SCAudioNotePlayerInternalSessionType internalInit] */

void FUN_10658f75c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f1d28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10658f7a0; end: 10658f887; -[SCAudioNotePlayerInternalSessionType isEqual:] */

long FUN_10658f7a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10658f860:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10658f86c;
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
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10658f86c;
            }
            goto LAB_10658f860;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10658f86c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10658f888; end: 10658f913; -[SCAudioNotePlayerInternalSessionType matchMessage:data:] */

void FUN_10658f888(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10658f914; end: 10658f95b; -[SCAudioNotePlayerInternalSessionType .cxx_destruct] */

void FUN_10658f914(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10658f95c; end: 10658f9cf; -[SCGrapheneAudioNotePlayingMetric2 init] */

undefined1 * FUN_10658f95c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1d30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10658f9d0; end: 10658fae7;  */

undefined1 **
FUN_10658f9d0(long param_1,int param_2,undefined1 *param_3,undefined1 *param_4,undefined1 *param_5)

{
  undefined1 **ppuVar1;
  undefined1 ***pppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  puVar6 = param_3;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    puVar4 = &UNK_10f384197;
    if (param_2 == 0) {
      puVar4 = &UNK_10f38419c;
    }
    func_0x00010002b838(appuStack_50,puVar4);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11092c518);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)puVar5;
    param_4 = param_3;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      puVar6 = (undefined1 *)puVar5;
      param_4 = param_3;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pppuVar2 = &ppuStack_b0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a8 = PTR_PTR_1126f1d38;
  ppuStack_b0 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_b0,PTR_s_init_1125d9248);
  if (pppuVar2 != (undefined1 ***)0x0) {
    _objc_retain(puVar6);
    puVar3 = (undefined1 *)pppuVar2[1];
    pppuVar2[1] = (undefined1 **)puVar6;
    _objc_release(puVar3);
    _objc_retain(param_4);
    puVar3 = (undefined1 *)pppuVar2[2];
    pppuVar2[2] = (undefined1 **)param_4;
    _objc_release(puVar3);
    _objc_retain(param_5);
    puVar3 = (undefined1 *)pppuVar2[3];
    pppuVar2[3] = (undefined1 **)param_5;
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    puVar3 = (undefined1 *)pppuVar2[6];
    pppuVar2[6] = (undefined1 **)puVar4;
    _objc_release(puVar3);
    *(undefined4 *)(pppuVar2 + 5) = 0;
    func_0x00010bec87c0(pppuVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  return (undefined1 **)pppuVar2;
}



/* Entry: 10658fae8; end: 10658fbdb; -[SCChatNotificationDestinationProvider initWithUserSnapContactsPrivacyProvider:snapchatterPublicInfoFetcher:chatEligibilityProvider:] */

undefined1 *
FUN_10658fae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1d38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
    func_0x00010bec87c0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10658fbdc; end: 10658fcff; -[SCChatNotificationDestinationProvider _subscribeToUserSnapContactsPrivacyUpdates] */

void FUN_10658fbdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10658fd00; end: 10658fd6f;  */

void FUN_10658fd00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be32e60(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10658fd70; end: 10658fd7b; -[SCChatNotificationDestinationProvider _handleUserSnapContactsPrivacy:] */

void FUN_10658fd70(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUserSnapContactsPrivacy__112588168);
    return;
  }
  return;
}



/* Entry: 10658fd7c; end: 10658fdb7; -[SCChatNotificationDestinationProvider _getUserSnapContactsPrivacy] */

void FUN_10658fd7c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10658fdb8; end: 10658fdf7; -[SCChatNotificationDestinationProvider _setUserSnapContactsPrivacy:] */

void FUN_10658fdb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
  return;
}



/* Entry: 10658fdf8; end: 10658ff43; -[SCChatNotificationDestinationProvider destinationForNotification:navigationState:callback:] */

void FUN_10658fdf8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0d6b80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_canHandleNotification__1125a8ca0);
  if (((uVar2 & 1) == 0) || (uVar2 = uVar1, func_0x00010bf2cbe0(), (int)uVar2 == 0)) {
    lVar3 = param_3;
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      lVar3 = param_3;
      func_0x00010c15de20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        pcVar6 = *(code **)(param_5 + 0x10);
        uVar5 = 0;
        goto LAB_10658fec0;
      }
      uVar5 = param_1;
      func_0x00010beb63a0();
      if ((int)uVar5 == 0) {
        func_0x00010be22ba0(param_1);
        goto LAB_10658fec4;
      }
    }
    pcVar6 = *(code **)(param_5 + 0x10);
    uVar5 = 2;
  }
  else {
    pcVar6 = *(code **)(param_5 + 0x10);
    uVar5 = 1;
  }
LAB_10658fec0:
  (*pcVar6)(param_5,uVar5);
LAB_10658fec4:
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10658ff44; end: 10658ffc7; -[SCChatNotificationDestinationProvider _shouldShowOneOnOneChat] */

ulong FUN_10658ff44(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06fd80();
  if (((int)uVar2 == 0) || (uVar3 = param_1, func_0x00010be451a0(), (uVar3 & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    func_0x00010be23b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf01180();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10658ffc8; end: 1065900a3; -[SCChatNotificationDestinationProvider _isUserSnapPrivacyEveryone] */

undefined1 FUN_10658ffc8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010be23b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2939e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0ec0();
  _objc_release(uVar2);
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1065900a4; end: 1065900b7;  */

void FUN_1065900a4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1065900b8; end: 10659027b; -[SCChatNotificationDestinationProvider _getSnapchatterForNotification:callback:] */

void FUN_1065900b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = lVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 2;
  _dispatch_get_global_queue(2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_70,puVar6);
  _objc_retain(param_4);
  func_0x00010c09d7c0(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar6);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  puVar5 = puVar6;
  func_0x00010bfb1920(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010be696a0(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10659027c; end: 1065902ef;  */

void FUN_10659027c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be696a0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065902f0; end: 10659038b; -[SCChatNotificationDestinationProvider _onGetSnapchatter:callback:] */

void FUN_1065902f0(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010beb63a0();
  if ((param_3 != 0) && ((uVar1 & 1) == 0)) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c07ee20();
    _objc_release(uVar2);
    if ((uVar1 & 1) != 0) {
      uVar3 = 3;
      goto LAB_106590364;
    }
  }
  uVar3 = 2;
LAB_106590364:
  (**(code **)(param_4 + 0x10))(param_4,uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10659038c; end: 10659041f; -[SCChatNotificationDestinationProvider .cxx_destruct] */

void FUN_10659038c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106590420; end: 106590543; -[SCChatNotificationServiceProvider _provider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106590420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126cb9f8;
  _objc_alloc(PTR_PTR_1126cb9f8);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11274ac34;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c23f980(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11274ac30;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c244620(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_11274ac2c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010bf36440(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ef00(puVar1,param_2,lVar2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106590544; end: 106590593; -[SCChatNotificationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106590544(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274ac34);
  _objc_destroyWeak(param_1 + _DAT_11274ac30);
  _objc_destroyWeak(param_1 + _DAT_11274ac2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274ac28);
  return;
}



/* Entry: 106590594; end: 1065906d3; -[SCChatVideoPlaybackProvider initWithAvPlayerProvider:chatMediaFetcher:chatContentDelivery:travelModeSignalProvider:configProvider:] */

undefined1 *
FUN_106590594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1d40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126cba00;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065906d4; end: 1065909eb; -[SCChatVideoPlaybackProvider createPlayerForContextObject:completion:] */

void FUN_1065906d4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  puVar2 = PTR_PTR_1126b4628;
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    puVar2 = param_3;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    uVar1 = 0;
    puVar3 = param_3;
  }
  else {
    puVar3 = PTR_PTR_1126cba08;
    func_0x00010c0e0120();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2998e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b4628;
    _objc_opt_class(PTR_PTR_1126b4628);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar2);
    puVar2 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c082740();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010c231e40(*(undefined8 *)(param_1 + 0x20));
    }
    puVar4 = puVar3;
    func_0x00010c2357a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c130140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1f3c0();
    uVar1 = SUB81(puVar5,0);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    puVar3 = puVar2;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      func_0x00010be14fa0(param_1);
    }
    else {
      _objc_initWeak(auStack_68,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(puVar2);
      uStack_70 = uVar1;
      _objc_retain(param_4);
      func_0x00010c125c20(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(param_4);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065909ec; end: 106590a87;  */

void FUN_1065909ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be811a0();
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be536c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106590a88; end: 106590bd3; -[SCChatVideoPlaybackProvider _fetchThumbnailMediaFromCache:waitForSavedToCache:renderStaticThumbnail:completion:] */

void FUN_106590a88(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_5;
  _objc_retain(param_6);
  uStack_4f = param_4;
  func_0x00010c26de20(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 106590bd4; end: 106590c77;  */

void FUN_106590bd4(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    if (*(char *)(param_1 + 0x39) != '\x01') {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
      goto LAB_106590c64;
    }
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010beea4e0();
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be811a0();
  }
  _objc_release(param_1);
LAB_106590c64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106590c78; end: 106590f0b; -[SCChatVideoPlaybackProvider _waitForLocalMediaToSaveInCache:renderStaticThumbnail:completion:] */

void FUN_106590c78(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b4c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    _objc_initWeak(auStack_78,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c09dc20();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106590f0c;
    puStack_88 = &UNK_110856a28;
    _objc_retain(param_3);
    uVar3 = uVar2;
    uStack_80 = param_3;
    func_0x00010bfad7a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c270520(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_78);
    _objc_retain(param_3);
    uStack_a8 = param_4;
    _objc_retain(param_5);
    _objc_retain(puVar4);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar4);
  }
  else {
    func_0x00010be14fa0(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106590f0c; end: 106590f73;  */

undefined8 FUN_106590f0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106590f74; end: 1065910c3;  */

void FUN_106590f74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1065910c4;
  puStack_78 = &UNK_11092c608;
  _objc_copyWeak(auStack_60,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_58 = *(undefined1 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar1;
  _objc_retain(uVar2);
  uStack_68 = uVar2;
  _objc_copyWeak(auStack_98,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_2);
  return;
}



/* Entry: 1065910c4; end: 106591133;  */

void FUN_1065910c4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106591134; end: 10659123f; -[SCChatVideoPlaybackProvider _processFetchedThumbnailImageForMedia:thumbnailImage:renderStaticThumbnail:completion:] */

void FUN_106591134(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if (param_5 == 0) {
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010be12f40(param_1);
    lVar2 = param_4;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c1010e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar3);
    (**(code **)(param_6 + 0x10))(param_6,lVar2,param_4);
    _objc_release(param_6);
    param_6 = param_4;
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106591240; end: 10659139f; -[SCChatVideoPlaybackProvider _fetchOverlayImageForMedia:thumbnailImage:completion:] */

void FUN_106591240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0efa00(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065913a0; end: 1065913f7;  */

void FUN_1065913a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be15480();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065913f8; end: 1065916bb; -[SCChatVideoPlaybackProvider _fetchVideoUrlForMedia:thumbnailImage:overlayImage:completion:] */

void FUN_1065913f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c29bc20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
    uStack_70 = (undefined *)0x0;
  }
  else {
    uStack_70 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (uStack_70 == (undefined *)0x0) {
      uStack_70 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126ba150;
      func_0x00010c22e420();
      if ((int)puVar2 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c1010e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(uVar4);
        (**(code **)(param_6 + 0x10))(param_6,uVar5,param_4);
        goto LAB_106591668;
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1010e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  uVar4 = param_5;
  if (puVar1 == (undefined *)0x0) {
    uVar4 = param_4;
  }
  (**(code **)(param_6 + 0x10))(param_6,uVar6,uVar4);
  func_0x00010be536e0(param_1);
  _objc_release(uVar6);
LAB_106591668:
  _objc_release(uVar5);
  _objc_release(uStack_70);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065916bc; end: 10659175f; -[SCChatVideoPlaybackProvider _logFetchThumbnailForMedia:error:] */

void FUN_1065916bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  bVar1 = param_4 == 0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x0001070a5de0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0cb2a0(param_3);
  _objc_release(param_3);
  func_0x00010b62cb88(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_106591bd0(uVar3,param_4,uVar2,bVar1,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106591760; end: 1065917b7; -[SCChatVideoPlaybackProvider _logFetchVideoUrlForMedia:success:] */

void FUN_106591760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0cb2a0(param_3);
  func_0x00010b62cb88();
  _objc_retainAutoreleasedReturnValue();
  FUN_106591e44(uVar1,param_3,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065917b8; end: 1065917ff; -[SCChatVideoPlaybackProvider _logLocalCacheMissForMedia:] */

void FUN_1065917b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0cb2a0(param_3);
  func_0x00010b62cb88();
  _objc_retainAutoreleasedReturnValue();
  FUN_10659202c(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106591800; end: 10659185f; -[SCChatVideoPlaybackProvider .cxx_destruct] */

void FUN_106591800(long param_1)

{
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



/* Entry: 106591860; end: 106591943; -[SCChatVideoPlaybackProviderServiceProvider provide] */

void FUN_106591860(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cba10;
  _objc_alloc(PTR_PTR_1126cba10);
  func_0x00010bffdf20();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106591944; end: 106591983;  */

void FUN_106591944(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106591984; end: 106591af3; -[SCChatVideoPlaybackProviderServiceProvider _createVideoPlaybackProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106591984(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126cba18;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274ac50;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274ac54;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11274ac58;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11274ac5c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c108640();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274ac60;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5e20(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106591af4; end: 106591b5b; -[SCChatVideoPlaybackProviderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106591af4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274ac60);
  _objc_destroyWeak(param_1 + _DAT_11274ac5c);
  _objc_destroyWeak(param_1 + _DAT_11274ac58);
  _objc_destroyWeak(param_1 + _DAT_11274ac54);
  _objc_destroyWeak(param_1 + _DAT_11274ac50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274ac64);
  return;
}



/* Entry: 106591b5c; end: 106591bcf; -[SCGrapheneChatVideoPlaybackProviderMetric2 init] */

undefined1 * FUN_106591b5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1d48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106591bd0; end: 106591e43;  */

/* WARNING: Removing unreachable block (ram,0x000106591e14) */

undefined *
FUN_106591bd0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [3];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar9 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar5 = (undefined *)param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38424b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38424b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    unaff_x24 = auStack_70;
    puVar1 = &UNK_10f38424c;
    if ((int)param_4 == 0) {
      puVar1 = &UNK_10f384251;
    }
    func_0x00010002b838(unaff_x24,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11092c6c8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11092c6c8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    puVar2 = puVar9;
    puVar5 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      param_4 = &uStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_f0 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puStack_f0);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_106591e44;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar9 = puVar2;
  puStack_100 = unaff_x24;
  puStack_f8 = (undefined *)param_4;
  puStack_e8 = puVar3;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  puVar13 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      param_4 = (undefined8 *)&UNK_10f38424b;
    }
    else {
      param_4 = (undefined8 *)puVar1;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_138;
    func_0x00010002b838(auStack_138,param_4);
    puVar3 = &UNK_10f38424c;
    if ((int)puVar2 == 0) {
      puVar3 = &UNK_10f384251;
    }
    func_0x00010002b838(auStack_120,puVar3);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar8 = &UNK_11092c718;
    puVar2 = &uStack_158;
    puVar9 = &uStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11092c718,puVar9,puVar5);
    puStack_140 = puVar2;
    func_0x00010007e5dc(&puStack_140);
    lVar12 = 0;
    puVar13 = auStack_138;
    do {
      if ((&cStack_109)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar1);
    puVar3 = puVar5;
    __Unwind_Resume();
    puVar11 = &uStack_1e0;
    pcStack_168 = FUN_10659202c;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar9;
    puStack_1a0 = unaff_x24;
    puStack_198 = (undefined *)param_4;
    puStack_190 = puVar2;
    puStack_188 = puVar13;
    puStack_180 = puVar5;
    puStack_178 = puVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(puVar8);
    if (puVar3 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar3 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f38424b;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1c0,puVar1);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x00010007e1e8(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11092c768,&uStack_1e0,puVar9);
      puStack_1c8 = (undefined1 *)&uStack_1e0;
      func_0x00010007e5dc(&puStack_1c8);
      puVar10 = puVar11;
      if (cStack_1a9 < '\0') {
        __ZdlPv(auStack_1c0[0]);
        puVar10 = puVar11;
      }
    }
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar8);
      puVar5 = puVar1;
      __Unwind_Resume();
      ppuVar6 = &puStack_210;
      pcStack_1e8 = FUN_1065921a0;
      puStack_200 = puVar1;
      puStack_1f8 = puVar8;
      pppuStack_1f0 = &ppuStack_170;
      _objc_retain(puVar10);
      puStack_208 = PTR_PTR_1126f1d50;
      puStack_210 = puVar5;
      _objc_msgSendSuper2(&puStack_210,PTR_s_init_1125d9248);
      if (ppuVar6 != (undefined **)0x0) {
        _objc_retain(puVar10);
        uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
        *(undefined8 **)((long)ppuVar6 + 8) = puVar10;
        _objc_release(uVar7);
      }
      _objc_release(puVar10);
      return (undefined *)ppuVar6;
    }
    return puVar1;
  }
  return puVar5;
}



/* Entry: 106591e44; end: 10659202b;  */

undefined * FUN_106591e44(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  puVar11 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      unaff_x23 = &UNK_10f38424b;
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    puVar5 = &UNK_10f38424c;
    if ((int)param_3 == 0) {
      puVar5 = &UNK_10f384251;
    }
    func_0x00010002b838(auStack_60,puVar5);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar5 = &UNK_11092c718;
    param_3 = &uStack_98;
    puVar6 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11092c718,puVar6,param_4);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_10659202c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = puVar11;
  puStack_c0 = puVar1;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f38424b;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_100,puVar1);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11092c768,&uStack_120,puVar6);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar7 = puVar8;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_150;
  pcStack_128 = FUN_1065921a0;
  puStack_140 = puVar1;
  puStack_138 = puVar5;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  puStack_148 = PTR_PTR_1126f1d50;
  puStack_150 = puVar2;
  _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(puVar7);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined8 **)((long)ppuVar3 + 8) = puVar7;
    _objc_release(uVar4);
  }
  _objc_release(puVar7);
  return (undefined *)ppuVar3;
}



/* Entry: 10659202c; end: 10659219f;  */

undefined * FUN_10659202c(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38424b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11092c768,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_1065921a0;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_a8 = PTR_PTR_1126f1d50;
  puStack_b0 = puVar2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined1 **)((long)ppuVar3 + 8) = puVar5;
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  return (undefined *)ppuVar3;
}



/* Entry: 1065921a0; end: 106592213; -[SCChatVideoPlaybackProviderServices initWithChatVideoPlaybackProvider:] */

undefined1 * FUN_1065921a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1d50;
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



/* Entry: 106592214; end: 10659221b; -[SCChatVideoPlaybackProviderServices chatVideoPlaybackProvider] */

undefined8 FUN_106592214(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10659221c; end: 106592227; -[SCChatVideoPlaybackProviderServices .cxx_destruct] */

void FUN_10659221c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106592228; end: 106592427; -[SCArroyoMediaReferenceTracker didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_106592228(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_x4;
  long in_x5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  lVar3 = in_x4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(in_x4);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c071ac0(uVar4);
      uVar5 = uVar7;
      func_0x0001070b6028(uVar7,uVar1,uVar4);
      if ((int)uVar5 == 0) {
        func_0x00010bdc75a0(param_1);
      }
      else {
        func_0x00010bf6e760(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8c860(param_1);
        _objc_release(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = in_x4;
    func_0x00010bf52a60();
  }
  _objc_retain(in_x5);
  lVar3 = in_x5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(in_x5);
      }
      func_0x00010be8c860(param_1);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = in_x5;
    func_0x00010bf52a60();
  }
  _objc_release(in_x5);
  _objc_release(in_x5);
  _objc_release(in_x4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106592428; end: 10659242b; -[SCArroyoMediaReferenceTracker didCreateConversation:] */

void FUN_106592428(void)

{
  return;
}



/* Entry: 10659242c; end: 10659246b; -[SCArroyoMediaReferenceTracker didRemoveConversation:] */

void FUN_10659242c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12df40(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10659246c; end: 10659246f; -[SCArroyoMediaReferenceTracker didSendStart:] */

void FUN_10659246c(void)

{
  return;
}



/* Entry: 106592470; end: 106592473; -[SCArroyoMediaReferenceTracker didSendComplete:] */

void FUN_106592470(void)

{
  return;
}



/* Entry: 106592474; end: 106592477; -[SCArroyoMediaReferenceTracker didConfirmConversationServerCreation:] */

void FUN_106592474(void)

{
  return;
}



/* Entry: 106592478; end: 10659251f; -[SCArroyoMediaReferenceTracker didConversationReset:messages:] */

void FUN_106592478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79980(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf742e0(param_1,param_2,uVar1,param_3,param_4,PTR____NSArray0__struct_11034ab48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106592520; end: 106592757; -[SCArroyoMediaReferenceTracker _addMediaReferenceForMessage:] */

void FUN_106592520(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar1 = param_3;
  func_0x00010c0c72c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = &uStack_130;
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar15 = *plStack_120;
    do {
      uVar12 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(uVar1);
        }
        lVar13 = *(long *)(lStack_128 + uVar12 * 8);
        lVar3 = lVar13;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          uVar14 = *(undefined8 *)(param_1 + 8);
          lVar3 = lVar13;
          func_0x00010c0c5180(lVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010bf490e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_3;
          func_0x00010bf50280(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befade0(uVar14,param_2,lVar3,uVar4,uVar5);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(lVar3);
          uVar4 = param_3;
          func_0x00010c07d940(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
          if ((uVar4 & 1) == 0) {
            uVar14 = *(undefined8 *)(param_1 + 0x10);
            uVar4 = param_3;
            func_0x00010bf50280(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = param_3;
            func_0x00010bf490e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_3;
            func_0x00010bf026e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = param_3;
            func_0x00010c27dd80(param_3);
            func_0x00010c09b980(uVar14,param_2,uVar4,uVar5,uVar6,uVar7,lVar13,1,1);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar4);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar2 != uVar12);
      puVar11 = &uStack_130;
      uVar2 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,puVar11,auStack_f0,0x10);
    } while (uVar2 != 0);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar14 = *(undefined8 *)(param_3 + 8);
  _objc_retain(puVar11);
  puVar8 = puVar11;
  func_0x00010c0cb5a0(puVar11);
  func_0x00010c0df7c0(puVar9,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar11;
  func_0x00010bf50280(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar11 = puVar8;
  func_0x00010c272380(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12df60(uVar14,param_2,puVar10,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106592758; end: 106592823; -[SCArroyoMediaReferenceTracker _removeMediaReferenceForDescriptor:] */

void FUN_106592758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cb5a0(param_3);
  func_0x00010c0df7c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010c272380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12df60(uVar5,param_2,puVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106592824; end: 10659286b; -[SCArroyoMediaReferenceTracker .cxx_destruct] */

void FUN_106592824(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10659286c; end: 106592b37;  */

void FUN_10659286c(undefined **param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined **ppuStack_148;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  ppuVar2 = param_1;
  func_0x00010bf509a0();
  ppuVar3 = param_1;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x1) {
    ppuVar8 = &PTR___NSConcreteGlobalBlock_11092c838;
    ppuStack_148 = ppuVar3;
    func_0x000100504554(ppuVar3,&PTR___NSConcreteGlobalBlock_11092c838);
  }
  else {
    ppuVar2 = ppuVar3;
    func_0x00010bf529e0();
    _objc_release(ppuVar3);
    if (ppuVar2 != (undefined **)0x1) {
      ppuStack_148 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      ppuVar3 = param_1;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar2 != (undefined **)0x0) {
        ppuVar10 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar3);
          }
          uVar11 = *(ulong *)((long)ppuVar10 * 8);
          uVar4 = uVar11;
          func_0x00010c0f4a60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = param_2;
          func_0x00010c272380(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c0720c0();
          _objc_release(ppuVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          if ((uVar7 & 1) == 0) {
            func_0x00010c0f4a60(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar11;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuStack_148);
            _objc_release(uVar4);
            _objc_release(uVar11);
          }
          ppuVar10 = (undefined **)((long)ppuVar10 + 1);
        } while (ppuVar2 != ppuVar10);
        ppuVar2 = ppuVar3;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar3);
      goto LAB_106592ae8;
    }
    ppuVar2 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar3;
    func_0x00010c0f4a60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar2;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_148 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar3);
LAB_106592ae8:
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    func_0x00010c0f4a60(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_148 = ppuVar8;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuStack_148);
  return;
}



/* Entry: 106592b38; end: 106592b7f;  */

void FUN_106592b38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0f4a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106592b80; end: 106592b87;  */

void FUN_106592b80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 106592b88; end: 106592be3;  */

void FUN_106592b88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf11840();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106592be4; end: 106592c2b; -[SCArroyoMessageActionHandler nativeConversationManager] */

void FUN_106592be4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106592c2c; end: 106592cdb; -[SCArroyoMessageActionHandler dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_106592c2c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cba20;
  _objc_opt_class(PTR_PTR_1126cba20);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  puVar1 = PTR_PTR_1126cba20;
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar1);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    uVar2 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    uVar3 = uVar2;
    func_0x00010bf500c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = uVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106592cdc; end: 106592d7b; -[SCArroyoMessageActionHandler eraseMessageInConversationId:messageId:source:completion:] */

void FUN_106592cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0cd8;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bdc35c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb9c0(param_1,param_2,puVar1,param_4,5,param_5,param_6,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106592d7c; end: 106592e1f; -[SCArroyoMessageActionHandler markMessagesAsReadForConversationId:chatPageSource:conversationViewModel:] */

void FUN_106592d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c0886e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5d5e0(param_1,param_2,param_3,param_4,param_5,uVar2,0);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106592e20; end: 106592e23; -[SCArroyoMessageActionHandler markMessagesAsReadForConversationId:chatPageSource:conversationViewModel:upToMessageId:loggedMessageIds:] */

void FUN_106592e20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__markMessagesAsReadForConversati_112574f18);
  return;
}



/* Entry: 106592e24; end: 1065937cb; -[SCArroyoMessageActionHandler _markMessagesAsReadForConversationId:chatPageSource:conversationViewModel:upToMessageId:loggedMessageIds:] */

void FUN_106592e24(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6,ulong param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puStack_2f8;
  undefined *puStack_2e0;
  undefined *puStack_280;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (((param_3 == 0) || (param_5 == (undefined *)0x0)) || (param_6 == 0)) goto LAB_10659373c;
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _CACurrentMediaTime();
  puVar3 = PTR_PTR_1126b2730;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1065937cc;
  puStack_170 = &UNK_110844b80;
  _objc_retain(param_3);
  lStack_168 = param_3;
  _objc_retain(puVar2);
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x1065937d0;
  puStack_1a0 = &UNK_110849620;
  puStack_160 = puVar2;
  _objc_retain(puVar2);
  puStack_198 = puVar2;
  func_0x00010c04f4c0();
  puVar1 = param_5;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0cb700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar14 = *(undefined **)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(puVar14);
  puVar1 = param_5;
  func_0x00010c074920();
  puVar16 = param_5;
  if ((int)puVar1 == 0) {
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar16 == (undefined *)0x0) {
      puStack_2e0 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puVar1 = param_5;
      func_0x00010c122e00();
      _objc_retainAutoreleasedReturnValue();
      puStack_2e0 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_140 = puVar1;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
  else {
    puVar1 = param_5;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    _objc_release(puVar5);
    _objc_release(puVar1);
    if (puVar6 == (undefined *)0x0) {
      puVar16 = puVar14;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      puStack_2e0 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_140 = puVar16;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar16;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      puStack_2e0 = puVar1;
      func_0x000100504554();
      _objc_release(puVar1);
    }
  }
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(param_5);
  puVar1 = param_5;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010c06ecc0();
  if ((int)puVar16 == 0) {
    puStack_2f8 = (undefined *)0x0;
  }
  else {
    puVar16 = param_5;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puStack_2f8 = puVar16;
    func_0x00010bf33480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
  }
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bf50940();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar16;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bf50940();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar1);
  puVar1 = puStack_2e0;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    _objc_retain(puVar4);
    puStack_280 = puVar4;
    func_0x00010bf52a60();
    if (puStack_280 != (undefined *)0x0) {
      lVar12 = *plStack_1f0;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_1f0 != lVar12) {
            _objc_enumerationMutation(puVar4);
          }
          lVar15 = *(long *)(lStack_1f8 + (long)puVar16 * 8);
          lVar7 = lVar15;
          func_0x00010c0cb5a0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0b4ca0();
          lVar9 = param_6;
          func_0x00010c0b4ca0();
          _objc_release(lVar7);
          if (lVar8 <= lVar9) {
            if (param_7 != 0) {
              lVar7 = lVar15;
              func_0x00010bf026e0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar7 == 0) {
                lVar8 = lVar15;
                func_0x00010c0cb5a0(lVar15);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                _objc_retain(lVar7);
                lVar8 = lVar7;
              }
              _objc_release(lVar7);
              uVar10 = param_7;
              func_0x00010bf4b900();
              if ((uVar10 & 1) != 0) {
                _objc_release(lVar8);
                goto LAB_1065935e0;
              }
              func_0x00010befa120(param_7);
              _objc_release(lVar8);
            }
            lVar7 = lVar15;
            func_0x00010c0cb5a0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(lVar7);
            puStack_140 = (undefined *)0x0;
            ppuStack_138 = &puStack_140;
            uStack_130 = 0x3032000000;
            uStack_128 = 0x1065937d4;
            uStack_120 = 0x1065937e4;
            uStack_118 = 0;
            puStack_218 = &uStack_220;
            uStack_220 = 0;
            uStack_210 = 0x2020000000;
            uStack_208 = 0;
            lVar7 = lVar15;
            func_0x00010c120bc0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0bcc00();
            _objc_release(lVar7);
            uVar13 = *(undefined8 *)(param_1 + 0x50);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar15;
            func_0x00010c0cb340();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar15;
            func_0x00010c0cb9a0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar15;
            func_0x00010bf026e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0cb860();
            func_0x00010c074920(param_5);
            func_0x00010c11ecc0();
            func_0x00010c11ec60();
            func_0x00010c07c0c0();
            func_0x00010c0cb480();
            lVar11 = lVar15;
            func_0x00010c11eb80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfbda00();
            func_0x00010c0a2e40(uVar13);
            _objc_release(lVar11);
            _objc_release(lVar9);
            _objc_release(lVar8);
            _objc_release(lVar7);
            _objc_release(uVar13);
            uVar13 = *(undefined8 *)(param_1 + 0x50);
            func_0x00010c269d40(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0cb340(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c074920(param_5);
            func_0x00010c0a48e0(uVar13);
            _objc_release(lVar15);
            _objc_release(uVar13);
            __Block_object_dispose(&uStack_220,8);
            __Block_object_dispose(&puStack_140,8);
            _objc_release(uStack_118);
          }
LAB_1065935e0:
          puVar16 = puVar16 + 1;
        } while (puStack_280 != puVar16);
        puStack_280 = puVar4;
        func_0x00010bf52a60();
      } while (puStack_280 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    if (param_7 == 0) {
LAB_10659362c:
      uVar13 = *(undefined8 *)(param_1 + 0x90);
      puVar16 = puVar1;
      lStack_150 = param_3;
      func_0x00010bf51e00();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_148 = puVar16;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar13);
      _objc_release(puVar6);
      _objc_release(puVar16);
    }
    else {
      puVar16 = puVar1;
      func_0x00010bf529e0();
      if (puVar16 != (undefined *)0x0) goto LAB_10659362c;
    }
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(param_6);
  func_0x00010bf86aa0(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(puStack_2f8);
  _objc_release(puStack_2e0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_198);
  _objc_release(puStack_160);
  _objc_release(lStack_168);
  _objc_release(puVar2);
LAB_10659373c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_220,8);
  __Block_object_dispose(&puStack_140,8);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdba010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_110346c38)();
  return;
}



/* Entry: 1065937cc; end: 1065937eb;  */

void FUN_1065937cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_110346c38)();
  return;
}



/* Entry: 1065937ec; end: 106593823;  */

void FUN_1065937ec(long param_1,undefined8 param_2)

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



/* Entry: 106593824; end: 106593837;  */

void FUN_106593824(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106593838; end: 10659389b; -[SCArroyoMessageActionHandler exitConversationId:lastReadViewModel:] */

void FUN_106593838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c0886e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c020(param_1,param_2,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10659389c; end: 106593913; -[SCArroyoMessageActionHandler exitConversationId:upToMessageId:] */

void FUN_10659389c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0b4ca0(param_4);
  func_0x00010c0df7c0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c020(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106593914; end: 10659391b; -[SCArroyoMessageActionHandler exitConversationId:] */

void FUN_106593914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exitConversation_lastMessageId__1125609a8,param_3,0);
  return;
}



/* Entry: 10659391c; end: 106593a4f; -[SCArroyoMessageActionHandler _exitConversation:lastMessageId:] */

void FUN_10659391c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2730;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106593a50;
  puStack_50 = &UNK_110842e18;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1,param_2,&puStack_68,&PTR___NSConcreteGlobalBlock_11092c878);
  func_0x00010c139740(param_1,param_2,param_3,0);
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b560(param_1,param_2,puVar2,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106593a50; end: 106593a57;  */

void FUN_106593a50(void)

{
  return;
}



/* Entry: 106593a58; end: 106593b03; -[SCArroyoMessageActionHandler _updateMessage:update:source:] */

void FUN_106593a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c0cb5a0(param_3);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb9a0(param_1,param_2,uVar1,puVar3,param_4,param_5);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106593b04; end: 106593b87; -[SCArroyoMessageActionHandler _updateMessage:messageId:update:source:] */

void FUN_106593b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_3);
  func_0x00010c25d700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedb9c0(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106593b88; end: 106593d23; -[SCArroyoMessageActionHandler _updateMessage:messageId:update:source:completionCallback:failureCallback:] */

void FUN_106593b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106593d24;
  puStack_88 = &UNK_11092c898;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_5;
  uStack_60 = param_6;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retain(param_8);
  uStack_78 = param_8;
  _objc_retainBlock(&puStack_a0);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(param_4);
  func_0x00010bfa8960(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


