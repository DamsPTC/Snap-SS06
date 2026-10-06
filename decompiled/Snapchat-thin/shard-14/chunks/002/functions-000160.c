/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0568b0; end: 10b0568eb; -[SCRemixMetadata .cxx_destruct] */

void FUN_10b0568b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0568ec; end: 10b0569ef; -[SCRemixPreviewConfiguration initWithSourceUserId:sourceSnapId:remixLaunchSource:remixCaptureType:remixNotifiedUsernames:shouldDisableSavingInPreview:remixPermission:] */

undefined1 *
FUN_10b0568ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112704e18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0569f0; end: 10b056a13; -[SCRemixPreviewConfiguration copyWithZone:] */

undefined8 FUN_10b0569f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b056a14; end: 10b056aa7; -[SCRemixPreviewConfiguration hash] */

undefined8 * FUN_10b056a14(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b056b80:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b056b8c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])))) &&
       (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
          if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_10b056b8c;
          }
          goto LAB_10b056b80;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b056b8c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b056aa8; end: 10b056ba7; -[SCRemixPreviewConfiguration isEqual:] */

long FUN_10b056aa8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b056b80:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b056b8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) &&
       (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_10b056b8c;
          }
          goto LAB_10b056b80;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b056b8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b056ba8; end: 10b056baf; -[SCRemixPreviewConfiguration sourceUserId] */

undefined8 FUN_10b056ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b056bb0; end: 10b056bb7; -[SCRemixPreviewConfiguration sourceSnapId] */

undefined8 FUN_10b056bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b056bb8; end: 10b056bbf; -[SCRemixPreviewConfiguration remixLaunchSource] */

undefined8 FUN_10b056bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b056bc0; end: 10b056bc7; -[SCRemixPreviewConfiguration remixCaptureType] */

undefined8 FUN_10b056bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b056bc8; end: 10b056bcf; -[SCRemixPreviewConfiguration remixNotifiedUsernames] */

undefined8 FUN_10b056bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b056bd0; end: 10b056bd7; -[SCRemixPreviewConfiguration shouldDisableSavingInPreview] */

undefined1 FUN_10b056bd0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b056bd8; end: 10b056bdf; -[SCRemixPreviewConfiguration remixPermission] */

undefined8 FUN_10b056bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b056be0; end: 10b056c1b; -[SCRemixPreviewConfiguration .cxx_destruct] */

void FUN_10b056be0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b056c1c; end: 10b056c23; -[SCSnapVideoFilterServices uploadQualityController] */

undefined8 FUN_10b056c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b056c24; end: 10b056c5f; -[SCSnapVideoFilterServices .cxx_destruct] */

void FUN_10b056c24(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b056c60; end: 10b056d1b; -[SCSnapVideoFilterAsset initWithCoder:] */

undefined8 * FUN_10b056c60(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704e28;
  puVar2 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar2[1];
    puVar2[1] = lVar3;
    _objc_release(uVar4);
    if (param_3 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf66d60(&uStack_48,param_3);
    }
    uVar1 = uStack_38;
    uVar4 = uStack_48;
    puVar2[3] = uStack_40;
    puVar2[2] = uVar4;
    puVar2[4] = uVar1;
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b056d1c; end: 10b056db3;  */

undefined1 * FUN_10b056d1c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_112704e28;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar4 = param_2;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar4;
      _objc_release(uVar2);
      uVar2 = param_3[1];
      uVar4 = *param_3;
      *(undefined8 *)((long)plVar1 + 0x20) = param_3[2];
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      *(undefined8 *)((long)plVar1 + 0x10) = uVar4;
    }
  }
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 10b056db4; end: 10b056dd7; -[SCSnapVideoFilterAsset copyWithZone:] */

undefined8 FUN_10b056db4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b056dd8; end: 10b056e53; -[SCSnapVideoFilterAsset encodeWithCoder:] */

void FUN_10b056dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eb6cf8);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf92e40(param_3,param_2,&uStack_50,&PTR____CFConstantStringClassReference_110f53678);
  _objc_release(param_3);
  return;
}



/* Entry: 10b056e54; end: 10b056ed3; -[SCSnapVideoFilterAsset hash] */

