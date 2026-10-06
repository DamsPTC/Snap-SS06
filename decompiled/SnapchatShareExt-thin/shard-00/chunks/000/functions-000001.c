/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000146fc; end: 1000147d3;  */

void FUN_1000146fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100017f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1000218f0;
  func_0x000100017ea0(PTR__OBJC_CLASS___NSError_1000218f0,param_2,
                      &PTR____CFConstantStringClassReference_10001c7b0,
                      *(undefined8 *)(param_1 + 0x28),0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100017bc0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(uVar1);
  return;
}



/* Entry: 1000147d4; end: 1000147ef;  */

void FUN_1000147d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000175e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_10001c278)(param_1,PTR_s_session_1000217d8);
  return;
}



/* Entry: 1000147f0; end: 10001489f; -[SCShareExtensionConfigs initWithCoder:] */

undefined1 * FUN_1000147f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_100021a08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000100017d60();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x000100017d40();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x000100017d40();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x000100017d40();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000148a0; end: 100014907; -[SCShareExtensionConfigs initWithShareVideoDurationThresholdInSeconds:allowInitialTextWithMedia:hevcDecodeBlocked:av1DecodeBlocked:] */

void FUN_1000148a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_100021a08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
  }
  return;
}



/* Entry: 100014908; end: 10001492b; -[SCShareExtensionConfigs copyWithZone:] */

undefined8 FUN_100014908(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10001492c; end: 1000149b3; -[SCShareExtensionConfigs encodeWithCoder:] */

void FUN_10001492c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x000100017e60(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_10001ca90);
  func_0x000100017e40(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_10001cab0);
  func_0x000100017e40(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_10001cad0);
  func_0x000100017e40(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_10001caf0);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 1000149b4; end: 100014a23; -[SCShareExtensionConfigs hash] */

long * FUN_1000149b4(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_10001c098;
  lVar3 = *(long *)(param_1 + 0x10);
  lStack_38 = -lVar3;
  if (-1 < lVar3) {
    lStack_38 = lVar3;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  plVar1 = &lStack_38;
  _SCRemodelHash(plVar1,4);
  if (*(long *)PTR____stack_chk_guard_10001c098 == lStack_18) {
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar1 == param_3) {
    plVar4 = (long *)0x1;
  }
  else {
    plVar4 = (long *)0x0;
    if ((plVar1 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar4 = plVar1;
      _objc_opt_class(plVar1);
      plVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar4);
      if ((((ulong)plVar2 & 1) == 0) ||
         (((plVar1[2] != param_3[2] || ((char)plVar1[1] != (char)param_3[1])) ||
          (*(char *)((long)plVar1 + 9) != *(char *)((long)param_3 + 9))))) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)(ulong)(*(char *)((long)plVar1 + 10) == *(char *)((long)param_3 + 10));
      }
    }
  }
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 100014a24; end: 100014adb; -[SCShareExtensionConfigs isEqual:] */

bool FUN_100014a24(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 10) == *(char *)(param_3 + 10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 100014adc; end: 100014ae3; -[SCShareExtensionConfigs shareVideoDurationThresholdInSeconds] */

undefined8 FUN_100014adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100014ae4; end: 100014aeb; -[SCShareExtensionConfigs allowInitialTextWithMedia] */

undefined1 FUN_100014ae4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100014aec; end: 100014af3; -[SCShareExtensionConfigs hevcDecodeBlocked] */

undefined1 FUN_100014aec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100014af4; end: 100014afb; -[SCShareExtensionConfigs av1DecodeBlocked] */

undefined1 FUN_100014af4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 100014afc; end: 100014b5f; +[SCExternalSendToMedia imageWithFileUrl:] */

void FUN_100014afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_100021900;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100018380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar2);
  return;
}



/* Entry: 100014b60; end: 100014bcb; +[SCExternalSendToMedia videoWithFileUrl:] */

void FUN_100014b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_100021900;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100018380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar2);
  return;
}



/* Entry: 100014bcc; end: 100014d6b; -[SCExternalSendToMedia initWithCoder:] */

