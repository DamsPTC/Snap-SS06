/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af2753c; end: 10af2761f; +[SCAuthTivsTimestamp descriptor] */

void FUN_10af2753c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16e60,
                        &PTR____CFConstantStringClassReference_110f37b98,&PTR_DAT_11332f1b8,
                        &PTR_DAT_11332f290,2,0x10,0x1c);
    puRam00000001137efb18 = puVar1;
  }
  return;
}



/* Entry: 10af27620; end: 10af2762b;  */

bool FUN_10af27620(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 10af2762c; end: 10af27693; +[TransactionData descriptor] */

void FUN_10af2762c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16f50,
                        &PTR____CFConstantStringClassReference_110f37bd8,&PTR_DAT_11332f610,
                        &PTR_s_transactionId_11332f6c8,9,0x48,0x1c);
    puRam00000001137efb28 = puVar1;
  }
  return;
}



/* Entry: 10af27694; end: 10af276fb; +[TransactionType descriptor] */

void FUN_10af27694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16fa0,
                        &PTR____CFConstantStringClassReference_110f37bf8,&PTR_DAT_11332f610,0,0,4,
                        0x1c);
    puRam00000001137efb30 = puVar1;
  }
  return;
}



/* Entry: 10af276fc; end: 10af277df; +[SurfaceData descriptor] */

void FUN_10af276fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16ff0,
                        &PTR____CFConstantStringClassReference_110f37c18,&PTR_DAT_11332f610,
                        &PTR_s_surface_11332f628,5,0x28,0x1c);
    puRam00000001137efb38 = puVar1;
  }
  return;
}



/* Entry: 10af277e0; end: 10af277eb;  */

bool FUN_10af277e0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af277ec; end: 10af278cf; +[Surface descriptor] */

void FUN_10af277ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17090,
                        &PTR____CFConstantStringClassReference_110f37c58,&PTR_DAT_11332f7e8,0,0,4,
                        0x1c);
    puRam00000001137efb48 = puVar1;
  }
  return;
}



/* Entry: 10af278d0; end: 10af278db;  */

bool FUN_10af278d0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10af278dc; end: 10af27957;  */

undefined * FUN_10af278dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efb58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f37c98,
                        &UNK_10e539828,&UNK_10e539868,7,FUN_10af27958,0);
    do {
      if (puRam00000001137efb58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efb58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efb58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efb58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efb58;
}



/* Entry: 10af27958; end: 10af27963;  */

bool FUN_10af27958(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10af27964; end: 10af279cb; +[SCAuthTivsTextColor descriptor] */

void FUN_10af27964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17130,
                        &PTR____CFConstantStringClassReference_110df02f8,&PTR_DAT_11332f800,0,0,4,
                        0x1c);
    puRam00000001137efb60 = puVar1;
  }
  return;
}



/* Entry: 10af279cc; end: 10af27a33; +[SCAuthTivsButtonColor descriptor] */

void FUN_10af279cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17180,
                        &PTR____CFConstantStringClassReference_110f37cb8,&PTR_DAT_11332f800,0,0,4,
                        0x1c);
    puRam00000001137efb68 = puVar1;
  }
  return;
}



/* Entry: 10af27a34; end: 10af27a3f; -[SCDeltaSyncProcessorScope .cxx_destruct] */

void FUN_10af27a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af27a40; end: 10af27a47; -[SCDeltaSyncServices deltaSyncService] */

undefined8 FUN_10af27a40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af27a48; end: 10af27a77; -[SCDeltaSyncServices .cxx_destruct] */

void FUN_10af27a48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af27a78; end: 10af27aa7; -[SCDeltaSyncKey .cxx_destruct] */

void FUN_10af27a78(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af27aa8; end: 10af27b03; +[SCDeltaSyncIdentifier idWithId:] */

void FUN_10af27aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0438;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27b04; end: 10af27bb3; -[SCDeltaSyncIdentifier isEqual:] */

long FUN_10af27b04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af27b98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10af27b98;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10af27b98;
    }
  }
  lVar3 = 1;
