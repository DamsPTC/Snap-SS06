/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057b3fcc; end: 1057b403f; -[UNICommerceApiService initWithUnifiedGrpcService:] */

undefined1 * FUN_1057b3fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea400;
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



/* Entry: 1057b4040; end: 1057b4123; -[UNICommerceApiService getStoreInfoWithRequest:callOptionsBuilder:handler:] */

void FUN_1057b4040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be4a0;
  _objc_opt_class(PTR_PTR_1126be4a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e026b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057b4124; end: 1057b4207; -[UNICommerceApiService getStoreProductsWithRequest:callOptionsBuilder:handler:] */

void FUN_1057b4124(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be4a8;
  _objc_opt_class(PTR_PTR_1126be4a8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e026d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057b4208; end: 1057b42eb; -[UNICommerceApiService getMyStoresWithRequest:callOptionsBuilder:handler:] */

void FUN_1057b4208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be4b0;
  _objc_opt_class(PTR_PTR_1126be4b0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e026f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057b42ec; end: 1057b43cf; -[UNICommerceApiService getProductInfoWithRequest:callOptionsBuilder:handler:] */

void FUN_1057b42ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be4b8;
  _objc_opt_class(PTR_PTR_1126be4b8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02718,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057b43d0; end: 1057b43db; -[UNICommerceApiService .cxx_destruct] */

void FUN_1057b43d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057b43dc; end: 1057b45af; -[SCCommerceStoreFetcher initWithUserId:configProvider:grapheneRegistry:unifiedGRPCClientFactory:] */

undefined8 *
FUN_1057b43dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ea408;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0468;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    _objc_release(puVar4);
    _objc_retain(puVar3);
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(puVar3);
    uVar2 = param_6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057b45b0; end: 1057b46c3;  */

void FUN_1057b45b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_2);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0380;
  func_0x00010c291260(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dec0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1eeba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf56360(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126be4c0;
  _objc_alloc(PTR_PTR_1126be4c0);
  func_0x00010c058f80();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057b46c4; end: 1057b47af; -[SCCommerceStoreFetcher _vendCallOptions] */

void FUN_1057b46c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined ***in_x3;
  undefined8 in_x4;
  undefined *in_x5;
  undefined8 uVar5;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar3 = PTR_PTR_113185418;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(PTR_PTR_113185418);
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined *)0x1;
  func_0x00010c16c6a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110dadcb8;
    puStack_40 = puVar3;
    in_x3 = &ppuStack_48;
    in_x4 = 1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bef9140(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(in_x5);
  uVar5 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(in_x3);
  _objc_release(in_x3);
  func_0x00010c15ebe0(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = puVar4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar3 = puVar4;
  func_0x00010c135700(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bf987e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  FUN_1057c9188(puVar4,puVar3,&PTR____CFConstantStringClassReference_110e02738,in_x4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (in_x5 != (undefined *)0x0) {
    if (puVar2 == (undefined *)0x0) {
      puVar3 = puVar4;
      func_0x00010c115f60();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x0001060e3044();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x1057b4a74;
      puStack_108 = &UNK_11084aaa8;
      _objc_retain(in_x5);
      puStack_100 = puVar1;
      puStack_f8 = in_x5;
      _objc_retain(puVar1);
      func_0x000100162d98("APPSTORE",&puStack_120);
      _objc_release(puStack_100);
      _objc_release(puStack_f8);
    }
    else {
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_1057b4a60;
      puStack_d8 = &UNK_11084aaa8;
      _objc_retain(in_x5);
      puStack_c8 = in_x5;
      _objc_retain(puVar2);
      puStack_d0 = puVar2;
      func_0x000100162d98("APPSTORE",&puStack_f0);
      _objc_release(puStack_d0);
      puVar1 = puStack_c8;
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(in_x5);
  _objc_release(puVar4);
  return;
}



/* Entry: 1057b47b0; end: 1057b4a5f; -[SCCommerceStoreFetcher _getSingleProductResponseHandler:request:startTimeStamp:error:completionBlock:] */

void FUN_1057b47b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  func_0x00010c15ebe0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02738,param_5,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (param_6 != 0) {
    if (lVar4 == 0) {
      lVar1 = param_3;
      func_0x00010c115f60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x0001060e3044();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x1057b4a74;
      puStack_b8 = &UNK_11084aaa8;
      _objc_retain(param_6);
      lStack_b0 = lVar3;
      lStack_a8 = param_6;
      _objc_retain(lVar3);
      func_0x000100162d98("APPSTORE",&puStack_d0);
      _objc_release(lStack_b0);
      _objc_release(lStack_a8);
    }
    else {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1057b4a60;
      puStack_88 = &UNK_11084aaa8;
      _objc_retain(param_6);
      lStack_78 = param_6;
      _objc_retain(lVar4);
      lStack_80 = lVar4;
      func_0x000100162d98("APPSTORE",&puStack_a0);
      _objc_release(lStack_80);
      lVar3 = lStack_78;
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1057b4a60; end: 1057b4a93;  */

void FUN_1057b4a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057b4a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1057b4a94; end: 1057b4d2f; -[SCCommerceStoreFetcher getSingleProductInfoWithId:completionBlock:] */

void FUN_1057b4a94(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *unaff_x24;
  undefined **ppuVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  ppuVar7 = &puStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf42240();
  _objc_release(uVar1);
  if ((int)uVar5 == 0) {
    puVar3 = PTR_PTR_1126be4c8;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010bf64920(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3bc0(puVar3);
    _objc_release(lVar4);
    func_0x00010c1e3c20(puVar3);
    _CACurrentMediaTime();
    _objc_initWeak(auStack_70,param_2);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee7fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1057b4d30;
    puStack_98 = &UNK_1108b2348;
    puVar6 = auStack_70;
    _objc_copyWeak(auStack_80,puVar6);
    _objc_retain(puVar3);
    puStack_90 = puVar3;
    uStack_78 = param_1;
    _objc_retain(param_5);
    puVar2 = puVar3;
    lStack_88 = param_5;
    func_0x00010bfc91e0(uVar5);
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_release(lStack_88);
    _objc_release(puStack_90);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e02778;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0();
    _objc_release(puVar2);
    puVar6 = (undefined1 *)0x0;
    puVar2 = puVar3;
    (**(code **)(param_5 + 0x10))(param_5,0,puVar3);
    ppuVar7 = (undefined **)unaff_x24;
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)ppuVar7 + 0x30));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  lVar4 = param_4 + 0x30;
  _objc_loadWeakRetained(lVar4);
  func_0x00010be229e0(*(undefined8 *)(param_4 + 0x38));
  _objc_release(puVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1057b4d30; end: 1057b4d9f;  */

void FUN_1057b4d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be229e0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057b4da0; end: 1057b504f; -[SCCommerceStoreFetcher _storeInfoResponseHandler:request:startTimeStamp:error:completionBlock:] */

void FUN_1057b4da0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  func_0x00010c15ebe0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02738,param_5,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (param_6 != 0) {
    if (lVar4 == 0) {
      lVar1 = param_3;
      func_0x00010c257880();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x0001060e1f0c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x1057b5064;
      puStack_b8 = &UNK_11084aaa8;
      _objc_retain(param_6);
      lStack_b0 = lVar3;
      lStack_a8 = param_6;
      _objc_retain(lVar3);
      func_0x000100162d98("APPSTORE",&puStack_d0);
      _objc_release(lStack_b0);
      _objc_release(lStack_a8);
    }
    else {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1057b5050;
      puStack_88 = &UNK_11084aaa8;
      _objc_retain(param_6);
      lStack_78 = param_6;
      _objc_retain(lVar4);
      lStack_80 = lVar4;
      func_0x000100162d98("APPSTORE",&puStack_a0);
      _objc_release(lStack_80);
      lVar3 = lStack_78;
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1057b5050; end: 1057b5083;  */

void FUN_1057b5050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057b5060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1057b5084; end: 1057b5313; -[SCCommerceStoreFetcher getStoreInfoWithStoreId:completionBlock:] */

void FUN_1057b5084(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *unaff_x24;
  undefined **ppuVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  ppuVar7 = &puStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf42240();
  _objc_release(uVar1);
  if ((int)uVar5 == 0) {
    puVar3 = PTR_PTR_1126be4d0;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010bf64920(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c240(puVar3);
    _objc_release(lVar4);
    _CACurrentMediaTime();
    _objc_initWeak(auStack_70,param_2);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee7fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1057b5314;
    puStack_98 = &UNK_1108b2378;
    puVar6 = auStack_70;
    _objc_copyWeak(auStack_80,puVar6);
    _objc_retain(puVar3);
    puStack_90 = puVar3;
    uStack_78 = param_1;
    _objc_retain(param_5);
    puVar2 = puVar3;
    lStack_88 = param_5;
    func_0x00010bfcab60(uVar5);
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_release(lStack_88);
    _objc_release(puStack_90);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e02778;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0();
    _objc_release(puVar2);
    puVar6 = (undefined1 *)0x0;
    puVar2 = puVar3;
    (**(code **)(param_5 + 0x10))(param_5,0,puVar3);
    ppuVar7 = (undefined **)unaff_x24;
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)ppuVar7 + 0x30));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  lVar4 = param_4 + 0x30;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bec4060(*(undefined8 *)(param_4 + 0x38));
  _objc_release(puVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1057b5314; end: 1057b5383;  */

void FUN_1057b5314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec4060(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057b5384; end: 1057b566b; -[SCCommerceStoreFetcher _getStoreProductsResponseHandler:request:startTimeStamp:error:completionBlock:] */

void FUN_1057b5384(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  func_0x00010c15ebe0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar6);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02738,param_5,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (param_6 != 0) {
    if (lVar4 == 0) {
      lVar1 = param_3;
      func_0x00010c115fc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c116400();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x000100504554();
      _objc_release(lVar3);
      _objc_release(lVar1);
      puVar2 = PTR_PTR_1126be288;
      _objc_alloc();
      func_0x00010c03a9c0();
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x1057b5688;
      puStack_b8 = &UNK_11084aaa8;
      _objc_retain(param_6);
      puStack_b0 = puVar2;
      lStack_a8 = param_6;
      _objc_retain(puVar2);
      func_0x000100162d98("APPSTORE",&puStack_d0);
      _objc_release(puStack_b0);
      _objc_release(lStack_a8);
      _objc_release(puVar2);
    }
    else {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1057b566c;
      puStack_88 = &UNK_11084aaa8;
      _objc_retain(param_6);
      lStack_78 = param_6;
      _objc_retain(lVar4);
      lStack_80 = lVar4;
      func_0x000100162d98("APPSTORE",&puStack_a0);
      _objc_release(lStack_80);
      lVar5 = lStack_78;
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1057b566c; end: 1057b56a7;  */

void FUN_1057b566c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057b567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1057b56a8; end: 1057b59f3; -[SCCommerceStoreFetcher getStoreProductsWithId:categoryId:limit:offset:query:completionBlock:] */

void FUN_1057b56a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined1 *param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  ppuVar7 = &puStack_d0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf42240();
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    puVar3 = PTR_PTR_1126be4d8;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010bf64920(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c240(puVar3);
    _objc_release(lVar6);
    if (param_5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_5;
      func_0x00010bf64920(param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf4bb00();
    func_0x00010c17a100(puVar3);
    func_0x00010c1bda80(puVar3);
    func_0x00010c1d0bc0(puVar3);
    func_0x00010c1e64e0(puVar3);
    func_0x00010c1e3c20(puVar3);
    _CACurrentMediaTime();
    _objc_initWeak(auStack_90,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee7fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1057b59f4;
    puStack_b8 = &UNK_1108b23e8;
    puVar5 = auStack_90;
    _objc_copyWeak(auStack_a0,puVar5);
    _objc_retain(puVar3);
    puStack_b0 = puVar3;
    uStack_98 = param_1;
    _objc_retain(param_9);
    puVar2 = puVar3;
    lStack_a8 = param_9;
    func_0x00010bfcabc0(uVar4);
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_release(lStack_a8);
    _objc_release(puStack_b0);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_release(lVar6);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e02778;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0(puVar3);
    _objc_release(puVar2);
    puVar5 = (undefined1 *)0x0;
    puVar2 = puVar3;
    (**(code **)(param_9 + 0x10))(param_9,0,puVar3);
    ppuVar7 = (undefined **)param_6;
  }
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)ppuVar7 + 0x30));
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  lVar6 = param_4 + 0x30;
  _objc_loadWeakRetained(lVar6);
  func_0x00010be22f60(*(undefined8 *)(param_4 + 0x38));
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1057b59f4; end: 1057b5a63;  */

void FUN_1057b59f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be22f60(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057b5a64; end: 1057b5aa3; -[SCCommerceStoreFetcher attachmentToolEnabled] */

undefined8 FUN_1057b5a64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0d400();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1057b5aa4; end: 1057b5d6f; -[SCCommerceStoreFetcher _merchantInfoResponseHandler:request:startTimeStamp:error:completionBlock:] */

void FUN_1057b5aa4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  func_0x00010c15ebe0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar7);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02738,param_5,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (param_6 != 0) {
    if (lVar4 == 0) {
      lVar1 = param_3;
      func_0x00010c257980();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c2578a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x0001060e1f0c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar1);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x1057b5d80;
      puStack_b0 = &UNK_11084aaa8;
      _objc_retain(param_6);
      lStack_a8 = lVar6;
      lStack_a0 = param_6;
      _objc_retain(lVar6);
      func_0x000100162d98("APPSTORE",&puStack_c8);
      _objc_release(lStack_a8);
      _objc_release(lStack_a0);
    }
    else {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1057b5d70;
      puStack_80 = &UNK_110849530;
      _objc_retain(param_6);
      lStack_78 = param_6;
      func_0x000100162d98("APPSTORE",&puStack_98);
      lVar6 = lStack_78;
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1057b5d70; end: 1057b5d9b;  */

void FUN_1057b5d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057b5d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1057b5d9c; end: 1057b5f97; -[SCCommerceStoreFetcher fetchMerchantInfoWithCompletion:] */

void FUN_1057b5d9c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf42240();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126be4e0;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x000100576d08(uVar3,auStack_58,auStack_60);
    if ((int)uVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar4);
    }
    func_0x00010c21e620(puVar2);
    _objc_release(puVar4);
    _CACurrentMediaTime();
    _objc_initWeak(auStack_58,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee7fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_retain(puVar2);
    uStack_68 = param_1;
    _objc_retain(param_4);
    func_0x00010bfc7d00(uVar3);
    _objc_release(param_2);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1057b5f98; end: 1057b6007;  */

void FUN_1057b5f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5f6a0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057b6008; end: 1057b605b; -[SCCommerceStoreFetcher .cxx_destruct] */

void FUN_1057b6008(long param_1)

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



/* Entry: 1057b605c; end: 1057b60c3; +[GetProductInfoRequest descriptor] */

void FUN_1057b605c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69720,
                        &PTR____CFConstantStringClassReference_110e027d8,&PTR_DAT_1130ffd88,
                        &PTR_s_productId_1130ffda0,2,0x10,0x1c);
    puRam00000001136c0670 = puVar1;
  }
  return;
}



/* Entry: 1057b60c4; end: 1057b614f; +[GetProductInfoResponse descriptor] */

undefined * FUN_1057b60c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69770,
                        &PTR____CFConstantStringClassReference_110e027f8,&PTR_DAT_1130ffd88,
                        &PTR_DAT_1130ffde0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0678 = puVar1;
  }
  return puRam00000001136c0678;
}



/* Entry: 1057b6150; end: 1057b61b7; +[GetMyStoresRequest descriptor] */

void FUN_1057b6150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69810,
                        &PTR____CFConstantStringClassReference_110e02818,&PTR_DAT_1130ffe48,
                        &PTR_s_userId_1130ffe60,1,0x10,0x1c);
    puRam00000001136c0680 = puVar1;
  }
  return;
}



/* Entry: 1057b61b8; end: 1057b6243; +[GetMyStoresResponse descriptor] */

undefined * FUN_1057b61b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69860,
                        &PTR____CFConstantStringClassReference_110e02838,&PTR_DAT_1130ffe48,
                        &PTR_DAT_1130ffea0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0688 = puVar1;
  }
  return puRam00000001136c0688;
}



/* Entry: 1057b6244; end: 1057b62bf; +[GetMyStoresResponse_StoreList descriptor] */

undefined * FUN_1057b6244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a698b0,
                        &PTR____CFConstantStringClassReference_110e02858,&PTR_DAT_1130ffe48,
                        &PTR_DAT_1130ffe80,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c0690 = puVar1;
  }
  return puRam00000001136c0690;
}



/* Entry: 1057b62c0; end: 1057b6327; +[GetStoreInfoRequest descriptor] */

void FUN_1057b62c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69950,
                        &PTR____CFConstantStringClassReference_110e02878,&PTR_DAT_1130fff08,
                        &PTR_s_storeId_1130fff20,1,0x10,0x1c);
    puRam00000001136c0698 = puVar1;
  }
  return;
}



/* Entry: 1057b6328; end: 1057b63b3; +[GetStoreInfoResponse descriptor] */

undefined * FUN_1057b6328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a699a0,
                        &PTR____CFConstantStringClassReference_110e02898,&PTR_DAT_1130fff08,
                        &PTR_s_storeInfo_1130fff40,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c06a0 = puVar1;
  }
  return puRam00000001136c06a0;
}



/* Entry: 1057b63b4; end: 1057b641b; +[GetStoreProductsRequest descriptor] */

void FUN_1057b63b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69a40,
                        &PTR____CFConstantStringClassReference_110e028b8,&PTR_DAT_1130fffa8,
                        &PTR_s_storeId_113100040,7,0x30,0x1c);
    puRam00000001136c06a8 = puVar1;
  }
  return;
}



