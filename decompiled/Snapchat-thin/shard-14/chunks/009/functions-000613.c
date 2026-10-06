/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b726e98; end: 10b726ebb; -[SCLensEffectScreenDimmingEvent copyWithZone:] */

undefined8 FUN_10b726e98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b726ebc; end: 10b726f27; -[SCLensEffectScreenDimmingEvent hash] */

undefined8 * FUN_10b726ebc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b726fac;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b726fac;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b726fac;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b726fac:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b726f28; end: 10b726fc7; -[SCLensEffectScreenDimmingEvent isEqual:] */

long FUN_10b726f28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b726fac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b726fac;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b726fac;
    }
  }
  lVar3 = 1;
LAB_10b726fac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b726fc8; end: 10b726fcf; -[SCLensEffectScreenDimmingEvent effectId] */

undefined8 FUN_10b726fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b726fd0; end: 10b726fd7; -[SCLensEffectScreenDimmingEvent screenDimmingEnabled] */

undefined1 FUN_10b726fd0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b726fd8; end: 10b726fe3; -[SCLensEffectScreenDimmingEvent .cxx_destruct] */

void FUN_10b726fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b726fe4; end: 10b72705b; -[SCLensEffectRecognizeExpressionEvent initWithExpression:] */

undefined1 * FUN_10b726fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a310;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b72705c; end: 10b72707f; -[SCLensEffectRecognizeExpressionEvent copyWithZone:] */

undefined8 FUN_10b72705c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b727080; end: 10b727087; -[SCLensEffectRecognizeExpressionEvent hash] */

void FUN_10b727080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b727088; end: 10b727117; -[SCLensEffectRecognizeExpressionEvent isEqual:] */

long FUN_10b727088(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7270fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b7270fc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b7270fc;
    }
  }
  lVar3 = 1;
LAB_10b7270fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b727118; end: 10b72711f; -[SCLensEffectRecognizeExpressionEvent expression] */

undefined8 FUN_10b727118(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b727120; end: 10b72712b; -[SCLensEffectRecognizeExpressionEvent .cxx_destruct] */

void FUN_10b727120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b72712c; end: 10b727173; -[SCLensEffectRecognizeFacesEvent initWithFacesCount:] */

void FUN_10b72712c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a318;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b727174; end: 10b727197; -[SCLensEffectRecognizeFacesEvent copyWithZone:] */

undefined8 FUN_10b727174(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b727198; end: 10b72719f; -[SCLensEffectRecognizeFacesEvent hash] */

undefined8 FUN_10b727198(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7271a0; end: 10b727227; -[SCLensEffectRecognizeFacesEvent isEqual:] */

bool FUN_10b7271a0(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b727228; end: 10b72722f; -[SCLensEffectRecognizeFacesEvent facesCount] */

undefined8 FUN_10b727228(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b727230; end: 10b7272b7; -[SCLensEffectToggleCameraEvent initWithEffectId:actionType:] */

undefined1 *
FUN_10b727230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a320;
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



/* Entry: 10b7272b8; end: 10b7272db; -[SCLensEffectToggleCameraEvent copyWithZone:] */

undefined8 FUN_10b7272b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7272dc; end: 10b727347; -[SCLensEffectToggleCameraEvent hash] */

undefined8 * FUN_10b7272dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7273cc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b7273cc;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b7273cc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b7273cc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b727348; end: 10b7273e7; -[SCLensEffectToggleCameraEvent isEqual:] */

long FUN_10b727348(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7273cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b7273cc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b7273cc;
    }
  }
  lVar3 = 1;
LAB_10b7273cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7273e8; end: 10b7273ef; -[SCLensEffectToggleCameraEvent effectId] */

undefined8 FUN_10b7273e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7273f0; end: 10b7273f7; -[SCLensEffectToggleCameraEvent actionType] */

undefined8 FUN_10b7273f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7273f8; end: 10b727403; -[SCLensEffectToggleCameraEvent .cxx_destruct] */

void FUN_10b7273f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b727404; end: 10b72748b; -[SCLensEffectLinkBitmojiCTAEvent initWithEffectId:actionType:] */

undefined1 *
FUN_10b727404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a328;
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



/* Entry: 10b72748c; end: 10b7274af; -[SCLensEffectLinkBitmojiCTAEvent copyWithZone:] */

undefined8 FUN_10b72748c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7274b0; end: 10b72751b; -[SCLensEffectLinkBitmojiCTAEvent hash] */

undefined8 * FUN_10b7274b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7275a0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b7275a0;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b7275a0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b7275a0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b72751c; end: 10b7275bb; -[SCLensEffectLinkBitmojiCTAEvent isEqual:] */

long FUN_10b72751c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7275a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b7275a0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b7275a0;
    }
  }
  lVar3 = 1;
LAB_10b7275a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7275bc; end: 10b7275c3; -[SCLensEffectLinkBitmojiCTAEvent effectId] */

undefined8 FUN_10b7275bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7275c4; end: 10b7275cb; -[SCLensEffectLinkBitmojiCTAEvent actionType] */

undefined8 FUN_10b7275c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7275cc; end: 10b7275d7; -[SCLensEffectLinkBitmojiCTAEvent .cxx_destruct] */

void FUN_10b7275cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7275d8; end: 10b727643; +[SCLensEffectRecordingEvent captureImageWithEffects:] */

void FUN_10b7275d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db478;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b727644; end: 10b7276a7; +[SCLensEffectRecordingEvent startRecordingWithEffects:] */

void FUN_10b727644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db478;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7276a8; end: 10b7276f3; +[SCLensEffectRecordingEvent stopRecording] */

void FUN_10b7276a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db478;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7276f4; end: 10b727717; -[SCLensEffectRecordingEvent copyWithZone:] */

undefined8 FUN_10b7276f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b727718; end: 10b72778f; -[SCLensEffectRecordingEvent hash] */

void FUN_10b727718(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_11270a330;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b727790; end: 10b7277d3; -[SCLensEffectRecordingEvent internalInit] */

void FUN_10b727790(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a330;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7277d4; end: 10b72788b; -[SCLensEffectRecordingEvent isEqual:] */

long FUN_10b7277d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b727864:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b727870;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b727870;
        }
        goto LAB_10b727864;
      }
    }
    lVar3 = 0;
  }
LAB_10b727870:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b72788c; end: 10b72793b; -[SCLensEffectRecordingEvent matchStartRecording:stopRecording:captureImage:] */

void FUN_10b72788c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10b727918;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4);
      }
      goto LAB_10b727918;
    }
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_10b727918;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b727918:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b72793c; end: 10b72796b; -[SCLensEffectRecordingEvent .cxx_destruct] */

void FUN_10b72793c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b72796c; end: 10b7279d7; +[SCLensEffectHintEvent hideAllHintsWithEffectId:] */

void FUN_10b72796c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db470;
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



/* Entry: 10b7279d8; end: 10b727a9b; +[SCLensEffectHintEvent showHintWithEffectId:hintId:hintTranslations:] */

void FUN_10b7279d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126db470;
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



/* Entry: 10b727a9c; end: 10b727abf; -[SCLensEffectHintEvent copyWithZone:] */

undefined8 FUN_10b727a9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b727ac0; end: 10b727b4f; -[SCLensEffectHintEvent hash] */

void FUN_10b727ac0(long param_1)

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
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270a338;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b727b50; end: 10b727b93; -[SCLensEffectHintEvent internalInit] */

void FUN_10b727b50(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b727b94; end: 10b727c7b; -[SCLensEffectHintEvent isEqual:] */

long FUN_10b727b94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b727c54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b727c60;
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
              goto LAB_10b727c60;
            }
            goto LAB_10b727c54;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b727c60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b727c7c; end: 10b727d07; -[SCLensEffectHintEvent matchShowHint:hideAllHints:] */

