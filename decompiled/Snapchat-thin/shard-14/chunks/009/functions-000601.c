/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b706418; end: 10b706483; -[SCSnapDocMediaChange hash] */

undefined8 * FUN_10b706418(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b706508;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b706508;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b706508;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b706508:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b706484; end: 10b706523; -[SCSnapDocMediaChange isEqual:] */

long FUN_10b706484(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b706508;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b706508;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b706508;
    }
  }
  lVar3 = 1;
LAB_10b706508:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b706524; end: 10b70652b; -[SCSnapDocMediaChange mediaId] */

undefined8 FUN_10b706524(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b70652c; end: 10b706533; -[SCSnapDocMediaChange changeType] */

undefined8 FUN_10b70652c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b706534; end: 10b70653f; -[SCSnapDocMediaChange .cxx_destruct] */

void FUN_10b706534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b706540; end: 10b7065ab; -[SCSegmentObjects init] */

undefined1 * FUN_10b706540(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a130;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b7065ac; end: 10b7065b3; -[SCSegmentObjects global] */

undefined8 FUN_10b7065ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7065b4; end: 10b7065e3; -[SCSegmentObjects setGlobal:] */

void FUN_10b7065b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7065e4; end: 10b7065eb; -[SCSegmentObjects locals] */

undefined8 FUN_10b7065e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7065ec; end: 10b70661b; -[SCSegmentObjects .cxx_destruct] */

void FUN_10b7065ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b70661c; end: 10b706687; +[SCMediaInput dataWithData:] */

void FUN_10b70661c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3080;
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



/* Entry: 10b706688; end: 10b7066f3; +[SCMediaInput externalFileUrlWithExternalFileUrl:] */

void FUN_10b706688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3080;
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



/* Entry: 10b7066f4; end: 10b706757; +[SCMediaInput fileUrlWithFileUrl:] */

void FUN_10b7066f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3080;
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



/* Entry: 10b706758; end: 10b70677b; -[SCMediaInput copyWithZone:] */

undefined8 FUN_10b706758(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b70677c; end: 10b7067ff; -[SCMediaInput hash] */

void FUN_10b70677c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270a138;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b706800; end: 10b706843; -[SCMediaInput internalInit] */

void FUN_10b706800(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a138;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b706844; end: 10b706913; -[SCMediaInput isEqual:] */

long FUN_10b706844(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7068ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7068f8;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b7068f8;
          }
          goto LAB_10b7068ec;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7068f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b706914; end: 10b7069bf; -[SCMediaInput matchFileUrl:data:externalFileUrl:] */

void FUN_10b706914(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10b70699c;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_10b70699c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10b70699c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b70699c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7069c0; end: 10b7069fb; -[SCMediaInput .cxx_destruct] */

void FUN_10b7069c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7069fc; end: 10b706a7b; +[SCBaseMediaInput imageFileWithUrl:duration:] */

void FUN_10b7069fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affc0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
  uVar4 = param_4[1];
  uVar3 = *param_4;
  *(undefined8 *)(puVar2 + 0x60) = param_4[2];
  *(undefined8 *)(puVar2 + 0x58) = uVar4;
  *(undefined8 *)(puVar2 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b706a7c; end: 10b706afb; +[SCBaseMediaInput uiImageWithImage:duration:] */

void FUN_10b706a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affc0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
  uVar4 = param_4[1];
  uVar3 = *param_4;
  *(undefined8 *)(puVar2 + 0x40) = param_4[2];
  *(undefined8 *)(puVar2 + 0x38) = uVar4;
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b706afc; end: 10b706b67; +[SCBaseMediaInput videoAssetWithAsset:] */

void FUN_10b706afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affc0;
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



/* Entry: 10b706b68; end: 10b706bd3; +[SCBaseMediaInput videoDataWithData:] */

void FUN_10b706b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affc0;
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



/* Entry: 10b706bd4; end: 10b706c37; +[SCBaseMediaInput videoFileWithUrl:] */

void FUN_10b706bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affc0;
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



/* Entry: 10b706c38; end: 10b706c5b; -[SCBaseMediaInput copyWithZone:] */

undefined8 FUN_10b706c38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b706c5c; end: 10b706d23; -[SCBaseMediaInput hash] */

void FUN_10b706c5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = (ulong)*(uint *)(param_1 + 0x3c);
  lStack_68 = (long)*(int *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = (ulong)*(uint *)(param_1 + 0x5c);
  lStack_40 = (long)*(int *)(param_1 + 0x58);
  uStack_30 = *(undefined8 *)(param_1 + 0x60);
  puVar3 = &uStack_98;
  uStack_50 = uVar2;
  func_0x000107c3191c(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_c8 = PTR_PTR_11270a140;
  puStack_d0 = puVar3;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b706d24; end: 10b706d67; -[SCBaseMediaInput internalInit] */

void FUN_10b706d24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b706d68; end: 10b706ecf; -[SCBaseMediaInput isEqual:] */

long FUN_10b706d68(ulong param_1,undefined8 param_2,ulong param_3)

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
LAB_10b706eac:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b706eb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      uStack_48 = *(undefined8 *)(param_1 + 0x38);
      uStack_50 = *(undefined8 *)(param_1 + 0x30);
      uStack_40 = *(undefined8 *)(param_1 + 0x40);
      uStack_68 = *(undefined8 *)(param_3 + 0x38);
      uStack_70 = *(undefined8 *)(param_3 + 0x30);
      uStack_60 = *(undefined8 *)(param_3 + 0x40);
      puVar3 = &uStack_50;
      _CMTimeCompare(puVar3,&uStack_70);
      if ((int)puVar3 == 0) {
        uStack_48 = *(undefined8 *)(param_1 + 0x58);
        uStack_50 = *(undefined8 *)(param_1 + 0x50);
        uStack_40 = *(undefined8 *)(param_1 + 0x60);
        uStack_68 = *(undefined8 *)(param_3 + 0x58);
        uStack_70 = *(undefined8 *)(param_3 + 0x50);
        uStack_60 = *(undefined8 *)(param_3 + 0x60);
        puVar3 = &uStack_50;
        _CMTimeCompare(puVar3,&uStack_70);
        if ((int)puVar3 == 0) {
          lVar4 = *(long *)(param_1 + 0x10);
          if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)(param_1 + 0x18);
            if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x20);
              if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0))
              {
                lVar4 = *(long *)(param_1 + 0x28);
                if ((lVar4 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar4 != 0)
                   ) {
                  lVar4 = *(long *)(param_1 + 0x48);
                  if (lVar4 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_10b706eb0;
                  }
                  goto LAB_10b706eac;
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b706eb0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b706ed0; end: 10b707027; -[SCBaseMediaInput matchVideoFile:videoData:videoAsset:uiImage:imageFile:] */

void FUN_10b706ed0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_10b706fe8;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10b706fe8;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else {
    if (lVar2 != 2) {
      if (lVar2 == 3) {
        if (param_6 == 0) goto LAB_10b706fe8;
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        pcVar3 = *(code **)(param_6 + 0x10);
        uStack_58 = *(undefined8 *)(param_1 + 0x38);
        uStack_60 = *(undefined8 *)(param_1 + 0x30);
        uStack_50 = *(undefined8 *)(param_1 + 0x40);
        lVar2 = param_6;
      }
      else {
        if ((lVar2 != 4) || (param_7 == 0)) goto LAB_10b706fe8;
        uVar1 = *(undefined8 *)(param_1 + 0x48);
        pcVar3 = *(code **)(param_7 + 0x10);
        uStack_58 = *(undefined8 *)(param_1 + 0x58);
        uStack_60 = *(undefined8 *)(param_1 + 0x50);
        uStack_50 = *(undefined8 *)(param_1 + 0x60);
        lVar2 = param_7;
      }
      (*pcVar3)(lVar2,uVar1,&uStack_60);
      goto LAB_10b706fe8;
    }
    if (param_5 == 0) goto LAB_10b706fe8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b706fe8:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b707028; end: 10b70707b; -[SCBaseMediaInput .cxx_destruct] */

void FUN_10b707028(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b70707c; end: 10b7070c3; +[SCSegmentIndex global] */

void FUN_10b70707c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126affe8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7070c4; end: 10b70711b; +[SCSegmentIndex localWithIndex:] */

void FUN_10b7070c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126affe8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b70711c; end: 10b70713f; -[SCSegmentIndex copyWithZone:] */

undefined8 FUN_10b70711c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b707140; end: 10b707197; -[SCSegmentIndex hash] */

void FUN_10b707140(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3191c(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_11270a148;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b707198; end: 10b7071db; -[SCSegmentIndex internalInit] */

void FUN_10b707198(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a148;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7071dc; end: 10b707273; -[SCSegmentIndex isEqual:] */

bool FUN_10b7071dc(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b707274; end: 10b7072f7; -[SCSegmentIndex matchGlobal:local:] */

void FUN_10b707274(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7072f8; end: 10b7073db; +[SCMEExportedContentMetadata descriptor] */

void FUN_10b7072f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7eb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca7aa0,
                        &PTR____CFConstantStringClassReference_110f72e98,&PTR_DAT_1133bcc30,
                        &PTR_DAT_1133bcc48,1,0x10,0x1c);
    puRam00000001137f7eb8 = puVar1;
  }
  return;
}



/* Entry: 10b7073dc; end: 10b7073e7;  */

bool FUN_10b7073dc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7073e8; end: 10b70744f; +[SCMEInsecureExportedContentMetadata descriptor] */

void FUN_10b7073e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7ec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca7b40,
                        &PTR____CFConstantStringClassReference_110f72ed8,&PTR_DAT_1133bcc68,
                        &PTR_s_userAgent_1133bcc80,4,0x20,0x1c);
    puRam00000001137f7ec8 = puVar1;
  }
  return;
}



/* Entry: 10b707450; end: 10b70752b; -[SCMediaReferenceCreationNetworkRequestConfig initWithNetworkRequest:encryptionIv:encryptionKey:isEligibleForStreaming:] */

undefined1 *
FUN_10b707450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270a150;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b70752c; end: 10b707533; -[SCMediaReferenceCreationNetworkRequestConfig networkRequest] */

undefined8 FUN_10b70752c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b707534; end: 10b70753b; -[SCMediaReferenceCreationNetworkRequestConfig encryptionKey] */

undefined8 FUN_10b707534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b70753c; end: 10b707543; -[SCMediaReferenceCreationNetworkRequestConfig encryptionIv] */

undefined8 FUN_10b70753c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b707544; end: 10b70754b; -[SCMediaReferenceCreationNetworkRequestConfig isEligibleForStreaming] */

undefined1 FUN_10b707544(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b70754c; end: 10b707587; -[SCMediaReferenceCreationNetworkRequestConfig .cxx_destruct] */

void FUN_10b70754c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b707588; end: 10b70758f; -[SCSnapDocManagerServices snapDocThumbnailResolver] */

undefined8 FUN_10b707588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b707590; end: 10b707597; -[SCSnapDocManagerServices mediaReferenceFactory] */

undefined8 FUN_10b707590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b707598; end: 10b7075d3; -[SCSnapDocManagerServices .cxx_destruct] */

void FUN_10b707598(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7075d4; end: 10b707657; -[SCSnapDocAssociatedMediaResolvedInfo initWithStatus:error:] */

undefined1 *
FUN_10b7075d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a160;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b707658; end: 10b70765f; -[SCSnapDocAssociatedMediaResolvedInfo status] */

undefined8 FUN_10b707658(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b707660; end: 10b707667; -[SCSnapDocAssociatedMediaResolvedInfo error] */

undefined8 FUN_10b707660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b707668; end: 10b707673; -[SCSnapDocAssociatedMediaResolvedInfo .cxx_destruct] */

void FUN_10b707668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b707674; end: 10b7076f7; -[SCSnapDocAssociatedPlaybackMediaResolvedInfo initWithStatus:error:] */

undefined1 *
FUN_10b707674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a168;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7076f8; end: 10b7076ff; -[SCSnapDocAssociatedPlaybackMediaResolvedInfo status] */

undefined8 FUN_10b7076f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b707700; end: 10b707707; -[SCSnapDocAssociatedPlaybackMediaResolvedInfo error] */

undefined8 FUN_10b707700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b707708; end: 10b707713; -[SCSnapDocAssociatedPlaybackMediaResolvedInfo .cxx_destruct] */

void FUN_10b707708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b707714; end: 10b70774f; -[SCSnapDocThumbnailRequestConfigBuilder init] */

void FUN_10b707714(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270a170;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 10b707750; end: 10b70775b; -[SCSnapDocThumbnailRequestConfigBuilder setFallbackToLocalGeneration:localGeneratedThumbnailSize:] */

void FUN_10b707750(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  *(undefined1 *)(param_3 + 8) = param_5;
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  return;
}



/* Entry: 10b70775c; end: 10b70778f; -[SCSnapDocThumbnailRequestConfigBuilder buildConfig] */

void FUN_10b70775c(long param_1)

{
  _objc_alloc(PTR_PTR_1126e05e0);
  func_0x00010c0116e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b707790; end: 10b70782b; -[SCSnapDocKey initWithCoder:] */

undefined1 * FUN_10b707790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a178;
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
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b70782c; end: 10b7078b3; -[SCSnapDocKey initWithExternalId:mediaContextType:] */

undefined1 *
FUN_10b70782c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a178;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7078b4; end: 10b7078d7; -[SCSnapDocKey copyWithZone:] */

undefined8 FUN_10b7078b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7078d8; end: 10b707937; -[SCSnapDocKey encodeWithCoder:] */

void FUN_10b7078d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110efd938);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f72ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b707938; end: 10b7079a3; -[SCSnapDocKey hash] */

undefined8 * FUN_10b707938(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + 8);
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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b707a28;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(int *)(puVar2 + 1) != *(int *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b707a28;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b707a28;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b707a28:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b7079a4; end: 10b707a43; -[SCSnapDocKey isEqual:] */

long FUN_10b7079a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b707a28;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b707a28;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b707a28;
    }
  }
  lVar3 = 1;
LAB_10b707a28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b707a44; end: 10b707a4b; -[SCSnapDocKey externalId] */

undefined8 FUN_10b707a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b707a4c; end: 10b707a53; -[SCSnapDocKey mediaContextType] */

undefined4 FUN_10b707a4c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b707a54; end: 10b707a5f; -[SCSnapDocKey .cxx_destruct] */

void FUN_10b707a54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b707a60; end: 10b707b6b; -[SCSnapDocMediaPrefetchRequest initWithSnapDocKey:snapDoc:requestContext:prefetchSignals:] */

undefined1 *
FUN_10b707a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270a180;
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



/* Entry: 10b707b6c; end: 10b707b8f; -[SCSnapDocMediaPrefetchRequest copyWithZone:] */

undefined8 FUN_10b707b6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b707b90; end: 10b707c1b; -[SCSnapDocMediaPrefetchRequest hash] */

undefined8 * FUN_10b707b90(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b707ccc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b707cd8;
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
              goto LAB_10b707cd8;
            }
            goto LAB_10b707ccc;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b707cd8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b707c1c; end: 10b707cf3; -[SCSnapDocMediaPrefetchRequest isEqual:] */

long FUN_10b707c1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b707ccc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b707cd8;
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
              goto LAB_10b707cd8;
            }
            goto LAB_10b707ccc;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b707cd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b707cf4; end: 10b707cfb; -[SCSnapDocMediaPrefetchRequest snapDocKey] */

undefined8 FUN_10b707cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b707cfc; end: 10b707d03; -[SCSnapDocMediaPrefetchRequest snapDoc] */

undefined8 FUN_10b707cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b707d04; end: 10b707d0b; -[SCSnapDocMediaPrefetchRequest requestContext] */

undefined8 FUN_10b707d04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b707d0c; end: 10b707d13; -[SCSnapDocMediaPrefetchRequest prefetchSignals] */

undefined8 FUN_10b707d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b707d14; end: 10b707d5b; -[SCSnapDocMediaPrefetchRequest .cxx_destruct] */

void FUN_10b707d14(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b707d5c; end: 10b707de3; -[SCSnapDocThumbnailResult initWithData:success:] */

undefined1 *
FUN_10b707d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a188;
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



/* Entry: 10b707de4; end: 10b707e07; -[SCSnapDocThumbnailResult copyWithZone:] */

undefined8 FUN_10b707de4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b707e08; end: 10b707e73; -[SCSnapDocThumbnailResult hash] */

undefined8 * FUN_10b707e08(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b707ef8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b707ef8;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b707ef8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b707ef8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b707e74; end: 10b707f13; -[SCSnapDocThumbnailResult isEqual:] */

long FUN_10b707e74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b707ef8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b707ef8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b707ef8;
    }
  }
  lVar3 = 1;
LAB_10b707ef8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b707f14; end: 10b707f1b; -[SCSnapDocThumbnailResult data] */

undefined8 FUN_10b707f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b707f1c; end: 10b707f23; -[SCSnapDocThumbnailResult success] */

undefined1 FUN_10b707f1c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b707f24; end: 10b707f2f; -[SCSnapDocThumbnailResult .cxx_destruct] */

void FUN_10b707f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b707f30; end: 10b707f8b; -[SCSnapDocThumbnailRequestConfig initWithFallbackToLocalGeneration:localGeneratedThumbnailSize:] */

void FUN_10b707f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a190;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  return;
}



/* Entry: 10b707f8c; end: 10b707faf; -[SCSnapDocThumbnailRequestConfig copyWithZone:] */

undefined8 FUN_10b707f8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b707fb0; end: 10b70804b; -[SCSnapDocThumbnailRequestConfig hash] */

ulong * FUN_10b707fb0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar2 & 1) == 0) || (*(char *)((long)puVar1 + 8) != param_3[8])) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        uVar3 = 0;
        if (*(double *)((long)puVar1 + 0x18) == *(double *)(param_3 + 0x18)) {
          uVar3 = (uint)(*(double *)((long)puVar1 + 0x10) == *(double *)(param_3 + 0x10));
        }
        puVar5 = (undefined1 *)(ulong)uVar3;
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 10b70804c; end: 10b7080eb; -[SCSnapDocThumbnailRequestConfig isEqual:] */

bool FUN_10b70804c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
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
      if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if (*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) {
          bVar3 = *(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10);
        }
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b7080ec; end: 10b7080f3; -[SCSnapDocThumbnailRequestConfig fallbackToLocalGeneration] */

undefined1 FUN_10b7080ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7080f4; end: 10b7080fb; -[SCSnapDocThumbnailRequestConfig localGeneratedThumbnailSize] */

undefined1  [16] FUN_10b7080f4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10b7080fc; end: 10b708187; +[SCSDOMCommand descriptor] */

undefined * FUN_10b7080fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7ed0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca7eb0,
                        &PTR____CFConstantStringClassReference_110f72f18,&PTR_DAT_1133bcd08,
                        &PTR_s_version_1133bcd20,7,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001137f7ed0 = puVar1;
  }
  return puRam00000001137f7ed0;
}



/* Entry: 10b708188; end: 10b708213; +[SCSDOMAssetCommand descriptor] */

undefined * FUN_10b708188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7ed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca7f50,
                        &PTR____CFConstantStringClassReference_110f72f38,&PTR_DAT_1133bce08,
                        &PTR_DAT_1133bce60,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137f7ed8 = puVar1;
  }
  return puRam00000001137f7ed8;
}



/* Entry: 10b708214; end: 10b70827b; +[SCSDOMUpdateMediaReference descriptor] */

void FUN_10b708214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7ee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca7fa0,
                        &PTR____CFConstantStringClassReference_110f72f58,&PTR_DAT_1133bce08,
                        &PTR_s_mediaId_1133bce20,2,0x18,0x1c);
    puRam00000001137f7ee0 = puVar1;
  }
  return;
}



