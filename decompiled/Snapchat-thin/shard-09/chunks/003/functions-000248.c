/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c776b0; end: 106c778cb;  */

void FUN_106c776b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf063a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0f5800(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfacbe0(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf2ce20(PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
  func_0x00010bf6a0e0(PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c279880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126ae560;
    _objc_retain(param_2);
    _objc_retain(puVar2);
    _objc_opt_new(puVar1);
    FUN_106c77964(0,0x4024000000000000);
    _objc_release(param_2);
    _objc_release(puVar2);
    puVar7 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c778cc; end: 106c77963;  */

void FUN_106c778cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  FUN_106c77964(0,0x4024000000000000);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c77964; end: 106c77a8b;  */

void FUN_106c77964(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  double dVar1;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  dVar1 = param_1;
  if (0 < param_6) {
    dVar1 = (double)(param_6 - 1);
    _exp2();
    if (param_2 <= dVar1) {
      dVar1 = param_2;
    }
    if (dVar1 <= param_1) {
      dVar1 = param_1;
    }
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f7fe0(dVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 106c77a8c; end: 106c77b1f;  */

void FUN_106c77a8c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c297260(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 106c77b20; end: 106c77b33;  */

void FUN_106c77b20(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106c77b34; end: 106c77d8f;  */

void FUN_106c77b34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x30);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e7e018;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7e018);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3,param_2,ppuVar2);
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x106c77c48;
    puStack_70 = &UNK_11096ce30;
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    ppuVar2 = *(undefined ***)(param_1 + 0x20);
    _objc_retain(ppuVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    ppuStack_68 = ppuVar2;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = uVar3;
    _objc_retain(uVar4);
    uStack_38 = *(undefined8 *)(param_1 + 0x50);
    uStack_40 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = uVar4;
    func_0x00010c297260(lVar1,param_2,&puStack_88,*(undefined8 *)(param_1 + 0x28));
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    ppuVar2 = ppuStack_68;
  }
  _objc_release(ppuVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106c77d90; end: 106c77ef3;  */

void FUN_106c77d90(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = param_2;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010c269d40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110db1dd8;
  func_0x000106c77cd0(&PTR____CFConstantStringClassReference_110db1dd8,
                      &PTR____CFConstantStringClassReference_110e7e038);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0b7020(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release();
  func_0x000106c78edc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(puVar5);
    puVar3 = puVar5;
  }
  else {
    puVar3 = PTR_PTR_1126d1e00;
    _objc_alloc(PTR_PTR_1126d1e00);
    func_0x00010c044de0();
  }
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c77ef4; end: 106c7859b;  */

void FUN_106c77ef4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110db1dd8;
  func_0x000106c77cd0(&PTR____CFConstantStringClassReference_110db1dd8,
                      &PTR____CFConstantStringClassReference_110e7e038);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf56360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126d1e08;
  _objc_alloc(PTR_PTR_1126d1e08);
  func_0x00010c044de0();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c7859c; end: 106c7860f; -[SCPlusTestComposerGrpcService initWithService:] */

undefined1 * FUN_106c7859c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f60a8;
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



/* Entry: 106c78610; end: 106c78813; -[SCPlusTestComposerGrpcService unaryCallWithMethod:request:options:callback:] */

void FUN_106c78610(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_5;
  func_0x00010befd000(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(puVar3,param_2,lVar2 + 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x000106c78edc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,lVar1,&PTR____CFConstantStringClassReference_110dadcb8);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010befd000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_5;
    func_0x00010befd000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar3,param_2,lVar1);
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126bfdd8;
  _objc_alloc(PTR_PTR_1126bfdd8);
  lVar1 = param_5;
  func_0x00010c142440(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010bf3d540(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c137440(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b00(puVar4,param_2,lVar1,puVar3,lVar2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27f2e0(uVar6,param_2,param_3,param_4,puVar4,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106c78814; end: 106c78a3b; -[SCPlusTestComposerGrpcService serverStreamingCallWithMethod:request:options:callback:onRetry:] */

void FUN_106c78814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_5;
  func_0x00010befd000(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(puVar3,param_2,lVar2 + 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x000106c78edc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,lVar1,&PTR____CFConstantStringClassReference_110dadcb8);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010befd000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_5;
    func_0x00010befd000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar3,param_2,lVar1);
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126bfdd8;
  _objc_alloc(PTR_PTR_1126bfdd8);
  lVar1 = param_5;
  func_0x00010c142440(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010bf3d540(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c137440(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b00(puVar4,param_2,lVar1,puVar3,lVar2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15f5e0(uVar6,param_2,param_3,param_4,puVar4,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106c78a3c; end: 106c78a47; -[SCPlusTestComposerGrpcService .cxx_destruct] */

void FUN_106c78a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c78a48; end: 106c78abb; -[SCPlusGrpcService initWithService:] */

undefined1 * FUN_106c78a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f60b0;
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



/* Entry: 106c78abc; end: 106c78c4b; -[SCPlusGrpcService unaryCall:request:callOptionsBuilder:handler:] */

void FUN_106c78abc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_6;
  _objc_retain();
  func_0x000106c78edc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar4 = PTR_PTR_1126ae748;
  if (lVar2 != 0) {
    puVar3 = param_5;
    func_0x00010bf21f60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c271a40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_5);
    param_5 = puVar4;
  }
  func_0x00010c27f2c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106c78c4c; end: 106c78c57; -[SCPlusGrpcService .cxx_destruct] */

void FUN_106c78c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c78c58; end: 106c78cbf;  */

undefined8 FUN_106c78c58(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  _objc_retain();
  iVar1 = (int)uVar2;
  func_0x000100150168();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    func_0x000100150168();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110e7e1d8,0,0);
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106c78cc0; end: 106c78d6f;  */

bool FUN_106c78cc0(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c252d60();
  if ((lVar1 == 2) || (lVar1 = param_2, func_0x00010c252d60(), lVar1 == 3)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar4 = param_1;
    _objc_release(puVar2);
    func_0x00010c2607a0(param_2);
    param_1 = dVar4 - param_1;
    func_0x00010c2607a0(param_2);
    bVar3 = false;
    if (param_1 <= 86400.0) {
      bVar3 = 0.0 < dVar4;
    }
  }
  else {
    bVar3 = false;
  }
  _objc_release(param_2);
  return bVar3;
}



/* Entry: 106c78d70; end: 106c78e07; -[SCPlusMainThreadLocalTweakToken initWithCollection:name:action:] */

undefined8 * FUN_106c78d70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f60b8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106c78e08;
    puStack_40 = &UNK_110842e18;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_58);
    _objc_release(puStack_38);
  }
  return puVar1;
}



/* Entry: 106c78e08; end: 106c78e17;  */

void FUN_106c78e08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c78e18; end: 106c78ecb; -[SCPlusMainThreadLocalTweakToken dealloc] */

void FUN_106c78e18(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  if (lVar2 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106c78ecc;
    puStack_30 = &UNK_110842e18;
    _objc_retain(lVar2);
    lStack_28 = lVar2;
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(lVar2);
  puStack_50 = PTR_PTR_1126f60b8;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106c78ecc; end: 106c78ecf;  */

void FUN_106c78ecc(void)

{
  return;
}



/* Entry: 106c78ed0; end: 106c78f3f; -[SCPlusMainThreadLocalTweakToken .cxx_destruct] */

void FUN_106c78ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c78f40; end: 106c78f5f;  */

undefined8 FUN_106c78f40(void)

{
  func_0x00010c067fc0(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8d10);
  return 0;
}



/* Entry: 106c78f60; end: 106c79023; -[SCPlusValueProviderImpl initWithCurrentValueProvider:] */

undefined8 FUN_106c78f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106c79024;
  puStack_40 = &UNK_1109319a8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_11096cef0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007aa0(param_1,param_2,&puStack_58,puVar1);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106c79024; end: 106c7903b;  */

void FUN_106c79024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106c7902c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106c7903c; end: 106c79087; -[SCPlusValueProviderImpl invalidate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c7903c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275ba34);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c79088; end: 106c790d7; -[SCPlusValueProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c79088(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275ba34,0);
  _objc_storeStrong(param_1 + _DAT_11275ba38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ba30,0);
  return;
}



/* Entry: 106c790d8; end: 106c791af; -[SCPlusAppIcon initWithName:addedTimestampMs:deprecatedTimestampMs:] */

undefined1 *
FUN_106c790d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f60c8;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c791b0; end: 106c791d3; -[SCPlusAppIcon copyWithZone:] */

undefined8 FUN_106c791b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c791d4; end: 106c79253; -[SCPlusAppIcon hash] */

undefined8 * FUN_106c791d4(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_106c792ec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c792f8;
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
            goto LAB_106c792f8;
          }
          goto LAB_106c792ec;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106c792f8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106c79254; end: 106c79313; -[SCPlusAppIcon isEqual:] */

long FUN_106c79254(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c792ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c792f8;
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
            goto LAB_106c792f8;
          }
          goto LAB_106c792ec;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106c792f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c79314; end: 106c7931b; -[SCPlusAppIcon name] */

undefined8 FUN_106c79314(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c7931c; end: 106c79323; -[SCPlusAppIcon addedTimestampMs] */

undefined8 FUN_106c7931c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c79324; end: 106c7932b; -[SCPlusAppIcon deprecatedTimestampMs] */

undefined8 FUN_106c79324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c7932c; end: 106c79367; -[SCPlusAppIcon .cxx_destruct] */

void FUN_106c7932c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c79368; end: 106c793cf; +[SnapPrivacy descriptor] */

void FUN_106c79368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6fb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27680,
                        &PTR____CFConstantStringClassReference_110dd98d8,&PTR_DAT_11317a948,0,0,4,
                        0x1c);
    puRam00000001136c6fb8 = puVar1;
  }
  return;
}



/* Entry: 106c793d0; end: 106c79437; +[StoryPrivacy descriptor] */

void FUN_106c793d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6fc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b276d0,
                        &PTR____CFConstantStringClassReference_110e7e278,&PTR_DAT_11317a948,0,0,4,
                        0x1c);
    puRam00000001136c6fc0 = puVar1;
  }
  return;
}



/* Entry: 106c79438; end: 106c7949f; +[QuickAddPrivacy descriptor] */

void FUN_106c79438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6fc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27720,
                        &PTR____CFConstantStringClassReference_110dd9838,&PTR_DAT_11317a948,0,0,4,
                        0x1c);
    puRam00000001136c6fc8 = puVar1;
  }
  return;
}



/* Entry: 106c794a0; end: 106c79507; +[SaturnPrivacy descriptor] */

void FUN_106c794a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6fd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27770,
                        &PTR____CFConstantStringClassReference_110dd9878,&PTR_DAT_11317a948,0,0,4,
                        0x1c);
    puRam00000001136c6fd0 = puVar1;
  }
  return;
}



/* Entry: 106c79508; end: 106c795eb; +[LockedStatus descriptor] */

void FUN_106c79508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6fe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27810,
                        &PTR____CFConstantStringClassReference_110e7e2b8,&PTR_DAT_11317a948,0,0,4,
                        0x1c);
    puRam00000001136c6fe0 = puVar1;
  }
  return;
}



/* Entry: 106c795ec; end: 106c795f7;  */

bool FUN_106c795ec(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106c795f8; end: 106c79683; +[SCBitmojiGetWearableOutfitV2Request descriptor] */

undefined * FUN_106c795f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b278b0,
                        &PTR____CFConstantStringClassReference_110e7e2f8,&PTR_DAT_11317aa50,
                        &PTR_s_avatarId_11317aac8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c6ff0 = puVar1;
  }
  return puRam00000001136c6ff0;
}



/* Entry: 106c79684; end: 106c796eb; +[SCBitmojiCompositeOption descriptor] */

void FUN_106c79684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27900,
                        &PTR____CFConstantStringClassReference_110e7e318,&PTR_DAT_11317aa50,
                        &PTR_s_optionsArray_11317aa68,1,0x10,0x1c);
    puRam00000001136c6ff8 = puVar1;
  }
  return;
}