LAB_10af27b98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af27bb4; end: 10af27bbf; -[SCDeltaSyncIdentifier .cxx_destruct] */

void FUN_10af27bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af27bc0; end: 10af27c1b; +[SCDeltaSyncValue boolValueWithValue:] */

void FUN_10af27bc0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8138;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x18] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27c1c; end: 10af27c87; +[SCDeltaSyncValue dataWithValue:] */

void FUN_10af27c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8138;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27c88; end: 10af27ce3; +[SCDeltaSyncValue doubleValueWithValue:] */

void FUN_10af27c88(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8138;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27ce4; end: 10af27d3f; +[SCDeltaSyncValue epochTimeMsWithValue:] */

void FUN_10af27ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8138;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27d40; end: 10af27dd7; +[SCDeltaSyncValue itemKeyWithGroupKey:pathComponents:] */

void FUN_10af27d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b8138;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27dd8; end: 10af27e43; +[SCDeltaSyncValue listWithValue:] */

void FUN_10af27dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8138;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27e44; end: 10af27e9f; +[SCDeltaSyncValue longValueWithValue:] */

void FUN_10af27e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8138;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27ea0; end: 10af27f0b; +[SCDeltaSyncValue mapWithValue:] */

void FUN_10af27ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8138;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27f0c; end: 10af27f57; +[SCDeltaSyncValue none] */

void FUN_10af27f0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8138;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af27f58; end: 10af27fbb; +[SCDeltaSyncValue stringWithValue:] */

void FUN_10af27f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8138;
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



/* Entry: 10af27fbc; end: 10af27fdf; -[SCDeltaSyncValue copyWithZone:] */

undefined8 FUN_10af27fbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af27fe0; end: 10af280bf; -[SCDeltaSyncValue hash] */

void FUN_10af27fe0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  lStack_68 = -lVar1;
  if (-1 < lVar1) {
    lStack_68 = lVar1;
  }
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_112702350;
  puStack_b0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af280c0; end: 10af28103; -[SCDeltaSyncValue internalInit] */

void FUN_10af280c0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112702350;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af28104; end: 10af2827f; -[SCDeltaSyncValue isEqual:] */

long FUN_10af28104(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af28258:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af28264;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x58);
        if (lVar4 != *(long *)(param_3 + 0x58)) {
          func_0x00010c071ae0();
          goto LAB_10af28264;
        }
        goto LAB_10af28258;
      }
    }
    lVar4 = 0;
  }
LAB_10af28264:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af28280; end: 10af2847b; -[SCDeltaSyncValue matchString:boolValue:longValue:doubleValue:epochTimeMs:data:map:list:itemKey:none:] */