/* Entry: 1057b641c; end: 1057b64a7; +[GetStoreProductsResponse descriptor] */

undefined * FUN_1057b641c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69a90,
                        &PTR____CFConstantStringClassReference_110e028d8,&PTR_DAT_1130fffa8,
                        &PTR_DAT_1130fffe0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c06b0 = puVar1;
  }
  return puRam00000001136c06b0;
}



/* Entry: 1057b64a8; end: 1057b6523; +[GetStoreProductsResponse_ProductList descriptor] */

undefined * FUN_1057b64a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69ae0,
                        &PTR____CFConstantStringClassReference_110e028f8,&PTR_DAT_1130fffa8,
                        &PTR_DAT_1130fffc0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c06b8 = puVar1;
  }
  return puRam00000001136c06b8;
}



/* Entry: 1057b6524; end: 1057b6663;  */

undefined * FUN_1057b6524(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bf1bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf0b260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d500(puVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1057b6664; end: 1057b678b; +[SCCommerceBitmojiLineItemArtifactManager _getCompositeImageForUnifiedLineItem:imageDownloader:completion:failure:] */

void FUN_1057b6664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c26de80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x0001057c3d78();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010bfa5c00(param_4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057b678c;
  puStack_58 = &UNK_1108b2448;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c25ff60(uVar2,param_2,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1057b678c; end: 1057b6797;  */

void FUN_1057b678c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchSuccess_failure__11260dc18,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057b6798; end: 1057b69ff; +[SCCommerceBitmojiLineItemArtifactManager getArtifactsForUnifiedLineItem:imageDownloader:fullCompletionBlock:failureBlock:dataUploader:] */

void FUN_1057b6798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1057b6a00;
  uStack_88 = 0x1057b6a10;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1057b6a00;
  uStack_b8 = 0x1057b6a10;
  uStack_b0 = 0;
  puVar1 = PTR_PTR_1126be4e8;
  _objc_opt_new();
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010be1df00(param_1);
  _objc_retain(puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057b6a00; end: 1057b6a17;  */

void FUN_1057b6a00(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057b6a18; end: 1057b6de7;  */

void FUN_1057b6a18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf1ad20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c292720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf0b260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf41a00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c115e60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar11);
  func_0x00010c28da20(uVar1);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  return;
}



/* Entry: 1057b6de8; end: 1057b6edf;  */

void FUN_1057b6de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057b6f70;
  puStack_58 = &UNK_1108465d0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_2;
  uStack_38 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(uStack_50);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 1057b6ee0; end: 1057b6f53;  */

void FUN_1057b6ee0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 1057b6f54; end: 1057b6f6f;  */

void FUN_1057b6f54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    _objc_retain(uVar2);
    _objc_retain(param_2);
    _objc_retain(lVar3);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1057b6f70;
    puStack_58 = &UNK_1108465d0;
    uStack_50 = uVar1;
    uStack_48 = param_2;
    uStack_40 = uVar2;
    lStack_38 = lVar3;
    _objc_retain(uVar2);
    _objc_retain(param_2);
    _objc_retain(lVar3);
    _objc_retain(uVar1);
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(lStack_38);
    _objc_release(uStack_50);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(lVar3);
    _objc_release(uVar1);
    return;
  }
  return;
}



/* Entry: 1057b6f70; end: 1057b7037;  */

void FUN_1057b6f70(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((uVar1 != 0) && (func_0x00010c06e0e0(), (uVar1 & 1) == 0)) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057b6fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x10))
                (lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}



/* Entry: 1057b7038; end: 1057b711b; -[SCCommerceCartServiceProvider provide] */

void FUN_1057b7038(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126be4f0;
  _objc_alloc(PTR_PTR_1126be4f0);
  func_0x00010bffce80();
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057b711c; end: 1057b715b;  */

void FUN_1057b711c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057b715c; end: 1057b72ab; -[SCCommerceCartServiceProvider _createUnifiedCartCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057b715c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be4f8;
  _objc_alloc(PTR_PTR_1126be4f8);
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_1127298cc;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010bf87660(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d840(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057b72ac; end: 1057b72eb;  */

void FUN_1057b72ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057b72ec; end: 1057b7423; -[SCCommerceCartServiceProvider _createLazyLineItemArtifactManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057b72ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be500;
  _objc_alloc(PTR_PTR_1126be500);
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_1127298c8;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010bf45480(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff83e0(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057b7424; end: 1057b7463;  */

void FUN_1057b7424(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057b7464; end: 1057b75ff; -[SCCommerceCartServiceProvider _createBitmojiDataUploader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057b7464(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126be508;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127298b8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127298bc;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127298c0;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127298c4;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010bf1ef20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b3c0(puVar1,param_2,lVar4,lVar7,lVar10,lVar12);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
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



/* Entry: 1057b7600; end: 1057b7667; -[SCCommerceCartServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057b7600(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127298cc);
  _objc_destroyWeak(param_1 + _DAT_1127298c8);
  _objc_destroyWeak(param_1 + _DAT_1127298c0);
  _objc_destroyWeak(param_1 + _DAT_1127298bc);
  _objc_destroyWeak(param_1 + _DAT_1127298c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127298b8);
  return;
}



/* Entry: 1057b7668; end: 1057b770b; -[SCCommerceLineItemArtifactManager initWithBitmojiUploader:imageDownloader:] */

undefined1 *
FUN_1057b7668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea410;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057b770c; end: 1057b77d7; -[SCCommerceLineItemArtifactManager isGettingArtifactsForUnifiedLineItem:] */

undefined * FUN_1057b770c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar4,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)puVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar1 = param_3;
    func_0x00010bf0b260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar3;
      func_0x00010c06e0e0(lVar3);
      puVar4 = (undefined *)(ulong)((uint)lVar2 ^ 1);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1057b77d8; end: 1057b788f; -[SCCommerceLineItemArtifactManager cancelArtifactRequestForUnifiedLineItem:] */

void FUN_1057b77d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)puVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar1 = param_3;
    func_0x00010bf0b260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (lVar3 != 0) {
      func_0x00010bf2dba0(lVar3);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057b7890; end: 1057b7b13; -[SCCommerceLineItemArtifactManager getArtifactsForUnifiedLineItem:fullCompletionBlock:failureBlock:] */

void FUN_1057b7890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf0b260();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if ((int)puVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        *(undefined **)(param_1 + 0x10) = puVar2;
        _objc_release(uVar5);
      }
      _objc_initWeak(auStack_78,param_1);
      puVar2 = PTR_PTR_1126be510;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_1057b7b14;
      puStack_98 = &UNK_1108b2598;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(uVar1);
      uStack_90 = uVar1;
      _objc_retain(param_4);
      uStack_88 = param_4;
      _objc_copyWeak(auStack_b8,auStack_78);
      _objc_retain(uVar1);
      _objc_retain(param_5);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc27c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
      _objc_release(puVar2);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(param_5);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_b8);
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057b7b14; end: 1057b7c67;  */

void FUN_1057b7b14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x10));
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3,param_4);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057b7c68; end: 1057b7ca3; -[SCCommerceLineItemArtifactManager .cxx_destruct] */

void FUN_1057b7c68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057b7ca4; end: 1057b7deb;  */

void FUN_1057b7ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b0868;
  _objc_alloc(PTR_PTR_1126b0868);
  uVar2 = param_1;
  func_0x00010c257a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c257800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c2577e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c078780(param_1);
  uVar6 = param_1;
  func_0x00010c13fc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02db20(puVar1,param_2,uVar2,uVar3,uVar4,0,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057b7dec; end: 1057b7e03;  */

void FUN_1057b7dec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057b7e04; end: 1057b7e6b;  */

void FUN_1057b7e04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057b7e6c; end: 1057b8327;  */

void FUN_1057b7e6c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c124d20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067fc0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf529e0();
    if (uVar1 <= uVar2) {
      uVar1 = param_1;
      func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_1108b2688);
      puVar3 = PTR_PTR_1126b02b8;
      _objc_alloc();
      uVar2 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c080ec0();
      uVar4 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c257a40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c2577e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c257cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c13fc20();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c23f840();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf87a40();
      func_0x00010c01f9e0();
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      puVar17 = PTR_PTR_1126b0848;
      _objc_alloc(PTR_PTR_1126b0848);
      uVar2 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      FUN_1057b7ca4();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c073c00();
      func_0x00010c04cd60(puVar17);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar1);
      goto LAB_1057b81a8;
    }
  }
  puVar17 = (undefined *)0x0;
LAB_1057b81a8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 1057b8328; end: 1057b83c3;  */

void FUN_1057b8328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_2);
  func_0x00010c11cf60(param_3);
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057b83c4; end: 1057b8627;  */

void FUN_1057b83c4(float param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uStack_254;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined **ppuStack_238;
  undefined4 uStack_230;
  undefined4 uStack_220;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined1 uStack_1c1;
  undefined **ppuStack_1c0;
  undefined4 uStack_1b8;
  undefined2 uStack_1a8;
  undefined2 uStack_1a6;
  undefined1 *puStack_188;
  undefined ***pppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_3;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_3;
  func_0x00010c2807c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  lVar3 = param_3;
  func_0x00010c11cf60(param_3);
  func_0x00010c0df740(param_1 * (float)lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11cf60(param_3);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf5de60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(puVar4);
  lVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_release(lVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain();
    _objc_retain(lVar11);
    _objc_opt_class(PTR_PTR_1126be530);
    if (lVar11 == 0) {
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_150,lVar11);
    }
    puVar10 = &uStack_1c1;
    FUN_1057bf8e4();
    uStack_230 = 0xf;
    uStack_220 = 0x100;
    _objc_retain(lVar9);
    ppuStack_238 = &PTR_SUB_110862760;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    plStack_1d8 = (long *)0x0;
    uStack_1e0 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1a6 = *(undefined2 *)(puVar10 + 0x1a);
    uStack_1b8 = 10;
    uStack_1a8 = 0x100;
    ppuStack_1c0 = &PTR_FUN_110862700;
    uStack_170 = 0;
    uStack_178 = 0;
    plStack_160 = (long *)0x0;
    uStack_168 = 0;
    plStack_158 = (long *)0x0;
    puStack_250 = (undefined8 *)0x0;
    puStack_248 = (undefined8 *)0x0;
    uStack_240 = 0;
    uStack_254 = 0;
    puVar8 = &uStack_150;
    lStack_208 = lVar9;
    puStack_188 = puVar10;
    pppuStack_180 = &ppuStack_238;
    func_0x0001000e77a0(puVar8,&ppuStack_1c0,&puStack_250,&uStack_254);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_250 != (undefined8 *)0x0) {
      puStack_248 = puStack_250;
      __ZdlPv();
    }
    plVar1 = plStack_158;
    ppuStack_1c0 = &PTR_FUN_110862700;
    plStack_158 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_160;
    plStack_160 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_250 = &uStack_178;
    func_0x000100105004(&puStack_250);
    plVar1 = plStack_1d0;
    ppuStack_238 = &PTR_SUB_110862760;
    plStack_1d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1d8;
    plStack_1d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_250 = &uStack_1f0;
    func_0x000100105004(&puStack_250);
    _objc_release(lStack_208);
    func_0x0001000e76e0(&uStack_128);
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    _objc_release(lVar11);
    _objc_release(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1057b8628; end: 1057b8857;  */

void FUN_1057b8628(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126be530);
  if (param_2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_2);
  }
  puVar2 = &uStack_111;
  FUN_1057bf8e4();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_1);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_1;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057b8858; end: 1057b9977;  */

undefined *** FUN_1057b8858(undefined ***param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 **ppuVar11;
  undefined4 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  long lVar18;
  undefined ***pppuVar19;
  undefined **ppuStack_700;
  undefined *puStack_6f8;
  undefined ***pppuStack_6f0;
  undefined ***pppuStack_6e8;
  undefined ***pppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined1 *puStack_6d0;
  code *pcStack_6c8;
  undefined **ppuStack_6b8;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  long lStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  long lStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined4 uStack_644;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined4 uStack_620;
  undefined4 uStack_610;
  undefined **ppuStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  undefined1 uStack_5b1;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined8 uStack_5a0;
  undefined2 uStack_598;
  byte bStack_596;
  byte bStack_595;
  undefined1 *puStack_578;
  undefined8 *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined **ppuStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined **ppuStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined1 uStack_4c1;
  undefined **ppuStack_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4a8;
  undefined **ppuStack_490;
  undefined1 *puStack_488;
  undefined ***pppuStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined **ppuStack_450;
  undefined4 uStack_448;
  undefined4 uStack_438;
  undefined **ppuStack_420;
  undefined4 *puStack_418;
  undefined ***pppuStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  undefined1 uStack_3d9;
  undefined **ppuStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3c0;
  undefined **ppuStack_3a8;
  undefined1 *puStack_3a0;
  undefined ***pppuStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined **ppuStack_368;
  undefined4 uStack_360;
  undefined4 uStack_350;
  undefined **ppuStack_338;
  undefined8 **ppuStack_330;
  undefined ***pppuStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined1 uStack_2f1;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined **ppuStack_2c0;
  undefined1 *puStack_2b8;
  undefined ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined **ppuStack_280;
  undefined4 uStack_278;
  undefined2 uStack_268;
  undefined2 uStack_266;
  undefined ***pppuStack_248;
  undefined ***pppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  byte bStack_1f6;
  byte bStack_1f5;
  undefined ***pppuStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  byte bStack_186;
  byte bStack_185;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *apuStack_f8 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_6a0 = param_2;
  _objc_retain(param_2);
  ppuStack_698 = (undefined **)param_1;
  func_0x00010bf1bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  pppuVar15 = (undefined ***)ppuStack_698;
  lVar18 = lStack_6a0;
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_1 == (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126be530);
    if (lVar18 == 0) {
      ppuStack_510 = (undefined **)0x0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_538 = 0;
      ppuStack_540 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_540,lVar18);
    }
    pppuVar9 = &ppuStack_130;
    FUN_1057bf8e4();
    pppuVar10 = pppuVar15;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    uStack_2e8 = 0xf;
    uStack_2d8 = 0x100;
    _objc_retain();
    ppuStack_2f0 = &PTR_SUB_110862760;
    pppuStack_2b0 = (undefined ***)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    uStack_2a0 = 0;
    puStack_2a8 = (undefined *)0x0;
    plStack_290 = (long *)0x0;
    uStack_298 = 0;
    plStack_288 = (long *)0x0;
    uStack_266 = *(undefined2 *)((long)pppuVar9 + 0x1a);
    uStack_278 = 10;
    uStack_268 = 0x100;
    ppuStack_280 = &PTR_FUN_110862700;
    pppuStack_240 = &ppuStack_2f0;
    uStack_230 = 0;
    puStack_238 = (undefined *)0x0;
    plStack_220 = (long *)0x0;
    uStack_228 = 0;
    plStack_218 = (long *)0x0;
    ppuVar11 = &puStack_640;
    ppuStack_6a8 = (undefined **)pppuVar10;
    ppuStack_2c0 = (undefined **)pppuVar10;
    pppuStack_248 = pppuVar9;
    FUN_1057bf76c();
    pppuVar9 = pppuVar15;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    uStack_3d0 = 0xf;
    uStack_3c0 = 0x100;
    _objc_retain();
    ppuStack_3d8 = &PTR_SUB_110862760;
    ppuVar16 = (undefined **)&ppuStack_450;
    pppuStack_398 = (undefined ***)0x0;
    puStack_3a0 = (undefined1 *)0x0;
    uStack_388 = 0;
    puStack_390 = (undefined *)0x0;
    plStack_378 = (long *)0x0;
    uStack_380 = 0;
    plStack_370 = (long *)0x0;
    uStack_360 = 10;
    uStack_350 = CONCAT13(*(byte *)((long)ppuVar11 + 0x1b),
                          CONCAT12(*(byte *)((long)ppuVar11 + 0x1a),0x100));
    ppuStack_368 = &PTR_FUN_110862700;
    pppuStack_328 = &ppuStack_3d8;
    pppuStack_1d0 = &ppuStack_368;
    uStack_318 = 0;
    puStack_320 = (undefined *)0x0;
    plStack_308 = (long *)0x0;
    uStack_310 = 0;
    plStack_300 = (long *)0x0;
    bStack_1f6 = (byte)uStack_266 | *(byte *)((long)ppuVar11 + 0x1a);
    bStack_1f5 = uStack_266._1_1_ & *(byte *)((long)ppuVar11 + 0x1b);
    uStack_208 = 4;
    uStack_1f8 = 0x100;
    ppuStack_210 = &PTR_SUB_1108629c8;
    pppuStack_1d8 = &ppuStack_280;
    plStack_1a8 = (long *)0x0;
    plStack_1b0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1c8 = 0;
    puVar12 = &uStack_644;
    ppuStack_6b0 = (undefined **)pppuVar9;
    ppuStack_3a8 = (undefined **)pppuVar9;
    ppuStack_330 = ppuVar11;
    FUN_1057bfbd4();
    func_0x00010c2975a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_4b8 = 0xf;
    uStack_4a8 = 0x100;
    _objc_retain();
    ppuStack_4c0 = &PTR_SUB_110862760;
    pppuStack_480 = (undefined ***)0x0;
    puStack_488 = (undefined1 *)0x0;
    uStack_470 = 0;
    puStack_478 = (undefined *)0x0;
    plStack_460 = (long *)0x0;
    uStack_468 = 0;
    plStack_458 = (long *)0x0;
    uStack_448 = 10;
    uStack_438 = CONCAT13(*(byte *)((long)puVar12 + 0x1b),
                          CONCAT12(*(byte *)((long)puVar12 + 0x1a),0x100));
    ppuStack_450 = &PTR_FUN_110862700;
    pppuStack_410 = &ppuStack_4c0;
    pppuStack_160 = &ppuStack_450;
    uStack_400 = 0;
    puStack_408 = (undefined *)0x0;
    plStack_3f0 = (long *)0x0;
    uStack_3f8 = 0;
    plStack_3e8 = (long *)0x0;
    bStack_186 = bStack_1f6 | *(byte *)((long)puVar12 + 0x1a);
    bStack_185 = bStack_1f5 & *(byte *)((long)puVar12 + 0x1b);
    uStack_198 = 4;
    uStack_188 = 0x100;
    ppuStack_1a0 = &PTR_SUB_1108629c8;
    pppuStack_168 = &ppuStack_210;
    plStack_138 = (long *)0x0;
    plStack_140 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_158 = 0;
    ppuStack_5b0 = (undefined **)0x0;
    ppuStack_5a8 = (undefined **)0x0;
    uStack_5a0 = 0;
    uStack_628 = (undefined **)((ulong)uStack_628._4_4_ << 0x20);
    pppuVar10 = &ppuStack_540;
    pppuVar9 = &ppuStack_5b0;
    ppuVar13 = (undefined **)&uStack_628;
    ppuStack_490 = (undefined **)pppuVar15;
    puStack_418 = puVar12;
    func_0x0001000e77a0(pppuVar10,&ppuStack_1a0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuStack_6a8;
    if (ppuStack_5b0 != (undefined **)0x0) {
      ppuStack_5a8 = ppuStack_5b0;
      __ZdlPv();
    }
    plVar2 = plStack_138;
    ppuVar1 = ppuStack_6b0;
    ppuStack_1a0 = &PTR_SUB_1108629c8;
    plStack_138 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_140;
    plStack_140 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_158 != 0) {
      __ZdlPv();
    }
    plVar2 = plStack_3e8;
    ppuStack_450 = &PTR_FUN_110862700;
    plStack_3e8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_3f0;
    plStack_3f0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_5b0 = &puStack_408;
    func_0x000100105004(&ppuStack_5b0);
    plVar2 = plStack_458;
    ppuStack_4c0 = &PTR_SUB_110862760;
    plStack_458 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_460;
    plStack_460 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_5b0 = &puStack_478;
    func_0x000100105004(&ppuStack_5b0);
    _objc_release(ppuStack_490);
    _objc_release(pppuVar15);
    plVar2 = plStack_1a8;
    ppuStack_210 = &PTR_SUB_1108629c8;
    plStack_1a8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1b0;
    plStack_1b0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_1c8 != 0) {
      __ZdlPv();
    }
    plVar2 = plStack_300;
    ppuStack_368 = &PTR_FUN_110862700;
    plStack_300 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_308;
    plStack_308 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_450 = &puStack_320;
    func_0x000100105004(&ppuStack_450);
    plVar2 = plStack_370;
    ppuStack_3d8 = &PTR_SUB_110862760;
    plStack_370 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_378;
    plStack_378 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_450 = &puStack_390;
    func_0x000100105004(&ppuStack_450);
    _objc_release(ppuStack_3a8);
    _objc_release(ppuVar1);
    plVar2 = plStack_218;
    pppuVar15 = (undefined ***)&puStack_238;
    ppuStack_280 = &PTR_FUN_110862700;
    plStack_218 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_220;
    plStack_220 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_368 = (undefined **)pppuVar15;
    func_0x000100105004(&ppuStack_368);
    plVar2 = plStack_288;
    ppuStack_2f0 = &PTR_SUB_110862760;
    plStack_288 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_290;
    plStack_290 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_368 = &puStack_2a8;
    func_0x000100105004(&ppuStack_368);
    _objc_release(ppuStack_2c0);
    _objc_release(ppuVar14);
    func_0x0001000e76e0(&uStack_518);
    _objc_release(uStack_528);
    _objc_release(uStack_530);
    pppuVar17 = pppuVar10;
    func_0x00010bf529e0();
    if (pppuVar17 == (undefined ***)0x0) {
      pppuVar17 = (undefined ***)0x0;
    }
    else {
      pppuVar17 = pppuVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar16 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    func_0x00010bf1bf00(ppuStack_698);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar15;
    func_0x00010bf1ad20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar9);
    _objc_release(pppuVar15);
    _objc_opt_class(PTR_PTR_1126be530);
    if (lStack_6a0 == 0) {
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      ppuStack_130 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_130);
    }
    puVar4 = &uStack_2f1;
    FUN_1057bf8e4();
    pppuVar9 = (undefined ***)ppuStack_698;
    pppuVar15 = (undefined ***)ppuStack_698;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    uStack_360 = 0xf;
    uStack_350 = 0x100;
    _objc_retain();
    ppuStack_368 = &PTR_SUB_110862760;
    pppuStack_328 = (undefined ***)0x0;
    ppuStack_330 = (undefined8 **)0x0;
    uStack_318 = 0;
    puStack_320 = (undefined *)0x0;
    plStack_308 = (long *)0x0;
    uStack_310 = 0;
    plStack_300 = (long *)0x0;
    uStack_2e8 = 10;
    uStack_2d8 = CONCAT22(*(undefined2 *)(puVar4 + 0x1a),0x100);
    ppuStack_2f0 = &PTR_FUN_110862700;
    pppuStack_2b0 = &ppuStack_368;
    uStack_2a0 = 0;
    puStack_2a8 = (undefined *)0x0;
    plStack_290 = (long *)0x0;
    uStack_298 = 0;
    plStack_288 = (long *)0x0;
    puVar5 = &uStack_3d9;
    ppuStack_6b0 = (undefined **)pppuVar15;
    ppuStack_338 = (undefined **)pppuVar15;
    puStack_2b8 = puVar4;
    FUN_1057bf76c();
    pppuVar15 = pppuVar9;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    uStack_448 = 0xf;
    uStack_438 = 0x100;
    _objc_retain();
    ppuStack_450 = &PTR_SUB_110862760;
    pppuStack_410 = (undefined ***)0x0;
    puStack_418 = (undefined4 *)0x0;
    uStack_400 = 0;
    puStack_408 = (undefined *)0x0;
    plStack_3f0 = (long *)0x0;
    uStack_3f8 = 0;
    plStack_3e8 = (long *)0x0;
    uStack_3d0 = 10;
    uStack_3c0 = CONCAT13(puVar5[0x1b],CONCAT12(puVar5[0x1a],0x100));
    ppuStack_3d8 = &PTR_FUN_110862700;
    pppuStack_398 = &ppuStack_450;
    pppuStack_240 = &ppuStack_3d8;
    uStack_388 = 0;
    puStack_390 = (undefined *)0x0;
    plStack_378 = (long *)0x0;
    uStack_380 = 0;
    plStack_370 = (long *)0x0;
    uStack_278 = 4;
    uStack_268 = 0x100;
    uStack_266 = CONCAT11(uStack_2d8._3_1_ & puVar5[0x1b],uStack_2d8._2_1_ | puVar5[0x1a]);
    ppuStack_280 = &PTR_SUB_1108629c8;
    pppuStack_248 = &ppuStack_2f0;
    plStack_218 = (long *)0x0;
    plStack_220 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    puStack_238 = (undefined *)0x0;
    puVar4 = &uStack_4c1;
    ppuStack_6b8 = (undefined **)pppuVar15;
    ppuStack_420 = (undefined **)pppuVar15;
    puStack_3a0 = puVar5;
    FUN_1057bfbd4();
    pppuVar10 = pppuVar9;
    func_0x00010c2975a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_538 = CONCAT44(uStack_538._4_4_,0xf);
    uStack_528 = CONCAT44(uStack_528._4_4_,0x100);
    _objc_retain();
    ppuStack_540 = &PTR_SUB_110862760;
    uStack_500 = 0;
    uStack_508 = 0;
    uStack_4f0 = 0;
    puStack_4f8 = (undefined *)0x0;
    plStack_4e0 = (long *)0x0;
    uStack_4e8 = 0;
    plStack_4d8 = (long *)0x0;
    uStack_4b8 = 10;
    uStack_4a8 = CONCAT13(puVar4[0x1b],CONCAT12(puVar4[0x1a],0x100));
    ppuStack_4c0 = &PTR_FUN_110862700;
    pppuStack_480 = &ppuStack_540;
    pppuStack_1d0 = &ppuStack_4c0;
    uStack_470 = 0;
    puStack_478 = (undefined *)0x0;
    plStack_460 = (long *)0x0;
    uStack_468 = 0;
    plStack_458 = (long *)0x0;
    bStack_1f6 = (byte)uStack_266 | puVar4[0x1a];
    bStack_1f5 = uStack_266._1_1_ & puVar4[0x1b];
    uStack_208 = 4;
    uStack_1f8 = 0x100;
    ppuStack_210 = &PTR_SUB_1108629c8;
    pppuStack_1d8 = &ppuStack_280;
    plStack_1a8 = (long *)0x0;
    plStack_1b0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1c8 = 0;
    puVar5 = &uStack_5b1;
    ppuStack_510 = (undefined **)pppuVar10;
    puStack_488 = puVar4;
    FUN_1057bfa5c();
    func_0x00010bf1bf00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuStack_6b0;
    pppuVar17 = pppuVar9;
    func_0x00010bf41a00();
    _objc_retainAutoreleasedReturnValue();
    uStack_620 = 0xf;
    uStack_610 = 0x100;
    _objc_retain();
    uStack_628 = &PTR_SUB_110862760;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    plStack_5c8 = (long *)0x0;
    uStack_5d0 = 0;
    plStack_5c0 = (long *)0x0;
    bStack_596 = puVar5[0x1a];
    bStack_595 = puVar5[0x1b];
    ppuStack_5a8 = (undefined **)CONCAT44(ppuStack_5a8._4_4_,10);
    uStack_598 = 0x100;
    ppuStack_5b0 = &PTR_FUN_110862700;
    puStack_570 = &uStack_628;
    pppuStack_160 = &ppuStack_5b0;
    uStack_560 = 0;
    uStack_568 = 0;
    plStack_550 = (long *)0x0;
    uStack_558 = 0;
    plStack_548 = (long *)0x0;
    bStack_186 = bStack_1f6 | bStack_596;
    bStack_185 = bStack_1f5 & bStack_595;
    uStack_198 = 4;
    uStack_188 = 0x100;
    ppuStack_1a0 = &PTR_SUB_1108629c8;
    pppuStack_168 = &ppuStack_210;
    plStack_138 = (long *)0x0;
    plStack_140 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_158 = 0;
    puStack_640 = (undefined8 *)0x0;
    puStack_638 = (undefined8 *)0x0;
    uStack_630 = 0;
    uStack_644 = 0;
    pppuVar15 = &ppuStack_130;
    ppuStack_5f8 = (undefined **)pppuVar17;
    puStack_578 = puVar5;
    func_0x0001000e77a0(pppuVar15,&ppuStack_1a0,&puStack_640,&uStack_644);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_6a8 = (undefined **)pppuVar15;
    if (puStack_640 != (undefined8 *)0x0) {
      puStack_638 = puStack_640;
      __ZdlPv();
    }
    plVar2 = plStack_138;
    ppuStack_1a0 = &PTR_SUB_1108629c8;
    plStack_138 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_140;
    ppuVar14 = ppuStack_6b8;
    plStack_140 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_158 != 0) {
      __ZdlPv();
    }
    plVar2 = plStack_548;
    ppuStack_5b0 = &PTR_FUN_110862700;
    plStack_548 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_550;
    plStack_550 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puStack_640 = &uStack_568;
    func_0x000100105004(&puStack_640);
    plVar2 = plStack_5c0;
    uStack_628 = &PTR_SUB_110862760;
    plStack_5c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_5c8;
    plStack_5c8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puStack_640 = &uStack_5e0;
    func_0x000100105004(&puStack_640);
    _objc_release(ppuStack_5f8);
    _objc_release(pppuVar17);
    _objc_release(pppuVar9);
    plVar2 = plStack_1a8;
    ppuStack_210 = &PTR_SUB_1108629c8;
    plStack_1a8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1b0;
    plStack_1b0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_1c8 != 0) {
      __ZdlPv();
    }
    plVar2 = plStack_458;
    ppuStack_4c0 = &PTR_FUN_110862700;
    plStack_458 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_460;
    plStack_460 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_5b0 = &puStack_478;
    func_0x000100105004(&ppuStack_5b0);
    plVar2 = plStack_4d8;
    ppuStack_540 = &PTR_SUB_110862760;
    plStack_4d8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_4e0;
    plStack_4e0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_5b0 = &puStack_4f8;
    func_0x000100105004(&ppuStack_5b0);
    _objc_release(ppuStack_510);
    _objc_release(pppuVar10);
    plVar2 = plStack_218;
    ppuStack_280 = &PTR_SUB_1108629c8;
    plStack_218 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_220;
    plStack_220 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if ((undefined **)puStack_238 != (undefined **)0x0) {
      __ZdlPv();
    }
    plVar2 = plStack_370;
    ppuStack_3d8 = &PTR_FUN_110862700;
    plStack_370 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_378;
    plStack_378 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_4c0 = &puStack_390;
    func_0x000100105004(&ppuStack_4c0);
    plVar2 = plStack_3e8;
    ppuStack_450 = &PTR_SUB_110862760;
    plStack_3e8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_3f0;
    plStack_3f0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_4c0 = &puStack_408;
    func_0x000100105004(&ppuStack_4c0);
    _objc_release(ppuStack_420);
    _objc_release(ppuVar14);
    plVar2 = plStack_288;
    pppuVar15 = (undefined ***)&puStack_2a8;
    ppuStack_2f0 = &PTR_FUN_110862700;
    plStack_288 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_290;
    plStack_290 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_3d8 = (undefined **)pppuVar15;
    func_0x000100105004(&ppuStack_3d8);
    plVar2 = plStack_300;
    ppuStack_368 = &PTR_SUB_110862760;
    plStack_300 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_308;
    plStack_308 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_3d8 = &puStack_320;
    func_0x000100105004(&ppuStack_3d8);
    _objc_release(ppuStack_338);
    _objc_release(ppuVar13);
    func_0x0001000e76e0(&uStack_108);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    lStack_688 = 0;
    ppuStack_690 = (undefined **)0x0;
    uStack_678 = 0;
    plStack_680 = (long *)0x0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    uStack_660 = 0;
    pppuVar10 = (undefined ***)ppuStack_6a8;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = &ppuStack_690;
    ppuVar13 = apuStack_f8;
    pppuVar6 = pppuVar10;
    func_0x00010bf52a60();
    if (pppuVar6 == (undefined ***)0x0) {
      _objc_release(pppuVar10);
      pppuVar17 = (undefined ***)0x0;
    }
    else {
      pppuVar17 = (undefined ***)0x0;
      lVar18 = *plStack_680;
      do {
        pppuVar15 = (undefined ***)0x0;
        do {
          if (*plStack_680 != lVar18) {
            _objc_enumerationMutation(pppuVar10);
          }
          puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
          pppuVar19 = *(undefined ****)(lStack_688 + (long)pppuVar15 * 8);
          pppuVar9 = pppuVar19;
          func_0x00010bf1ad20(pppuVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c225c20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pppuVar9);
          puVar8 = puVar7;
          func_0x00010c072060();
          if ((int)puVar8 != 0) {
            _objc_retain(pppuVar19);
            _objc_release(pppuVar17);
            pppuVar17 = pppuVar19;
          }
          _objc_release(puVar7);
          pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
        } while (pppuVar6 != pppuVar15);
        pppuVar9 = &ppuStack_690;
        ppuVar13 = apuStack_f8;
        pppuVar6 = pppuVar10;
        func_0x00010bf52a60();
      } while (pppuVar6 != (undefined ***)0x0);
      _objc_release(pppuVar10);
      if (pppuVar17 != (undefined ***)0x0) {
        _objc_retain(pppuVar17);
      }
    }
    _objc_release(ppuStack_6a8);
    _objc_release(puVar3);
    pppuVar10 = pppuVar17;
  }
  _objc_release(pppuVar10);
  _objc_release(lStack_6a0);
  pppuVar6 = (undefined ***)ppuStack_698;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar17);
    return pppuVar17;
  }
  ___stack_chk_fail();
  func_0x000105007830(&ppuStack_210);
  FUN_1050048c0(&ppuStack_368);
  func_0x000105004938(&ppuStack_3d8);
  _objc_release(ppuStack_6b0);
  FUN_1050048c0(&ppuStack_280);
  func_0x000105004938(&ppuStack_2f0);
  _objc_release(ppuStack_6a8);
  func_0x000104d96620(&ppuStack_540);
  _objc_release(lStack_6a0);
  _objc_release(ppuStack_698);
  __Unwind_Resume();
  pppuVar19 = &ppuStack_700;
  pcStack_6c8 = FUN_1057b9978;
  pppuStack_6f0 = pppuVar10;
  pppuStack_6e8 = pppuVar17;
  pppuStack_6e0 = (undefined ***)ppuVar16;
  ppuStack_6d8 = (undefined **)pppuVar15;
  puStack_6d0 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar9);
  _objc_retain(ppuVar13);
  puStack_6f8 = PTR_PTR_1126ea418;
  ppuStack_700 = (undefined **)pppuVar6;
  _objc_msgSendSuper2(&ppuStack_700,PTR_s_init_1125d9248);
  if (pppuVar19 != (undefined ***)0x0) {
    _objc_retain(pppuVar9);
    ppuVar16 = pppuVar19[1];
    pppuVar19[1] = (undefined **)pppuVar9;
    _objc_release(ppuVar16);
    ppuVar16 = (undefined **)PTR_PTR_1126b02d0;
    _objc_opt_new();
    ppuVar14 = pppuVar19[2];
    pppuVar19[2] = ppuVar16;
    _objc_release(ppuVar14);
    _objc_retain(ppuVar13);
    ppuVar16 = pppuVar19[3];
    pppuVar19[3] = ppuVar13;
    _objc_release(ppuVar16);
  }
  _objc_release(ppuVar13);
  _objc_release(pppuVar9);
  return pppuVar19;
}