/* Entry: 106c796ec; end: 106c79753; +[SCBitmojiGetWearableOutfitV2Response descriptor] */

void FUN_106c796ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27ab8,
                        &PTR____CFConstantStringClassReference_110e7e338,&PTR_DAT_11317aa50,
                        &PTR_s_optionsArray_11317ab48,3,0x18,0x1c);
    puRam00000001136c7000 = puVar1;
  }
  return;
}



/* Entry: 106c79754; end: 106c797ef; +[SCBitmojiGetWearableOutfitV2Response_ExclusiveItem descriptor] */

undefined * FUN_106c79754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27ae0,
                        &PTR____CFConstantStringClassReference_110e7e358,&PTR_DAT_11317aa50,
                        &PTR_DAT_11317ab08,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b27ab8);
    puRam00000001136c7008 = puVar1;
  }
  return puRam00000001136c7008;
}



/* Entry: 106c797f0; end: 106c79857; +[SCBitmojiGetOutfitV2Request descriptor] */

void FUN_106c797f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b279a0,
                        &PTR____CFConstantStringClassReference_110e7e378,&PTR_DAT_11317aa50,
                        &PTR_DAT_11317aa88,1,0x10,0x1c);
    puRam00000001136c7010 = puVar1;
  }
  return;
}



/* Entry: 106c79858; end: 106c798bf; +[SCBitmojiGetOutfitV2Response descriptor] */