undefined8 * FUN_10b056e54(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = (ulong)*(uint *)(param_1 + 0x1c);
  lStack_40 = (long)*(int *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10b056f78:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b056f7c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((ulong)puVar3 & 1) != 0) {
      uStack_98 = *(undefined8 *)((long)puVar2 + 0x18);
      uStack_a0 = *(undefined8 *)((long)puVar2 + 0x10);
      uStack_90 = *(undefined8 *)((long)puVar2 + 0x20);
      uStack_b8 = *(undefined8 *)(param_3 + 0x18);
      uStack_c0 = *(undefined8 *)(param_3 + 0x10);
      uStack_b0 = *(undefined8 *)(param_3 + 0x20);
      puVar4 = &uStack_a0;
      _CMTimeCompare(puVar4,&uStack_c0);
      if ((int)puVar4 == 0) {
        puVar5 = *(undefined1 **)((long)puVar2 + 8);
        if (puVar5 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10b056f7c;
        }
        goto LAB_10b056f78;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10b056f7c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b056ed4; end: 10b056f9b; -[SCSnapVideoFilterAsset isEqual:] */

long FUN_10b056ed4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b056f78:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b056f7c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x18);
      uStack_50 = *(undefined8 *)(param_1 + 0x10);
      uStack_40 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *(undefined8 *)(param_3 + 0x18);
      uStack_70 = *(undefined8 *)(param_3 + 0x10);
      uStack_60 = *(undefined8 *)(param_3 + 0x20);
      puVar3 = &uStack_50;
      _CMTimeCompare(puVar3,&uStack_70);
      if ((int)puVar3 == 0) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10b056f7c;
        }
        goto LAB_10b056f78;
      }
    }
    lVar4 = 0;
  }
LAB_10b056f7c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b056f9c; end: 10b056fa7; -[SCSnapVideoFilterAsset .cxx_destruct] */

void FUN_10b056f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b056fa8; end: 10b0570ab; -[SCSnapVideoFilterAudioState initWithCoder:] */

undefined1 * FUN_10b056fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704e30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0570ac; end: 10b0570cf; -[SCSnapVideoFilterAudioState copyWithZone:] */

undefined8 FUN_10b0570ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0570d0; end: 10b0570e7; -[SCSnapVideoFilterAudioState encodeWithCoder:] */

void FUN_10b0570d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f53698);
  return;
}



/* Entry: 10b0570e8; end: 10b0570ef; -[SCSnapVideoFilterAudioState hash] */

void FUN_10b0570e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b0570f0; end: 10b05717f; -[SCSnapVideoFilterAudioState isEqual:] */

long FUN_10b0570f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b057164;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b057164;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b057164;
    }
  }
  lVar3 = 1;
LAB_10b057164:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b057180; end: 10b05718b; -[SCSnapVideoFilterAudioState .cxx_destruct] */

void FUN_10b057180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05718c; end: 10b0572d7; -[SCSnapVideoFilterMultiSnapSegmentState initWithCoder:] */

undefined1 *
FUN_10b05718c(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704e38;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_5);
    dVar4 = (double)param_1;
    *(double *)((long)puVar1 + 0x18) = dVar4;
    uVar2 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(double *)((long)puVar1 + 0x38) = dVar4;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0572d8; end: 10b0573eb;  */

undefined1 *
FUN_10b0572d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puVar4 = (undefined1 *)0x0;
  if (param_4 != 0) {
    puStack_68 = PTR_PTR_112704e38;
    lStack_70 = param_4;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_1;
      *(undefined8 *)((long)plVar1 + 0x20) = param_7;
      *(undefined8 *)((long)plVar1 + 0x28) = param_8;
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x38) = param_2;
      *(undefined8 *)((long)plVar1 + 0x40) = param_3;
    }
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar4;
}



/* Entry: 10b0573ec; end: 10b05740f; -[SCSnapVideoFilterMultiSnapSegmentState copyWithZone:] */

undefined8 FUN_10b0573ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b057410; end: 10b0574f3; -[SCSnapVideoFilterMultiSnapSegmentState encodeWithCoder:] */

