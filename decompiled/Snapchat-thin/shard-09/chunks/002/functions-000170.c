/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b20694; end: 106b2069f; -[SCPasskeyConfirmAlertViewCallback .cxx_destruct] */

void FUN_106b20694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b206a0; end: 106b207cb; +[SCPasskeyAlertViewConfig confirmAlertWithTitle:description:confirmText:cancelText:onConfirm:] */

void FUN_106b206a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d0968;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b207cc; end: 106b208d3; +[SCPasskeyAlertViewConfig errorAlertWithTitle:description:confirmText:onConfirm:] */

void FUN_106b207cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d0968;
  _objc_retain(param_6);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar4);
  uVar4 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b208d4; end: 106b208f7; -[SCPasskeyAlertViewConfig copyWithZone:] */

undefined8 FUN_106b208d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b208f8; end: 106b209c3; -[SCPasskeyAlertViewConfig hash] */

void FUN_106b208f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_1126f4fc8;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b209c4; end: 106b20a07; -[SCPasskeyAlertViewConfig internalInit] */

void FUN_106b209c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f4fc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b20a08; end: 106b20bab; -[SCPasskeyAlertViewConfig isEqual:] */

long FUN_106b20a08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar5 = 1;
    goto LAB_106b20af0;
  }
  lVar5 = 0;
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b20af0;
  uVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar1);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
    lVar5 = *(long *)(param_1 + 0x10);
    if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
      lVar5 = *(long *)(param_1 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)(param_1 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          lVar4 = *(long *)(param_3 + 0x28);
          if (lVar3 == lVar4) {
LAB_106b20b10:
            lVar5 = *(long *)(param_1 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)(param_1 + 0x38);
              if ((lVar5 != *(long *)(param_3 + 0x38)) && (func_0x00010c071ae0(), (int)lVar5 == 0))
              goto LAB_106b20b8c;
              lVar5 = *(long *)(param_1 + 0x40);
              if ((lVar5 != *(long *)(param_3 + 0x40)) && (func_0x00010c071ae0(), (int)lVar5 == 0))
              goto LAB_106b20b8c;
              lVar5 = *(long *)(param_1 + 0x48);
              if ((lVar5 != *(long *)(param_3 + 0x48)) && (func_0x00010c071ae0(), (int)lVar5 == 0))
              goto LAB_106b20b8c;
              lVar5 = *(long *)(param_1 + 0x50);
              if (lVar5 == *(long *)(param_3 + 0x50)) {
                lVar5 = 1;
              }
              else {
                func_0x00010c071ae0();
              }
            }
            else {
LAB_106b20b8c:
              lVar5 = 0;
            }
            if (lVar3 == lVar4) goto LAB_106b20af0;
          }
          else {
            unaff_x21 = lVar4;
            _objc_retainBlock(lVar4);
            lVar5 = lVar3;
            func_0x00010c071ae0();
            if ((int)lVar5 != 0) goto LAB_106b20b10;
            lVar5 = 0;
          }
          _objc_release(unaff_x21);
          goto LAB_106b20af0;
        }
      }
    }
  }
  lVar5 = 0;
LAB_106b20af0:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 106b20bac; end: 106b20c3f; -[SCPasskeyAlertViewConfig matchErrorAlert:confirmAlert:] */

void FUN_106b20bac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b20c40; end: 106b20cc3; -[SCPasskeyAlertViewConfig .cxx_destruct] */

void FUN_106b20c40(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106b20cc4; end: 106b20cf7; -[SCListPasskeysGrapheneImpl logListPasskeysStarted] */

void FUN_106b20cc4(undefined8 param_1,long param_2)

{
  FUN_106b22d88(*(undefined8 *)(param_2 + 8),1);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 106b20cf8; end: 106b20d2f; -[SCListPasskeysGrapheneImpl logListPasskeysFailure:] */

void FUN_106b20cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_106b22e00(*(undefined8 *)(param_1 + 8),param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010be55210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logLatencyWithResultIfPossible__112572e20,
             &PTR____CFConstantStringClassReference_110dad2d8);
  return;
}



/* Entry: 106b20d30; end: 106b20d63; -[SCListPasskeysGrapheneImpl logListPasskeysSucceeded] */

void FUN_106b20d30(long param_1)

{
  FUN_106b22f74(*(undefined8 *)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x00010be55210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logLatencyWithResultIfPossible__112572e20,
             &PTR____CFConstantStringClassReference_110dab0d8);
  return;
}



/* Entry: 106b20d64; end: 106b20dd3; -[SCListPasskeysGrapheneImpl _logLatencyWithResultIfPossible:] */

void FUN_106b20d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x18);
  if (dVar2 != -1.0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010bf5fd80(uVar1);
    FUN_106b23160(dVar2 - *(double *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),param_3);
    _objc_release(param_3);
  }
  *(undefined8 *)(param_1 + 0x18) = 0xbff0000000000000;
  return;
}