/* Entry: 1057b9978; end: 1057b9a63; -[SCCommerceUnifiedCartCoordinator initWithDocObjectContext:artifactManager:] */

undefined1 *
FUN_1057b9978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea418;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057b9a64; end: 1057b9a6f; +[SCCommerceUnifiedCartCoordinator announcerIdentifier] */

undefined ** FUN_1057b9a64(void)

{
  return &PTR____CFConstantStringClassReference_110e02a18;
}



/* Entry: 1057b9a70; end: 1057b9a77; -[SCCommerceUnifiedCartCoordinator addListener:] */

void FUN_1057b9a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1057b9a78; end: 1057b9a7f; -[SCCommerceUnifiedCartCoordinator removeListener:] */

void FUN_1057b9a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1057b9a80; end: 1057b9c0f; -[SCCommerceUnifiedCartCoordinator canAddAllLineItemsToCheckout:] */

undefined1 * FUN_1057b9a80(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1057b8628(param_3,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  lVar12 = param_3;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(ulong *)(lStack_118 + lVar10 * 8);
        uVar1 = uVar7;
        func_0x00010bf1ad20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
        if ((uVar5 != 0) && (func_0x0001057b65a0(), (uVar7 & 1) != 0)) {
          puVar6 = (undefined1 *)0x0;
          goto LAB_1057b9b88;
        }
        lVar10 = lVar10 + 1;
      } while (lVar12 != lVar10);
      lVar12 = param_3;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  puVar6 = (undefined1 *)0x1;
LAB_1057b9b88:
  _objc_release(param_3);
  lVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar2 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1057b8628(puVar8,*(undefined8 *)(lVar12 + 8));
  _objc_retainAutoreleasedReturnValue();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  _objc_retain();
  puVar6 = (undefined1 *)puVar8;
  func_0x00010bf52a60();
  if (puVar6 != (undefined1 *)0x0) {
    lVar9 = *plStack_230;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar9) {
          _objc_enumerationMutation(puVar8);
        }
        lVar10 = *(long *)(lStack_238 + (long)puVar11 * 8);
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar10 != 0) {
          func_0x00010be0f9a0(lVar12);
        }
        puVar11 = puVar11 + 1;
      } while (puVar6 != puVar11);
      puVar6 = (undefined1 *)puVar8;
      puVar2 = &uStack_240;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined1 *)0x0);
  }
  _objc_release(puVar8);
  puVar6 = (undefined1 *)puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  __Unwind_Resume();
  puVar8 = &uStack_370;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1057b8628(puVar2,*(undefined8 *)(puVar6 + 8));
  _objc_retainAutoreleasedReturnValue();
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  _objc_retain();
  puVar11 = (undefined1 *)puVar2;
  func_0x00010bf52a60();
  if (puVar11 != (undefined1 *)0x0) {
    lVar12 = *plStack_360;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_360 != lVar12) {
          _objc_enumerationMutation(puVar2);
        }
        puVar8 = *(undefined8 **)(lStack_368 + (long)puVar13 * 8);
        puVar3 = (undefined1 *)puVar8;
        func_0x00010bf1ad20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf529e0();
        _objc_release(puVar3);
        if (puVar4 == (undefined1 *)0x0) {
          uVar5 = *(ulong *)(puVar6 + 0x18);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar5;
          func_0x00010c0746a0();
          _objc_release(uVar5);
          if ((uVar1 & 1) != 0) {
            puVar6 = (undefined1 *)0x1;
            goto LAB_1057b9ea8;
          }
        }
        puVar13 = puVar13 + 1;
      } while (puVar11 != puVar13);
      puVar11 = (undefined1 *)puVar2;
      puVar8 = &uStack_370;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined1 *)0x0);
  }
  puVar6 = (undefined1 *)0x0;