void FUN_10b057410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f536b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f536d8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f536f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f53718);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f31618);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f53738);
  _NSStringFromCGSize(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f53758);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0574f4; end: 10b0575e3; -[SCSnapVideoFilterMultiSnapSegmentState hash] */

undefined8 * FUN_10b0574f4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_68;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b0576f4:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b057700;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && ((puVar4[4] == param_3[4] && (puVar4[5] == param_3[5])))) {
      dVar10 = ABS((double)puVar4[3] - (double)param_3[3]);
      dVar9 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        puVar8 = (undefined8 *)0x0;
        if (((double)puVar4[7] != (double)param_3[7]) || ((double)puVar4[8] != (double)param_3[8]))
        goto LAB_10b057700;
        lVar6 = puVar4[1];
        if (((lVar6 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = (undefined8 *)puVar4[6];
          if (puVar8 != (undefined8 *)param_3[6]) {
            func_0x00010c071ae0();
            goto LAB_10b057700;
          }
          goto LAB_10b0576f4;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b057700:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b0575e4; end: 10b05771b; -[SCSnapVideoFilterMultiSnapSegmentState isEqual:] */

long FUN_10b0575e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0576f4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b057700;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = 0;
        if ((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38)) ||
           (*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_10b057700;
        lVar4 = *(long *)(param_1 + 8);
        if (((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x30);
          if (lVar4 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_10b057700;
          }
          goto LAB_10b0576f4;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b057700:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b05771c; end: 10b057757; -[SCSnapVideoFilterMultiSnapSegmentState .cxx_destruct] */

void FUN_10b05771c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b057758; end: 10b057c0f; -[SCSnapVideoFilterState initWithCoder:] */

undefined1 * FUN_10b057758(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112704e40;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    func_0x00010bf66e40(param_4);
    dVar5 = (double)param_1;
    *(double *)((long)puVar1 + 0x80) = dVar5;
    func_0x00010bf66e40(param_4);
    dVar5 = (double)SUB84(dVar5,0);
    *(double *)((long)puVar1 + 0x88) = dVar5;
    uVar2 = param_4;
    func_0x00010bf66f40();
    fVar4 = SUB84(dVar5,0);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined8 *)((long)puVar1 + 0xc0) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    dVar5 = (double)fVar4;
    *(double *)((long)puVar1 + 200) = dVar5;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined8 *)((long)puVar1 + 0xd0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined8 *)((long)puVar1 + 0xd8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined8 *)((long)puVar1 + 0xe0) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0xe8) = dVar5;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xf0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xf8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x100) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x108) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b057c10; end: 10b058127;  */

long * FUN_10b057c10(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,undefined1 param_13,undefined4 param_14,long param_15,long param_16,
                    long param_17,long param_18,long param_19,long param_20,long param_21,
                    undefined4 param_22,undefined4 param_23,long param_24,long param_25,
                    long param_26,long param_27,long param_28,long param_29,long param_30,
                    long param_31,long param_32,long param_33,long param_34,long param_35,
                    long param_36,long param_37)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  if (param_5 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    puStack_90 = PTR_PTR_112704e40;
    plVar3 = &lStack_98;
    lStack_98 = param_5;
    _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
    if (plVar3 != (long *)0x0) {
      plVar3[2] = param_6;
      lVar1 = param_7;
      func_0x00010bf51e00();
      lVar2 = plVar3[3];
      plVar3[3] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_8;
      func_0x00010bf51e00();
      lVar2 = plVar3[4];
      plVar3[4] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_9;
      func_0x00010bf51e00();
      lVar2 = plVar3[5];
      plVar3[5] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_10;
      func_0x00010bf51e00();
      lVar2 = plVar3[6];
      plVar3[6] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_11;
      func_0x00010bf51e00();
      lVar2 = plVar3[7];
      plVar3[7] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_12;
      func_0x00010bf51e00();
      lVar2 = plVar3[8];
      plVar3[8] = lVar1;
      _objc_release(lVar2);
      *(undefined1 *)(plVar3 + 1) = param_13;
      lVar1 = param_15;
      func_0x00010bf51e00();
      lVar2 = plVar3[9];
      plVar3[9] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_16;
      func_0x00010bf51e00();
      lVar2 = plVar3[10];
      plVar3[10] = lVar1;
      _objc_release(lVar2);
      plVar3[0xb] = param_17;
      lVar1 = param_18;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xc];
      plVar3[0xc] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_19;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xd];
      plVar3[0xd] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_20;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xe];
      plVar3[0xe] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_21;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xf];
      plVar3[0xf] = lVar1;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar3 + 9) = (undefined1)param_22;
      *(undefined1 *)((long)plVar3 + 10) = param_22._1_1_;
      plVar3[0x10] = param_1;
      plVar3[0x11] = param_2;
      plVar3[0x12] = param_24;
      plVar3[0x13] = param_25;
      lVar1 = param_26;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x14];
      plVar3[0x14] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_27;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x15];
      plVar3[0x15] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_28;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x16];
      plVar3[0x16] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_29;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x17];
      plVar3[0x17] = lVar1;
      _objc_release(lVar2);
      _objc_retain(param_30);
      lVar1 = plVar3[0x18];
      plVar3[0x18] = param_30;
      _objc_release(lVar1);
      plVar3[0x19] = param_3;
      lVar1 = param_31;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1a];
      plVar3[0x1a] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_32;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1b];
      plVar3[0x1b] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_33;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1c];
      plVar3[0x1c] = lVar1;
      _objc_release(lVar2);
      plVar3[0x1d] = param_4;
      plVar3[0x1e] = param_34;
      plVar3[0x1f] = param_35;
      plVar3[0x20] = param_36;
      plVar3[0x21] = param_37;
    }
  }
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return plVar3;
}