void FUN_106c79858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b279f0,
                        &PTR____CFConstantStringClassReference_110e7e398,&PTR_DAT_11317aa50,
                        &PTR_s_optionsArray_11317aaa8,1,0x10,0x1c);
    puRam00000001136c7018 = puVar1;
  }
  return;
}



/* Entry: 106c798c0; end: 106c79927; +[SCBitmojiPurchaseIAPItemV2Request descriptor] */

void FUN_106c798c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27a40,
                        &PTR____CFConstantStringClassReference_110e7e3b8,&PTR_DAT_11317aa50,
                        &PTR_DAT_11317aba8,3,0x20,0x1c);
    puRam00000001136c7020 = puVar1;
  }
  return;
}



/* Entry: 106c79928; end: 106c79a0b; +[SCBitmojiPurchaseIAPItemV2Response descriptor] */

void FUN_106c79928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27a90,
                        &PTR____CFConstantStringClassReference_110e7e3d8,&PTR_DAT_11317aa50,0,0,4,
                        0x1c);
    puRam00000001136c7028 = puVar1;
  }
  return;
}



/* Entry: 106c79a0c; end: 106c79a17;  */

bool FUN_106c79a0c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106c79a18; end: 106c79a93;  */

undefined * FUN_106c79a18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7038 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7e418,
                        &UNK_10ddea36c,&UNK_10ddea398,4,FUN_106c79a94,0);
    do {
      if (puRam00000001136c7038 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7038;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7038,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7038 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7038;
}



/* Entry: 106c79a94; end: 106c79a9f;  */

bool FUN_106c79a94(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106c79aa0; end: 106c79b07; +[SCBitmojiClaimDropItemRequest descriptor] */

void FUN_106c79aa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27b80,
                        &PTR____CFConstantStringClassReference_110e7e438,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317ace0,2,0xc,0x1c);
    puRam00000001136c7040 = puVar1;
  }
  return;
}