void FUN_10b727c7c(long param_1,undefined8 param_2,long param_3,long param_4)

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



/* Entry: 10b727d08; end: 10b727d4f; -[SCLensEffectHintEvent .cxx_destruct] */

void FUN_10b727d08(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b727d50; end: 10b727da7; -[SCLensIconInMemoryCache clearCache] */

void FUN_10b727d50(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 10b727da8; end: 10b727db3; -[SCLensIconInMemoryCache .cxx_destruct] */

void FUN_10b727da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b727db4; end: 10b727e93;  */

ulong FUN_10b727db4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_60 [4];
  ulong auStack_40 [2];
  
  auStack_40[1] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_1;
  func_0x00010bf529e0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar5 * 8 + 0xf & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  uVar4 = (long)auStack_40 + lVar1;
  uVar5 = param_1;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar2 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfde980();
      *(ulong *)(uVar4 + uVar5 * 8) = uVar3;
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar2 = param_1;
      func_0x00010bf529e0();
    } while (uVar5 < uVar2);
  }
  uVar5 = param_1;
  func_0x00010bf529e0(param_1);
  uVar2 = uVar4;
  func_0x000107c3191c(uVar4,uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_40[1]) {
    return uVar2;
  }
  ___stack_chk_fail();
  *(ulong *)((long)auStack_60 + lVar1) = uVar4;
  *(ulong *)((long)auStack_60 + lVar1 + 8) = param_1;
  *(undefined1 **)((long)auStack_60 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_60 + lVar1 + 0x18) = FUN_10b727e94;
  uVar5 = uVar2;
  func_0x00010c070fa0();
  if (((uVar5 & 1) == 0) && (uVar5 = uVar2, func_0x00010c081dc0(), (uVar5 & 1) == 0)) {
    func_0x00010bf4cf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = (ulong)(uVar2 != 0);
    _objc_release();
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 10b727e94; end: 10b727eeb; -[SCLens isBundleFetched] */

bool FUN_10b727e94(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c070fa0();
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010c081dc0(), (uVar2 & 1) == 0)) {
    func_0x00010bf4cf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b727eec; end: 10b727f33; -[SCLens isFetched] */

void FUN_10b727eec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c06d900();
  if ((((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010bf098a0(), (int)uVar1 != 0)) &&
     (uVar1 = param_1, func_0x00010bf09920(), (int)uVar1 != 0)) {
    func_0x00010c076d40(param_1);
  }
  return;
}



/* Entry: 10b727f34; end: 10b727f67; -[SCLens isContentPathCached] */

bool FUN_10b727f34(long param_1)

{
  func_0x00010bde7f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10b727f68; end: 10b728047; -[SCLens isMetadataFetched] */

bool FUN_10b727f68(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_1;
    func_0x00010c13b280();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5fe00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010c13b280(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf5fe00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bdc3360();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar6 != 0;
      _objc_release();
      _objc_release(lVar5);
      _objc_release(param_1);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10b728048; end: 10b728297; -[SCLens areAllRequiredAssetsFetched] */

undefined8 FUN_10b728048(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010c0b8380();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar10 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar2);
      }
      lVar3 = *(long *)(uVar9 * 8);
      func_0x00010c136b80();
      if (lVar3 == 6) {
        _objc_release(uVar2);
        _os_unfair_lock_lock(0x1137f8f28);
        func_0x00010c0b8380();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        goto joined_r0x00010b728164;
      }
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
    uVar10 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  uVar8 = 1;
  goto LAB_10b728258;
joined_r0x00010b728164:
  if (uVar2 == 0) goto LAB_10b728240;
  uVar10 = 0;
  do {
    if (lRam0000000000000000 != lVar1) {
      _objc_enumerationMutation(param_1);
    }
    lVar3 = *(long *)(uVar10 * 8);
    func_0x00010c136b80();
    if (lVar3 == 6) {
      puVar4 = PTR_PTR_1126ae6a8;
      func_0x00010bdd7a00(PTR_PTR_1126ae6a8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uRam00000001137f8f40;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar6 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar5);
      _objc_release(uVar9);
      _objc_release(puVar4);
      uVar8 = 0;
      if (((uVar6 & 1) == 0) || (uVar9 == 0)) goto LAB_10b728244;
    }
    uVar10 = uVar10 + 1;
  } while (uVar2 != uVar10);
  uVar2 = param_1;
  func_0x00010bf52a60();
  goto joined_r0x00010b728164;
LAB_10b728240:
  uVar8 = 1;
LAB_10b728244:
  _objc_release(param_1);
  uVar2 = 0x1137f8f28;
  _os_unfair_lock_unlock();
LAB_10b728258:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  uVar10 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c08fa60();
  _objc_release(uVar10);
  if (uVar9 == 0) {
    return 0;
  }
  uVar10 = uVar2;
  func_0x00010c070fa0();
  if ((((uVar10 & 1) == 0) && (uVar10 = uVar2, func_0x00010c081dc0(), (uVar10 & 1) == 0)) &&
     (uVar10 = uVar2, func_0x00010c079580(), (uVar10 & 1) == 0)) {
    uVar10 = uVar2;
    func_0x00010c27dd80();
    if (uVar10 == 1) {
      return 1;
    }
    uVar10 = uVar2;
    func_0x00010c27dd80();
    if (uVar10 != 0) {
      _os_unfair_lock_lock(0x1137f8f24);
      uVar8 = uRam00000001137f8f38;
      func_0x00010c094540(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar8);
      _objc_release(uVar2);
      _os_unfair_lock_unlock(0x1137f8f24);
      return uVar8;
    }
  }
  return 1;
}



/* Entry: 10b728298; end: 10b72837b; -[SCLens areExternalDataFetched] */

void FUN_10b728298(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if ((((uVar3 != 0) && (uVar2 = param_1, func_0x00010c070fa0(), (uVar2 & 1) == 0)) &&
      (uVar2 = param_1, func_0x00010c081dc0(), (uVar2 & 1) == 0)) &&
     (((uVar2 = param_1, func_0x00010c079580(), (uVar2 & 1) == 0 &&
       (uVar2 = param_1, func_0x00010c27dd80(), uVar2 != 1)) &&
      (uVar2 = param_1, func_0x00010c27dd80(), uVar2 != 0)))) {
    _os_unfair_lock_lock(0x1137f8f24);
    uVar1 = uRam00000001137f8f38;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar1,param_2,param_1);
    _objc_release(param_1);
    _os_unfair_lock_unlock(0x1137f8f24);
  }
  return;
}



/* Entry: 10b72837c; end: 10b72837f; -[SCLens contentPath] */

void FUN_10b72837c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__contentPath_112557970);
  return;
}



/* Entry: 10b728380; end: 10b72844b; +[SCLens cacheContentPath:forLens:] */

void FUN_10b728380(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(0x1137f8f20);
  lVar1 = param_4;
  func_0x00010bf4bf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar1 != 0) {
    if (param_3 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uRam00000001137f8f30,param_2,puVar2,lVar1);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(uRam00000001137f8f30,param_2,param_3,lVar1);
    }
  }
  _os_unfair_lock_unlock(0x1137f8f20);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b72844c; end: 10b7284e7; +[SCLens externalDataFetchedForLens:] */