/* Entry: 10b058128; end: 10b05814b; -[SCSnapVideoFilterState copyWithZone:] */

undefined8 FUN_10b058128(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05814c; end: 10b05844b; -[SCSnapVideoFilterState encodeWithCoder:] */

void FUN_10b05814c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e593d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f53778);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e7e6d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f53798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4a4d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f536d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f537b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f537d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f537f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f53818);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f53838);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110dbb0b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f53858);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f53878);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f53898);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f538b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f538d8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x80),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f538f8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x88),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f53918);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110f53938);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f53958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110ec0a98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110f53978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110f53998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb8),
                      &PTR____CFConstantStringClassReference_110f539b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xc0),
                      &PTR____CFConstantStringClassReference_110f539d8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 200),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110ec09d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xd0),
                      &PTR____CFConstantStringClassReference_110f539f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xd8),
                      &PTR____CFConstantStringClassReference_110f53a18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xe0),
                      &PTR____CFConstantStringClassReference_110f53a38);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0xe8),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f53a58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xf0),
                      &PTR____CFConstantStringClassReference_110f53a78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xf8),
                      &PTR____CFConstantStringClassReference_110f53a98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x100),
                      &PTR____CFConstantStringClassReference_110f53ab8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x108),
                      &PTR____CFConstantStringClassReference_110f1c458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b05844c; end: 10b05866b; -[SCSnapVideoFilterState hash] */