/* Entry: 106c79b08; end: 106c79b6f; +[SCBitmojiClaimDropItemResponse descriptor] */

void FUN_106c79b08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27bd0,
                        &PTR____CFConstantStringClassReference_110e7e458,&PTR_DAT_11317ac28,
                        &PTR_s_status_11317ad20,2,0x10,0x1c);
    puRam00000001136c7048 = puVar1;
  }
  return;
}



/* Entry: 106c79b70; end: 106c79bd7; +[SCBitmojiGetDropRequest descriptor] */

void FUN_106c79b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27c20,
                        &PTR____CFConstantStringClassReference_110e7e478,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317ac40,1,8,0x1c);
    puRam00000001136c7050 = puVar1;
  }
  return;
}



/* Entry: 106c79bd8; end: 106c79c3f; +[SCBitmojiGetDropResponse descriptor] */

void FUN_106c79bd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27c70,
                        &PTR____CFConstantStringClassReference_110e7e498,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317ac60,1,0x10,0x1c);
    puRam00000001136c7058 = puVar1;
  }
  return;
}



/* Entry: 106c79c40; end: 106c79ccb; +[SCBitmojiGetWearableOutfitRequest descriptor] */

undefined * FUN_106c79c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27cc0,
                        &PTR____CFConstantStringClassReference_110e7e4b8,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317aee0,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c7060 = puVar1;
  }
  return puRam00000001136c7060;
}