undefined8 * FUN_100014bcc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_10001c098;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_100021a10;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x000100017d80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x0001000183c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x0001000183c0();
      if ((uVar2 & 1) == 0) goto LAB_100014cf8;
      uVar5 = 1;
      lVar6 = 0x18;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
    }
    uVar2 = param_3;
    func_0x000100017d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_10001c098 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_100014cf8:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1000219b0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_10001cc10;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_100021990;
  uStack_50 = unaff_x21;
  func_0x000100017dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100017ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 100014d6c; end: 100014d8f; -[SCExternalSendToMedia copyWithZone:] */

undefined8 FUN_100014d6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100014d90; end: 100014e1f; -[SCExternalSendToMedia encodeWithCoder:] */

void FUN_100014d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_10001cb50;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_10001cb70;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_100014e0c;
    ppuVar3 = &PTR____CFConstantStringClassReference_10001cb90;
    lVar2 = 0x18;
    ppuVar1 = &PTR____CFConstantStringClassReference_10001cbb0;
  }
  func_0x000100018700(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x000100018700(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_10001cb30);
LAB_100014e0c:
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 100014e20; end: 100014e97; -[SCExternalSendToMedia hash] */

void FUN_100014e20(long param_1)

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
  lStack_28 = *(long *)PTR____stack_chk_guard_10001c098;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100018000();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x000100018000();
  uStack_30 = uVar2;
  _SCRemodelHash(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_10001c098 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_100021a10;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_100021620);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)();
  return;
}



/* Entry: 100014e98; end: 100014edb; -[SCExternalSendToMedia internalInit] */

void FUN_100014e98(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_100021a10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100021620);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)();
  return;
}



/* Entry: 100014edc; end: 100014f93; -[SCExternalSendToMedia isEqual:] */

long FUN_100014edc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100014f6c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100014f78;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x0001000183a0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x0001000183a0();
          goto LAB_100014f78;
        }
        goto LAB_100014f6c;
      }
    }
    lVar3 = 0;
  }
LAB_100014f78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 100014f94; end: 100015017; -[SCExternalSendToMedia matchImage:video:] */

void FUN_100014f94(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_100014ffc;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_100014ffc;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_100014ffc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 100015018; end: 100015047; -[SCExternalSendToMedia .cxx_destruct] */

void FUN_100015018(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + 0x10,0);
  return;
}



/* Entry: 100015048; end: 1000150d7; +[SCExternalSendToContent mediaWithMedia:companionText:] */

void FUN_100015048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_100021910;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100018380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar2);
  return;
}



/* Entry: 1000150d8; end: 10001516f; +[SCExternalSendToContent mediasWithMedias:companionText:] */

void FUN_1000150d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_100021910;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100018380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar2);
  return;
}



/* Entry: 100015170; end: 1000151db; +[SCExternalSendToContent textWithText:] */

void FUN_100015170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_100021910;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100018380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar2);
  return;
}



/* Entry: 1000151dc; end: 100015247; +[SCExternalSendToContent urlWithUrl:] */

void FUN_1000151dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_100021910;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100018380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar2);
  return;
}



/* Entry: 100015248; end: 10001547b; -[SCExternalSendToContent initWithCoder:] */

undefined8 * FUN_100015248(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_10001c098;
  _objc_retain(param_3);
  puStack_70 = PTR_PTR_100021a18;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x000100017d80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x0001000183c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x0001000183c0();
      if ((uVar2 & 1) != 0) {
        uVar5 = 1;
        lVar6 = 0x28;
        lVar7 = 0x20;
        goto LAB_100015324;
      }
      uVar2 = unaff_x21;
      func_0x0001000183c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x0001000183c0();
        if ((uVar2 & 1) == 0) goto LAB_100015408;
        uVar5 = 3;
        lVar6 = 0x38;
      }
      else {
        uVar5 = 2;
        lVar6 = 0x30;
      }
    }
    else {
      uVar5 = 0;
      lVar6 = 0x18;
      lVar7 = 0x10;
LAB_100015324:
      uVar2 = param_3;
      func_0x000100017d80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
      *(ulong *)((long)puVar1 + lVar7) = uVar2;
      _objc_release(uVar4);
    }
    uVar2 = param_3;
    func_0x000100017d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_10001c098 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_100015408:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1000219b0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_10001cc10;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_100021990;
  uStack_60 = unaff_x21;
  func_0x000100017dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100017ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10001547c; end: 10001549f; -[SCExternalSendToContent copyWithZone:] */