/* Entry: 106b20dd4; end: 106b20e03; -[SCListPasskeysGrapheneImpl .cxx_destruct] */

void FUN_106b20dd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b20e04; end: 106b20e4b; -[SCPasskeyEnrollmentTimestamps init] */

void FUN_106b20e04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f4fd8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    auVar2 = NEON_fmov(0xbff0000000000000,8);
    *(long *)((long)puVar1 + 0x10) = auVar2._8_8_;
    *(long *)((long)puVar1 + 8) = auVar2._0_8_;
    *(undefined8 *)((long)puVar1 + 0x18) = 0xbff0000000000000;
  }
  return;
}



/* Entry: 106b20e4c; end: 106b20e53; -[SCPasskeyEnrollmentTimestamps enrollmentStartTime] */

undefined8 FUN_106b20e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b20e54; end: 106b20e5b; -[SCPasskeyEnrollmentTimestamps setEnrollmentStartTime:] */

void FUN_106b20e54(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 106b20e5c; end: 106b20e63; -[SCPasskeyEnrollmentTimestamps passkeyCreationStartTime] */

undefined8 FUN_106b20e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b20e64; end: 106b20e6b; -[SCPasskeyEnrollmentTimestamps setPasskeyCreationStartTime:] */

void FUN_106b20e64(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 106b20e6c; end: 106b20e73; -[SCPasskeyEnrollmentTimestamps passkeyPersistenceStartTime] */

undefined8 FUN_106b20e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b20e74; end: 106b20e7b; -[SCPasskeyEnrollmentTimestamps setPasskeyPersistenceStartTime:] */

void FUN_106b20e74(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 106b20e7c; end: 106b20f47; -[SCPasskeyEnrollmentGrapheneImpl initWithGraphene:timeProvider:trigger:] */

undefined1 *
FUN_106b20e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4fe0;
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
    puVar3 = (undefined1 *)puVar1;
    func_0x00010becfe60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b20f48; end: 106b20fbb; -[SCPasskeyEnrollmentGrapheneImpl initWithTrigger:] */

undefined8 FUN_106b20f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0970;
  _objc_opt_new(PTR_PTR_1126d0970);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c0182c0(param_1,param_2,puVar1,puVar2,param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106b20fbc; end: 106b2100f; -[SCPasskeyEnrollmentGrapheneImpl logEnrollmentStarted] */

void FUN_106b20fbc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  FUN_106b21618(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),1);
  puVar1 = PTR_PTR_1126d0978;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c196510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setEnrollmentStartTime__112643360);
  return;
}



/* Entry: 106b21010; end: 106b2105f; -[SCPasskeyEnrollmentGrapheneImpl logFetchOptionsFailure:] */

void FUN_106b21010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106b2178c(*(undefined8 *)(param_1 + 8),param_3,*(undefined8 *)(param_1 + 0x20),1);
  func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x10));
  func_0x00010be53580(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b21060; end: 106b210af; -[SCPasskeyEnrollmentGrapheneImpl logPasskeyCreationStarted] */

void FUN_106b21060(long param_1)

{
  FUN_106b219bc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),1);
  func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1d9540(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c0f4ea0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010be53590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logFetchOptionsFinishedWithResu_112572700,
             &PTR____CFConstantStringClassReference_110dab0d8);
  return;
}



/* Entry: 106b210b0; end: 106b21117; -[SCPasskeyEnrollmentGrapheneImpl _logFetchOptionsFinishedWithResult:endTime:] */