/* Entry: 106c79ccc; end: 106c79d33; +[SCBitmojiGetWearableOutfitResponse descriptor] */

void FUN_106c79ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28008,
                        &PTR____CFConstantStringClassReference_110e7e4d8,&PTR_DAT_11317ac28,
                        &PTR_s_outfit_11317ae20,3,0x18,0x1c);
    puRam00000001136c7068 = puVar1;
  }
  return;
}



/* Entry: 106c79d34; end: 106c79dcf; +[SCBitmojiGetWearableOutfitResponse_ExclusiveItem descriptor] */

undefined * FUN_106c79d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28030,
                        &PTR____CFConstantStringClassReference_110e7e358,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317ad60,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b28008);
    puRam00000001136c7070 = puVar1;
  }
  return puRam00000001136c7070;
}



/* Entry: 106c79dd0; end: 106c79e37; +[SCBitmojiGetOutfitRequest descriptor] */

void FUN_106c79dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27d60,
                        &PTR____CFConstantStringClassReference_110e7e4f8,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317ac80,1,0x10,0x1c);
    puRam00000001136c7078 = puVar1;
  }
  return;
}



/* Entry: 106c79e38; end: 106c79e9f; +[SCBitmojiGetOutfitResponse descriptor] */

void FUN_106c79e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27db0,
                        &PTR____CFConstantStringClassReference_110e7e518,&PTR_DAT_11317ac28,
                        &PTR_s_outfit_11317aca0,1,0x10,0x1c);
    puRam00000001136c7080 = puVar1;
  }
  return;
}



/* Entry: 106c79ea0; end: 106c79f07; +[SCBitmojiPurchaseIAPItemRequest descriptor] */

void FUN_106c79ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27e00,
                        &PTR____CFConstantStringClassReference_110e7e538,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317ae80,3,0x20,0x1c);
    puRam00000001136c7088 = puVar1;
  }
  return;
}



/* Entry: 106c79f08; end: 106c79f6f; +[SCBitmojiPurchaseIAPItemResponse descriptor] */

void FUN_106c79f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27e50,
                        &PTR____CFConstantStringClassReference_110e7e558,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317acc0,1,0x10,0x1c);
    puRam00000001136c7090 = puVar1;
  }
  return;
}



/* Entry: 106c79f70; end: 106c79ffb; +[SCBitmojiDrop descriptor] */