void FUN_10af28280(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 == 0) goto LAB_10af283f8;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
    break;
  case 1:
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined1 *)(param_1 + 0x18));
    }
    goto LAB_10af283f8;
  case 2:
    if (param_5 == 0) goto LAB_10af283f8;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    break;
  case 3:
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(*(undefined8 *)(param_1 + 0x28),param_6);
    }
    goto LAB_10af283f8;
  case 4:
    if (param_7 == 0) goto LAB_10af283f8;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    pcVar3 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    break;
  case 5:
    if (param_8 == 0) goto LAB_10af283f8;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
    break;
  case 6:
    if (param_9 == 0) goto LAB_10af283f8;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    pcVar3 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    break;
  case 7:
    if (param_10 == 0) goto LAB_10af283f8;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    pcVar3 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    break;
  case 8:
    if (param_11 != 0) {
      (**(code **)(param_11 + 0x10))
                (param_11,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    }
    goto LAB_10af283f8;
  case 9:
    if (param_12 != 0) {
      (**(code **)(param_12 + 0x10))(param_12);
    }
  default:
    goto LAB_10af283f8;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_10af283f8:
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 10af2847c; end: 10af284db; -[SCDeltaSyncValue .cxx_destruct] */

void FUN_10af2847c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af284dc; end: 10af28553; -[SCDeltaSyncDeletion initWithPathComponents:] */

undefined1 * FUN_10af284dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702358;
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



/* Entry: 10af28554; end: 10af28577; -[SCDeltaSyncDeletion copyWithZone:] */

undefined8 FUN_10af28554(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af28578; end: 10af2857f; -[SCDeltaSyncDeletion hash] */

void FUN_10af28578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af28580; end: 10af2860f; -[SCDeltaSyncDeletion isEqual:] */

long FUN_10af28580(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af285f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10af285f4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af285f4;
    }
  }
  lVar3 = 1;
LAB_10af285f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af28610; end: 10af28617; -[SCDeltaSyncDeletion pathComponents] */

undefined8 FUN_10af28610(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af28618; end: 10af28623; -[SCDeltaSyncDeletion .cxx_destruct] */

void FUN_10af28618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af28624; end: 10af286cf; -[SCDeltaSyncItemKey initWithGroupKey:pathComponents:] */

undefined1 *
FUN_10af28624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702360;
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



/* Entry: 10af286d0; end: 10af286f3; -[SCDeltaSyncItemKey copyWithZone:] */

undefined8 FUN_10af286d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af286f4; end: 10af28767; -[SCDeltaSyncItemKey hash] */

undefined8 * FUN_10af286f4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af287e8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af287f4;
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
          goto LAB_10af287f4;
        }
        goto LAB_10af287e8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af287f4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af28768; end: 10af2880f; -[SCDeltaSyncItemKey isEqual:] */

long FUN_10af28768(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af287e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af287f4;
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
          goto LAB_10af287f4;
        }
        goto LAB_10af287e8;
      }
    }
    lVar3 = 0;
  }
LAB_10af287f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af28810; end: 10af28817; -[SCDeltaSyncItemKey groupKey] */

undefined8 FUN_10af28810(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af28818; end: 10af2881f; -[SCDeltaSyncItemKey pathComponents] */

undefined8 FUN_10af28818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af28820; end: 10af2884f; -[SCDeltaSyncItemKey .cxx_destruct] */

void FUN_10af28820(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af28850; end: 10af28937; -[SCDeltaSyncItem initWithItemKey:properties:lastModifiedVersion:lastModifiedTime:] */

undefined1 *
FUN_10af28850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112702368;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af28938; end: 10af2895b; -[SCDeltaSyncItem copyWithZone:] */

undefined8 FUN_10af28938(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2895c; end: 10af289df; -[SCDeltaSyncItem hash] */

undefined8 * FUN_10af2895c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
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
LAB_10af28a88:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af28a94;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10af28a94;
          }
          goto LAB_10af28a88;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af28a94:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af289e0; end: 10af28aaf; -[SCDeltaSyncItem isEqual:] */

long FUN_10af289e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af28a88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af28a94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10af28a94;
          }
          goto LAB_10af28a88;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af28a94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af28ab0; end: 10af28ab7; -[SCDeltaSyncItem itemKey] */

undefined8 FUN_10af28ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af28ab8; end: 10af28abf; -[SCDeltaSyncItem properties] */

undefined8 FUN_10af28ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af28ac0; end: 10af28ac7; -[SCDeltaSyncItem lastModifiedVersion] */

undefined8 FUN_10af28ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af28ac8; end: 10af28acf; -[SCDeltaSyncItem lastModifiedTime] */

undefined8 FUN_10af28ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af28ad0; end: 10af28b0b; -[SCDeltaSyncItem .cxx_destruct] */

void FUN_10af28ad0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af28b0c; end: 10af28b2f; -[SCDeltaSyncClientType copyWithZone:] */

undefined8 FUN_10af28b0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af28b30; end: 10af28b37; -[SCDeltaSyncClientType hash] */

void FUN_10af28b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af28b38; end: 10af28bc7; -[SCDeltaSyncClientType isEqual:] */

long FUN_10af28b38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af28bac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10af28bac;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af28bac;
    }
  }
  lVar3 = 1;