void FUN_106b210b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = param_1;
  _objc_retain(param_4);
  if ((*(long *)(param_2 + 0x18) != 0) && (func_0x00010bf96600(), 0.0 <= dVar1)) {
    func_0x00010bf96600(*(undefined8 *)(param_2 + 0x18));
    FUN_106b224a8(param_1 - dVar1,*(undefined8 *)(param_2 + 8),param_4,
                  *(undefined8 *)(param_2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b21118; end: 106b21167; -[SCPasskeyEnrollmentGrapheneImpl logPasskeyCreationFailure:] */

void FUN_106b21118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106b21b30(*(undefined8 *)(param_1 + 8),param_3,*(undefined8 *)(param_1 + 0x20),1);
  func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x10));
  func_0x00010be56e20(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b21168; end: 106b211b7; -[SCPasskeyEnrollmentGrapheneImpl logPasskeyPersistenceStarted] */

void FUN_106b21168(long param_1)

{
  FUN_106b21d60(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),1);
  func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1d9620(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c0f5060(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010be56e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logPasskeyCreationFinishedWithR_112573528,
             &PTR____CFConstantStringClassReference_110dab0d8);
  return;
}



/* Entry: 106b211b8; end: 106b2121f; -[SCPasskeyEnrollmentGrapheneImpl _logPasskeyCreationFinishedWithResult:endTime:] */

void FUN_106b211b8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = param_1;
  _objc_retain(param_4);
  if ((*(long *)(param_2 + 0x18) != 0) && (func_0x00010c0f4ea0(), 0.0 <= dVar1)) {
    func_0x00010c0f4ea0(*(undefined8 *)(param_2 + 0x18));
    FUN_106b2276c(param_1 - dVar1,*(undefined8 *)(param_2 + 8),param_4,
                  *(undefined8 *)(param_2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b21220; end: 106b21267; -[SCPasskeyEnrollmentGrapheneImpl logPasskeyPersistenceFailure:] */

void FUN_106b21220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_106b21ed4(*(undefined8 *)(param_1 + 8),param_3,*(undefined8 *)(param_1 + 0x20),1);
  func_0x00010be56e40(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b21268; end: 106b212ab; -[SCPasskeyEnrollmentGrapheneImpl logEnrollmentSucceeded] */

void FUN_106b21268(long param_1)

{
  undefined8 uVar1;
  
  FUN_106b22104(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),1);
  func_0x00010be56e40(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b212ac; end: 106b2134b; -[SCPasskeyEnrollmentGrapheneImpl _logPasskeyPersistenceFinishedWithResult:] */

void FUN_106b212ac(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  if (*(long *)(param_2 + 0x18) != 0) {
    dVar1 = param_1;
    func_0x00010c0f5060();
    if (0.0 <= dVar1) {
      func_0x00010c0f5060(*(undefined8 *)(param_2 + 0x18));
      dVar1 = param_1 - dVar1;
      FUN_106b22a30(*(undefined8 *)(param_2 + 8),param_4,*(undefined8 *)(param_2 + 0x20));
    }
    if ((*(long *)(param_2 + 0x18) != 0) && (func_0x00010bf96600(), 0.0 <= dVar1)) {
      func_0x00010bf96600(*(undefined8 *)(param_2 + 0x18));
      FUN_106b22cf4(param_1 - dVar1,*(undefined8 *)(param_2 + 8),param_4,
                    *(undefined8 *)(param_2 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b2134c; end: 106b21377; -[SCPasskeyEnrollmentGrapheneImpl _triggerToString:] */

undefined ** FUN_106b2134c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e738d8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e738b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e738f8;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 106b21378; end: 106b213bf; -[SCPasskeyEnrollmentGrapheneImpl .cxx_destruct] */

void FUN_106b21378(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b213c0; end: 106b2146b; -[SCRevokePasskeyGrapheneImpl initWithGraphene:timeProvider:] */

undefined1 *
FUN_106b213c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4fe8;
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
    *(undefined8 *)((long)puVar1 + 0x18) = 0xbff0000000000000;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b2146c; end: 106b214d7; -[SCRevokePasskeyGrapheneImpl init] */

undefined8 FUN_106b2146c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0970;
  _objc_alloc_init(PTR_PTR_1126d0970);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c018280(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106b214d8; end: 106b2150b; -[SCRevokePasskeyGrapheneImpl logRevokePasskeyStarted] */

void FUN_106b214d8(undefined8 param_1,long param_2)

{
  FUN_106b231cc(*(undefined8 *)(param_2 + 8),1);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 106b2150c; end: 106b21543; -[SCRevokePasskeyGrapheneImpl logRevokePasskeyFailure:] */

void FUN_106b2150c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_106b23244(*(undefined8 *)(param_1 + 8),param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010be55210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logLatencyWithResultIfPossible__112572e20,
             &PTR____CFConstantStringClassReference_110dad2d8);
  return;
}



/* Entry: 106b21544; end: 106b21577; -[SCRevokePasskeyGrapheneImpl logRevokePasskeySucceeded] */

void FUN_106b21544(long param_1)

{
  FUN_106b233b8(*(undefined8 *)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x00010be55210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logLatencyWithResultIfPossible__112572e20,
             &PTR____CFConstantStringClassReference_110dab0d8);
  return;
}



/* Entry: 106b21578; end: 106b215e7; -[SCRevokePasskeyGrapheneImpl _logLatencyWithResultIfPossible:] */

void FUN_106b21578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x18);
  if (dVar2 != -1.0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010bf5fd80(uVar1);
    FUN_106b235a4(dVar2 - *(double *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),param_3);
    _objc_release(param_3);
  }
  *(undefined8 *)(param_1 + 0x18) = 0xbff0000000000000;
  return;
}



/* Entry: 106b215e8; end: 106b21617; -[SCRevokePasskeyGrapheneImpl .cxx_destruct] */

void FUN_106b215e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b21618; end: 106b2178b;  */

void FUN_106b21618(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110961740;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961740,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_106b2178c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar11 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar10 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3b6ae4;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110961790;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961790,puVar3,param_5);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar13 = 0;
    puVar10 = auStack_f8;
    puVar11 = param_5;
    do {
      if ((&cStack_c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_106b219bc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar10;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar7 = &UNK_1109617e0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109617e0,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar8 = puVar9;
    puVar11 = puVar3;
    puVar10 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar11 = puVar3;
      puVar10 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106b21b30;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar5 = puVar8;
  puVar9 = puVar11;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar10;
  plStack_1c8 = plVar12;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_200,puVar5);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar2 = &UNK_110961830;
    unaff_x23 = &uStack_238;
    puVar5 = &uStack_238;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961830,puVar5,puVar11);
    puStack_220 = unaff_x23;
    func_0x00010007e5dc(&puStack_220);
    lVar13 = 0;
    puVar3 = auStack_218;
    puVar9 = puVar11;
    do {
      if ((&cStack_1e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_2c0;
  pcStack_248 = FUN_106b21d60;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar10 = puVar5;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar3;
  puStack_268 = puVar1;
  puStack_260 = puVar8;
  puStack_258 = puVar7;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar2);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar6 = &UNK_110961880;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961880,&uStack_2c0,puVar5);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar10 = puVar11;
    puVar9 = puVar5;
    puVar3 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar10 = puVar11;
      puVar9 = puVar5;
      puVar3 = &uStack_2c0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_2c8 = FUN_106b21ed4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar5 = puVar10;
  puVar11 = puVar9;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar3;
  plStack_2e8 = plVar12;
  puStack_2e0 = puVar1;
  puStack_2d8 = puVar2;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar6);
  _objc_retain(puVar10);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_320,puVar5);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar7 = &UNK_1109618d0;
    unaff_x23 = &uStack_358;
    puVar5 = &uStack_358;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109618d0,puVar5,puVar9);
    puStack_340 = unaff_x23;
    func_0x00010007e5dc(&puStack_340);
    lVar13 = 0;
    puVar3 = auStack_338;
    puVar11 = puVar9;
    do {
      if ((&cStack_309)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_3e0;
  pcStack_368 = FUN_106b22104;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar8 = puVar5;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar3;
  puStack_388 = puVar1;
  puStack_380 = puVar10;
  puStack_378 = puVar6;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(puVar7);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_3c0;
    func_0x00010002b838(auStack_3c0,puVar1);
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_3a8,1);
    puVar2 = &UNK_110961920;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961920,&uStack_3e0,puVar5);
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    puVar8 = puVar9;
    puVar11 = puVar5;
    puVar3 = &uStack_3e0;
    if (cStack_3a9 < '\0') {
      __ZdlPv(auStack_3c0[0]);
      puVar8 = puVar9;
      puVar11 = puVar5;
      puVar3 = &uStack_3e0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_3e8 = FUN_106b22278;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar5 = puVar8;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = puVar3;
  plStack_408 = plVar12;
  puStack_400 = puVar1;
  puStack_3f8 = puVar7;
  pppuStack_3f0 = &pppuStack_370;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_458,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_440,puVar5);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
    puVar6 = &UNK_110961970;
    puVar5 = &uStack_478;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961970,puVar5,puVar11);
    puStack_460 = &uStack_478;
    func_0x00010007e5dc(&puStack_460);
    lVar13 = 0;
    do {
      if ((&cStack_429)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  if (puVar1 != (undefined *)0x0) {
    FUN_106b22278(puVar1,puVar6,puVar5,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106b2178c; end: 106b219bb;  */

void FUN_106b2178c(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  long *plStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
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
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar13 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110961790;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961790,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    puVar9 = param_5;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_106b219bc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3b6ae4;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_1109617e0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109617e0,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar7 = puVar8;
    puVar9 = puVar2;
    puVar13 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar9 = puVar2;
      puVar13 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_106b21b30;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puVar8 = puVar9;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar13;
  plStack_148 = plVar12;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  puVar13 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar4 = &UNK_110961830;
    unaff_x23 = &uStack_1b8;
    puVar2 = &uStack_1b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961830,puVar2,puVar9);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar11 = 0;
    puVar13 = auStack_198;
    puVar8 = puVar9;
    do {
      if ((&cStack_169)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_240;
  pcStack_1c8 = FUN_106b21d60;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar9 = puVar2;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar13;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar7;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar4);
  plVar12 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar3 = &UNK_110961880;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961880,&uStack_240,puVar2);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar9 = puVar10;
    puVar8 = puVar2;
    puVar13 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar9 = puVar10;
      puVar8 = puVar2;
      puVar13 = &uStack_240;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_248 = FUN_106b21ed4;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar2 = puVar9;
  puVar7 = puVar8;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar13;
  plStack_268 = plVar12;
  puStack_260 = puVar1;
  puStack_258 = puVar4;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  puVar13 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_2a0,puVar2);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar6 = &UNK_1109618d0;
    unaff_x23 = &uStack_2d8;
    puVar2 = &uStack_2d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109618d0,puVar2,puVar8);
    puStack_2c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2c0);
    lVar11 = 0;
    puVar13 = auStack_2b8;
    puVar7 = puVar8;
    do {
      if ((&cStack_289)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar3);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_360;
  pcStack_2e8 = FUN_106b22104;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar8 = puVar2;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar13;
  puStack_308 = puVar1;
  puStack_300 = puVar9;
  puStack_2f8 = puVar3;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_340;
    func_0x00010002b838(auStack_340,puVar1);
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_328,1);
    puVar4 = &UNK_110961920;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961920,&uStack_360,puVar2);
    puStack_348 = (undefined1 *)&uStack_360;
    func_0x00010007e5dc(&puStack_348);
    puVar8 = puVar10;
    puVar7 = puVar2;
    puVar13 = &uStack_360;
    if (cStack_329 < '\0') {
      __ZdlPv(auStack_340[0]);
      puVar8 = puVar10;
      puVar7 = puVar2;
      puVar13 = &uStack_360;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_368 = FUN_106b22278;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar2 = puVar8;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar13;
  plStack_388 = plVar12;
  puStack_380 = puVar1;
  puStack_378 = puVar6;
  pppuStack_370 = &pppuStack_2f0;
  _objc_retain(puVar4);
  _objc_retain(puVar8);
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_3d8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_3c0,puVar2);
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
    puVar3 = &UNK_110961970;
    puVar2 = &uStack_3f8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961970,puVar2,puVar7);
    puStack_3e0 = &uStack_3f8;
    func_0x00010007e5dc(&puStack_3e0);
    lVar11 = 0;
    do {
      if ((&cStack_3a9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_3c1 < '\0') {
    __ZdlPv(auStack_3d8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar4);
  __Unwind_Resume();
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  if (puVar1 != (undefined *)0x0) {
    FUN_106b22278(puVar1,puVar3,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106b219bc; end: 106b21b2f;  */

void FUN_106b219bc(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109617e0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109617e0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_106b21b30;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar11 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar10 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3b6ae4;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110961830;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961830,puVar3,param_5);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar13 = 0;
    puVar10 = auStack_f8;
    puVar11 = param_5;
    do {
      if ((&cStack_c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_106b21d60;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar10;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar7 = &UNK_110961880;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961880,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar8 = puVar9;
    puVar11 = puVar3;
    puVar10 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar11 = puVar3;
      puVar10 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106b21ed4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar5 = puVar8;
  puVar9 = puVar11;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar10;
  plStack_1c8 = plVar12;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_200,puVar5);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar2 = &UNK_1109618d0;
    unaff_x23 = &uStack_238;
    puVar5 = &uStack_238;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109618d0,puVar5,puVar11);
    puStack_220 = unaff_x23;
    func_0x00010007e5dc(&puStack_220);
    lVar13 = 0;
    puVar3 = auStack_218;
    puVar9 = puVar11;
    do {
      if ((&cStack_1e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_2c0;
  pcStack_248 = FUN_106b22104;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar10 = puVar5;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar3;
  puStack_268 = puVar1;
  puStack_260 = puVar8;
  puStack_258 = puVar7;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar2);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar6 = &UNK_110961920;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961920,&uStack_2c0,puVar5);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar10 = puVar11;
    puVar9 = puVar5;
    puVar3 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar10 = puVar11;
      puVar9 = puVar5;
      puVar3 = &uStack_2c0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_2c8 = FUN_106b22278;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar5 = puVar10;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar3;
  plStack_2e8 = plVar12;
  puStack_2e0 = puVar1;
  puStack_2d8 = puVar2;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar6);
  _objc_retain(puVar10);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_338,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_320,puVar5);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar7 = &UNK_110961970;
    puVar5 = &uStack_358;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961970,puVar5,puVar9);
    puStack_340 = &uStack_358;
    func_0x00010007e5dc(&puStack_340);
    lVar13 = 0;
    do {
      if ((&cStack_309)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar6);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  if (puVar1 != (undefined *)0x0) {
    FUN_106b22278(puVar1,puVar7,puVar5,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106b21b30; end: 106b21d5f;  */

void FUN_106b21b30(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
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
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar13 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110961830;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961830,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    puVar9 = param_5;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_106b21d60;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3b6ae4;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110961880;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961880,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar7 = puVar8;
    puVar9 = puVar2;
    puVar13 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar9 = puVar2;
      puVar13 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_106b21ed4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puVar8 = puVar9;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar13;
  plStack_148 = plVar12;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  puVar13 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar4 = &UNK_1109618d0;
    unaff_x23 = &uStack_1b8;
    puVar2 = &uStack_1b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109618d0,puVar2,puVar9);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar11 = 0;
    puVar13 = auStack_198;
    puVar8 = puVar9;
    do {
      if ((&cStack_169)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_240;
  pcStack_1c8 = FUN_106b22104;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar9 = puVar2;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar13;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar7;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar4);
  plVar12 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar3 = &UNK_110961920;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961920,&uStack_240,puVar2);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar9 = puVar10;
    puVar8 = puVar2;
    puVar13 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar9 = puVar10;
      puVar8 = puVar2;
      puVar13 = &uStack_240;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_248 = FUN_106b22278;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar2 = puVar9;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar13;
  plStack_268 = plVar12;
  puStack_260 = puVar1;
  puStack_258 = puVar4;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_2b8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_2a0,puVar2);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar6 = &UNK_110961970;
    puVar2 = &uStack_2d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961970,puVar2,puVar8);
    puStack_2c0 = &uStack_2d8;
    func_0x00010007e5dc(&puStack_2c0);
    lVar11 = 0;
    do {
      if ((&cStack_289)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  if (puVar1 != (undefined *)0x0) {
    FUN_106b22278(puVar1,puVar6,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106b21d60; end: 106b21ed3;  */

void FUN_106b21d60(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110961880;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110961880,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_106b21ed4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar13 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3b6ae4;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_1109618d0;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109618d0,puVar3,param_5);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar12 = 0;
    puVar13 = auStack_f8;
    puVar10 = param_5;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_106b22104;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar13;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar7 = &UNK_110961920;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110961920,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar8 = puVar9;
    puVar10 = puVar3;
    puVar13 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar10 = puVar3;
      puVar13 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106b22278;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar5 = puVar8;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar13;
  plStack_1c8 = plVar11;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_218,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_200,puVar5);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar2 = &UNK_110961970;
    puVar5 = &uStack_238;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110961970,puVar5,puVar10);
    puStack_220 = &uStack_238;
    func_0x00010007e5dc(&puStack_220);
    lVar12 = 0;
    do {
      if ((&cStack_1e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  if (puVar1 != (undefined *)0x0) {
    FUN_106b22278(puVar1,puVar2,puVar5,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b21ed4; end: 106b22103;  */

void FUN_106b21ed4(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
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
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109618d0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109618d0,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    puVar9 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_106b22104;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3b6ae4;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110961920;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110961920,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar7 = puVar8;
    puVar9 = puVar2;
    puVar12 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar9 = puVar2;
      puVar12 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_106b22278;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  plStack_148 = plVar11;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar4 = &UNK_110961970;
    puVar2 = &uStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110961970,puVar2,puVar9);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar10 = 0;
    do {
      if ((&cStack_169)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar7);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  if (puVar1 != (undefined *)0x0) {
    FUN_106b22278(puVar1,puVar4,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106b22104; end: 106b22277;  */

void FUN_106b22104(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110961920;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110961920,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar3 = puVar5;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3b6ae4;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar4 = &UNK_110961970;
    puVar3 = &uStack_118;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110961970,puVar3,param_5);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar7 = 0;
    do {
      if ((&cStack_c9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_106b22278(puVar2,puVar4,puVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106b22278; end: 106b224a7;  */

void FUN_106b22278(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110961970;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110961970,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_106b22278(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b224a8; end: 106b2253b;  */

void FUN_106b224a8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_106b22278(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b2253c; end: 106b2276b;  */

void FUN_106b2253c(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109619c0;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1109619c0,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_106b2253c(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b2276c; end: 106b227ff;  */

void FUN_106b2276c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_106b2253c(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b22800; end: 106b22a2f;  */

void FUN_106b22800(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110961a10;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110961a10,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_106b22800(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b22a30; end: 106b22ac3;  */

void FUN_106b22a30(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_106b22800(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b22ac4; end: 106b22cf3;  */

void FUN_106b22ac4(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3b6ae4;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110961a60;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110961a60,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_106b22ac4(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b22cf4; end: 106b22d87;  */

void FUN_106b22cf4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_106b22ac4(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b22d88; end: 106b22dff;  */

void FUN_106b22d88(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110961ab0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106b22e00; end: 106b22f73;  */

void FUN_106b22e00(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
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
    puVar1 = &UNK_110961b00;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110961b00,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106b22f74;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110961b50,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106b22f74; end: 106b22feb;  */

void FUN_106b22f74(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110961b50,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106b22fec; end: 106b2315f;  */

void FUN_106b22fec(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110961ba0;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110961ba0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_106b22fec(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b23160; end: 106b231cb;  */

void FUN_106b23160(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_106b22fec(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b231cc; end: 106b23243;  */

void FUN_106b231cc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110961bf0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106b23244; end: 106b233b7;  */

void FUN_106b23244(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
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
    puVar1 = &UNK_110961c40;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110961c40,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106b233b8;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110961c90,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106b233b8; end: 106b2342f;  */

void FUN_106b233b8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110961c90,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106b23430; end: 106b235a3;  */

void FUN_106b23430(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3b6ae4;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110961ce0;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110961ce0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_106b23430(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b235a4; end: 106b2360f;  */

void FUN_106b235a4(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_106b23430(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b23610; end: 106b23797;  */

void FUN_106b23610(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae728;
  puVar3 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    func_0x00010bf24820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf56360(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar3 = PTR_PTR_1126d0980;
    _objc_alloc(PTR_PTR_1126d0980);
    func_0x00010c058f80();
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b23798; end: 106b237d7;  */

void FUN_106b23798(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befab00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b237d8; end: 106b2384b; -[UNIPasskeyExternalService initWithUnifiedGrpcService:] */

undefined1 * FUN_106b237d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5000;
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



/* Entry: 106b2384c; end: 106b2392f; -[UNIPasskeyExternalService getPasskeyEnrollmentOptionsWithRequest:callOptionsBuilder:handler:] */

void FUN_106b2384c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d0990;
  _objc_opt_class(PTR_PTR_1126d0990);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e73938,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b23930; end: 106b23a13; -[UNIPasskeyExternalService enrollPasskeyWithRequest:callOptionsBuilder:handler:] */

void FUN_106b23930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d0998;
  _objc_opt_class(PTR_PTR_1126d0998);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e73958,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b23a14; end: 106b23af7; -[UNIPasskeyExternalService listPasskeysWithRequest:callOptionsBuilder:handler:] */

void FUN_106b23a14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d09a0;
  _objc_opt_class(PTR_PTR_1126d09a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e73978,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b23af8; end: 106b23bdb; -[UNIPasskeyExternalService revokePasskeyWithRequest:callOptionsBuilder:handler:] */

void FUN_106b23af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d09a8;
  _objc_opt_class(PTR_PTR_1126d09a8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e73998,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b23bdc; end: 106b23be7; -[UNIPasskeyExternalService .cxx_destruct] */

void FUN_106b23bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b23be8; end: 106b23c63;  */

undefined * FUN_106b23be8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6908 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e739b8,
                        &UNK_10dde6468,&UNK_10dde6640,0x12,FUN_106b23c64,0);
    do {
      if (puRam00000001136c6908 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6908;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6908,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6908 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6908;
}



/* Entry: 106b23c64; end: 106b23c6f;  */

bool FUN_106b23c64(uint param_1)

{
  return param_1 < 0x12;
}



/* Entry: 106b23c70; end: 106b23cd7; +[EnrollPasskeyRequest descriptor] */

void FUN_106b23c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6910 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17820,
                        &PTR____CFConstantStringClassReference_110e739d8,&PTR_DAT_1131726f8,
                        &PTR_DAT_113172790,5,0x30,0x1c);
    puRam00000001136c6910 = puVar1;
  }
  return;
}



/* Entry: 106b23cd8; end: 106b23d3f; +[EnrollPasskeyResponse descriptor] */

void FUN_106b23cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6918 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17870,
                        &PTR____CFConstantStringClassReference_110e739f8,&PTR_DAT_1131726f8,
                        &PTR_s_result_113172710,2,0x18,0x1c);
    puRam00000001136c6918 = puVar1;
  }
  return;
}



/* Entry: 106b23d40; end: 106b23e23; +[EnrollPasskeyResult descriptor] */

void FUN_106b23d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6920 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b178c0,
                        &PTR____CFConstantStringClassReference_110e73a18,&PTR_DAT_1131726f8,
                        &PTR_s_statusCode_113172750,2,0x10,0x1c);
    puRam00000001136c6920 = puVar1;
  }
  return;
}



/* Entry: 106b23e24; end: 106b23e2f;  */

bool FUN_106b23e24(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106b23e30; end: 106b23eab;  */

undefined * FUN_106b23e30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6930 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e73a58,
                        &UNK_10dde66ac,&UNK_10dde670c,5,FUN_106b23eac,0);
    do {
      if (puRam00000001136c6930 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6930;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6930,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6930 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6930;
}



/* Entry: 106b23eac; end: 106b23eb7;  */

bool FUN_106b23eac(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106b23eb8; end: 106b23f1f; +[GetPasskeyEnrollmentOptionsRequest descriptor] */

void FUN_106b23eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17960,
                        &PTR____CFConstantStringClassReference_110e73a78,&PTR_DAT_113172830,
                        &PTR_s_deviceId_113172888,4,0x20,0x1c);
    puRam00000001136c6938 = puVar1;
  }
  return;
}



/* Entry: 106b23f20; end: 106b23f87; +[EnrollmentFlow descriptor] */

void FUN_106b23f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b179b0,
                        &PTR____CFConstantStringClassReference_110e73a98,&PTR_DAT_113172830,0,0,4,
                        0x1c);
    puRam00000001136c6940 = puVar1;
  }
  return;
}



/* Entry: 106b23f88; end: 106b23fef; +[GetPasskeyEnrollmentOptionsResponse descriptor] */

void FUN_106b23f88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17a00,
                        &PTR____CFConstantStringClassReference_110e73ab8,&PTR_DAT_113172830,
                        &PTR_s_result_113172908,7,0x40,0x1c);
    puRam00000001136c6948 = puVar1;
  }
  return;
}



/* Entry: 106b23ff0; end: 106b24057; +[GetPasskeyEnrollmentOptionsResult descriptor] */

void FUN_106b23ff0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6950 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17a50,
                        &PTR____CFConstantStringClassReference_110e73ad8,&PTR_DAT_113172830,
                        &PTR_s_statusCode_113172848,2,0x10,0x1c);
    puRam00000001136c6950 = puVar1;
  }
  return;
}



/* Entry: 106b24058; end: 106b240bf; +[Algorithm descriptor] */

void FUN_106b24058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17af0,
                        &PTR____CFConstantStringClassReference_110e73af8,&PTR_DAT_1131729e8,
                        &PTR_DAT_113172a00,1,8,0x1c);
    puRam00000001136c6958 = puVar1;
  }
  return;
}



/* Entry: 106b240c0; end: 106b241a3; +[CredentialDescriptor descriptor] */

void FUN_106b240c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17b90,
                        &PTR____CFConstantStringClassReference_110e73b18,&PTR_DAT_113172a20,
                        &PTR_DAT_113172a38,1,0x10,0x1c);
    puRam00000001136c6960 = puVar1;
  }
  return;
}



/* Entry: 106b241a4; end: 106b241af;  */

bool FUN_106b241a4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106b241b0; end: 106b24217; +[ListPasskeysRequest descriptor] */

void FUN_106b241b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6970 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17c30,
                        &PTR____CFConstantStringClassReference_110e73b58,&PTR_DAT_113172a58,
                        &PTR_s_deviceId_113172a70,2,0x18,0x1c);
    puRam00000001136c6970 = puVar1;
  }
  return;
}



/* Entry: 106b24218; end: 106b2427f; +[ListPasskeysResponse descriptor] */

void FUN_106b24218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6978 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17c80,
                        &PTR____CFConstantStringClassReference_110e73b78,&PTR_DAT_113172a58,
                        &PTR_s_result_113172ab0,2,0x18,0x1c);
    puRam00000001136c6978 = puVar1;
  }
  return;
}



/* Entry: 106b24280; end: 106b24363; +[ListPasskeysResult descriptor] */

void FUN_106b24280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6980 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17cd0,
                        &PTR____CFConstantStringClassReference_110e73b98,&PTR_DAT_113172a58,
                        &PTR_s_statusCode_113172af0,3,0x18,0x1c);
    puRam00000001136c6980 = puVar1;
  }
  return;
}



/* Entry: 106b24364; end: 106b2436f;  */

bool FUN_106b24364(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106b24370; end: 106b243d7; +[Passkey descriptor] */

void FUN_106b24370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6990 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17d70,
                        &PTR____CFConstantStringClassReference_110e73bd8,&PTR_DAT_113172b50,
                        &PTR_DAT_113172b88,7,0x40,0x1c);
    puRam00000001136c6990 = puVar1;
  }
  return;
}



/* Entry: 106b243d8; end: 106b244e3; +[ManagementStatus descriptor] */

void FUN_106b243d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6998 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b17dc0,
                        &PTR____CFConstantStringClassReference_110e73bf8,&PTR_DAT_113172b50,
                        &PTR_s_status_113172b68,1,8,0x1c);
    puRam00000001136c6998 = puVar1;
  }
  return;
}



/* Entry: 106b244e4; end: 106b24513;  */

void FUN_106b244e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e73c18,1,0);
  uRam000000011381e580 = (char)uVar1;
  return;
}



/* Entry: 106b24514; end: 106b245b7;  */

undefined1 FUN_106b24514(undefined8 param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar1 = lRam000000011381e588;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106b245b8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x11381e588,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar2 = uRam000000011381e590;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106b245b8; end: 106b245e7;  */

void FUN_106b245b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e73c38,0,0);
  uRam000000011381e590 = (char)uVar1;
  return;
}



/* Entry: 106b245e8; end: 106b2486f;  */

void FUN_106b245e8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e73c58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e73c58,
                      &PTR____CFConstantStringClassReference_110e73c78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}