undefined8 FUN_10001547c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1000154a0; end: 10001559f; -[SCExternalSendToContent encodeWithCoder:] */

void FUN_1000154a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x000100018700(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                          &PTR____CFConstantStringClassReference_10001cc50);
      ppuVar3 = &PTR____CFConstantStringClassReference_10001cc30;
      lVar2 = 0x18;
      ppuVar1 = &PTR____CFConstantStringClassReference_10001cc70;
    }
    else {
      if (lVar2 != 1) goto LAB_10001558c;
      func_0x000100018700(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                          &PTR____CFConstantStringClassReference_10001ccb0);
      ppuVar3 = &PTR____CFConstantStringClassReference_10001cc90;
      lVar2 = 0x28;
      ppuVar1 = &PTR____CFConstantStringClassReference_10001ccd0;
    }
  }
  else if (lVar2 == 2) {
    ppuVar3 = &PTR____CFConstantStringClassReference_10001ccf0;
    lVar2 = 0x30;
    ppuVar1 = &PTR____CFConstantStringClassReference_10001cd10;
  }
  else {
    if (lVar2 != 3) goto LAB_10001558c;
    ppuVar3 = &PTR____CFConstantStringClassReference_10001cd30;
    lVar2 = 0x38;
    ppuVar1 = &PTR____CFConstantStringClassReference_10001cd50;
  }
  func_0x000100018700(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x000100018700(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_10001cb30);
LAB_10001558c:
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 1000155a0; end: 100015647; -[SCExternalSendToContent hash] */

void FUN_1000155a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_10001c098;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100018000();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x000100018000();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x000100018000();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x000100018000();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x000100018000();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x000100018000();
  uStack_30 = uVar1;
  _SCRemodelHash(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_10001c098 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_100021a18;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_100021620);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)();
  return;
}



/* Entry: 100015648; end: 10001568b; -[SCExternalSendToContent internalInit] */

void FUN_100015648(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_100021a18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100021620);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)();
  return;
}



/* Entry: 10001568c; end: 1000157a3; -[SCExternalSendToContent isEqual:] */

long FUN_10001568c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10001577c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100015788;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x0001000183a0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x0001000183a0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x0001000183a0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x0001000183a0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x0001000183a0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x0001000183a0();
                  goto LAB_100015788;
                }
                goto LAB_10001577c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_100015788:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1000157a4; end: 100015897; -[SCExternalSendToContent matchMedia:medias:url:text:] */

void FUN_1000157a4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_100015868;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if ((lVar3 != 1) || (param_4 == 0)) goto LAB_100015868;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
    (*pcVar4)(lVar3,uVar1,uVar2);
  }
  else {
    if (lVar3 == 2) {
      if (param_5 == 0) goto LAB_100015868;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      pcVar4 = *(code **)(param_5 + 0x10);
      lVar3 = param_5;
    }
    else {
      if ((lVar3 != 3) || (param_6 == 0)) goto LAB_100015868;
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    (*pcVar4)(lVar3,uVar1);
  }
LAB_100015868:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 100015898; end: 1000158f7; -[SCExternalSendToContent .cxx_destruct] */

void FUN_100015898(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + 0x10,0);
  return;
}



/* Entry: 1000158f8; end: 1000159a7; -[SCExternalSendToDataModel initWithCoder:] */

undefined1 * FUN_1000158f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_100021a20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000100017d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x000100017d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000159a8; end: 100015a53; -[SCExternalSendToDataModel initWithContent:preselectedId:] */

undefined1 *
FUN_1000159a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_100021a20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_100021620);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000100017c80();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x000100017c80();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100015a54; end: 100015a77; -[SCExternalSendToDataModel copyWithZone:] */

undefined8 FUN_100015a54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100015a78; end: 100015ad7; -[SCExternalSendToDataModel encodeWithCoder:] */

void FUN_100015a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x000100018700(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_10001cd70);
  func_0x000100018700(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_10001cd90);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 100015ad8; end: 100015b4b; -[SCExternalSendToDataModel hash] */