/* Entry: 10b70827c; end: 10b7082e3; +[SCSDOMAddPlainAsset descriptor] */

void FUN_10b70827c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7ee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca7ff0,
                        &PTR____CFConstantStringClassReference_110e85cb8,&PTR_DAT_1133bce08,
                        &PTR_DAT_1133bcec0,5,0x28,0x1c);
    puRam00000001137f7ee8 = puVar1;
  }
  return;
}



/* Entry: 10b7082e4; end: 10b70834b; +[SCSDOMApplyAlternativeAsset descriptor] */

void FUN_10b7082e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7ef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca8040,
                        &PTR____CFConstantStringClassReference_110f72f78,&PTR_DAT_1133bce08,
                        &PTR_DAT_1133bcf60,6,0x28,0x1c);
    puRam00000001137f7ef0 = puVar1;
  }
  return;
}



/* Entry: 10b70834c; end: 10b7083d7; +[SCSDOMEntityCommonCommand descriptor] */

undefined * FUN_10b70834c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7ef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca80e0,
                        &PTR____CFConstantStringClassReference_110f72f98,&PTR_DAT_1133bd028,
                        &PTR_DAT_1133bd260,8,0x48,0x1c);
    func_0x00010c229040();
    puRam00000001137f7ef8 = puVar1;
  }
  return puRam00000001137f7ef8;
}



/* Entry: 10b7083d8; end: 10b70843f; +[SCSDOMDeleteEntity descriptor] */

void FUN_10b7083d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7f00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca8130,
                        &PTR____CFConstantStringClassReference_110f72fb8,&PTR_DAT_1133bd028,
                        &PTR_DAT_1133bd040,2,0x10,0x1c);
    puRam00000001137f7f00 = puVar1;
  }
  return;
}



/* Entry: 10b708440; end: 10b7084a7; +[SCSDOMSetEntityTime descriptor] */

void FUN_10b708440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7f08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca8180,
                        &PTR____CFConstantStringClassReference_110f72fd8,&PTR_DAT_1133bd028,
                        &PTR_DAT_1133bd200,3,0x18,0x1c);
    puRam00000001137f7f08 = puVar1;
  }
  return;
}



/* Entry: 10b7084a8; end: 10b70850f; +[SCSDOMAddTagToEntity descriptor] */

void FUN_10b7084a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7f10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca81d0,
                        &PTR____CFConstantStringClassReference_110f72ff8,&PTR_DAT_1133bd028,
                        &PTR_DAT_1133bd080,2,0x18,0x1c);
    puRam00000001137f7f10 = puVar1;
  }
  return;
}