undefined * FUN_106c79f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27ea0,
                        &PTR____CFConstantStringClassReference_110e7e578,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317b100,0xb,0x48,0x1c);
    func_0x00010c229040();
    puRam00000001136c7098 = puVar1;
  }
  return puRam00000001136c7098;
}



/* Entry: 106c79ffc; end: 106c7a087; +[SCBitmojiDrop_Asset descriptor] */

undefined * FUN_106c79ffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27ef0,
                        &PTR____CFConstantStringClassReference_110e7e598,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317ada0,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b27ea0);
    puRam00000001136c70a0 = puVar1;
  }
  return puRam00000001136c70a0;
}



/* Entry: 106c7a088; end: 106c7a103; +[SCBitmojiPurchasableItem descriptor] */

undefined * FUN_106c7a088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27f40,
                        &PTR____CFConstantStringClassReference_110e7e5b8,&PTR_DAT_11317ac28,
                        &PTR_DAT_11317afe0,9,0x50,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c70a8 = puVar1;
  }
  return puRam00000001136c70a8;
}



/* Entry: 106c7a104; end: 106c7a16b; +[SCBitmojiMerchandisedGarment descriptor] */

void FUN_106c7a104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27f90,
                        &PTR____CFConstantStringClassReference_110e7e5d8,&PTR_DAT_11317ac28,
                        &PTR_s_garment_11317af60,4,0x20,0x1c);
    puRam00000001136c70b0 = puVar1;
  }
  return;
}



/* Entry: 106c7a16c; end: 106c7a1f7; +[SCBitmojiFashionItem descriptor] */

undefined * FUN_106c7a16c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b27fe0,
                        &PTR____CFConstantStringClassReference_110e7e5f8,&PTR_DAT_11317ac28,
                        &PTR_s_garment_11317ade0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c70b8 = puVar1;
  }
  return puRam00000001136c70b8;
}



/* Entry: 106c7a1f8; end: 106c7a273;  */

undefined * FUN_106c7a1f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c70c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7e618,
                        &UNK_10ddea3c4,&UNK_10ddea428,0xe,FUN_106c7a274,0);
    do {
      if (puRam00000001136c70c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c70c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c70c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c70c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c70c0;
}



/* Entry: 106c7a274; end: 106c7a27f;  */

bool FUN_106c7a274(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 106c7a280; end: 106c7a2fb;  */

undefined * FUN_106c7a280(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c70c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7e638,
                        &UNK_10ddea460,&UNK_10ddea49c,5,FUN_106c7a2fc,0);
    do {
      if (puRam00000001136c70c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c70c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c70c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c70c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c70c8;
}



/* Entry: 106c7a2fc; end: 106c7a307;  */

bool FUN_106c7a2fc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106c7a308; end: 106c7a393; +[SCBitmojiClosetItem descriptor] */

undefined * FUN_106c7a308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b280d0,
                        &PTR____CFConstantStringClassReference_110e7e658,&PTR_DAT_11317b270,
                        &PTR_s_top_11317b348,0xe,0x78,0x1c);
    func_0x00010c229040();
    puRam00000001136c70d0 = puVar1;
  }
  return puRam00000001136c70d0;
}



/* Entry: 106c7a394; end: 106c7a3fb; +[SCBitmojiClosetItems descriptor] */

void FUN_106c7a394(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28120,
                        &PTR____CFConstantStringClassReference_110e7e678,&PTR_DAT_11317b270,
                        &PTR_s_itemsArray_11317b288,1,0x10,0x1c);
    puRam00000001136c70d8 = puVar1;
  }
  return;
}



/* Entry: 106c7a3fc; end: 106c7a463; +[SCBitmojiRecentOutfits descriptor] */

void FUN_106c7a3fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28170,
                        &PTR____CFConstantStringClassReference_110e7e698,&PTR_DAT_11317b270,
                        &PTR_DAT_11317b2a8,1,0x10,0x1c);
    puRam00000001136c70e0 = puVar1;
  }
  return;
}