undefined8 * FUN_100015ad8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_10001c098;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000100018000();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x000100018000();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  _SCRemodelHash(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_10001c098 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_100015bcc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_100015bd8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x0001000183a0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x0001000183a0();
          goto LAB_100015bd8;
        }
        goto LAB_100015bcc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_100015bd8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 100015b4c; end: 100015bf3; -[SCExternalSendToDataModel isEqual:] */

long FUN_100015b4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100015bcc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100015bd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x0001000183a0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x0001000183a0();
          goto LAB_100015bd8;
        }
        goto LAB_100015bcc;
      }
    }
    lVar3 = 0;
  }
LAB_100015bd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 100015bf4; end: 100015bfb; -[SCExternalSendToDataModel content] */

undefined8 FUN_100015bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100015bfc; end: 100015c03; -[SCExternalSendToDataModel preselectedId] */

undefined8 FUN_100015bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100015c04; end: 100015c33; -[SCExternalSendToDataModel .cxx_destruct] */

void FUN_100015c04(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + 8,0);
  return;
}



/* Entry: 100015c34; end: 100015cb3; -[sc_async_queue_concrete isEqual:] */

undefined8 FUN_100015c34(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100015c90:
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1000219b8;
    _objc_opt_class(PTR_PTR_1000219b8);
    lVar2 = param_3;
    func_0x0001000183e0(param_3,param_2,puVar1);
    if ((int)lVar2 != 0) {
      func_0x0001000178e0();
      lVar2 = param_3;
      func_0x0001000178e0();
      if (param_1 == lVar2) goto LAB_100015c90;
    }
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 100015cb4; end: 100015d03; -[sc_async_queue_concrete hash] */

undefined * FUN_100015cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_100021980;
  func_0x0001000178e0();
  func_0x0001000185a0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100018000();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 100015d04; end: 100015d27; -[sc_async_queue_concrete copyWithZone:] */

undefined8 FUN_100015d04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100015d28; end: 100015d7b; +[sc_async_queue_concrete _main] */

void FUN_100015d28(void)

{
  undefined8 uVar1;
  
  if (lRam0000000100022350 != -1) {
    _dispatch_once(0x100022350,&PTR___NSConcreteGlobalBlock_10001c750);
  }
  uVar1 = uRam0000000100022348;
  _objc_retain(uRam0000000100022348);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(uVar1);
  return;
}



/* Entry: 100015d7c; end: 100015db3;  */

void FUN_100015d7c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1000219b8;
  _objc_alloc();
  func_0x000100017800();
  uVar1 = puRam0000000100022348;
  puRam0000000100022348 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(uVar1);
  return;
}



/* Entry: 100015db4; end: 100015e6f; -[sc_async_queue_concrete _queueID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100015db4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_100021ac8);
  _objc_retain(lVar3);
  if (lRam0000000100022358 != -1) {
    _dispatch_once(0x100022358,&PTR___NSConcreteGlobalBlock_10001c770);
  }
  _os_unfair_lock_lock(0x100022340);
  lVar2 = lVar3;
  _dispatch_queue_get_specific(lVar3,0x1000220f0);
  lVar1 = lRam00000001000220f0;
  if (lVar2 == 0) {
    lRam00000001000220f0 = lRam00000001000220f0 + 1;
    _dispatch_queue_set_specific(lVar3,0x1000220f0,lVar1,0);
    lVar2 = lVar1;
  }
  _os_unfair_lock_unlock(0x100022340);
  _objc_release(lVar3);
  return lVar2;
}



/* Entry: 100015e70; end: 100015ea7; -[sc_async_queue_concrete _queueLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015e70(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1000218a0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_100021ac8);
  _dispatch_queue_get_label(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100018990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_10001c290)(puVar1,PTR_s_stringWithUTF8String__100021850,uVar2);
  return;
}



/* Entry: 100015ea8; end: 100015ed7; -[sc_async_queue_concrete _unsafeRawQueue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015ea8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_100021ac8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(uVar1);
  return;
}



/* Entry: 100015ed8; end: 100015f5b; -[sc_async_queue_concrete _initUnsafeWithQueue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100015ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_100021a28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s__init_100021358);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_100021ac8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100015f5c; end: 1000160a3; -[sc_async_queue_concrete _initWithLabel:qos:parent:mustUseFIFO:] */