undefined8 * FUN_10b05844c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = &uStack_150;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_148 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_140 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_138 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_130 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_128 = uVar2;
  func_0x00010bfde980();
  uStack_118 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_120 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x58);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  lStack_100 = -lVar5;
  if (-1 < lVar5) {
    lStack_100 = lVar5;
  }
  uStack_108 = uVar1;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uStack_d8 = (ulong)*(byte *)(param_1 + 9);
  uStack_d0 = (ulong)*(byte *)(param_1 + 10);
  uVar6 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_c8 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_c8 = uStack_c8 ^ uStack_c8 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_c0 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_c0 = uStack_c0 ^ uStack_c0 >> 0x16;
  uStack_b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x98));
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uVar6 = ~*(ulong *)(param_1 + 200) + *(ulong *)(param_1 + 200) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_80 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xf0));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xf8));
  uVar6 = ~*(ulong *)(param_1 + 0xe8) + *(ulong *)(param_1 + 0xe8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x100));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x108));
  uStack_68 = uVar2;
  func_0x000107c3191c(&uStack_150,0x23);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b058a2c:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b058a38;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
           (*(char *)((long)puVar3 + 8) == param_3[8])) &&
          (*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58))) &&
         ((*(char *)((long)puVar3 + 9) == param_3[9] &&
          (*(char *)((long)puVar3 + 10) == param_3[10])))))) &&
       ((*(long *)((long)puVar3 + 0x90) == *(long *)(param_3 + 0x90) &&
        (((*(long *)((long)puVar3 + 0x98) == *(long *)(param_3 + 0x98) &&
          (*(long *)((long)puVar3 + 0xf0) == *(long *)(param_3 + 0xf0))) &&
         ((*(long *)((long)puVar3 + 0xf8) == *(long *)(param_3 + 0xf8) &&
          ((*(long *)((long)puVar3 + 0x100) == *(long *)(param_3 + 0x100) &&
           (*(long *)((long)puVar3 + 0x108) == *(long *)(param_3 + 0x108))))))))))) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x80) - *(double *)(param_3 + 0x80));
      if ((dVar8 < 2.2250738585072014e-308) ||
         (dVar8 < ABS(*(double *)((long)puVar3 + 0x80) + *(double *)(param_3 + 0x80)) *
                  2.220446049250313e-16)) {
        dVar8 = ABS(*(double *)((long)puVar3 + 0x88) - *(double *)(param_3 + 0x88));
        if ((dVar8 < 2.2250738585072014e-308) ||
           (dVar8 < ABS(*(double *)((long)puVar3 + 0x88) + *(double *)(param_3 + 0x88)) *
                    2.220446049250313e-16)) {
          dVar8 = ABS(*(double *)((long)puVar3 + 200) - *(double *)(param_3 + 200));
          if ((dVar8 < 2.2250738585072014e-308) ||
             (dVar8 < ABS(*(double *)((long)puVar3 + 200) + *(double *)(param_3 + 200)) *
                      2.220446049250313e-16)) {
            dVar8 = ABS(*(double *)((long)puVar3 + 0xe8) - *(double *)(param_3 + 0xe8));
            if ((((((dVar8 < 2.2250738585072014e-308) ||
                   (dVar8 < ABS(*(double *)((long)puVar3 + 0xe8) + *(double *)(param_3 + 0xe8)) *
                            2.220446049250313e-16)) &&
                  ((lVar5 = *(long *)((long)puVar3 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                 ((((lVar5 = *(long *)((long)puVar3 + 0x20), lVar5 == *(long *)(param_3 + 0x20) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0x28), lVar5 == *(long *)(param_3 + 0x28) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                  ((lVar5 = *(long *)((long)puVar3 + 0x30), lVar5 == *(long *)(param_3 + 0x30) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
                ((lVar5 = *(long *)((long)puVar3 + 0x38), lVar5 == *(long *)(param_3 + 0x38) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
               ((((((lVar5 = *(long *)((long)puVar3 + 0x40), lVar5 == *(long *)(param_3 + 0x40) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0x48), lVar5 == *(long *)(param_3 + 0x48) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                  ((lVar5 = *(long *)((long)puVar3 + 0x50), lVar5 == *(long *)(param_3 + 0x50) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                 ((lVar5 = *(long *)((long)puVar3 + 0x60), lVar5 == *(long *)(param_3 + 0x60) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                (((((lVar5 = *(long *)((long)puVar3 + 0x68), lVar5 == *(long *)(param_3 + 0x68) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0x70), lVar5 == *(long *)(param_3 + 0x70) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                  (((lVar5 = *(long *)((long)puVar3 + 0x78), lVar5 == *(long *)(param_3 + 0x78) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0xa0), lVar5 == *(long *)(param_3 + 0xa0) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
                 ((((((lVar5 = *(long *)((long)puVar3 + 0xa8), lVar5 == *(long *)(param_3 + 0xa8) ||
                      (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                     ((lVar5 = *(long *)((long)puVar3 + 0xb0), lVar5 == *(long *)(param_3 + 0xb0) ||
                      (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                    ((lVar5 = *(long *)((long)puVar3 + 0xb8), lVar5 == *(long *)(param_3 + 0xb8) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0xc0), lVar5 == *(long *)(param_3 + 0xc0) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                  (((lVar5 = *(long *)((long)puVar3 + 0xd0), lVar5 == *(long *)(param_3 + 0xd0) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0xd8), lVar5 == *(long *)(param_3 + 0xd8) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))))))))))) {
              puVar7 = *(undefined1 **)((long)puVar3 + 0xe0);
              if (puVar7 != *(undefined1 **)(param_3 + 0xe0)) {
                func_0x00010c071ae0();
                goto LAB_10b058a38;
              }
              goto LAB_10b058a2c;
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b058a38:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b05866c; end: 10b058a53; -[SCSnapVideoFilterState isEqual:] */

long FUN_10b05866c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b058a2c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b058a38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
         ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
       ((*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90) &&
        (((*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98) &&
          (*(long *)(param_1 + 0xf0) == *(long *)(param_3 + 0xf0))) &&
         ((*(long *)(param_1 + 0xf8) == *(long *)(param_3 + 0xf8) &&
          ((*(long *)(param_1 + 0x100) == *(long *)(param_3 + 0x100) &&
           (*(long *)(param_1 + 0x108) == *(long *)(param_3 + 0x108))))))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x80) + *(double *)(param_3 + 0x80)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x88) - *(double *)(param_3 + 0x88));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x88) + *(double *)(param_3 + 0x88)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 200) - *(double *)(param_3 + 200));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 200) + *(double *)(param_3 + 200)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0xe8) - *(double *)(param_3 + 0xe8));
            if ((((((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0xe8) + *(double *)(param_3 + 0xe8)) *
                            2.220446049250313e-16)) &&
                  ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 ((((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((((((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                (((((lVar3 = *(long *)(param_1 + 0x68), lVar3 == *(long *)(param_3 + 0x68) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  (((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                 ((((((lVar3 = *(long *)(param_1 + 0xa8), lVar3 == *(long *)(param_3 + 0xa8) ||
                      (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                     ((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0) ||
                      (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                    ((lVar3 = *(long *)(param_1 + 0xb8), lVar3 == *(long *)(param_3 + 0xb8) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                   ((lVar3 = *(long *)(param_1 + 0xc0), lVar3 == *(long *)(param_3 + 0xc0) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  (((lVar3 = *(long *)(param_1 + 0xd0), lVar3 == *(long *)(param_3 + 0xd0) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0xd8), lVar3 == *(long *)(param_3 + 0xd8) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))) {
              lVar3 = *(long *)(param_1 + 0xe0);
              if (lVar3 != *(long *)(param_3 + 0xe0)) {
                func_0x00010c071ae0();
                goto LAB_10b058a38;
              }
              goto LAB_10b058a2c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b058a38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b058a54; end: 10b058b5b; -[SCSnapVideoFilterState .cxx_destruct] */

void FUN_10b058a54(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b058b5c; end: 10b058bf7; -[SCSnapVideoFilterUcoConfig initWithCoder:] */

undefined1 * FUN_10b058b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704e48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b058bf8; end: 10b058c7f; -[SCSnapVideoFilterUcoConfig initWithFilterId:needWarmUp:] */

undefined1 *
FUN_10b058bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112704e48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b058c80; end: 10b058ca3; -[SCSnapVideoFilterUcoConfig copyWithZone:] */

undefined8 FUN_10b058c80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b058ca4; end: 10b058d03; -[SCSnapVideoFilterUcoConfig encodeWithCoder:] */

void FUN_10b058ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f53ad8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f53af8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b058d04; end: 10b058d6f; -[SCSnapVideoFilterUcoConfig hash] */

undefined8 * FUN_10b058d04(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b058df4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b058df4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b058df4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b058df4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b058d70; end: 10b058e0f; -[SCSnapVideoFilterUcoConfig isEqual:] */

long FUN_10b058d70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b058df4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b058df4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b058df4;
    }
  }
  lVar3 = 1;
LAB_10b058df4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b058e10; end: 10b058e17; -[SCSnapVideoFilterUcoConfig filterId] */

undefined8 FUN_10b058e10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b058e18; end: 10b058e1f; -[SCSnapVideoFilterUcoConfig needWarmUp] */

undefined1 FUN_10b058e18(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b058e20; end: 10b058e2b; -[SCSnapVideoFilterUcoConfig .cxx_destruct] */

void FUN_10b058e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b058e2c; end: 10b058e97; -[SCTranscodeStatusUpdate initWithPhase:progress:attemptIndex:timestampMs:] */

void FUN_10b058e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112704e50;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}



/* Entry: 10b058e98; end: 10b058ebb; -[SCTranscodeStatusUpdate copyWithZone:] */

undefined8 FUN_10b058e98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b058ebc; end: 10b058f4b; -[SCTranscodeStatusUpdate hash] */

long * FUN_10b058ebc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  double dVar6;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uStack_30 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  plVar2 = &lStack_38;
  func_0x000107c3191c(plVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar5 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar5);
      if ((((ulong)plVar3 & 1) == 0) ||
         (((plVar2[1] != param_3[1] || (plVar2[3] != param_3[3])) || (plVar2[4] != param_3[4])))) {
        plVar5 = (long *)0x0;
      }
      else {
        dVar6 = ABS((double)plVar2[2] + (double)param_3[2]) * 2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        plVar5 = (long *)(ulong)(ABS((double)plVar2[2] - (double)param_3[2]) < dVar6);
      }
    }
  }
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b058f4c; end: 10b059027; -[SCTranscodeStatusUpdate isEqual:] */

bool FUN_10b058f4c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar2 & 1) == 0) ||
         (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b059028; end: 10b05902f; -[SCTranscodeStatusUpdate phase] */

undefined8 FUN_10b059028(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b059030; end: 10b059037; -[SCTranscodeStatusUpdate progress] */

undefined8 FUN_10b059030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b059038; end: 10b05903f; -[SCTranscodeStatusUpdate attemptIndex] */

undefined8 FUN_10b059038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b059040; end: 10b059047; -[SCTranscodeStatusUpdate timestampMs] */

undefined8 FUN_10b059040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b059048; end: 10b05904f; -[SCLensCrashLoggerOnCameraServices userInteractedLogger] */

undefined8 FUN_10b059048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b059050; end: 10b05908b; -[SCLensCrashLoggerOnCameraServices .cxx_destruct] */

void FUN_10b059050(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05908c; end: 10b059093; -[SCLensCrashLoggerServices postCaptureLogger] */

undefined8 FUN_10b05908c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b059094; end: 10b05909b; -[SCLensCrashLoggerServices transcodingLogger] */

undefined8 FUN_10b059094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b05909c; end: 10b0590a3; -[SCLensCrashLoggerServices factory] */

undefined8 FUN_10b05909c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0590a4; end: 10b0590f7; -[SCLensCrashLoggerServices .cxx_destruct] */

void FUN_10b0590a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0590f8; end: 10b0590ff; -[SCPreviewVideoProviderServices previewAssetVideoProvider] */

undefined8 FUN_10b0590f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b059100; end: 10b059107; -[SCPreviewVideoProviderServices previewSnapDocVideoProvider] */

undefined8 FUN_10b059100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b059108; end: 10b05910f; -[SCPreviewVideoProviderServices previewVideoProviderLoggingCommonCoordinator] */

undefined8 FUN_10b059108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b059110; end: 10b059157; -[SCPreviewVideoProviderServices .cxx_destruct] */

void FUN_10b059110(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b059158; end: 10b059253; -[SCPreviewVideoProviderDebugInfo initWithVideoUrlFileSize:backupUrlFileSize:rawVideoDataFileSize:videoMediaType:backupMediaType:rawVideoMediaType:] */

undefined1 *
FUN_10b059158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112704e70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10b059254; end: 10b059277; -[SCPreviewVideoProviderDebugInfo copyWithZone:] */

undefined8 FUN_10b059254(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b059278; end: 10b05930f; -[SCPreviewVideoProviderDebugInfo hash] */

undefined8 * FUN_10b059278(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  lVar5 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_60,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0593d8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0593e4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar5 = *(long *)((long)puVar3 + 0x20);
      if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x28);
        if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
          if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_10b0593e4;
          }
          goto LAB_10b0593d8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0593e4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b059310; end: 10b0593ff; -[SCPreviewVideoProviderDebugInfo isEqual:] */

long FUN_10b059310(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0593d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0593e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_10b0593e4;
          }
          goto LAB_10b0593d8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0593e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b059400; end: 10b059407; -[SCPreviewVideoProviderDebugInfo videoUrlFileSize] */

undefined8 FUN_10b059400(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b059408; end: 10b05940f; -[SCPreviewVideoProviderDebugInfo backupUrlFileSize] */

undefined8 FUN_10b059408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b059410; end: 10b059417; -[SCPreviewVideoProviderDebugInfo rawVideoDataFileSize] */

undefined8 FUN_10b059410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b059418; end: 10b05941f; -[SCPreviewVideoProviderDebugInfo videoMediaType] */

undefined8 FUN_10b059418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b059420; end: 10b059427; -[SCPreviewVideoProviderDebugInfo backupMediaType] */

undefined8 FUN_10b059420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b059428; end: 10b05942f; -[SCPreviewVideoProviderDebugInfo rawVideoMediaType] */

undefined8 FUN_10b059428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b059430; end: 10b05946b; -[SCPreviewVideoProviderDebugInfo .cxx_destruct] */

void FUN_10b059430(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b05946c; end: 10b0594df; -[SCPreviewCommonLoggingServices initWithLogging:] */

undefined1 * FUN_10b05946c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704e78;
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



/* Entry: 10b0594e0; end: 10b0594e7; -[SCPreviewCommonLoggingServices logging] */

undefined8 FUN_10b0594e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0594e8; end: 10b0594f3; -[SCPreviewCommonLoggingServices .cxx_destruct] */

void FUN_10b0594e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0594f4; end: 10b0597db; -[SCPreviewLoggingServices initWithUserInteractionStateLogger:latencyLogger:aggregatedLatencyLogger:loadLatencyLogger:geoFilterLogger:stickerPickerLogger:captionLogger:dependencyLoadingLogger:drawingLogger:viewLogger:blizzardLogger:previewPerformanceLogger:carouselLogger:] */

undefined8 *
FUN_10b0594f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_112704e80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
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



/* Entry: 10b0597dc; end: 10b0597e3; -[SCPreviewLoggingServices interactionStateLogger] */

undefined8 FUN_10b0597dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0597e4; end: 10b0597eb; -[SCPreviewLoggingServices latencyLogger] */

undefined8 FUN_10b0597e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0597ec; end: 10b0597f3; -[SCPreviewLoggingServices aggregateLatencyLogger] */

undefined8 FUN_10b0597ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0597f4; end: 10b0597fb; -[SCPreviewLoggingServices loadLatencyLogger] */

undefined8 FUN_10b0597f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0597fc; end: 10b059803; -[SCPreviewLoggingServices geoFilterLogger] */

undefined8 FUN_10b0597fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b059804; end: 10b05980b; -[SCPreviewLoggingServices previewPerformanceLogger] */

undefined8 FUN_10b059804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b05980c; end: 10b059813; -[SCPreviewLoggingServices stickerPickerLogger] */

undefined8 FUN_10b05980c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b059814; end: 10b05981b; -[SCPreviewLoggingServices captionLogger] */

undefined8 FUN_10b059814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b05981c; end: 10b059823; -[SCPreviewLoggingServices dependencyLoadingLogger] */

undefined8 FUN_10b05981c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b059824; end: 10b05982b; -[SCPreviewLoggingServices drawingLogger] */

undefined8 FUN_10b059824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b05982c; end: 10b059833; -[SCPreviewLoggingServices viewLogger] */

undefined8 FUN_10b05982c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b059834; end: 10b05983b; -[SCPreviewLoggingServices blizzardLogger] */

undefined8 FUN_10b059834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b05983c; end: 10b059843; -[SCPreviewLoggingServices carouselLogger] */

undefined8 FUN_10b05983c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b059844; end: 10b0598f7; -[SCPreviewLoggingServices .cxx_destruct] */

void FUN_10b059844(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10b0598f8; end: 10b059963; +[SCPreviewActionLog batchCaptureWithParams:] */

void FUN_10b0598f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4c00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b059964; end: 10b0599c7; +[SCPreviewActionLog singleWithParams:] */

void FUN_10b059964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4c00;
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