LAB_1057b9ea8:
  _objc_release(puVar2);
  puVar11 = (undefined1 *)puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  FUN_1057b8628(puVar8,*(undefined8 *)(puVar11 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar8;
  func_0x000100504554();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 1057b9c10; end: 1057b9d77; -[SCCommerceUnifiedCartCoordinator prepareLineItemsForCheckoutForStoreId:] */

undefined1 * FUN_1057b9c10(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar1 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1057b8628(param_3,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  puVar6 = param_3;
  func_0x00010bf52a60();
  if (puVar6 != (undefined1 *)0x0) {
    lVar9 = *plStack_110;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lStack_118 + (long)puVar10 * 8);
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          func_0x00010be0f9a0(param_1);
        }
        puVar10 = puVar10 + 1;
      } while (puVar6 != puVar10);
      puVar6 = param_3;
      puVar1 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1057b8628(puVar1,*(undefined8 *)(puVar6 + 8));
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain();
  puVar10 = (undefined1 *)puVar1;
  func_0x00010bf52a60();
  if (puVar10 != (undefined1 *)0x0) {
    lVar9 = *plStack_240;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        puVar8 = *(undefined8 **)(lStack_248 + (long)puVar11 * 8);
        puVar2 = (undefined1 *)puVar8;
        func_0x00010bf1ad20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf529e0();
        _objc_release(puVar2);
        if (puVar3 == (undefined1 *)0x0) {
          uVar4 = *(ulong *)(puVar6 + 0x18);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0746a0();
          _objc_release(uVar4);
          if ((uVar5 & 1) != 0) {
            puVar6 = (undefined1 *)0x1;
            goto LAB_1057b9ea8;
          }
        }
        puVar11 = puVar11 + 1;
      } while (puVar10 != puVar11);
      puVar10 = (undefined1 *)puVar1;
      puVar8 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined1 *)0x0);
  }
  puVar6 = (undefined1 *)0x0;