undefined8
FUN_100015f5c(undefined8 param_1,undefined8 param_2,long param_3,int param_4,long param_5,
             ulong param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retainAutorelease();
  func_0x0001000177a0();
  if ((((param_6 & 1) == 0) && (param_4 != 9)) && (param_4 != 0x11)) {
    lVar1 = param_3;
    _dispatch_workloop_create_inactive();
    _dispatch_set_qos_class_floor();
    if (lVar1 != 0) goto LAB_100016038;
  }
  uVar2 = 0;
  _dispatch_queue_attr_make_initially_inactive(0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _dispatch_queue_attr_make_with_qos_class();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  _dispatch_queue_attr_make_with_autorelease_frequency(uVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _dispatch_queue_create(param_3,uVar2);
  _objc_release(uVar2);
  lVar1 = param_3;
LAB_100016038:
  if (param_5 != 0) {
    lVar4 = param_5;
    _sc_async_unsafe_get_dispatch_queue(param_5);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_set_target_queue(lVar1,lVar4);
    _objc_release(lVar4);
  }
  _dispatch_activate(lVar1);
  func_0x000100017800(param_1);
  _objc_release(lVar1);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 1000160a4; end: 1000160a7; -[sc_async_queue_concrete _assertIsCurrentQueue] */

void FUN_1000160a4(void)

{
  return;
}



/* Entry: 1000160a8; end: 1000160ab; -[sc_async_queue_concrete _assertIsNotCurrentQueue] */

void FUN_1000160a8(void)

{
  return;
}



/* Entry: 1000160ac; end: 1000160f7; -[sc_async_queue_concrete _isCurrentQueue] */

bool FUN_1000160ac(ulong param_1)

{
  ulong uVar1;
  
  func_0x0001000178e0();
  uVar1 = 0x1000220f0;
  _dispatch_get_specific();
  return (6999999999 < uVar1 && 6999999999 < param_1) && param_1 == uVar1;
}



/* Entry: 1000160f8; end: 10001610b; -[sc_async_queue_concrete _withoutOverridingQoSAsync:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000160f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100017490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_async_10001c0c0)(*(undefined8 *)(param_1 + _DAT_100021ac8),param_3);
  return;
}



/* Entry: 10001610c; end: 10001616f; -[sc_async_queue_concrete _afterDelay:async:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001610c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  _dispatch_after();
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_4);
  return;
}



/* Entry: 100016170; end: 1000161d3; -[sc_async_queue_concrete _ifCurrentQueueInvokeOtherwiseAsync:] */

void FUN_100016170(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x000100017840();
  if ((int)uVar1 == 0) {
    _sc_async_assert_not(param_1);
    func_0x000100017a00(param_1,param_2,param_3);
  }
  else {
    _sc_async_assert(param_1);
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 1000161d4; end: 10001629f; -[sc_async_queue_concrete _queueLocalObjectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000161d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (lRam0000000100022358 != -1) {
    _dispatch_once(0x100022358,&PTR___NSConcreteGlobalBlock_10001c770);
  }
  _os_unfair_lock_lock(0x100022340);
  uVar1 = *(undefined8 *)(param_1 + _DAT_100021ac8);
  FUN_1000162a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100018600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(0x100022340);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(uVar2);
  return;
}



/* Entry: 1000162a0; end: 10001634f;  */

void FUN_1000162a0(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  if (lRam0000000100022358 != -1) {
    _dispatch_once(0x100022358,&PTR___NSConcreteGlobalBlock_10001c770);
  }
  _os_unfair_lock_assert_owner(0x100022340);
  puVar1 = param_1;
  _dispatch_queue_get_specific(param_1,&UNK_1000193c0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1000219c8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1000219c8);
    _objc_retain();
    _dispatch_queue_set_specific(param_1,&UNK_1000193c0,puVar1,PTR__CFRelease_10001c038);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(puVar1);
  return;
}



/* Entry: 100016350; end: 10001641f; -[sc_async_queue_concrete _setQueueLocalObject:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100016350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lRam0000000100022358 != -1) {
    _dispatch_once(0x100022358,&PTR___NSConcreteGlobalBlock_10001c770);
  }
  _os_unfair_lock_lock(0x100022340);
  uVar1 = *(undefined8 *)(param_1 + _DAT_100021ac8);
  FUN_1000162a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100018800();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(0x100022340);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 100016420; end: 1000164cf; -[sc_async_queue_concrete _removeQueueLocalObjectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100016420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (lRam0000000100022358 != -1) {
    _dispatch_once(0x100022358,&PTR___NSConcreteGlobalBlock_10001c770);
  }
  _os_unfair_lock_lock(0x100022340);
  uVar1 = *(undefined8 *)(param_1 + _DAT_100021ac8);
  FUN_1000162a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000186e0();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(0x100022340);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(param_3);
  return;
}



/* Entry: 1000164d0; end: 10001652b; -[sc_async_queue_concrete _tracer] */

void FUN_1000164d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCAsyncQueueTracer_1000219c0;
  _objc_opt_class(PTR__OBJC_CLASS___SCAsyncQueueTracer_1000219c0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100017900(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000175a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_10001c250)(param_1);
  return;
}



/* Entry: 10001652c; end: 100016597; -[sc_async_queue_concrete _setTracer:] */

void FUN_10001652c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCAsyncQueueTracer_1000219c0;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000179c0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100017640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10001c2c0)(puVar1);
  return;
}



/* Entry: 100016598; end: 1000165b7; -[sc_async_queue_concrete .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100016598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100017688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_10001c2f0)(param_1 + _DAT_100021ac8,0);
  return;
}



/* Entry: 1000165b8; end: 1000167fb;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_1000165b8(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = 0;
  bVar6 = false;
  lVar3 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar3 = 0xd0;
  }
  puVar2 = (ulong *)(param_1 + lVar3 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  plVar1 = (long *)(param_2 + 0x50);
  uVar10 = *puVar2;
LAB_10001663c:
  uVar12 = uVar10 & 3;
  if (uVar12 == 0) {
    func_0x0001000170f4(param_2);
  }
  else if (uVar12 != 3) {
    FUN_1000170ac(param_1);
    if (!bVar6) {
      return uVar12;
    }
    do {
      lVar3 = *plVar1;
      uVar13 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar13;
    while ((uVar9 >> 9 & 1) == 0) {
      uVar10 = uVar13 | 0x800;
      if (((uint)uVar13 >> 10 & 1) != 0) {
        uVar10 = uVar13 & 0xfffffffffffff9ff | 0x800;
        *(char *)(param_2 + 0x21) = (char)uVar13;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar11 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar11 != uVar13) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_100016798;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_100016798:
      if (lVar4 == lVar3 && uVar11 == uVar13) goto LAB_1000167bc;
      lVar3 = lVar4;
      uVar13 = uVar11;
      uVar9 = (uint)uVar11;
    }
    func_0x000100016a1c(param_2);
LAB_1000167bc:
    func_0x000100016e84(param_2);
    func_0x000100017200(param_2 + 0x80);
    return uVar12;
  }
  if (!bVar6) {
    param_3[3] = 0;
    param_3[4] = param_6;
    *param_3 = param_5;
    param_3[1] = param_4;
    do {
      lVar3 = *plVar1;
      uVar12 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar12;
    while ((uVar9 >> 9 & 1) == 0) {
      if (((uint)uVar12 >> 10 & 1) == 0) {
        uVar11 = uVar12 & 0xfffffffffffff5ff;
      }
      else {
        uVar11 = uVar12 & 0xfffffffffffff1ff;
        *(char *)(param_2 + 0x21) = (char)uVar12;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar5 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar5 != uVar12) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar5;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_1000166c0;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_1000166c0:
      if (lVar4 == lVar3 && uVar5 == uVar12) goto LAB_1000166e4;
      lVar3 = lVar4;
      uVar12 = uVar5;
      uVar9 = (uint)uVar5;
    }
    func_0x000100016b7c(param_2);
LAB_1000166e4:
    func_0x000100017248(param_2 + 0x80);
    func_0x000100016eb0(param_2);
  }
  do {
    uVar12 = *(ulong *)(param_2 + 0x58);
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = *plVar1;
      *(ulong *)(param_2 + 0x58) = uVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar12 = uVar12 & 0xff;
  if (uVar13 < uVar12) {
    FUN_100016cdc(param_1,uVar12);
    uVar13 = uVar12;
  }
  *(ulong *)(param_2 + 0x10) = uVar10 & 0xfffffffffffffffc;
  uVar12 = *puVar2;
  if (uVar12 == uVar10) {
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = param_2;
      cVar7 = ExclusiveMonitorsStatus();
    }
    bVar8 = cVar7 == '\0';
  }
  else {
    bVar8 = false;
    ClearExclusiveLocal();
  }
  bVar6 = true;
  uVar10 = uVar12;
  if (bVar8) {
    func_0x000100016e50();
    return 0;
  }
  goto LAB_10001663c;
}



/* Entry: 1000167fc; end: 1000168e3;  */

void FUN_1000167fc(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x000100016e48();
  *(code **)(lVar1 + 0x38) = FUN_1000168e4;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_1000165b8(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x0001000168d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_100017320(0,"future reported an error, but wait cannot throw");
                    /* WARNING: Could not recover jumptable at 0x0001000168e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000168e4; end: 1000168eb;  */

void FUN_1000168e4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001000168e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000168ec; end: 1000169fb;  */

void FUN_1000168ec(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x000100016e48();
  *(code **)(lVar1 + 0x38) = FUN_1000169fc;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_1000165b8(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 2) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    _swift_errorRetain(*(undefined8 *)
                        (param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8) + 0x10))
    ;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001000169e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1000169fc; end: 100016a1b;  */

void FUN_1000169fc(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100016a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Entry: 100016a1c; end: 100016cdb;  */

/* WARNING: Possible PIC construction at 0x000100016b30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100016b34) */
/* WARNING: Removing unreachable block (ram,0x000100016b54) */
/* WARNING: Removing unreachable block (ram,0x000100016b40) */
/* WARNING: Removing unreachable block (ram,0x000100016b58) */

void FUN_100016a1c(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lStack_60;
  ulong uStack_58;
  
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar2 = *plVar1;
    uVar3 = *(ulong *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar2;
      *(ulong *)(param_1 + 0x58) = uVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar7 = (undefined8 *)0x0;
  uVar8 = (uint)uVar3;
  do {
    while (lStack_60 = lVar2, uStack_58 = uVar3, (uVar8 >> 9 & 1) != 0) {
      FUN_100016d5c(param_1,&lStack_60);
      lVar2 = lStack_60;
      uVar3 = uStack_58;
      uVar8 = (uint)uStack_58;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = 1;
      func_0x0001000171cc(puVar7 + 1,0);
      puVar7[2] = 0xc0;
      puVar7[3] = lVar2;
      FUN_1000171d8(puVar7 + 1);
    }
    else {
      puVar7[3] = lVar2;
    }
    uVar6 = uVar3 | 0x200;
    do {
      while( true ) {
        lVar2 = *plVar1;
        uVar3 = *(ulong *)(param_1 + 0x58);
        cVar5 = lVar2 != lStack_60;
        if (uVar3 != uStack_58) {
          cVar5 = cVar5 + '\x01';
        }
        if (cVar5 == '\0') break;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2;
          *(ulong *)(param_1 + 0x54) = uVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_100016ae0;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)(puVar7 + 2);
        *(ulong *)(param_1 + 0x54) = uVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_100016ae0:
    if (lVar2 == lStack_60 && uVar3 == uStack_58) {
      uVar6 = uStack_58 | 0x800;
      uVar3 = uVar6;
      if (((uint)uStack_58 >> 10 & 1) != 0) {
        uVar6 = uStack_58 & 0xfffffffffffffbff | 0x800;
        *(char *)(param_1 + 0x21) = (char)uStack_58;
        uVar3 = uVar6;
      }
      do {
        uStack_58 = uVar3;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lStack_60;
          *(ulong *)(param_1 + 0x58) = uVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
        uVar3 = uStack_58;
      } while (cVar5 != '\0');
      FUN_1000171d8(0x100022370);
      _os_unfair_lock_unlock(puVar7 + 1);
      return;
    }
    uVar8 = (uint)uVar3;
  } while( true );
}



/* Entry: 100016cdc; end: 100016d5b;  */

void FUN_100016cdc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (lRam0000000100022368 != -1) {
    FUN_100016e30();
  }
  if (pcRam0000000100022360 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100016d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000100022360)();
    return;
  }
  _abort(param_1,param_2);
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_escalate");
  *param_1 = uVar1;
  return;
}



/* Entry: 100016d5c; end: 100016e2f;  */

/* WARNING: Possible PIC construction at 0x000100016dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100016dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100016df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100016df4) */
/* WARNING: Removing unreachable block (ram,0x000100016df8) */
/* WARNING: Removing unreachable block (ram,0x000100016e00) */
/* WARNING: Removing unreachable block (ram,0x000100016e08) */
/* WARNING: Removing unreachable block (ram,0x000100016db0) */
/* WARNING: Removing unreachable block (ram,0x000100016dc0) */
/* WARNING: Removing unreachable block (ram,0x000100016de8) */
/* WARNING: Removing unreachable block (ram,0x000100016dd4) */
/* WARNING: Removing unreachable block (ram,0x000100016dec) */

void FUN_100016d5c(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar2 = (long *)(param_1 + 0x50);
  FUN_1000171d8(0x100022370);
  do {
    lVar3 = *plVar2;
    lVar4 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar3;
      *(long *)(param_1 + 0x58) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *param_2 = lVar3;
  param_2[1] = lVar4;
  if ((((uint)lVar4 >> 9 & 1) != 0) && (lVar3 != 0)) {
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
    unaff_x30 = 0x100016db0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _os_unfair_lock_unlock(0x100022370);
  return;
}



/* Entry: 100016e30; end: 100016e4f;  */

void FUN_100016e30(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000174f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10001c100)(0x100022368,0x100022360,0x100016d2c);
  return;
}



/* Entry: 100016e50; end: 100016f5f;  */

undefined8 FUN_100016e50(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x67;
  _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,0);
  return uVar1;
}



/* Entry: 100016f60; end: 100016f97;  */

void FUN_100016f60(void)

{
  long lStack_28;
  ulong uStack_20;
  
  __swift_stdlib_operatingSystemVersion(&lStack_28);
  uRam0000000100022380 = lStack_28 == 0xf && uStack_20 < 2;
  return;
}



/* Entry: 100016f98; end: 10001708b;  */

void FUN_100016f98(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(0x100022378,FUN_100016f60,0);
  if ((bRam0000000100022380 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (lRam0000000100022390 != -1) {
      func_0x0001000170a8();
    }
    iVar1 = (int)uVar2;
    if ((pcRam0000000100022388 == (code *)0x0) || ((*pcRam0000000100022388)(), iVar1 != 0)) {
      lVar3 = *(long *)(param_2 + 0x28);
      _voucher_adopt();
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      *param_1 = lVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if (1 < lVar3 + 1U) {
      _os_release();
    }
  }
  return;
}



/* Entry: 10001708c; end: 1000170ab;  */

void FUN_10001708c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000174f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10001c100)(0x100022390,0x100022388,0x10001705c);
  return;
}



/* Entry: 1000170ac; end: 10001719b;  */

void FUN_1000170ac(undefined8 param_1)

{
  if (lRam00000001000223a0 != -1) {
    FUN_10001719c();
  }
  if (pcRam0000000100022398 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000170c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000100022398)(param_1);
    return;
  }
  return;
}



/* Entry: 10001719c; end: 1000171d7;  */

void FUN_10001719c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000174f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10001c100)(0x1000223a0,0x100022398,0x10001713c);
  return;
}



/* Entry: 1000171d8; end: 1000171ff;  */

void FUN_1000171d8(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Entry: 100017200; end: 1000172ef;  */

void FUN_100017200(undefined8 param_1)

{
  if (lRam00000001000223c0 != -1) {
    FUN_1000172f0();
  }
  if (pcRam00000001000223b8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001721c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000223b8)(param_1);
    return;
  }
  return;
}



/* Entry: 1000172f0; end: 10001731f;  */

void FUN_1000172f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000174f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10001c100)(0x1000223c0,0x1000223b8,0x100017290);
  return;
}



/* Entry: 100017320; end: 10001732b;  */

void FUN_100017320(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x000100017334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF_10001c348)();
  return;
}