void FUN_10b72844c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    _os_unfair_lock_lock(0x1137f8f24);
    uVar1 = uRam00000001137f8f38;
    lVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar1,param_2,lVar2);
    _objc_release(lVar2);
    _os_unfair_lock_unlock(0x1137f8f24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7284e8; end: 10b72868f; -[SCLens _contentPath] */

void FUN_10b7284e8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bde7ae0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(0x1137f8f20);
  _objc_retain(param_1);
  puVar1 = param_1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_1);
      }
      puVar6 = puRam00000001137f8f30;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class();
      puVar2 = puVar6;
      _objc_opt_isKindOfClass();
      puVar3 = puVar6;
      if (((ulong)puVar2 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) goto LAB_10b728608;
      puVar7 = puVar7 + 1;
    } while (puVar1 != puVar7);
    puVar1 = param_1;
    func_0x00010bf52a60();
  }
  puVar6 = (undefined *)0x0;
LAB_10b728608:
  _objc_release(param_1);
  _os_unfair_lock_unlock(0x1137f8f20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(0x1137f8f20);
    __Unwind_Resume();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = param_1;
    func_0x00010c13b280();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf529e0();
    puVar6 = puVar3;
    if (puVar1 == (undefined *)0x0) {
      puVar1 = param_1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(param_1);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      _objc_retain(param_2);
      puVar1 = param_2;
      func_0x00010bdc3360();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c08fa60();
      if (puVar7 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar7 = param_2;
        func_0x00010c27dd80(param_2);
        puVar6 = puVar1;
        FUN_10b72dcc8(puVar1,puVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar1);
      _objc_release(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b728690; end: 10b72882b; -[SCLens _contentCacheKeysArray] */

void FUN_10b728690(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  puVar4 = puVar2;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar1 = param_2;
    func_0x00010bdc3360();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar2 = param_2;
      func_0x00010c27dd80(param_2);
      puVar4 = puVar1;
      FUN_10b72dcc8(puVar1,puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b72882c; end: 10b728923; -[SCLens contentCacheKey] */

void FUN_10b72882c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c13b280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf5fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    lVar4 = lVar3;
    FUN_10b72dcc8(lVar3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_retain(lVar4);
    lVar3 = lVar4;
    param_1 = lVar4;
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b728924; end: 10b7289ff; +[SCLens cacheRequiredAssetPath:forLensAsset:] */

void FUN_10b728924(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(0x1137f8f28);
  func_0x00010bdd7a00(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (param_1 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uRam00000001137f8f40,param_2,puVar2,param_1);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(uRam00000001137f8f40,param_2,param_3,param_1);
    }
  }
  _os_unfair_lock_unlock(0x1137f8f28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b728a00; end: 10b728acf; +[SCLens _cacheKeyForLensAsset:] */

void FUN_10b728a00(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010c23c2c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b728ad0; end: 10b728ca3; +[SCLens requiredAssetsPathsWithAssets:] */

void FUN_10b728ad0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _os_unfair_lock_lock(0x1137f8f28);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar4 = param_1;
      func_0x00010bdd7a00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        uVar5 = uRam00000001137f8f40;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
        _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        if (((uVar7 & 1) == 0) && (uVar7 = uVar5, func_0x00010c08fa60(), uVar7 != 0)) {
          func_0x00010c1d0640(puVar2);
        }
        _objc_release(uVar5);
      }
      _objc_release(lVar4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _os_unfair_lock_unlock(0x1137f8f28);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_lock(0x1137f8f20);
  func_0x00010c12adc0(uRam00000001137f8f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1137f8f20);
  return;
}



/* Entry: 10b728ca4; end: 10b728cd7; +[SCLens resetContentPathCache] */

void FUN_10b728ca4(void)

{
  _os_unfair_lock_lock(0x1137f8f20);
  func_0x00010c12adc0(uRam00000001137f8f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1137f8f20);
  return;
}



/* Entry: 10b728cd8; end: 10b728d0b; +[SCLens resetRequiredAssetCache] */

void FUN_10b728cd8(void)

{
  _os_unfair_lock_lock(0x1137f8f28);
  func_0x00010c12adc0(uRam00000001137f8f40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1137f8f28);
  return;
}



/* Entry: 10b728d0c; end: 10b728d3f; +[SCLens resetExternalDataCache] */

void FUN_10b728d0c(void)

{
  _os_unfair_lock_lock(0x1137f8f24);
  func_0x00010c12adc0(uRam00000001137f8f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1137f8f24);
  return;
}



/* Entry: 10b728d40; end: 10b728dbb; -[SCLens setShouldForceReload:] */

void FUN_10b728d40(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  _dispatch_semaphore_wait(uRam00000001137f8f50,0xffffffffffffffff);
  uVar1 = uRam00000001137f8f48;
  func_0x00010c094540(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c12d360(uVar1);
  }
  else {
    func_0x00010befa120();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(uRam00000001137f8f50);
  return;
}



/* Entry: 10b728dbc; end: 10b728e2f; -[SCLens shouldForceReload] */

undefined8 FUN_10b728dbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _dispatch_semaphore_wait(uRam00000001137f8f50,0xffffffffffffffff);
  uVar1 = uRam00000001137f8f48;
  func_0x00010c094540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_1);
  _dispatch_semaphore_signal(uRam00000001137f8f50);
  return uVar1;
}



/* Entry: 10b728e30; end: 10b728f3f; -[SCLensAsset checksumForStorageOptionType:] */

void FUN_10b728e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar1 = PTR_s_type_11267d188;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f77218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c257200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10b728f40; end: 10b72900f; -[SCLensAsset lnsStorageOption] */

void FUN_10b728f40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar1 = PTR_s_type_11267d188;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f77218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c257200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b729010; end: 10b729243; +[SCUnlockableTrackInfoMapper unlockableTrackInfoForSOJUUnlockableTrackInfo:] */

void FUN_10b729010(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  puVar14 = PTR_PTR_1126bb898;
  if (param_3 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar14);
    lVar1 = param_3;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c11ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c23e500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf93c40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bef5fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010c086040();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010c119580();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    func_0x00010bf17380();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_3;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bff1ec0(puVar14,param_2,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10
                        ,lVar11,lVar12,lVar13,0,0,0);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10b729244; end: 10b72946b; +[SCUnlockableTrackInfoMapper sojuUnlockableTrackInfoForUnlockableTrackInfo:] */

void FUN_10b729244(undefined8 param_1,undefined8 param_2,long param_3)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  
  puVar1 = PTR_PTR_1126c4d70;
  puVar15 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c11ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c23e500();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf93c40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bef5fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010c086040();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    func_0x00010c119580();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_3;
    func_0x00010bf17380();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_3;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bff1ea0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11
                        ,lVar12,lVar13,lVar14);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar15 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10b72946c; end: 10b729553; +[SCLensDiskUtils absoluteDataPathForContentWithKey:] */

void FUN_10b72946c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110f77238;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f77238,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c098380(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b729554; end: 10b7295ab; +[SCLensDiskUtils absoluteDataPathForContentWithKey:resourceType:] */

void FUN_10b729554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10b72dcc8(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7295ac; end: 10b729683;  */

void FUN_10b7295ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b729684; end: 10b72972b;  */

void FUN_10b729684(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110f77358);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b72972c; end: 10b729797;  */

void FUN_10b72972c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b729798; end: 10b729833;  */

void FUN_10b729798(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b729834; end: 10b72986b;  */

undefined ** FUN_10b729834(long param_1)

{
  undefined **ppuVar1;
  
  func_0x00010c27dd80();
  if (param_1 - 2U < 0x18) {
    ppuVar1 = (undefined **)(&PTR_PTR_110d5a840)[param_1 - 2U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f77278;
  }
  return ppuVar1;
}



/* Entry: 10b72986c; end: 10b7298b7; +[SCLensUserDataManager userDataDirectoryPath] */

void FUN_10b72986c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7298b8; end: 10b729943; +[SCLensUserDataManager resetCache] */

void FUN_10b7298b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3458;
  func_0x00010c2918a0(PTR_PTR_1126c3458);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,puVar2);
  if ((int)puVar3 != 0) {
    func_0x00010c12cc40(puVar1,param_2,puVar2,0);
    func_0x00010bf55d80(puVar1,param_2,puVar2,1,0,0);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b729944; end: 10b729bd7; +[SCLensUserDataManager removeExpiredData] */

void FUN_10b729944(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  long lVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *apuStack_108 [17];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3458;
  func_0x00010c2918a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  puVar4 = puVar2;
  func_0x00010bf4dfc0(puVar2,param_2,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = &uStack_150;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar28 = *plStack_140;
    uVar26 = *(undefined8 *)PTR__NSFileModificationDate_110345418;
    do {
      puVar27 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar28) {
          _objc_enumerationMutation(puVar4);
        }
        puVar6 = puVar3;
        func_0x00010c25ce00(puVar3,param_2,*(undefined8 *)(lStack_148 + (long)puVar27 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bf0e880(puVar2,param_2,puVar6,0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfacea0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
          uStack_110 = uVar26;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          apuStack_108[0] = puVar9;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,apuStack_108,
                              &uStack_110,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16b7e0(puVar2,param_2,puVar10,puVar6,0);
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        else {
          puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380();
          dVar1 = (double)CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(
                                                  uVar32,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)))))
                                                  ));
          _objc_release(puVar9);
          if (86400.0 < dVar1) {
            func_0x00010c12cc40(puVar2,param_2,puVar6,0);
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar27 = puVar27 + 1;
      } while (puVar5 != puVar27);
      puVar25 = &uStack_150;
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126bb848;
  _objc_retain(puVar25);
  _objc_alloc();
  puVar11 = puVar25;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c092280();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar25;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c0920a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar25;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c092220();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar25;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c242880();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar25;
  func_0x00010c0922e0(puVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010c06f900();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010bf1f3c0();
  puVar22 = puVar25;
  func_0x00010c0922e0(puVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c078fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010bf1f3c0();
  func_0x00010c05bdc0(puVar2,param_2,puVar12,puVar14,puVar16,puVar18,puVar21,puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  puVar3 = PTR_PTR_1126bb850;
  _objc_alloc(PTR_PTR_1126bb850);
  puVar11 = puVar25;
  func_0x00010c0922e0(puVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0900c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar25;
  func_0x00010c14f720(puVar25);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  puVar25 = puVar13;
  func_0x00010bf63640(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0235c0(puVar3,param_2,puVar2,puVar12,puVar25);
  _objc_release(puVar25);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b729bd8; end: 10b729e47; +[SCCommunityLensData communityLensDataWithGeofilterData:] */

void FUN_10b729bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  
  puVar1 = PTR_PTR_1126bb848;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c092280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0920a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c092220();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c242880();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0922e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c06f900();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1f3c0();
  uVar13 = param_3;
  func_0x00010c0922e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c078fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf1f3c0();
  func_0x00010c05bdc0(puVar1,param_2,uVar3,uVar5,uVar7,uVar9,uVar12,uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar16 = PTR_PTR_1126bb850;
  _objc_alloc(PTR_PTR_1126bb850);
  uVar2 = param_3;
  func_0x00010c0922e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0900c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c14f720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010bf63640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0235c0(puVar16,param_2,puVar1,uVar3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10b729e48; end: 10b729f93; +[SCLensParser dateFromString:withFormaters:] */

void FUN_10b729e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      lVar3 = 0;
      lVar2 = param_4;
LAB_10b729f40:
      _objc_release(lVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c098190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR_PTR_1126dd7b0,PTR_s_lensWithSOJUGeofilterResponse_ty_112603a70);
      return;
    }
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      lVar3 = *(long *)(lVar5 * 8);
      func_0x00010bf65160();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        _objc_retain();
        _objc_release(param_4);
        lVar2 = lVar3;
        goto LAB_10b729f40;
      }
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10b729f94; end: 10b729fa3; +[SCLensParser lensWithSOJUGeofilterResponse:type:defaultExpiration:] */

void FUN_10b729f94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c098190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126dd7b0,PTR_s_lensWithSOJUGeofilterResponse_ty_112603a70);
  return;
}



/* Entry: 10b729fa4; end: 10b72b0cf; +[SCLensParser lensWithSOJUGeofilterResponse:type:defaultExpiration:namespaceId:] */

void FUN_10b729fa4(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  long lStack_6c8;
  long *plStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined *puStack_690;
  long lStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined *apuStack_650 [16];
  undefined *apuStack_5d0 [16];
  undefined *puStack_550;
  undefined *puStack_548;
  long lStack_540;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined *puStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined *puStack_508;
  undefined **ppuStack_500;
  undefined *puStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined1 *puStack_4e0;
  code *pcStack_4d8;
  undefined **ppuStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  ulong uStack_4b0;
  undefined **ppuStack_4a8;
  undefined1 uStack_4a0;
  undefined1 uStack_49f;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 uStack_450;
  undefined *puStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined1 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_410;
  undefined1 uStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  undefined1 uStack_3d0;
  undefined **ppuStack_3c8;
  undefined1 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined **ppuStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined1 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined **ppuStack_300;
  undefined4 uStack_2f4;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e4;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined *puStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined4 uStack_2ac;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined4 uStack_28c;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined4 uStack_264;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  undefined4 uStack_234;
  undefined **ppuStack_230;
  undefined4 uStack_224;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  ulong uStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined4 uStack_174;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = (undefined *)param_5;
  _objc_retain(param_4);
  uStack_168 = param_7;
  _objc_retain(param_7);
  uStack_160 = param_6;
  _objc_retain(param_6);
  func_0x00010c074600(param_2);
  uVar16 = param_2;
  func_0x00010bebebe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_4;
  uStack_a0 = uVar16;
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar13;
  func_0x00010b782924();
  _objc_release(ppuVar13);
  ppuVar13 = param_4;
  func_0x00010c091320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar13;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dcb7d8;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = param_4;
    func_0x00010c091320();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_a8 = ppuVar2;
  _objc_release(ppuVar13);
  ppuVar13 = param_4;
  func_0x00010c14fba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_2;
  func_0x00010c14fe80();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar16;
  _objc_release(ppuVar13);
  ppuVar13 = param_4;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar13;
  func_0x00010bf6d760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar4 = ppuVar2;
  _objc_opt_isKindOfClass(ppuVar2,puVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar13);
  ppuVar13 = param_4;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar13;
  func_0x00010bf6d760();
  _objc_retainAutoreleasedReturnValue();
  if (((ulong)ppuVar4 & 1) == 0) {
    _objc_release();
    _objc_release(ppuVar13);
    if (ppuVar2 == (undefined **)0x0) goto LAB_10b72a3a0;
    ppuVar13 = param_4;
    func_0x00010c0922e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar13;
    func_0x00010bf6d760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    ppuVar13 = ppuVar2;
    func_0x00010bf529e0();
    if ((undefined **)0x5 < ppuVar13) {
      puStack_b8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      ppuVar13 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar13;
      func_0x00010c067fc0();
      ppuVar5 = ppuVar2;
      ppuStack_c8 = ppuVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_c0 = ppuVar5;
      func_0x00010c067fc0();
      ppuVar4 = ppuVar2;
      ppuStack_d8 = ppuVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_d0 = ppuVar4;
      func_0x00010c067fc0();
      ppuVar5 = ppuVar2;
      ppuStack_e0 = ppuVar4;
      func_0x00010c0dfd40(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      ppuVar4 = ppuVar2;
      func_0x00010c0dfd40(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      ppuVar6 = ppuVar2;
      func_0x00010c0dfd40(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      puVar3 = puStack_b8;
      func_0x00010bf65640();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = puVar3;
      _objc_release(ppuVar6);
      _objc_release(ppuVar4);
      _objc_release(ppuVar5);
      _objc_release(ppuStack_d0);
      _objc_release(ppuStack_c0);
      goto LAB_10b72a394;
    }
    puStack_b8 = (undefined *)0x0;
LAB_10b72a3b0:
    _objc_release(ppuVar2);
    uStack_174 = 1;
  }
  else {
    func_0x00010bf885a0();
    _objc_release(ppuVar2);
    _objc_release(ppuVar13);
    if (0.0 < param_1) {
      ppuVar13 = param_4;
      func_0x00010c0922e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar13;
      func_0x00010bf6d760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(ppuVar2);
      _objc_release(ppuVar13);
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      ppuVar2 = param_4;
      func_0x00010c0922e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar2;
      func_0x00010bf6d760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010bf655e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = puVar3;
LAB_10b72a394:
      _objc_release(ppuVar13);
      goto LAB_10b72a3b0;
    }
LAB_10b72a3a0:
    uStack_174 = 0;
    puStack_b8 = (undefined *)0x0;
  }
  ppuVar13 = param_4;
  func_0x00010c090a60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar13;
  func_0x00010c067fc0();
  _objc_release(ppuVar13);
  ppuVar13 = param_4;
  func_0x00010c0922e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar13;
  func_0x00010bf0b420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_4;
  func_0x00010bfadea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_2;
  func_0x00010c094ee0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = (undefined **)uVar16;
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar13);
  ppuVar13 = param_4;
  func_0x00010c280f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar13;
  func_0x00010bf29280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf529e0();
  _objc_release(ppuVar4);
  _objc_release(ppuVar13);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (ppuVar5 == (undefined **)0x0) {
    ppuStack_c8 = (undefined **)0x0;
  }
  else {
    ppuVar13 = param_4;
    func_0x00010c280f80(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar13;
    func_0x00010bf29280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = (undefined **)puVar3;
    _objc_release(ppuVar4);
    _objc_release(ppuVar13);
  }
  ppuVar13 = param_4;
  func_0x00010c280f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar13;
  func_0x00010c08fe00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf529e0();
  _objc_release(ppuVar4);
  _objc_release(ppuVar13);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (ppuVar5 == (undefined **)0x0) {
    ppuStack_d0 = (undefined **)0x0;
  }
  else {
    ppuVar13 = param_4;
    func_0x00010c280f80(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar13;
    func_0x00010c08fe00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = (undefined **)puVar3;
    _objc_release(ppuVar4);
    _objc_release(ppuVar13);
  }
  ppuVar13 = param_4;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar13;
  func_0x00010bfe3760();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 == (undefined **)0x0) {
    ppuStack_d8 = (undefined **)0x0;
LAB_10b72a638:
    _objc_release(ppuVar13);
  }
  else {
    ppuVar5 = param_4;
    func_0x00010c0922e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bfe3760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c071ae0();
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar13);
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuVar13 = param_4;
      func_0x00010c0922e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar13;
      func_0x00010bfe3760();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_d8 = ppuVar4;
      goto LAB_10b72a638;
    }
    ppuStack_d8 = (undefined **)0x0;
  }
  ppuVar13 = param_4;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar13;
  func_0x00010c245540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar13);
  if (ppuVar4 == (undefined **)0x0) {
    ppuStack_e0 = (undefined **)0x0;
  }
  else {
    ppuVar13 = param_4;
    func_0x00010c0922e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar13;
    func_0x00010c245540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c24e520();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_4;
    ppuStack_98 = ppuVar5;
    func_0x00010c0922e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c245540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bf944a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_90 = ppuVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = (undefined **)puVar3;
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar13);
  }
  uStack_1d0 = (ulong)(ppuVar1 == (undefined **)0x1efce7);
  puVar3 = PTR_PTR_1126e0698;
  _objc_opt_new();
  ppuVar13 = param_4;
  puStack_180 = puVar3;
  func_0x00010c0922e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b2a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar3;
  _objc_release(ppuVar13);
  ppuVar13 = param_4;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar13;
  func_0x00010bf04b60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010b789a4c();
  _objc_release(ppuVar1);
  _objc_release(ppuVar13);
  uVar16 = 1;
  if (ppuVar4 == (undefined **)0xffffffff8d50a669) {
    uVar16 = 2;
  }
  uStack_218 = 0;
  if (ppuVar4 != (undefined **)0x107f5) {
    uStack_218 = uVar16;
  }
  puStack_210 = (undefined *)((long)ppuVar2 + -1);
  puVar3 = PTR_PTR_1126ae6a8;
  _objc_alloc();
  ppuVar13 = param_4;
  puStack_1e8 = puVar3;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_4;
  ppuStack_f0 = ppuVar13;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_188 = ppuVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_4;
  ppuStack_f8 = ppuVar1;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_190 = ppuVar13;
  func_0x00010bf3ec40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_4;
  ppuStack_100 = ppuVar13;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_198 = ppuVar1;
  func_0x00010bfe3820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_4;
  ppuStack_108 = ppuVar1;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a0 = ppuVar13;
  func_0x00010bfe58a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_4;
  ppuStack_110 = ppuVar13;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a8 = ppuVar1;
  func_0x00010bf1b100();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_4;
  ppuStack_118 = ppuVar1;
  func_0x00010c072c40();
  uStack_224 = SUB84(ppuVar13,0);
  ppuVar13 = param_4;
  func_0x00010c07f2e0();
  uStack_234 = SUB84(ppuVar13,0);
  ppuVar13 = param_4;
  func_0x00010c24ab20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b0 = ppuVar13;
  func_0x00010be70560();
  puVar3 = PTR_PTR_1126b38a0;
  ppuVar13 = param_4;
  uStack_240 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b8 = ppuVar13;
  func_0x00010c2813c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_4;
  puStack_120 = puVar3;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c0 = ppuVar13;
  func_0x00010c080060();
  puVar3 = PTR_PTR_1126dd7b0;
  uStack_264 = SUB84(ppuVar13,0);
  ppuVar13 = param_4;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c8 = ppuVar13;
  func_0x00010bef01e0();
  func_0x00010bf70da0();
  ppuVar13 = param_4;
  puStack_278 = puVar3;
  func_0x00010bf92c00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_4;
  ppuStack_130 = ppuVar13;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d8 = ppuVar1;
  func_0x00010c280be0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_4;
  ppuStack_128 = ppuVar1;
  func_0x00010bfd5c00();
  puVar3 = PTR_PTR_1126dd7b0;
  uStack_28c = SUB84(ppuVar13,0);
  ppuVar13 = param_4;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1e0 = ppuVar13;
  func_0x00010bed18a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_4;
  puStack_138 = puVar3;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1f0 = ppuVar13;
  func_0x00010c150320();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1f8 = ppuVar13;
  func_0x00010c07bb00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_200 = ppuVar13;
  func_0x00010bf1f3c0();
  uStack_2ac = SUB84(ppuVar13,0);
  ppuVar13 = param_4;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_208 = ppuVar13;
  func_0x00010c067fc0();
  ppuVar1 = param_4;
  ppuStack_2a8 = ppuVar13;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_220 = ppuVar1;
  func_0x00010c092760();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126bb850;
  ppuStack_150 = ppuVar1;
  func_0x00010bf43040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dd7b0;
  ppuVar13 = param_4;
  puStack_140 = puVar9;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_230 = ppuVar13;
  func_0x00010c245580();
  func_0x00010c245620();
  ppuVar13 = param_4;
  puStack_2d0 = puVar3;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_248 = ppuVar13;
  func_0x00010c2455a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_4;
  ppuStack_148 = ppuVar13;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_250 = ppuVar1;
  func_0x00010c076320();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_258 = ppuVar1;
  func_0x00010bf1f3c0();
  uStack_2e4 = SUB84(ppuVar1,0);
  ppuVar13 = param_4;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_4;
  ppuStack_2c8 = ppuVar13;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_260 = ppuVar1;
  func_0x00010c06ecc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_270 = ppuVar1;
  func_0x00010bf1f3c0();
  puVar3 = PTR_PTR_1126dd7b0;
  uStack_2f4 = SUB84(ppuVar1,0);
  ppuVar13 = param_4;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_280 = ppuVar13;
  func_0x00010bdf7d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_4;
  puStack_158 = puVar3;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_288 = ppuVar2;
  func_0x00010c0915a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_298 = ppuVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dd7b0;
  ppuVar13 = param_4;
  func_0x00010bf32760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2a0 = ppuVar13;
  func_0x00010bed1900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_4;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126dd7b0;
  ppuVar13 = param_4;
  ppuStack_300 = ppuVar4;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2b8 = ppuVar13;
  func_0x00010bf48840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2c0 = ppuVar13;
  func_0x00010bf48880();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126dd7b0;
  ppuVar13 = param_4;
  puStack_308 = puVar9;
  func_0x00010c0d3a80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2d8 = ppuVar13;
  func_0x00010c0d3b00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126dd7b0;
  ppuVar13 = param_4;
  puStack_310 = puVar10;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2e0 = ppuVar13;
  func_0x00010c22cfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2f0 = ppuVar13;
  func_0x00010bdf7d20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126dd7b0;
  ppuVar5 = param_4;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c129ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8b0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uStack_160;
  uVar16 = uStack_168;
  ppuVar1 = ppuStack_2c8;
  puStack_348 = PTR____NSDictionary0__struct_11034ab58;
  uStack_3c0 = (undefined1)uStack_2f4;
  uStack_3d0 = (undefined1)uStack_2e4;
  puStack_3e8 = puStack_2d0;
  uStack_408 = (undefined1)uStack_2ac;
  uStack_420 = (undefined1)uStack_28c;
  uStack_450 = (undefined1)uStack_264;
  uStack_458 = uStack_218;
  puStack_470 = puStack_210;
  ppuStack_400 = ppuStack_2a8;
  ppuStack_3f8 = ppuStack_150;
  puStack_448 = puStack_278;
  ppuStack_440 = ppuStack_130;
  uStack_340 = 0;
  uStack_398 = 0;
  puStack_3b8 = puStack_158;
  uStack_3b0 = uStack_168;
  ppuStack_3c8 = ppuStack_2c8;
  ppuStack_3e0 = ppuStack_148;
  puStack_3d8 = (undefined *)ppuStack_e0;
  puStack_3f0 = puStack_140;
  uStack_418 = 0;
  puStack_410 = puStack_138;
  puStack_428 = (undefined *)ppuStack_d0;
  ppuStack_438 = ppuStack_128;
  puStack_430 = (undefined *)ppuStack_c8;
  puStack_468 = puStack_120;
  uStack_460 = ppuStack_c0;
  puStack_478 = puStack_b8;
  uStack_480 = (undefined1)uStack_174;
  uStack_490 = uStack_240;
  uStack_488 = uStack_b0;
  uStack_498 = uStack_a0;
  uStack_49f = (undefined1)uStack_234;
  uStack_4a0 = (undefined1)uStack_224;
  uStack_4b0 = uStack_1d0;
  ppuStack_4a8 = ppuStack_a8;
  uStack_4c0 = uStack_160;
  uStack_4b8 = puStack_170;
  ppuStack_4d0 = ppuStack_118;
  puStack_4c8 = puStack_e8;
  uStack_320 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_338 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_368 = 0;
  puVar12 = puStack_1e8;
  ppuVar7 = ppuStack_f0;
  ppuVar13 = ppuStack_f8;
  ppuStack_3a8 = ppuVar2;
  puStack_3a0 = puVar3;
  ppuStack_390 = ppuVar4;
  puStack_388 = puVar9;
  puStack_380 = puVar10;
  puStack_378 = puVar11;
  puStack_370 = puVar15;
  func_0x00010c0247c0();
  puStack_170 = puVar12;
  _objc_release(uVar16);
  _objc_release(uVar17);
  _objc_release(puVar15);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar11);
  _objc_release(ppuStack_2f0);
  _objc_release(ppuStack_2e0);
  _objc_release(puStack_310);
  _objc_release(ppuStack_2d8);
  _objc_release(puStack_308);
  _objc_release(ppuStack_2c0);
  _objc_release(ppuStack_2b8);
  _objc_release(ppuStack_300);
  _objc_release(puVar3);
  _objc_release(ppuStack_2a0);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_298);
  _objc_release(ppuStack_288);
  _objc_release(puStack_158);
  _objc_release(ppuStack_280);
  _objc_release(ppuStack_270);
  _objc_release(ppuStack_260);
  _objc_release(ppuVar1);
  _objc_release(ppuStack_258);
  _objc_release(ppuStack_250);
  _objc_release(ppuStack_148);
  _objc_release(ppuStack_248);
  _objc_release(ppuStack_230);
  _objc_release(puStack_140);
  _objc_release(ppuStack_150);
  _objc_release(ppuStack_220);
  _objc_release(ppuStack_208);
  _objc_release(ppuStack_200);
  _objc_release(ppuStack_1f8);
  _objc_release(ppuStack_1f0);
  _objc_release(puStack_138);
  _objc_release(ppuStack_1e0);
  _objc_release(ppuStack_128);
  _objc_release(ppuStack_1d8);
  _objc_release(ppuStack_130);
  _objc_release(ppuStack_1c8);
  _objc_release(ppuStack_1c0);
  _objc_release(puStack_120);
  _objc_release(ppuStack_1b8);
  _objc_release(ppuStack_1b0);
  _objc_release(ppuStack_118);
  _objc_release(ppuStack_1a8);
  _objc_release(ppuStack_110);
  _objc_release(ppuStack_1a0);
  _objc_release(ppuStack_108);
  _objc_release(ppuStack_198);
  _objc_release(ppuStack_100);
  _objc_release(ppuStack_190);
  _objc_release(ppuStack_f8);
  _objc_release(ppuStack_188);
  _objc_release(ppuStack_f0);
  _objc_release(puStack_e8);
  _objc_release(puStack_180);
  _objc_release(ppuStack_e0);
  _objc_release(ppuStack_d8);
  _objc_release(ppuStack_d0);
  _objc_release(ppuStack_c8);
  _objc_release(ppuStack_c0);
  _objc_release(puStack_b8);
  _objc_release(uStack_b0);
  _objc_release(ppuStack_a8);
  _objc_release(uStack_a0);
  ppuVar4 = param_4;
  _objc_release();
  puStack_6d8 = puStack_170;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_518 = uVar16;
  uStack_510 = uVar17;
  ppuStack_4f0 = ppuVar1;
  pcStack_4d8 = FUN_10b72b0d0;
  lStack_540 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar7;
  ppuStack_530 = ppuVar6;
  ppuStack_528 = ppuVar5;
  puStack_520 = puVar11;
  puStack_508 = puVar15;
  ppuStack_500 = ppuVar2;
  puStack_4f8 = puVar3;
  ppuStack_4e8 = param_4;
  puStack_4e0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar7);
  if (ppuVar7 == (undefined **)0x0) {
    puStack_6d8 = (undefined *)0x0;
  }
  else {
    puStack_6d8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    func_0x00010c189b60();
    puVar9 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    func_0x00010c189b60();
    ppuVar1 = &puStack_550;
    ppuVar13 = (undefined **)0x2;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_550 = puVar3;
    puStack_548 = puVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar7;
    func_0x00010c2903c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar2);
    if (((ulong)ppuVar5 & 1) == 0) {
      uStack_668 = 0;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_660 = 0;
      lStack_688 = 0;
      puStack_690 = (undefined *)0x0;
      uStack_678 = 0;
      plStack_680 = (long *)0x0;
      _objc_retain(puVar10);
      ppuVar1 = &puStack_690;
      ppuVar13 = apuStack_5d0;
      puVar11 = puVar10;
      func_0x00010bf52a60();
      if (puVar11 != (undefined *)0x0) {
        lVar14 = *plStack_680;
        do {
          puVar15 = (undefined *)0x0;
          do {
            if (*plStack_680 != lVar14) {
              _objc_enumerationMutation(puVar10);
            }
            puVar12 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
            uVar16 = *(undefined8 *)(lStack_688 + (long)puVar15 * 8);
            ppuVar13 = ppuVar7;
            func_0x00010c270d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26fda0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c215860(uVar16);
            _objc_release(puVar12);
            _objc_release(ppuVar13);
            puVar15 = puVar15 + 1;
          } while (puVar11 != puVar15);
          ppuVar1 = &puStack_690;
          ppuVar13 = apuStack_5d0;
          puVar11 = puVar10;
          func_0x00010bf52a60();
        } while (puVar11 != (undefined *)0x0);
      }
      _objc_release(puVar10);
    }
    ppuVar2 = ppuVar7;
    func_0x00010c150460();
    if (ppuVar2 == (undefined **)0x5e1651e3) {
      uStack_6a8 = 0;
      uStack_6b0 = 0;
      uStack_698 = 0;
      uStack_6a0 = 0;
      lStack_6c8 = 0;
      puStack_6d0 = (undefined *)0x0;
      uStack_6b8 = 0;
      plStack_6c0 = (long *)0x0;
      ppuVar2 = ppuVar7;
      func_0x00010c130bc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &puStack_6d0;
      ppuVar13 = apuStack_650;
      ppuVar5 = ppuVar2;
      func_0x00010bf52a60();
      if (ppuVar5 != (undefined **)0x0) {
        lVar14 = *plStack_6c0;
        do {
          ppuVar13 = (undefined **)0x0;
          do {
            if (*plStack_6c0 != lVar14) {
              _objc_enumerationMutation(ppuVar2);
            }
            uVar17 = *(undefined8 *)(lStack_6c8 + (long)ppuVar13 * 8);
            puVar11 = PTR_PTR_1126de6e8;
            _objc_alloc();
            uVar16 = uVar17;
            func_0x00010c24e860(uVar17);
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = ppuVar4;
            func_0x00010bf65180(ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf946c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar4;
            func_0x00010bf65180(ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c04ba40();
            _objc_release(ppuVar6);
            _objc_release(uVar17);
            _objc_release(ppuVar1);
            _objc_release(uVar16);
            func_0x00010befa120(puStack_6d8);
            _objc_release(puVar11);
            ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          } while (ppuVar5 != ppuVar13);
          ppuVar1 = &puStack_6d0;
          ppuVar13 = apuStack_650;
          ppuVar5 = ppuVar2;
          func_0x00010bf52a60();
        } while (ppuVar5 != (undefined **)0x0);
      }
LAB_10b72b4c8:
      _objc_release(ppuVar2);
    }
    else if (ppuVar2 == (undefined **)0x251681) {
      ppuVar2 = (undefined **)PTR_PTR_1126de6e8;
      _objc_alloc();
      ppuVar1 = ppuVar7;
      func_0x00010c24e860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf65180();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar7;
      func_0x00010bf946c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65180();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar4;
      func_0x00010c04ba40();
      _objc_release(ppuVar4);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar1);
      ppuVar1 = ppuVar2;
      func_0x00010befa120(puStack_6d8);
      goto LAB_10b72b4c8;
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_540) {
    ___stack_chk_fail();
    _objc_retain(ppuVar1);
    _objc_retain(ppuVar13);
    func_0x00010c27dde0();
    func_0x00010c136ba0();
    ppuVar2 = ppuVar1;
    func_0x00010c257200(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010bfe5e40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010bf0b6e0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcf9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    puStack_6d8 = PTR_PTR_1126bb838;
    _objc_alloc(PTR_PTR_1126bb838);
    ppuVar13 = ppuVar1;
    func_0x00010bfe5e40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    ppuVar2 = ppuVar1;
    func_0x00010bf0b8e0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010bf4d5c0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e4c0();
    func_0x00010c108800();
    ppuVar5 = ppuVar1;
    func_0x00010c0ed520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bca0(puStack_6d8);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar13);
    _objc_release(ppuVar7);
    _objc_release(ppuVar1);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_6d8);
  return;
}



/* Entry: 10b72b0d0; end: 10b72b52f; +[SCLensParser scheduleIntervalsFromSchedule:] */

void FUN_10b72b0d0(undefined1 *param_1,undefined8 param_2,undefined **param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    puStack_208 = (undefined *)0x0;
    goto LAB_10b72b4e8;
  }
  puStack_208 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  func_0x00010c189b60();
  puVar5 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  func_0x00010c189b60();
  ppuVar18 = &puStack_80;
  param_4 = (undefined1 *)0x2;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar4;
  puStack_78 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_3;
  func_0x00010c2903c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar7);
  if (((ulong)ppuVar8 & 1) == 0) {
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    puStack_1c0 = (undefined *)0x0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    _objc_retain(puVar6);
    ppuVar18 = &puStack_1c0;
    param_4 = auStack_100;
    puVar9 = puVar6;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar17 = *plStack_1b0;
      do {
        puVar19 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lVar17) {
            _objc_enumerationMutation(puVar6);
          }
          puVar10 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
          uVar20 = *(undefined8 *)(lStack_1b8 + (long)puVar19 * 8);
          ppuVar18 = param_3;
          func_0x00010c270d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26fda0(puVar10,param_2,ppuVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c215860(uVar20,param_2,puVar10);
          _objc_release(puVar10);
          _objc_release(ppuVar18);
          puVar19 = puVar19 + 1;
        } while (puVar9 != puVar19);
        ppuVar18 = &puStack_1c0;
        param_4 = auStack_100;
        puVar9 = puVar6;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar6);
  }
  ppuVar7 = param_3;
  func_0x00010c150460();
  if (ppuVar7 == (undefined **)0x5e1651e3) {
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1f8 = 0;
    puStack_200 = (undefined *)0x0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    ppuVar7 = param_3;
    func_0x00010c130bc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = &puStack_200;
    param_4 = auStack_180;
    ppuVar8 = ppuVar7;
    func_0x00010bf52a60();
    if (ppuVar8 != (undefined **)0x0) {
      lVar17 = *plStack_1f0;
      do {
        ppuVar18 = (undefined **)0x0;
        do {
          if (*plStack_1f0 != lVar17) {
            _objc_enumerationMutation(ppuVar7);
          }
          uVar21 = *(undefined8 *)(lStack_1f8 + (long)ppuVar18 * 8);
          puVar9 = PTR_PTR_1126de6e8;
          _objc_alloc();
          uVar20 = uVar21;
          func_0x00010c24e860(uVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = param_1;
          func_0x00010bf65180(param_1,param_2,uVar20,puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf946c0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = param_1;
          func_0x00010bf65180(param_1,param_2,uVar21,puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04ba40(puVar9,param_2,puVar11,puVar12);
          _objc_release(puVar12);
          _objc_release(uVar21);
          _objc_release(puVar11);
          _objc_release(uVar20);
          func_0x00010befa120(puStack_208,param_2,puVar9);
          _objc_release(puVar9);
          ppuVar18 = (undefined **)((long)ppuVar18 + 1);
        } while (ppuVar8 != ppuVar18);
        ppuVar18 = &puStack_200;
        param_4 = auStack_180;
        ppuVar8 = ppuVar7;
        func_0x00010bf52a60();
      } while (ppuVar8 != (undefined **)0x0);
    }
LAB_10b72b4c8:
    _objc_release(ppuVar7);
  }
  else if (ppuVar7 == (undefined **)0x251681) {
    ppuVar7 = (undefined **)PTR_PTR_1126de6e8;
    _objc_alloc();
    ppuVar18 = param_3;
    func_0x00010c24e860();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010bf65180(param_1,param_2,ppuVar18,puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_3;
    func_0x00010bf946c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65180(param_1,param_2,ppuVar8,puVar6);
    _objc_retainAutoreleasedReturnValue();
    param_4 = param_1;
    func_0x00010c04ba40(ppuVar7,param_2,puVar11,param_1);
    _objc_release(param_1);
    _objc_release(ppuVar8);
    _objc_release(puVar11);
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar7;
    func_0x00010befa120(puStack_208);
    goto LAB_10b72b4c8;
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_10b72b4e8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppuVar18);
    _objc_retain(param_4);
    ppuVar7 = ppuVar18;
    func_0x00010c27dde0();
    uVar1 = 3;
    if (ppuVar7 != (undefined **)0x58ceaf0) {
      uVar1 = ppuVar7 == (undefined **)0xfffffffff9e568ee;
    }
    uVar2 = 7;
    if (ppuVar7 != (undefined **)0xfffffffff1f265c7) {
      uVar2 = 0;
    }
    uVar3 = 2;
    if (ppuVar7 != (undefined **)0xffffffff80ca654f) {
      uVar3 = uVar2;
    }
    if ((long)ppuVar7 < -0x61a9712) {
      uVar1 = uVar3;
    }
    ppuVar7 = ppuVar18;
    func_0x00010c136ba0();
    uVar20 = 0;
    if (ppuVar7 == (undefined **)0xffffffffed046e09) {
      uVar20 = 3;
    }
    uVar21 = 4;
    if (ppuVar7 != (undefined **)0x3e4450ab) {
      uVar21 = uVar20;
    }
    uVar20 = 6;
    if (ppuVar7 != (undefined **)0xffffffffe8912b9f) {
      uVar20 = uVar21;
    }
    ppuVar7 = ppuVar18;
    func_0x00010c257200(ppuVar18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar18;
    func_0x00010bfe5e40(ppuVar18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar18;
    func_0x00010bf0b6e0(ppuVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcf9e0(param_3,param_2,ppuVar7,ppuVar8,param_4,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(ppuVar13);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    puStack_208 = PTR_PTR_1126bb838;
    _objc_alloc(PTR_PTR_1126bb838);
    ppuVar7 = ppuVar18;
    func_0x00010bfe5e40(ppuVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    ppuVar8 = ppuVar18;
    func_0x00010bf0b8e0(ppuVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4,param_2,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar18;
    func_0x00010bf4d5c0(ppuVar18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar18;
    func_0x00010c14e4c0();
    ppuVar15 = ppuVar18;
    func_0x00010c108800();
    ppuVar16 = ppuVar18;
    func_0x00010c0ed520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bca0(puStack_208,param_2,ppuVar7,puVar4,ppuVar13,0,uVar1,uVar20,
                        (long)(int)ppuVar14,(long)(int)ppuVar15,ppuVar16,0,0,0,0,0,param_3);
    _objc_release(ppuVar16);
    _objc_release(ppuVar13);
    _objc_release(puVar4);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(param_3);
    _objc_release(ppuVar18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_208);
  return;
}



/* Entry: 10b72b530; end: 10b72b7cb; +[SCLensParser lensAssetWithSOJUManifest:lensId:] */

void FUN_10b72b530(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = param_3;
  func_0x00010c27dde0();
  uVar1 = 3;
  if (lVar6 != 0x58ceaf0) {
    uVar1 = lVar6 == -0x61a9712;
  }
  uVar2 = 7;
  if (lVar6 != -0xe0d9a39) {
    uVar2 = 0;
  }
  uVar3 = 2;
  if (lVar6 != -0x7f359ab1) {
    uVar3 = uVar2;
  }
  if (lVar6 < -0x61a9712) {
    uVar1 = uVar3;
  }
  lVar6 = param_3;
  func_0x00010c136ba0();
  uVar4 = 0;
  if (lVar6 == -0x12fb91f7) {
    uVar4 = 3;
  }
  uVar5 = 4;
  if (lVar6 != 0x3e4450ab) {
    uVar5 = uVar4;
  }
  uVar4 = 6;
  if (lVar6 != -0x176ed461) {
    uVar4 = uVar5;
  }
  lVar6 = param_3;
  func_0x00010c257200(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bfe5e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010bf0b6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf9e0(param_1,param_2,lVar6,lVar7,param_4,lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar9 = PTR_PTR_1126bb838;
  _objc_alloc(PTR_PTR_1126bb838);
  lVar6 = param_3;
  func_0x00010bfe5e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar7 = param_3;
  func_0x00010bf0b8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar10,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010bf4d5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010c14e4c0();
  lVar12 = param_3;
  func_0x00010c108800();
  lVar13 = param_3;
  func_0x00010c0ed520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bca0(puVar9,param_2,lVar6,puVar10,lVar8,0,uVar1,uVar4,(long)(int)lVar11,
                      (long)(int)lVar12,lVar13,0,0,0,0,0,param_1);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(puVar10);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b72b7cc; end: 10b72b94b; +[SCLensParser lensManifestWithSojuResponse:lensId:] */

undefined * FUN_10b72b7cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = param_1;
        func_0x00010c08ffe0(param_1,param_2,*(undefined8 *)(lStack_128 + lVar7 * 8),param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(puVar5 != (undefined8 *)0x400e609);
}



/* Entry: 10b72b94c; end: 10b72b95f; +[SCLensParser devicePositionFromSOJU:] */

bool FUN_10b72b94c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0x400e609;
}



/* Entry: 10b72b960; end: 10b72b97f; +[SCLensParser snappablesReplyTypeFromSOJU:] */

undefined8 FUN_10b72b960(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if (param_3 == 0x3822d956) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10b72b980; end: 10b72b9f7; +[SCLensParser connectedLensInfoFromSOJU:] */

void FUN_10b72b980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb818;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf05300(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff3380(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b72b9f8; end: 10b72ba97; +[SCLensParser _remoteApiInfoFromSOJU:] */

void FUN_10b72b9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb880;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar2 = param_3;
  func_0x00010c129dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c225c20(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03df00(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b72ba98; end: 10b72ba9f; +[SCLensParser isGeofilterResponseLens:] */

void FUN_10b72ba98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isLensValue_1125fb468);
  return;
}



/* Entry: 10b72baa0; end: 10b72baff; +[SCLensParser musicTrackMetadataFromSOJU:] */

void FUN_10b72baa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10b72bb00;
  puStack_20 = &UNK_110d5a900;
  uStack_18 = param_1;
  func_0x00010c0b8600(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b72bb00; end: 10b72bbcb;  */

void FUN_10b72bb00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bb878;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c277e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x00010bf4d360(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdf7d20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054bc0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b72bbcc; end: 10b72bc7b; +[SCLensParser lensPlacementsFromAdPlacements:] */

void FUN_10b72bbcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b72bc7c;
    puStack_30 = &UNK_1108709f0;
    puStack_28 = puVar2;
    func_0x00010bf97ce0(param_3,param_2,&puStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