/* Entry: 106c7a464; end: 106c7a4ef; +[SCBitmojiClosetCategoryItem descriptor] */

undefined * FUN_106c7a464(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b281c0,
                        &PTR____CFConstantStringClassReference_110e7e6b8,&PTR_DAT_11317b270,
                        &PTR_s_top_11317b508,0xe,0x78,0x1c);
    func_0x00010c229040();
    puRam00000001136c70e8 = puVar1;
  }
  return puRam00000001136c70e8;
}



/* Entry: 106c7a4f0; end: 106c7a557; +[SCBitmojiCategory descriptor] */

void FUN_106c7a4f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28210,
                        &PTR____CFConstantStringClassReference_110e38518,&PTR_DAT_11317b270,
                        &PTR_s_itemsArray_11317b2c8,4,0x20,0x1c);
    puRam00000001136c70f0 = puVar1;
  }
  return;
}



/* Entry: 106c7a558; end: 106c7a63b; +[SCBitmojiUUID descriptor] */

void FUN_106c7a558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c70f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b282b0,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_11317b6c8,
                        &PTR_s_id_p_11317b6e0,1,0x10,0x1c);
    puRam00000001136c70f8 = puVar1;
  }
  return;
}



/* Entry: 106c7a63c; end: 106c7a647;  */

bool FUN_106c7a63c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106c7a648; end: 106c7a6c3;  */

undefined * FUN_106c7a648(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7108 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7e718,
                        &UNK_10ddea4e8,&UNK_10ddea504,2,FUN_106c7a6c4,0);
    do {
      if (puRam00000001136c7108 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7108;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7108,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7108 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7108;
}



/* Entry: 106c7a6c4; end: 106c7a6cf;  */

bool FUN_106c7a6c4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106c7a6d0; end: 106c7a74b;  */

undefined * FUN_106c7a6d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7110 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7e738,
                        &UNK_10ddea50c,&UNK_10ddea524,2,FUN_106c7a74c,0);
    do {
      if (puRam00000001136c7110 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7110;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7110,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7110 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7110;
}



/* Entry: 106c7a74c; end: 106c7a757;  */

bool FUN_106c7a74c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106c7a758; end: 106c7a7d3;  */

undefined * FUN_106c7a758(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7118 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7e758,
                        &UNK_10ddea52c,&UNK_10ddea54c,2,FUN_106c7a7d4,0);
    do {
      if (puRam00000001136c7118 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7118;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7118,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7118 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7118;
}



/* Entry: 106c7a7d4; end: 106c7a7df;  */

bool FUN_106c7a7d4(ulong param_1)

{
  return (param_1 & 0xfffffffd) == 0;
}



/* Entry: 106c7a7e0; end: 106c7a85b;  */

undefined * FUN_106c7a7e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7120 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7e778,
                        &UNK_10ddea554,&UNK_10ddea574,3,FUN_106c7a85c,0);
    do {
      if (puRam00000001136c7120 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7120;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7120,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7120 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7120;
}



/* Entry: 106c7a85c; end: 106c7a867;  */

bool FUN_106c7a85c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106c7a868; end: 106c7a8e3;  */

undefined * FUN_106c7a868(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7128 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7e798,
                        &UNK_10ddea580,&UNK_10ddea5b4,3,FUN_106c7a8e4,0);
    do {
      if (puRam00000001136c7128 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7128;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7128,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7128 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7128;
}



/* Entry: 106c7a8e4; end: 106c7a8ef;  */

bool FUN_106c7a8e4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106c7a8f0; end: 106c7a957; +[SCBitmojiHairMetadata descriptor] */

void FUN_106c7a8f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28350,
                        &PTR____CFConstantStringClassReference_110e7e7b8,&PTR_DAT_11317b700,
                        &PTR_DAT_11317b738,2,0xc,0x1c);
    puRam00000001136c7130 = puVar1;
  }
  return;
}