LAB_1057b9ea8:
  _objc_release(puVar1);
  puVar10 = (undefined1 *)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  FUN_1057b8628(puVar8,*(undefined8 *)(puVar10 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar8;
  func_0x000100504554();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 1057b9d78; end: 1057b9f43; -[SCCommerceUnifiedCartCoordinator isCartFetchingLineItemArtifactsForStoreId:] */

undefined1 * FUN_1057b9d78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1057b8628(param_3,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        puVar6 = *(undefined8 **)(lStack_128 + lVar8 * 8);
        puVar5 = (undefined1 *)puVar6;
        func_0x00010bf1ad20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010bf529e0();
        _objc_release(puVar5);
        if (puVar2 == (undefined1 *)0x0) {
          uVar3 = *(ulong *)(param_1 + 0x18);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0746a0();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) {
            puVar5 = (undefined1 *)0x1;
            goto LAB_1057b9ea8;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar5 = (undefined1 *)0x0;
LAB_1057b9ea8:
  _objc_release(param_3);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  FUN_1057b8628(puVar6,*(undefined8 *)(lVar1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar6;
  func_0x000100504554();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1057b9f44; end: 1057b9fa3; -[SCCommerceUnifiedCartCoordinator getLineItemsForStore:] */

void FUN_1057b9f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1057b8628(param_3,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100504554();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057b9fa4; end: 1057bac03;  */

void FUN_1057b9fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_2c0 [8];
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b05a0;
  puStack_158 = param_6;
  _objc_alloc();
  puVar2 = param_6;
  func_0x00010bf5de60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2807c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006ee0();
  puStack_170 = puVar1;
  _objc_release(param_6);
  _objc_release(puVar2);
  puVar1 = puStack_158;
  func_0x00010c11cf60(puStack_158);
  puVar2 = puStack_170;
  func_0x000106d78414(puStack_170,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puStack_158;
  puStack_188 = puVar2;
  func_0x00010c25cd20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_158;
  if (puVar12 == (undefined *)0x0) {
    puStack_178 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b05a0;
    _objc_alloc();
    puVar13 = puVar1;
    func_0x00010bf5de60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cd20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006ee0();
    puStack_178 = puVar2;
    _objc_release(puVar1);
    _objc_release(puVar13);
  }
  _objc_release(puVar12);
  puVar1 = puStack_158;
  func_0x00010c25cd20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puStack_180 = (undefined *)0x0;
  }
  else {
    puVar2 = puStack_158;
    func_0x00010c11cf60(puStack_158);
    puVar12 = puStack_178;
    func_0x000106d78414(puStack_178,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar12;
  }
  _objc_release(puVar1);
  puVar1 = puStack_158;
  func_0x00010c073c00();
  if ((int)puVar1 == 0) {
    puVar1 = puStack_158;
    func_0x00010c115e40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000106d772a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar2;
    _objc_release(puVar1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = puStack_158;
    puStack_168 = puVar1;
    func_0x00010c26de80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x0001057c3d78();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) {
      puStack_190 = (undefined *)0x0;
    }
    else {
      unaff_d8 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      puStack_198 = puVar1;
      func_0x00010c0d7b60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      puStack_160 = puVar1;
      func_0x00010bf52a60();
      if (puVar2 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        lVar11 = *plStack_140;
        do {
          puVar13 = (undefined *)0x0;
          do {
            if (*plStack_140 != lVar11) {
              _objc_enumerationMutation(puStack_160);
            }
            uVar14 = *(undefined8 *)(lStack_148 + (long)puVar13 * 8);
            puVar1 = puStack_158;
            func_0x00010bfb72c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar1;
            func_0x00010bf529e0();
            _objc_release(puVar1);
            if (puVar12 < puVar3) {
              puVar1 = PTR_PTR_1126be518;
              _objc_alloc(PTR_PTR_1126be518);
              uVar4 = uVar14;
              func_0x00010c0d7b40(uVar14);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar14;
              func_0x00010bfe5ec0(uVar14);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puStack_158;
              func_0x00010bfb72c0(puStack_158);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar3;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              _CGRectFromString();
              uVar15 = unaff_d8;
              func_0x00010c141ac0(uVar14);
              func_0x00010c02f240(unaff_d8,param_2,param_3,param_4,uVar15,puVar1);
              func_0x00010befa120(puStack_168);
              _objc_release(puVar1);
              _objc_release(puVar6);
              _objc_release(puVar3);
              _objc_release(uVar5);
              _objc_release(uVar4);
              puVar12 = puVar12 + 1;
            }
            puVar1 = puStack_160;
            puVar13 = puVar13 + 1;
          } while (puVar2 != puVar13);
          puVar2 = puStack_160;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puVar1);
      puVar1 = puStack_198;
      puVar2 = PTR_PTR_1126be520;
      _objc_alloc();
      puVar12 = puVar1;
      func_0x00010bfe5ec0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010c270f20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puStack_158;
      func_0x00010c26e160(puStack_158);
      _objc_retainAutoreleasedReturnValue();
      _CGSizeFromString();
      puVar6 = puStack_158;
      uVar14 = unaff_d8;
      uVar4 = param_2;
      func_0x00010c26e000(puStack_158);
      _objc_retainAutoreleasedReturnValue();
      _CGSizeFromString();
      func_0x00010c130c80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b800(unaff_d8,param_2,uVar14,uVar4);
      puStack_190 = puVar2;
      _objc_release(puVar1);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar1 = puStack_198;
      unaff_d9 = param_2;
    }
    _objc_release(puVar1);
    _objc_release(puStack_168);
  }
  puVar1 = puStack_158;
  puVar2 = PTR_PTR_1126be528;
  _objc_alloc();
  puVar12 = puVar1;
  func_0x00010bf1ad20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bf41a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf0b260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7c80();
  puStack_168 = puVar2;
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  puStack_160 = (undefined *)0x0;
  puVar2 = puStack_158;
  func_0x00010c073c00();
  puVar1 = puStack_158;
  if ((int)puVar2 == 0) {
    puStack_160 = (undefined *)0x0;
  }
  else {
    puStack_160 = (undefined *)0x0;
    puVar2 = PTR_PTR_1126b02b8;
    _objc_alloc();
    puStack_160 = (undefined *)0x0;
    func_0x00010c080ec0(puVar1);
    puStack_160 = (undefined *)0x0;
    puVar12 = puVar1;
    func_0x00010c257a40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c2577e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c257cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c13fc20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c23f840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf87a40();
    puStack_1f0 = (undefined *)
                  (CONCAT71((int7)((ulong)puStack_1f0 >> 8),(char)puVar1) & 0xffffffffffff00ff);
    puStack_1f8 = (undefined *)0x0;
    puStack_200 = (undefined *)0x0;
    puStack_220 = (undefined *)0x0;
    puStack_228 = (undefined *)0x0;
    puStack_230 = puVar3;
    puStack_218 = puVar6;
    puStack_210 = puVar7;
    puStack_208 = puVar8;
    func_0x00010c01f9e0();
    puStack_160 = puVar2;
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar12);
  }
  puVar2 = puStack_158;
  puVar1 = PTR_PTR_1126b0598;
  _objc_alloc();
  puVar12 = puVar2;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  puStack_1a8 = puVar12;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  puStack_1b0 = puVar13;
  FUN_1057b7ca4();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  puStack_1c0 = puVar1;
  puStack_1a0 = puVar12;
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_198 = puVar13;
  func_0x00010c11cf60(puVar2);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b8 = puVar1;
  func_0x00010c0c2a60(puStack_158);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_158;
  puVar12 = puStack_158;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c297560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c26aa40();
  puVar7 = puVar1;
  func_0x00010c137b20();
  puVar8 = puVar1;
  func_0x00010bf1ad20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf529e0();
  puStack_1e0 = (undefined *)0x0;
  if (puVar9 != (undefined *)0x0) {
    puStack_1e0 = puStack_168;
  }
  puVar9 = puVar1;
  func_0x00010c0fcb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c073c00();
  uStack_1c8 = SUB81(puVar1,0);
  uStack_1d0 = 0;
  uStack_1e7 = SUB81(puVar7,0);
  uStack_1e8 = SUB81(puVar6,0);
  puStack_1f0 = puStack_190;
  puStack_208 = puStack_178;
  puStack_200 = puStack_180;
  puStack_218 = puStack_170;
  puStack_210 = puStack_188;
  puVar1 = puStack_1c0;
  puVar7 = puStack_1a8;
  puVar10 = puStack_1b0;
  puStack_230 = puVar2;
  puStack_228 = puVar12;
  puStack_220 = puVar13;
  puStack_1f8 = puVar3;
  puStack_1d8 = puVar9;
  func_0x00010c03a720(puStack_1c0);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puStack_1b8);
  _objc_release(puStack_198);
  _objc_release(puStack_1a0);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a8);
  _objc_release(puStack_160);
  _objc_release(puStack_168);
  _objc_release(puStack_190);
  _objc_release(puStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_188);
  _objc_release(puStack_170);
  puVar13 = puStack_158;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puStack_198);
  _objc_release(puStack_168);
  _objc_release(puStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_188);
  _objc_release(puStack_170);
  _objc_release(puStack_158);
  puVar1 = puVar13;
  __Unwind_Resume();
  pcStack_238 = FUN_1057bac04;
  uStack_280 = unaff_d9;
  uStack_278 = unaff_d8;
  puStack_270 = puVar12;
  puStack_268 = puVar6;
  puStack_260 = puVar9;
  puStack_258 = puVar8;
  puStack_250 = puVar2;
  puStack_248 = puVar13;
  puStack_240 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  _objc_initWeak(auStack_288,puVar1);
  puVar2 = puVar7;
  FUN_1057b8628(puVar7,*(undefined8 *)(puVar1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar1 + 8);
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_1057bada4;
  puStack_2a0 = &UNK_1108b26e8;
  _objc_retain();
  puStack_298 = puVar2;
  _objc_copyWeak(auStack_290,auStack_288);
  _objc_copyWeak(auStack_2c0,auStack_288);
  _objc_retain(puVar10);
  func_0x00010c0f8500(uVar14);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_2c0);
  _objc_destroyWeak(auStack_290);
  _objc_release(puStack_298);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_288);
  _objc_release(puVar10);
  _objc_release(puVar7);
  return;
}



/* Entry: 1057bac04; end: 1057bada3; -[SCCommerceUnifiedCartCoordinator clearCartForStore:completion:] */

void FUN_1057bac04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  FUN_1057b8628(param_3,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1057bada4;
  puStack_70 = &UNK_1108b26e8;
  _objc_retain();
  uStack_68 = uVar1;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057bada4; end: 1057baf8b;  */

void FUN_1057bada4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained();
      if (lVar3 == 0) goto LAB_1057baee0;
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2de40();
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126be538;
      FUN_1057c27e4(PTR_PTR_1126be538,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  }
LAB_1057baee0:
  _objc_release(lVar7);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  lVar2 = lVar2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010beeb660(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1057baf8c; end: 1057bafeb;  */

void FUN_1057baf8c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beeb660(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057bafec; end: 1057bb03b; -[SCCommerceUnifiedCartCoordinator numberOfCarts] */

undefined8 FUN_1057bafec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfc3820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1057bb03c; end: 1057bb8bf; -[SCCommerceUnifiedCartCoordinator getCarts] */

undefined ** FUN_1057bb03c(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined4 uStack_5f8;
  undefined1 uStack_5f1;
  long lStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined **ppuStack_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5a8;
  undefined **ppuStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined1 uStack_549;
  undefined **ppuStack_548;
  undefined4 uStack_540;
  undefined2 uStack_530;
  byte bStack_52e;
  byte bStack_52d;
  undefined1 *puStack_510;
  undefined ***pppuStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  undefined **ppuStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4c0;
  undefined **ppuStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  long *plStack_470;
  undefined1 uStack_461;
  undefined **ppuStack_460;
  undefined4 uStack_458;
  undefined2 uStack_448;
  byte bStack_446;
  byte bStack_445;
  undefined1 *puStack_428;
  undefined ***pppuStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  long *plStack_3f8;
  undefined **ppuStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3d8;
  undefined **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined1 uStack_379;
  undefined **ppuStack_378;
  undefined4 uStack_370;
  undefined2 uStack_360;
  byte bStack_35e;
  byte bStack_35d;
  undefined1 *puStack_340;
  undefined ***pppuStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  long *plStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined **ppuStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  undefined2 uStack_276;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  byte bStack_206;
  byte bStack_205;
  undefined ***pppuStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  byte bStack_196;
  byte bStack_195;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  undefined2 uStack_128;
  byte bStack_126;
  byte bStack_125;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  alStack_78[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 8);
  _objc_opt_class(PTR_PTR_1126be530);
  if (lVar10 == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    puStack_d0 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa6be0(&puStack_d0,lVar10);
  }
  puVar2 = &uStack_291;
  FUN_1057bf8e4();
  uStack_300 = 0xf;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_SUB_110862760;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  puStack_2c0 = (undefined *)0x0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_110e02918;
  plStack_2a0 = (long *)0x0;
  uStack_276 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_288 = 0xb;
  uStack_278 = 0x100;
  ppuStack_290 = &PTR_FUN_110862700;
  pppuStack_250 = &ppuStack_308;
  uStack_240 = 0;
  puStack_248 = (undefined *)0x0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  plStack_228 = (long *)0x0;
  puVar3 = &uStack_379;
  puStack_258 = puVar2;
  FUN_1057bf8e4();
  uStack_3e8 = 0xf;
  uStack_3d8 = 0x100;
  ppuStack_3f0 = &PTR_SUB_110862760;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  uStack_3a0 = 0;
  puStack_3a8 = (undefined *)0x0;
  plStack_390 = (long *)0x0;
  uStack_398 = 0;
  ppuStack_3c0 = &PTR____CFConstantStringClassReference_110e02938;
  plStack_388 = (long *)0x0;
  bStack_35e = puVar3[0x1a];
  bStack_35d = puVar3[0x1b];
  uStack_370 = 0xb;
  uStack_360 = 0x100;
  ppuStack_378 = &PTR_FUN_110862700;
  pppuStack_338 = &ppuStack_3f0;
  pppuStack_1e0 = &ppuStack_378;
  plStack_310 = (long *)0x0;
  uStack_328 = 0;
  puStack_330 = (undefined *)0x0;
  plStack_318 = (long *)0x0;
  uStack_320 = 0;
  bStack_206 = (byte)uStack_276 | bStack_35e;
  bStack_205 = uStack_276._1_1_ & bStack_35d;
  uStack_218 = 4;
  uStack_208 = 0x100;
  ppuStack_220 = &PTR_SUB_1108629c8;
  pppuStack_1e8 = &ppuStack_290;
  uStack_1d0 = 0;
  lStack_1d8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1c8 = 0;
  plStack_1b8 = (long *)0x0;
  puVar2 = &uStack_461;
  puStack_340 = puVar3;
  FUN_1057bf8e4();
  uStack_4d0 = 0xf;
  uStack_4c0 = 0x100;
  ppuStack_4d8 = &PTR_SUB_110862760;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  puStack_490 = (undefined *)0x0;
  plStack_478 = (long *)0x0;
  uStack_480 = 0;
  ppuStack_4a8 = &PTR____CFConstantStringClassReference_110e02958;
  plStack_470 = (long *)0x0;
  bStack_446 = puVar2[0x1a];
  bStack_445 = puVar2[0x1b];
  uStack_458 = 0xb;
  uStack_448 = 0x100;
  ppuStack_460 = &PTR_FUN_110862700;
  pppuStack_420 = &ppuStack_4d8;
  pppuStack_170 = &ppuStack_460;
  plStack_3f8 = (long *)0x0;
  uStack_410 = 0;
  puStack_418 = (undefined *)0x0;
  plStack_400 = (long *)0x0;
  uStack_408 = 0;
  bStack_196 = bStack_206 | bStack_446;
  bStack_195 = bStack_205 & bStack_445;
  uStack_1a8 = 4;
  uStack_198 = 0x100;
  ppuStack_1b0 = &PTR_SUB_1108629c8;
  pppuStack_178 = &ppuStack_220;
  uStack_160 = 0;
  lStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  plStack_148 = (long *)0x0;
  puVar3 = &uStack_549;
  puStack_428 = puVar2;
  FUN_1057bf8e4();
  uStack_5b8 = 0xf;
  uStack_5a8 = 0x100;
  ppuStack_590 = &PTR____CFConstantStringClassReference_110e02978;
  ppuStack_5c0 = &PTR_SUB_110862760;
  uStack_580 = 0;
  uStack_588 = 0;
  uStack_570 = 0;
  uStack_578 = 0;
  plStack_560 = (long *)0x0;
  uStack_568 = 0;
  plStack_558 = (long *)0x0;
  bStack_52e = puVar3[0x1a];
  bStack_52d = puVar3[0x1b];
  uStack_540 = 0xb;
  uStack_530 = 0x100;
  ppuStack_548 = &PTR_FUN_110862700;
  pppuStack_508 = &ppuStack_5c0;
  pppuStack_100 = &ppuStack_548;
  plStack_4e0 = (long *)0x0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  plStack_4e8 = (long *)0x0;
  uStack_4f0 = 0;
  bStack_126 = bStack_196 | bStack_52e;
  bStack_125 = bStack_195 & bStack_52d;
  uStack_138 = 4;
  uStack_128 = 0x100;
  ppuStack_140 = &PTR_SUB_1108629c8;
  pppuStack_108 = &ppuStack_1b0;
  uStack_f0 = 0;
  lStack_f8 = 0;
  plStack_e0 = (long *)0x0;
  uStack_e8 = 0;
  plStack_d8 = (long *)0x0;
  puVar2 = &uStack_5f1;
  puStack_510 = puVar3;
  FUN_1057bf8e4();
  puStack_98 = *(undefined8 **)(puVar2 + 0x10);
  uStack_90 = puVar2[0x19];
  uStack_8f = puVar2[0x18];
  uStack_80 = *(undefined8 *)(puVar2 + 0x28);
  uStack_8c = 0;
  pcStack_88 = FUN_1057be4d8;
  lStack_5e8 = 0;
  uStack_5e0 = 0;
  lStack_5f0 = 0;
  func_0x000100c435d0(&lStack_5f0,&puStack_98,alStack_78,1);
  func_0x000100c436b8(&lStack_5d8,&lStack_5f0);
  uStack_5f8 = 0;
  ppuVar4 = &puStack_d0;
  func_0x0001000e77a0(ppuVar4,&ppuStack_140,&lStack_5d8,&uStack_5f8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  if (lStack_5d8 != 0) {
    lStack_5d0 = lStack_5d8;
    __ZdlPv();
  }
  if (lStack_5f0 != 0) {
    lStack_5e8 = lStack_5f0;
    __ZdlPv();
  }
  plVar1 = plStack_d8;
  ppuStack_140 = &PTR_SUB_1108629c8;
  plStack_d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_f8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_4e0;
  ppuStack_548 = &PTR_FUN_110862700;
  plStack_4e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4e8;
  plStack_4e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_98 = &uStack_500;
  func_0x000100105004(&puStack_98);
  plVar1 = plStack_558;
  ppuStack_5c0 = &PTR_SUB_110862760;
  plStack_558 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_560;
  plStack_560 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_98 = &uStack_578;
  func_0x000100105004(&puStack_98);
  _objc_release(ppuStack_590);
  plVar1 = plStack_148;
  ppuStack_1b0 = &PTR_SUB_1108629c8;
  plStack_148 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_168 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_3f8;
  ppuStack_460 = &PTR_FUN_110862700;
  plStack_3f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_400;
  plStack_400 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_548 = &puStack_418;
  func_0x000100105004(&ppuStack_548);
  plVar1 = plStack_470;
  ppuStack_4d8 = &PTR_SUB_110862760;
  plStack_470 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_478;
  plStack_478 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_548 = &puStack_490;
  func_0x000100105004(&ppuStack_548);
  _objc_release(ppuStack_4a8);
  plVar1 = plStack_1b8;
  ppuStack_220 = &PTR_SUB_1108629c8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_310;
  ppuStack_378 = &PTR_FUN_110862700;
  plStack_310 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_318;
  plStack_318 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_460 = &puStack_330;
  func_0x000100105004(&ppuStack_460);
  plVar1 = plStack_388;
  ppuStack_3f0 = &PTR_SUB_110862760;
  plStack_388 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_390;
  plStack_390 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_460 = &puStack_3a8;
  func_0x000100105004(&ppuStack_460);
  _objc_release(ppuStack_3c0);
  plVar1 = plStack_228;
  ppuStack_290 = &PTR_FUN_110862700;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_378 = &puStack_248;
  func_0x000100105004(&ppuStack_378);
  plVar1 = plStack_2a0;
  ppuStack_308 = &PTR_SUB_110862760;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_378 = &puStack_2c0;
  func_0x000100105004(&ppuStack_378);
  _objc_release(ppuStack_2d8);
  func_0x0001000e76e0(&uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  ppuVar4 = &PTR___NSConcreteGlobalBlock_1108b2768;
  ppuVar6 = ppuVar5;
  func_0x00010bfce6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR___NSConcreteGlobalBlock_1108b27a8;
  ppuVar7 = ppuVar6;
  func_0x000100504554();
  _objc_release(ppuVar6);
  ppuVar8 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_78[0]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  __Unwind_Resume(ppuVar8);
  _objc_retain(ppuVar4);
  func_0x00010c257800(ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c257800(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar9;
  func_0x00010c0720c0(ppuVar9);
  _objc_release(ppuVar5);
  _objc_release(ppuVar9);
  _objc_release(ppuVar4);
  return ppuVar6;
}



/* Entry: 1057bb8c0; end: 1057bb97b;  */

undefined8 FUN_1057bb8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c257800(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c257800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1057bb97c; end: 1057bb99b;  */

void FUN_1057bb97c(undefined8 param_1,undefined8 param_2)

{
  FUN_1057b7e6c(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057bb99c; end: 1057bba2b; -[SCCommerceUnifiedCartCoordinator getCart:] */

void FUN_1057bb99c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1057b8628(param_3,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  FUN_1057b7e6c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057bba2c; end: 1057bc877; -[SCCommerceUnifiedCartCoordinator addLineItem:completion:] */

void FUN_1057bba2c(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  undefined **ppuVar39;
  undefined **ppuVar40;
  undefined **ppuVar41;
  undefined **ppuVar42;
  undefined **ppuVar43;
  undefined1 *puVar44;
  long lVar45;
  undefined **ppuVar46;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_218;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_1057b7dec;
  uStack_110 = 0x1057b7dfc;
  uStack_108 = 0;
  ppuVar1 = param_3;
  func_0x00010c26de80(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0d7b60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar46 = ppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar46;
  func_0x00010c0d7b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1057b7e04;
  puStack_140 = &UNK_1108b25f8;
  puStack_138 = &uStack_130;
  func_0x00010c0bf3c0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar46);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  ppuVar1 = param_3;
  func_0x00010c26de80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0d7b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar45 = *plStack_190;
    do {
      ppuVar46 = (undefined **)0x0;
      do {
        if (*plStack_190 != lVar45) {
          _objc_enumerationMutation(ppuVar2);
        }
        uVar5 = *(undefined8 *)(lStack_198 + (long)ppuVar46 * 8);
        func_0x00010bfb68e0(uVar5);
        _NSStringFromCGRect();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar5);
        ppuVar46 = (undefined **)((long)ppuVar46 + 1);
      } while (ppuVar1 != ppuVar46);
      ppuVar1 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  ppuVar1 = param_3;
  FUN_1057b6524();
  if ((int)ppuVar1 == 0) {
    ppuVar1 = param_3;
    func_0x00010bf1bf00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_218 = ppuVar1;
    func_0x00010bf0b260();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_opt_new();
    ppuVar2 = ppuVar1;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_218 = ppuVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar1);
  puVar6 = PTR_PTR_1126be530;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar46 = param_3;
  func_0x00010c2579e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar46;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = param_3;
  func_0x00010c2579e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bfe5be0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = param_3;
  func_0x00010c11cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  ppuVar11 = param_3;
  func_0x00010c0c2a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  ppuVar12 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_3;
  func_0x00010c297440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_3;
  func_0x00010c2807c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x00010bf02460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = param_3;
  func_0x00010c25cd20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar16;
  func_0x00010bf02460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = param_3;
  func_0x00010c2807c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar18;
  func_0x00010bf5de60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_3;
  func_0x00010c2579e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar20;
  func_0x00010c13fc20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = param_3;
  func_0x00010bf1bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar22;
  func_0x00010bf1ad20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = param_3;
  func_0x00010bf1bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = ppuVar24;
  func_0x00010bf41a00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = param_3;
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar27 = param_3;
  func_0x00010bf1bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = ppuVar27;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar29 = param_3;
  func_0x00010c26de80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar30 = ppuVar29;
  FUN_1057c3d68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c073bc0();
  ppuVar31 = param_3;
  func_0x00010c2579e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078780();
  ppuVar32 = param_3;
  func_0x00010c26de80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar33 = ppuVar32;
  func_0x00010c0ed920();
  _NSStringFromCGSize();
  _objc_retainAutoreleasedReturnValue();
  ppuVar34 = param_3;
  func_0x00010c26de80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar35 = ppuVar34;
  func_0x00010c0c28a0();
  _NSStringFromCGSize();
  _objc_retainAutoreleasedReturnValue();
  ppuVar36 = param_3;
  func_0x00010c073bc0();
  if ((int)ppuVar36 == 0) {
    ppuStack_2b8 = (undefined **)0x0;
  }
  else {
    ppuStack_2b8 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar37 = param_3;
  func_0x00010c073bc0();
  if ((int)ppuVar37 != 0) {
    func_0x00010c26aa40();
  }
  ppuVar37 = param_3;
  func_0x00010c073bc0();
  if ((int)ppuVar37 != 0) {
    func_0x00010c137b20();
  }
  ppuVar37 = param_3;
  func_0x00010c073bc0();
  if ((int)ppuVar37 == 0) {
    ppuStack_2c0 = (undefined **)0x0;
  }
  else {
    ppuStack_2c0 = param_3;
    func_0x00010c0fcb60();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar38 = param_3;
  func_0x00010c257880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080ee0();
  ppuVar39 = param_3;
  func_0x00010c257880();
  _objc_retainAutoreleasedReturnValue();
  ppuVar40 = ppuVar39;
  func_0x00010c23f840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar41 = param_3;
  func_0x00010c257880();
  _objc_retainAutoreleasedReturnValue();
  ppuVar42 = ppuVar41;
  func_0x00010c257cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar43 = param_3;
  func_0x00010c257880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf87a40();
  func_0x00010c01b8c0(puVar6);
  _objc_release(ppuVar43);
  _objc_release(ppuVar42);
  _objc_release(ppuVar41);
  _objc_release(ppuVar40);
  _objc_release(ppuVar39);
  _objc_release(ppuVar38);
  if ((int)ppuVar37 != 0) {
    _objc_release(ppuStack_2c0);
  }
  if ((int)ppuVar36 != 0) {
    _objc_release(ppuStack_2b8);
  }
  _objc_release(ppuVar35);
  _objc_release(ppuVar34);
  _objc_release(ppuVar33);
  _objc_release(ppuVar32);
  _objc_release(ppuVar31);
  _objc_release(ppuVar30);
  _objc_release(ppuVar29);
  _objc_release(ppuVar28);
  _objc_release(ppuVar27);
  _objc_release(ppuVar26);
  _objc_release(ppuVar25);
  _objc_release(ppuVar24);
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar3);
  _objc_release(ppuVar46);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(puVar7);
  _objc_release(ppuStack_218);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release(param_3);
  puVar44 = *(undefined1 **)(param_1 + 8);
  ppuVar1 = param_3;
  FUN_1057b8858(param_3,puVar44);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    _objc_initWeak(auStack_100,param_1);
    ppuVar2 = (undefined **)PTR_PTR_1126be538;
    FUN_1057c0de0(PTR_PTR_1126be538,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(param_1 + 8);
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_1057bc878;
    puStack_1b0 = &UNK_11084f688;
    _objc_retain();
    puStack_1f8 = puVar4;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_1057bc89c;
    puStack_1e0 = &UNK_1108b2718;
    ppuVar42 = &puStack_1f8;
    puVar44 = auStack_100;
    ppuStack_1a8 = ppuVar2;
    _objc_copyWeak(auStack_1d0,puVar44);
    _objc_retain(param_4);
    uStack_1d8 = param_4;
    func_0x00010c0f8500(uVar5);
    func_0x00010be0f9a0(param_1);
    _objc_release(uStack_1d8);
    _objc_destroyWeak(auStack_1d0);
    _objc_release(ppuStack_1a8);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_100);
  }
  else {
    ppuVar2 = param_3;
    func_0x00010c11cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c11cf60(ppuVar1);
    func_0x00010bf8c3c0(param_1);
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_release(uStack_1d8);
    _objc_destroyWeak(ppuVar42 + 5);
    _objc_release(ppuStack_1a8);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_100);
    _objc_release(ppuVar1);
    _objc_release(puVar6);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    __Unwind_Resume();
    func_0x00010c25ed40(puVar44);
    _objc_unsafeClaimAutoreleasedReturnValue();
    return;
  }
  return;
}



/* Entry: 1057bc878; end: 1057bc89b;  */

void FUN_1057bc878(long param_1,undefined8 param_2)

{
  func_0x00010c25ed40(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1057bc89c; end: 1057bc8fb;  */

void FUN_1057bc89c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beeb660(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057bc8fc; end: 1057bcb43; -[SCCommerceUnifiedCartCoordinator removeLineItem:storeId:variantId:completion:] */

void FUN_1057bc8fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1057bcb44;
  puStack_80 = &UNK_11084f6b8;
  _objc_retain(param_6);
  ppuVar2 = &puStack_98;
  uStack_78 = param_6;
  _objc_retainBlock();
  _objc_initWeak(auStack_a0,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1057bcb58;
  puStack_c8 = &UNK_1108b27c8;
  _objc_retain(param_4);
  uStack_c0 = param_4;
  _objc_retain(param_3);
  uStack_b8 = param_3;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_copyWeak(auStack_e8,auStack_a0);
  _objc_retain(ppuVar2);
  func_0x00010c0f8500(uVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057bcb44; end: 1057bcb57;  */

void FUN_1057bcb44(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057bcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1057bcb58; end: 1057bd1ff;  */

void FUN_1057bcb58(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 uStack_464;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  undefined **ppuStack_448;
  undefined4 uStack_440;
  undefined4 uStack_430;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  undefined1 uStack_3d1;
  undefined **ppuStack_3d0;
  undefined4 uStack_3c8;
  undefined2 uStack_3b8;
  byte bStack_3b6;
  byte bStack_3b5;
  undefined1 *puStack_398;
  undefined ***pppuStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined4 uStack_348;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined1 uStack_2e9;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined2 uStack_2d0;
  byte bStack_2ce;
  byte bStack_2cd;
  undefined1 *puStack_2b0;
  undefined ***pppuStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined4 uStack_260;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined1 *puStack_1c8;
  undefined ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126be530);
  if (param_2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_2);
  }
  puVar2 = &uStack_201;
  FUN_1057bf8e4();
  uStack_270 = 0xf;
  uStack_260 = 0x100;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  ppuStack_278 = &PTR_SUB_110862760;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  puStack_230 = (undefined *)0x0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  uStack_1e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_1f8 = 10;
  uStack_1e8 = 0x100;
  ppuStack_200 = &PTR_FUN_110862700;
  uStack_1b0 = 0;
  puStack_1b8 = (undefined *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  puVar3 = &uStack_2e9;
  uStack_248 = uVar7;
  puStack_1c8 = puVar2;
  pppuStack_1c0 = &ppuStack_278;
  FUN_1057bf76c();
  uStack_358 = 0xf;
  uStack_348 = 0x100;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  ppuStack_360 = &PTR_SUB_110862760;
  uStack_320 = 0;
  uStack_328 = 0;
  uStack_310 = 0;
  puStack_318 = (undefined *)0x0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  bStack_2ce = puVar3[0x1a];
  bStack_2cd = puVar3[0x1b];
  uStack_2e0 = 10;
  uStack_2d0 = 0x100;
  ppuStack_2e8 = &PTR_FUN_110862700;
  pppuStack_150 = &ppuStack_2e8;
  uStack_298 = 0;
  puStack_2a0 = (undefined *)0x0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  plStack_280 = (long *)0x0;
  bStack_176 = (byte)uStack_1e6 | bStack_2ce;
  bStack_175 = uStack_1e6._1_1_ & bStack_2cd;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_158 = &ppuStack_200;
  plStack_128 = (long *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_148 = 0;
  puVar2 = &uStack_3d1;
  uStack_330 = uVar7;
  puStack_2b0 = puVar3;
  pppuStack_2a8 = &ppuStack_360;
  FUN_1057bfbd4();
  uStack_440 = 0xf;
  uStack_430 = 0x100;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  ppuStack_448 = &PTR_SUB_110862760;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  plStack_3e8 = (long *)0x0;
  uStack_3f0 = 0;
  plStack_3e0 = (long *)0x0;
  bStack_3b6 = puVar2[0x1a];
  bStack_3b5 = puVar2[0x1b];
  uStack_3c8 = 10;
  uStack_3b8 = 0x100;
  ppuStack_3d0 = &PTR_FUN_110862700;
  pppuStack_e0 = &ppuStack_3d0;
  uStack_380 = 0;
  uStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  bStack_106 = bStack_176 | bStack_3b6;
  bStack_105 = bStack_175 & bStack_3b5;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  puStack_460 = (undefined8 *)0x0;
  puStack_458 = (undefined8 *)0x0;
  uStack_450 = 0;
  uStack_464 = 0;
  puVar4 = &uStack_b0;
  uStack_418 = uVar7;
  puStack_398 = puVar2;
  pppuStack_390 = &ppuStack_448;
  pppuStack_e8 = &ppuStack_190;
  func_0x0001000e77a0(puVar4,&ppuStack_120,&puStack_460,&uStack_464);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_460 != (undefined8 *)0x0) {
    puStack_458 = puStack_460;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_FUN_110862700;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_460 = &uStack_388;
  func_0x000100105004(&puStack_460);
  plVar1 = plStack_3e0;
  ppuStack_448 = &PTR_SUB_110862760;
  plStack_3e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3e8;
  plStack_3e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_460 = &uStack_400;
  func_0x000100105004(&puStack_460);
  _objc_release(uStack_418);
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_280;
  ppuStack_2e8 = &PTR_FUN_110862700;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_3d0 = &puStack_2a0;
  func_0x000100105004(&ppuStack_3d0);
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_SUB_110862760;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_3d0 = &puStack_318;
  func_0x000100105004(&ppuStack_3d0);
  _objc_release(uStack_330);
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_FUN_110862700;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_1b8;
  func_0x000100105004(&ppuStack_2e8);
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_SUB_110862760;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_230;
  func_0x000100105004(&ppuStack_2e8);
  _objc_release(uStack_248);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((param_1 != 0) &&
     (puVar5 = puVar4, func_0x00010bf529e0(), puVar6 = PTR_PTR_1126be538,
     puVar5 != (undefined8 *)0x0)) {
    puVar5 = puVar4;
    func_0x00010c0dfd40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_1057c27e4(puVar6,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0dfd40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2de40(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar7);
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 1057bd200; end: 1057bd25f;  */

void FUN_1057bd200(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beeb660(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057bd260; end: 1057bd49b; -[SCCommerceUnifiedCartCoordinator editLineItemQuantity:quantity:completion:] */

void FUN_1057bd260(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  if (param_4 == 0) {
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c2975a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf40(param_1);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  else {
    FUN_1057b8858(param_3,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1057bd49c;
    puStack_78 = &UNK_1108b27f8;
    _objc_retain(uVar1);
    uStack_70 = uVar1;
    _objc_retain(param_3);
    uStack_68 = param_3;
    lStack_60 = param_4;
    _objc_copyWeak(auStack_98,auStack_58);
    _objc_retain(param_5);
    func_0x00010c0f8500(uVar3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_98);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1057bd49c; end: 1057bd53b;  */

void FUN_1057bd49c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR_PTR_1126be538;
    FUN_1057c1b38();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      *(undefined8 *)(puVar1 + 0x48) = *(undefined8 *)(param_1 + 0x30);
    }
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057bd53c; end: 1057bd59b;  */

void FUN_1057bd53c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beeb660(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057bd59c; end: 1057bd603; -[SCCommerceUnifiedCartCoordinator _wrapCartMutationCompletionBlock:success:] */

void FUN_1057bd59c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bdcb6e0(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057bd604; end: 1057bd673; -[SCCommerceUnifiedCartCoordinator _announceCartDidUpdate] */

void FUN_1057bd604(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e890d8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057bd674; end: 1057bd737; -[SCCommerceUnifiedCartCoordinator _fetchArtifactsForLineItemIfNeeded:] */

void FUN_1057bd674(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0b260();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x0001057b65a0();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0746a0();
      _objc_release(uVar2);
      if ((uVar1 & 1) == 0) {
        func_0x00010be0f980(param_1,param_2,param_3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057bd738; end: 1057bd89f; -[SCCommerceUnifiedCartCoordinator _fetchArtifactsForLineItem:] */

void FUN_1057bd738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1057bd8a0;
  puStack_70 = &UNK_1108b2828;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010bfc27a0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}