LAB_10af28bac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af28bc8; end: 10af28bd3; -[SCDeltaSyncClientType .cxx_destruct] */

void FUN_10af28bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af28bd4; end: 10af28c47; -[SCUserPropertiesServices initWithSnapchatUserPropertiesService:] */

undefined1 * FUN_10af28bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702378;
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



/* Entry: 10af28c48; end: 10af28c4f; -[SCUserPropertiesServices snapchatUserPropertiesService] */

undefined8 FUN_10af28c48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af28c50; end: 10af28c5b; -[SCUserPropertiesServices .cxx_destruct] */

void FUN_10af28c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af28c5c; end: 10af28c7f; -[SCUserPropertiesKey copyWithZone:] */

undefined8 FUN_10af28c5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af28c80; end: 10af28d1f; -[SCUserPropertiesKey isEqual:] */

long FUN_10af28c80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af28d04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10af28d04;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10af28d04;
    }
  }
  lVar3 = 1;
LAB_10af28d04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af28d20; end: 10af28d2b; -[SCUserPropertiesKey .cxx_destruct] */

void FUN_10af28d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af28d2c; end: 10af28d37; -[SCComposerFoundationCallbackCancelable pushToValdiMarshaller:] */

undefined8 FUN_10af28d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b20;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 10af28d38; end: 10af28d87;  */

undefined8 FUN_10af28d38(double param_1,undefined8 param_2)

{
  int iVar1;
  
  _objc_retain();
  func_0x00010bfe2ee0(param_2);
  iVar1 = (int)param_1;
  func_0x00010c0b5940(param_2);
  _objc_release(param_2);
  return CONCAT44(iVar1,(int)param_1);
}



/* Entry: 10af28d88; end: 10af28e3f;  */

void FUN_10af28d88(ulong param_1)

{
  _objc_alloc(PTR_PTR_1126dea28);
  func_0x00010c027d60((double)(param_1 & 0xffffffff),(double)(param_1 >> 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af28e40; end: 10af28e4b;  */

bool FUN_10af28e40(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af28e4c; end: 10af28ec7;  */

undefined * FUN_10af28e4c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efb78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f37d58,
                        &UNK_10e5398c0,&UNK_10e539944,5,FUN_10af28ec8,0);
    do {
      if (puRam00000001137efb78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efb78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efb78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efb78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efb78;
}



/* Entry: 10af28ec8; end: 10af28ed3;  */

bool FUN_10af28ec8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10af28ed4; end: 10af28f4f;  */

undefined * FUN_10af28ed4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efb80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f37d78,
                        &UNK_10e539958,&UNK_10e539980,4,FUN_10af28f50,0);
    do {
      if (puRam00000001137efb80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efb80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efb80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efb80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efb80;
}



/* Entry: 10af28f50; end: 10af28f5b;  */

bool FUN_10af28f50(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af28f5c; end: 10af28fd7;  */

undefined * FUN_10af28f5c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efb88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f37d98,
                        &UNK_10e539990,&UNK_10e5399ac,3,FUN_10af28fd8,0);
    do {
      if (puRam00000001137efb88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efb88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efb88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efb88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efb88;
}



/* Entry: 10af28fd8; end: 10af28fe3;  */

bool FUN_10af28fd8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af28fe4; end: 10af2905f;  */

undefined * FUN_10af28fe4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efb90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f37db8,
                        &UNK_10e5399b8,&UNK_10e5399d8,2,FUN_10af29060,0);
    do {
      if (puRam00000001137efb90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efb90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efb90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efb90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efb90;
}



/* Entry: 10af29060; end: 10af2906b;  */

bool FUN_10af29060(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af2906c; end: 10af290e7;  */

undefined * FUN_10af2906c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efb98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f37dd8,
                        &UNK_10e5399e0,&UNK_10e539a10,3,FUN_10af290e8,0);
    do {
      if (puRam00000001137efb98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efb98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efb98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efb98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efb98;
}



/* Entry: 10af290e8; end: 10af290f3;  */

bool FUN_10af290e8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af290f4; end: 10af2916f;  */

undefined * FUN_10af290f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efba0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f37df8,
                        &UNK_10e539a1c,&UNK_10e539a48,3,FUN_10af29170,0);
    do {
      if (puRam00000001137efba0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efba0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efba0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efba0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efba0;
}



/* Entry: 10af29170; end: 10af2917b;  */

bool FUN_10af29170(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af2917c; end: 10af291e3; +[SCMusicPickerLayout descriptor] */

void FUN_10af2917c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c175e0,
                        &PTR____CFConstantStringClassReference_110f37e18,&PTR_DAT_11332f848,
                        &PTR_DAT_11332f940,2,0x10,0x1c);
    puRam00000001137efba8 = puVar1;
  }
  return;
}



/* Entry: 10af291e4; end: 10af2924b; +[SCMusicPickerLayoutTab descriptor] */

void FUN_10af291e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17630,
                        &PTR____CFConstantStringClassReference_110f37e38,&PTR_DAT_11332f848,
                        &PTR_s_title_11332f980,2,0x18,0x1c);
    puRam00000001137efbb0 = puVar1;
  }
  return;
}



/* Entry: 10af2924c; end: 10af292d7; +[SCMusicPickerLayoutPageReference descriptor] */

undefined * FUN_10af2924c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17680,
                        &PTR____CFConstantStringClassReference_110f37e58,&PTR_DAT_11332f848,
                        &PTR_DAT_11332fce0,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137efbb8 = puVar1;
  }
  return puRam00000001137efbb8;
}