/* Entry: 106c7a958; end: 106c7a9bf; +[SCBitmojiMouthMetadata descriptor] */

void FUN_106c7a958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7138 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b283a0,
                        &PTR____CFConstantStringClassReference_110e7e7d8,&PTR_DAT_11317b700,
                        &PTR_DAT_11317b718,1,8,0x1c);
    puRam00000001136c7138 = puVar1;
  }
  return;
}



/* Entry: 106c7a9c0; end: 106c7aaa3; +[SCBitmojiFashionMetadata descriptor] */

void FUN_106c7a9c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b283f0,
                        &PTR____CFConstantStringClassReference_110e7e7f8,&PTR_DAT_11317b700,
                        &PTR_DAT_11317b778,3,0x10,0x1c);
    puRam00000001136c7140 = puVar1;
  }
  return;
}



/* Entry: 106c7aaa4; end: 106c7aaaf;  */

bool FUN_106c7aaa4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106c7aab0; end: 106c7ab17; +[SCPbGenAIDreamRequiresWaitListRequest descriptor] */

void FUN_106c7aab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28490,
                        &PTR____CFConstantStringClassReference_110e7e838,&PTR_DAT_11317b7d8,0,0,4,
                        0x1c);
    puRam00000001136c7150 = puVar1;
  }
  return;
}



/* Entry: 106c7ab18; end: 106c7ab7f; +[SCPbGenAIDreamJoinWaitListRequest descriptor] */

void FUN_106c7ab18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b284e0,
                        &PTR____CFConstantStringClassReference_110e7e858,&PTR_DAT_11317b7d8,
                        &PTR_DAT_11317b7f0,1,0x10,0x1c);
    puRam00000001136c7158 = puVar1;
  }
  return;
}



/* Entry: 106c7ab80; end: 106c7abe7; +[SCPbGenAIDreamRequiresWaitListResponse descriptor] */

void FUN_106c7ab80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28530,
                        &PTR____CFConstantStringClassReference_110e7e878,&PTR_DAT_11317b7d8,
                        &PTR_s_status_11317baf0,4,0x18,0x1c);
    puRam00000001136c7160 = puVar1;
  }
  return;
}



/* Entry: 106c7abe8; end: 106c7ac4f; +[SCPbGenAIDreamJoinWaitListResponse descriptor] */

void FUN_106c7abe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28580,
                        &PTR____CFConstantStringClassReference_110e7e898,&PTR_DAT_11317b7d8,
                        &PTR_s_status_11317bb70,4,0x18,0x1c);
    puRam00000001136c7168 = puVar1;
  }
  return;
}



/* Entry: 106c7ac50; end: 106c7acb7; +[SCPbGenAIDreamGetByStatusRequest descriptor] */

void FUN_106c7ac50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b285d0,
                        &PTR____CFConstantStringClassReference_110e7e8b8,&PTR_DAT_11317b7d8,
                        &PTR_DAT_11317b810,1,0x10,0x1c);
    puRam00000001136c7170 = puVar1;
  }
  return;
}



/* Entry: 106c7acb8; end: 106c7ad1f; +[SCPbGenAIDreamGetByStatusResponse descriptor] */

void FUN_106c7acb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28620,
                        &PTR____CFConstantStringClassReference_110e7e8d8,&PTR_DAT_11317b7d8,
                        &PTR_s_status_11317b970,2,0x18,0x1c);
    puRam00000001136c7178 = puVar1;
  }
  return;
}



/* Entry: 106c7ad20; end: 106c7ad87; +[SCPbGenAIDreamGetRequest descriptor] */

void FUN_106c7ad20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b28670,
                        &PTR____CFConstantStringClassReference_110dc92b8,&PTR_DAT_11317b7d8,
                        &PTR_DAT_11317b830,1,0x10,0x1c);
    puRam00000001136c7180 = puVar1;
  }
  return;
}