/* Entry: 10af292d8; end: 10af2933f; +[SCMusicPickerLayoutPageEmptyStateInfo descriptor] */

void FUN_10af292d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c176d0,
                        &PTR____CFConstantStringClassReference_110f37e78,&PTR_DAT_11332f848,
                        &PTR_s_title_11332f9c0,2,0x18,0x1c);
    puRam00000001137efbc0 = puVar1;
  }
  return;
}



/* Entry: 10af29340; end: 10af293a7; +[SCMusicPickerLayoutPage descriptor] */

void FUN_10af29340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17720,
                        &PTR____CFConstantStringClassReference_110f37e98,&PTR_DAT_11332f848,
                        &PTR_DAT_11332fa00,2,0x18,0x1c);
    puRam00000001137efbc8 = puVar1;
  }
  return;
}



/* Entry: 10af293a8; end: 10af29433; +[SCMusicPickerLayoutPageSection descriptor] */

undefined * FUN_10af293a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17770,
                        &PTR____CFConstantStringClassReference_110f37eb8,&PTR_DAT_11332f848,
                        &PTR_s_title_1133301e0,0xd,0x70,0x1c);
    func_0x00010c229040();
    puRam00000001137efbd0 = puVar1;
  }
  return puRam00000001137efbd0;
}



/* Entry: 10af29434; end: 10af294af; +[SCMusicPickerLayoutPageSection_TrackListSection descriptor] */

undefined * FUN_10af29434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c177c0,
                        &PTR____CFConstantStringClassReference_110f37ed8,&PTR_DAT_11332f848,
                        &PTR_DAT_11332fb00,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137efbd8 = puVar1;
  }
  return puRam00000001137efbd8;
}



/* Entry: 10af294b0; end: 10af2952b; +[SCMusicPickerLayoutPageSection_MyCustomSoundsSection descriptor] */

undefined * FUN_10af294b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17810,
                        &PTR____CFConstantStringClassReference_110f37ef8,&PTR_DAT_11332f848,
                        &PTR_DAT_11332f860,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137efbe0 = puVar1;
  }
  return puRam00000001137efbe0;
}



/* Entry: 10af2952c; end: 10af295a7; +[SCMusicPickerLayoutPageSection_PlaylistGridSection descriptor] */

undefined * FUN_10af2952c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17c20,
                        &PTR____CFConstantStringClassReference_110f37f18,&PTR_DAT_11332f848,
                        &PTR_DAT_11332fa40,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137efbe8 = puVar1;
  }
  return puRam00000001137efbe8;
}



/* Entry: 10af295a8; end: 10af2962b; +[SCMusicPickerLayoutPageSection_PlaylistGridSection_Entry descriptor] */

undefined * FUN_10af295a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17c48,
                        &PTR____CFConstantStringClassReference_110f29b38,&PTR_DAT_11332f848,
                        &PTR_s_title_11332fb60,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137efbf0 = puVar1;
  }
  return puRam00000001137efbf0;
}



/* Entry: 10af2962c; end: 10af296a7; +[SCMusicPickerLayoutPageSection_PlaylistListSection descriptor] */

undefined * FUN_10af2962c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efbf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17c70,
                        &PTR____CFConstantStringClassReference_110f37f38,&PTR_DAT_11332f848,
                        &PTR_DAT_11332f880,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137efbf8 = puVar1;
  }
  return puRam00000001137efbf8;
}



/* Entry: 10af296a8; end: 10af2972b; +[SCMusicPickerLayoutPageSection_PlaylistListSection_Entry descriptor] */

undefined * FUN_10af296a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efc00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17c98,
                        &PTR____CFConstantStringClassReference_110f29b38,&PTR_DAT_11332f848,
                        &PTR_s_title_11332fd60,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137efc00 = puVar1;
  }
  return puRam00000001137efc00;
}



/* Entry: 10af2972c; end: 10af297a7; +[SCMusicPickerLayoutPageSection_ArtistListSection descriptor] */

undefined * FUN_10af2972c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efc08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17cc0,
                        &PTR____CFConstantStringClassReference_110f37f58,&PTR_DAT_11332f848,
                        &PTR_DAT_11332fa80,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137efc08 = puVar1;
  }
  return puRam00000001137efc08;
}



/* Entry: 10af297a8; end: 10af2982b; +[SCMusicPickerLayoutPageSection_ArtistListSection_Entry descriptor] */

undefined * FUN_10af297a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efc10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17ce8,
                        &PTR____CFConstantStringClassReference_110f29b38,&PTR_DAT_11332f848,
                        &PTR_s_title_11332fde0,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137efc10 = puVar1;
  }
  return puRam00000001137efc10;
}



/* Entry: 10af2982c; end: 10af298a7; +[SCMusicPickerLayoutPageSection_MusicItemPreviewSection descriptor] */

undefined * FUN_10af2982c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efc18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17d10,
                        &PTR____CFConstantStringClassReference_110f37f78,&PTR_DAT_11332f848,
                        &PTR_s_itemsArray_11332ff60,5,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137efc18 = puVar1;
  }
  return puRam00000001137efc18;
}



/* Entry: 10af298a8; end: 10af29943; +[SCMusicPickerLayoutPageSection_MusicItemPreviewSection_MusicPlaylist descriptor] */

undefined * FUN_10af298a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efc20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17d38,
                        &PTR____CFConstantStringClassReference_110f37f98,&PTR_DAT_11332f848,
                        &PTR_DAT_11332f8a0,1,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c17d10);
    puRam00000001137efc20 = puVar1;
  }
  return puRam00000001137efc20;
}



/* Entry: 10af29944; end: 10af299c7; +[SCMusicPickerLayoutPageSection_MusicItemPreviewSection_MusicPlaylist_PlaylistBitmojiItem descriptor] */

undefined * FUN_10af29944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efc28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c17d60,
                        &PTR____CFConstantStringClassReference_110f37fb8,&PTR_DAT_11332f848,
                        &PTR_s_title_113330000,5,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137efc28 = puVar1;
  }
  return puRam00000001137efc28;
}


